#pragma once
#ifndef SRC_PDFC_LIBQPDFLINK_H
#define SRC_PDFC_LIBQPDFLINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPdfLink QPdfLink;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QUrl QUrl;
#endif

#ifdef __cplusplus
typedef QPdfLink::QtGadgetHelper QtGadgetHelper; // C++ QFlags
#else
typedef void QtGadgetHelper; // C ABI QFlags
#endif

QPdfLink* QPdfLink_new();
QPdfLink* QPdfLink_new2(QPdfLink* other);
void QPdfLink_OperatorAssign(QPdfLink* self, QPdfLink* other);
void QPdfLink_Swap(QPdfLink* self, QPdfLink* other);
bool QPdfLink_IsValid(const QPdfLink* self);
int QPdfLink_Page(const QPdfLink* self);
QPointF* QPdfLink_Location(const QPdfLink* self);
double QPdfLink_Zoom(const QPdfLink* self);
QUrl* QPdfLink_Url(const QPdfLink* self);
libqt_string QPdfLink_ContextBefore(const QPdfLink* self);
libqt_string QPdfLink_ContextAfter(const QPdfLink* self);
libqt_list /* of QRectF* */ QPdfLink_Rectangles(const QPdfLink* self);
libqt_string QPdfLink_ToString(const QPdfLink* self);
void QPdfLink_CopyToClipboard(const QPdfLink* self);
void QPdfLink_CopyToClipboard1(const QPdfLink* self, int mode);
void QPdfLink_Delete(QPdfLink* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
