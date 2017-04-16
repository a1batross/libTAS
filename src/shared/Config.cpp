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

#include "Config.h"

Config config = {
    hud_framecount : true,
    hud_inputs : true,
    prevent_savefiles : true,
    audio_bitdepth : 16,
    audio_channels : 2,
    audio_frequency : 44100,
    video_codec : AV_CODEC_ID_H264,
    video_bitrate : 400000,
    audio_codec : AV_CODEC_ID_VORBIS,
    audio_bitrate : 128000
};
