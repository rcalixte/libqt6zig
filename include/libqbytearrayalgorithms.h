#pragma once
#ifndef LIBQBYTEARRAYALGORITHMS_H
#define LIBQBYTEARRAYALGORITHMS_H

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

const void* qbytearrayalgorithms_Qmemrchr(const void* s, int needle, size_t n);
char* qbytearrayalgorithms_Qstrdup(const char* param1);
size_t qbytearrayalgorithms_Qstrlen(const char* str);
size_t qbytearrayalgorithms_Qstrnlen(const char* str, size_t maxlen);
char* qbytearrayalgorithms_Qstrcpy(char* dst, const char* src);
char* qbytearrayalgorithms_Qstrncpy(char* dst, const char* src, size_t len);
int qbytearrayalgorithms_Qstrcmp(const char* str1, const char* str2);
int qbytearrayalgorithms_Qstrncmp(const char* str1, const char* str2, size_t len);
int qbytearrayalgorithms_Qstricmp(const char* param1, const char* param2);
int qbytearrayalgorithms_Qstrnicmp(const char* param1, const char* param2, size_t len);
int qbytearrayalgorithms_Qstrnicmp2(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4);
uint16_t qbytearrayalgorithms_QChecksum(libqt_string data, int standard);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
