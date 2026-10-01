#include <QDesignerLayoutDecorationExtension>
#include <QLayout>
#include <QLayoutItem>
#include <QList>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include <layoutdecoration.h>
#include "liblayoutdecoration.h"
#include "liblayoutdecoration.hxx"

QDesignerLayoutDecorationExtension* QDesignerLayoutDecorationExtension_new() {
    return new VirtualQDesignerLayoutDecorationExtension();
}

libqt_list /* of QWidget* */ QDesignerLayoutDecorationExtension_Widgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout) {
    QList<QWidget*> _ret = self->widgets(layout);
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QRect* QDesignerLayoutDecorationExtension_ItemInfo(const QDesignerLayoutDecorationExtension* self, int index) {
    return new QRect(self->itemInfo(static_cast<int>(index)));
}

int QDesignerLayoutDecorationExtension_IndexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    return self->indexOf(widget);
}

int QDesignerLayoutDecorationExtension_IndexOf2(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item) {
    return self->indexOf(item);
}

int QDesignerLayoutDecorationExtension_CurrentInsertMode(const QDesignerLayoutDecorationExtension* self) {
    return static_cast<int>(self->currentInsertMode());
}

int QDesignerLayoutDecorationExtension_CurrentIndex(const QDesignerLayoutDecorationExtension* self) {
    return self->currentIndex();
}

pair_int_int /* tuple of int and int */ QDesignerLayoutDecorationExtension_CurrentCell(const QDesignerLayoutDecorationExtension* self) {
    QPair<int, int> _ret = self->currentCell();
    // Convert QPair<> from C++ memory to manually-managed C memory
    pair_int_int /* tuple of int and int */ _out;
    _out.first = _ret.first;
    _out.second = _ret.second;
    return _out;
}

void QDesignerLayoutDecorationExtension_InsertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, const pair_int_int /* tuple of int and int */ cell) {
    QPair<int, int> cell_QPair;
    cell_QPair.first = cell.first;
    cell_QPair.second = cell.second;
    self->insertWidget(widget, cell_QPair);
}

void QDesignerLayoutDecorationExtension_RemoveWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    self->removeWidget(widget);
}

void QDesignerLayoutDecorationExtension_InsertRow(QDesignerLayoutDecorationExtension* self, int row) {
    self->insertRow(static_cast<int>(row));
}

void QDesignerLayoutDecorationExtension_InsertColumn(QDesignerLayoutDecorationExtension* self, int column) {
    self->insertColumn(static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_Simplify(QDesignerLayoutDecorationExtension* self) {
    self->simplify();
}

int QDesignerLayoutDecorationExtension_FindItemAt(const QDesignerLayoutDecorationExtension* self, const QPoint* pos) {
    return self->findItemAt(*pos);
}

int QDesignerLayoutDecorationExtension_FindItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column) {
    return self->findItemAt(static_cast<int>(row), static_cast<int>(column));
}

void QDesignerLayoutDecorationExtension_AdjustIndicator(QDesignerLayoutDecorationExtension* self, const QPoint* pos, int index) {
    self->adjustIndicator(*pos, static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnWidgets(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_widgets_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_Widgets_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnItemInfo(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_iteminfo_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_ItemInfo_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnIndexOf(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_indexof_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_IndexOf_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnIndexOf2(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_indexof2_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_IndexOf2_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentInsertMode(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_currentinsertmode_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentIndex(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_currentindex_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentIndex_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentCell(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_currentcell_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentCell_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_insertwidget_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnRemoveWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_removewidget_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_RemoveWidget_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertRow(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_insertrow_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertRow_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertColumn(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_insertcolumn_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertColumn_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnSimplify(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_simplify_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_Simplify_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnFindItemAt(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_finditemat_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_FindItemAt_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnFindItemAt2(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self)))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_finditemat2_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_FindItemAt2_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnAdjustIndicator(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    if (auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self))
        vqdesignerlayoutdecorationextension->qdesignerlayoutdecorationextension_adjustindicator_callback = reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_AdjustIndicator_Callback>(slot);
}

void QDesignerLayoutDecorationExtension_Delete(QDesignerLayoutDecorationExtension* self) {
    delete self;
}
