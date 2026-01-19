#pragma once
#ifndef SRC_DESIGNERC_LIBLAYOUTDECORATION_H
#define SRC_DESIGNERC_LIBLAYOUTDECORATION_H

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
void QDesignerLayoutDecorationExtension_OnWidgets(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
libqt_list /* of QWidget* */ QDesignerLayoutDecorationExtension_QBaseWidgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout);
void QDesignerLayoutDecorationExtension_OnItemInfo(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
QRect* QDesignerLayoutDecorationExtension_QBaseItemInfo(const QDesignerLayoutDecorationExtension* self, int index);
void QDesignerLayoutDecorationExtension_OnIndexOf(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseIndexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget);
void QDesignerLayoutDecorationExtension_OnIndexOf2(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseIndexOf2(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item);
void QDesignerLayoutDecorationExtension_OnCurrentInsertMode(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseCurrentInsertMode(const QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_OnCurrentIndex(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseCurrentIndex(const QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_OnCurrentCell(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
pair_int_int /* tuple of int and int */ QDesignerLayoutDecorationExtension_QBaseCurrentCell(const QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_OnInsertWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseInsertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, const pair_int_int /* tuple of int and int */ cell);
void QDesignerLayoutDecorationExtension_OnRemoveWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseRemoveWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget);
void QDesignerLayoutDecorationExtension_OnInsertRow(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseInsertRow(QDesignerLayoutDecorationExtension* self, int row);
void QDesignerLayoutDecorationExtension_OnInsertColumn(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseInsertColumn(QDesignerLayoutDecorationExtension* self, int column);
void QDesignerLayoutDecorationExtension_OnSimplify(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseSimplify(QDesignerLayoutDecorationExtension* self);
void QDesignerLayoutDecorationExtension_OnFindItemAt(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseFindItemAt(const QDesignerLayoutDecorationExtension* self, const QPoint* pos);
void QDesignerLayoutDecorationExtension_OnFindItemAt2(const QDesignerLayoutDecorationExtension* self, intptr_t slot);
int QDesignerLayoutDecorationExtension_QBaseFindItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column);
void QDesignerLayoutDecorationExtension_OnAdjustIndicator(QDesignerLayoutDecorationExtension* self, intptr_t slot);
void QDesignerLayoutDecorationExtension_QBaseAdjustIndicator(QDesignerLayoutDecorationExtension* self, const QPoint* pos, int index);
void QDesignerLayoutDecorationExtension_Delete(QDesignerLayoutDecorationExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
