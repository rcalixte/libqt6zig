#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBQPRINTENGINE_H
#define SRC_PRINTSUPPORTC_LIBQPRINTENGINE_H

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
typedef struct QPrintEngine QPrintEngine;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QPrintEngine::PrintEnginePropertyKey PrintEnginePropertyKey; // C++ enum
#else
typedef int PrintEnginePropertyKey; // C ABI enum
#endif

void QPrintEngine_SetProperty(QPrintEngine* self, int key, QVariant* value);
QVariant* QPrintEngine_Property(const QPrintEngine* self, int key);
bool QPrintEngine_NewPage(QPrintEngine* self);
bool QPrintEngine_Abort(QPrintEngine* self);
int QPrintEngine_Metric(const QPrintEngine* self, int param1);
int QPrintEngine_PrinterState(const QPrintEngine* self);
void QPrintEngine_OperatorAssign(QPrintEngine* self, QPrintEngine* param1);
void QPrintEngine_Delete(QPrintEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
