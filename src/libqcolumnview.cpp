#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColumnView>
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
#include <qcolumnview.h>
#include "libqcolumnview.h"
#include "libqcolumnview.hxx"

QColumnView* QColumnView_new(QWidget* parent) {
    return new VirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
    return new VirtualQColumnView();
}

QMetaObject* QColumnView_MetaObject(const QColumnView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QColumnView_Metacast(QColumnView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QColumnView_Metacall(QColumnView* self, int param1, int param2, void** param3) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQColumnView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnMetacall(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Metacall_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColumnView_QBaseMetacall(QColumnView* self, int param1, int param2, void** param3) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Metacall_IsBase(true);
        return vqcolumnview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQColumnView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QColumnView_Tr(const char* s) {
    QString _ret = QColumnView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, const QModelIndex* index) {
    self->updatePreviewWidget(*index);
}

void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot) {
    void (*slotFunc)(QColumnView*, QModelIndex*) = reinterpret_cast<void (*)(QColumnView*, QModelIndex*)>(slot);
    QColumnView::connect(self, &QColumnView::updatePreviewWidget, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QModelIndex(self->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualQColumnView*)self)->indexAt(*point));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IndexAt_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IndexAt_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, const QPoint* point) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IndexAt_IsBase(true);
        return new QModelIndex(vqcolumnview->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualQColumnView*)self)->indexAt(*point));
    }
}

void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        ((VirtualQColumnView*)self)->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollTo_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollTo_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollTo_IsBase(true);
        vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        ((VirtualQColumnView*)self)->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualQColumnView*)self)->sizeHint());
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHint_Callback>(slot));
    }
}

// Virtual base class handler implementation
QSize* QColumnView_QBaseSizeHint(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHint_IsBase(true);
        return new QSize(vqcolumnview->sizeHint());
    } else {
        return new QSize(((VirtualQColumnView*)self)->sizeHint());
    }
}

QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QRect(self->visualRect(*index));
    } else {
        return new QRect(((VirtualQColumnView*)self)->visualRect(*index));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VisualRect_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRect_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VisualRect_IsBase(true);
        return new QRect(vqcolumnview->visualRect(*index));
    } else {
        return new QRect(((VirtualQColumnView*)self)->visualRect(*index));
    }
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        self->setModel(model);
    } else {
        ((VirtualQColumnView*)self)->setModel(model);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetModel_IsBase(true);
        vqcolumnview->setModel(model);
    } else {
        ((VirtualQColumnView*)self)->setModel(model);
    }
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        self->setSelectionModel(selectionModel);
    } else {
        ((VirtualQColumnView*)self)->setSelectionModel(selectionModel);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetSelectionModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelectionModel_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetSelectionModel_IsBase(true);
        vqcolumnview->setSelectionModel(selectionModel);
    } else {
        ((VirtualQColumnView*)self)->setSelectionModel(selectionModel);
    }
}

void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        self->setRootIndex(*index);
    } else {
        ((VirtualQColumnView*)self)->setRootIndex(*index);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetRootIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetRootIndex_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseSetRootIndex(QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetRootIndex_IsBase(true);
        vqcolumnview->setRootIndex(*index);
    } else {
        ((VirtualQColumnView*)self)->setRootIndex(*index);
    }
}

void QColumnView_SelectAll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        self->selectAll();
    } else {
        ((VirtualQColumnView*)self)->selectAll();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectAll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectAll_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseSelectAll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectAll_IsBase(true);
        vqcolumnview->selectAll();
    } else {
        ((VirtualQColumnView*)self)->selectAll();
    }
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
    self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
    return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
    return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
    self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, const libqt_list /* of int */ list) {
    QList<int> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<int>(list_arr[i]));
    }
    self->setColumnWidths(list_QList);
}

libqt_list /* of int */ QColumnView_ColumnWidths(const QColumnView* self) {
    QList<int> _ret = self->columnWidths();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QColumnView_IsIndexHidden(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->isIndexHidden(*index);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnIsIndexHidden(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IsIndexHidden_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IsIndexHidden_Callback>(slot));
    }
}

