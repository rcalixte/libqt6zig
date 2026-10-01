#pragma once
#ifndef DESIGNER_LIBLAYOUTDECORATION_H
#define DESIGNER_LIBLAYOUTDECORATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDesignerLayoutDecorationExtension QDesignerLayoutDecorationExtension;
typedef struct QLayout QLayout;
typedef struct QLayoutItem QLayoutItem;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
#endif

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

QDesignerLayoutDecorationExtension* QDesignerLayoutDecorationExtension_new();
libqt_list /* of QWidget* */ QDesignerLayoutDecorationExtension_Widgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout);
QRect* QDesignerLayoutDecorationExtension_ItemInfo(const QDesignerLayoutDecorationExtension* self, int index);
int QDesignerLayoutDecorationExtension_IndexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget);
int QDesignerLayoutDecorationExtension_IndexOf2(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item);
int QDesignerLayoutDecorationExtension_CurrentInsertMode(const QDesignerLayoutDecorationExtension* self);
int QDesignerLayoutDecorationExtension_CurrentIndex(const QDesignerLayoutDecorationExtension* self);
pair_int_int /* tuple of int and int */ QDesignerLayoutDecorationExtension_CurrentCell(const QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_InsertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, const pair_int_int /* tuple of int and int */ cell);
void QDesignerLayoutDecorationExtension_RemoveWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget);
void QDesignerLayoutDecorationExtension_InsertRow(QDesignerLayoutDecorationExtension* self, int row);
void QDesignerLayoutDecorationExtension_InsertColumn(QDesignerLayoutDecorationExtension* self, int column);
void QDesignerLayoutDecorationExtension_Simplify(QDesignerLayoutDecorationExtension* self);
int QDesignerLayoutDecorationExtension_FindItemAt(const QDesignerLayoutDecorationExtension* self, const QPoint* pos);
int QDesignerLayoutDecorationExtension_FindItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column);
void QDesignerLayoutDecorationExtension_AdjustIndicator(QDesignerLayoutDecorationExtension* self, const QPoint* pos, int index);
void QDesignerLayoutDecorationExtension_OnWidgets(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnItemInfo(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnIndexOf(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnIndexOf2(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnCurrentInsertMode(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnCurrentIndex(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnCurrentCell(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnInsertWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnRemoveWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnInsertRow(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnInsertColumn(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnSimplify(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnFindItemAt(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnFindItemAt2(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_OnAdjustIndicator(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_Delete(QDesignerLayoutDecorationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
