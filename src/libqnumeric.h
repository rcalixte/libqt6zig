#pragma once
#ifndef LIBQNUMERIC_H
#define LIBQNUMERIC_H

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

bool qnumeric_QIsInf(double d);
bool qnumeric_QIsNaN(double d);
bool qnumeric_QIsFinite(double d);
int qnumeric_QFpClassify(double val);
bool qnumeric_QIsInf2(float f);
bool qnumeric_QIsNaN2(float f);
bool qnumeric_QIsFinite2(float f);
int qnumeric_QFpClassify2(float val);
double qnumeric_QSNaN();
double qnumeric_QQNaN();
double qnumeric_QInf();
unsigned int qnumeric_QFloatDistance(float a, float b);
unsigned long long qnumeric_QFloatDistance2(double a, double b);
int qnumeric_QRound(double d);
int qnumeric_QRound2(float f);
long long qnumeric_QRound64(double d);
long long qnumeric_QRound642(float f);
bool qnumeric_QFuzzyCompare(double p1, double p2);
bool qnumeric_QFuzzyCompare2(float p1, float p2);
bool qnumeric_QFuzzyIsNull(double d);
bool qnumeric_QFuzzyIsNull2(float f);
bool qnumeric_QIsNull(double d);
bool qnumeric_QIsNull2(float f);
int qnumeric_QIntCast(double f);
int qnumeric_QIntCast2(float f);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
