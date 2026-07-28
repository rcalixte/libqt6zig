#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSTYLEEXTENSIONS_H
#define EXTRAS_KWIDGETSADDONS_LIBKSTYLEEXTENSIONS_H

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

int KStyleExtensions_CustomControlElement(const libqt_string element, const QWidget* widget);
int KStyleExtensions_CustomStyleHint(const libqt_string element, const QWidget* widget);
int KStyleExtensions_CustomSubElement(const libqt_string element, const QWidget* widget);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
