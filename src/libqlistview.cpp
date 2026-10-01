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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QListView_Tr(const char* s) {
    auto _ret = QListView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QRect* QListView_VisualRect(const QListView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void QListView_ScrollTo(QListView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QListView_IndexAt(const QListView* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

void QListView_DoItemsLayout(QListView* self) {
    self->doItemsLayout();
}

void QListView_Reset(QListView* self) {
    self->reset();
}

void QListView_SetRootIndex(QListView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
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
    QListView::connect(self,
                       static_cast<void (QListView::*)(const QList<QModelIndex>&)>(&QListView::indexesMoved),
                       [self, slotFunc](const QList<QModelIndex>& indexes) {
                           const QList<QModelIndex>& indexes_ret = indexes;
                           // Convert QList<> from C++ memory to manually-managed C memory
                           QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (indexes_ret.size())));
                           for (qsizetype i = 0; i < indexes_ret.size(); ++i) {
                               indexes_arr[i] = new QModelIndex(indexes_ret[i]);
                           }
                           libqt_list indexes_out;
                           indexes_out.len = indexes_ret.size();
                           indexes_out.data = static_cast<void*>(indexes_arr);
                           libqt_list /* of QModelIndex* */ sigval1 = indexes_out;
                           slotFunc(self, sigval1);
                           free(indexes_arr);
                       });
}

bool QListView_Event(QListView* self, QEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->event(e);
    }
    qFatal("Error: Protected method QListView::event called without a directly constructed type");
}

void QListView_ScrollContentsBy(QListView* self, int dx, int dy) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QListView_DataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QListView_RowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QListView_RowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->mouseMoveEvent(e);
    }
}

void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->mouseReleaseEvent(e);
    }
}

void QListView_WheelEvent(QListView* self, QWheelEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->wheelEvent(e);
    }
}

void QListView_TimerEvent(QListView* self, QTimerEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->timerEvent(e);
    }
}

void QListView_ResizeEvent(QListView* self, QResizeEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->resizeEvent(e);
    }
}

void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->dragMoveEvent(e);
    }
}

void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->dragLeaveEvent(e);
    }
}

void QListView_DropEvent(QListView* self, QDropEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->dropEvent(e);
    }
}

void QListView_StartDrag(QListView* self, int supportedActions) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->initViewItemOption(option);
    }
}

void QListView_PaintEvent(QListView* self, QPaintEvent* e) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->paintEvent(e);
    }
}

int QListView_HorizontalOffset(const QListView* self) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->horizontalOffset();
    }
    qFatal("Error: Protected method QListView::horizontalOffset called without a directly constructed type");
}

int QListView_VerticalOffset(const QListView* self) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->verticalOffset();
    }
    qFatal("Error: Protected method QListView::verticalOffset called without a directly constructed type");
}

QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return new QModelIndex(vqlistview->moveCursor(static_cast<VirtualQListView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method QListView::moveCursor called without a directly constructed type");
}

void QListView_SetSelection(QListView* self, const QRect* rect, int command) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QListView_VisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        return new QRegion(vqlistview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QListView::visualRegionForSelection called without a directly constructed type");
}

libqt_list /* of QModelIndex* */ QListView_SelectedIndexes(const QListView* self) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        QList<QModelIndex> _ret = vqlistview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
    qFatal("Error: Protected method QListView::selectedIndexes called without a directly constructed type");
}

void QListView_UpdateGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->updateGeometries();
    }
}

bool QListView_IsIndexHidden(const QListView* self, const QModelIndex* index) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QListView::isIndexHidden called without a directly constructed type");
}

void QListView_SelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->selectionChanged(*selected, *deselected);
    }
}

void QListView_CurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->currentChanged(*current, *previous);
    }
}

QSize* QListView_ViewportSizeHint(const QListView* self) {
    auto* vqlistview = dynamic_cast<const VirtualQListView*>(self);
    if (vqlistview) {
        return new QSize(vqlistview->viewportSizeHint());
    }
    qFatal("Error: Protected method QListView::viewportSizeHint called without a directly constructed type");
}

