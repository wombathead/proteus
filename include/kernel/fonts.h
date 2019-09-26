/**
 * @file fonts.h
 * @brief Character map for system font
 */

#ifndef _FONTS_H
#define _FONTS_H

#include <stdint.h>

static const char dhepper8x8[128][8] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0000 (nul)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0001
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0002
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0003
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0004
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0005
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0006
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0007
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0008
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0009
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000A
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000B
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000C
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000D
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000E
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000F
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0010
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0011
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0012
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0013
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0014
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0015
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0016
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0017
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0018
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0019
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001A
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001B
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001C
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001D
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001E
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001F
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0020 (space)
	{ 0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00},   // U+0021 (!)
	{ 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0022 (")
	{ 0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00},   // U+0023 (#)
	{ 0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00},   // U+0024 ($)
	{ 0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00},   // U+0025 (%)
	{ 0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00},   // U+0026 (&)
	{ 0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0027 (')
	{ 0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00},   // U+0028 (()
	{ 0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00},   // U+0029 ())
	{ 0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00},   // U+002A (*)
	{ 0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00},   // U+002B (+)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06},   // U+002C (,)
	{ 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00},   // U+002D (-)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00},   // U+002E (.)
	{ 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00},   // U+002F (/)
	{ 0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00},   // U+0030 (0)
	{ 0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00},   // U+0031 (1)
	{ 0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00},   // U+0032 (2)
	{ 0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00},   // U+0033 (3)
	{ 0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00},   // U+0034 (4)
	{ 0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00},   // U+0035 (5)
	{ 0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00},   // U+0036 (6)
	{ 0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00},   // U+0037 (7)
	{ 0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00},   // U+0038 (8)
	{ 0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00},   // U+0039 (9)
	{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00},   // U+003A (:)
	{ 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06},   // U+003B (//)
	{ 0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00},   // U+003C (<)
	{ 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00},   // U+003D (=)
	{ 0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00},   // U+003E (>)
	{ 0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00},   // U+003F (?)
	{ 0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00},   // U+0040 (@)
	{ 0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00},   // U+0041 (A)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00},   // U+0042 (B)
	{ 0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00},   // U+0043 (C)
	{ 0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00},   // U+0044 (D)
	{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00},   // U+0045 (E)
	{ 0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00},   // U+0046 (F)
	{ 0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00},   // U+0047 (G)
	{ 0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00},   // U+0048 (H)
	{ 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00},   // U+0049 (I)
	{ 0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00},   // U+004A (J)
	{ 0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00},   // U+004B (K)
	{ 0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00},   // U+004C (L)
	{ 0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00},   // U+004D (M)
	{ 0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00},   // U+004E (N)
	{ 0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00},   // U+004F (O)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00},   // U+0050 (P)
	{ 0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00},   // U+0051 (Q)
	{ 0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00},   // U+0052 (R)
	{ 0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00},   // U+0053 (S)
	{ 0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00},   // U+0054 (T)
	{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00},   // U+0055 (U)
	{ 0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00},   // U+0056 (V)
	{ 0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00},   // U+0057 (W)
	{ 0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00},   // U+0058 (X)
	{ 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00},   // U+0059 (Y)
	{ 0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00},   // U+005A (Z)
	{ 0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00},   // U+005B ([)
	{ 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00},   // U+005C (\)
	{ 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00},   // U+005D (])
	{ 0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00},   // U+005E (^)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF},   // U+005F (_)
	{ 0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0060 (`)
	{ 0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00},   // U+0061 (a)
	{ 0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00},   // U+0062 (b)
	{ 0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00},   // U+0063 (c)
	{ 0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00},   // U+0064 (d)
	{ 0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00},   // U+0065 (e)
	{ 0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00},   // U+0066 (f)
	{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F},   // U+0067 (g)
	{ 0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00},   // U+0068 (h)
	{ 0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00},   // U+0069 (i)
	{ 0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E},   // U+006A (j)
	{ 0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00},   // U+006B (k)
	{ 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00},   // U+006C (l)
	{ 0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00},   // U+006D (m)
	{ 0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00},   // U+006E (n)
	{ 0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00},   // U+006F (o)
	{ 0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F},   // U+0070 (p)
	{ 0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78},   // U+0071 (q)
	{ 0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00},   // U+0072 (r)
	{ 0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00},   // U+0073 (s)
	{ 0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00},   // U+0074 (t)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00},   // U+0075 (u)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00},   // U+0076 (v)
	{ 0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00},   // U+0077 (w)
	{ 0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00},   // U+0078 (x)
	{ 0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F},   // U+0079 (y)
	{ 0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00},   // U+007A (z)
	{ 0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00},   // U+007B ({)
	{ 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00},   // U+007C (|)
	{ 0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00},   // U+007D (})
	{ 0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+007E (~)
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}    // U+007F
};

/*
   static const unsigned char font_8x16[256][16] = {

   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x7e, 0x81, 0xa5, 0x81, 0x81, 0xbd, 
   0x99, 0x81, 0x81, 0x7e, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x7e, 0xff, 0xdb, 0xff, 0xff, 0xc3, 
   0xe7, 0xff, 0xff, 0x7e, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x00, 0x6c, 0xfe, 0xfe, 0xfe, 
   0xfe, 0x7c, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x7c, 0xfe, 
   0x7c, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x18, 0x3c, 0x3c, 0xe7, 0xe7, 
   0xe7, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x18, 0x3c, 0x7e, 0xff, 0xff, 
   0x7e, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 
   0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

   { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xc3, 
   0xc3, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff },

   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x66, 0x42, 
   0x42, 0x66, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00 },

   { 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x99, 0xbd, 
   0xbd, 0x99, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff },

   { 0x00, 0x00, 0x1e, 0x0e, 0x1a, 0x32, 0x78, 0xcc, 
   0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 
   0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x3f, 0x33, 0x3f, 0x30, 0x30, 0x30, 
   0x30, 0x70, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x7f, 0x63, 0x7f, 0x63, 0x63, 0x63, 
   0x63, 0x67, 0xe7, 0xe6, 0xc0, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x18, 0x18, 0xdb, 0x3c, 0xe7, 
   0x3c, 0xdb, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfe, 0xf8, 
   0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x02, 0x06, 0x0e, 0x1e, 0x3e, 0xfe, 0x3e, 
   0x1e, 0x0e, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 
   0x7e, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 
   0x66, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x7f, 0xdb, 0xdb, 0xdb, 0x7b, 0x1b, 
   0x1b, 0x1b, 0x1b, 0x1b, 0x00, 0x00, 0x00, 0x00 },

   { 0x00, 0x7c, 0xc6, 0x60, 0x38, 0x6c, 0xc6, 0xc6, 
   0x6c, 0x38, 0x0c, 0xc6, 0x7c, 0x00, 0x00, 0x00 },

   { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0xfe, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 
	0x7e, 0x3c, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x7e, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0c, 0xfe, 
	0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x60, 0xfe, 
	0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 
	0xc0, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6c, 0xfe, 
	0x6c, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x7c, 
	0x7c, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0x7c, 0x7c, 
	0x38, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 
	0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x66, 0x66, 0x66, 0x24, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x6c, 0x6c, 0xfe, 0x6c, 0x6c, 
	0x6c, 0xfe, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00 },

{ 0x18, 0x18, 0x7c, 0xc6, 0xc2, 0xc0, 0x7c, 0x06, 
	0x06, 0x86, 0xc6, 0x7c, 0x18, 0x18, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0xc2, 0xc6, 0x0c, 0x18, 
	0x30, 0x60, 0xc6, 0x86, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x76, 0xdc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x30, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x30, 
	0x30, 0x30, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x3c, 0xff, 
	0x3c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7e, 
	0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x18, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0c, 0x18, 
	0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x6c, 0xc6, 0xc6, 0xd6, 0xd6, 
	0xc6, 0xc6, 0x6c, 0x38, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x38, 0x78, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0x06, 0x0c, 0x18, 0x30, 
	0x60, 0xc0, 0xc6, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0x06, 0x06, 0x3c, 0x06, 
	0x06, 0x06, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x0c, 0x1c, 0x3c, 0x6c, 0xcc, 0xfe, 
	0x0c, 0x0c, 0x0c, 0x1e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0xc0, 0xc0, 0xc0, 0xfc, 0x06, 
	0x06, 0x06, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x60, 0xc0, 0xc0, 0xfc, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0xc6, 0x06, 0x06, 0x0c, 0x18, 
	0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0x7c, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0x7e, 0x06, 
	0x06, 0x06, 0x0c, 0x78, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 
	0x00, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x06, 0x0c, 0x18, 0x30, 0x60, 
	0x30, 0x18, 0x0c, 0x06, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 
	0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0c, 0x06, 
	0x0c, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0x0c, 0x18, 0x18, 
	0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xde, 0xde, 
	0xde, 0xdc, 0xc0, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x10, 0x38, 0x6c, 0xc6, 0xc6, 0xfe, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfc, 0x66, 0x66, 0x66, 0x7c, 0x66, 
	0x66, 0x66, 0x66, 0xfc, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x66, 0xc2, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc2, 0x66, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xf8, 0x6c, 0x66, 0x66, 0x66, 0x66, 
	0x66, 0x66, 0x6c, 0xf8, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0x66, 0x62, 0x68, 0x78, 0x68, 
	0x60, 0x62, 0x66, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0x66, 0x62, 0x68, 0x78, 0x68, 
	0x60, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x66, 0xc2, 0xc0, 0xc0, 0xde, 
	0xc6, 0xc6, 0x66, 0x3a, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 0xc6, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0xcc, 0xcc, 0xcc, 0x78, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xe6, 0x66, 0x66, 0x6c, 0x78, 0x78, 
	0x6c, 0x66, 0x66, 0xe6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 
	0x60, 0x62, 0x66, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xee, 0xfe, 0xfe, 0xd6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xe6, 0xf6, 0xfe, 0xde, 0xce, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfc, 0x66, 0x66, 0x66, 0x7c, 0x60, 
	0x60, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xd6, 0xde, 0x7c, 0x0c, 0x0e, 0x00, 0x00 },

{ 0x00, 0x00, 0xfc, 0x66, 0x66, 0x66, 0x7c, 0x6c, 
	0x66, 0x66, 0x66, 0xe6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0x60, 0x38, 0x0c, 
	0x06, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7e, 0x7e, 0x5a, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0x6c, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xd6, 0xd6, 
	0xd6, 0xfe, 0xee, 0x6c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0xc6, 0x6c, 0x7c, 0x38, 0x38, 
	0x7c, 0x6c, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0xc6, 0x86, 0x0c, 0x18, 0x30, 
	0x60, 0xc2, 0xc6, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x30, 0x30, 0x30, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 
	0x1c, 0x0e, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x10, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00 },

{ 0x00, 0x30, 0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xe0, 0x60, 0x60, 0x78, 0x6c, 0x66, 
	0x66, 0x66, 0x66, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x1c, 0x0c, 0x0c, 0x3c, 0x6c, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xfe, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x1c, 0x36, 0x32, 0x30, 0x78, 0x30, 
	0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0xcc, 0x78, 0x00 },

{ 0x00, 0x00, 0xe0, 0x60, 0x60, 0x6c, 0x76, 0x66, 
	0x66, 0x66, 0x66, 0xe6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x18, 0x00, 0x38, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x06, 0x06, 0x00, 0x0e, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3c, 0x00 },

{ 0x00, 0x00, 0xe0, 0x60, 0x60, 0x66, 0x6c, 0x78, 
	0x78, 0x6c, 0x66, 0xe6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0xfe, 0xd6, 
	0xd6, 0xd6, 0xd6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x66, 0x66, 
	0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x66, 0x66, 
	0x66, 0x66, 0x66, 0x7c, 0x60, 0x60, 0xf0, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0x0c, 0x1e, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x76, 0x66, 
	0x60, 0x60, 0x60, 0xf0, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0x60, 
	0x38, 0x0c, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x10, 0x30, 0x30, 0xfc, 0x30, 0x30, 
	0x30, 0x30, 0x36, 0x1c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0x6c, 0x38, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xd6, 
	0xd6, 0xd6, 0xfe, 0x6c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0x6c, 0x38, 
	0x38, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7e, 0x06, 0x0c, 0xf8, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xcc, 0x18, 
	0x30, 0x60, 0xc6, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x0e, 0x18, 0x18, 0x18, 0x70, 0x18, 
	0x18, 0x18, 0x18, 0x0e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x70, 0x18, 0x18, 0x18, 0x0e, 0x18, 
	0x18, 0x18, 0x18, 0x70, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x6c, 0xc6, 
	0xc6, 0xc6, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x66, 0xc2, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc2, 0x66, 0x3c, 0x18, 0x70, 0x00, 0x00 },

{ 0x00, 0x00, 0xcc, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x0c, 0x18, 0x30, 0x00, 0x7c, 0xc6, 0xfe, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x10, 0x38, 0x6c, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xcc, 0x00, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0x30, 0x18, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x38, 0x6c, 0x38, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc0, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x18, 0x70, 0x00, 0x00 },

{ 0x00, 0x10, 0x38, 0x6c, 0x00, 0x7c, 0xc6, 0xfe, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0x00, 0x00, 0x7c, 0xc6, 0xfe, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0x30, 0x18, 0x00, 0x7c, 0xc6, 0xfe, 
	0xc0, 0xc0, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x66, 0x00, 0x00, 0x38, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x18, 0x3c, 0x66, 0x00, 0x38, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0x30, 0x18, 0x00, 0x38, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0xc6, 0x00, 0x10, 0x38, 0x6c, 0xc6, 0xc6, 
	0xfe, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x38, 0x6c, 0x38, 0x10, 0x38, 0x6c, 0xc6, 0xfe, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x0c, 0x18, 0x00, 0xfe, 0x66, 0x62, 0x68, 0x78, 
	0x68, 0x62, 0x66, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x36, 0x36, 
	0x7e, 0xd8, 0xd8, 0x6e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3e, 0x6c, 0xcc, 0xcc, 0xfe, 0xcc, 
	0xcc, 0xcc, 0xcc, 0xce, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x10, 0x38, 0x6c, 0x00, 0x7c, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0x30, 0x18, 0x00, 0x7c, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x30, 0x78, 0xcc, 0x00, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0x30, 0x18, 0x00, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xc6, 0x00, 0x00, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7e, 0x06, 0x0c, 0x78, 0x00 },

{ 0x00, 0xc6, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0xc6, 0x00, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x18, 0x18, 0x7c, 0xc6, 0xc0, 0xc0, 0xc0, 
	0xc6, 0x7c, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x38, 0x6c, 0x64, 0x60, 0xf0, 0x60, 0x60, 
	0x60, 0x60, 0xe6, 0xfc, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x66, 0x66, 0x3c, 0x18, 0x7e, 0x18, 
	0x7e, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0xf8, 0xcc, 0xcc, 0xf8, 0xc4, 0xcc, 0xde, 
	0xcc, 0xcc, 0xcc, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x0e, 0x1b, 0x18, 0x18, 0x18, 0x7e, 0x18, 
	0x18, 0x18, 0xd8, 0x70, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x18, 0x30, 0x60, 0x00, 0x78, 0x0c, 0x7c, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x0c, 0x18, 0x30, 0x00, 0x38, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x18, 0x30, 0x60, 0x00, 0x7c, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x18, 0x30, 0x60, 0x00, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x76, 0xdc, 0x00, 0xdc, 0x66, 0x66, 
	0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00 },

{ 0x76, 0xdc, 0x00, 0xc6, 0xe6, 0xf6, 0xfe, 0xde, 
	0xce, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x3c, 0x6c, 0x6c, 0x3e, 0x00, 0x7e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x00, 0x7c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x60, 
	0xc0, 0xc6, 0xc6, 0x7c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xc0, 
	0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x06, 
	0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x60, 0xe0, 0x62, 0x66, 0x6c, 0x18, 0x30, 
	0x60, 0xdc, 0x86, 0x0c, 0x18, 0x3e, 0x00, 0x00 },

{ 0x00, 0x60, 0xe0, 0x62, 0x66, 0x6c, 0x18, 0x30, 
	0x66, 0xce, 0x9a, 0x3f, 0x06, 0x06, 0x00, 0x00 },

{ 0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 
	0x3c, 0x3c, 0x3c, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x6c, 0xd8, 
	0x6c, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x6c, 0x36, 
	0x6c, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 
	0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44 },

{ 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
	0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa },

{ 0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77, 
	0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77, 0xdd, 0x77 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0xf8, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xf6, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x18, 0xf8, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0xf6, 0x06, 0xf6, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x06, 0xf6, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0xf6, 0x06, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0x18, 0xf8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x18, 0x1f, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x30, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x30, 0x37, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0xf7, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf7, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x30, 0x37, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0xf7, 0x00, 0xf7, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0x00, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x18, 0x1f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x18, 0x1f, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xff, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0xff, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff },

{ 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0 },

{ 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f },

{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xdc, 0xd8, 
	0xd8, 0xd8, 0xdc, 0x76, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0xd8, 0xcc, 
	0xc6, 0xc6, 0xc6, 0xcc, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0xc6, 0xc6, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x6c, 0x6c, 
	0x6c, 0x6c, 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0xfe, 0xc6, 0x60, 0x30, 0x18, 0x18, 
	0x30, 0x60, 0xc6, 0xfe, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xd8, 0xd8, 
	0xd8, 0xd8, 0xd8, 0x70, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 
	0x66, 0x66, 0x66, 0x7c, 0x60, 0x60, 0xc0, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x76, 0xdc, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x7e, 0x18, 0x3c, 0x66, 0x66, 0x66, 
	0x66, 0x3c, 0x18, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x6c, 0xc6, 0xc6, 0xfe, 0xc6, 
	0xc6, 0xc6, 0x6c, 0x38, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0x6c, 
	0x6c, 0x6c, 0x6c, 0xee, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x1e, 0x30, 0x18, 0x0c, 0x3e, 0x66, 
	0x66, 0x66, 0x66, 0x3c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xdb, 0xdb, 
	0xdb, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x03, 0x06, 0x7e, 0xdb, 0xdb, 
	0xf3, 0x7e, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x1c, 0x30, 0x60, 0x60, 0x7c, 0x60, 
	0x60, 0x60, 0x30, 0x1c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 
	0xc6, 0xc6, 0xc6, 0xc6, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xfe, 
	0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7e, 0x18, 
	0x18, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x30, 0x18, 0x0c, 0x06, 0x0c, 
	0x18, 0x30, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x0c, 0x18, 0x30, 0x60, 0x30, 
	0x18, 0x0c, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x0e, 0x1b, 0x1b, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },

{ 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0xd8, 0xd8, 0xd8, 0x70, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x7e, 
	0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xdc, 0x00, 
	0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x38, 0x6c, 0x6c, 0x38, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0xec, 
	0x6c, 0x6c, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x6c, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x3c, 0x66, 0x0c, 0x18, 0x32, 0x7e, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x7e, 0x7e, 
	0x7e, 0x7e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00 },

{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

	};
*/
#endif
