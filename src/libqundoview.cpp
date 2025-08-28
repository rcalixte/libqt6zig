#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qundoview.h>
#include "libqundoview.h"
#include "libqundoview.hxx"

QUndoView* QUndoView_new(QWidget* parent) {
    return new VirtualQUndoView(parent);
}

QUndoView* QUndoView_new2() {
    return new VirtualQUndoView();
}

QUndoView* QUndoView_new3(QUndoStack* stack) {
    return new VirtualQUndoView(stack);
}

QUndoView* QUndoView_new4(QUndoGroup* group) {
    return new VirtualQUndoView(group);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
    return new VirtualQUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
    return new VirtualQUndoView(group, parent);
}

QMetaObject* QUndoView_MetaObject(const QUndoView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUndoView_Metacast(QUndoView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUndoView_Metacall(QUndoView* self, int param1, int param2, void** param3) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQUndoView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QUndoView_Tr(const char* s) {
    QString _ret = QUndoView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
    return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
    return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setEmptyLabel(label_QString);
}

libqt_string QUndoView_EmptyLabel(const QUndoView* self) {
    QString _ret = self->emptyLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QUndoView_SetCleanIcon(QUndoView* self, const QIcon* icon) {
    self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
    return new QIcon(self->cleanIcon());
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
    self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
    self->setGroup(group);
}

libqt_string QUndoView_Tr2(const char* s, const char* c) {
    QString _ret = QUndoView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QUndoView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QUndoView_QBaseMetacall(QUndoView* self, int param1, int param2, void** param3) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Metacall_IsBase(true);
        return vqundoview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QUndoView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetacall(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Metacall_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QUndoView_VisualRect(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QRect(vqundoview->visualRect(*index));
    } else {
        return new QRect(((VirtualQUndoView*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QUndoView_QBaseVisualRect(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VisualRect_IsBase(true);
        return new QRect(vqundoview->visualRect(*index));
    } else {
        return new QRect(((VirtualQUndoView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRect(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VisualRect_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollTo(QUndoView* self, const QModelIndex* index, int hint) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QUndoView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollTo(QUndoView* self, const QModelIndex* index, int hint) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollTo_IsBase(true);
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QUndoView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollTo(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollTo_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QUndoView_IndexAt(const QUndoView* self, const QPoint* p) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QModelIndex(vqundoview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQUndoView*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QUndoView_QBaseIndexAt(const QUndoView* self, const QPoint* p) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IndexAt_IsBase(true);
        return new QModelIndex(vqundoview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQUndoView*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIndexAt(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IndexAt_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DoItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->doItemsLayout();
    } else {
        self->QUndoView::doItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseDoItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DoItemsLayout_IsBase(true);
        vqundoview->doItemsLayout();
    } else {
        self->QUndoView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDoItemsLayout(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DoItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Reset(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->reset();
    } else {
        self->QUndoView::reset();
    }
}

// Base class handler implementation
void QUndoView_QBaseReset(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Reset_IsBase(true);
        vqundoview->reset();
    } else {
        self->QUndoView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnReset(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Reset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetRootIndex(QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setRootIndex(*index);
    } else {
        self->QUndoView::setRootIndex(*index);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetRootIndex(QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetRootIndex_IsBase(true);
        vqundoview->setRootIndex(*index);
    } else {
        self->QUndoView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetRootIndex(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetRootIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_Event(QUndoView* self, QEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->event(e);
    } else {
        return ((VirtualQUndoView*)self)->event(e);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEvent(QUndoView* self, QEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Event_IsBase(true);
        return vqundoview->event(e);
    } else {
        return ((VirtualQUndoView*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Event_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollContentsBy(QUndoView* self, int dx, int dy) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQUndoView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollContentsBy(QUndoView* self, int dx, int dy) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollContentsBy_IsBase(true);
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQUndoView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollContentsBy(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQUndoView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QUndoView_QBaseDataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DataChanged_IsBase(true);
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQUndoView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDataChanged(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DataChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_RowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQUndoView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QUndoView_QBaseRowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RowsInserted_IsBase(true);
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQUndoView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsInserted(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RowsInserted_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_RowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQUndoView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QUndoView_QBaseRowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RowsAboutToBeRemoved_IsBase(true);
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQUndoView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsAboutToBeRemoved(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->mouseMoveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseMoveEvent_IsBase(true);
        vqundoview->mouseMoveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseMoveEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->mouseReleaseEvent(e);
    } else {
        ((VirtualQUndoView*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseReleaseEvent_IsBase(true);
        vqundoview->mouseReleaseEvent(e);
    } else {
        ((VirtualQUndoView*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseReleaseEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_WheelEvent(QUndoView* self, QWheelEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->wheelEvent(e);
    } else {
        ((VirtualQUndoView*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseWheelEvent(QUndoView* self, QWheelEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_WheelEvent_IsBase(true);
        vqundoview->wheelEvent(e);
    } else {
        ((VirtualQUndoView*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnWheelEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_WheelEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_TimerEvent(QUndoView* self, QTimerEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->timerEvent(e);
    } else {
        ((VirtualQUndoView*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseTimerEvent(QUndoView* self, QTimerEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_TimerEvent_IsBase(true);
        vqundoview->timerEvent(e);
    } else {
        ((VirtualQUndoView*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTimerEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_TimerEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ResizeEvent(QUndoView* self, QResizeEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->resizeEvent(e);
    } else {
        ((VirtualQUndoView*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseResizeEvent(QUndoView* self, QResizeEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ResizeEvent_IsBase(true);
        vqundoview->resizeEvent(e);
    } else {
        ((VirtualQUndoView*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnResizeEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ResizeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->dragMoveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragMoveEvent_IsBase(true);
        vqundoview->dragMoveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragMoveEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragMoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->dragLeaveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragLeaveEvent_IsBase(true);
        vqundoview->dragLeaveEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragLeaveEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DropEvent(QUndoView* self, QDropEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->dropEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDropEvent(QUndoView* self, QDropEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DropEvent_IsBase(true);
        vqundoview->dropEvent(e);
    } else {
        ((VirtualQUndoView*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDropEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DropEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StartDrag(QUndoView* self, int supportedActions) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQUndoView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QUndoView_QBaseStartDrag(QUndoView* self, int supportedActions) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StartDrag_IsBase(true);
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQUndoView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStartDrag(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StartDrag_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->initViewItemOption(option);
    } else {
        ((VirtualQUndoView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitViewItemOption_IsBase(true);
        vqundoview->initViewItemOption(option);
    } else {
        ((VirtualQUndoView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitViewItemOption(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitViewItemOption_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_PaintEvent(QUndoView* self, QPaintEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->paintEvent(e);
    } else {
        ((VirtualQUndoView*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBasePaintEvent(QUndoView* self, QPaintEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_PaintEvent_IsBase(true);
        vqundoview->paintEvent(e);
    } else {
        ((VirtualQUndoView*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_PaintEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_HorizontalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->horizontalOffset();
    } else {
        return ((VirtualQUndoView*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int QUndoView_QBaseHorizontalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalOffset_IsBase(true);
        return vqundoview->horizontalOffset();
    } else {
        return ((VirtualQUndoView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalOffset(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_VerticalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->verticalOffset();
    } else {
        return ((VirtualQUndoView*)self)->verticalOffset();
    }
}

// Base class handler implementation
int QUndoView_QBaseVerticalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalOffset_IsBase(true);
        return vqundoview->verticalOffset();
    } else {
        return ((VirtualQUndoView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalOffset(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QUndoView_MoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QModelIndex(vqundoview->moveCursor(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QUndoView_QBaseMoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MoveCursor_IsBase(true);
        return new QModelIndex(vqundoview->moveCursor(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveCursor(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MoveCursor_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetSelection(QUndoView* self, const QRect* rect, int command) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQUndoView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetSelection(QUndoView* self, const QRect* rect, int command) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetSelection_IsBase(true);
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQUndoView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelection(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetSelection_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QUndoView_VisualRegionForSelection(const QUndoView* self, const QItemSelection* selection) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QRegion(vqundoview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QUndoView_QBaseVisualRegionForSelection(const QUndoView* self, const QItemSelection* selection) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqundoview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRegionForSelection(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_SelectedIndexes(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        QList<QModelIndex> _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQUndoView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_QBaseSelectedIndexes(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQUndoView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectedIndexes(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectedIndexes_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->updateGeometries();
    } else {
        ((VirtualQUndoView*)self)->updateGeometries();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateGeometries_IsBase(true);
        vqundoview->updateGeometries();
    } else {
        ((VirtualQUndoView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateGeometries(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateGeometries_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_IsIndexHidden(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->isIndexHidden(*index);
    } else {
        return ((VirtualQUndoView*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QUndoView_QBaseIsIndexHidden(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IsIndexHidden_IsBase(true);
        return vqundoview->isIndexHidden(*index);
    } else {
        return ((VirtualQUndoView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIsIndexHidden(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IsIndexHidden_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQUndoView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QUndoView_QBaseSelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectionChanged_IsBase(true);
        vqundoview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQUndoView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionChanged(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectionChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->currentChanged(*current, *previous);
    } else {
        ((VirtualQUndoView*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QUndoView_QBaseCurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CurrentChanged_IsBase(true);
        vqundoview->currentChanged(*current, *previous);
    } else {
        ((VirtualQUndoView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCurrentChanged(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CurrentChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_ViewportSizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QSize(vqundoview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QUndoView_QBaseViewportSizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportSizeHint_IsBase(true);
        return new QSize(vqundoview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportSizeHint(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetModel(QUndoView* self, QAbstractItemModel* model) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setModel(model);
    } else {
        self->QUndoView::setModel(model);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetModel(QUndoView* self, QAbstractItemModel* model) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetModel_IsBase(true);
        vqundoview->setModel(model);
    } else {
        self->QUndoView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetModel(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetModel_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setSelectionModel(selectionModel);
    } else {
        self->QUndoView::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetSelectionModel_IsBase(true);
        vqundoview->setSelectionModel(selectionModel);
    } else {
        self->QUndoView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelectionModel(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetSelectionModel_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyboardSearch(QUndoView* self, const libqt_string search) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->keyboardSearch(search_QString);
    } else {
        self->QUndoView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyboardSearch(QUndoView* self, const libqt_string search) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyboardSearch_IsBase(true);
        vqundoview->keyboardSearch(search_QString);
    } else {
        self->QUndoView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyboardSearch(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyboardSearch_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SizeHintForRow(const QUndoView* self, int row) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QUndoView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QUndoView_QBaseSizeHintForRow(const QUndoView* self, int row) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHintForRow_IsBase(true);
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QUndoView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForRow(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHintForRow_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SizeHintForColumn(const QUndoView* self, int column) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QUndoView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QUndoView_QBaseSizeHintForColumn(const QUndoView* self, int column) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHintForColumn_IsBase(true);
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QUndoView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForColumn(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QUndoView_ItemDelegateForIndex(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->itemDelegateForIndex(*index);
    } else {
        return self->QUndoView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QUndoView_QBaseItemDelegateForIndex(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ItemDelegateForIndex_IsBase(true);
        return vqundoview->itemDelegateForIndex(*index);
    } else {
        return self->QUndoView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnItemDelegateForIndex(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QUndoView_InputMethodQuery(const QUndoView* self, int query) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QVariant(vqundoview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQUndoView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QUndoView_QBaseInputMethodQuery(const QUndoView* self, int query) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InputMethodQuery_IsBase(true);
        return new QVariant(vqundoview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQUndoView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodQuery(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InputMethodQuery_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SelectAll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->selectAll();
    } else {
        self->QUndoView::selectAll();
    }
}

// Base class handler implementation
void QUndoView_QBaseSelectAll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectAll_IsBase(true);
        vqundoview->selectAll();
    } else {
        self->QUndoView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectAll(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectAll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateEditorData(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->updateEditorData();
    } else {
        ((VirtualQUndoView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateEditorData(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateEditorData_IsBase(true);
        vqundoview->updateEditorData();
    } else {
        ((VirtualQUndoView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorData(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateEditorData_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateEditorGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->updateEditorGeometries();
    } else {
        ((VirtualQUndoView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateEditorGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateEditorGeometries_IsBase(true);
        vqundoview->updateEditorGeometries();
    } else {
        ((VirtualQUndoView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorGeometries(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQUndoView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QUndoView_QBaseVerticalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalScrollbarAction_IsBase(true);
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQUndoView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarAction(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQUndoView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QUndoView_QBaseHorizontalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalScrollbarAction_IsBase(true);
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQUndoView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarAction(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQUndoView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QUndoView_QBaseVerticalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalScrollbarValueChanged_IsBase(true);
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQUndoView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQUndoView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QUndoView_QBaseHorizontalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalScrollbarValueChanged_IsBase(true);
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQUndoView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CloseEditor(QUndoView* self, QWidget* editor, int hint) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQUndoView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QUndoView_QBaseCloseEditor(QUndoView* self, QWidget* editor, int hint) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CloseEditor_IsBase(true);
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQUndoView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEditor(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CloseEditor_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CommitData(QUndoView* self, QWidget* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->commitData(editor);
    } else {
        ((VirtualQUndoView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QUndoView_QBaseCommitData(QUndoView* self, QWidget* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CommitData_IsBase(true);
        vqundoview->commitData(editor);
    } else {
        ((VirtualQUndoView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCommitData(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CommitData_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_EditorDestroyed(QUndoView* self, QObject* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->editorDestroyed(editor);
    } else {
        ((VirtualQUndoView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QUndoView_QBaseEditorDestroyed(QUndoView* self, QObject* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EditorDestroyed_IsBase(true);
        vqundoview->editorDestroyed(editor);
    } else {
        ((VirtualQUndoView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEditorDestroyed(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EditorDestroyed_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_Edit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQUndoView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEdit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Edit2_IsBase(true);
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQUndoView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEdit2(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Edit2_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QUndoView_QBaseSelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionCommand(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SelectionCommand_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusNextPrevChild(QUndoView* self, bool next) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->focusNextPrevChild(next);
    } else {
        return ((VirtualQUndoView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusNextPrevChild(QUndoView* self, bool next) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusNextPrevChild_IsBase(true);
        return vqundoview->focusNextPrevChild(next);
    } else {
        return ((VirtualQUndoView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusNextPrevChild(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_ViewportEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->viewportEvent(event);
    } else {
        return ((VirtualQUndoView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseViewportEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportEvent_IsBase(true);
        return vqundoview->viewportEvent(event);
    } else {
        return ((VirtualQUndoView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MousePressEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->mousePressEvent(event);
    } else {
        ((VirtualQUndoView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMousePressEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MousePressEvent_IsBase(true);
        vqundoview->mousePressEvent(event);
    } else {
        ((VirtualQUndoView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMousePressEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MousePressEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQUndoView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseDoubleClickEvent_IsBase(true);
        vqundoview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQUndoView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseDoubleClickEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->dragEnterEvent(event);
    } else {
        ((VirtualQUndoView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragEnterEvent_IsBase(true);
        vqundoview->dragEnterEvent(event);
    } else {
        ((VirtualQUndoView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragEnterEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DragEnterEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_FocusInEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->focusInEvent(event);
    } else {
        ((VirtualQUndoView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseFocusInEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusInEvent_IsBase(true);
        vqundoview->focusInEvent(event);
    } else {
        ((VirtualQUndoView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusInEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusInEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_FocusOutEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->focusOutEvent(event);
    } else {
        ((VirtualQUndoView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseFocusOutEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusOutEvent_IsBase(true);
        vqundoview->focusOutEvent(event);
    } else {
        ((VirtualQUndoView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusOutEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusOutEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyPressEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->keyPressEvent(event);
    } else {
        ((VirtualQUndoView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyPressEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyPressEvent_IsBase(true);
        vqundoview->keyPressEvent(event);
    } else {
        ((VirtualQUndoView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyPressEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyPressEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->inputMethodEvent(event);
    } else {
        ((VirtualQUndoView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseInputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InputMethodEvent_IsBase(true);
        vqundoview->inputMethodEvent(event);
    } else {
        ((VirtualQUndoView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InputMethodEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_EventFilter(QUndoView* self, QObject* object, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->eventFilter(object, event);
    } else {
        return ((VirtualQUndoView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEventFilter(QUndoView* self, QObject* object, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EventFilter_IsBase(true);
        return vqundoview->eventFilter(object, event);
    } else {
        return ((VirtualQUndoView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEventFilter(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EventFilter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_MinimumSizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QSize(vqundoview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQUndoView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QUndoView_QBaseMinimumSizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MinimumSizeHint_IsBase(true);
        return new QSize(vqundoview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQUndoView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMinimumSizeHint(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_SizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QSize(vqundoview->sizeHint());
    } else {
        return new QSize(((VirtualQUndoView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QUndoView_QBaseSizeHint(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHint_IsBase(true);
        return new QSize(vqundoview->sizeHint());
    } else {
        return new QSize(((VirtualQUndoView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHint(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetupViewport(QUndoView* self, QWidget* viewport) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setupViewport(viewport);
    } else {
        self->QUndoView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetupViewport(QUndoView* self, QWidget* viewport) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetupViewport_IsBase(true);
        vqundoview->setupViewport(viewport);
    } else {
        self->QUndoView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetupViewport(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetupViewport_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->contextMenuEvent(param1);
    } else {
        ((VirtualQUndoView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ContextMenuEvent_IsBase(true);
        vqundoview->contextMenuEvent(param1);
    } else {
        ((VirtualQUndoView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnContextMenuEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ChangeEvent(QUndoView* self, QEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->changeEvent(param1);
    } else {
        ((VirtualQUndoView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseChangeEvent(QUndoView* self, QEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ChangeEvent_IsBase(true);
        vqundoview->changeEvent(param1);
    } else {
        ((VirtualQUndoView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChangeEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ChangeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->initStyleOption(option);
    } else {
        ((VirtualQUndoView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitStyleOption_IsBase(true);
        vqundoview->initStyleOption(option);
    } else {
        ((VirtualQUndoView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitStyleOption(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitStyleOption_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_DevType(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->devType();
    } else {
        return self->QUndoView::devType();
    }
}

// Base class handler implementation
int QUndoView_QBaseDevType(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DevType_IsBase(true);
        return vqundoview->devType();
    } else {
        return self->QUndoView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDevType(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DevType_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetVisible(QUndoView* self, bool visible) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setVisible(visible);
    } else {
        self->QUndoView::setVisible(visible);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetVisible(QUndoView* self, bool visible) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetVisible_IsBase(true);
        vqundoview->setVisible(visible);
    } else {
        self->QUndoView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetVisible(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetVisible_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_HeightForWidth(const QUndoView* self, int param1) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QUndoView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QUndoView_QBaseHeightForWidth(const QUndoView* self, int param1) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HeightForWidth_IsBase(true);
        return vqundoview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QUndoView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHeightForWidth(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HeightForWidth_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_HasHeightForWidth(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->hasHeightForWidth();
    } else {
        return self->QUndoView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QUndoView_QBaseHasHeightForWidth(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HasHeightForWidth_IsBase(true);
        return vqundoview->hasHeightForWidth();
    } else {
        return self->QUndoView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHasHeightForWidth(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QUndoView_PaintEngine(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->paintEngine();
    } else {
        return self->QUndoView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QUndoView_QBasePaintEngine(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_PaintEngine_IsBase(true);
        return vqundoview->paintEngine();
    } else {
        return self->QUndoView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEngine(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_PaintEngine_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->keyReleaseEvent(event);
    } else {
        ((VirtualQUndoView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyReleaseEvent_IsBase(true);
        vqundoview->keyReleaseEvent(event);
    } else {
        ((VirtualQUndoView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyReleaseEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_EnterEvent(QUndoView* self, QEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->enterEvent(event);
    } else {
        ((VirtualQUndoView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseEnterEvent(QUndoView* self, QEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EnterEvent_IsBase(true);
        vqundoview->enterEvent(event);
    } else {
        ((VirtualQUndoView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEnterEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_EnterEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_LeaveEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->leaveEvent(event);
    } else {
        ((VirtualQUndoView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseLeaveEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_LeaveEvent_IsBase(true);
        vqundoview->leaveEvent(event);
    } else {
        ((VirtualQUndoView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnLeaveEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_LeaveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MoveEvent(QUndoView* self, QMoveEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->moveEvent(event);
    } else {
        ((VirtualQUndoView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMoveEvent(QUndoView* self, QMoveEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MoveEvent_IsBase(true);
        vqundoview->moveEvent(event);
    } else {
        ((VirtualQUndoView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_MoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CloseEvent(QUndoView* self, QCloseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->closeEvent(event);
    } else {
        ((VirtualQUndoView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseCloseEvent(QUndoView* self, QCloseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CloseEvent_IsBase(true);
        vqundoview->closeEvent(event);
    } else {
        ((VirtualQUndoView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CloseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_TabletEvent(QUndoView* self, QTabletEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->tabletEvent(event);
    } else {
        ((VirtualQUndoView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseTabletEvent(QUndoView* self, QTabletEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_TabletEvent_IsBase(true);
        vqundoview->tabletEvent(event);
    } else {
        ((VirtualQUndoView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTabletEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_TabletEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ActionEvent(QUndoView* self, QActionEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->actionEvent(event);
    } else {
        ((VirtualQUndoView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseActionEvent(QUndoView* self, QActionEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ActionEvent_IsBase(true);
        vqundoview->actionEvent(event);
    } else {
        ((VirtualQUndoView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnActionEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ActionEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ShowEvent(QUndoView* self, QShowEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->showEvent(event);
    } else {
        ((VirtualQUndoView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseShowEvent(QUndoView* self, QShowEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ShowEvent_IsBase(true);
        vqundoview->showEvent(event);
    } else {
        ((VirtualQUndoView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnShowEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ShowEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HideEvent(QUndoView* self, QHideEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->hideEvent(event);
    } else {
        ((VirtualQUndoView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseHideEvent(QUndoView* self, QHideEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HideEvent_IsBase(true);
        vqundoview->hideEvent(event);
    } else {
        ((VirtualQUndoView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHideEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_HideEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_NativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQUndoView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QUndoView_QBaseNativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_NativeEvent_IsBase(true);
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQUndoView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnNativeEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_NativeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_Metric(const QUndoView* self, int param1) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQUndoView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QUndoView_QBaseMetric(const QUndoView* self, int param1) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Metric_IsBase(true);
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQUndoView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetric(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Metric_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitPainter(const QUndoView* self, QPainter* painter) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->initPainter(painter);
    } else {
        ((VirtualQUndoView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitPainter(const QUndoView* self, QPainter* painter) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitPainter_IsBase(true);
        vqundoview->initPainter(painter);
    } else {
        ((VirtualQUndoView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitPainter(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_InitPainter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QUndoView_Redirected(const QUndoView* self, QPoint* offset) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->redirected(offset);
    } else {
        return ((VirtualQUndoView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QUndoView_QBaseRedirected(const QUndoView* self, QPoint* offset) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Redirected_IsBase(true);
        return vqundoview->redirected(offset);
    } else {
        return ((VirtualQUndoView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRedirected(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Redirected_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QUndoView_SharedPainter(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->sharedPainter();
    } else {
        return ((VirtualQUndoView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QUndoView_QBaseSharedPainter(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SharedPainter_IsBase(true);
        return vqundoview->sharedPainter();
    } else {
        return ((VirtualQUndoView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSharedPainter(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SharedPainter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ChildEvent(QUndoView* self, QChildEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->childEvent(event);
    } else {
        ((VirtualQUndoView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseChildEvent(QUndoView* self, QChildEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ChildEvent_IsBase(true);
        vqundoview->childEvent(event);
    } else {
        ((VirtualQUndoView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChildEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ChildEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CustomEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->customEvent(event);
    } else {
        ((VirtualQUndoView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseCustomEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CustomEvent_IsBase(true);
        vqundoview->customEvent(event);
    } else {
        ((VirtualQUndoView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCustomEvent(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_CustomEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ConnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->connectNotify(*signal);
    } else {
        ((VirtualQUndoView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoView_QBaseConnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ConnectNotify_IsBase(true);
        vqundoview->connectNotify(*signal);
    } else {
        ((VirtualQUndoView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnConnectNotify(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ConnectNotify_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DisconnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoView_QBaseDisconnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DisconnectNotify_IsBase(true);
        vqundoview->disconnectNotify(*signal);
    } else {
        ((VirtualQUndoView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDisconnectNotify(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DisconnectNotify_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ResizeContents(QUndoView* self, int width, int height) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQUndoView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void QUndoView_QBaseResizeContents(QUndoView* self, int width, int height) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ResizeContents_IsBase(true);
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQUndoView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnResizeContents(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ResizeContents_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_ContentsSize(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QSize(vqundoview->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* QUndoView_QBaseContentsSize(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ContentsSize_IsBase(true);
        return new QSize(vqundoview->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnContentsSize(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ContentsSize_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QUndoView_RectForIndex(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QRect(vqundoview->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QUndoView_QBaseRectForIndex(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RectForIndex_IsBase(true);
        return new QRect(vqundoview->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRectForIndex(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_RectForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQUndoView*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetPositionForIndex_IsBase(true);
        vqundoview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQUndoView*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetPositionForIndex(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetPositionForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_State(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return static_cast<int>(vqundoview->state());
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->state());
    }
}

// Base class handler implementation
int QUndoView_QBaseState(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_State_IsBase(true);
        return static_cast<int>(vqundoview->state());
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnState(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_State_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetState(QUndoView* self, int state) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    } else {
        ((VirtualQUndoView*)self)->setState(static_cast<VirtualQUndoView::State>(state));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetState(QUndoView* self, int state) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetState_IsBase(true);
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    } else {
        ((VirtualQUndoView*)self)->setState(static_cast<VirtualQUndoView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetState(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetState_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScheduleDelayedItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQUndoView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseScheduleDelayedItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScheduleDelayedItemsLayout_IsBase(true);
        vqundoview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQUndoView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScheduleDelayedItemsLayout(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ExecuteDelayedItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->executeDelayedItemsLayout();
    } else {
        ((VirtualQUndoView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseExecuteDelayedItemsLayout(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ExecuteDelayedItemsLayout_IsBase(true);
        vqundoview->executeDelayedItemsLayout();
    } else {
        ((VirtualQUndoView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnExecuteDelayedItemsLayout(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetDirtyRegion(QUndoView* self, const QRegion* region) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setDirtyRegion(*region);
    } else {
        ((VirtualQUndoView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetDirtyRegion(QUndoView* self, const QRegion* region) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetDirtyRegion_IsBase(true);
        vqundoview->setDirtyRegion(*region);
    } else {
        ((VirtualQUndoView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetDirtyRegion(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollDirtyRegion(QUndoView* self, int dx, int dy) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQUndoView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollDirtyRegion(QUndoView* self, int dx, int dy) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollDirtyRegion_IsBase(true);
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQUndoView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollDirtyRegion(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QUndoView_DirtyRegionOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QPoint(vqundoview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QUndoView_QBaseDirtyRegionOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqundoview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDirtyRegionOffset(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StartAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->startAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseStartAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StartAutoScroll_IsBase(true);
        vqundoview->startAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStartAutoScroll(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StartAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StopAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->stopAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseStopAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StopAutoScroll_IsBase(true);
        vqundoview->stopAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStopAutoScroll(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_StopAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DoAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->doAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseDoAutoScroll(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DoAutoScroll_IsBase(true);
        vqundoview->doAutoScroll();
    } else {
        ((VirtualQUndoView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDoAutoScroll(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DoAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_DropIndicatorPosition(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QUndoView_QBaseDropIndicatorPosition(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQUndoView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDropIndicatorPosition(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetViewportMargins(QUndoView* self, int left, int top, int right, int bottom) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQUndoView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetViewportMargins(QUndoView* self, int left, int top, int right, int bottom) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetViewportMargins_IsBase(true);
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQUndoView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetViewportMargins(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SetViewportMargins_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QUndoView_ViewportMargins(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return new QMargins(vqundoview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QUndoView_QBaseViewportMargins(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportMargins_IsBase(true);
        return new QMargins(vqundoview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportMargins(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_ViewportMargins_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DrawFrame(QUndoView* self, QPainter* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->drawFrame(param1);
    } else {
        ((VirtualQUndoView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseDrawFrame(QUndoView* self, QPainter* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DrawFrame_IsBase(true);
        vqundoview->drawFrame(param1);
    } else {
        ((VirtualQUndoView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDrawFrame(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_DrawFrame_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateMicroFocus(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->updateMicroFocus();
    } else {
        ((VirtualQUndoView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateMicroFocus(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateMicroFocus_IsBase(true);
        vqundoview->updateMicroFocus();
    } else {
        ((VirtualQUndoView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateMicroFocus(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Create(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->create();
    } else {
        ((VirtualQUndoView*)self)->create();
    }
}

// Base class handler implementation
void QUndoView_QBaseCreate(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Create_IsBase(true);
        vqundoview->create();
    } else {
        ((VirtualQUndoView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCreate(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Create_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Destroy(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->destroy();
    } else {
        ((VirtualQUndoView*)self)->destroy();
    }
}

// Base class handler implementation
void QUndoView_QBaseDestroy(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Destroy_IsBase(true);
        vqundoview->destroy();
    } else {
        ((VirtualQUndoView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDestroy(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Destroy_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusNextChild(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->focusNextChild();
    } else {
        return ((VirtualQUndoView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusNextChild(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusNextChild_IsBase(true);
        return vqundoview->focusNextChild();
    } else {
        return ((VirtualQUndoView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusNextChild(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusNextChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusPreviousChild(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->focusPreviousChild();
    } else {
        return ((VirtualQUndoView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusPreviousChild(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusPreviousChild_IsBase(true);
        return vqundoview->focusPreviousChild();
    } else {
        return ((VirtualQUndoView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusPreviousChild(QUndoView* self, intptr_t slot) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUndoView_Sender(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->sender();
    } else {
        return ((VirtualQUndoView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QUndoView_QBaseSender(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Sender_IsBase(true);
        return vqundoview->sender();
    } else {
        return ((VirtualQUndoView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSender(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Sender_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SenderSignalIndex(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->senderSignalIndex();
    } else {
        return ((VirtualQUndoView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QUndoView_QBaseSenderSignalIndex(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SenderSignalIndex_IsBase(true);
        return vqundoview->senderSignalIndex();
    } else {
        return ((VirtualQUndoView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSenderSignalIndex(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_Receivers(const QUndoView* self, const char* signal) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->receivers(signal);
    } else {
        return ((VirtualQUndoView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QUndoView_QBaseReceivers(const QUndoView* self, const char* signal) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Receivers_IsBase(true);
        return vqundoview->receivers(signal);
    } else {
        return ((VirtualQUndoView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnReceivers(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_Receivers_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_IsSignalConnected(const QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUndoView_QBaseIsSignalConnected(const QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IsSignalConnected_IsBase(true);
        return vqundoview->isSignalConnected(*signal);
    } else {
        return ((VirtualQUndoView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIsSignalConnected(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_IsSignalConnected_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QUndoView_GetDecodedMetricF(const QUndoView* self, int metricA, int metricB) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        return vqundoview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQUndoView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QUndoView_QBaseGetDecodedMetricF(const QUndoView* self, int metricA, int metricB) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_GetDecodedMetricF_IsBase(true);
        return vqundoview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQUndoView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnGetDecodedMetricF(const QUndoView* self, intptr_t slot) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview && vqundoview->isVirtualQUndoView) {
        vqundoview->setQUndoView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_GetDecodedMetricF_Callback>(slot));
    }
}

void QUndoView_Delete(QUndoView* self) {
    delete self;
}
