#pragma once
#ifndef QML_LIBQQMLINFO_H
#define QML_LIBQQMLINFO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
typedef struct QDebug QDebug;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QObject QObject;
typedef struct QQmlError QQmlError;
typedef struct QQmlInfo QQmlInfo;
typedef struct QUrl QUrl;
#endif

QQmlInfo* qqmlinfo_h_QmlDebug(const QObject* me);
QQmlInfo* qqmlinfo_h_QmlDebug2(const QObject* me, const QQmlError* error);
QQmlInfo* qqmlinfo_h_QmlDebug3(const QObject* me, const libqt_list /* of QQmlError* */ errors);
QQmlInfo* qqmlinfo_h_QmlInfo(const QObject* me);
QQmlInfo* qqmlinfo_h_QmlInfo2(const QObject* me, const QQmlError* error);
QQmlInfo* qqmlinfo_h_QmlInfo3(const QObject* me, const libqt_list /* of QQmlError* */ errors);
QQmlInfo* qqmlinfo_h_QmlWarning(const QObject* me);
QQmlInfo* qqmlinfo_h_QmlWarning2(const QObject* me, const QQmlError* error);
QQmlInfo* qqmlinfo_h_QmlWarning3(const QObject* me, const libqt_list /* of QQmlError* */ errors);

QQmlInfo* QQmlInfo_new(const QQmlInfo* param1);
QQmlInfo* QQmlInfo_OperatorShiftLeft(QQmlInfo* self, QChar* t);
QQmlInfo* QQmlInfo_OperatorShiftLeft2(QQmlInfo* self, bool t);
QQmlInfo* QQmlInfo_OperatorShiftLeft3(QQmlInfo* self, char t);
QQmlInfo* QQmlInfo_OperatorShiftLeft4(QQmlInfo* self, int16_t t);
QQmlInfo* QQmlInfo_OperatorShiftLeft5(QQmlInfo* self, uint16_t t);
QQmlInfo* QQmlInfo_OperatorShiftLeft6(QQmlInfo* self, int t);
QQmlInfo* QQmlInfo_OperatorShiftLeft7(QQmlInfo* self, unsigned int t);
QQmlInfo* QQmlInfo_OperatorShiftLeft8(QQmlInfo* self, long t);
QQmlInfo* QQmlInfo_OperatorShiftLeft9(QQmlInfo* self, unsigned long t);
QQmlInfo* QQmlInfo_OperatorShiftLeft10(QQmlInfo* self, long long t);
QQmlInfo* QQmlInfo_OperatorShiftLeft11(QQmlInfo* self, unsigned long long t);
QQmlInfo* QQmlInfo_OperatorShiftLeft12(QQmlInfo* self, float t);
QQmlInfo* QQmlInfo_OperatorShiftLeft13(QQmlInfo* self, double t);
QQmlInfo* QQmlInfo_OperatorShiftLeft14(QQmlInfo* self, const char* t);
QQmlInfo* QQmlInfo_OperatorShiftLeft15(QQmlInfo* self, const libqt_string t);
QQmlInfo* QQmlInfo_OperatorShiftLeft16(QQmlInfo* self, libqt_string t);
QQmlInfo* QQmlInfo_OperatorShiftLeft17(QQmlInfo* self, const libqt_string t);
QQmlInfo* QQmlInfo_OperatorShiftLeft18(QQmlInfo* self, const libqt_string t);
QQmlInfo* QQmlInfo_OperatorShiftLeft19(QQmlInfo* self, const void* t);
QQmlInfo* QQmlInfo_OperatorShiftLeft20(QQmlInfo* self, intptr_t f);
QQmlInfo* QQmlInfo_OperatorShiftLeft22(QQmlInfo* self, const QUrl* t);
void QQmlInfo_Delete(QQmlInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
