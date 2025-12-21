#pragma once
#ifndef SRC_DESIGNERC_LIBABSTRACTDNDITEM_H
#define SRC_DESIGNERC_LIBABSTRACTDNDITEM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerDnDItemInterface QDesignerDnDItemInterface;
typedef struct QPoint QPoint;
typedef struct QWidget QWidget;
#endif

QWidget* QDesignerDnDItemInterface_Widget(const QDesignerDnDItemInterface* self);
QWidget* QDesignerDnDItemInterface_Decoration(const QDesignerDnDItemInterface* self);
QPoint* QDesignerDnDItemInterface_HotSpot(const QDesignerDnDItemInterface* self);
int QDesignerDnDItemInterface_Type(const QDesignerDnDItemInterface* self);
QWidget* QDesignerDnDItemInterface_Source(const QDesignerDnDItemInterface* self);
void QDesignerDnDItemInterface_Delete(QDesignerDnDItemInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
