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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistview.h>
#include "libqlistview.h"
#include "libqlistview.hxx"

QListView* QListView_new(QWidget* parent) {
    return new VirtualQListView(parent);
}

QListView* QListView_new2() {
    return new VirtualQListView();
}

QMetaObject* QListView_MetaObject(const QListView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QListView_Metacast(QListView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QListView_Metacall(QListView* self, int param1, int param2, void** param3) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQListView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QListView_OnMetacall(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Metacall_Callback(reinterpret_cast<VirtualQListView::QListView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QListView_QBaseMetacall(QListView* self, int param1, int param2, void** param3) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Metacall_IsBase(true);
        return vqlistview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQListView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QListView_Tr(const char* s) {
    QString _ret = QListView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListView_SetMovement(QListView* self, int movement) {
    self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_Movement(const QListView* self) {
    return static_cast<int>(self->movement());
}

void QListView_SetFlow(QListView* self, int flow) {
    self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_Flow(const QListView* self) {
    return static_cast<int>(self->flow());
}

void QListView_SetWrapping(QListView* self, bool enable) {
    self->setWrapping(enable);
}

bool QListView_IsWrapping(const QListView* self) {
    return self->isWrapping();
}

void QListView_SetResizeMode(QListView* self, int mode) {
    self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_ResizeMode(const QListView* self) {
    return static_cast<int>(self->resizeMode());
}

void QListView_SetLayoutMode(QListView* self, int mode) {
    self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_LayoutMode(const QListView* self) {
    return static_cast<int>(self->layoutMode());
}

void QListView_SetSpacing(QListView* self, int space) {
    self->setSpacing(static_cast<int>(space));
}

int QListView_Spacing(const QListView* self) {
    return self->spacing();
}

void QListView_SetBatchSize(QListView* self, int batchSize) {
    self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_BatchSize(const QListView* self) {
    return self->batchSize();
}

void QListView_SetGridSize(QListView* self, const QSize* size) {
    self->setGridSize(*size);
}

QSize* QListView_GridSize(const QListView* self) {
    return new QSize(self->gridSize());
}

void QListView_SetViewMode(QListView* self, int mode) {
    self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

int QListView_ViewMode(const QListView* self) {
    return static_cast<int>(self->viewMode());
}

void QListView_ClearPropertyFlags(QListView* self) {
    self->clearPropertyFlags();
}

bool QListView_IsRowHidden(const QListView* self, int row) {
    return self->isRowHidden(static_cast<int>(row));
}

void QListView_SetRowHidden(QListView* self, int row, bool hide) {
    self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_SetModelColumn(QListView* self, int column) {
    self->setModelColumn(static_cast<int>(column));
}

int QListView_ModelColumn(const QListView* self) {
    return self->modelColumn();
}

void QListView_SetUniformItemSizes(QListView* self, bool enable) {
    self->setUniformItemSizes(enable);
}

bool QListView_UniformItemSizes(const QListView* self) {
    return self->uniformItemSizes();
}

void QListView_SetWordWrap(QListView* self, bool on) {
    self->setWordWrap(on);
}

bool QListView_WordWrap(const QListView* self) {
    return self->wordWrap();
}

void QListView_SetSelectionRectVisible(QListView* self, bool show) {
    self->setSelectionRectVisible(show);
}

bool QListView_IsSelectionRectVisible(const QListView* self) {
    return self->isSelectionRectVisible();
}

void QListView_SetItemAlignment(QListView* self, int alignment) {
    self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_ItemAlignment(const QListView* self) {
    return static_cast<int>(self->itemAlignment());
}

void QListView_IndexesMoved(QListView* self, const libqt_list /* of QModelIndex* */ indexes) {
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    self->indexesMoved(indexes_QList);
}

void QListView_Connect_IndexesMoved(QListView* self, intptr_t slot) {
    void (*slotFunc)(QListView*, libqt_list /* of QModelIndex* */) = reinterpret_cast<void (*)(QListView*, libqt_list /* of QModelIndex* */)>(slot);
    QListView::connect(self, &QListView::indexesMoved, [self, slotFunc](const QList<QModelIndex>& indexes) {
        const QList<QModelIndex>& indexes_ret = indexes;
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.size()));
        for (size_t i = 0; i < indexes_ret.size(); ++i) {
            indexes_arr[i] = new QModelIndex(indexes_ret[i]);
        }
        libqt_list indexes_out;
        indexes_out.len = indexes_ret.size();
        indexes_out.data = static_cast<void*>(indexes_arr);
        libqt_list /* of QModelIndex* */ sigval1 = indexes_out;
        slotFunc(self, sigval1);
    });
}

libqt_string QListView_Tr2(const char* s, const char* c) {
    QString _ret = QListView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QListView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QListView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QRect* QListView_VisualRect(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QRect(vqlistview->visualRect(*index));
    } else {
        return new QRect(((VirtualQListView*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QListView_QBaseVisualRect(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VisualRect_IsBase(true);
        return new QRect(vqlistview->visualRect(*index));
    } else {
        return new QRect(((VirtualQListView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRect(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VisualRect_Callback(reinterpret_cast<VirtualQListView::QListView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ScrollTo(QListView* self, const QModelIndex* index, int hint) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QListView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QListView_QBaseScrollTo(QListView* self, const QModelIndex* index, int hint) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollTo_IsBase(true);
        vqlistview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QListView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollTo(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollTo_Callback(reinterpret_cast<VirtualQListView::QListView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListView_IndexAt(const QListView* self, const QPoint* p) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QModelIndex(vqlistview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQListView*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QListView_QBaseIndexAt(const QListView* self, const QPoint* p) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IndexAt_IsBase(true);
        return new QModelIndex(vqlistview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQListView*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIndexAt(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IndexAt_Callback(reinterpret_cast<VirtualQListView::QListView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DoItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->doItemsLayout();
    } else {
        self->QListView::doItemsLayout();
    }
}

// Base class handler implementation
void QListView_QBaseDoItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DoItemsLayout_IsBase(true);
        vqlistview->doItemsLayout();
    } else {
        self->QListView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDoItemsLayout(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DoItemsLayout_Callback(reinterpret_cast<VirtualQListView::QListView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_Reset(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->reset();
    } else {
        self->QListView::reset();
    }
}

// Base class handler implementation
void QListView_QBaseReset(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Reset_IsBase(true);
        vqlistview->reset();
    } else {
        self->QListView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnReset(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Reset_Callback(reinterpret_cast<VirtualQListView::QListView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetRootIndex(QListView* self, const QModelIndex* index) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setRootIndex(*index);
    } else {
        self->QListView::setRootIndex(*index);
    }
}

// Base class handler implementation
void QListView_QBaseSetRootIndex(QListView* self, const QModelIndex* index) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetRootIndex_IsBase(true);
        vqlistview->setRootIndex(*index);
    } else {
        self->QListView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetRootIndex(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetRootIndex_Callback(reinterpret_cast<VirtualQListView::QListView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_Event(QListView* self, QEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->event(e);
    } else {
        return ((VirtualQListView*)self)->event(e);
    }
}

// Base class handler implementation
bool QListView_QBaseEvent(QListView* self, QEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Event_IsBase(true);
        return vqlistview->event(e);
    } else {
        return ((VirtualQListView*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Event_Callback(reinterpret_cast<VirtualQListView::QListView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ScrollContentsBy(QListView* self, int dx, int dy) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListView_QBaseScrollContentsBy(QListView* self, int dx, int dy) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollContentsBy_IsBase(true);
        vqlistview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollContentsBy(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQListView::QListView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQListView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QListView_QBaseDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DataChanged_IsBase(true);
        vqlistview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQListView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDataChanged(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DataChanged_Callback(reinterpret_cast<VirtualQListView::QListView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListView_QBaseRowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RowsInserted_IsBase(true);
        vqlistview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsInserted(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RowsInserted_Callback(reinterpret_cast<VirtualQListView::QListView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListView_QBaseRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RowsAboutToBeRemoved_IsBase(true);
        vqlistview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsAboutToBeRemoved(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQListView::QListView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->mouseMoveEvent(e);
    } else {
        ((VirtualQListView*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseMouseMoveEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseMoveEvent_IsBase(true);
        vqlistview->mouseMoveEvent(e);
    } else {
        ((VirtualQListView*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseMoveEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->mouseReleaseEvent(e);
    } else {
        ((VirtualQListView*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseMouseReleaseEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseReleaseEvent_IsBase(true);
        vqlistview->mouseReleaseEvent(e);
    } else {
        ((VirtualQListView*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseReleaseEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_WheelEvent(QListView* self, QWheelEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->wheelEvent(e);
    } else {
        ((VirtualQListView*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseWheelEvent(QListView* self, QWheelEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_WheelEvent_IsBase(true);
        vqlistview->wheelEvent(e);
    } else {
        ((VirtualQListView*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnWheelEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_WheelEvent_Callback(reinterpret_cast<VirtualQListView::QListView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_TimerEvent(QListView* self, QTimerEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->timerEvent(e);
    } else {
        ((VirtualQListView*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseTimerEvent(QListView* self, QTimerEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_TimerEvent_IsBase(true);
        vqlistview->timerEvent(e);
    } else {
        ((VirtualQListView*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnTimerEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_TimerEvent_Callback(reinterpret_cast<VirtualQListView::QListView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ResizeEvent(QListView* self, QResizeEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->resizeEvent(e);
    } else {
        ((VirtualQListView*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseResizeEvent(QListView* self, QResizeEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ResizeEvent_IsBase(true);
        vqlistview->resizeEvent(e);
    } else {
        ((VirtualQListView*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnResizeEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ResizeEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->dragMoveEvent(e);
    } else {
        ((VirtualQListView*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseDragMoveEvent(QListView* self, QDragMoveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragMoveEvent_IsBase(true);
        vqlistview->dragMoveEvent(e);
    } else {
        ((VirtualQListView*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragMoveEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragMoveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->dragLeaveEvent(e);
    } else {
        ((VirtualQListView*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseDragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragLeaveEvent_IsBase(true);
        vqlistview->dragLeaveEvent(e);
    } else {
        ((VirtualQListView*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragLeaveEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DropEvent(QListView* self, QDropEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->dropEvent(e);
    } else {
        ((VirtualQListView*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void QListView_QBaseDropEvent(QListView* self, QDropEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DropEvent_IsBase(true);
        vqlistview->dropEvent(e);
    } else {
        ((VirtualQListView*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDropEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DropEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_StartDrag(QListView* self, int supportedActions) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQListView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QListView_QBaseStartDrag(QListView* self, int supportedActions) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StartDrag_IsBase(true);
        vqlistview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQListView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnStartDrag(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StartDrag_Callback(reinterpret_cast<VirtualQListView::QListView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->initViewItemOption(option);
    } else {
        ((VirtualQListView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QListView_QBaseInitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitViewItemOption_IsBase(true);
        vqlistview->initViewItemOption(option);
    } else {
        ((VirtualQListView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitViewItemOption(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitViewItemOption_Callback(reinterpret_cast<VirtualQListView::QListView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_PaintEvent(QListView* self, QPaintEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->paintEvent(e);
    } else {
        ((VirtualQListView*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QListView_QBasePaintEvent(QListView* self, QPaintEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_PaintEvent_IsBase(true);
        vqlistview->paintEvent(e);
    } else {
        ((VirtualQListView*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnPaintEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_PaintEvent_Callback(reinterpret_cast<VirtualQListView::QListView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_HorizontalOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->horizontalOffset();
    } else {
        return ((VirtualQListView*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int QListView_QBaseHorizontalOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalOffset_IsBase(true);
        return vqlistview->horizontalOffset();
    } else {
        return ((VirtualQListView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalOffset(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalOffset_Callback(reinterpret_cast<VirtualQListView::QListView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_VerticalOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->verticalOffset();
    } else {
        return ((VirtualQListView*)self)->verticalOffset();
    }
}

// Base class handler implementation
int QListView_QBaseVerticalOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalOffset_IsBase(true);
        return vqlistview->verticalOffset();
    } else {
        return ((VirtualQListView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalOffset(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalOffset_Callback(reinterpret_cast<VirtualQListView::QListView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QModelIndex(vqlistview->moveCursor(static_cast<VirtualQListView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QListView_QBaseMoveCursor(QListView* self, int cursorAction, int modifiers) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MoveCursor_IsBase(true);
        return new QModelIndex(vqlistview->moveCursor(static_cast<VirtualQListView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMoveCursor(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MoveCursor_Callback(reinterpret_cast<VirtualQListView::QListView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetSelection(QListView* self, const QRect* rect, int command) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQListView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QListView_QBaseSetSelection(QListView* self, const QRect* rect, int command) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetSelection_IsBase(true);
        vqlistview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQListView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetSelection(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetSelection_Callback(reinterpret_cast<VirtualQListView::QListView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QRegion(vqlistview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QListView_QBaseVisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqlistview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRegionForSelection(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQListView::QListView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QListView_SelectedIndexes(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        QList<QModelIndex> _ret = vqlistview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQListView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QListView_QBaseSelectedIndexes(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqlistview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQListView*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectedIndexes(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectedIndexes_Callback(reinterpret_cast<VirtualQListView::QListView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_UpdateGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->updateGeometries();
    } else {
        ((VirtualQListView*)self)->updateGeometries();
    }
}

// Base class handler implementation
void QListView_QBaseUpdateGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateGeometries_IsBase(true);
        vqlistview->updateGeometries();
    } else {
        ((VirtualQListView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateGeometries(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateGeometries_Callback(reinterpret_cast<VirtualQListView::QListView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->isIndexHidden(*index);
    } else {
        return ((VirtualQListView*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QListView_QBaseIsIndexHidden(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IsIndexHidden_IsBase(true);
        return vqlistview->isIndexHidden(*index);
    } else {
        return ((VirtualQListView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIsIndexHidden(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IsIndexHidden_Callback(reinterpret_cast<VirtualQListView::QListView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQListView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QListView_QBaseSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectionChanged_IsBase(true);
        vqlistview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQListView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectionChanged(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectionChanged_Callback(reinterpret_cast<VirtualQListView::QListView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->currentChanged(*current, *previous);
    } else {
        ((VirtualQListView*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QListView_QBaseCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CurrentChanged_IsBase(true);
        vqlistview->currentChanged(*current, *previous);
    } else {
        ((VirtualQListView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCurrentChanged(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CurrentChanged_Callback(reinterpret_cast<VirtualQListView::QListView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListView_ViewportSizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QSize(vqlistview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QListView_QBaseViewportSizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportSizeHint_IsBase(true);
        return new QSize(vqlistview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportSizeHint(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQListView::QListView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetModel(QListView* self, QAbstractItemModel* model) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setModel(model);
    } else {
        self->QListView::setModel(model);
    }
}

// Base class handler implementation
void QListView_QBaseSetModel(QListView* self, QAbstractItemModel* model) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetModel_IsBase(true);
        vqlistview->setModel(model);
    } else {
        self->QListView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetModel(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetModel_Callback(reinterpret_cast<VirtualQListView::QListView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetSelectionModel(QListView* self, QItemSelectionModel* selectionModel) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setSelectionModel(selectionModel);
    } else {
        self->QListView::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QListView_QBaseSetSelectionModel(QListView* self, QItemSelectionModel* selectionModel) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetSelectionModel_IsBase(true);
        vqlistview->setSelectionModel(selectionModel);
    } else {
        self->QListView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetSelectionModel(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetSelectionModel_Callback(reinterpret_cast<VirtualQListView::QListView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_KeyboardSearch(QListView* self, const libqt_string search) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->keyboardSearch(search_QString);
    } else {
        self->QListView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QListView_QBaseKeyboardSearch(QListView* self, const libqt_string search) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyboardSearch_IsBase(true);
        vqlistview->keyboardSearch(search_QString);
    } else {
        self->QListView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyboardSearch(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyboardSearch_Callback(reinterpret_cast<VirtualQListView::QListView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_SizeHintForRow(const QListView* self, int row) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QListView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QListView_QBaseSizeHintForRow(const QListView* self, int row) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHintForRow_IsBase(true);
        return vqlistview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QListView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHintForRow(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHintForRow_Callback(reinterpret_cast<VirtualQListView::QListView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_SizeHintForColumn(const QListView* self, int column) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QListView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QListView_QBaseSizeHintForColumn(const QListView* self, int column) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHintForColumn_IsBase(true);
        return vqlistview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QListView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHintForColumn(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQListView::QListView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QListView_ItemDelegateForIndex(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->itemDelegateForIndex(*index);
    } else {
        return self->QListView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QListView_QBaseItemDelegateForIndex(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ItemDelegateForIndex_IsBase(true);
        return vqlistview->itemDelegateForIndex(*index);
    } else {
        return self->QListView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnItemDelegateForIndex(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQListView::QListView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QListView_InputMethodQuery(const QListView* self, int query) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QVariant(vqlistview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQListView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QListView_QBaseInputMethodQuery(const QListView* self, int query) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InputMethodQuery_IsBase(true);
        return new QVariant(vqlistview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQListView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInputMethodQuery(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InputMethodQuery_Callback(reinterpret_cast<VirtualQListView::QListView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SelectAll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->selectAll();
    } else {
        self->QListView::selectAll();
    }
}

// Base class handler implementation
void QListView_QBaseSelectAll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectAll_IsBase(true);
        vqlistview->selectAll();
    } else {
        self->QListView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectAll(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectAll_Callback(reinterpret_cast<VirtualQListView::QListView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_UpdateEditorData(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->updateEditorData();
    } else {
        ((VirtualQListView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QListView_QBaseUpdateEditorData(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateEditorData_IsBase(true);
        vqlistview->updateEditorData();
    } else {
        ((VirtualQListView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateEditorData(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateEditorData_Callback(reinterpret_cast<VirtualQListView::QListView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_UpdateEditorGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->updateEditorGeometries();
    } else {
        ((VirtualQListView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QListView_QBaseUpdateEditorGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateEditorGeometries_IsBase(true);
        vqlistview->updateEditorGeometries();
    } else {
        ((VirtualQListView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateEditorGeometries(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQListView::QListView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_VerticalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListView_QBaseVerticalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalScrollbarAction_IsBase(true);
        vqlistview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalScrollbarAction(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQListView::QListView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_HorizontalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListView_QBaseHorizontalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalScrollbarAction_IsBase(true);
        vqlistview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalScrollbarAction(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQListView::QListView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_VerticalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListView_QBaseVerticalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalScrollbarValueChanged_IsBase(true);
        vqlistview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalScrollbarValueChanged(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListView::QListView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_HorizontalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListView_QBaseHorizontalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalScrollbarValueChanged_IsBase(true);
        vqlistview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalScrollbarValueChanged(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListView::QListView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_CloseEditor(QListView* self, QWidget* editor, int hint) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQListView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QListView_QBaseCloseEditor(QListView* self, QWidget* editor, int hint) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CloseEditor_IsBase(true);
        vqlistview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQListView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCloseEditor(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CloseEditor_Callback(reinterpret_cast<VirtualQListView::QListView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_CommitData(QListView* self, QWidget* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->commitData(editor);
    } else {
        ((VirtualQListView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QListView_QBaseCommitData(QListView* self, QWidget* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CommitData_IsBase(true);
        vqlistview->commitData(editor);
    } else {
        ((VirtualQListView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCommitData(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CommitData_Callback(reinterpret_cast<VirtualQListView::QListView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_EditorDestroyed(QListView* self, QObject* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->editorDestroyed(editor);
    } else {
        ((VirtualQListView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QListView_QBaseEditorDestroyed(QListView* self, QObject* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EditorDestroyed_IsBase(true);
        vqlistview->editorDestroyed(editor);
    } else {
        ((VirtualQListView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEditorDestroyed(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EditorDestroyed_Callback(reinterpret_cast<VirtualQListView::QListView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_Edit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQListView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QListView_QBaseEdit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Edit2_IsBase(true);
        return vqlistview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQListView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEdit2(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Edit2_Callback(reinterpret_cast<VirtualQListView::QListView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_SelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return static_cast<int>(vqlistview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQListView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QListView_QBaseSelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqlistview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQListView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectionCommand(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SelectionCommand_Callback(reinterpret_cast<VirtualQListView::QListView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_FocusNextPrevChild(QListView* self, bool next) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->focusNextPrevChild(next);
    } else {
        return ((VirtualQListView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QListView_QBaseFocusNextPrevChild(QListView* self, bool next) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusNextPrevChild_IsBase(true);
        return vqlistview->focusNextPrevChild(next);
    } else {
        return ((VirtualQListView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusNextPrevChild(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQListView::QListView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_ViewportEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->viewportEvent(event);
    } else {
        return ((VirtualQListView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QListView_QBaseViewportEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportEvent_IsBase(true);
        return vqlistview->viewportEvent(event);
    } else {
        return ((VirtualQListView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_MousePressEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->mousePressEvent(event);
    } else {
        ((VirtualQListView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseMousePressEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MousePressEvent_IsBase(true);
        vqlistview->mousePressEvent(event);
    } else {
        ((VirtualQListView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMousePressEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MousePressEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_MouseDoubleClickEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQListView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseMouseDoubleClickEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseDoubleClickEvent_IsBase(true);
        vqlistview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQListView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseDoubleClickEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DragEnterEvent(QListView* self, QDragEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->dragEnterEvent(event);
    } else {
        ((VirtualQListView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseDragEnterEvent(QListView* self, QDragEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragEnterEvent_IsBase(true);
        vqlistview->dragEnterEvent(event);
    } else {
        ((VirtualQListView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragEnterEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DragEnterEvent_Callback(reinterpret_cast<VirtualQListView::QListView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_FocusInEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->focusInEvent(event);
    } else {
        ((VirtualQListView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseFocusInEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusInEvent_IsBase(true);
        vqlistview->focusInEvent(event);
    } else {
        ((VirtualQListView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusInEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusInEvent_Callback(reinterpret_cast<VirtualQListView::QListView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_FocusOutEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->focusOutEvent(event);
    } else {
        ((VirtualQListView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseFocusOutEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusOutEvent_IsBase(true);
        vqlistview->focusOutEvent(event);
    } else {
        ((VirtualQListView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusOutEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusOutEvent_Callback(reinterpret_cast<VirtualQListView::QListView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_KeyPressEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->keyPressEvent(event);
    } else {
        ((VirtualQListView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseKeyPressEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyPressEvent_IsBase(true);
        vqlistview->keyPressEvent(event);
    } else {
        ((VirtualQListView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyPressEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyPressEvent_Callback(reinterpret_cast<VirtualQListView::QListView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_InputMethodEvent(QListView* self, QInputMethodEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->inputMethodEvent(event);
    } else {
        ((VirtualQListView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseInputMethodEvent(QListView* self, QInputMethodEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InputMethodEvent_IsBase(true);
        vqlistview->inputMethodEvent(event);
    } else {
        ((VirtualQListView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInputMethodEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InputMethodEvent_Callback(reinterpret_cast<VirtualQListView::QListView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_EventFilter(QListView* self, QObject* object, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->eventFilter(object, event);
    } else {
        return ((VirtualQListView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QListView_QBaseEventFilter(QListView* self, QObject* object, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EventFilter_IsBase(true);
        return vqlistview->eventFilter(object, event);
    } else {
        return ((VirtualQListView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEventFilter(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EventFilter_Callback(reinterpret_cast<VirtualQListView::QListView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListView_MinimumSizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QSize(vqlistview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQListView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QListView_QBaseMinimumSizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MinimumSizeHint_IsBase(true);
        return new QSize(vqlistview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQListView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMinimumSizeHint(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQListView::QListView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListView_SizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QSize(vqlistview->sizeHint());
    } else {
        return new QSize(((VirtualQListView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QListView_QBaseSizeHint(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHint_IsBase(true);
        return new QSize(vqlistview->sizeHint());
    } else {
        return new QSize(((VirtualQListView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHint(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SizeHint_Callback(reinterpret_cast<VirtualQListView::QListView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetupViewport(QListView* self, QWidget* viewport) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setupViewport(viewport);
    } else {
        self->QListView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QListView_QBaseSetupViewport(QListView* self, QWidget* viewport) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetupViewport_IsBase(true);
        vqlistview->setupViewport(viewport);
    } else {
        self->QListView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetupViewport(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetupViewport_Callback(reinterpret_cast<VirtualQListView::QListView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ContextMenuEvent(QListView* self, QContextMenuEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->contextMenuEvent(param1);
    } else {
        ((VirtualQListView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QListView_QBaseContextMenuEvent(QListView* self, QContextMenuEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ContextMenuEvent_IsBase(true);
        vqlistview->contextMenuEvent(param1);
    } else {
        ((VirtualQListView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnContextMenuEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ChangeEvent(QListView* self, QEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->changeEvent(param1);
    } else {
        ((VirtualQListView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QListView_QBaseChangeEvent(QListView* self, QEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ChangeEvent_IsBase(true);
        vqlistview->changeEvent(param1);
    } else {
        ((VirtualQListView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnChangeEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ChangeEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_InitStyleOption(const QListView* self, QStyleOptionFrame* option) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->initStyleOption(option);
    } else {
        ((VirtualQListView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QListView_QBaseInitStyleOption(const QListView* self, QStyleOptionFrame* option) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitStyleOption_IsBase(true);
        vqlistview->initStyleOption(option);
    } else {
        ((VirtualQListView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitStyleOption(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitStyleOption_Callback(reinterpret_cast<VirtualQListView::QListView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_DevType(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->devType();
    } else {
        return self->QListView::devType();
    }
}

// Base class handler implementation
int QListView_QBaseDevType(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DevType_IsBase(true);
        return vqlistview->devType();
    } else {
        return self->QListView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDevType(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DevType_Callback(reinterpret_cast<VirtualQListView::QListView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetVisible(QListView* self, bool visible) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setVisible(visible);
    } else {
        self->QListView::setVisible(visible);
    }
}

// Base class handler implementation
void QListView_QBaseSetVisible(QListView* self, bool visible) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetVisible_IsBase(true);
        vqlistview->setVisible(visible);
    } else {
        self->QListView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetVisible(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetVisible_Callback(reinterpret_cast<VirtualQListView::QListView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_HeightForWidth(const QListView* self, int param1) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QListView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QListView_QBaseHeightForWidth(const QListView* self, int param1) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HeightForWidth_IsBase(true);
        return vqlistview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QListView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHeightForWidth(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HeightForWidth_Callback(reinterpret_cast<VirtualQListView::QListView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_HasHeightForWidth(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->hasHeightForWidth();
    } else {
        return self->QListView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QListView_QBaseHasHeightForWidth(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HasHeightForWidth_IsBase(true);
        return vqlistview->hasHeightForWidth();
    } else {
        return self->QListView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHasHeightForWidth(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQListView::QListView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QListView_PaintEngine(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->paintEngine();
    } else {
        return self->QListView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QListView_QBasePaintEngine(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_PaintEngine_IsBase(true);
        return vqlistview->paintEngine();
    } else {
        return self->QListView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnPaintEngine(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_PaintEngine_Callback(reinterpret_cast<VirtualQListView::QListView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_KeyReleaseEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->keyReleaseEvent(event);
    } else {
        ((VirtualQListView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseKeyReleaseEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyReleaseEvent_IsBase(true);
        vqlistview->keyReleaseEvent(event);
    } else {
        ((VirtualQListView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyReleaseEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQListView::QListView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_EnterEvent(QListView* self, QEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->enterEvent(event);
    } else {
        ((VirtualQListView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseEnterEvent(QListView* self, QEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EnterEvent_IsBase(true);
        vqlistview->enterEvent(event);
    } else {
        ((VirtualQListView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEnterEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_EnterEvent_Callback(reinterpret_cast<VirtualQListView::QListView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_LeaveEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->leaveEvent(event);
    } else {
        ((VirtualQListView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseLeaveEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_LeaveEvent_IsBase(true);
        vqlistview->leaveEvent(event);
    } else {
        ((VirtualQListView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnLeaveEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_LeaveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_MoveEvent(QListView* self, QMoveEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->moveEvent(event);
    } else {
        ((VirtualQListView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseMoveEvent(QListView* self, QMoveEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MoveEvent_IsBase(true);
        vqlistview->moveEvent(event);
    } else {
        ((VirtualQListView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMoveEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_MoveEvent_Callback(reinterpret_cast<VirtualQListView::QListView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_CloseEvent(QListView* self, QCloseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->closeEvent(event);
    } else {
        ((VirtualQListView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseCloseEvent(QListView* self, QCloseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CloseEvent_IsBase(true);
        vqlistview->closeEvent(event);
    } else {
        ((VirtualQListView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCloseEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CloseEvent_Callback(reinterpret_cast<VirtualQListView::QListView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_TabletEvent(QListView* self, QTabletEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->tabletEvent(event);
    } else {
        ((VirtualQListView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseTabletEvent(QListView* self, QTabletEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_TabletEvent_IsBase(true);
        vqlistview->tabletEvent(event);
    } else {
        ((VirtualQListView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnTabletEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_TabletEvent_Callback(reinterpret_cast<VirtualQListView::QListView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ActionEvent(QListView* self, QActionEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->actionEvent(event);
    } else {
        ((VirtualQListView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseActionEvent(QListView* self, QActionEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ActionEvent_IsBase(true);
        vqlistview->actionEvent(event);
    } else {
        ((VirtualQListView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnActionEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ActionEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ShowEvent(QListView* self, QShowEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->showEvent(event);
    } else {
        ((VirtualQListView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseShowEvent(QListView* self, QShowEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ShowEvent_IsBase(true);
        vqlistview->showEvent(event);
    } else {
        ((VirtualQListView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnShowEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ShowEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_HideEvent(QListView* self, QHideEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->hideEvent(event);
    } else {
        ((VirtualQListView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseHideEvent(QListView* self, QHideEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HideEvent_IsBase(true);
        vqlistview->hideEvent(event);
    } else {
        ((VirtualQListView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHideEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_HideEvent_Callback(reinterpret_cast<VirtualQListView::QListView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_NativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQListView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QListView_QBaseNativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_NativeEvent_IsBase(true);
        return vqlistview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQListView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnNativeEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_NativeEvent_Callback(reinterpret_cast<VirtualQListView::QListView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_Metric(const QListView* self, int param1) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQListView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QListView_QBaseMetric(const QListView* self, int param1) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Metric_IsBase(true);
        return vqlistview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQListView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMetric(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Metric_Callback(reinterpret_cast<VirtualQListView::QListView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_InitPainter(const QListView* self, QPainter* painter) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->initPainter(painter);
    } else {
        ((VirtualQListView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QListView_QBaseInitPainter(const QListView* self, QPainter* painter) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitPainter_IsBase(true);
        vqlistview->initPainter(painter);
    } else {
        ((VirtualQListView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitPainter(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_InitPainter_Callback(reinterpret_cast<VirtualQListView::QListView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QListView_Redirected(const QListView* self, QPoint* offset) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->redirected(offset);
    } else {
        return ((VirtualQListView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QListView_QBaseRedirected(const QListView* self, QPoint* offset) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Redirected_IsBase(true);
        return vqlistview->redirected(offset);
    } else {
        return ((VirtualQListView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRedirected(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Redirected_Callback(reinterpret_cast<VirtualQListView::QListView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QListView_SharedPainter(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->sharedPainter();
    } else {
        return ((VirtualQListView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QListView_QBaseSharedPainter(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SharedPainter_IsBase(true);
        return vqlistview->sharedPainter();
    } else {
        return ((VirtualQListView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSharedPainter(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SharedPainter_Callback(reinterpret_cast<VirtualQListView::QListView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ChildEvent(QListView* self, QChildEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->childEvent(event);
    } else {
        ((VirtualQListView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseChildEvent(QListView* self, QChildEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ChildEvent_IsBase(true);
        vqlistview->childEvent(event);
    } else {
        ((VirtualQListView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnChildEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ChildEvent_Callback(reinterpret_cast<VirtualQListView::QListView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_CustomEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->customEvent(event);
    } else {
        ((VirtualQListView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QListView_QBaseCustomEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CustomEvent_IsBase(true);
        vqlistview->customEvent(event);
    } else {
        ((VirtualQListView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCustomEvent(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_CustomEvent_Callback(reinterpret_cast<VirtualQListView::QListView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ConnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->connectNotify(*signal);
    } else {
        ((VirtualQListView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QListView_QBaseConnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ConnectNotify_IsBase(true);
        vqlistview->connectNotify(*signal);
    } else {
        ((VirtualQListView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnConnectNotify(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ConnectNotify_Callback(reinterpret_cast<VirtualQListView::QListView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DisconnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->disconnectNotify(*signal);
    } else {
        ((VirtualQListView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QListView_QBaseDisconnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DisconnectNotify_IsBase(true);
        vqlistview->disconnectNotify(*signal);
    } else {
        ((VirtualQListView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDisconnectNotify(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DisconnectNotify_Callback(reinterpret_cast<VirtualQListView::QListView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ResizeContents(QListView* self, int width, int height) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQListView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void QListView_QBaseResizeContents(QListView* self, int width, int height) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ResizeContents_IsBase(true);
        vqlistview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQListView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnResizeContents(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ResizeContents_Callback(reinterpret_cast<VirtualQListView::QListView_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListView_ContentsSize(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QSize(vqlistview->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* QListView_QBaseContentsSize(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ContentsSize_IsBase(true);
        return new QSize(vqlistview->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnContentsSize(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ContentsSize_Callback(reinterpret_cast<VirtualQListView::QListView_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QRect(vqlistview->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QListView_QBaseRectForIndex(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RectForIndex_IsBase(true);
        return new QRect(vqlistview->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRectForIndex(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_RectForIndex_Callback(reinterpret_cast<VirtualQListView::QListView_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQListView*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void QListView_QBaseSetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetPositionForIndex_IsBase(true);
        vqlistview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQListView*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetPositionForIndex(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetPositionForIndex_Callback(reinterpret_cast<VirtualQListView::QListView_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_State(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return static_cast<int>(vqlistview->state());
    } else {
        return static_cast<int>(((VirtualQListView*)self)->state());
    }
}

// Base class handler implementation
int QListView_QBaseState(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_State_IsBase(true);
        return static_cast<int>(vqlistview->state());
    } else {
        return static_cast<int>(((VirtualQListView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnState(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_State_Callback(reinterpret_cast<VirtualQListView::QListView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetState(QListView* self, int state) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setState(static_cast<VirtualQListView::State>(state));
    } else {
        ((VirtualQListView*)self)->setState(static_cast<VirtualQListView::State>(state));
    }
}

// Base class handler implementation
void QListView_QBaseSetState(QListView* self, int state) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetState_IsBase(true);
        vqlistview->setState(static_cast<VirtualQListView::State>(state));
    } else {
        ((VirtualQListView*)self)->setState(static_cast<VirtualQListView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetState(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetState_Callback(reinterpret_cast<VirtualQListView::QListView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ScheduleDelayedItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQListView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListView_QBaseScheduleDelayedItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScheduleDelayedItemsLayout_IsBase(true);
        vqlistview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQListView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScheduleDelayedItemsLayout(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListView::QListView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ExecuteDelayedItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->executeDelayedItemsLayout();
    } else {
        ((VirtualQListView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListView_QBaseExecuteDelayedItemsLayout(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ExecuteDelayedItemsLayout_IsBase(true);
        vqlistview->executeDelayedItemsLayout();
    } else {
        ((VirtualQListView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnExecuteDelayedItemsLayout(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListView::QListView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetDirtyRegion(QListView* self, const QRegion* region) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setDirtyRegion(*region);
    } else {
        ((VirtualQListView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QListView_QBaseSetDirtyRegion(QListView* self, const QRegion* region) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetDirtyRegion_IsBase(true);
        vqlistview->setDirtyRegion(*region);
    } else {
        ((VirtualQListView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetDirtyRegion(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQListView::QListView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_ScrollDirtyRegion(QListView* self, int dx, int dy) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListView_QBaseScrollDirtyRegion(QListView* self, int dx, int dy) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollDirtyRegion_IsBase(true);
        vqlistview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollDirtyRegion(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQListView::QListView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QListView_DirtyRegionOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QPoint(vqlistview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QListView_QBaseDirtyRegionOffset(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqlistview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDirtyRegionOffset(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQListView::QListView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_StartAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->startAutoScroll();
    } else {
        ((VirtualQListView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QListView_QBaseStartAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StartAutoScroll_IsBase(true);
        vqlistview->startAutoScroll();
    } else {
        ((VirtualQListView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnStartAutoScroll(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StartAutoScroll_Callback(reinterpret_cast<VirtualQListView::QListView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_StopAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->stopAutoScroll();
    } else {
        ((VirtualQListView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QListView_QBaseStopAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StopAutoScroll_IsBase(true);
        vqlistview->stopAutoScroll();
    } else {
        ((VirtualQListView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnStopAutoScroll(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_StopAutoScroll_Callback(reinterpret_cast<VirtualQListView::QListView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DoAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->doAutoScroll();
    } else {
        ((VirtualQListView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QListView_QBaseDoAutoScroll(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DoAutoScroll_IsBase(true);
        vqlistview->doAutoScroll();
    } else {
        ((VirtualQListView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDoAutoScroll(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DoAutoScroll_Callback(reinterpret_cast<VirtualQListView::QListView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_DropIndicatorPosition(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return static_cast<int>(vqlistview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQListView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QListView_QBaseDropIndicatorPosition(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqlistview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQListView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDropIndicatorPosition(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQListView::QListView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_SetViewportMargins(QListView* self, int left, int top, int right, int bottom) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQListView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QListView_QBaseSetViewportMargins(QListView* self, int left, int top, int right, int bottom) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetViewportMargins_IsBase(true);
        vqlistview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQListView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetViewportMargins(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SetViewportMargins_Callback(reinterpret_cast<VirtualQListView::QListView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QListView_ViewportMargins(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return new QMargins(vqlistview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QListView_QBaseViewportMargins(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportMargins_IsBase(true);
        return new QMargins(vqlistview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportMargins(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_ViewportMargins_Callback(reinterpret_cast<VirtualQListView::QListView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_DrawFrame(QListView* self, QPainter* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->drawFrame(param1);
    } else {
        ((VirtualQListView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QListView_QBaseDrawFrame(QListView* self, QPainter* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DrawFrame_IsBase(true);
        vqlistview->drawFrame(param1);
    } else {
        ((VirtualQListView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDrawFrame(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_DrawFrame_Callback(reinterpret_cast<VirtualQListView::QListView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_UpdateMicroFocus(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->updateMicroFocus();
    } else {
        ((VirtualQListView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QListView_QBaseUpdateMicroFocus(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateMicroFocus_IsBase(true);
        vqlistview->updateMicroFocus();
    } else {
        ((VirtualQListView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateMicroFocus(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQListView::QListView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_Create(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->create();
    } else {
        ((VirtualQListView*)self)->create();
    }
}

// Base class handler implementation
void QListView_QBaseCreate(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Create_IsBase(true);
        vqlistview->create();
    } else {
        ((VirtualQListView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCreate(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Create_Callback(reinterpret_cast<VirtualQListView::QListView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QListView_Destroy(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->destroy();
    } else {
        ((VirtualQListView*)self)->destroy();
    }
}

// Base class handler implementation
void QListView_QBaseDestroy(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Destroy_IsBase(true);
        vqlistview->destroy();
    } else {
        ((VirtualQListView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDestroy(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Destroy_Callback(reinterpret_cast<VirtualQListView::QListView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_FocusNextChild(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->focusNextChild();
    } else {
        return ((VirtualQListView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QListView_QBaseFocusNextChild(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusNextChild_IsBase(true);
        return vqlistview->focusNextChild();
    } else {
        return ((VirtualQListView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusNextChild(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusNextChild_Callback(reinterpret_cast<VirtualQListView::QListView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_FocusPreviousChild(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->focusPreviousChild();
    } else {
        return ((VirtualQListView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QListView_QBaseFocusPreviousChild(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusPreviousChild_IsBase(true);
        return vqlistview->focusPreviousChild();
    } else {
        return ((VirtualQListView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusPreviousChild(QListView* self, intptr_t slot) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQListView::QListView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QListView_Sender(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->sender();
    } else {
        return ((VirtualQListView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QListView_QBaseSender(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Sender_IsBase(true);
        return vqlistview->sender();
    } else {
        return ((VirtualQListView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSender(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Sender_Callback(reinterpret_cast<VirtualQListView::QListView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_SenderSignalIndex(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->senderSignalIndex();
    } else {
        return ((VirtualQListView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QListView_QBaseSenderSignalIndex(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SenderSignalIndex_IsBase(true);
        return vqlistview->senderSignalIndex();
    } else {
        return ((VirtualQListView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSenderSignalIndex(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQListView::QListView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListView_Receivers(const QListView* self, const char* signal) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->receivers(signal);
    } else {
        return ((VirtualQListView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QListView_QBaseReceivers(const QListView* self, const char* signal) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Receivers_IsBase(true);
        return vqlistview->receivers(signal);
    } else {
        return ((VirtualQListView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnReceivers(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_Receivers_Callback(reinterpret_cast<VirtualQListView::QListView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListView_IsSignalConnected(const QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->isSignalConnected(*signal);
    } else {
        return ((VirtualQListView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QListView_QBaseIsSignalConnected(const QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IsSignalConnected_IsBase(true);
        return vqlistview->isSignalConnected(*signal);
    } else {
        return ((VirtualQListView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIsSignalConnected(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_IsSignalConnected_Callback(reinterpret_cast<VirtualQListView::QListView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QListView_GetDecodedMetricF(const QListView* self, int metricA, int metricB) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        return vqlistview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQListView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QListView_QBaseGetDecodedMetricF(const QListView* self, int metricA, int metricB) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_GetDecodedMetricF_IsBase(true);
        return vqlistview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQListView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QListView_OnGetDecodedMetricF(const QListView* self, intptr_t slot) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview && vqlistview->isVirtualQListView) {
        vqlistview->setQListView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQListView::QListView_GetDecodedMetricF_Callback>(slot));
    }
}

void QListView_Delete(QListView* self) {
    delete self;
}
