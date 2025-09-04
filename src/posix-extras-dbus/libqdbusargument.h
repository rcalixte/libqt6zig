#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSARGUMENT_H
#define SRC_POSIX_EXTRAS_DBUSC_LIBQDBUSARGUMENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDBusArgument QDBusArgument;
typedef struct QDBusObjectPath QDBusObjectPath;
typedef struct QDBusSignature QDBusSignature;
typedef struct QDBusUnixFileDescriptor QDBusUnixFileDescriptor;
typedef struct QDBusVariant QDBusVariant;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
#endif

QDBusArgument* QDBusArgument_new();
QDBusArgument* QDBusArgument_new2(const QDBusArgument* other);
void QDBusArgument_OperatorAssign(QDBusArgument* self, const QDBusArgument* other);
void QDBusArgument_Swap(QDBusArgument* self, QDBusArgument* other);
QDBusArgument* QDBusArgument_OperatorShiftLeft(QDBusArgument* self, unsigned char arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft2(QDBusArgument* self, bool arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft3(QDBusArgument* self, int16_t arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft4(QDBusArgument* self, uint16_t arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft5(QDBusArgument* self, int arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft6(QDBusArgument* self, unsigned int arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft7(QDBusArgument* self, long long arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft8(QDBusArgument* self, unsigned long long arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft9(QDBusArgument* self, double arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft10(QDBusArgument* self, const libqt_string arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft11(QDBusArgument* self, const QDBusVariant* arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft12(QDBusArgument* self, const QDBusObjectPath* arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft13(QDBusArgument* self, const QDBusSignature* arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft14(QDBusArgument* self, const QDBusUnixFileDescriptor* arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft15(QDBusArgument* self, const libqt_list /* of libqt_string */ arg);
QDBusArgument* QDBusArgument_OperatorShiftLeft16(QDBusArgument* self, const libqt_string arg);
void QDBusArgument_BeginStructure(QDBusArgument* self);
void QDBusArgument_EndStructure(QDBusArgument* self);
void QDBusArgument_BeginArray(QDBusArgument* self, int elementMetaTypeId);
void QDBusArgument_BeginArray2(QDBusArgument* self, QMetaType* elementMetaType);
void QDBusArgument_EndArray(QDBusArgument* self);
void QDBusArgument_BeginMap(QDBusArgument* self, int keyMetaTypeId, int valueMetaTypeId);
void QDBusArgument_BeginMap2(QDBusArgument* self, QMetaType* keyMetaType, QMetaType* valueMetaType);
void QDBusArgument_EndMap(QDBusArgument* self);
void QDBusArgument_BeginMapEntry(QDBusArgument* self);
void QDBusArgument_EndMapEntry(QDBusArgument* self);
void QDBusArgument_AppendVariant(QDBusArgument* self, const QVariant* v);
libqt_string QDBusArgument_CurrentSignature(const QDBusArgument* self);
int QDBusArgument_CurrentType(const QDBusArgument* self);
QDBusArgument* QDBusArgument_OperatorShiftRight(const QDBusArgument* self, unsigned char* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight2(const QDBusArgument* self, bool* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight3(const QDBusArgument* self, int16_t* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight4(const QDBusArgument* self, uint16_t* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight5(const QDBusArgument* self, int* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight6(const QDBusArgument* self, unsigned int* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight7(const QDBusArgument* self, long long* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight8(const QDBusArgument* self, unsigned long long* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight9(const QDBusArgument* self, double* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight10(const QDBusArgument* self, libqt_string arg);
QDBusArgument* QDBusArgument_OperatorShiftRight11(const QDBusArgument* self, QDBusVariant* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight12(const QDBusArgument* self, QDBusObjectPath* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight13(const QDBusArgument* self, QDBusSignature* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight14(const QDBusArgument* self, QDBusUnixFileDescriptor* arg);
QDBusArgument* QDBusArgument_OperatorShiftRight15(const QDBusArgument* self, libqt_list /* of libqt_string */ arg);
QDBusArgument* QDBusArgument_OperatorShiftRight16(const QDBusArgument* self, libqt_string arg);
void QDBusArgument_BeginStructure2(const QDBusArgument* self);
void QDBusArgument_EndStructure2(const QDBusArgument* self);
void QDBusArgument_BeginArray3(const QDBusArgument* self);
void QDBusArgument_EndArray2(const QDBusArgument* self);
void QDBusArgument_BeginMap3(const QDBusArgument* self);
void QDBusArgument_EndMap2(const QDBusArgument* self);
void QDBusArgument_BeginMapEntry2(const QDBusArgument* self);
void QDBusArgument_EndMapEntry2(const QDBusArgument* self);
bool QDBusArgument_AtEnd(const QDBusArgument* self);
QVariant* QDBusArgument_AsVariant(const QDBusArgument* self);
void QDBusArgument_Delete(QDBusArgument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
