#pragma once
#ifndef SRCC_LIBQWHATSTHIS_H
#define SRCC_LIBQWHATSTHIS_H

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
typedef struct QAction QAction;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QWhatsThis QWhatsThis;
typedef struct QWidget QWidget;
#endif

QWhatsThis* QWhatsThis_new(const QWhatsThis* other);
QWhatsThis* QWhatsThis_new2(QWhatsThis* other);
void QWhatsThis_CopyAssign(QWhatsThis* self, QWhatsThis* other);
void QWhatsThis_MoveAssign(QWhatsThis* self, QWhatsThis* other);
void QWhatsThis_EnterWhatsThisMode();
bool QWhatsThis_InWhatsThisMode();
void QWhatsThis_LeaveWhatsThisMode();
void QWhatsThis_ShowText(const QPoint* pos, const libqt_string text);
void QWhatsThis_HideText();
QAction* QWhatsThis_CreateAction();
void QWhatsThis_ShowText3(const QPoint* pos, const libqt_string text, QWidget* w);
QAction* QWhatsThis_CreateAction1(QObject* parent);
void QWhatsThis_Delete(QWhatsThis* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
