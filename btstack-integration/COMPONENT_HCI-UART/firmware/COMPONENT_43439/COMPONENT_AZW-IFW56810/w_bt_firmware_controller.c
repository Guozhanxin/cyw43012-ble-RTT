/*
 * $ Copyright (C) 2020-2021 Infineon Technologies AG $
 */

#include <stdint.h>

/* labelling: appname-(chipname)(stepping)-frequency-(headset GIT SHA)-(generating SDK version)-
 *                                                                            Wiced-release.hcd */
const char brcm_patch_version[] = "CYW4343A2_001.003.016.0032.0000_Generic_UART_26MHz_wlbga_BU_AZUREWAVE_dl_signed";
const uint8_t brcm_patchram_format = 0x01;
/* Configuration Data Records (Write_RAM) */
#ifndef FW_DATBLOCK_SEPARATE_FROM_APPLICATION
const uint8_t brcm_patchram_buf[] =
{
    0x4C, 0xFC, 0x14, 0x00, 0xE0, 0x21, 0x00, 0x42, 0x52, 0x43, 0x4D, 0x63, 0x66, 0x67, 0x53, 0x00,
    0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x10, 0xE0, 0x21, 0x00, 0x01, 0x01,
    0x04, 0x90, 0x65, 0x00, 0x00, 0x00, 0x03, 0x06, 0xAC, 0x1F, 0x2A, 0x0A, 0x43, 0x43, 0x4C, 0xFC,
    0x14, 0x20, 0xE0, 0x21, 0x00, 0x00, 0x01, 0x1C, 0x00, 0xF0, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x30, 0xE0, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x4C, 0xFC, 0x06, 0x40,
    0xE0, 0x21, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x00, 0xF0, 0x21, 0x00, 0x42, 0x52, 0x43, 0x4D,
    0x63, 0x66, 0x67, 0x44, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x0C, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x10,
    0xF0, 0x21, 0x00, 0x03, 0x03, 0x2A, 0x43, 0x59, 0x57, 0x34, 0x33, 0x34, 0x33, 0x39, 0x20, 0x55,
    0x41, 0x52, 0x54, 0x4C, 0xFC, 0x14, 0x20, 0xF0, 0x21, 0x00, 0x20, 0x32, 0x36, 0x20, 0x4D, 0x48,
    0x7A, 0x20, 0x77, 0x6C, 0x62, 0x67, 0x61, 0x5F, 0x42, 0x55, 0x4C, 0xFC, 0x14, 0x30, 0xF0, 0x21,
    0x00, 0x20, 0x41, 0x5A, 0x57, 0x2D, 0x47, 0x65, 0x6E, 0x65, 0x72, 0x69, 0x63, 0x00, 0x16, 0x03,
    0x02, 0x4C, 0xFC, 0x14, 0x40, 0xF0, 0x21, 0x00, 0x00, 0x00, 0x02, 0x01, 0xA4, 0x06, 0x08, 0x01,
    0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xF0, 0x21, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x32, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x62, 0x08, 0x00, 0x00, 0x70, 0x00, 0x4C,
    0xFC, 0x14, 0x60, 0xF0, 0x21, 0x00, 0x64, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0xAC, 0x00, 0x32, 0x00, 0xFF, 0xFF, 0x4C, 0xFC, 0x14, 0x70, 0xF0, 0x21, 0x00, 0xFF, 0x01, 0x00,
    0x00, 0x2F, 0x00, 0x24, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x62, 0x00, 0x4C, 0xFC, 0x14,
    0x80, 0xF0, 0x21, 0x00, 0x00, 0x00, 0x28, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x00, 0x2C, 0x01, 0x4C, 0xFC, 0x14, 0x90, 0xF0, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00,
    0x00, 0x17, 0x00, 0x00, 0x00, 0x34, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0xA0, 0xF0,
    0x21, 0x00, 0x00, 0x00, 0xA7, 0x00, 0x00, 0x00, 0x38, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0x62, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xF0, 0x21, 0x00, 0x00, 0x00, 0x3C, 0x01, 0x60, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x40, 0x01, 0x4C, 0xFC, 0x14, 0xC0, 0xF0, 0x21, 0x00,
    0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x48, 0x01, 0x60, 0x00, 0xFF, 0x00,
    0x4C, 0xFC, 0x14, 0xD0, 0xF0, 0x21, 0x00, 0x00, 0x00, 0xA7, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x60,
    0x00, 0xFF, 0x00, 0x00, 0x00, 0x38, 0x00, 0x4C, 0xFC, 0x14, 0xE0, 0xF0, 0x21, 0x00, 0x00, 0x00,
    0xC8, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0xD0, 0x01, 0x4C, 0xFC,
    0x14, 0xF0, 0xF0, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xD8,
    0x01, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0x00, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xDC, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x5B, 0x00, 0x4C, 0xFC, 0x14, 0x10,
    0xF1, 0x21, 0x00, 0x00, 0x00, 0xE4, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00,
    0x00, 0x80, 0x02, 0x4C, 0xFC, 0x14, 0x20, 0xF1, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0x34, 0x00, 0x00, 0x00, 0x80, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0x30, 0xF1, 0x21,
    0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x84, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x4C, 0xFC, 0x14, 0x40, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x98, 0x00, 0x41, 0x00, 0xFF, 0xFF,
    0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xF1, 0x21, 0x00, 0x41,
    0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF3, 0x35, 0x00, 0x00, 0xA0, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x4C,
    0xFC, 0x14, 0x60, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x41, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x3C, 0x0B, 0x4C, 0xFC, 0x14, 0x70, 0xF1, 0x21, 0x00, 0x00, 0x00, 0xA8,
    0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0xAC, 0x00, 0x4C, 0xFC, 0x14,
    0x80, 0xF1, 0x21, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x88, 0x31, 0x00, 0x00, 0x88, 0x07,
    0x41, 0x00, 0xFF, 0xFF, 0x4C, 0xFC, 0x14, 0x90, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x2C, 0x92, 0x00,
    0x00, 0x8C, 0x07, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x46, 0x4C, 0xFC, 0x14, 0xA0, 0xF1,
    0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00,
    0x70, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xF1, 0x21, 0x00, 0x64, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x9E,
    0x00, 0x00, 0x00, 0x48, 0x01, 0x41, 0x00, 0xFF, 0xFF, 0x4C, 0xFC, 0x14, 0xC0, 0xF1, 0x21, 0x00,
    0x00, 0x00, 0x28, 0x05, 0x00, 0x00, 0x58, 0x03, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x28, 0x05,
    0x4C, 0xFC, 0x14, 0xD0, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x5C, 0x04, 0x41, 0x00, 0xFF, 0xFF, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x88, 0x04, 0x4C, 0xFC, 0x14, 0xE0, 0xF1, 0x21, 0x00, 0x41, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xC0, 0x04, 0x41, 0x00, 0xFF, 0xFF, 0x4C, 0xFC,
    0x14, 0xF0, 0xF1, 0x21, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x1C, 0x06, 0x41, 0x00, 0xFF,
    0xFF, 0x00, 0x00, 0x1C, 0x40, 0x4C, 0xFC, 0x14, 0x00, 0xF2, 0x21, 0x00, 0x00, 0x00, 0x20, 0x06,
    0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x37, 0x40, 0x00, 0x00, 0x24, 0x06, 0x4C, 0xFC, 0x14, 0x10,
    0xF2, 0x21, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1C, 0x40, 0x00, 0x00, 0x28, 0x06, 0x41,
    0x00, 0xFF, 0xFF, 0x4C, 0xFC, 0x14, 0x20, 0xF2, 0x21, 0x00, 0x00, 0x00, 0xC3, 0x43, 0x00, 0x00,
    0x2C, 0x06, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x2C, 0x40, 0x4C, 0xFC, 0x14, 0x30, 0xF2, 0x21,
    0x00, 0x00, 0x00, 0x68, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x78,
    0x03, 0x4C, 0xFC, 0x14, 0x40, 0xF2, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xB0, 0x00,
    0x00, 0x00, 0x20, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xF2, 0x21, 0x00, 0x00,
    0x00, 0x17, 0x00, 0x00, 0x00, 0x44, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x09, 0x00, 0x4C,
    0xFC, 0x14, 0x60, 0xF2, 0x21, 0x00, 0x00, 0x00, 0x58, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00,
    0x66, 0x00, 0x00, 0x00, 0x90, 0x06, 0x4C, 0xFC, 0x14, 0x70, 0xF2, 0x21, 0x00, 0x60, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0xAA, 0x00, 0x00, 0x00, 0x94, 0x06, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14,
    0x80, 0xF2, 0x21, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x9C, 0x06, 0x60, 0x00, 0xFF, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x4C, 0xFC, 0x14, 0x90, 0xF2, 0x21, 0x00, 0x00, 0x00, 0xD8, 0x06, 0x60,
    0x00, 0xFF, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xD8, 0x04, 0x4C, 0xFC, 0x14, 0xA0, 0xF2,
    0x21, 0x00, 0x41, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x28, 0x85, 0x00, 0x00, 0x0C, 0x04, 0x60, 0x00,
    0xFF, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xF2, 0x21, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x10,
    0x04, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x4C, 0xFC, 0x14, 0xC0, 0xF2, 0x21, 0x00,
    0x00, 0x00, 0x80, 0x05, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x4C, 0xFC, 0x14, 0xD0, 0xF2, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x08, 0x07, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0xE0, 0xF2, 0x21, 0x00, 0x00, 0x00,
    0x0B, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x32, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0x00, 0x10, 0x4C, 0xFC,
    0x14, 0xF0, 0xF2, 0x21, 0x00, 0x11, 0x01, 0x78, 0x00, 0x32, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xB9,
    0xB8, 0xB8, 0xB8, 0x95, 0x38, 0x4C, 0xFC, 0x14, 0x00, 0xF3, 0x21, 0x00, 0x20, 0x00, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x4C, 0xFC, 0x14, 0x10,
    0xF3, 0x21, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6C, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00,
    0x00, 0x11, 0x00, 0x4C, 0xFC, 0x14, 0x20, 0xF3, 0x21, 0x00, 0x00, 0x00, 0x70, 0x01, 0x60, 0x00,
    0xFF, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x74, 0x01, 0x4C, 0xFC, 0x14, 0x30, 0xF3, 0x21,
    0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x78, 0x01, 0x60, 0x00, 0xFF,
    0x00, 0x4C, 0xFC, 0x14, 0x40, 0xF3, 0x21, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x7C, 0x01,
    0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x24, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xF3, 0x21, 0x00, 0x00,
    0x00, 0x84, 0x01, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x9C, 0x01, 0x4C,
    0xFC, 0x14, 0x60, 0xF3, 0x21, 0x00, 0x60, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x04, 0x03, 0x0C, 0x20, 0x01, 0x20, 0x4C, 0xFC, 0x14, 0x70, 0xF3, 0x21, 0x00, 0x00, 0x0F, 0x14,
    0x1A, 0x66, 0x0A, 0x15, 0x00, 0x00, 0x05, 0x03, 0x15, 0x00, 0x1B, 0x78, 0x50, 0x4C, 0xFC, 0x14,
    0x80, 0xF3, 0x21, 0x00, 0xFF, 0xFF, 0x3F, 0x00, 0x05, 0x03, 0x1F, 0x64, 0xB0, 0xBD, 0x0A, 0x05,
    0x00, 0xFF, 0xFF, 0x07, 0x4C, 0xFC, 0x14, 0x90, 0xF3, 0x21, 0x00, 0xBC, 0x09, 0x01, 0x04, 0x02,
    0x0F, 0x00, 0x00, 0x22, 0x03, 0x02, 0x01, 0x00, 0xF0, 0x01, 0x28, 0x4C, 0xFC, 0x14, 0xA0, 0xF3,
    0x21, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x15, 0x32, 0x00, 0xFF, 0xFF, 0xFA, 0xFF, 0x01, 0x01,
    0x06, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xF3, 0x21, 0x00, 0x28, 0x15, 0x32, 0x00, 0x00, 0x00, 0x7F,
    0xFE, 0x34, 0x10, 0x20, 0x02, 0x2C, 0x09, 0x64, 0x00, 0x4C, 0xFC, 0x14, 0xC0, 0xF3, 0x21, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x28, 0x01, 0x00, 0x00, 0x00, 0x20,
    0x4C, 0xFC, 0x14, 0xD0, 0xF3, 0x21, 0x00, 0x15, 0x32, 0x00, 0xFF, 0xFF, 0xFA, 0xFF, 0x05, 0x01,
    0x06, 0x06, 0x28, 0x15, 0x32, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0xE0, 0xF3, 0x21, 0x00, 0x00, 0x7F,
    0xFE, 0x34, 0x10, 0x20, 0x02, 0x2C, 0x09, 0x64, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0E, 0x4C, 0xFC,
    0x14, 0xF0, 0xF3, 0x21, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x28, 0x02, 0x00, 0x00, 0x00, 0x20,
    0x15, 0x32, 0x00, 0xFF, 0xFF, 0x4C, 0xFC, 0x14, 0x00, 0xF4, 0x21, 0x00, 0xFA, 0xFF, 0x01, 0x01,
    0x06, 0x00, 0x28, 0x15, 0x32, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x34, 0x10, 0x4C, 0xFC, 0x14, 0x10,
    0xF4, 0x21, 0x00, 0x20, 0x02, 0x2C, 0x09, 0x64, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
    0x00, 0xF0, 0x01, 0x4C, 0xFC, 0x14, 0x20, 0xF4, 0x21, 0x00, 0xA0, 0x01, 0x03, 0x00, 0x00, 0x00,
    0x10, 0x15, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x4C, 0xFC, 0x14, 0x30, 0xF4, 0x21,
    0x00, 0xF0, 0x00, 0x14, 0x15, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x18,
    0x15, 0x4C, 0xFC, 0x14, 0x40, 0xF4, 0x21, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0,
    0xF0, 0x00, 0x1C, 0x15, 0x32, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xF4, 0x21, 0x00, 0x00,
    0x00, 0x4C, 0x4C, 0x00, 0x00, 0x20, 0x15, 0x32, 0x00, 0xFF, 0xFF, 0xFA, 0xFF, 0x05, 0x01, 0x4C,
    0xFC, 0x14, 0x60, 0xF4, 0x21, 0x00, 0x06, 0x06, 0x24, 0x15, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x28, 0x15, 0x4C, 0xFC, 0x14, 0x70, 0xF4, 0x21, 0x00, 0x32, 0x00, 0x00,
    0x00, 0x7F, 0xFE, 0x34, 0x10, 0x20, 0x02, 0x34, 0x15, 0x32, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14,
    0x80, 0xF4, 0x21, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x38, 0x15, 0x32, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x90, 0xF4, 0x21, 0x00, 0x00, 0x00, 0x50, 0x15, 0x32,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xCA, 0x06, 0x00, 0x00, 0x2C, 0x09, 0x4C, 0xFC, 0x14, 0xA0, 0xF4,
    0x21, 0x00, 0x64, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x64, 0x00,
    0x51, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xF4, 0x21, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x78,
    0x08, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0xC0, 0xF4, 0x21, 0x00,
    0x00, 0x00, 0x01, 0x07, 0xB5, 0x03, 0x00, 0x06, 0x0A, 0x23, 0x3C, 0x5A, 0x6E, 0x7D, 0x05, 0x5C,
    0x4C, 0xFC, 0x14, 0xD0, 0xF4, 0x21, 0x00, 0x03, 0x3E, 0x03, 0x48, 0x03, 0x5C, 0x03, 0x48, 0x03,
    0x98, 0x03, 0x7A, 0x03, 0x84, 0x03, 0x98, 0x4C, 0xFC, 0x14, 0xE0, 0xF4, 0x21, 0x00, 0x03, 0x84,
    0x03, 0xD4, 0x03, 0xB6, 0x03, 0xC0, 0x03, 0xD4, 0x03, 0xC0, 0x03, 0x1A, 0x04, 0xFC, 0x4C, 0xFC,
    0x14, 0xF0, 0xF4, 0x21, 0x00, 0x03, 0x06, 0x04, 0x1A, 0x04, 0x06, 0x04, 0x60, 0x04, 0x42, 0x04,
    0x4C, 0x04, 0x60, 0x04, 0x4C, 0x4C, 0xFC, 0x14, 0x00, 0xF5, 0x21, 0x00, 0x04, 0xA6, 0x04, 0x88,
    0x04, 0x92, 0x04, 0xA6, 0x04, 0x92, 0x04, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0x4C, 0xFC, 0x14, 0x10,
    0xF5, 0x21, 0x00, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x30, 0x02, 0x30, 0x02, 0x26, 0x02,
    0x12, 0x02, 0x1C, 0x4C, 0xFC, 0x14, 0x20, 0xF5, 0x21, 0x00, 0x02, 0x6C, 0x02, 0x6C, 0x02, 0x62,
    0x02, 0x4E, 0x02, 0x58, 0x02, 0xA8, 0x02, 0xA8, 0x02, 0x9E, 0x4C, 0xFC, 0x14, 0x30, 0xF5, 0x21,
    0x00, 0x02, 0x8A, 0x02, 0x94, 0x02, 0xEE, 0x02, 0xEE, 0x02, 0xE4, 0x02, 0xD0, 0x02, 0xDA, 0x02,
    0x34, 0x4C, 0xFC, 0x14, 0x40, 0xF5, 0x21, 0x00, 0x03, 0x34, 0x03, 0x2A, 0x03, 0x16, 0x03, 0x20,
    0x03, 0x7A, 0x03, 0x7A, 0x03, 0x70, 0x03, 0x5C, 0x4C, 0xFC, 0x14, 0x50, 0xF5, 0x21, 0x00, 0x03,
    0x66, 0x03, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x06, 0x4C,
    0xFC, 0x14, 0x60, 0xF5, 0x21, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x05, 0x9C, 0x02, 0xFF, 0xA0,
    0x02, 0xFF, 0xA4, 0x02, 0xFF, 0xA8, 0x4C, 0xFC, 0x14, 0x70, 0xF5, 0x21, 0x00, 0x02, 0xFF, 0xAC,
    0x02, 0xFF, 0x00, 0x00, 0x60, 0x00, 0x05, 0xC8, 0x02, 0xFF, 0xCC, 0x02, 0xFF, 0x4C, 0xFC, 0x14,
    0x80, 0xF5, 0x21, 0x00, 0xD0, 0x02, 0xFF, 0xD4, 0x02, 0xFF, 0xD8, 0x02, 0xFF, 0x00, 0x00, 0x60,
    0x00, 0x05, 0x88, 0x03, 0x4C, 0xFC, 0x14, 0x90, 0xF5, 0x21, 0x00, 0xFF, 0x8C, 0x03, 0xFF, 0x90,
    0x03, 0xFF, 0x94, 0x03, 0xFF, 0x98, 0x03, 0xFF, 0x00, 0x00, 0x60, 0x4C, 0xFC, 0x14, 0xA0, 0xF5,
    0x21, 0x00, 0x00, 0x05, 0x9C, 0x03, 0xFF, 0xA0, 0x03, 0xFF, 0xA4, 0x03, 0xFF, 0xA8, 0x03, 0xFF,
    0xAC, 0x03, 0x4C, 0xFC, 0x14, 0xB0, 0xF5, 0x21, 0x00, 0xFF, 0x00, 0x00, 0x60, 0x00, 0x05, 0x80,
    0x03, 0xFF, 0x84, 0x03, 0xFF, 0xA0, 0x06, 0xFF, 0xB4, 0x4C, 0xFC, 0x14, 0xC0, 0xF5, 0x21, 0x00,
    0x02, 0xFF, 0x38, 0x07, 0xFF, 0x00, 0x00, 0x60, 0x00, 0x03, 0xA4, 0x06, 0xFF, 0x5C, 0x06, 0xFF,
    0x4C, 0xFC, 0x14, 0xD0, 0xF5, 0x21, 0x00, 0x98, 0x06, 0xFF, 0x43, 0x39, 0x37, 0x37, 0x35, 0x35,
    0x35, 0x35, 0x36, 0x35, 0x88, 0x86, 0x86, 0x4C, 0xFC, 0x14, 0xE0, 0xF5, 0x21, 0x00, 0x86, 0x85,
    0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x18, 0x03, 0xFA, 0x65, 0x04, 0xCC, 0x4C, 0x4C, 0xFC,
    0x14, 0xF0, 0xF5, 0x21, 0x00, 0x45, 0x41, 0x42, 0x43, 0x3C, 0x3C, 0x3B, 0x3B, 0x3C, 0x88, 0x86,
    0x86, 0x86, 0x85, 0xA8, 0xA6, 0x4C, 0xFC, 0x14, 0x00, 0xF6, 0x21, 0x00, 0xA6, 0xA6, 0xA4, 0xA4,
    0xF4, 0x1A, 0x03, 0xFA, 0x66, 0x04, 0xCC, 0x5C, 0x52, 0x52, 0x52, 0x52, 0x4C, 0xFC, 0x14, 0x10,
    0xF6, 0x21, 0x00, 0x47, 0x47, 0x47, 0x47, 0x47, 0x88, 0x86, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0xA6,
    0xA6, 0xA4, 0xA4, 0x4C, 0xFC, 0x14, 0x20, 0xF6, 0x21, 0x00, 0xF4, 0x1F, 0x03, 0xFA, 0x66, 0x04,
    0xCC, 0x6A, 0x63, 0x5F, 0x5F, 0x64, 0x53, 0x53, 0x52, 0x52, 0x4C, 0xFC, 0x14, 0x30, 0xF6, 0x21,
    0x00, 0x53, 0x88, 0x86, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x1F, 0x03,
    0xFA, 0x4C, 0xFC, 0x14, 0x40, 0xF6, 0x21, 0x00, 0x66, 0x04, 0xCC, 0x7C, 0x71, 0x6E, 0x6E, 0x71,
    0x5D, 0x5D, 0x5C, 0x5C, 0x5D, 0x88, 0x86, 0x86, 0x4C, 0xFC, 0x14, 0x50, 0xF6, 0x21, 0x00, 0x86,
    0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x1F, 0x03, 0xFA, 0x67, 0x04, 0xCC, 0x8C, 0x4C,
    0xFC, 0x14, 0x60, 0xF6, 0x21, 0x00, 0x81, 0x7F, 0x7F, 0x81, 0x68, 0x68, 0x67, 0x67, 0x68, 0x88,
    0x86, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0x4C, 0xFC, 0x14, 0x70, 0xF6, 0x21, 0x00, 0xA6, 0xA6, 0xA4,
    0xA4, 0xF4, 0x1F, 0x03, 0xFA, 0x67, 0x24, 0xFF, 0x01, 0x07, 0xB5, 0x03, 0x04, 0x4C, 0xFC, 0x14,
    0x80, 0xF6, 0x21, 0x00, 0x06, 0x0A, 0x23, 0x3C, 0x5A, 0x6E, 0x7D, 0x05, 0x5C, 0x03, 0x3E, 0x03,
    0x48, 0x03, 0x5C, 0x03, 0x4C, 0xFC, 0x14, 0x90, 0xF6, 0x21, 0x00, 0x48, 0x03, 0x98, 0x03, 0x7A,
    0x03, 0x84, 0x03, 0x98, 0x03, 0x84, 0x03, 0xD4, 0x03, 0xB6, 0x03, 0x4C, 0xFC, 0x14, 0xA0, 0xF6,
    0x21, 0x00, 0xC0, 0x03, 0xD4, 0x03, 0xC0, 0x03, 0x1A, 0x04, 0xFC, 0x03, 0x06, 0x04, 0x1A, 0x04,
    0x06, 0x04, 0x4C, 0xFC, 0x14, 0xB0, 0xF6, 0x21, 0x00, 0x60, 0x04, 0x42, 0x04, 0x4C, 0x04, 0x60,
    0x04, 0x4C, 0x04, 0xA6, 0x04, 0x88, 0x04, 0x92, 0x04, 0x4C, 0xFC, 0x14, 0xC0, 0xF6, 0x21, 0x00,
    0xA6, 0x04, 0x92, 0x04, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF,
    0x4C, 0xFC, 0x14, 0xD0, 0xF6, 0x21, 0x00, 0x30, 0x02, 0x30, 0x02, 0x26, 0x02, 0x12, 0x02, 0x1C,
    0x02, 0x6C, 0x02, 0x6C, 0x02, 0x62, 0x02, 0x4C, 0xFC, 0x14, 0xE0, 0xF6, 0x21, 0x00, 0x4E, 0x02,
    0x58, 0x02, 0xA8, 0x02, 0xA8, 0x02, 0x9E, 0x02, 0x8A, 0x02, 0x94, 0x02, 0xEE, 0x02, 0x4C, 0xFC,
    0x14, 0xF0, 0xF6, 0x21, 0x00, 0xEE, 0x02, 0xE4, 0x02, 0xD0, 0x02, 0xDA, 0x02, 0x34, 0x03, 0x34,
    0x03, 0x2A, 0x03, 0x16, 0x03, 0x4C, 0xFC, 0x14, 0x00, 0xF7, 0x21, 0x00, 0x20, 0x03, 0x7A, 0x03,
    0x7A, 0x03, 0x70, 0x03, 0x5C, 0x03, 0x66, 0x03, 0x14, 0xFF, 0x14, 0xFF, 0x4C, 0xFC, 0x14, 0x10,
    0xF7, 0x21, 0x00, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x06, 0x00, 0x00, 0x00, 0x60,
    0x00, 0x05, 0x9C, 0x4C, 0xFC, 0x14, 0x20, 0xF7, 0x21, 0x00, 0x02, 0xFF, 0xA0, 0x02, 0xFF, 0xA4,
    0x02, 0xFF, 0xA8, 0x02, 0xFF, 0xAC, 0x02, 0xFF, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x30, 0xF7, 0x21,
    0x00, 0x60, 0x00, 0x05, 0xC8, 0x02, 0xFF, 0xCC, 0x02, 0xFF, 0xD0, 0x02, 0xFF, 0xD4, 0x02, 0xFF,
    0xD8, 0x4C, 0xFC, 0x14, 0x40, 0xF7, 0x21, 0x00, 0x02, 0xFF, 0x00, 0x00, 0x60, 0x00, 0x05, 0x88,
    0x03, 0xFF, 0x8C, 0x03, 0xFF, 0x90, 0x03, 0xFF, 0x4C, 0xFC, 0x14, 0x50, 0xF7, 0x21, 0x00, 0x94,
    0x03, 0xFF, 0x98, 0x03, 0xFF, 0x00, 0x00, 0x60, 0x00, 0x05, 0x9C, 0x03, 0xFF, 0xA0, 0x03, 0x4C,
    0xFC, 0x14, 0x60, 0xF7, 0x21, 0x00, 0xFF, 0xA4, 0x03, 0xFF, 0xA8, 0x03, 0xFF, 0xAC, 0x03, 0xFF,
    0x00, 0x00, 0x60, 0x00, 0x05, 0x80, 0x4C, 0xFC, 0x14, 0x70, 0xF7, 0x21, 0x00, 0x03, 0xFF, 0x84,
    0x03, 0xFF, 0xA0, 0x06, 0xFF, 0xB4, 0x02, 0xFF, 0x38, 0x07, 0xFF, 0x00, 0x00, 0x4C, 0xFC, 0x14,
    0x80, 0xF7, 0x21, 0x00, 0x60, 0x00, 0x03, 0xA4, 0x06, 0xFF, 0x5C, 0x06, 0xFF, 0x98, 0x06, 0xFF,
    0x43, 0x39, 0x37, 0x37, 0x4C, 0xFC, 0x14, 0x90, 0xF7, 0x21, 0x00, 0x35, 0x35, 0x35, 0x35, 0x36,
    0x35, 0x88, 0x86, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0x4C, 0xFC, 0x14, 0xA0, 0xF7,
    0x21, 0x00, 0xA4, 0xF4, 0x18, 0x03, 0xFA, 0x65, 0x04, 0xCC, 0x4C, 0x45, 0x41, 0x42, 0x43, 0x3C,
    0x3C, 0x3B, 0x4C, 0xFC, 0x14, 0xB0, 0xF7, 0x21, 0x00, 0x3B, 0x3C, 0x88, 0x86, 0x86, 0x86, 0x85,
    0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x1A, 0x03, 0x4C, 0xFC, 0x14, 0xC0, 0xF7, 0x21, 0x00,
    0xFA, 0x66, 0x04, 0xCC, 0x5C, 0x52, 0x52, 0x52, 0x52, 0x47, 0x47, 0x47, 0x47, 0x47, 0x88, 0x86,
    0x4C, 0xFC, 0x14, 0xD0, 0xF7, 0x21, 0x00, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4,
    0xF4, 0x1F, 0x03, 0xFA, 0x66, 0x04, 0xCC, 0x4C, 0xFC, 0x14, 0xE0, 0xF7, 0x21, 0x00, 0x6A, 0x63,
    0x5F, 0x5F, 0x64, 0x53, 0x53, 0x52, 0x52, 0x53, 0x88, 0x86, 0x86, 0x86, 0x85, 0xA8, 0x4C, 0xFC,
    0x14, 0xF0, 0xF7, 0x21, 0x00, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x1F, 0x03, 0xFA, 0x66, 0x04,
    0xCC, 0x7C, 0x71, 0x6E, 0x6E, 0x4C, 0xFC, 0x14, 0x00, 0xF8, 0x21, 0x00, 0x71, 0x5D, 0x5D, 0x5C,
    0x5C, 0x5D, 0x88, 0x86, 0x86, 0x86, 0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0x4C, 0xFC, 0x14, 0x10,
    0xF8, 0x21, 0x00, 0xA4, 0xF4, 0x1F, 0x03, 0xFA, 0x67, 0x04, 0xCC, 0x8C, 0x81, 0x7F, 0x7F, 0x81,
    0x68, 0x68, 0x67, 0x4C, 0xFC, 0x14, 0x20, 0xF8, 0x21, 0x00, 0x67, 0x68, 0x88, 0x86, 0x86, 0x86,
    0x85, 0xA8, 0xA6, 0xA6, 0xA6, 0xA4, 0xA4, 0xF4, 0x1F, 0x03, 0x4C, 0xFC, 0x14, 0x30, 0xF8, 0x21,
    0x00, 0xFA, 0x67, 0x24, 0xFF, 0x02, 0x07, 0x7F, 0x04, 0x06, 0x05, 0x38, 0x04, 0x88, 0x04, 0x9C,
    0x04, 0x4C, 0xFC, 0x14, 0x40, 0xF8, 0x21, 0x00, 0x88, 0x04, 0xD8, 0x04, 0x74, 0x04, 0xC4, 0x04,
    0xD8, 0x04, 0xC4, 0x04, 0x14, 0x05, 0xB0, 0x04, 0x4C, 0xFC, 0x14, 0x50, 0xF8, 0x21, 0x00, 0x00,
    0x05, 0x14, 0x05, 0x00, 0x05, 0x50, 0x05, 0xF6, 0x04, 0x46, 0x05, 0x5A, 0x05, 0x46, 0x05, 0x4C,
    0xFC, 0x14, 0x60, 0xF8, 0x21, 0x00, 0x96, 0x05, 0x3C, 0x05, 0x8C, 0x05, 0xA0, 0x05, 0x8C, 0x05,
    0xDC, 0x05, 0x82, 0x05, 0xD2, 0x05, 0x4C, 0xFC, 0x14, 0x70, 0xF8, 0x21, 0x00, 0xE6, 0x05, 0xD2,
    0x05, 0x22, 0x06, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x4C, 0xFC, 0x14,
    0x80, 0xF8, 0x21, 0x00, 0x14, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x60, 0x00, 0x05, 0x9C, 0x02, 0xFF,
    0xA0, 0x02, 0xFF, 0xA4, 0x4C, 0xFC, 0x14, 0x90, 0xF8, 0x21, 0x00, 0x02, 0xFF, 0xA8, 0x02, 0xFF,
    0xAC, 0x02, 0xFF, 0x4C, 0x4C, 0x4C, 0x4C, 0x4C, 0x5F, 0x5F, 0x5F, 0x4C, 0xFC, 0x14, 0xA0, 0xF8,
    0x21, 0x00, 0x5F, 0x5F, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C, 0x85, 0x85, 0x85, 0x85, 0x85, 0x99, 0x99,
    0x99, 0x99, 0x4C, 0xFC, 0x14, 0xB0, 0xF8, 0x21, 0x00, 0x99, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0x02,
    0x07, 0x7F, 0x00, 0x06, 0x05, 0x5C, 0x03, 0x3E, 0x03, 0x4C, 0xFC, 0x14, 0xC0, 0xF8, 0x21, 0x00,
    0x48, 0x03, 0x5C, 0x03, 0x48, 0x03, 0x98, 0x03, 0x7A, 0x03, 0x84, 0x03, 0x98, 0x03, 0x84, 0x03,
    0x4C, 0xFC, 0x14, 0xD0, 0xF8, 0x21, 0x00, 0xD4, 0x03, 0xB6, 0x03, 0xC0, 0x03, 0xD4, 0x03, 0xC0,
    0x03, 0x1A, 0x04, 0xFC, 0x03, 0x06, 0x04, 0x4C, 0xFC, 0x14, 0xE0, 0xF8, 0x21, 0x00, 0x1A, 0x04,
    0x06, 0x04, 0x60, 0x04, 0x42, 0x04, 0x4C, 0x04, 0x60, 0x04, 0x4C, 0x04, 0xA6, 0x04, 0x4C, 0xFC,
    0x14, 0xF0, 0xF8, 0x21, 0x00, 0x88, 0x04, 0x92, 0x04, 0xA6, 0x04, 0x92, 0x04, 0x14, 0xFF, 0x14,
    0xFF, 0x14, 0xFF, 0x14, 0xFF, 0x4C, 0xFC, 0x14, 0x00, 0xF9, 0x21, 0x00, 0x14, 0xFF, 0x14, 0xFF,
    0x01, 0x00, 0x00, 0x00, 0x60, 0x00, 0x05, 0x9C, 0x02, 0xFF, 0xA0, 0x02, 0x4C, 0xFC, 0x14, 0x10,
    0xF9, 0x21, 0x00, 0xFF, 0xA4, 0x02, 0xFF, 0xA8, 0x02, 0xFF, 0xAC, 0x02, 0xFF, 0x43, 0x39, 0x37,
    0x37, 0x38, 0x4C, 0x4C, 0xFC, 0x14, 0x20, 0xF9, 0x21, 0x00, 0x45, 0x41, 0x42, 0x43, 0x5C, 0x53,
    0x52, 0x52, 0x52, 0x6A, 0x63, 0x5F, 0x5F, 0x64, 0x7C, 0x71, 0x4C, 0xFC, 0x14, 0x30, 0xF9, 0x21,
    0x00, 0x6E, 0x6E, 0x71, 0x8C, 0x81, 0x7F, 0x7F, 0x81, 0x00, 0x07, 0x04, 0x3F, 0x00, 0x00, 0x00,
    0x04, 0x4C, 0xFC, 0x14, 0x40, 0xF9, 0x21, 0x00, 0x07, 0x98, 0x01, 0x00, 0x32, 0x1F, 0x00, 0x00,
    0x1D, 0x00, 0x00, 0x1C, 0x01, 0x00, 0x1A, 0x02, 0x4C, 0xFC, 0x14, 0x50, 0xF9, 0x21, 0x00, 0x00,
    0x17, 0x02, 0x00, 0x15, 0x12, 0x00, 0x13, 0x55, 0x00, 0x11, 0x64, 0x00, 0x0F, 0x11, 0x00, 0x4C,
    0xFC, 0x14, 0x60, 0xF9, 0x21, 0x00, 0x0E, 0x03, 0x00, 0x0D, 0x14, 0x00, 0x0B, 0x50, 0x00, 0x0A,
    0x64, 0x00, 0x09, 0x23, 0x00, 0x08, 0x4C, 0xFC, 0x14, 0x70, 0xF9, 0x21, 0x00, 0x23, 0x00, 0x07,
    0x03, 0x00, 0x07, 0x16, 0x00, 0x06, 0x15, 0x00, 0x05, 0x13, 0x00, 0x05, 0x16, 0x4C, 0xFC, 0x14,
    0x80, 0xF9, 0x21, 0x00, 0x00, 0x04, 0x13, 0x00, 0x04, 0x26, 0x00, 0x04, 0x19, 0x00, 0x03, 0x05,
    0x00, 0x03, 0x08, 0x00, 0x4C, 0xFC, 0x14, 0x90, 0xF9, 0x21, 0x00, 0x03, 0x2A, 0x00, 0x02, 0x03,
    0x00, 0x02, 0x16, 0x00, 0x02, 0x09, 0x00, 0x02, 0x2B, 0x00, 0x02, 0x4C, 0xFC, 0x14, 0xA0, 0xF9,
    0x21, 0x00, 0x3D, 0x00, 0x02, 0x3F, 0x00, 0x01, 0x02, 0x00, 0x01, 0x15, 0x00, 0x01, 0x18, 0x00,
    0x01, 0x3A, 0x4C, 0xFC, 0x14, 0xB0, 0xF9, 0x21, 0x00, 0x00, 0x01, 0x1D, 0x00, 0x01, 0x1F, 0x00,
    0x01, 0x8F, 0x00, 0x01, 0xEF, 0x00, 0x01, 0x3F, 0x01, 0x4C, 0xFC, 0x14, 0xC0, 0xF9, 0x21, 0x00,
    0x01, 0x8F, 0x01, 0x01, 0xCF, 0x01, 0x01, 0x0F, 0x02, 0x01, 0x4F, 0x02, 0x01, 0x7F, 0x02, 0x01,
    0x4C, 0xFC, 0x14, 0xD0, 0xF9, 0x21, 0x00, 0xAF, 0x02, 0x01, 0xCF, 0x02, 0x01, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x03, 0x07, 0x2A, 0x01, 0x00, 0x4C, 0xFC, 0x14, 0xE0, 0xF9, 0x21, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x14, 0x0A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0xFC,
    0x14, 0xF0, 0xF9, 0x21, 0x00, 0x0A, 0x02, 0xFE, 0x0B, 0xE4, 0xFE, 0x1C, 0x01, 0xE4, 0xFE, 0x1C,
    0x01, 0x0A, 0x02, 0xFE, 0x0B, 0x4C, 0xFC, 0x14, 0x00, 0xFA, 0x21, 0x00, 0xF1, 0xFF, 0x0F, 0x00,
    0xF1, 0xFF, 0x0F, 0x00, 0x05, 0x07, 0x24, 0x00, 0x01, 0x08, 0x08, 0x0C, 0x4C, 0xFC, 0x14, 0x10,
    0xFA, 0x21, 0x00, 0x00, 0x08, 0x01, 0x04, 0x02, 0x00, 0x03, 0xFC, 0x04, 0xF8, 0x05, 0xF4, 0x06,
    0xF0, 0x07, 0x0C, 0x4C, 0xFC, 0x14, 0x20, 0xFA, 0x21, 0x00, 0x00, 0x08, 0x01, 0x04, 0x02, 0x00,
    0x03, 0xFC, 0x04, 0xF8, 0x05, 0xF4, 0x06, 0xF0, 0x07, 0x0F, 0x4C, 0xFC, 0x14, 0x30, 0xFA, 0x21,
    0x00, 0x03, 0x28, 0x02, 0x78, 0x14, 0x7F, 0x5A, 0x00, 0x14, 0x02, 0x14, 0x1E, 0x00, 0x02, 0x03,
    0x00, 0x4C, 0xFC, 0x14, 0x40, 0xFA, 0x21, 0x00, 0x1E, 0xAA, 0x33, 0x19, 0x05, 0xCF, 0x00, 0x80,
    0x0A, 0x92, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x4C, 0xFC, 0x14, 0x50, 0xFA, 0x21, 0x00, 0x00,
    0xA2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x03, 0x04, 0x20, 0x4E, 0x00, 0x4C,
    0xFC, 0x14, 0x60, 0xFA, 0x21, 0x00, 0x00, 0x03, 0x01, 0x2C, 0xD0, 0x1D, 0x20, 0x00, 0x0C, 0x00,
    0x0A, 0x05, 0x08, 0x06, 0x06, 0x08, 0x4C, 0xFC, 0x14, 0x70, 0xFA, 0x21, 0x00, 0x04, 0x0A, 0x02,
    0x0C, 0x00, 0x0F, 0xFE, 0x13, 0xFC, 0x15, 0xFA, 0x18, 0xF8, 0x1A, 0xF6, 0x1D, 0x4C, 0xFC, 0x14,
    0x80, 0xFA, 0x21, 0x00, 0xF4, 0x1F, 0xF2, 0x21, 0xF0, 0x23, 0xEE, 0x26, 0xEC, 0x28, 0xEA, 0x2A,
    0xE8, 0x2C, 0xE6, 0x2F, 0x4C, 0xFC, 0x14, 0x90, 0xFA, 0x21, 0x00, 0x03, 0x01, 0x10, 0xF8, 0x1D,
    0x20, 0x00, 0x0A, 0x01, 0x08, 0x08, 0x06, 0x0A, 0x04, 0x0B, 0x02, 0x4C, 0xFC, 0x14, 0xA0, 0xFA,
    0x21, 0x00, 0x0C, 0x00, 0x0E, 0x03, 0x01, 0xA0, 0x01, 0xAC, 0x9B, 0x20, 0x00, 0x20, 0x15, 0x32,
    0x00, 0xFF, 0x4C, 0xFC, 0x14, 0xB0, 0xFA, 0x21, 0x00, 0xFF, 0xFA, 0xFF, 0x01, 0x01, 0x06, 0x00,
    0x28, 0x15, 0x32, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x34, 0x4C, 0xFC, 0x14, 0xC0, 0xFA, 0x21, 0x00,
    0x10, 0x20, 0x02, 0x2C, 0x09, 0x64, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x20,
    0x4C, 0xFC, 0x14, 0xD0, 0xFA, 0x21, 0x00, 0x15, 0x32, 0x00, 0xFF, 0xFF, 0xFA, 0xFF, 0x05, 0x01,
    0x06, 0x06, 0xF8, 0x00, 0x64, 0x00, 0x51, 0x4C, 0xFC, 0x14, 0xE0, 0xFA, 0x21, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x78, 0x08, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x4C, 0xFC,
    0x14, 0xF0, 0xFA, 0x21, 0x00, 0x00, 0x00, 0x00, 0x28, 0x15, 0x32, 0x00, 0x00, 0x00, 0x7F, 0xFE,
    0x34, 0x10, 0x20, 0x02, 0x2C, 0x4C, 0xFC, 0x14, 0x00, 0xFB, 0x21, 0x00, 0x09, 0x64, 0x00, 0x0E,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x20, 0x15, 0x32, 0x00, 0xFF, 0x4C, 0xFC, 0x14, 0x10,
    0xFB, 0x21, 0x00, 0xFF, 0xFA, 0xFF, 0x01, 0x01, 0x06, 0x00, 0xF8, 0x00, 0x64, 0x00, 0x51, 0x00,
    0x00, 0x00, 0xD3, 0x4C, 0xFC, 0x14, 0x20, 0xFB, 0x21, 0x00, 0x00, 0x00, 0x00, 0x78, 0x08, 0x64,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x28, 0x4C, 0xFC, 0x14, 0x30, 0xFB, 0x21,
    0x00, 0x15, 0x32, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x34, 0x10, 0x20, 0x02, 0x2C, 0x09, 0x64, 0x00,
    0x0E, 0x4C, 0xFC, 0x14, 0x40, 0xFB, 0x21, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x03,
    0x01, 0x5C, 0x74, 0x9C, 0x20, 0x00, 0x70, 0xB5, 0x4C, 0xFC, 0x14, 0x50, 0xFB, 0x21, 0x00, 0x00,
    0x24, 0x12, 0x4D, 0x20, 0xE0, 0x12, 0x48, 0x02, 0x19, 0x11, 0x68, 0x21, 0xF0, 0x7F, 0x40, 0x4C,
    0xFC, 0x14, 0x60, 0xFB, 0x21, 0x00, 0x09, 0x0E, 0x0A, 0xD0, 0x01, 0x29, 0x0B, 0xD0, 0x02, 0x29,
    0x09, 0xD0, 0x03, 0x29, 0x0B, 0xD0, 0x4C, 0xFC, 0x14, 0x70, 0xFB, 0x21, 0x00, 0x04, 0x29, 0x09,
    0xD0, 0x05, 0x29, 0x0B, 0xD0, 0x0D, 0xE0, 0x51, 0x68, 0x01, 0x60, 0x0A, 0xE0, 0x4C, 0xFC, 0x14,
    0x80, 0xFB, 0x21, 0x00, 0x51, 0x68, 0xFA, 0xF5, 0xE3, 0xFE, 0x06, 0xE0, 0x51, 0x68, 0xFA, 0xF5,
    0xF3, 0xFE, 0x02, 0xE0, 0x4C, 0xFC, 0x14, 0x90, 0xFB, 0x21, 0x00, 0x51, 0x68, 0xFA, 0xF5, 0xF9,
    0xFE, 0x08, 0x34, 0xAC, 0x42, 0xDC, 0xD3, 0x70, 0xBD, 0x38, 0x00, 0x4C, 0xFC, 0x14, 0xA0, 0xFB,
    0x21, 0x00, 0x00, 0x00, 0xCC, 0x9C, 0x20, 0x00, 0x03, 0x01, 0x3C, 0xCC, 0x9C, 0x20, 0x00, 0x14,
    0x8D, 0x00, 0x4C, 0xFC, 0x14, 0xB0, 0xFB, 0x21, 0x00, 0x04, 0x5B, 0x49, 0x1F, 0x22, 0xEC, 0x12,
    0x07, 0x02, 0x01, 0x02, 0x0D, 0x00, 0x79, 0x2D, 0x07, 0x4C, 0xFC, 0x14, 0xC0, 0xFB, 0x21, 0x00,
    0x01, 0xC9, 0x02, 0x0D, 0x00, 0x8D, 0xB5, 0x04, 0x01, 0xF5, 0x03, 0x0D, 0x00, 0xD5, 0x43, 0x04,
    0x4C, 0xFC, 0x14, 0xD0, 0xFB, 0x21, 0x00, 0x02, 0x11, 0x02, 0x0D, 0x00, 0x71, 0x20, 0x01, 0x01,
    0xC9, 0x04, 0x0D, 0x00, 0xB1, 0xB4, 0x00, 0x4C, 0xFC, 0x14, 0xE0, 0xFB, 0x21, 0x00, 0x02, 0x19,
    0x02, 0x0D, 0x00, 0x33, 0x01, 0x28, 0x00, 0x02, 0x0D, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x4C, 0xFC,
    0x14, 0xF0, 0xFB, 0x21, 0x00, 0xC0, 0x7D, 0x02, 0x93, 0x2B, 0x26, 0x7C, 0x81, 0x97, 0x8E, 0x50,
    0x1A, 0xB0, 0x02, 0x32, 0x57, 0x4C, 0xFC, 0x14, 0x00, 0xFC, 0x21, 0x00, 0x4F, 0x3B, 0x26, 0x70,
    0xB4, 0x75, 0x3B, 0xB4, 0xE8, 0xCE, 0x0D, 0xDA, 0x5B, 0x92, 0xCE, 0x11, 0x4C, 0xFC, 0x14, 0x10,
    0xFC, 0x21, 0x00, 0x33, 0x01, 0x28, 0xE0, 0x03, 0x0D, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xCB, 0x2D,
    0x2E, 0x04, 0xD3, 0x4C, 0xFC, 0x14, 0x20, 0xFC, 0x21, 0x00, 0xEB, 0xEA, 0xEC, 0x85, 0xC2, 0x81,
    0x71, 0xA9, 0x80, 0x81, 0x63, 0xB0, 0x08, 0x59, 0x17, 0x40, 0x4C, 0xFC, 0x14, 0x30, 0xFC, 0x21,
    0x00, 0xEA, 0xF8, 0x5B, 0x00, 0xB1, 0x59, 0xDF, 0xC2, 0x7C, 0xEF, 0x68, 0x33, 0x01, 0x28, 0xF0,
    0x02, 0x4C, 0xFC, 0x14, 0x40, 0xFC, 0x21, 0x00, 0x0D, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x39, 0x79,
    0xBB, 0xCA, 0x2D, 0xF5, 0xB8, 0xFC, 0x29, 0xA5, 0x4C, 0xFC, 0x14, 0x50, 0xFC, 0x21, 0x00, 0xA0,
    0x08, 0x9A, 0x55, 0x10, 0xB7, 0x7F, 0x54, 0xA0, 0x0D, 0xC3, 0x81, 0x4B, 0x99, 0x4B, 0xE7, 0x4C,
    0xFC, 0x14, 0x60, 0xFC, 0x21, 0x00, 0x69, 0x51, 0x7D, 0x8B, 0x87, 0xCB, 0x33, 0x01, 0x28, 0xD0,
    0x04, 0x0D, 0x00, 0x9C, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x70, 0xFC, 0x21, 0x00, 0x00, 0x54, 0x3F,
    0x86, 0xEE, 0xA3, 0x03, 0xF2, 0xF1, 0x7B, 0x44, 0x94, 0xA7, 0x02, 0x7A, 0x84, 0x4C, 0xFC, 0x14,
    0x80, 0xFC, 0x21, 0x00, 0x13, 0x2B, 0xF6, 0xC2, 0xF9, 0xE1, 0xD2, 0x46, 0xD4, 0xB9, 0x31, 0x53,
    0xF6, 0x1E, 0xAC, 0xC2, 0x4C, 0xFC, 0x14, 0x90, 0xFC, 0x21, 0x00, 0xDF, 0x06, 0x01, 0x04, 0x59,
    0x02, 0x0D, 0x00, 0xFE, 0x00, 0x00, 0xC8, 0x0B, 0x11, 0x47, 0xDE, 0x4C, 0xFC, 0x14, 0xA0, 0xFC,
    0x21, 0x00, 0x2F, 0x49, 0x07, 0x7A, 0xFA, 0x84, 0xEE, 0x67, 0x9F, 0xB4, 0xAD, 0xEA, 0x44, 0x5C,
    0xF4, 0x6B, 0x4C, 0xFC, 0x14, 0xB0, 0xFC, 0x21, 0x00, 0xA0, 0xD7, 0xE1, 0x95, 0x0D, 0xCF, 0xD8,
    0xD7, 0x47, 0x2B, 0xBF, 0xCE, 0xE4, 0x0E, 0x62, 0xC5, 0x4C, 0xFC, 0x14, 0xC0, 0xFC, 0x21, 0x00,
    0x0C, 0xBC, 0xA5, 0xAF, 0x3D, 0x37, 0xB6, 0xDC, 0x0D, 0x07, 0x1B, 0x68, 0x1C, 0x9C, 0xDA, 0xE4,
    0x4C, 0xFC, 0x0F, 0xD0, 0xFC, 0x21, 0x00, 0x36, 0x53, 0x52, 0x25, 0x0A, 0x30, 0x58, 0x02, 0x04,
    0xD0, 0x0F, 0x4C, 0xFC, 0x14, 0x00, 0x02, 0x0D, 0x00, 0x4A, 0xF7, 0xF1, 0xFF, 0x20, 0x46, 0x00,
    0xF0, 0x4D, 0xF8, 0xA1, 0xF7, 0x67, 0xB8, 0x00, 0x00, 0x4C, 0xFC, 0x14, 0x10, 0x02, 0x0D, 0x00,
    0xBD, 0xE8, 0x10, 0x40, 0x00, 0xF0, 0x10, 0xB9, 0xBD, 0xE8, 0x70, 0x40, 0x00, 0xF0, 0x64, 0xB9,
    0x4C, 0xFC, 0x14, 0x20, 0x02, 0x0D, 0x00, 0x01, 0x28, 0x02, 0xD0, 0x04, 0x28, 0x12, 0xD0, 0x14,
    0xE0, 0x15, 0x48, 0x13, 0x49, 0x00, 0x68, 0x4C, 0xFC, 0x14, 0x30, 0x02, 0x0D, 0x00, 0x40, 0xF8,
    0x0C, 0x1F, 0x24, 0x31, 0x41, 0x60, 0x3C, 0x31, 0x81, 0x60, 0x09, 0x21, 0x01, 0x75, 0x4C, 0xFC,
    0x14, 0x40, 0x02, 0x0D, 0x00, 0x0F, 0x21, 0x41, 0x75, 0x81, 0x75, 0x41, 0xF2, 0x88, 0x30, 0x0E,
    0x49, 0x01, 0xE0, 0x0E, 0x49, 0x4C, 0xFC, 0x14, 0x50, 0x02, 0x0D, 0x00, 0x15, 0x20, 0x08, 0x60,
    0x00, 0x20, 0x70, 0x47, 0x10, 0xB5, 0x0C, 0x48, 0x0C, 0x49, 0xB1, 0xF7, 0x4C, 0xFC, 0x14, 0x60,
    0x02, 0x0D, 0x00, 0x84, 0xFF, 0x0D, 0x49, 0x0B, 0x48, 0x08, 0x60, 0x39, 0xF1, 0x04, 0xFD, 0xAF,
    0xF2, 0x4F, 0x00, 0x4C, 0xFC, 0x14, 0x70, 0x02, 0x0D, 0x00, 0x0A, 0x49, 0x08, 0x60, 0x0A, 0x49,
    0x0A, 0x20, 0x08, 0x70, 0x10, 0xBD, 0xAC, 0x9B, 0x20, 0x00, 0x4C, 0xFC, 0x14, 0x80, 0x02, 0x0D,
    0x00, 0x20, 0x22, 0x20, 0x00, 0x48, 0x1F, 0x20, 0x00, 0x64, 0x06, 0x60, 0x00, 0x48, 0x9C, 0x20,
    0x00, 0x4C, 0xFC, 0x14, 0x90, 0x02, 0x0D, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x04, 0x9D, 0x20, 0x00,
    0x64, 0x05, 0x20, 0x00, 0x94, 0x3C, 0x20, 0x00, 0x4C, 0xFC, 0x14, 0xA0, 0x02, 0x0D, 0x00, 0x25,
    0x2B, 0x20, 0x00, 0x38, 0xB5, 0x04, 0x46, 0xC0, 0x69, 0x00, 0x22, 0x41, 0x79, 0x00, 0x79, 0x4C,
    0xFC, 0x14, 0xB0, 0x02, 0x0D, 0x00, 0x74, 0xF7, 0x11, 0xF9, 0x00, 0x21, 0x00, 0x91, 0xE1, 0x69,
    0x00, 0x23, 0x0A, 0x68, 0x01, 0x46, 0x4C, 0xFC, 0x14, 0xC0, 0x02, 0x0D, 0x00, 0x18, 0x46, 0x74,
    0xF7, 0x06, 0xFE, 0x38, 0xBD, 0x2D, 0xE9, 0xF0, 0x41, 0x06, 0x46, 0x7D, 0xF7, 0x4C, 0xFC, 0x14,
    0xD0, 0x02, 0x0D, 0x00, 0x82, 0xFB, 0x04, 0x00, 0x7D, 0xD0, 0x94, 0xF8, 0x3C, 0x00, 0xC0, 0x07,
    0x7E, 0xD0, 0x40, 0x48, 0x4C, 0xFC, 0x14, 0xE0, 0x02, 0x0D, 0x00, 0x00, 0x68, 0x80, 0x02, 0x1A,
    0xD5, 0x04, 0xF1, 0x5C, 0x00, 0x94, 0xF8, 0x62, 0x10, 0x00, 0x22, 0x4C, 0xFC, 0x14, 0xF0, 0x02,
    0x0D, 0x00, 0x05, 0x46, 0xA6, 0xF7, 0x2F, 0xF9, 0xFF, 0x28, 0x03, 0xD0, 0x00, 0x21, 0xA6, 0xF7,
    0x04, 0xF9, 0x4C, 0xFC, 0x14, 0x00, 0x03, 0x0D, 0x00, 0x0C, 0xE0, 0x94, 0xF8, 0x62, 0x10, 0x28,
    0x46, 0x74, 0xF7, 0xD7, 0xFA, 0x30, 0xB1, 0x28, 0x46, 0x4C, 0xFC, 0x14, 0x10, 0x03, 0x0D, 0x00,
    0x80, 0xF7, 0x1F, 0xFB, 0x10, 0xB1, 0xC0, 0x79, 0xFF, 0x28, 0xEE, 0xD1, 0x94, 0xF8, 0x62, 0x10,
    0x4C, 0xFC, 0x14, 0x20, 0x03, 0x0D, 0x00, 0x22, 0x46, 0x04, 0xF1, 0x5C, 0x00, 0x7D, 0xF7, 0x9F,
    0xFB, 0x05, 0x00, 0x0E, 0xD0, 0x68, 0x8F, 0x4C, 0xFC, 0x14, 0x30, 0x03, 0x0D, 0x00, 0x60, 0xB1,
    0x34, 0xF7, 0x5C, 0xF9, 0x07, 0x46, 0x15, 0xF8, 0xE2, 0x0F, 0x78, 0xF7, 0xC9, 0xFB, 0x4C, 0xFC,
    0x14, 0x40, 0x03, 0x0D, 0x00, 0x38, 0x46, 0x34, 0xF7, 0x58, 0xF9, 0x28, 0x78, 0xA2, 0xF7, 0x34,
    0xFC, 0x30, 0x46, 0x7D, 0xF7, 0x4C, 0xFC, 0x14, 0x50, 0x03, 0x0D, 0x00, 0x62, 0xFD, 0x30, 0x46,
    0xA1, 0xF7, 0xC3, 0xFA, 0x01, 0x20, 0x60, 0x87, 0x21, 0x48, 0x00, 0x78, 0x4C, 0xFC, 0x14, 0x60,
    0x03, 0x0D, 0x00, 0x28, 0xB1, 0x4F, 0xF4, 0x46, 0x10, 0xC1, 0x69, 0x41, 0xF0, 0x80, 0x51, 0xC1,
    0x61, 0x20, 0x46, 0x4C, 0xFC, 0x14, 0x70, 0x03, 0x0D, 0x00, 0x76, 0xF7, 0x89, 0xFF, 0x1C, 0x48,
    0x44, 0xF2, 0x10, 0x01, 0x00, 0x68, 0x08, 0x42, 0x26, 0xD1, 0x4C, 0xFC, 0x14, 0x80, 0x03, 0x0D,
    0x00, 0x94, 0xF8, 0xE1, 0x00, 0x38, 0xB1, 0x30, 0x46, 0x7B, 0xF7, 0xBB, 0xF9, 0x38, 0xB1, 0x00,
    0x21, 0x4C, 0xFC, 0x14, 0x90, 0x03, 0x0D, 0x00, 0x7B, 0xF7, 0x6B, 0xFA, 0x07, 0xE0, 0x00, 0x20,
    0xA2, 0xF7, 0xBA, 0xFE, 0x03, 0xE0, 0x20, 0x21, 0x4C, 0xFC, 0x14, 0xA0, 0x03, 0x0D, 0x00, 0x04,
    0x20, 0x3F, 0xF7, 0xEC, 0xFE, 0x00, 0x21, 0x30, 0x46, 0xA2, 0xF7, 0x86, 0xF9, 0x94, 0xF8, 0x4C,
    0xFC, 0x14, 0xB0, 0x03, 0x0D, 0x00, 0xE1, 0x00, 0x01, 0x28, 0x0B, 0xD1, 0x0D, 0x48, 0x00, 0x78,
    0x01, 0x28, 0x07, 0xD1, 0x0C, 0x48, 0x4C, 0xFC, 0x14, 0xC0, 0x03, 0x0D, 0x00, 0x00, 0x78, 0x01,
    0x28, 0x03, 0xD1, 0x00, 0x21, 0x30, 0x46, 0x72, 0xF7, 0x44, 0xFA, 0x20, 0x46, 0x4C, 0xFC, 0x14,
    0xD0, 0x03, 0x0D, 0x00, 0x00, 0xE0, 0x03, 0xE0, 0xBD, 0xE8, 0xF0, 0x41, 0xA2, 0xF7, 0xCA, 0xBB,
    0xBD, 0xE8, 0xF0, 0x81, 0x4C, 0xFC, 0x14, 0xE0, 0x03, 0x0D, 0x00, 0xFC, 0x2F, 0x20, 0x00, 0x9F,
    0x2F, 0x20, 0x00, 0x48, 0x31, 0x20, 0x00, 0x2C, 0x30, 0x20, 0x00, 0x4C, 0xFC, 0x14, 0xF0, 0x03,
    0x0D, 0x00, 0x34, 0x30, 0x20, 0x00, 0x10, 0xB5, 0x0F, 0x4C, 0x20, 0x68, 0x7B, 0xF7, 0xC5, 0xF8,
    0x02, 0x28, 0x4C, 0xFC, 0x14, 0x00, 0x04, 0x0D, 0x00, 0x11, 0xD0, 0x20, 0x68, 0x7B, 0xF7, 0xC0,
    0xF8, 0x03, 0x28, 0x0C, 0xD0, 0x00, 0x20, 0x21, 0x68, 0x4C, 0xFC, 0x14, 0x10, 0x04, 0x0D, 0x00,
    0x48, 0x61, 0x4F, 0xF4, 0x46, 0x10, 0xC1, 0x69, 0x21, 0xF0, 0x80, 0x51, 0xC1, 0x61, 0xBD, 0xE8,
    0x4C, 0xFC, 0x14, 0x20, 0x04, 0x0D, 0x00, 0x10, 0x40, 0x75, 0xF7, 0xFC, 0xBA, 0x21, 0x68, 0x88,
    0x7B, 0x08, 0x31, 0x80, 0xF7, 0xCE, 0xFA, 0x4C, 0xFC, 0x14, 0x30, 0x04, 0x0D, 0x00, 0xED, 0xE7,
    0x00, 0x00, 0x30, 0x30, 0x20, 0x00, 0x10, 0xB5, 0x3B, 0xF7, 0x38, 0xF8, 0x1D, 0x48, 0x4C, 0xFC,
    0x14, 0x40, 0x04, 0x0D, 0x00, 0x4F, 0xF4, 0x46, 0x14, 0x00, 0x68, 0xC4, 0xF8, 0xA0, 0x00, 0x1B,
    0x48, 0x00, 0x68, 0xC4, 0xF8, 0x4C, 0xFC, 0x14, 0x50, 0x04, 0x0D, 0x00, 0x94, 0x03, 0x1A, 0x48,
    0x1A, 0x49, 0x00, 0x68, 0x08, 0x60, 0x09, 0x1F, 0x40, 0xF2, 0xAD, 0x20, 0x4C, 0xFC, 0x14, 0x60,
    0x04, 0x0D, 0x00, 0x08, 0x60, 0xE0, 0x69, 0x40, 0xF4, 0x00, 0x40, 0xE0, 0x61, 0xE0, 0x69, 0x20,
    0xF0, 0x80, 0x50, 0x4C, 0xFC, 0x14, 0x70, 0x04, 0x0D, 0x00, 0xE0, 0x61, 0xE0, 0x69, 0x20, 0xF0,
    0x01, 0x00, 0xE0, 0x61, 0x11, 0x49, 0x11, 0x48, 0x09, 0x1D, 0x4C, 0xFC, 0x14, 0x80, 0x04, 0x0D,
    0x00, 0x08, 0x60, 0x9F, 0xF7, 0x9D, 0xFC, 0xA0, 0xF7, 0xCB, 0xFD, 0x75, 0xF7, 0x8F, 0xFB, 0x9E,
    0xF7, 0x4C, 0xFC, 0x14, 0x90, 0x04, 0x0D, 0x00, 0xD7, 0xFE, 0x76, 0xF7, 0xC6, 0xFD, 0xD4, 0xF8,
    0x40, 0x03, 0x40, 0xF0, 0x20, 0x00, 0xC4, 0xF8, 0x4C, 0xFC, 0x14, 0xA0, 0x04, 0x0D, 0x00, 0x40,
    0x03, 0xA0, 0xF7, 0x9D, 0xFE, 0x76, 0xF7, 0xC5, 0xFC, 0xBD, 0xE8, 0x10, 0x40, 0x3A, 0xF7, 0x4C,
    0xFC, 0x14, 0xB0, 0x04, 0x0D, 0x00, 0x96, 0xBE, 0x00, 0x00, 0xEC, 0x35, 0x20, 0x00, 0xF0, 0x35,
    0x20, 0x00, 0x04, 0x1F, 0x20, 0x00, 0x4C, 0xFC, 0x14, 0xC0, 0x04, 0x0D, 0x00, 0xC0, 0x8B, 0x31,
    0x00, 0x10, 0x32, 0x54, 0x76, 0x10, 0xB5, 0x14, 0x46, 0x0C, 0x30, 0x31, 0xF7, 0x4C, 0xFC, 0x14,
    0xD0, 0x04, 0x0D, 0x00, 0x20, 0xFD, 0x4F, 0xF4, 0x46, 0x10, 0xD0, 0xF8, 0x04, 0x03, 0x4F, 0xF4,
    0xC0, 0x01, 0xC1, 0xF8, 0x4C, 0xFC, 0x14, 0xE0, 0x04, 0x0D, 0x00, 0x0C, 0x01, 0x00, 0x20, 0x60,
    0x71, 0x10, 0xBD, 0x10, 0xB5, 0x1B, 0x48, 0x34, 0xF7, 0xC2, 0xF8, 0x4C, 0xFC, 0x14, 0xF0, 0x04,
    0x0D, 0x00, 0xB5, 0xF7, 0x32, 0xFD, 0x00, 0x28, 0x24, 0xD1, 0x18, 0x48, 0x00, 0x78, 0x00, 0x28,
    0x20, 0xD0, 0x4C, 0xFC, 0x14, 0x00, 0x05, 0x0D, 0x00, 0x34, 0xF7, 0x75, 0xF8, 0x04, 0x46, 0x16,
    0x48, 0x00, 0x78, 0x3A, 0xF7, 0xC7, 0xFC, 0x10, 0xB1, 0x4C, 0xFC, 0x14, 0x10, 0x05, 0x0D, 0x00,
    0x01, 0x28, 0x07, 0xD0, 0x01, 0xE0, 0x3A, 0xF7, 0xFB, 0xFE, 0x20, 0x46, 0xBD, 0xE8, 0x10, 0x40,
    0x4C, 0xFC, 0x14, 0x20, 0x05, 0x0D, 0x00, 0x34, 0xF7, 0x69, 0xB8, 0x01, 0x22, 0x00, 0x23, 0x11,
    0x46, 0x0E, 0x48, 0x46, 0xF7, 0x62, 0xFF, 0x4C, 0xFC, 0x14, 0x30, 0x05, 0x0D, 0x00, 0x20, 0x46,
    0x34, 0xF7, 0x60, 0xF8, 0x34, 0xF7, 0x57, 0xF8, 0x18, 0xB1, 0x0A, 0x49, 0x01, 0x20, 0x4C, 0xFC,
    0x14, 0x40, 0x05, 0x0D, 0x00, 0x08, 0x60, 0x10, 0xBD, 0x01, 0x22, 0xBD, 0xE8, 0x10, 0x40, 0x4F,
    0xF0, 0xFF, 0x33, 0x11, 0x46, 0x4C, 0xFC, 0x14, 0x50, 0x05, 0x0D, 0x00, 0x04, 0x48, 0x46, 0xF7,
    0x4F, 0xBF, 0x00, 0x00, 0x98, 0x42, 0x20, 0x00, 0xAB, 0x26, 0x20, 0x00, 0x4C, 0xFC, 0x10, 0x60,
    0x05, 0x0D, 0x00, 0xB9, 0x22, 0x20, 0x00, 0x74, 0x42, 0x20, 0x00, 0xC8, 0x22, 0x20, 0x00, 0x4E,
    0xFC, 0x04, 0xFF, 0xFF, 0xFF, 0xFF
};

const int brcm_patch_ram_length = sizeof(brcm_patchram_buf);
#endif /* FW_DATBLOCK_SEPARATE_FROM_APPLICATION */
