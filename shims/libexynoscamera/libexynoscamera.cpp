/*
 * Copyright (C) 2017 TeamNexus
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "libexynoscamera.h"

namespace android
{

const char CameraParameters::PIXEL_FORMAT_YUV420SP_NV21[] = "nv21";
const char CameraParameters::KEY_CITYID[] = "cityid";
const char CameraParameters::KEY_WEATHER[] = "weather";
const char CameraParameters::ISO_AUTO[] = "auto";
const char CameraParameters::ISO_100[] = "ISO100";
const char CameraParameters::ISO_200[] = "ISO200";
const char CameraParameters::ISO_400[] = "ISO400";
const char CameraParameters::ISO_800[] = "ISO800";
	
int CameraParameters::getInt64(const char *key __attribute__ ((unused))) const
{
    return -1;
}

extern "C" {
    void acquire_dvfs_lock(void) { }
    void release_dvfs_lock(void) { }
}
	
};
