#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEICON_H
#define SRC_LOCATIONC_LIBQPLACEICON_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceIcon QPlaceIcon;
typedef struct QPlaceManager QPlaceManager;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QPlaceIcon* QPlaceIcon_new();
QPlaceIcon* QPlaceIcon_new2(const QPlaceIcon* other);
void QPlaceIcon_OperatorAssign(QPlaceIcon* self, const QPlaceIcon* other);
void QPlaceIcon_Swap(QPlaceIcon* self, QPlaceIcon* other);
QUrl* QPlaceIcon_Url(const QPlaceIcon* self);
QPlaceManager* QPlaceIcon_Manager(const QPlaceIcon* self);
void QPlaceIcon_SetManager(QPlaceIcon* self, QPlaceManager* manager);
libqt_map /* of libqt_string to QVariant* */ QPlaceIcon_Parameters(const QPlaceIcon* self);
void QPlaceIcon_SetParameters(QPlaceIcon* self, const libqt_map /* of libqt_string to QVariant* */ parameters);
bool QPlaceIcon_IsEmpty(const QPlaceIcon* self);
QUrl* QPlaceIcon_Url1(const QPlaceIcon* self, const QSize* size);
void QPlaceIcon_Delete(QPlaceIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