// Virtual base class handler implementation
bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IsIndexHidden_IsBase(true);
        return vqcolumnview->isIndexHidden(*index);
    }
    return {};
}

QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QModelIndex(vqcolumnview->moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MoveCursor_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MoveCursor_Callback>(slot));
    }
}

// Virtual base class handler implementation
QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MoveCursor_IsBase(true);
        return new QModelIndex(vqcolumnview->moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->resizeEvent(event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ResizeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ResizeEvent_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ResizeEvent_IsBase(true);
        vqcolumnview->resizeEvent(event);
    }
}

void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelection_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseSetSelection(QColumnView* self, const QRect* rect, int command) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetSelection_IsBase(true);
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnVisualRegionForSelection(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRegionForSelection_Callback>(slot));
    }
}

// Virtual base class handler implementation
QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
    }
    return {};
}

int QColumnView_HorizontalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->horizontalOffset();
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnHorizontalOffset(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalOffset_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColumnView_QBaseHorizontalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalOffset_IsBase(true);
        return vqcolumnview->horizontalOffset();
    }
    return {};
}

int QColumnView_VerticalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->verticalOffset();
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnVerticalOffset(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalOffset_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColumnView_QBaseVerticalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalOffset_IsBase(true);
        return vqcolumnview->verticalOffset();
    }
    return {};
}

void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_RowsInserted_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_RowsInserted_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_RowsInserted_IsBase(true);
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->currentChanged(*current, *previous);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CurrentChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CurrentChanged_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CurrentChanged_IsBase(true);
        vqcolumnview->currentChanged(*current, *previous);
    }
}

void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollContentsBy_Callback>(slot));
    }
}

// Virtual base class handler implementation
void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollContentsBy_IsBase(true);
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->createColumn(*rootIndex);
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CreateColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CreateColumn_Callback>(slot));
    }
}

// Virtual base class handler implementation
QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CreateColumn_IsBase(true);
        return vqcolumnview->createColumn(*rootIndex);
    }
    return {};
}

