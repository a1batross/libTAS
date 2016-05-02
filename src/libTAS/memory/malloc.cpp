/*
    Copyright 2015-2016 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "malloc.h"
#include "../logging.h"
#include "MemoryManager.h"

void *malloc (size_t size) throw()
{
    debuglogstdio(LCF_MEMORY, "%s call with size %d", __func__, size);
    void* addr = memorymanager.allocate(size, MemoryManager::ALLOC_WRITE);
    debuglogstdio(LCF_MEMORY, "  returns addr %p", addr);
    return addr;
}

void *calloc (size_t nmemb, size_t size) throw()
{
    debuglogstdio(LCF_MEMORY, "%s call with size %d", __func__, size);
    void* addr = memorymanager.allocate(nmemb * size, MemoryManager::ALLOC_WRITE | MemoryManager::ALLOC_ZEROINIT);
    debuglogstdio(LCF_MEMORY, "  returns addr %p", addr);
    return addr;
}

void *realloc (void *ptr, size_t size) throw()
{
    debuglogstdio(LCF_MEMORY, "%s call with ptr %p and size %d", __func__, ptr, size);
    void* addr = memorymanager.reallocate(ptr, size, MemoryManager::ALLOC_WRITE);
    debuglogstdio(LCF_MEMORY, "  returns addr %p", addr);
    return addr;
}

void free (void *ptr) throw()
{
    debuglogstdio(LCF_MEMORY, "%s call with ptr %p", __func__, ptr);
    return memorymanager.deallocate(ptr);
}
