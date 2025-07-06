#pragma once
#ifndef SRC_MULTIMEDIAC_LIBQCAPTURABLEWINDOW_H
#define SRC_MULTIMEDIAC_LIBQCAPTURABLEWINDOW_H

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
typedef struct QCapturableWindow QCapturableWindow;
#endif

QCapturableWindow* QCapturableWindow_new();
QCapturableWindow* QCapturableWindow_new2(const QCapturableWindow* other);
void QCapturableWindow_OperatorAssign(QCapturableWindow* self, const QCapturableWindow* other);
void QCapturableWindow_Swap(QCapturableWindow* self, QCapturableWindow* other);
bool QCapturableWindow_IsValid(const QCapturableWindow* self);
libqt_string QCapturableWindow_Description(const QCapturableWindow* self);
void QCapturableWindow_Delete(QCapturableWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