libqt_string QColumnView_Tr2(const char* s, const char* c) {
    QString _ret = QColumnView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QColumnView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QColumnView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QColumnView_KeyboardSearch(QColumnView* self, const libqt_string search) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->keyboardSearch(search_QString);
    } else {
        self->QColumnView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyboardSearch(QColumnView* self, const libqt_string search) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyboardSearch_IsBase(true);
        vqcolumnview->keyboardSearch(search_QString);
    } else {
        self->QColumnView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyboardSearch(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyboardSearch_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SizeHintForRow(const QColumnView* self, int row) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QColumnView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QColumnView_QBaseSizeHintForRow(const QColumnView* self, int row) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHintForRow_IsBase(true);
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QColumnView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForRow(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHintForRow_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SizeHintForColumn(const QColumnView* self, int column) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QColumnView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QColumnView_QBaseSizeHintForColumn(const QColumnView* self, int column) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHintForColumn_IsBase(true);
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QColumnView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForColumn(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QColumnView_ItemDelegateForIndex(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->itemDelegateForIndex(*index);
    } else {
        return self->QColumnView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QColumnView_QBaseItemDelegateForIndex(const QColumnView* self, const QModelIndex* index) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ItemDelegateForIndex_IsBase(true);
        return vqcolumnview->itemDelegateForIndex(*index);
    } else {
        return self->QColumnView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnItemDelegateForIndex(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QColumnView_InputMethodQuery(const QColumnView* self, int query) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QVariant(vqcolumnview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQColumnView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QColumnView_QBaseInputMethodQuery(const QColumnView* self, int query) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InputMethodQuery_IsBase(true);
        return new QVariant(vqcolumnview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQColumnView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodQuery(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InputMethodQuery_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Reset(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->reset();
    } else {
        self->QColumnView::reset();
    }
}

// Base class handler implementation
void QColumnView_QBaseReset(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Reset_IsBase(true);
        vqcolumnview->reset();
    } else {
        self->QColumnView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnReset(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Reset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DoItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->doItemsLayout();
    } else {
        self->QColumnView::doItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseDoItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DoItemsLayout_IsBase(true);
        vqcolumnview->doItemsLayout();
    } else {
        self->QColumnView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDoItemsLayout(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DoItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQColumnView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QColumnView_QBaseDataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DataChanged_IsBase(true);
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQColumnView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDataChanged(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DataChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_RowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQColumnView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QColumnView_QBaseRowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_RowsAboutToBeRemoved_IsBase(true);
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQColumnView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsAboutToBeRemoved(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQColumnView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QColumnView_QBaseSelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectionChanged_IsBase(true);
        vqcolumnview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQColumnView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionChanged(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectionChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateEditorData(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->updateEditorData();
    } else {
        ((VirtualQColumnView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateEditorData(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateEditorData_IsBase(true);
        vqcolumnview->updateEditorData();
    } else {
        ((VirtualQColumnView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorData(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateEditorData_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateEditorGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->updateEditorGeometries();
    } else {
        ((VirtualQColumnView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateEditorGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateEditorGeometries_IsBase(true);
        vqcolumnview->updateEditorGeometries();
    } else {
        ((VirtualQColumnView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorGeometries(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->updateGeometries();
    } else {
        ((VirtualQColumnView*)self)->updateGeometries();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateGeometries_IsBase(true);
        vqcolumnview->updateGeometries();
    } else {
        ((VirtualQColumnView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateGeometries(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateGeometries_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQColumnView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QColumnView_QBaseVerticalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalScrollbarAction_IsBase(true);
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQColumnView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarAction(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQColumnView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QColumnView_QBaseHorizontalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalScrollbarAction_IsBase(true);
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQColumnView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarAction(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQColumnView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QColumnView_QBaseVerticalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalScrollbarValueChanged_IsBase(true);
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQColumnView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQColumnView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QColumnView_QBaseHorizontalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalScrollbarValueChanged_IsBase(true);
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQColumnView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CloseEditor(QColumnView* self, QWidget* editor, int hint) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQColumnView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QColumnView_QBaseCloseEditor(QColumnView* self, QWidget* editor, int hint) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CloseEditor_IsBase(true);
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQColumnView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEditor(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CloseEditor_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CommitData(QColumnView* self, QWidget* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->commitData(editor);
    } else {
        ((VirtualQColumnView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QColumnView_QBaseCommitData(QColumnView* self, QWidget* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CommitData_IsBase(true);
        vqcolumnview->commitData(editor);
    } else {
        ((VirtualQColumnView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCommitData(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CommitData_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_EditorDestroyed(QColumnView* self, QObject* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->editorDestroyed(editor);
    } else {
        ((VirtualQColumnView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QColumnView_QBaseEditorDestroyed(QColumnView* self, QObject* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EditorDestroyed_IsBase(true);
        vqcolumnview->editorDestroyed(editor);
    } else {
        ((VirtualQColumnView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEditorDestroyed(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EditorDestroyed_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QColumnView_SelectedIndexes(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        QList<QModelIndex> _ret = vqcolumnview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQColumnView*)self)->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QColumnView_QBaseSelectedIndexes(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqcolumnview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQColumnView*)self)->selectedIndexes();
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
void QColumnView_OnSelectedIndexes(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectedIndexes_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_Edit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQColumnView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEdit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Edit2_IsBase(true);
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQColumnView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEdit2(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Edit2_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QColumnView_QBaseSelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionCommand(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SelectionCommand_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StartDrag(QColumnView* self, int supportedActions) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQColumnView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QColumnView_QBaseStartDrag(QColumnView* self, int supportedActions) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StartDrag_IsBase(true);
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQColumnView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStartDrag(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StartDrag_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->initViewItemOption(option);
    } else {
        ((VirtualQColumnView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitViewItemOption_IsBase(true);
        vqcolumnview->initViewItemOption(option);
    } else {
        ((VirtualQColumnView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitViewItemOption(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitViewItemOption_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusNextPrevChild(QColumnView* self, bool next) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->focusNextPrevChild(next);
    } else {
        return ((VirtualQColumnView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusNextPrevChild(QColumnView* self, bool next) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusNextPrevChild_IsBase(true);
        return vqcolumnview->focusNextPrevChild(next);
    } else {
        return ((VirtualQColumnView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusNextPrevChild(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_Event(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->event(event);
    } else {
        return ((VirtualQColumnView*)self)->event(event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Event_IsBase(true);
        return vqcolumnview->event(event);
    } else {
        return ((VirtualQColumnView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Event_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_ViewportEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->viewportEvent(event);
    } else {
        return ((VirtualQColumnView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseViewportEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportEvent_IsBase(true);
        return vqcolumnview->viewportEvent(event);
    } else {
        return ((VirtualQColumnView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MousePressEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->mousePressEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMousePressEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MousePressEvent_IsBase(true);
        vqcolumnview->mousePressEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMousePressEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MousePressEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->mouseMoveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseMoveEvent_IsBase(true);
        vqcolumnview->mouseMoveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseMoveEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->mouseReleaseEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseReleaseEvent_IsBase(true);
        vqcolumnview->mouseReleaseEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseReleaseEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseDoubleClickEvent_IsBase(true);
        vqcolumnview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQColumnView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseDoubleClickEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->dragEnterEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragEnterEvent_IsBase(true);
        vqcolumnview->dragEnterEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragEnterEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragEnterEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->dragMoveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragMoveEvent_IsBase(true);
        vqcolumnview->dragMoveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragMoveEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragMoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->dragLeaveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragLeaveEvent_IsBase(true);
        vqcolumnview->dragLeaveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragLeaveEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DropEvent(QColumnView* self, QDropEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->dropEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDropEvent(QColumnView* self, QDropEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DropEvent_IsBase(true);
        vqcolumnview->dropEvent(event);
    } else {
        ((VirtualQColumnView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDropEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DropEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_FocusInEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->focusInEvent(event);
    } else {
        ((VirtualQColumnView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseFocusInEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusInEvent_IsBase(true);
        vqcolumnview->focusInEvent(event);
    } else {
        ((VirtualQColumnView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusInEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusInEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_FocusOutEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->focusOutEvent(event);
    } else {
        ((VirtualQColumnView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseFocusOutEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusOutEvent_IsBase(true);
        vqcolumnview->focusOutEvent(event);
    } else {
        ((VirtualQColumnView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusOutEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusOutEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_KeyPressEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->keyPressEvent(event);
    } else {
        ((VirtualQColumnView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyPressEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyPressEvent_IsBase(true);
        vqcolumnview->keyPressEvent(event);
    } else {
        ((VirtualQColumnView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyPressEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyPressEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_TimerEvent(QColumnView* self, QTimerEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->timerEvent(event);
    } else {
        ((VirtualQColumnView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseTimerEvent(QColumnView* self, QTimerEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_TimerEvent_IsBase(true);
        vqcolumnview->timerEvent(event);
    } else {
        ((VirtualQColumnView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTimerEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_TimerEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->inputMethodEvent(event);
    } else {
        ((VirtualQColumnView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseInputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InputMethodEvent_IsBase(true);
        vqcolumnview->inputMethodEvent(event);
    } else {
        ((VirtualQColumnView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InputMethodEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_EventFilter(QColumnView* self, QObject* object, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->eventFilter(object, event);
    } else {
        return ((VirtualQColumnView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEventFilter(QColumnView* self, QObject* object, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EventFilter_IsBase(true);
        return vqcolumnview->eventFilter(object, event);
    } else {
        return ((VirtualQColumnView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEventFilter(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EventFilter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColumnView_ViewportSizeHint(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QSize(vqcolumnview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QColumnView_QBaseViewportSizeHint(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportSizeHint_IsBase(true);
        return new QSize(vqcolumnview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportSizeHint(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColumnView_MinimumSizeHint(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QSize(vqcolumnview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQColumnView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QColumnView_QBaseMinimumSizeHint(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MinimumSizeHint_IsBase(true);
        return new QSize(vqcolumnview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQColumnView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMinimumSizeHint(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetupViewport(QColumnView* self, QWidget* viewport) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setupViewport(viewport);
    } else {
        self->QColumnView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetupViewport(QColumnView* self, QWidget* viewport) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetupViewport_IsBase(true);
        vqcolumnview->setupViewport(viewport);
    } else {
        self->QColumnView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetupViewport(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetupViewport_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_PaintEvent(QColumnView* self, QPaintEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->paintEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBasePaintEvent(QColumnView* self, QPaintEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_PaintEvent_IsBase(true);
        vqcolumnview->paintEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_PaintEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_WheelEvent(QColumnView* self, QWheelEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->wheelEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseWheelEvent(QColumnView* self, QWheelEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_WheelEvent_IsBase(true);
        vqcolumnview->wheelEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnWheelEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_WheelEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->contextMenuEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ContextMenuEvent_IsBase(true);
        vqcolumnview->contextMenuEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnContextMenuEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ChangeEvent(QColumnView* self, QEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->changeEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseChangeEvent(QColumnView* self, QEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ChangeEvent_IsBase(true);
        vqcolumnview->changeEvent(param1);
    } else {
        ((VirtualQColumnView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChangeEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ChangeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->initStyleOption(option);
    } else {
        ((VirtualQColumnView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitStyleOption_IsBase(true);
        vqcolumnview->initStyleOption(option);
    } else {
        ((VirtualQColumnView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitStyleOption(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitStyleOption_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_DevType(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->devType();
    } else {
        return self->QColumnView::devType();
    }
}

// Base class handler implementation
int QColumnView_QBaseDevType(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DevType_IsBase(true);
        return vqcolumnview->devType();
    } else {
        return self->QColumnView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDevType(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DevType_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetVisible(QColumnView* self, bool visible) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setVisible(visible);
    } else {
        self->QColumnView::setVisible(visible);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetVisible(QColumnView* self, bool visible) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetVisible_IsBase(true);
        vqcolumnview->setVisible(visible);
    } else {
        self->QColumnView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetVisible(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetVisible_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_HeightForWidth(const QColumnView* self, int param1) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QColumnView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QColumnView_QBaseHeightForWidth(const QColumnView* self, int param1) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HeightForWidth_IsBase(true);
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QColumnView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHeightForWidth(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HeightForWidth_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_HasHeightForWidth(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->hasHeightForWidth();
    } else {
        return self->QColumnView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QColumnView_QBaseHasHeightForWidth(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HasHeightForWidth_IsBase(true);
        return vqcolumnview->hasHeightForWidth();
    } else {
        return self->QColumnView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHasHeightForWidth(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QColumnView_PaintEngine(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->paintEngine();
    } else {
        return self->QColumnView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QColumnView_QBasePaintEngine(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_PaintEngine_IsBase(true);
        return vqcolumnview->paintEngine();
    } else {
        return self->QColumnView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEngine(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_PaintEngine_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_KeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->keyReleaseEvent(event);
    } else {
        ((VirtualQColumnView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyReleaseEvent_IsBase(true);
        vqcolumnview->keyReleaseEvent(event);
    } else {
        ((VirtualQColumnView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyReleaseEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_EnterEvent(QColumnView* self, QEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->enterEvent(event);
    } else {
        ((VirtualQColumnView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseEnterEvent(QColumnView* self, QEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EnterEvent_IsBase(true);
        vqcolumnview->enterEvent(event);
    } else {
        ((VirtualQColumnView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEnterEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_EnterEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_LeaveEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->leaveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseLeaveEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_LeaveEvent_IsBase(true);
        vqcolumnview->leaveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnLeaveEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_LeaveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MoveEvent(QColumnView* self, QMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->moveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMoveEvent(QColumnView* self, QMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MoveEvent_IsBase(true);
        vqcolumnview->moveEvent(event);
    } else {
        ((VirtualQColumnView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_MoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CloseEvent(QColumnView* self, QCloseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->closeEvent(event);
    } else {
        ((VirtualQColumnView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseCloseEvent(QColumnView* self, QCloseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CloseEvent_IsBase(true);
        vqcolumnview->closeEvent(event);
    } else {
        ((VirtualQColumnView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CloseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_TabletEvent(QColumnView* self, QTabletEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->tabletEvent(event);
    } else {
        ((VirtualQColumnView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseTabletEvent(QColumnView* self, QTabletEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_TabletEvent_IsBase(true);
        vqcolumnview->tabletEvent(event);
    } else {
        ((VirtualQColumnView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTabletEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_TabletEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ActionEvent(QColumnView* self, QActionEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->actionEvent(event);
    } else {
        ((VirtualQColumnView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseActionEvent(QColumnView* self, QActionEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ActionEvent_IsBase(true);
        vqcolumnview->actionEvent(event);
    } else {
        ((VirtualQColumnView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnActionEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ActionEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ShowEvent(QColumnView* self, QShowEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->showEvent(event);
    } else {
        ((VirtualQColumnView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseShowEvent(QColumnView* self, QShowEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ShowEvent_IsBase(true);
        vqcolumnview->showEvent(event);
    } else {
        ((VirtualQColumnView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnShowEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ShowEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HideEvent(QColumnView* self, QHideEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->hideEvent(event);
    } else {
        ((VirtualQColumnView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseHideEvent(QColumnView* self, QHideEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HideEvent_IsBase(true);
        vqcolumnview->hideEvent(event);
    } else {
        ((VirtualQColumnView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHideEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_HideEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_NativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQColumnView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QColumnView_QBaseNativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_NativeEvent_IsBase(true);
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQColumnView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnNativeEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_NativeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_Metric(const QColumnView* self, int param1) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQColumnView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QColumnView_QBaseMetric(const QColumnView* self, int param1) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Metric_IsBase(true);
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQColumnView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetric(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Metric_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitPainter(const QColumnView* self, QPainter* painter) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->initPainter(painter);
    } else {
        ((VirtualQColumnView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitPainter(const QColumnView* self, QPainter* painter) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitPainter_IsBase(true);
        vqcolumnview->initPainter(painter);
    } else {
        ((VirtualQColumnView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitPainter(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitPainter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QColumnView_Redirected(const QColumnView* self, QPoint* offset) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->redirected(offset);
    } else {
        return ((VirtualQColumnView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QColumnView_QBaseRedirected(const QColumnView* self, QPoint* offset) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Redirected_IsBase(true);
        return vqcolumnview->redirected(offset);
    } else {
        return ((VirtualQColumnView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRedirected(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Redirected_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QColumnView_SharedPainter(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->sharedPainter();
    } else {
        return ((VirtualQColumnView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QColumnView_QBaseSharedPainter(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SharedPainter_IsBase(true);
        return vqcolumnview->sharedPainter();
    } else {
        return ((VirtualQColumnView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSharedPainter(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SharedPainter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ChildEvent(QColumnView* self, QChildEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->childEvent(event);
    } else {
        ((VirtualQColumnView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseChildEvent(QColumnView* self, QChildEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ChildEvent_IsBase(true);
        vqcolumnview->childEvent(event);
    } else {
        ((VirtualQColumnView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChildEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ChildEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CustomEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->customEvent(event);
    } else {
        ((VirtualQColumnView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseCustomEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CustomEvent_IsBase(true);
        vqcolumnview->customEvent(event);
    } else {
        ((VirtualQColumnView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCustomEvent(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_CustomEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ConnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->connectNotify(*signal);
    } else {
        ((VirtualQColumnView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QColumnView_QBaseConnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ConnectNotify_IsBase(true);
        vqcolumnview->connectNotify(*signal);
    } else {
        ((VirtualQColumnView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnConnectNotify(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ConnectNotify_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DisconnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->disconnectNotify(*signal);
    } else {
        ((VirtualQColumnView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QColumnView_QBaseDisconnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DisconnectNotify_IsBase(true);
        vqcolumnview->disconnectNotify(*signal);
    } else {
        ((VirtualQColumnView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDisconnectNotify(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DisconnectNotify_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->initializeColumn(column);
    } else {
        ((VirtualQColumnView*)self)->initializeColumn(column);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitializeColumn_IsBase(true);
        vqcolumnview->initializeColumn(column);
    } else {
        ((VirtualQColumnView*)self)->initializeColumn(column);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitializeColumn(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_InitializeColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitializeColumn_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_State(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return static_cast<int>(vqcolumnview->state());
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->state());
    }
}

// Base class handler implementation
int QColumnView_QBaseState(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_State_IsBase(true);
        return static_cast<int>(vqcolumnview->state());
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnState(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_State_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetState(QColumnView* self, int state) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    } else {
        ((VirtualQColumnView*)self)->setState(static_cast<VirtualQColumnView::State>(state));
    }
}

// Base class handler implementation
void QColumnView_QBaseSetState(QColumnView* self, int state) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetState_IsBase(true);
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    } else {
        ((VirtualQColumnView*)self)->setState(static_cast<VirtualQColumnView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetState(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetState_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScheduleDelayedItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQColumnView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseScheduleDelayedItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScheduleDelayedItemsLayout_IsBase(true);
        vqcolumnview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQColumnView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScheduleDelayedItemsLayout(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ExecuteDelayedItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->executeDelayedItemsLayout();
    } else {
        ((VirtualQColumnView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseExecuteDelayedItemsLayout(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ExecuteDelayedItemsLayout_IsBase(true);
        vqcolumnview->executeDelayedItemsLayout();
    } else {
        ((VirtualQColumnView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnExecuteDelayedItemsLayout(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetDirtyRegion(QColumnView* self, const QRegion* region) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setDirtyRegion(*region);
    } else {
        ((VirtualQColumnView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetDirtyRegion(QColumnView* self, const QRegion* region) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetDirtyRegion_IsBase(true);
        vqcolumnview->setDirtyRegion(*region);
    } else {
        ((VirtualQColumnView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetDirtyRegion(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScrollDirtyRegion(QColumnView* self, int dx, int dy) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQColumnView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QColumnView_QBaseScrollDirtyRegion(QColumnView* self, int dx, int dy) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollDirtyRegion_IsBase(true);
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQColumnView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollDirtyRegion(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QColumnView_DirtyRegionOffset(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QPoint(vqcolumnview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QColumnView_QBaseDirtyRegionOffset(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqcolumnview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDirtyRegionOffset(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StartAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->startAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseStartAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StartAutoScroll_IsBase(true);
        vqcolumnview->startAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStartAutoScroll(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StartAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StopAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->stopAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseStopAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StopAutoScroll_IsBase(true);
        vqcolumnview->stopAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStopAutoScroll(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_StopAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DoAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->doAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseDoAutoScroll(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DoAutoScroll_IsBase(true);
        vqcolumnview->doAutoScroll();
    } else {
        ((VirtualQColumnView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDoAutoScroll(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DoAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_DropIndicatorPosition(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QColumnView_QBaseDropIndicatorPosition(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQColumnView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDropIndicatorPosition(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetViewportMargins(QColumnView* self, int left, int top, int right, int bottom) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQColumnView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QColumnView_QBaseSetViewportMargins(QColumnView* self, int left, int top, int right, int bottom) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetViewportMargins_IsBase(true);
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQColumnView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetViewportMargins(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SetViewportMargins_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QColumnView_ViewportMargins(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return new QMargins(vqcolumnview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QColumnView_QBaseViewportMargins(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportMargins_IsBase(true);
        return new QMargins(vqcolumnview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportMargins(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_ViewportMargins_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DrawFrame(QColumnView* self, QPainter* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->drawFrame(param1);
    } else {
        ((VirtualQColumnView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseDrawFrame(QColumnView* self, QPainter* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DrawFrame_IsBase(true);
        vqcolumnview->drawFrame(param1);
    } else {
        ((VirtualQColumnView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDrawFrame(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_DrawFrame_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateMicroFocus(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->updateMicroFocus();
    } else {
        ((VirtualQColumnView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateMicroFocus(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateMicroFocus_IsBase(true);
        vqcolumnview->updateMicroFocus();
    } else {
        ((VirtualQColumnView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateMicroFocus(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Create(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->create();
    } else {
        ((VirtualQColumnView*)self)->create();
    }
}

// Base class handler implementation
void QColumnView_QBaseCreate(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Create_IsBase(true);
        vqcolumnview->create();
    } else {
        ((VirtualQColumnView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCreate(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Create_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Destroy(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->destroy();
    } else {
        ((VirtualQColumnView*)self)->destroy();
    }
}

// Base class handler implementation
void QColumnView_QBaseDestroy(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Destroy_IsBase(true);
        vqcolumnview->destroy();
    } else {
        ((VirtualQColumnView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDestroy(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Destroy_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusNextChild(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->focusNextChild();
    } else {
        return ((VirtualQColumnView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusNextChild(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusNextChild_IsBase(true);
        return vqcolumnview->focusNextChild();
    } else {
        return ((VirtualQColumnView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusNextChild(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusNextChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusPreviousChild(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->focusPreviousChild();
    } else {
        return ((VirtualQColumnView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusPreviousChild(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusPreviousChild_IsBase(true);
        return vqcolumnview->focusPreviousChild();
    } else {
        return ((VirtualQColumnView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusPreviousChild(QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QColumnView_Sender(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->sender();
    } else {
        return ((VirtualQColumnView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QColumnView_QBaseSender(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Sender_IsBase(true);
        return vqcolumnview->sender();
    } else {
        return ((VirtualQColumnView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSender(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Sender_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SenderSignalIndex(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->senderSignalIndex();
    } else {
        return ((VirtualQColumnView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QColumnView_QBaseSenderSignalIndex(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SenderSignalIndex_IsBase(true);
        return vqcolumnview->senderSignalIndex();
    } else {
        return ((VirtualQColumnView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSenderSignalIndex(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_Receivers(const QColumnView* self, const char* signal) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->receivers(signal);
    } else {
        return ((VirtualQColumnView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QColumnView_QBaseReceivers(const QColumnView* self, const char* signal) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Receivers_IsBase(true);
        return vqcolumnview->receivers(signal);
    } else {
        return ((VirtualQColumnView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnReceivers(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_Receivers_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_IsSignalConnected(const QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->isSignalConnected(*signal);
    } else {
        return ((VirtualQColumnView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QColumnView_QBaseIsSignalConnected(const QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IsSignalConnected_IsBase(true);
        return vqcolumnview->isSignalConnected(*signal);
    } else {
        return ((VirtualQColumnView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIsSignalConnected(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_IsSignalConnected_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QColumnView_GetDecodedMetricF(const QColumnView* self, int metricA, int metricB) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        return vqcolumnview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQColumnView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QColumnView_QBaseGetDecodedMetricF(const QColumnView* self, int metricA, int metricB) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_GetDecodedMetricF_IsBase(true);
        return vqcolumnview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQColumnView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnGetDecodedMetricF(const QColumnView* self, intptr_t slot) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview && vqcolumnview->isVirtualQColumnView) {
        vqcolumnview->setQColumnView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_GetDecodedMetricF_Callback>(slot));
    }
}

void QColumnView_Delete(QColumnView* self) {
    delete self;
}
