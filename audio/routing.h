/*
 * Copyright (C) 2013 The CyanogenMod Project
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

#ifndef _ROUTING_H_
#define _ROUTING_H_

enum {
    OUT_DEVICE_SPEAKER,
    OUT_DEVICE_EARPIECE,
    OUT_DEVICE_HEADSET,
    OUT_DEVICE_HEADPHONES,
    OUT_DEVICE_BT_SCO,
    OUT_DEVICE_BT_SCO_HEADSET_OUT,
    OUT_DEVICE_BT_SCO_CARKIT,
    OUT_DEVICE_SPEAKER_AND_HEADSET,
    OUT_DEVICE_SPEAKER_AND_EARPIECE,
    OUT_DEVICE_TAB_SIZE,           /* number of rows in route_configs[][] */
    OUT_DEVICE_NONE,
    OUT_DEVICE_CNT
};

enum {
    IN_SOURCE_MIC,
    IN_SOURCE_CAMCORDER,
    IN_SOURCE_VOICE_RECOGNITION,
    IN_SOURCE_VOICE_CALL,
    IN_SOURCE_VOICE_CALL_WB,
    IN_SOURCE_TAB_SIZE,            /* number of lines in route_configs[][] */
    IN_SOURCE_NONE,
    IN_SOURCE_CNT
};

struct route_config {
    const char * const output_route;
    const char * const input_route;
};

const struct route_config voice_speaker = {
    "voice-speaker-nb",
    "voice-speaker-mic-nb"
};

const struct route_config voice_speaker_wb = {
    "voice-speaker-wb",
    "voice-speaker-mic-wb"
};

const struct route_config voice_earpiece = {
    "voice-earpiece-nb",
    "voice-earpiece-mic-nb"
};

const struct route_config voice_earpiece_wb = {
    "voice-earpiece-wb",
    "voice-earpiece-mic-wb"
};

const struct route_config voice_headphones = {
    "voice-headphones-nb",
    "voice-earpiece-mic-nb"
};

const struct route_config voice_headphones_wb = {
    "voice-headphones-wb",
    "voice-earpiece-mic-wb"
};

const struct route_config voice_headset = {
    "voice-headphones-nb",
    "voice-headset-mic"
};

const struct route_config voice_headset_wb = {
    "voice-headphones-wb",
    "voice-headset-mic"
};

const struct route_config voice_bt_sco = {
    "bt-sco-headset-nb",
    "voice-bt-sco-mic",
};

const struct route_config voice_bt_sco_wb = {
    "bt-sco-headset-wb",
    "voice-bt-sco-mic",
};

const struct route_config voice_bt_sco_headset_out = {
    "bt-sco-headset-nb",
    "voice-bt-sco-mic",
};

const struct route_config voice_bt_sco_headset_out_wb = {
    "bt-sco-headset-wb",
    "voice-bt-sco-mic",
};

const struct route_config media_speaker = {
    "speaker",
    "speaker-mic"
};

const struct route_config media_earpiece = {
    "earpiece",
    "earpiece-mic"
};

const struct route_config media_headphones = {
    "headphones",
    "earpiece-mic"
};

const struct route_config media_headset = {
    "headphones",
    "headset-mic"
};

const struct route_config media_bt_sco = {
    "bt-sco-headset",
    "bt-sco-mic",
};

const struct route_config media_bt_sco_headset_out = {
    "bt-sco-headset",
    "bt-sco-mic",
};

const struct route_config camcorder_speaker = {
    "speaker",
    "camcorder-mic"
};

const struct route_config camcorder_headphones = {
    "headphones",
    "camcorder-mic"
};

const struct route_config camcorder_headset = {
    "headphones",
    "camcorder-mic"
};

const struct route_config voice_rec_speaker = {
    "speaker",
    "voice-rec-mic"
};

const struct route_config voice_rec_headphones = {
    "headphones",
    "voice-rec-mic"
};

const struct route_config voice_rec_headset = {
    "headphones",
    "voice-rec-headset-mic"
};

const struct route_config speaker_and_headphones = {
    "speaker-and-headphones",
    "earpiece-mic"
};

const struct route_config bt_sco_carkit = {
    "bt-sco-headset",
    "bt-sco-mic",
};

const struct route_config none = {
    "none",
    "none"
};

