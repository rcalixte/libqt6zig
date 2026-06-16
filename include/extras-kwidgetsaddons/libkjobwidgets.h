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

void KJobWidgets_SetWindow(QObject* job, QWidget* widget);
void KJobWidgets_SetWindowHandle(QObject* job, QWindow* window);
QWidget* KJobWidgets_Window(QObject* job);
QWindow* KJobWidgets_WindowHandle(QObject* job);
void KJobWidgets_UpdateUserTimestamp(QObject* job, unsigned long time);
unsigned long KJobWidgets_UserTimestamp(QObject* job);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
