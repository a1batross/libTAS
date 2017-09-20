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

#ifndef LIBTAS_GAMEINFO_H_INCLUDED
#define LIBTAS_GAMEINFO_H_INCLUDED

#include <string>

/*
 * Structure that holds information about what the game uses for its engine,
 * rendering, input devices, audio, etc, so that it can be collected and
 * displayed in the UI.
 */
struct GameInfo {
    bool tosend = false;

    /* Recording status */
    enum Flag {
        UNKNOWN = 0,
        SDL1 = 0x01,
        SDL2 = 0x02,
        OPENGL = 0x04,
        NO_SDL = 0x08,
        OPENAL = 0x10,
        PULSEAUDIO = 0x20
    };

    int video = UNKNOWN;
    int audio = UNKNOWN;
    int joystick = UNKNOWN;
};

#endif