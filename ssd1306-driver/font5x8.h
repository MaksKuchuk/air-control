/**
 * -------------------------------------------------------------------------------------+
 * @desc        LCD FONT 5x8
 * -------------------------------------------------------------------------------------+
 * @source      https://github.com/basti79/LCD-fonts/blob/master/5x8_vertikal_LSB_1.h
 *              Copyright (C) 2020 Marian Hrinko.
 *              Written by Marian Hrinko (mato.hrinko@gmail.com)
 *
 * @author      Marian Hrinko
 * @date        08.12.2020
 * @update      08.12.2022
 * @file        font5x8.h
 * @version     1.0
 * @tested      AVR Atmega328p
 *
 * @depend      
 * -------------------------------------------------------------------------------------+
 * @descr       LCD pixel fonts
 * -------------------------------------------------------------------------------------+
 * @usage       Display characters
 */

#ifndef __FONT5x8_H__
#define __FONT5x8_H__

  // includes

  // Characters definition
  // -----------------------------------
  // number of columns for chars
  #define CHARS_COLS_LENGTH  5

  // @author basti79
  // @source https://github.com/basti79/LCD-fonts/blob/master/5x8_vertikal_LSB_1.h
  static const uint8_t FONTS[][CHARS_COLS_LENGTH] PROGMEM = {
    {0x00,0x00,0x00,0x00,0x00},	// 0x20
    {0x00,0x00,0x2F,0x00,0x00},	// 0x21
    {0x00,0x03,0x00,0x03,0x00},	// 0x22
    {0x34,0x1C,0x36,0x1C,0x16},	// 0x23
    {0x00,0x26,0x7F,0x32,0x00},	// 0x24
    {0x32,0x0D,0x1E,0x2C,0x13},	// 0x25
    {0x18,0x26,0x2D,0x12,0x28},	// 0x26
    {0x00,0x00,0x03,0x00,0x00},	// 0x27
    {0x00,0x1C,0x22,0x41,0x41},	// 0x28
    {0x41,0x41,0x22,0x1C,0x00},	// 0x29
    {0x00,0x0A,0x05,0x0A,0x00},	// 0x2A
    {0x00,0x10,0x38,0x10,0x00},	// 0x2B
    {0x00,0x80,0x60,0x00,0x00},	// 0x2C
    {0x00,0x08,0x08,0x08,0x00},	// 0x2D
    {0x00,0x00,0x20,0x00,0x00},	// 0x2E
    {0x00,0x60,0x18,0x06,0x01},	// 0x2F
    {0x00,0x1E,0x21,0x21,0x1E},	// 0x30
    {0x00,0x22,0x3F,0x20,0x00},	// 0x31
    {0x00,0x31,0x29,0x26,0x00},	// 0x32
    {0x00,0x25,0x25,0x1A,0x00},	// 0x33
    {0x00,0x0C,0x0A,0x3F,0x08},	// 0x34
    {0x00,0x27,0x25,0x19,0x00},	// 0x35
    {0x00,0x1E,0x25,0x25,0x18},	// 0x36
    {0x00,0x01,0x39,0x05,0x03},	// 0x37
    {0x00,0x1A,0x25,0x25,0x1A},	// 0x38
    {0x00,0x06,0x29,0x29,0x1E},	// 0x39
    {0x00,0x00,0x24,0x00,0x00},	// 0x3A
    {0x00,0x80,0x64,0x00,0x00},	// 0x3B
    {0x00,0x08,0x08,0x14,0x22},	// 0x3C
    {0x00,0x14,0x14,0x14,0x14},	// 0x3D
    {0x00,0x22,0x14,0x08,0x08},	// 0x3E
    {0x00,0x01,0x29,0x05,0x02},	// 0x3F
    {0x3C,0x42,0x59,0x55,0x5E},	// 0x40
    {0x30,0x1C,0x12,0x1C,0x30},	// 0x41
    {0x00,0x3E,0x2A,0x36,0x00},	// 0x42
    {0x00,0x1C,0x22,0x22,0x22},	// 0x43
    {0x00,0x3E,0x22,0x22,0x1C},	// 0x44
    {0x00,0x3E,0x2A,0x2A,0x00},	// 0x45
    {0x00,0x3E,0x0A,0x0A,0x00},	// 0x46
    {0x00,0x1C,0x22,0x2A,0x3A},	// 0x47
    {0x00,0x3E,0x08,0x08,0x3E},	// 0x48
    {0x00,0x22,0x3E,0x22,0x00},	// 0x49
    {0x00,0x22,0x22,0x1E,0x00},	// 0x4A
    {0x00,0x3E,0x08,0x14,0x22},	// 0x4B
    {0x00,0x3E,0x20,0x20,0x20},	// 0x4C
    {0x3E,0x04,0x18,0x04,0x3E},	// 0x4D
    {0x00,0x3E,0x04,0x08,0x3E},	// 0x4E
    {0x1C,0x22,0x22,0x22,0x1C},	// 0x4F
    {0x00,0x3E,0x0A,0x0A,0x04},	// 0x50
    {0x1C,0x22,0x22,0x62,0x9C},	// 0x51
    {0x00,0x3E,0x0A,0x14,0x20},	// 0x52
    {0x00,0x24,0x2A,0x12,0x00},	// 0x53
    {0x02,0x02,0x3E,0x02,0x02},	// 0x54
    {0x00,0x1E,0x20,0x20,0x1E},	// 0x55
    {0x00,0x0E,0x30,0x30,0x0E},	// 0x56
    {0x0E,0x30,0x0C,0x30,0x0E},	// 0x57
    {0x22,0x14,0x08,0x14,0x22},	// 0x58
    {0x02,0x04,0x38,0x04,0x02},	// 0x59
    {0x00,0x32,0x2A,0x2A,0x26},	// 0x5A
    {0x00,0x00,0x7F,0x41,0x00},	// 0x5B
    {0x01,0x06,0x18,0x60,0x00},	// 0x5C
    {0x00,0x41,0x7F,0x00,0x00},	// 0x5D
    {0x18,0x06,0x01,0x06,0x18},	// 0x5E
    {0x40,0x40,0x40,0x40,0x40},	// 0x5F
    {0x00,0x01,0x02,0x00,0x00},	// 0x60
    {0x00,0x34,0x34,0x38,0x20},	// 0x61
    {0x00,0x3F,0x24,0x24,0x18},	// 0x62
    {0x00,0x18,0x24,0x24,0x00},	// 0x63
    {0x18,0x24,0x24,0x3F,0x00},	// 0x64
    {0x00,0x18,0x2C,0x28,0x00},	// 0x65
    {0x00,0x04,0x3E,0x05,0x05},	// 0x66
    {0x00,0x58,0x54,0x54,0x3C},	// 0x67
    {0x00,0x3F,0x08,0x04,0x38},	// 0x68
    {0x00,0x04,0x3D,0x00,0x00},	// 0x69
    {0x00,0x44,0x44,0x3D,0x00},	// 0x6A
    {0x00,0x3F,0x08,0x14,0x20},	// 0x6B
    {0x00,0x01,0x3F,0x00,0x00},	// 0x6C
    {0x3C,0x08,0x3C,0x08,0x3C},	// 0x6D
    {0x00,0x3C,0x08,0x04,0x38},	// 0x6E
    {0x00,0x18,0x24,0x24,0x18},	// 0x6F
    {0x00,0x7C,0x24,0x24,0x18},	// 0x70
    {0x18,0x24,0x24,0x7C,0x00},	// 0x71
    {0x00,0x3C,0x08,0x04,0x00},	// 0x72
    {0x00,0x28,0x2C,0x14,0x00},	// 0x73
    {0x00,0x04,0x1E,0x24,0x04},	// 0x74
    {0x00,0x1C,0x20,0x10,0x3C},	// 0x75
    {0x00,0x0C,0x30,0x30,0x0C},	// 0x76
    {0x0C,0x30,0x1C,0x30,0x0C},	// 0x77
    {0x00,0x24,0x18,0x18,0x24},	// 0x78
    {0x40,0x4C,0x70,0x30,0x0C},	// 0x79
    {0x00,0x34,0x2C,0x2C,0x00},	// 0x7A
    {0x00,0x08,0x36,0x41,0x00},	// 0x7B
    {0x00,0x00,0x7F,0x00,0x00},	// 0x7C
    {0x00,0x41,0x36,0x08,0x00},	// 0x7D
    {0x10,0x08,0x08,0x10,0x08},	// 0x7E
    {0x00,0x3C,0x22,0x3C,0x00},	// 0x7F
  };

#endif
