#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBKSTYLEEXTENSIONS_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBKSTYLEEXTENSIONS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStyleExtensions KStyleExtensions;
typedef struct QWidget QWidget;
#endif

int KStyleExtensions_CustomControlElement(const libqt_string param1, const QWidget* param2);
int KStyleExtensions_CustomStyleHint(const libqt_string param1, const QWidget* param2);
int KStyleExtensions_CustomSubElement(const libqt_string param1, const QWidget* param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
