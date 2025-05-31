#pragma once
#ifndef SRCC_LIBQDRAWUTIL_H
#define SRCC_LIBQDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTileRules QTileRules;
#endif

#ifdef __cplusplus
typedef QDrawBorderPixmap::DrawingHint DrawingHint;   // C++ enum
typedef QDrawBorderPixmap::DrawingHints DrawingHints; // C++ QFlags
#else
typedef int DrawingHint;  // C ABI enum
typedef int DrawingHints; // C ABI QFlags
#endif

QTileRules* QTileRules_new(const QTileRules* other);
QTileRules* QTileRules_new2(QTileRules* other);
QTileRules* QTileRules_new3(int horizontalRule, int verticalRule);
QTileRules* QTileRules_new4();
QTileRules* QTileRules_new5(const QTileRules* param1);
QTileRules* QTileRules_new6(int rule);
void QTileRules_CopyAssign(QTileRules* self, QTileRules* other);
void QTileRules_MoveAssign(QTileRules* self, QTileRules* other);
void QTileRules_Delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
