// -*- mode: c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2; coding: utf-8-unix -*-
// ***** BEGIN LICENSE BLOCK *****
////////////////////////////////////////////////////////////////////
// Copyright (c) 2011-2013 RALOVICH, Kristóf                      //
//                                                                //
// This program is free software; you can redistribute it and/or  //
// modify it under the terms of the GNU General Public License    //
// version 2 as published by the Free Software Foundation.        //
//                                                                //
////////////////////////////////////////////////////////////////////
// ***** END LICENSE BLOCK *****
#pragma once

#ifndef _MSC_VER // [

//#include <cstdint>
//#error "Use this header only with Microsoft Visual C++ compilers!"
#include <boost/cstdint.hpp>

#else

#include "w_stdint.h"

#endif // _MSC_VER ]

//#ifndef _MSC_VER
#ifndef INT8_MAX
#define INT8_MAX 0x7F
#endif
#ifndef UINT8_MAX
#define UINT8_MAX 0xFF
#endif
#ifndef INT16_MAX
#define INT16_MAX 0x7FFF
#endif
#ifndef UINT16_MAX
#define UINT16_MAX 0xFFFF
#endif
#ifndef INT32_MAX
#define INT32_MAX 0x7FFFFFFF
#endif
#ifndef UINT32_MAX
#define UINT32_MAX 0xFFFFFFFF
#endif
//#endif