const struct route_config * const route_configs[IN_SOURCE_TAB_SIZE]
                                               [OUT_DEVICE_TAB_SIZE] = {
    {   /* IN_SOURCE_MIC */
        &media_speaker,             /* OUT_DEVICE_SPEAKER */
        &media_earpiece,            /* OUT_DEVICE_EARPIECE */
        &media_headset,             /* OUT_DEVICE_HEADSET */
        &media_headphones,          /* OUT_DEVICE_HEADPHONES */
        &media_bt_sco,              /* OUT_DEVICE_BT_SCO */
        &media_bt_sco_headset_out,  /* OUT_DEVICE_BT_SCO_HEADSET_OUT */
        &bt_sco_carkit,             /* OUT_DEVICE_BT_SCO_CARKIT */
        &speaker_and_headphones,    /* OUT_DEVICE_SPEAKER_AND_HEADSET */
        &media_speaker              /* OUT_DEVICE_SPEAKER_AND_EARPIECE */
    },
    {   /* IN_SOURCE_CAMCORDER */
        &camcorder_speaker,         /* OUT_DEVICE_SPEAKER */
        &none,                      /* OUT_DEVICE_EARPIECE */
        &camcorder_headset,         /* OUT_DEVICE_HEADSET */
        &camcorder_headphones,      /* OUT_DEVICE_HEADPHONES */
        &media_bt_sco,              /* OUT_DEVICE_BT_SCO */
        &media_bt_sco_headset_out,  /* OUT_DEVICE_BT_SCO_HEADSET_OUT */
        &bt_sco_carkit,             /* OUT_DEVICE_BT_SCO_CARKIT */
        &speaker_and_headphones,    /* OUT_DEVICE_SPEAKER_AND_HEADSET */
        &camcorder_speaker          /* OUT_DEVICE_SPEAKER_AND_EARPIECE */
    },
    {   /* IN_SOURCE_VOICE_RECOGNITION */
        &voice_rec_speaker,         /* OUT_DEVICE_SPEAKER */
        &none,                      /* OUT_DEVICE_EARPIECE */
        &voice_rec_headset,         /* OUT_DEVICE_HEADSET */
        &voice_rec_headphones,      /* OUT_DEVICE_HEADPHONES */
        &media_bt_sco,              /* OUT_DEVICE_BT_SCO */
        &media_bt_sco_headset_out,  /* OUT_DEVICE_BT_SCO_HEADSET_OUT */
        &bt_sco_carkit,             /* OUT_DEVICE_BT_SCO_CARKIT */
        &speaker_and_headphones,    /* OUT_DEVICE_SPEAKER_AND_HEADSET */
        &voice_rec_speaker          /* OUT_DEVICE_SPEAKER_AND_EARPIECE */
    },
    {   /* IN_SOURCE_VOICE_CALL */
        &voice_speaker,             /* OUT_DEVICE_SPEAKER */
        &voice_earpiece,            /* OUT_DEVICE_EARPIECE */
        &voice_headset,             /* OUT_DEVICE_HEADSET */
        &voice_headphones,          /* OUT_DEVICE_HEADPHONES */
        &voice_bt_sco,              /* OUT_DEVICE_BT_SCO */
        &voice_bt_sco_headset_out,  /* OUT_DEVICE_BT_SCO_HEADSET_OUT */
        &bt_sco_carkit,             /* OUT_DEVICE_BT_SCO_CARKIT */
        &voice_headphones,          /* OUT_DEVICE_SPEAKER_AND_HEADSET */
        &voice_earpiece             /* OUT_DEVICE_SPEAKER_AND_EARPIECE */
    },
    {   /* IN_SOURCE_VOICE_CALL_WB */
        &voice_speaker_wb,          /* OUT_DEVICE_SPEAKER */
        &voice_earpiece_wb,         /* OUT_DEVICE_EARPIECE */
        &voice_headset_wb,          /* OUT_DEVICE_HEADSET */
        &voice_headphones_wb,       /* OUT_DEVICE_HEADPHONES */
        &voice_bt_sco_wb,           /* OUT_DEVICE_BT_SCO */
        &voice_bt_sco_headset_out_wb, /* OUT_DEVICE_BT_SCO_HEADSET_OUT */
        &bt_sco_carkit,             /* OUT_DEVICE_BT_SCO_CARKIT */
        &voice_headphones_wb,       /* OUT_DEVICE_SPEAKER_AND_HEADSET */
        &voice_earpiece_wb          /* OUT_DEVICE_SPEAKER_AND_EARPIECE */
    },
};

#endif
