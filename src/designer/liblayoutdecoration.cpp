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
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        QList<QWidget*> _ret = vqdesignerlayoutdecorationextension->widgets(layout);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualQDesignerLayoutDecorationExtension*)self)->widgets(layout);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

QRect* QDesignerLayoutDecorationExtension_ItemInfo(const QDesignerLayoutDecorationExtension* self, int index) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return new QRect(vqdesignerlayoutdecorationextension->itemInfo(static_cast<int>(index)));
    } else {
        return new QRect(((VirtualQDesignerLayoutDecorationExtension*)self)->itemInfo(static_cast<int>(index)));
    }
}

int QDesignerLayoutDecorationExtension_IndexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return vqdesignerlayoutdecorationextension->indexOf(widget);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->indexOf(widget);
    }
}

int QDesignerLayoutDecorationExtension_IndexOf2(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return vqdesignerlayoutdecorationextension->indexOf(item);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->indexOf(item);
    }
}

int QDesignerLayoutDecorationExtension_CurrentInsertMode(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return static_cast<int>(vqdesignerlayoutdecorationextension->currentInsertMode());
    } else {
        return static_cast<int>(((VirtualQDesignerLayoutDecorationExtension*)self)->currentInsertMode());
    }
}

int QDesignerLayoutDecorationExtension_CurrentIndex(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return vqdesignerlayoutdecorationextension->currentIndex();
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->currentIndex();
    }
}

libqt_pair /* tuple of int and int */ QDesignerLayoutDecorationExtension_CurrentCell(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        QPair<int, int> _ret = vqdesignerlayoutdecorationextension->currentCell();
        // Convert QPair<> from C++ memory to manually-managed C memory
        int* _first = static_cast<int*>(malloc(sizeof(int)));
        int* _second = static_cast<int*>(malloc(sizeof(int)));
        *_first = _ret.first;
        *_second = _ret.second;
        libqt_pair _out;
        _out.first = static_cast<void*>(_first);
        _out.second = static_cast<void*>(_second);
        return _out;
    } else {
        QPair<int, int> _ret = ((VirtualQDesignerLayoutDecorationExtension*)self)->currentCell();
        // Convert QPair<> from C++ memory to manually-managed C memory
        int* _first = static_cast<int*>(malloc(sizeof(int)));
        int* _second = static_cast<int*>(malloc(sizeof(int)));
        *_first = _ret.first;
        *_second = _ret.second;
        libqt_pair _out;
        _out.first = static_cast<void*>(_first);
        _out.second = static_cast<void*>(_second);
        return _out;
    }
}

void QDesignerLayoutDecorationExtension_InsertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, const libqt_pair /* tuple of int and int */ cell) {
    QPair<int, int> cell_QPair;
    int* cell_first = static_cast<int*>(cell.first);
    int* cell_second = static_cast<int*>(cell.second);
    cell_QPair.first = static_cast<int>(cell_first[0]);
    cell_QPair.second = static_cast<int>(cell_second[0]);
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->insertWidget(widget, cell_QPair);
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertWidget(widget, cell_QPair);
    }
}

void QDesignerLayoutDecorationExtension_RemoveWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->removeWidget(widget);
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->removeWidget(widget);
    }
}

void QDesignerLayoutDecorationExtension_InsertRow(QDesignerLayoutDecorationExtension* self, int row) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->insertRow(static_cast<int>(row));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertRow(static_cast<int>(row));
    }
}

void QDesignerLayoutDecorationExtension_InsertColumn(QDesignerLayoutDecorationExtension* self, int column) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->insertColumn(static_cast<int>(column));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertColumn(static_cast<int>(column));
    }
}

void QDesignerLayoutDecorationExtension_Simplify(QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->simplify();
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->simplify();
    }
}

int QDesignerLayoutDecorationExtension_FindItemAt(const QDesignerLayoutDecorationExtension* self, const QPoint* pos) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return vqdesignerlayoutdecorationextension->findItemAt(*pos);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->findItemAt(*pos);
    }
}

