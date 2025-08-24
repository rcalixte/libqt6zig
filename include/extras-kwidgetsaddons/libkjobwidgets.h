#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKJOBWIDGETS_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKJOBWIDGETS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJobWidgets KJobWidgets;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

void KJobWidgets_SetWindow(QObject* param1, QWidget* param2);
void KJobWidgets_SetWindowHandle(QObject* param1, QWindow* param2);
QWidget* KJobWidgets_Window(QObject* param1);
QWindow* KJobWidgets_WindowHandle(QObject* param1);
void KJobWidgets_UpdateUserTimestamp(QObject* param1, unsigned long param2);
unsigned long KJobWidgets_UserTimestamp(QObject* param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
