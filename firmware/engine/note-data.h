/*
 * pico-synth: A Raspberry Pi Pico based digital synthesizer.
 *
 * SPDX-FileCopyrightText: 2021-2022 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 * SPDX-License-Identifier: BSD-3-Clause
 */

// this file was generated by generate.py. do not edit!

#pragma once

#include <pico-synth/engine.h>

#define notes_last 127

static const ps_engine_note_t notes[] = {
    {
        .id   = 0,
        .name = "C-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x1653,
        },
    },
    {
        .id   = 1,
        .name = "C#-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x17a7,
        },
    },
    {
        .id   = 2,
        .name = "D-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x190f,
        },
    },
    {
        .id   = 3,
        .name = "D#-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x1a8c,
        },
    },
    {
        .id   = 4,
        .name = "E-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x1c20,
        },
    },
    {
        .id   = 5,
        .name = "F-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x1dcd,
        },
    },
    {
        .id   = 6,
        .name = "F#-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x1f92,
        },
    },
    {
        .id   = 7,
        .name = "G-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x2173,
        },
    },
    {
        .id   = 8,
        .name = "G#-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x2370,
        },
    },
    {
        .id   = 9,
        .name = "A-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x258b,
        },
    },
    {
        .id   = 10,
        .name = "A#-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x27c7,
        },
    },
    {
        .id   = 11,
        .name = "B-1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x2a25,
        },
    },
    {
        .id   = 12,
        .name = "C0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x2ca6,
        },
    },
    {
        .id   = 13,
        .name = "C#0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x2f4e,
        },
    },
    {
        .id   = 14,
        .name = "D0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x321e,
        },
    },
    {
        .id   = 15,
        .name = "D#0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x3519,
        },
    },
    {
        .id   = 16,
        .name = "E0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x3841,
        },
    },
    {
        .id   = 17,
        .name = "F0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x3b9a,
        },
    },
    {
        .id   = 18,
        .name = "F#0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x3f25,
        },
    },
    {
        .id   = 19,
        .name = "G0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x42e6,
        },
    },
    {
        .id   = 20,
        .name = "G#0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x46e0,
        },
    },
    {
        .id   = 21,
        .name = "A0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x4b17,
        },
    },
    {
        .id   = 22,
        .name = "A#0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x4f8f,
        },
    },
    {
        .id   = 23,
        .name = "B0",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x544a,
        },
    },
    {
        .id   = 24,
        .name = "C1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x594d,
        },
    },
    {
        .id   = 25,
        .name = "C#1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x5e9c,
        },
    },
    {
        .id   = 26,
        .name = "D1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x643c,
        },
    },
    {
        .id   = 27,
        .name = "D#1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x6a32,
        },
    },
    {
        .id   = 28,
        .name = "E1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x7083,
        },
    },
    {
        .id   = 29,
        .name = "F1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x7734,
        },
    },
    {
        .id   = 30,
        .name = "F#1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x7e4a,
        },
    },
    {
        .id   = 31,
        .name = "G1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x85cd,
        },
    },
    {
        .id   = 32,
        .name = "G#1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x8dc1,
        },
    },
    {
        .id   = 33,
        .name = "A1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x962f,
        },
    },
    {
        .id   = 34,
        .name = "A#1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0x9f1e,
        },
    },
    {
        .id   = 35,
        .name = "B1",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xa894,
        },
    },
    {
        .id   = 36,
        .name = "C2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xb29a,
        },
    },
    {
        .id   = 37,
        .name = "C#2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xbd39,
        },
    },
    {
        .id   = 38,
        .name = "D2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xc879,
        },
    },
    {
        .id   = 39,
        .name = "D#2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xd465,
        },
    },
    {
        .id   = 40,
        .name = "E2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xe106,
        },
    },
    {
        .id   = 41,
        .name = "F2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xee68,
        },
    },
    {
        .id   = 42,
        .name = "F#2",
        .step = {
            .pint  = 0x0000,
            .pfrac = 0xfc95,
        },
    },
    {
        .id   = 43,
        .name = "G2",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x0b9a,
        },
    },
    {
        .id   = 44,
        .name = "G#2",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x1b83,
        },
    },
    {
        .id   = 45,
        .name = "A2",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x2c5f,
        },
    },
    {
        .id   = 46,
        .name = "A#2",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x3e3c,
        },
    },
    {
        .id   = 47,
        .name = "B2",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x5128,
        },
    },
    {
        .id   = 48,
        .name = "C3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x6534,
        },
    },
    {
        .id   = 49,
        .name = "C#3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x7a72,
        },
    },
    {
        .id   = 50,
        .name = "D3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0x90f3,
        },
    },
    {
        .id   = 51,
        .name = "D#3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0xa8ca,
        },
    },
    {
        .id   = 52,
        .name = "E3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0xc20d,
        },
    },
    {
        .id   = 53,
        .name = "F3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0xdcd0,
        },
    },
    {
        .id   = 54,
        .name = "F#3",
        .step = {
            .pint  = 0x0001,
            .pfrac = 0xf92a,
        },
    },
    {
        .id   = 55,
        .name = "G3",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0x1734,
        },
    },
    {
        .id   = 56,
        .name = "G#3",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0x3707,
        },
    },
    {
        .id   = 57,
        .name = "A3",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0x58bf,
        },
    },
    {
        .id   = 58,
        .name = "A#3",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0x7c78,
        },
    },
    {
        .id   = 59,
        .name = "B3",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0xa250,
        },
    },
    {
        .id   = 60,
        .name = "C4",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0xca69,
        },
    },
    {
        .id   = 61,
        .name = "C#4",
        .step = {
            .pint  = 0x0002,
            .pfrac = 0xf4e4,
        },
    },
    {
        .id   = 62,
        .name = "D4",
        .step = {
            .pint  = 0x0003,
            .pfrac = 0x21e6,
        },
    },
    {
        .id   = 63,
        .name = "D#4",
        .step = {
            .pint  = 0x0003,
            .pfrac = 0x5195,
        },
    },
    {
        .id   = 64,
        .name = "E4",
        .step = {
            .pint  = 0x0003,
            .pfrac = 0x841a,
        },
    },
    {
        .id   = 65,
        .name = "F4",
        .step = {
            .pint  = 0x0003,
            .pfrac = 0xb9a0,
        },
    },
    {
        .id   = 66,
        .name = "F#4",
        .step = {
            .pint  = 0x0003,
            .pfrac = 0xf254,
        },
    },
    {
        .id   = 67,
        .name = "G4",
        .step = {
            .pint  = 0x0004,
            .pfrac = 0x2e68,
        },
    },
    {
        .id   = 68,
        .name = "G#4",
        .step = {
            .pint  = 0x0004,
            .pfrac = 0x6e0f,
        },
    },
    {
        .id   = 69,
        .name = "A4",
        .step = {
            .pint  = 0x0004,
            .pfrac = 0xb17e,
        },
    },
    {
        .id   = 70,
        .name = "A#4",
        .step = {
            .pint  = 0x0004,
            .pfrac = 0xf8f0,
        },
    },
    {
        .id   = 71,
        .name = "B4",
        .step = {
            .pint  = 0x0005,
            .pfrac = 0x44a1,
        },
    },
    {
        .id   = 72,
        .name = "C5",
        .step = {
            .pint  = 0x0005,
            .pfrac = 0x94d3,
        },
    },
    {
        .id   = 73,
        .name = "C#5",
        .step = {
            .pint  = 0x0005,
            .pfrac = 0xe9c9,
        },
    },
    {
        .id   = 74,
        .name = "D5",
        .step = {
            .pint  = 0x0006,
            .pfrac = 0x43cd,
        },
    },
    {
        .id   = 75,
        .name = "D#5",
        .step = {
            .pint  = 0x0006,
            .pfrac = 0xa32b,
        },
    },
    {
        .id   = 76,
        .name = "E5",
        .step = {
            .pint  = 0x0007,
            .pfrac = 0x0834,
        },
    },
    {
        .id   = 77,
        .name = "F5",
        .step = {
            .pint  = 0x0007,
            .pfrac = 0x7340,
        },
    },
    {
        .id   = 78,
        .name = "F#5",
        .step = {
            .pint  = 0x0007,
            .pfrac = 0xe4a9,
        },
    },
    {
        .id   = 79,
        .name = "G5",
        .step = {
            .pint  = 0x0008,
            .pfrac = 0x5cd1,
        },
    },
    {
        .id   = 80,
        .name = "G#5",
        .step = {
            .pint  = 0x0008,
            .pfrac = 0xdc1e,
        },
    },
    {
        .id   = 81,
        .name = "A5",
        .step = {
            .pint  = 0x0009,
            .pfrac = 0x62fc,
        },
    },
    {
        .id   = 82,
        .name = "A#5",
        .step = {
            .pint  = 0x0009,
            .pfrac = 0xf1e0,
        },
    },
    {
        .id   = 83,
        .name = "B5",
        .step = {
            .pint  = 0x000a,
            .pfrac = 0x8942,
        },
    },
    {
        .id   = 84,
        .name = "C6",
        .step = {
            .pint  = 0x000b,
            .pfrac = 0x29a6,
        },
    },
    {
        .id   = 85,
        .name = "C#6",
        .step = {
            .pint  = 0x000b,
            .pfrac = 0xd392,
        },
    },
    {
        .id   = 86,
        .name = "D6",
        .step = {
            .pint  = 0x000c,
            .pfrac = 0x879a,
        },
    },
    {
        .id   = 87,
        .name = "D#6",
        .step = {
            .pint  = 0x000d,
            .pfrac = 0x4656,
        },
    },
    {
        .id   = 88,
        .name = "E6",
        .step = {
            .pint  = 0x000e,
            .pfrac = 0x1069,
        },
    },
    {
        .id   = 89,
        .name = "F6",
        .step = {
            .pint  = 0x000e,
            .pfrac = 0xe680,
        },
    },
    {
        .id   = 90,
        .name = "F#6",
        .step = {
            .pint  = 0x000f,
            .pfrac = 0xc953,
        },
    },
    {
        .id   = 91,
        .name = "G6",
        .step = {
            .pint  = 0x0010,
            .pfrac = 0xb9a2,
        },
    },
    {
        .id   = 92,
        .name = "G#6",
        .step = {
            .pint  = 0x0011,
            .pfrac = 0xb83c,
        },
    },
    {
        .id   = 93,
        .name = "A6",
        .step = {
            .pint  = 0x0012,
            .pfrac = 0xc5f9,
        },
    },
    {
        .id   = 94,
        .name = "A#6",
        .step = {
            .pint  = 0x0013,
            .pfrac = 0xe3c0,
        },
    },
    {
        .id   = 95,
        .name = "B6",
        .step = {
            .pint  = 0x0015,
            .pfrac = 0x1285,
        },
    },
    {
        .id   = 96,
        .name = "C7",
        .step = {
            .pint  = 0x0016,
            .pfrac = 0x534c,
        },
    },
    {
        .id   = 97,
        .name = "C#7",
        .step = {
            .pint  = 0x0017,
            .pfrac = 0xa725,
        },
    },
    {
        .id   = 98,
        .name = "D7",
        .step = {
            .pint  = 0x0019,
            .pfrac = 0x0f34,
        },
    },
    {
        .id   = 99,
        .name = "D#7",
        .step = {
            .pint  = 0x001a,
            .pfrac = 0x8cac,
        },
    },
    {
        .id   = 100,
        .name = "E7",
        .step = {
            .pint  = 0x001c,
            .pfrac = 0x20d2,
        },
    },
    {
        .id   = 101,
        .name = "F7",
        .step = {
            .pint  = 0x001d,
            .pfrac = 0xcd01,
        },
    },
    {
        .id   = 102,
        .name = "F#7",
        .step = {
            .pint  = 0x001f,
            .pfrac = 0x92a6,
        },
    },
    {
        .id   = 103,
        .name = "G7",
        .step = {
            .pint  = 0x0021,
            .pfrac = 0x7345,
        },
    },
    {
        .id   = 104,
        .name = "G#7",
        .step = {
            .pint  = 0x0023,
            .pfrac = 0x7078,
        },
    },
    {
        .id   = 105,
        .name = "A7",
        .step = {
            .pint  = 0x0025,
            .pfrac = 0x8bf2,
        },
    },
    {
        .id   = 106,
        .name = "A#7",
        .step = {
            .pint  = 0x0027,
            .pfrac = 0xc780,
        },
    },
    {
        .id   = 107,
        .name = "B7",
        .step = {
            .pint  = 0x002a,
            .pfrac = 0x250b,
        },
    },
    {
        .id   = 108,
        .name = "C8",
        .step = {
            .pint  = 0x002c,
            .pfrac = 0xa698,
        },
    },
    {
        .id   = 109,
        .name = "C#8",
        .step = {
            .pint  = 0x002f,
            .pfrac = 0x4e4b,
        },
    },
    {
        .id   = 110,
        .name = "D8",
        .step = {
            .pint  = 0x0032,
            .pfrac = 0x1e68,
        },
    },
    {
        .id   = 111,
        .name = "D#8",
        .step = {
            .pint  = 0x0035,
            .pfrac = 0x1958,
        },
    },
    {
        .id   = 112,
        .name = "E8",
        .step = {
            .pint  = 0x0038,
            .pfrac = 0x41a5,
        },
    },
    {
        .id   = 113,
        .name = "F8",
        .step = {
            .pint  = 0x003b,
            .pfrac = 0x9a03,
        },
    },
    {
        .id   = 114,
        .name = "F#8",
        .step = {
            .pint  = 0x003f,
            .pfrac = 0x254d,
        },
    },
    {
        .id   = 115,
        .name = "G8",
        .step = {
            .pint  = 0x0042,
            .pfrac = 0xe68a,
        },
    },
    {
        .id   = 116,
        .name = "G#8",
        .step = {
            .pint  = 0x0046,
            .pfrac = 0xe0f0,
        },
    },
    {
        .id   = 117,
        .name = "A8",
        .step = {
            .pint  = 0x004b,
            .pfrac = 0x17e4,
        },
    },
    {
        .id   = 118,
        .name = "A#8",
        .step = {
            .pint  = 0x004f,
            .pfrac = 0x8f01,
        },
    },
    {
        .id   = 119,
        .name = "B8",
        .step = {
            .pint  = 0x0054,
            .pfrac = 0x4a17,
        },
    },
    {
        .id   = 120,
        .name = "C9",
        .step = {
            .pint  = 0x0059,
            .pfrac = 0x4d30,
        },
    },
    {
        .id   = 121,
        .name = "C#9",
        .step = {
            .pint  = 0x005e,
            .pfrac = 0x9c96,
        },
    },
    {
        .id   = 122,
        .name = "D9",
        .step = {
            .pint  = 0x0064,
            .pfrac = 0x3cd1,
        },
    },
    {
        .id   = 123,
        .name = "D#9",
        .step = {
            .pint  = 0x006a,
            .pfrac = 0x32b0,
        },
    },
    {
        .id   = 124,
        .name = "E9",
        .step = {
            .pint  = 0x0070,
            .pfrac = 0x834b,
        },
    },
    {
        .id   = 125,
        .name = "F9",
        .step = {
            .pint  = 0x0077,
            .pfrac = 0x3407,
        },
    },
    {
        .id   = 126,
        .name = "F#9",
        .step = {
            .pint  = 0x007e,
            .pfrac = 0x4a9b,
        },
    },
    {
        .id   = 127,
        .name = "G9",
        .step = {
            .pint  = 0x0085,
            .pfrac = 0xcd15,
        },
    },
};