int QDesignerLayoutDecorationExtension_FindItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        return vqdesignerlayoutdecorationextension->findItemAt(static_cast<int>(row), static_cast<int>(column));
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->findItemAt(static_cast<int>(row), static_cast<int>(column));
    }
}

void QDesignerLayoutDecorationExtension_AdjustIndicator(QDesignerLayoutDecorationExtension* self, const QPoint* pos, int index) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->adjustIndicator(*pos, static_cast<int>(index));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->adjustIndicator(*pos, static_cast<int>(index));
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ QDesignerLayoutDecorationExtension_QBaseWidgets(const QDesignerLayoutDecorationExtension* self, QLayout* layout) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_Widgets_IsBase(true);
        QList<QWidget*> _ret = vqdesignerlayoutdecorationextension->widgets(layout);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualQDesignerLayoutDecorationExtension*)self)->widgets(layout);
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnWidgets(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_Widgets_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_Widgets_Callback>(slot));
    }
}

// Base class handler implementation
QRect* QDesignerLayoutDecorationExtension_QBaseItemInfo(const QDesignerLayoutDecorationExtension* self, int index) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_ItemInfo_IsBase(true);
        return new QRect(vqdesignerlayoutdecorationextension->itemInfo(static_cast<int>(index)));
    } else {
        return new QRect(((VirtualQDesignerLayoutDecorationExtension*)self)->itemInfo(static_cast<int>(index)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnItemInfo(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_ItemInfo_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_ItemInfo_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseIndexOf(const QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_IndexOf_IsBase(true);
        return vqdesignerlayoutdecorationextension->indexOf(widget);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->indexOf(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnIndexOf(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_IndexOf_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_IndexOf_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseIndexOf2(const QDesignerLayoutDecorationExtension* self, QLayoutItem* item) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_IndexOf2_IsBase(true);
        return vqdesignerlayoutdecorationextension->indexOf(item);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->indexOf(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnIndexOf2(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_IndexOf2_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_IndexOf2_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseCurrentInsertMode(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentInsertMode_IsBase(true);
        return static_cast<int>(vqdesignerlayoutdecorationextension->currentInsertMode());
    } else {
        return static_cast<int>(((VirtualQDesignerLayoutDecorationExtension*)self)->currentInsertMode());
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentInsertMode(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentInsertMode_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentInsertMode_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseCurrentIndex(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentIndex_IsBase(true);
        return vqdesignerlayoutdecorationextension->currentIndex();
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->currentIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentIndex(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentIndex_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentIndex_Callback>(slot));
    }
}

// Base class handler implementation
libqt_pair /* tuple of int and int */ QDesignerLayoutDecorationExtension_QBaseCurrentCell(const QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentCell_IsBase(true);
        QPair<int, int> _ret = vqdesignerlayoutdecorationextension->currentCell();
        // Convert QPair<> from C++ memory to manually-managed C memory
        int* _first = static_cast<int*>(malloc(sizeof(int)));
        int* _second = static_cast<int*>(malloc(sizeof(int)));
        *_first = _ret.first;
        *_second = _ret.second;
        libqt_pair _out;
        _out.first = static_cast<void*>(_first);
        _out.second = static_cast<void*>(_second);
        return _out;
    } else {
        QPair<int, int> _ret = ((VirtualQDesignerLayoutDecorationExtension*)self)->currentCell();
        // Convert QPair<> from C++ memory to manually-managed C memory
        int* _first = static_cast<int*>(malloc(sizeof(int)));
        int* _second = static_cast<int*>(malloc(sizeof(int)));
        *_first = _ret.first;
        *_second = _ret.second;
        libqt_pair _out;
        _out.first = static_cast<void*>(_first);
        _out.second = static_cast<void*>(_second);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnCurrentCell(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_CurrentCell_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_CurrentCell_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseInsertWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget, const libqt_pair /* tuple of int and int */ cell) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    QPair<int, int> cell_QPair;
    int* cell_first = static_cast<int*>(cell.first);
    int* cell_second = static_cast<int*>(cell.second);
    cell_QPair.first = static_cast<int>(cell_first[0]);
    cell_QPair.second = static_cast<int>(cell_second[0]);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertWidget_IsBase(true);
        vqdesignerlayoutdecorationextension->insertWidget(widget, cell_QPair);
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertWidget(widget, cell_QPair);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertWidget_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseRemoveWidget(QDesignerLayoutDecorationExtension* self, QWidget* widget) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_RemoveWidget_IsBase(true);
        vqdesignerlayoutdecorationextension->removeWidget(widget);
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->removeWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnRemoveWidget(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_RemoveWidget_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_RemoveWidget_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseInsertRow(QDesignerLayoutDecorationExtension* self, int row) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertRow_IsBase(true);
        vqdesignerlayoutdecorationextension->insertRow(static_cast<int>(row));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertRow(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertRow_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertRow_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseInsertColumn(QDesignerLayoutDecorationExtension* self, int column) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertColumn_IsBase(true);
        vqdesignerlayoutdecorationextension->insertColumn(static_cast<int>(column));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->insertColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnInsertColumn(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_InsertColumn_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_InsertColumn_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseSimplify(QDesignerLayoutDecorationExtension* self) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_Simplify_IsBase(true);
        vqdesignerlayoutdecorationextension->simplify();
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->simplify();
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnSimplify(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_Simplify_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_Simplify_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseFindItemAt(const QDesignerLayoutDecorationExtension* self, const QPoint* pos) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_FindItemAt_IsBase(true);
        return vqdesignerlayoutdecorationextension->findItemAt(*pos);
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->findItemAt(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnFindItemAt(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_FindItemAt_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_FindItemAt_Callback>(slot));
    }
}

// Base class handler implementation
int QDesignerLayoutDecorationExtension_QBaseFindItemAt2(const QDesignerLayoutDecorationExtension* self, int row, int column) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_FindItemAt2_IsBase(true);
        return vqdesignerlayoutdecorationextension->findItemAt(static_cast<int>(row), static_cast<int>(column));
    } else {
        return ((VirtualQDesignerLayoutDecorationExtension*)self)->findItemAt(static_cast<int>(row), static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnFindItemAt2(const QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = const_cast<VirtualQDesignerLayoutDecorationExtension*>(dynamic_cast<const VirtualQDesignerLayoutDecorationExtension*>(self));
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_FindItemAt2_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_FindItemAt2_Callback>(slot));
    }
}

// Base class handler implementation
void QDesignerLayoutDecorationExtension_QBaseAdjustIndicator(QDesignerLayoutDecorationExtension* self, const QPoint* pos, int index) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_AdjustIndicator_IsBase(true);
        vqdesignerlayoutdecorationextension->adjustIndicator(*pos, static_cast<int>(index));
    } else {
        ((VirtualQDesignerLayoutDecorationExtension*)self)->adjustIndicator(*pos, static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDesignerLayoutDecorationExtension_OnAdjustIndicator(QDesignerLayoutDecorationExtension* self, intptr_t slot) {
    auto* vqdesignerlayoutdecorationextension = dynamic_cast<VirtualQDesignerLayoutDecorationExtension*>(self);
    if (vqdesignerlayoutdecorationextension && vqdesignerlayoutdecorationextension->isVirtualQDesignerLayoutDecorationExtension) {
        vqdesignerlayoutdecorationextension->setQDesignerLayoutDecorationExtension_AdjustIndicator_Callback(reinterpret_cast<VirtualQDesignerLayoutDecorationExtension::QDesignerLayoutDecorationExtension_AdjustIndicator_Callback>(slot));
    }
}

void QDesignerLayoutDecorationExtension_Delete(QDesignerLayoutDecorationExtension* self) {
    delete self;
}
