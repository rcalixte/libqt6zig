#pragma once
#ifndef LIBQHASHFUNCTIONS_H
#define LIBQHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBitArray QBitArray;
typedef struct QChar QChar;
typedef struct QHashSeed QHashSeed;
typedef struct QKeyCombination QKeyCombination;
#endif

int qhashfunctions_QGlobalQHashSeed();
void qhashfunctions_QSetGlobalQHashSeed(int newSeed);
size_t qhashfunctions_QHashBits(const void* p, size_t size, size_t seed);
size_t qhashfunctions_QHash(char key, size_t seed);
size_t qhashfunctions_QHash2(unsigned char key, size_t seed);
size_t qhashfunctions_QHash3(signed char key, size_t seed);
size_t qhashfunctions_QHash4(uint16_t key, size_t seed);
size_t qhashfunctions_QHash5(int16_t key, size_t seed);
size_t qhashfunctions_QHash6(unsigned int key, size_t seed);
size_t qhashfunctions_QHash7(int key, size_t seed);
size_t qhashfunctions_QHash8(unsigned long key, size_t seed);
size_t qhashfunctions_QHash9(long key, size_t seed);
size_t qhashfunctions_QHash10(unsigned long long key, size_t seed);
size_t qhashfunctions_QHash11(long long key, size_t seed);
size_t qhashfunctions_QHash12(float key, size_t seed);
size_t qhashfunctions_QHash13(double key, size_t seed);
size_t qhashfunctions_QHash19(const QChar* key, size_t seed);
size_t qhashfunctions_QHash20(libqt_string key, size_t seed);
size_t qhashfunctions_QHash22(libqt_string key, size_t seed);
size_t qhashfunctions_QHash23(const libqt_string key, size_t seed);
size_t qhashfunctions_QHash24(const QBitArray* key, size_t seed);
size_t qhashfunctions_QHash25(libqt_string key, size_t seed);
size_t qhashfunctions_QHash26(QKeyCombination* key, size_t seed);
unsigned int qhashfunctions_Hash(libqt_string key, unsigned int chained);

QHashSeed* QHashSeed_new(const QHashSeed* other);
QHashSeed* QHashSeed_new2(QHashSeed* other);
QHashSeed* QHashSeed_new3();
QHashSeed* QHashSeed_new4(size_t d);
void QHashSeed_CopyAssign(QHashSeed* self, QHashSeed* other);
void QHashSeed_MoveAssign(QHashSeed* self, QHashSeed* other);
size_t QHashSeed_ToUnsignedLong(const QHashSeed* self);
QHashSeed* QHashSeed_GlobalSeed();
void QHashSeed_SetDeterministicGlobalSeed();
void QHashSeed_ResetRandomGlobalSeed();
void QHashSeed_Delete(QHashSeed* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
