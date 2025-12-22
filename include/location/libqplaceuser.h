#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACEUSER_H
#define SRC_LOCATIONC_LIBQPLACEUSER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceUser QPlaceUser;
#endif

QPlaceUser* QPlaceUser_new();
QPlaceUser* QPlaceUser_new2(const QPlaceUser* other);
void QPlaceUser_OperatorAssign(QPlaceUser* self, const QPlaceUser* other);
void QPlaceUser_Swap(QPlaceUser* self, QPlaceUser* other);
libqt_string QPlaceUser_UserId(const QPlaceUser* self);
void QPlaceUser_SetUserId(QPlaceUser* self, const libqt_string identifier);
libqt_string QPlaceUser_Name(const QPlaceUser* self);
void QPlaceUser_SetName(QPlaceUser* self, const libqt_string name);
void QPlaceUser_Delete(QPlaceUser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
