#pragma once
#ifndef LIBQALGORITHMS_H
#define LIBQALGORITHMS_H

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

unsigned int qalgorithms_QPopulationCount(unsigned int v);
unsigned int qalgorithms_QPopulationCount2(unsigned char v);
unsigned int qalgorithms_QPopulationCount3(uint16_t v);
unsigned int qalgorithms_QPopulationCount4(unsigned long long v);
unsigned int qalgorithms_QPopulationCount5(unsigned long v);
unsigned int qalgorithms_QCountTrailingZeroBits(unsigned int v);
unsigned int qalgorithms_QCountTrailingZeroBits2(unsigned char v);
unsigned int qalgorithms_QCountTrailingZeroBits3(uint16_t v);
unsigned int qalgorithms_QCountTrailingZeroBits4(unsigned long long v);
unsigned int qalgorithms_QCountTrailingZeroBits5(unsigned long v);
unsigned int qalgorithms_QCountLeadingZeroBits(unsigned int v);
unsigned int qalgorithms_QCountLeadingZeroBits2(unsigned char v);
unsigned int qalgorithms_QCountLeadingZeroBits3(uint16_t v);
unsigned int qalgorithms_QCountLeadingZeroBits4(unsigned long long v);
unsigned int qalgorithms_QCountLeadingZeroBits5(unsigned long v);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
