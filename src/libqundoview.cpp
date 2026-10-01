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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QUndoView_Tr(const char* s) {
    auto _ret = QUndoView::tr(s);
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
    auto _ret = self->emptyLabel();
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
    auto _ret = QUndoView::tr(s, c);
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
    auto _ret = QUndoView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QUndoView_SuperMetaObject(const QUndoView* self) {
    return (QMetaObject*)self->QUndoView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetaObject(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_metaobject_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QUndoView_SuperMetacast(QUndoView* self, const char* param1) {
    return self->QUndoView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetacast(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_metacast_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QUndoView_SuperMetacall(QUndoView* self, int param1, int param2, void** param3) {
    return self->QUndoView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetacall(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_metacall_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Metacall_Callback>(slot);
}

// Derived class handler implementation
QRect* QUndoView_VisualRect(const QUndoView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* QUndoView_SuperVisualRect(const QUndoView* self, const QModelIndex* index) {
    return new QRect(self->QUndoView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRect(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_visualrect_callback = reinterpret_cast<VirtualQUndoView::QUndoView_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ScrollTo(QUndoView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QUndoView_SuperScrollTo(QUndoView* self, const QModelIndex* index, int hint) {
    self->QUndoView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollTo(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_scrollto_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QUndoView_IndexAt(const QUndoView* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* QUndoView_SuperIndexAt(const QUndoView* self, const QPoint* p) {
    return new QModelIndex(self->QUndoView::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIndexAt(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_indexat_callback = reinterpret_cast<VirtualQUndoView::QUndoView_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DoItemsLayout(QUndoView* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void QUndoView_SuperDoItemsLayout(QUndoView* self) {
    self->QUndoView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDoItemsLayout(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_doitemslayout_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_Reset(QUndoView* self) {
    self->reset();
}

// Base class handler implementation
void QUndoView_SuperReset(QUndoView* self) {
    self->QUndoView::reset();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnReset(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_reset_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Reset_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetRootIndex(QUndoView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void QUndoView_SuperSetRootIndex(QUndoView* self, const QModelIndex* index) {
    self->QUndoView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetRootIndex(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setrootindex_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_Event(QUndoView* self, QEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->event(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperEvent(QUndoView* self, QEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::event(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_event_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Event_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ScrollContentsBy(QUndoView* self, int dx, int dy) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QUndoView::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperScrollContentsBy(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QUndoView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollContentsBy(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_scrollcontentsby_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method QUndoView::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDataChanged(QUndoView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QUndoView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDataChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_datachanged_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_RowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QUndoView::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperRowsInserted(QUndoView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QUndoView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsInserted(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_rowsinserted_callback = reinterpret_cast<VirtualQUndoView::QUndoView_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_RowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QUndoView::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperRowsAboutToBeRemoved(QUndoView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QUndoView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsAboutToBeRemoved(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQUndoView::QUndoView_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_MouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperMouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_mousemoveevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_MouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperMouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseReleaseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_mousereleaseevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_WheelEvent(QUndoView* self, QWheelEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperWheelEvent(QUndoView* self, QWheelEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnWheelEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_wheelevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_TimerEvent(QUndoView* self, QTimerEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperTimerEvent(QUndoView* self, QTimerEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTimerEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_timerevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ResizeEvent(QUndoView* self, QResizeEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperResizeEvent(QUndoView* self, QResizeEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnResizeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_resizeevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_dragmoveevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragLeaveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_dragleaveevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DropEvent(QUndoView* self, QDropEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDropEvent(QUndoView* self, QDropEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDropEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_dropevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_StartDrag(QUndoView* self, int supportedActions) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QUndoView::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperStartDrag(QUndoView* self, int supportedActions) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QUndoView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStartDrag(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_startdrag_callback = reinterpret_cast<VirtualQUndoView::QUndoView_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_InitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        vqundoview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QUndoView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->QUndoView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QUndoView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitViewItemOption(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_initviewitemoption_callback = reinterpret_cast<VirtualQUndoView::QUndoView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_PaintEvent(QUndoView* self, QPaintEvent* e) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method QUndoView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperPaintEvent(QUndoView* self, QPaintEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QUndoView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_paintevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_HorizontalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method QUndoView::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QUndoView_SuperHorizontalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QUndoView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalOffset(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_horizontaloffset_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_VerticalOffset(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method QUndoView::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QUndoView_SuperVerticalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QUndoView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalOffset(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_verticaloffset_callback = reinterpret_cast<VirtualQUndoView::QUndoView_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QUndoView_MoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualQUndoView::Base::moveCursor)(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* QUndoView_SuperMoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        return new QModelIndex(vqundoview->moveCursor(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QUndoView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveCursor(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_movecursor_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetSelection(QUndoView* self, const QRect* rect, int command) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method QUndoView::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperSetSelection(QUndoView* self, const QRect* rect, int command) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QUndoView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelection(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setselection_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* QUndoView_VisualRegionForSelection(const QUndoView* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualQUndoView::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* QUndoView_SuperVisualRegionForSelection(const QUndoView* self, const QItemSelection* selection) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QRegion(vqundoview->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QUndoView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRegionForSelection(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_visualregionforselection_callback = reinterpret_cast<VirtualQUndoView::QUndoView_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_SelectedIndexes(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        QList<QModelIndex> _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        qFatal("Error: Protected virtual method QUndoView::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_SuperSelectedIndexes(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        QList<QModelIndex> _ret = vqundoview->QUndoView::selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method QUndoView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectedIndexes(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_selectedindexes_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_UpdateGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method QUndoView::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperUpdateGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QUndoView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateGeometries(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_updategeometries_callback = reinterpret_cast<VirtualQUndoView::QUndoView_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_IsIndexHidden(const QUndoView* self, const QModelIndex* index) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method QUndoView::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperIsIndexHidden(const QUndoView* self, const QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QUndoView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIsIndexHidden(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_isindexhidden_callback = reinterpret_cast<VirtualQUndoView::QUndoView_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QUndoView::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperSelectionChanged(QUndoView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QUndoView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_selectionchanged_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_CurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method QUndoView::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperCurrentChanged(QUndoView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QUndoView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCurrentChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_currentchanged_callback = reinterpret_cast<VirtualQUndoView::QUndoView_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
QSize* QUndoView_ViewportSizeHint(const QUndoView* self) {
    return new QSize((self->*&VirtualQUndoView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QUndoView_SuperViewportSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QSize(vqundoview->viewportSizeHint());
    qFatal("Error: Protected virtual method QUndoView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportSizeHint(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_viewportsizehint_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetModel(QUndoView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void QUndoView_SuperSetModel(QUndoView* self, QAbstractItemModel* model) {
    self->QUndoView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetModel(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setmodel_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetModel_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void QUndoView_SuperSetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    self->QUndoView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelectionModel(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setselectionmodel_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_KeyboardSearch(QUndoView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QUndoView_SuperKeyboardSearch(QUndoView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QUndoView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyboardSearch(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_keyboardsearch_callback = reinterpret_cast<VirtualQUndoView::QUndoView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_SizeHintForRow(const QUndoView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QUndoView_SuperSizeHintForRow(const QUndoView* self, int row) {
    return self->QUndoView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForRow(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_sizehintforrow_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_SizeHintForColumn(const QUndoView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int QUndoView_SuperSizeHintForColumn(const QUndoView* self, int column) {
    return self->QUndoView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForColumn(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_sizehintforcolumn_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QUndoView_ItemDelegateForIndex(const QUndoView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QUndoView_SuperItemDelegateForIndex(const QUndoView* self, const QModelIndex* index) {
    return self->QUndoView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnItemDelegateForIndex(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_itemdelegateforindex_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QUndoView_InputMethodQuery(const QUndoView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QUndoView_SuperInputMethodQuery(const QUndoView* self, int query) {
    return new QVariant(self->QUndoView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodQuery(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_inputmethodquery_callback = reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SelectAll(QUndoView* self) {
    self->selectAll();
}

// Base class handler implementation
void QUndoView_SuperSelectAll(QUndoView* self) {
    self->QUndoView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectAll(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_selectall_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_UpdateEditorData(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QUndoView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperUpdateEditorData(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QUndoView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorData(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_updateeditordata_callback = reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_UpdateEditorGeometries(QUndoView* self) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QUndoView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperUpdateEditorGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QUndoView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorGeometries(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_updateeditorgeometries_callback = reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QUndoView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperVerticalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QUndoView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarAction(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarAction(QUndoView* self, int action) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QUndoView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperHorizontalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QUndoView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarAction(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QUndoView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperVerticalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QUndoView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarValueChanged(QUndoView* self, int value) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QUndoView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperHorizontalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QUndoView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_CloseEditor(QUndoView* self, QWidget* editor, int hint) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QUndoView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperCloseEditor(QUndoView* self, QWidget* editor, int hint) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QUndoView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEditor(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_closeeditor_callback = reinterpret_cast<VirtualQUndoView::QUndoView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_CommitData(QUndoView* self, QWidget* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QUndoView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperCommitData(QUndoView* self, QWidget* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QUndoView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCommitData(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_commitdata_callback = reinterpret_cast<VirtualQUndoView::QUndoView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_EditorDestroyed(QUndoView* self, QObject* editor) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QUndoView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperEditorDestroyed(QUndoView* self, QObject* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QUndoView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEditorDestroyed(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_editordestroyed_callback = reinterpret_cast<VirtualQUndoView::QUndoView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_Edit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperEdit2(QUndoView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QUndoView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEdit2(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_edit2_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_SelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QUndoView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QUndoView_SuperSelectionCommand(const QUndoView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->QUndoView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QUndoView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionCommand(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_selectioncommand_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_FocusNextPrevChild(QUndoView* self, bool next) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QUndoView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperFocusNextPrevChild(QUndoView* self, bool next) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QUndoView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusNextPrevChild(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_focusnextprevchild_callback = reinterpret_cast<VirtualQUndoView::QUndoView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_ViewportEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperViewportEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_viewportevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_MousePressEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperMousePressEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMousePressEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_mousepressevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_MouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseDoubleClickEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragEnterEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_dragenterevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_FocusInEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperFocusInEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusInEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_focusinevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_FocusOutEvent(QUndoView* self, QFocusEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperFocusOutEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusOutEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_focusoutevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_KeyPressEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperKeyPressEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyPressEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_keypressevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_InputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperInputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_inputmethodevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_EventFilter(QUndoView* self, QObject* object, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperEventFilter(QUndoView* self, QObject* object, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QUndoView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEventFilter(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_eventfilter_callback = reinterpret_cast<VirtualQUndoView::QUndoView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QUndoView_MinimumSizeHint(const QUndoView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QUndoView_SuperMinimumSizeHint(const QUndoView* self) {
    return new QSize(self->QUndoView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMinimumSizeHint(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_minimumsizehint_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QUndoView_SizeHint(const QUndoView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QUndoView_SuperSizeHint(const QUndoView* self) {
    return new QSize(self->QUndoView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHint(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_sizehint_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetupViewport(QUndoView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QUndoView_SuperSetupViewport(QUndoView* self, QWidget* viewport) {
    self->QUndoView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetupViewport(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setupviewport_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QUndoView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QUndoView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnContextMenuEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_contextmenuevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ChangeEvent(QUndoView* self, QEvent* param1) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QUndoView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperChangeEvent(QUndoView* self, QEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QUndoView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChangeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_changeevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_InitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        vqundoview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QUndoView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperInitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->QUndoView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QUndoView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitStyleOption(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_initstyleoption_callback = reinterpret_cast<VirtualQUndoView::QUndoView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_DevType(const QUndoView* self) {
    return self->devType();
}

// Base class handler implementation
int QUndoView_SuperDevType(const QUndoView* self) {
    return self->QUndoView::devType();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDevType(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_devtype_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_SetVisible(QUndoView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QUndoView_SuperSetVisible(QUndoView* self, bool visible) {
    self->QUndoView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetVisible(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_setvisible_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_HeightForWidth(const QUndoView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QUndoView_SuperHeightForWidth(const QUndoView* self, int param1) {
    return self->QUndoView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHeightForWidth(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_heightforwidth_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_HasHeightForWidth(const QUndoView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QUndoView_SuperHasHeightForWidth(const QUndoView* self) {
    return self->QUndoView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHasHeightForWidth(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_hasheightforwidth_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QUndoView_PaintEngine(const QUndoView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QUndoView_SuperPaintEngine(const QUndoView* self) {
    return self->QUndoView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEngine(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_paintengine_callback = reinterpret_cast<VirtualQUndoView::QUndoView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_KeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperKeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyReleaseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_keyreleaseevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_EnterEvent(QUndoView* self, QEnterEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperEnterEvent(QUndoView* self, QEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEnterEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_enterevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_LeaveEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperLeaveEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnLeaveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_leaveevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_MoveEvent(QUndoView* self, QMoveEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperMoveEvent(QUndoView* self, QMoveEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_moveevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_CloseEvent(QUndoView* self, QCloseEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperCloseEvent(QUndoView* self, QCloseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_closeevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_TabletEvent(QUndoView* self, QTabletEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperTabletEvent(QUndoView* self, QTabletEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTabletEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_tabletevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ActionEvent(QUndoView* self, QActionEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperActionEvent(QUndoView* self, QActionEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnActionEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_actionevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ShowEvent(QUndoView* self, QShowEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperShowEvent(QUndoView* self, QShowEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnShowEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_showevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_HideEvent(QUndoView* self, QHideEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperHideEvent(QUndoView* self, QHideEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHideEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_hideevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QUndoView_NativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QUndoView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QUndoView_SuperNativeEvent(QUndoView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->QUndoView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QUndoView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnNativeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_nativeevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QUndoView_Metric(const QUndoView* self, int param1) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QUndoView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QUndoView_SuperMetric(const QUndoView* self, int param1) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QUndoView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetric(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_metric_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_InitPainter(const QUndoView* self, QPainter* painter) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        vqundoview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QUndoView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperInitPainter(const QUndoView* self, QPainter* painter) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->QUndoView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QUndoView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitPainter(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_initpainter_callback = reinterpret_cast<VirtualQUndoView::QUndoView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QUndoView_Redirected(const QUndoView* self, QPoint* offset) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QUndoView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QUndoView_SuperRedirected(const QUndoView* self, QPoint* offset) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QUndoView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRedirected(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_redirected_callback = reinterpret_cast<VirtualQUndoView::QUndoView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QUndoView_SharedPainter(const QUndoView* self) {
    auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self));
    if (vqundoview) {
        return vqundoview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QUndoView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QUndoView_SuperSharedPainter(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->QUndoView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QUndoView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSharedPainter(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        vqundoview->qundoview_sharedpainter_callback = reinterpret_cast<VirtualQUndoView::QUndoView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ChildEvent(QUndoView* self, QChildEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperChildEvent(QUndoView* self, QChildEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChildEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_childevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_CustomEvent(QUndoView* self, QEvent* event) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QUndoView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperCustomEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QUndoView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCustomEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_customevent_callback = reinterpret_cast<VirtualQUndoView::QUndoView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_ConnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUndoView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperConnectNotify(QUndoView* self, const QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUndoView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnConnectNotify(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_connectnotify_callback = reinterpret_cast<VirtualQUndoView::QUndoView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QUndoView_DisconnectNotify(QUndoView* self, const QMetaMethod* signal) {
    auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self);
    if (vqundoview) {
        vqundoview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QUndoView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QUndoView_SuperDisconnectNotify(QUndoView* self, const QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->QUndoView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QUndoView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDisconnectNotify(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self))
        vqundoview->qundoview_disconnectnotify_callback = reinterpret_cast<VirtualQUndoView::QUndoView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QUndoView_ResizeContents(QUndoView* self, int width, int height) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method QUndoView::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* QUndoView_ContentsSize(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QSize(vqundoview->contentsSize());
    qFatal("Error: Protected method QUndoView::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* QUndoView_RectForIndex(const QUndoView* self, const QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QRect(vqundoview->rectForIndex(*index));
    qFatal("Error: Protected method QUndoView::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_SetPositionForIndex(QUndoView* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method QUndoView::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoView_State(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->VirtualQUndoView::state());
    } else
        qFatal("Error: Protected method QUndoView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_SetState(QUndoView* self, int state) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::setState(static_cast<VirtualQUndoView::State>(state));
    } else
        qFatal("Error: Protected method QUndoView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_ScheduleDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QUndoView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_ExecuteDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QUndoView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_SetDirtyRegion(QUndoView* self, const QRegion* region) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QUndoView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_ScrollDirtyRegion(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QUndoView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QUndoView_DirtyRegionOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QPoint(vqundoview->dirtyRegionOffset());
    qFatal("Error: Protected method QUndoView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_StartAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::startAutoScroll();
    } else
        qFatal("Error: Protected method QUndoView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_StopAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QUndoView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_DoAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::doAutoScroll();
    } else
        qFatal("Error: Protected method QUndoView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoView_DropIndicatorPosition(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->VirtualQUndoView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QUndoView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_SetViewportMargins(QUndoView* self, int left, int top, int right, int bottom) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QUndoView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QUndoView_ViewportMargins(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self)))
        return new QMargins(vqundoview->viewportMargins());
    qFatal("Error: Protected method QUndoView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_DrawFrame(QUndoView* self, QPainter* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QUndoView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_UpdateMicroFocus(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QUndoView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_Create(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::create();
    } else
        qFatal("Error: Protected method QUndoView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QUndoView_Destroy(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->VirtualQUndoView::destroy();
    } else
        qFatal("Error: Protected method QUndoView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUndoView_FocusNextChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->VirtualQUndoView::focusNextChild();
    } else
        qFatal("Error: Protected method QUndoView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUndoView_FocusPreviousChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->VirtualQUndoView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QUndoView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QUndoView_Sender(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->VirtualQUndoView::sender();
    } else
        qFatal("Error: Protected method QUndoView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoView_SenderSignalIndex(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->VirtualQUndoView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QUndoView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QUndoView_Receivers(const QUndoView* self, const char* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->VirtualQUndoView::receivers(signal);
    } else
        qFatal("Error: Protected method QUndoView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QUndoView_IsSignalConnected(const QUndoView* self, const QMetaMethod* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->VirtualQUndoView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QUndoView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QUndoView_GetDecodedMetricF(const QUndoView* self, int metricA, int metricB) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->VirtualQUndoView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QUndoView::getDecodedMetricF called without a directly constructed type");
}

void QUndoView_Delete(QUndoView* self) {
    delete self;
}
