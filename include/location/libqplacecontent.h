#pragma once
#ifndef SRC_LOCATIONC_LIBQPLACECONTENT_H
#define SRC_LOCATIONC_LIBQPLACECONTENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPlaceContent QPlaceContent;
typedef struct QPlaceSupplier QPlaceSupplier;
typedef struct QPlaceUser QPlaceUser;
typedef struct QVariant QVariant;
#endif

QPlaceContent* QPlaceContent_new();
QPlaceContent* QPlaceContent_new2(const QPlaceContent* other);
QPlaceContent* QPlaceContent_new3(int typeVal);
void QPlaceContent_OperatorAssign(QPlaceContent* self, const QPlaceContent* other);
void QPlaceContent_Swap(QPlaceContent* self, QPlaceContent* other);
void QPlaceContent_Detach(QPlaceContent* self);
bool QPlaceContent_OperatorEqual(const QPlaceContent* self, const QPlaceContent* other);
bool QPlaceContent_OperatorNotEqual(const QPlaceContent* self, const QPlaceContent* other);
int QPlaceContent_Type(const QPlaceContent* self);
libqt_list /* of int */ QPlaceContent_DataTags(const QPlaceContent* self);
QVariant* QPlaceContent_Value(const QPlaceContent* self, int tag);
void QPlaceContent_SetValue(QPlaceContent* self, int tag, const QVariant* param2);
QPlaceSupplier* QPlaceContent_Supplier(const QPlaceContent* self);
void QPlaceContent_SetSupplier(QPlaceContent* self, const QPlaceSupplier* supplier);
QPlaceUser* QPlaceContent_User(const QPlaceContent* self);
void QPlaceContent_SetUser(QPlaceContent* self, const QPlaceUser* user);
libqt_string QPlaceContent_Attribution(const QPlaceContent* self);
void QPlaceContent_SetAttribution(QPlaceContent* self, const libqt_string attribution);
void QPlaceContent_Delete(QPlaceContent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