libqt_string QListView_Tr2(const char* s, const char* c) {
    auto _ret = QListView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QListView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QListView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QListView_SuperMetaObject(const QListView* self) {
    return (QMetaObject*)self->QListView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMetaObject(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_metaobject_callback = reinterpret_cast<VirtualQListView::QListView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QListView_SuperMetacast(QListView* self, const char* param1) {
    return self->QListView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMetacast(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_metacast_callback = reinterpret_cast<VirtualQListView::QListView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QListView_SuperMetacall(QListView* self, int param1, int param2, void** param3) {
    return self->QListView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMetacall(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_metacall_callback = reinterpret_cast<VirtualQListView::QListView_Metacall_Callback>(slot);
}

// Base class handler implementation
QRect* QListView_SuperVisualRect(const QListView* self, const QModelIndex* index) {
    return new QRect(self->QListView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRect(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_visualrect_callback = reinterpret_cast<VirtualQListView::QListView_VisualRect_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperScrollTo(QListView* self, const QModelIndex* index, int hint) {
    self->QListView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollTo(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_scrollto_callback = reinterpret_cast<VirtualQListView::QListView_ScrollTo_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QListView_SuperIndexAt(const QListView* self, const QPoint* p) {
    return new QModelIndex(self->QListView::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIndexAt(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_indexat_callback = reinterpret_cast<VirtualQListView::QListView_IndexAt_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperDoItemsLayout(QListView* self) {
    self->QListView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDoItemsLayout(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_doitemslayout_callback = reinterpret_cast<VirtualQListView::QListView_DoItemsLayout_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperReset(QListView* self) {
    self->QListView::reset();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnReset(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_reset_callback = reinterpret_cast<VirtualQListView::QListView_Reset_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperSetRootIndex(QListView* self, const QModelIndex* index) {
    self->QListView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetRootIndex(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setrootindex_callback = reinterpret_cast<VirtualQListView::QListView_SetRootIndex_Callback>(slot);
}

// Base class handler implementation
bool QListView_SuperEvent(QListView* self, QEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::event(e);
    } else
        qFatal("Error: Protected virtual method QListView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_event_callback = reinterpret_cast<VirtualQListView::QListView_Event_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperScrollContentsBy(QListView* self, int dx, int dy) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QListView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnScrollContentsBy(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_scrollcontentsby_callback = reinterpret_cast<VirtualQListView::QListView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperDataChanged(QListView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QListView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDataChanged(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_datachanged_callback = reinterpret_cast<VirtualQListView::QListView_DataChanged_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperRowsInserted(QListView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QListView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsInserted(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_rowsinserted_callback = reinterpret_cast<VirtualQListView::QListView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperRowsAboutToBeRemoved(QListView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QListView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRowsAboutToBeRemoved(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQListView::QListView_RowsAboutToBeRemoved_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperMouseMoveEvent(QListView* self, QMouseEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseMoveEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_mousemoveevent_callback = reinterpret_cast<VirtualQListView::QListView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperMouseReleaseEvent(QListView* self, QMouseEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseReleaseEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_mousereleaseevent_callback = reinterpret_cast<VirtualQListView::QListView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperWheelEvent(QListView* self, QWheelEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnWheelEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_wheelevent_callback = reinterpret_cast<VirtualQListView::QListView_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperTimerEvent(QListView* self, QTimerEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnTimerEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_timerevent_callback = reinterpret_cast<VirtualQListView::QListView_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperResizeEvent(QListView* self, QResizeEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnResizeEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_resizeevent_callback = reinterpret_cast<VirtualQListView::QListView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperDragMoveEvent(QListView* self, QDragMoveEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragMoveEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_dragmoveevent_callback = reinterpret_cast<VirtualQListView::QListView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperDragLeaveEvent(QListView* self, QDragLeaveEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragLeaveEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_dragleaveevent_callback = reinterpret_cast<VirtualQListView::QListView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperDropEvent(QListView* self, QDropEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDropEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_dropevent_callback = reinterpret_cast<VirtualQListView::QListView_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperStartDrag(QListView* self, int supportedActions) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QListView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnStartDrag(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_startdrag_callback = reinterpret_cast<VirtualQListView::QListView_StartDrag_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperInitViewItemOption(const QListView* self, QStyleOptionViewItem* option) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        vqlistview->QListView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QListView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitViewItemOption(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_initviewitemoption_callback = reinterpret_cast<VirtualQListView::QListView_InitViewItemOption_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperPaintEvent(QListView* self, QPaintEvent* e) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QListView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnPaintEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_paintevent_callback = reinterpret_cast<VirtualQListView::QListView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
int QListView_SuperHorizontalOffset(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QListView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalOffset(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_horizontaloffset_callback = reinterpret_cast<VirtualQListView::QListView_HorizontalOffset_Callback>(slot);
}

// Base class handler implementation
int QListView_SuperVerticalOffset(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QListView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalOffset(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_verticaloffset_callback = reinterpret_cast<VirtualQListView::QListView_VerticalOffset_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QListView_SuperMoveCursor(QListView* self, int cursorAction, int modifiers) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        return new QModelIndex(vqlistview->QListView::moveCursor(static_cast<VirtualQListView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QListView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMoveCursor(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_movecursor_callback = reinterpret_cast<VirtualQListView::QListView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperSetSelection(QListView* self, const QRect* rect, int command) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QListView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetSelection(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setselection_callback = reinterpret_cast<VirtualQListView::QListView_SetSelection_Callback>(slot);
}

// Base class handler implementation
QRegion* QListView_SuperVisualRegionForSelection(const QListView* self, const QItemSelection* selection) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QRegion(vqlistview->QListView::visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QListView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVisualRegionForSelection(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_visualregionforselection_callback = reinterpret_cast<VirtualQListView::QListView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QListView_SuperSelectedIndexes(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        QList<QModelIndex> _ret = vqlistview->QListView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QListView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectedIndexes(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_selectedindexes_callback = reinterpret_cast<VirtualQListView::QListView_SelectedIndexes_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperUpdateGeometries(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QListView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateGeometries(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_updategeometries_callback = reinterpret_cast<VirtualQListView::QListView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
bool QListView_SuperIsIndexHidden(const QListView* self, const QModelIndex* index) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QListView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnIsIndexHidden(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_isindexhidden_callback = reinterpret_cast<VirtualQListView::QListView_IsIndexHidden_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperSelectionChanged(QListView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QListView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectionChanged(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_selectionchanged_callback = reinterpret_cast<VirtualQListView::QListView_SelectionChanged_Callback>(slot);
}

// Base class handler implementation
void QListView_SuperCurrentChanged(QListView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QListView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCurrentChanged(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_currentchanged_callback = reinterpret_cast<VirtualQListView::QListView_CurrentChanged_Callback>(slot);
}

// Base class handler implementation
QSize* QListView_SuperViewportSizeHint(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QSize(vqlistview->QListView::viewportSizeHint());
    qFatal("Error: Protected virtual method QListView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportSizeHint(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_viewportsizehint_callback = reinterpret_cast<VirtualQListView::QListView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QListView_SetModel(QListView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void QListView_SuperSetModel(QListView* self, QAbstractItemModel* model) {
    self->QListView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetModel(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setmodel_callback = reinterpret_cast<VirtualQListView::QListView_SetModel_Callback>(slot);
}

// Derived class handler implementation
void QListView_SetSelectionModel(QListView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void QListView_SuperSetSelectionModel(QListView* self, QItemSelectionModel* selectionModel) {
    self->QListView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetSelectionModel(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setselectionmodel_callback = reinterpret_cast<VirtualQListView::QListView_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void QListView_KeyboardSearch(QListView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QListView_SuperKeyboardSearch(QListView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QListView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyboardSearch(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_keyboardsearch_callback = reinterpret_cast<VirtualQListView::QListView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int QListView_SizeHintForRow(const QListView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QListView_SuperSizeHintForRow(const QListView* self, int row) {
    return self->QListView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHintForRow(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_sizehintforrow_callback = reinterpret_cast<VirtualQListView::QListView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QListView_SizeHintForColumn(const QListView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int QListView_SuperSizeHintForColumn(const QListView* self, int column) {
    return self->QListView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHintForColumn(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_sizehintforcolumn_callback = reinterpret_cast<VirtualQListView::QListView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QListView_ItemDelegateForIndex(const QListView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QListView_SuperItemDelegateForIndex(const QListView* self, const QModelIndex* index) {
    return self->QListView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnItemDelegateForIndex(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_itemdelegateforindex_callback = reinterpret_cast<VirtualQListView::QListView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QListView_InputMethodQuery(const QListView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QListView_SuperInputMethodQuery(const QListView* self, int query) {
    return new QVariant(self->QListView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInputMethodQuery(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_inputmethodquery_callback = reinterpret_cast<VirtualQListView::QListView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QListView_SelectAll(QListView* self) {
    self->selectAll();
}

// Base class handler implementation
void QListView_SuperSelectAll(QListView* self) {
    self->QListView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectAll(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_selectall_callback = reinterpret_cast<VirtualQListView::QListView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QListView_UpdateEditorData(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QListView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperUpdateEditorData(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QListView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateEditorData(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_updateeditordata_callback = reinterpret_cast<VirtualQListView::QListView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QListView_UpdateEditorGeometries(QListView* self) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QListView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperUpdateEditorGeometries(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QListView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnUpdateEditorGeometries(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_updateeditorgeometries_callback = reinterpret_cast<VirtualQListView::QListView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QListView_VerticalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QListView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperVerticalScrollbarAction(QListView* self, int action) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QListView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalScrollbarAction(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQListView::QListView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QListView_HorizontalScrollbarAction(QListView* self, int action) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QListView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperHorizontalScrollbarAction(QListView* self, int action) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QListView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalScrollbarAction(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQListView::QListView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QListView_VerticalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QListView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperVerticalScrollbarValueChanged(QListView* self, int value) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QListView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnVerticalScrollbarValueChanged(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQListView::QListView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QListView_HorizontalScrollbarValueChanged(QListView* self, int value) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QListView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperHorizontalScrollbarValueChanged(QListView* self, int value) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QListView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHorizontalScrollbarValueChanged(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQListView::QListView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QListView_CloseEditor(QListView* self, QWidget* editor, int hint) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QListView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperCloseEditor(QListView* self, QWidget* editor, int hint) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QListView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCloseEditor(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_closeeditor_callback = reinterpret_cast<VirtualQListView::QListView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QListView_CommitData(QListView* self, QWidget* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QListView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperCommitData(QListView* self, QWidget* editor) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QListView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCommitData(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_commitdata_callback = reinterpret_cast<VirtualQListView::QListView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QListView_EditorDestroyed(QListView* self, QObject* editor) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QListView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperEditorDestroyed(QListView* self, QObject* editor) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QListView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEditorDestroyed(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_editordestroyed_callback = reinterpret_cast<VirtualQListView::QListView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QListView_Edit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QListView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListView_SuperEdit2(QListView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QListView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEdit2(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_edit2_callback = reinterpret_cast<VirtualQListView::QListView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QListView_SelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        return static_cast<int>(vqlistview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QListView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QListView_SuperSelectionCommand(const QListView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return static_cast<int>(vqlistview->QListView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QListView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSelectionCommand(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_selectioncommand_callback = reinterpret_cast<VirtualQListView::QListView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool QListView_FocusNextPrevChild(QListView* self, bool next) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QListView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListView_SuperFocusNextPrevChild(QListView* self, bool next) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QListView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusNextPrevChild(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_focusnextprevchild_callback = reinterpret_cast<VirtualQListView::QListView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QListView_ViewportEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListView_SuperViewportEvent(QListView* self, QEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnViewportEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_viewportevent_callback = reinterpret_cast<VirtualQListView::QListView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_MousePressEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperMousePressEvent(QListView* self, QMouseEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMousePressEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_mousepressevent_callback = reinterpret_cast<VirtualQListView::QListView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_MouseDoubleClickEvent(QListView* self, QMouseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperMouseDoubleClickEvent(QListView* self, QMouseEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMouseDoubleClickEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQListView::QListView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_DragEnterEvent(QListView* self, QDragEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperDragEnterEvent(QListView* self, QDragEnterEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDragEnterEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_dragenterevent_callback = reinterpret_cast<VirtualQListView::QListView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_FocusInEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperFocusInEvent(QListView* self, QFocusEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusInEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_focusinevent_callback = reinterpret_cast<VirtualQListView::QListView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_FocusOutEvent(QListView* self, QFocusEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperFocusOutEvent(QListView* self, QFocusEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnFocusOutEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_focusoutevent_callback = reinterpret_cast<VirtualQListView::QListView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_KeyPressEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperKeyPressEvent(QListView* self, QKeyEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyPressEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_keypressevent_callback = reinterpret_cast<VirtualQListView::QListView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_InputMethodEvent(QListView* self, QInputMethodEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperInputMethodEvent(QListView* self, QInputMethodEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInputMethodEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_inputmethodevent_callback = reinterpret_cast<VirtualQListView::QListView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QListView_EventFilter(QListView* self, QObject* object, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QListView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListView_SuperEventFilter(QListView* self, QObject* object, QEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QListView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEventFilter(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_eventfilter_callback = reinterpret_cast<VirtualQListView::QListView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QListView_MinimumSizeHint(const QListView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QListView_SuperMinimumSizeHint(const QListView* self) {
    return new QSize(self->QListView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMinimumSizeHint(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_minimumsizehint_callback = reinterpret_cast<VirtualQListView::QListView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QListView_SizeHint(const QListView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QListView_SuperSizeHint(const QListView* self) {
    return new QSize(self->QListView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSizeHint(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_sizehint_callback = reinterpret_cast<VirtualQListView::QListView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QListView_SetupViewport(QListView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QListView_SuperSetupViewport(QListView* self, QWidget* viewport) {
    self->QListView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetupViewport(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setupviewport_callback = reinterpret_cast<VirtualQListView::QListView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QListView_ContextMenuEvent(QListView* self, QContextMenuEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QListView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperContextMenuEvent(QListView* self, QContextMenuEvent* param1) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QListView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnContextMenuEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_contextmenuevent_callback = reinterpret_cast<VirtualQListView::QListView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_ChangeEvent(QListView* self, QEvent* param1) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QListView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperChangeEvent(QListView* self, QEvent* param1) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QListView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnChangeEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_changeevent_callback = reinterpret_cast<VirtualQListView::QListView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_InitStyleOption(const QListView* self, QStyleOptionFrame* option) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        vqlistview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QListView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperInitStyleOption(const QListView* self, QStyleOptionFrame* option) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        vqlistview->QListView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QListView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitStyleOption(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_initstyleoption_callback = reinterpret_cast<VirtualQListView::QListView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QListView_DevType(const QListView* self) {
    return self->devType();
}

// Base class handler implementation
int QListView_SuperDevType(const QListView* self) {
    return self->QListView::devType();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDevType(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_devtype_callback = reinterpret_cast<VirtualQListView::QListView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QListView_SetVisible(QListView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QListView_SuperSetVisible(QListView* self, bool visible) {
    self->QListView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSetVisible(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_setvisible_callback = reinterpret_cast<VirtualQListView::QListView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QListView_HeightForWidth(const QListView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QListView_SuperHeightForWidth(const QListView* self, int param1) {
    return self->QListView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHeightForWidth(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_heightforwidth_callback = reinterpret_cast<VirtualQListView::QListView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QListView_HasHeightForWidth(const QListView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QListView_SuperHasHeightForWidth(const QListView* self) {
    return self->QListView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHasHeightForWidth(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_hasheightforwidth_callback = reinterpret_cast<VirtualQListView::QListView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QListView_PaintEngine(const QListView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QListView_SuperPaintEngine(const QListView* self) {
    return self->QListView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QListView_OnPaintEngine(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_paintengine_callback = reinterpret_cast<VirtualQListView::QListView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QListView_KeyReleaseEvent(QListView* self, QKeyEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperKeyReleaseEvent(QListView* self, QKeyEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnKeyReleaseEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_keyreleaseevent_callback = reinterpret_cast<VirtualQListView::QListView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_EnterEvent(QListView* self, QEnterEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperEnterEvent(QListView* self, QEnterEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnEnterEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_enterevent_callback = reinterpret_cast<VirtualQListView::QListView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_LeaveEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperLeaveEvent(QListView* self, QEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnLeaveEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_leaveevent_callback = reinterpret_cast<VirtualQListView::QListView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_MoveEvent(QListView* self, QMoveEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperMoveEvent(QListView* self, QMoveEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMoveEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_moveevent_callback = reinterpret_cast<VirtualQListView::QListView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_CloseEvent(QListView* self, QCloseEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperCloseEvent(QListView* self, QCloseEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCloseEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_closeevent_callback = reinterpret_cast<VirtualQListView::QListView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_TabletEvent(QListView* self, QTabletEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperTabletEvent(QListView* self, QTabletEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnTabletEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_tabletevent_callback = reinterpret_cast<VirtualQListView::QListView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_ActionEvent(QListView* self, QActionEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperActionEvent(QListView* self, QActionEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnActionEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_actionevent_callback = reinterpret_cast<VirtualQListView::QListView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_ShowEvent(QListView* self, QShowEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperShowEvent(QListView* self, QShowEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnShowEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_showevent_callback = reinterpret_cast<VirtualQListView::QListView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_HideEvent(QListView* self, QHideEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperHideEvent(QListView* self, QHideEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnHideEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_hideevent_callback = reinterpret_cast<VirtualQListView::QListView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QListView_NativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        return vqlistview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QListView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListView_SuperNativeEvent(QListView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->QListView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QListView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnNativeEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_nativeevent_callback = reinterpret_cast<VirtualQListView::QListView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QListView_Metric(const QListView* self, int param1) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        return vqlistview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QListView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QListView_SuperMetric(const QListView* self, int param1) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QListView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnMetric(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_metric_callback = reinterpret_cast<VirtualQListView::QListView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QListView_InitPainter(const QListView* self, QPainter* painter) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        vqlistview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QListView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperInitPainter(const QListView* self, QPainter* painter) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        vqlistview->QListView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QListView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnInitPainter(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_initpainter_callback = reinterpret_cast<VirtualQListView::QListView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QListView_Redirected(const QListView* self, QPoint* offset) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        return vqlistview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QListView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QListView_SuperRedirected(const QListView* self, QPoint* offset) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QListView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnRedirected(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_redirected_callback = reinterpret_cast<VirtualQListView::QListView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QListView_SharedPainter(const QListView* self) {
    auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self));
    if (vqlistview) {
        return vqlistview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QListView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QListView_SuperSharedPainter(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->QListView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QListView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnSharedPainter(QListView* self, intptr_t slot) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        vqlistview->qlistview_sharedpainter_callback = reinterpret_cast<VirtualQListView::QListView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QListView_ChildEvent(QListView* self, QChildEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperChildEvent(QListView* self, QChildEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnChildEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_childevent_callback = reinterpret_cast<VirtualQListView::QListView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_CustomEvent(QListView* self, QEvent* event) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperCustomEvent(QListView* self, QEvent* event) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QListView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnCustomEvent(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_customevent_callback = reinterpret_cast<VirtualQListView::QListView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QListView_ConnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QListView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperConnectNotify(QListView* self, const QMetaMethod* signal) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QListView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnConnectNotify(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_connectnotify_callback = reinterpret_cast<VirtualQListView::QListView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QListView_DisconnectNotify(QListView* self, const QMetaMethod* signal) {
    auto* vqlistview = dynamic_cast<VirtualQListView*>(self);
    if (vqlistview) {
        vqlistview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QListView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QListView_SuperDisconnectNotify(QListView* self, const QMetaMethod* signal) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->QListView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QListView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListView_OnDisconnectNotify(QListView* self, intptr_t slot) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self))
        vqlistview->qlistview_disconnectnotify_callback = reinterpret_cast<VirtualQListView::QListView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QListView_ResizeContents(QListView* self, int width, int height) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method QListView::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* QListView_ContentsSize(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QSize(vqlistview->contentsSize());
    qFatal("Error: Protected method QListView::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* QListView_RectForIndex(const QListView* self, const QModelIndex* index) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QRect(vqlistview->rectForIndex(*index));
    qFatal("Error: Protected method QListView::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_SetPositionForIndex(QListView* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method QListView::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QListView_State(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return static_cast<int>(vqlistview->VirtualQListView::state());
    } else
        qFatal("Error: Protected method QListView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_SetState(QListView* self, int state) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::setState(static_cast<VirtualQListView::State>(state));
    } else
        qFatal("Error: Protected method QListView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_ScheduleDelayedItemsLayout(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QListView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_ExecuteDelayedItemsLayout(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QListView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_SetDirtyRegion(QListView* self, const QRegion* region) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QListView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_ScrollDirtyRegion(QListView* self, int dx, int dy) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QListView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QListView_DirtyRegionOffset(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QPoint(vqlistview->dirtyRegionOffset());
    qFatal("Error: Protected method QListView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_StartAutoScroll(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::startAutoScroll();
    } else
        qFatal("Error: Protected method QListView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_StopAutoScroll(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QListView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_DoAutoScroll(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::doAutoScroll();
    } else
        qFatal("Error: Protected method QListView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QListView_DropIndicatorPosition(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return static_cast<int>(vqlistview->VirtualQListView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QListView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_SetViewportMargins(QListView* self, int left, int top, int right, int bottom) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QListView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QListView_ViewportMargins(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self)))
        return new QMargins(vqlistview->viewportMargins());
    qFatal("Error: Protected method QListView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_DrawFrame(QListView* self, QPainter* param1) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QListView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_UpdateMicroFocus(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QListView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_Create(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::create();
    } else
        qFatal("Error: Protected method QListView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QListView_Destroy(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        vqlistview->VirtualQListView::destroy();
    } else
        qFatal("Error: Protected method QListView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListView_FocusNextChild(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->VirtualQListView::focusNextChild();
    } else
        qFatal("Error: Protected method QListView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListView_FocusPreviousChild(QListView* self) {
    if (auto* vqlistview = dynamic_cast<VirtualQListView*>(self)) {
        return vqlistview->VirtualQListView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QListView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QListView_Sender(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->VirtualQListView::sender();
    } else
        qFatal("Error: Protected method QListView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QListView_SenderSignalIndex(const QListView* self) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->VirtualQListView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QListView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QListView_Receivers(const QListView* self, const char* signal) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->VirtualQListView::receivers(signal);
    } else
        qFatal("Error: Protected method QListView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListView_IsSignalConnected(const QListView* self, const QMetaMethod* signal) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->VirtualQListView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QListView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QListView_GetDecodedMetricF(const QListView* self, int metricA, int metricB) {
    if (auto* vqlistview = const_cast<VirtualQListView*>(dynamic_cast<const VirtualQListView*>(self))) {
        return vqlistview->VirtualQListView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QListView::getDecodedMetricF called without a directly constructed type");
}

void QListView_Delete(QListView* self) {
    delete self;
}
