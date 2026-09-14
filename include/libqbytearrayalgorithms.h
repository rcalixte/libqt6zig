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

const void* qbytearrayalgorithms_h_Qmemrchr(const void* s, int needle, size_t n);
char* qbytearrayalgorithms_h_Qstrdup(const char* param1);
size_t qbytearrayalgorithms_h_Qstrlen(const char* str);
size_t qbytearrayalgorithms_h_Qstrnlen(const char* str, size_t maxlen);
char* qbytearrayalgorithms_h_Qstrcpy(char* dst, const char* src);
char* qbytearrayalgorithms_h_Qstrncpy(char* dst, const char* src, size_t len);
int qbytearrayalgorithms_h_Qstrcmp(const char* str1, const char* str2);
int qbytearrayalgorithms_h_Qstrncmp(const char* str1, const char* str2, size_t len);
int qbytearrayalgorithms_h_Qstricmp(const char* param1, const char* param2);
int qbytearrayalgorithms_h_Qstrnicmp(const char* param1, const char* param2, size_t len);
int qbytearrayalgorithms_h_Qstrnicmp2(const char* param1, ptrdiff_t param2, const char* param3, ptrdiff_t param4);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
