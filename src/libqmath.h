#pragma once
#ifndef LIBQMATH_H
#define LIBQMATH_H

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

double qmath_QFastSin(double x);
double qmath_QFastCos(double x);
float qmath_QDegreesToRadians(float degrees);
double qmath_QDegreesToRadians2(double degrees);
float qmath_QRadiansToDegrees(float radians);
double qmath_QRadiansToDegrees2(double radians);
unsigned int qmath_QNextPowerOfTwo(unsigned int v);
unsigned long long qmath_QNextPowerOfTwo2(unsigned long long v);
unsigned int qmath_QNextPowerOfTwo3(int v);
unsigned long long qmath_QNextPowerOfTwo4(long long v);
unsigned long qmath_QNextPowerOfTwo5(unsigned long v);
unsigned long qmath_QNextPowerOfTwo6(long v);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
