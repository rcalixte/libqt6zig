#pragma once
#ifndef SRCC_LIBQGESTURERECOGNIZER_H
#define SRCC_LIBQGESTURERECOGNIZER_H

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
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureRecognizer QGestureRecognizer;
typedef struct QObject QObject;
#endif

QGestureRecognizer* QGestureRecognizer_new();
QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target);
void QGestureRecognizer_OnCreate(QGestureRecognizer* self, intptr_t slot);
QGesture* QGestureRecognizer_QBaseCreate(QGestureRecognizer* self, QObject* target);
int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event);
void QGestureRecognizer_OnRecognize(QGestureRecognizer* self, intptr_t slot);
int QGestureRecognizer_QBaseRecognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event);
void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state);
void QGestureRecognizer_OnReset(QGestureRecognizer* self, intptr_t slot);
void QGestureRecognizer_QBaseReset(QGestureRecognizer* self, QGesture* state);
int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer);
void QGestureRecognizer_UnregisterRecognizer(int typeVal);
void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, const QGestureRecognizer* param1);
void QGestureRecognizer_Delete(QGestureRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
