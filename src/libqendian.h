#pragma once
#ifndef LIBQENDIAN_H
#define LIBQENDIAN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

unsigned long long qendian_h_QbswapHelper(unsigned long long source);
unsigned int qendian_h_QbswapHelper2(unsigned int source);
uint16_t qendian_h_QbswapHelper3(uint16_t source);
unsigned char qendian_h_QbswapHelper4(unsigned char source);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
