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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QColumnView_Tr(const char* s) {
    auto _ret = QColumnView::tr(s);
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
    QColumnView::connect(self,
                         static_cast<void (QColumnView::*)(const QModelIndex&)>(&QColumnView::updatePreviewWidget),
                         [self, slotFunc](const QModelIndex& index) {
                             const QModelIndex& index_ret = index;
                             // Cast returned reference into pointer
                             QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                             slotFunc(self, sigval1);
                         });
}

QModelIndex* QColumnView_IndexAt(const QColumnView* self, const QPoint* point) {
    return new QModelIndex(self->indexAt(*point));
}

void QColumnView_ScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_SizeHint(const QColumnView* self) {
    return new QSize(self->sizeHint());
}

QRect* QColumnView_VisualRect(const QColumnView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

void QColumnView_SetRootIndex(QColumnView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

void QColumnView_SelectAll(QColumnView* self) {
    self->selectAll();
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
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
    if (vqcolumnview) {
        return vqcolumnview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QColumnView::isIndexHidden called without a directly constructed type");
}

QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return new QModelIndex(vqcolumnview->moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method QColumnView::moveCursor called without a directly constructed type");
}

void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->resizeEvent(event);
    }
}

void QColumnView_SetSelection(QColumnView* self, const QRect* rect, int command) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QColumnView::visualRegionForSelection called without a directly constructed type");
}

int QColumnView_HorizontalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->horizontalOffset();
    }
    qFatal("Error: Protected method QColumnView::horizontalOffset called without a directly constructed type");
}

int QColumnView_VerticalOffset(const QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<const VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->verticalOffset();
    }
    qFatal("Error: Protected method QColumnView::verticalOffset called without a directly constructed type");
}

void QColumnView_RowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QColumnView_CurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->currentChanged(*current, *previous);
    }
}

void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->createColumn(*rootIndex);
    }
    qFatal("Error: Protected method QColumnView::createColumn called without a directly constructed type");
}

libqt_string QColumnView_Tr2(const char* s, const char* c) {
    auto _ret = QColumnView::tr(s, c);
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
    auto _ret = QColumnView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QColumnView_SuperMetaObject(const QColumnView* self) {
    return (QMetaObject*)self->QColumnView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetaObject(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_metaobject_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QColumnView_SuperMetacast(QColumnView* self, const char* param1) {
    return self->QColumnView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetacast(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_metacast_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QColumnView_SuperMetacall(QColumnView* self, int param1, int param2, void** param3) {
    return self->QColumnView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetacall(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_metacall_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Metacall_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QColumnView_SuperIndexAt(const QColumnView* self, const QPoint* point) {
    return new QModelIndex(self->QColumnView::indexAt(*point));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIndexAt(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_indexat_callback = reinterpret_cast<VirtualQColumnView::QColumnView_IndexAt_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperScrollTo(QColumnView* self, const QModelIndex* index, int hint) {
    self->QColumnView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_scrollto_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ScrollTo_Callback>(slot);
}

// Base class handler implementation
QSize* QColumnView_SuperSizeHint(const QColumnView* self) {
    return new QSize(self->QColumnView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHint(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_sizehint_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SizeHint_Callback>(slot);
}

// Base class handler implementation
QRect* QColumnView_SuperVisualRect(const QColumnView* self, const QModelIndex* index) {
    return new QRect(self->QColumnView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRect(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_visualrect_callback = reinterpret_cast<VirtualQColumnView::QColumnView_VisualRect_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperSetModel(QColumnView* self, QAbstractItemModel* model) {
    self->QColumnView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setmodel_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetModel_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    self->QColumnView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setselectionmodel_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperSetRootIndex(QColumnView* self, const QModelIndex* index) {
    self->QColumnView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setrootindex_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetRootIndex_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperSelectAll(QColumnView* self) {
    self->QColumnView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_selectall_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SelectAll_Callback>(slot);
}

// Base class handler implementation
bool QColumnView_SuperIsIndexHidden(const QColumnView* self, const QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QColumnView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIsIndexHidden(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_isindexhidden_callback = reinterpret_cast<VirtualQColumnView::QColumnView_IsIndexHidden_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QColumnView_SuperMoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        return new QModelIndex(vqcolumnview->QColumnView::moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QColumnView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_movecursor_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperResizeEvent(QColumnView* self, QResizeEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_resizeevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperSetSelection(QColumnView* self, const QRect* rect, int command) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QColumnView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setselection_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetSelection_Callback>(slot);
}

// Base class handler implementation
QRegion* QColumnView_SuperVisualRegionForSelection(const QColumnView* self, const QItemSelection* selection) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        return new QRegion(vqcolumnview->QColumnView::visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QColumnView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRegionForSelection(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_visualregionforselection_callback = reinterpret_cast<VirtualQColumnView::QColumnView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
int QColumnView_SuperHorizontalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QColumnView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalOffset(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_horizontaloffset_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalOffset_Callback>(slot);
}

// Base class handler implementation
int QColumnView_SuperVerticalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QColumnView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalOffset(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_verticaloffset_callback = reinterpret_cast<VirtualQColumnView::QColumnView_VerticalOffset_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperRowsInserted(QColumnView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QColumnView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_rowsinserted_callback = reinterpret_cast<VirtualQColumnView::QColumnView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperCurrentChanged(QColumnView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QColumnView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_currentchanged_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CurrentChanged_Callback>(slot);
}

// Base class handler implementation
void QColumnView_SuperScrollContentsBy(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QColumnView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_scrollcontentsby_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
QAbstractItemView* QColumnView_SuperCreateColumn(QColumnView* self, const QModelIndex* rootIndex) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::createColumn(*rootIndex);
    } else
        qFatal("Error: Protected virtual method QColumnView::createColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_createcolumn_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CreateColumn_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_KeyboardSearch(QColumnView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QColumnView_SuperKeyboardSearch(QColumnView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QColumnView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyboardSearch(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_keyboardsearch_callback = reinterpret_cast<VirtualQColumnView::QColumnView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_SizeHintForRow(const QColumnView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QColumnView_SuperSizeHintForRow(const QColumnView* self, int row) {
    return self->QColumnView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForRow(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_sizehintforrow_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_SizeHintForColumn(const QColumnView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int QColumnView_SuperSizeHintForColumn(const QColumnView* self, int column) {
    return self->QColumnView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForColumn(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_sizehintforcolumn_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QColumnView_ItemDelegateForIndex(const QColumnView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QColumnView_SuperItemDelegateForIndex(const QColumnView* self, const QModelIndex* index) {
    return self->QColumnView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnItemDelegateForIndex(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_itemdelegateforindex_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QColumnView_InputMethodQuery(const QColumnView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QColumnView_SuperInputMethodQuery(const QColumnView* self, int query) {
    return new QVariant(self->QColumnView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodQuery(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_inputmethodquery_callback = reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_Reset(QColumnView* self) {
    self->reset();
}

// Base class handler implementation
void QColumnView_SuperReset(QColumnView* self) {
    self->QColumnView::reset();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnReset(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_reset_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Reset_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DoItemsLayout(QColumnView* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void QColumnView_SuperDoItemsLayout(QColumnView* self) {
    self->QColumnView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDoItemsLayout(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_doitemslayout_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method QColumnView::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDataChanged(QColumnView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QColumnView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDataChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_datachanged_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_RowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QColumnView::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperRowsAboutToBeRemoved(QColumnView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QColumnView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsAboutToBeRemoved(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQColumnView::QColumnView_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_SelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QColumnView::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperSelectionChanged(QColumnView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QColumnView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_selectionchanged_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_UpdateEditorData(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QColumnView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperUpdateEditorData(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QColumnView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorData(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_updateeditordata_callback = reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_UpdateEditorGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QColumnView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperUpdateEditorGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QColumnView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorGeometries(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_updateeditorgeometries_callback = reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_UpdateGeometries(QColumnView* self) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method QColumnView::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperUpdateGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QColumnView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateGeometries(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_updategeometries_callback = reinterpret_cast<VirtualQColumnView::QColumnView_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QColumnView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperVerticalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QColumnView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarAction(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarAction(QColumnView* self, int action) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QColumnView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperHorizontalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QColumnView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarAction(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QColumnView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperVerticalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QColumnView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarValueChanged(QColumnView* self, int value) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QColumnView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperHorizontalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QColumnView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_CloseEditor(QColumnView* self, QWidget* editor, int hint) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QColumnView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperCloseEditor(QColumnView* self, QWidget* editor, int hint) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QColumnView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEditor(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_closeeditor_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_CommitData(QColumnView* self, QWidget* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QColumnView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperCommitData(QColumnView* self, QWidget* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QColumnView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCommitData(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_commitdata_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_EditorDestroyed(QColumnView* self, QObject* editor) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QColumnView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperEditorDestroyed(QColumnView* self, QObject* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QColumnView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEditorDestroyed(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_editordestroyed_callback = reinterpret_cast<VirtualQColumnView::QColumnView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QColumnView_SelectedIndexes(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        QList<QModelIndex> _ret = vqcolumnview->selectedIndexes();
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
        qFatal("Error: Protected virtual method QColumnView::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QColumnView_SuperSelectedIndexes(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        QList<QModelIndex> _ret = vqcolumnview->QColumnView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QColumnView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectedIndexes(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_selectedindexes_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_Edit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperEdit2(QColumnView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QColumnView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEdit2(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_edit2_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_SelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QColumnView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QColumnView_SuperSelectionCommand(const QColumnView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->QColumnView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QColumnView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionCommand(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_selectioncommand_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_StartDrag(QColumnView* self, int supportedActions) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QColumnView::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperStartDrag(QColumnView* self, int supportedActions) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QColumnView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStartDrag(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_startdrag_callback = reinterpret_cast<VirtualQColumnView::QColumnView_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_InitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        vqcolumnview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QColumnView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->QColumnView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QColumnView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitViewItemOption(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_initviewitemoption_callback = reinterpret_cast<VirtualQColumnView::QColumnView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_FocusNextPrevChild(QColumnView* self, bool next) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QColumnView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperFocusNextPrevChild(QColumnView* self, bool next) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QColumnView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusNextPrevChild(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_focusnextprevchild_callback = reinterpret_cast<VirtualQColumnView::QColumnView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_Event(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->event(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::event(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_event_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Event_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_ViewportEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperViewportEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_viewportevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_MousePressEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperMousePressEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMousePressEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_mousepressevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_MouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperMouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_mousemoveevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_MouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperMouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseReleaseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_mousereleaseevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_MouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseDoubleClickEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragEnterEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_dragenterevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_dragmoveevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragLeaveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_dragleaveevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DropEvent(QColumnView* self, QDropEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDropEvent(QColumnView* self, QDropEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDropEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_dropevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_FocusInEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperFocusInEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusInEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_focusinevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_FocusOutEvent(QColumnView* self, QFocusEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperFocusOutEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusOutEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_focusoutevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_KeyPressEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperKeyPressEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyPressEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_keypressevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_TimerEvent(QColumnView* self, QTimerEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperTimerEvent(QColumnView* self, QTimerEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTimerEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_timerevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_InputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperInputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_inputmethodevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_EventFilter(QColumnView* self, QObject* object, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperEventFilter(QColumnView* self, QObject* object, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QColumnView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEventFilter(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_eventfilter_callback = reinterpret_cast<VirtualQColumnView::QColumnView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QColumnView_ViewportSizeHint(const QColumnView* self) {
    return new QSize((self->*&VirtualQColumnView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QColumnView_SuperViewportSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        return new QSize(vqcolumnview->viewportSizeHint());
    qFatal("Error: Protected virtual method QColumnView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportSizeHint(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_viewportsizehint_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QColumnView_MinimumSizeHint(const QColumnView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QColumnView_SuperMinimumSizeHint(const QColumnView* self) {
    return new QSize(self->QColumnView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMinimumSizeHint(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_minimumsizehint_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_SetupViewport(QColumnView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QColumnView_SuperSetupViewport(QColumnView* self, QWidget* viewport) {
    self->QColumnView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetupViewport(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setupviewport_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_PaintEvent(QColumnView* self, QPaintEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColumnView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperPaintEvent(QColumnView* self, QPaintEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColumnView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_paintevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_WheelEvent(QColumnView* self, QWheelEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColumnView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperWheelEvent(QColumnView* self, QWheelEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColumnView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnWheelEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_wheelevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColumnView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColumnView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnContextMenuEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_contextmenuevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ChangeEvent(QColumnView* self, QEvent* param1) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QColumnView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperChangeEvent(QColumnView* self, QEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QColumnView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChangeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_changeevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_InitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        vqcolumnview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QColumnView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperInitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->QColumnView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QColumnView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitStyleOption(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_initstyleoption_callback = reinterpret_cast<VirtualQColumnView::QColumnView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_DevType(const QColumnView* self) {
    return self->devType();
}

// Base class handler implementation
int QColumnView_SuperDevType(const QColumnView* self) {
    return self->QColumnView::devType();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDevType(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_devtype_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_SetVisible(QColumnView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QColumnView_SuperSetVisible(QColumnView* self, bool visible) {
    self->QColumnView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetVisible(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_setvisible_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_HeightForWidth(const QColumnView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QColumnView_SuperHeightForWidth(const QColumnView* self, int param1) {
    return self->QColumnView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHeightForWidth(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_heightforwidth_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_HasHeightForWidth(const QColumnView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QColumnView_SuperHasHeightForWidth(const QColumnView* self) {
    return self->QColumnView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHasHeightForWidth(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_hasheightforwidth_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QColumnView_PaintEngine(const QColumnView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QColumnView_SuperPaintEngine(const QColumnView* self) {
    return self->QColumnView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEngine(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_paintengine_callback = reinterpret_cast<VirtualQColumnView::QColumnView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_KeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperKeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyReleaseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_keyreleaseevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_EnterEvent(QColumnView* self, QEnterEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperEnterEvent(QColumnView* self, QEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEnterEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_enterevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_LeaveEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperLeaveEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnLeaveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_leaveevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_MoveEvent(QColumnView* self, QMoveEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperMoveEvent(QColumnView* self, QMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_moveevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_CloseEvent(QColumnView* self, QCloseEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperCloseEvent(QColumnView* self, QCloseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_closeevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_TabletEvent(QColumnView* self, QTabletEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperTabletEvent(QColumnView* self, QTabletEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTabletEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_tabletevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ActionEvent(QColumnView* self, QActionEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperActionEvent(QColumnView* self, QActionEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnActionEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_actionevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ShowEvent(QColumnView* self, QShowEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperShowEvent(QColumnView* self, QShowEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnShowEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_showevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_HideEvent(QColumnView* self, QHideEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperHideEvent(QColumnView* self, QHideEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHideEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_hideevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QColumnView_NativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QColumnView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QColumnView_SuperNativeEvent(QColumnView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->QColumnView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QColumnView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnNativeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_nativeevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QColumnView_Metric(const QColumnView* self, int param1) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QColumnView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QColumnView_SuperMetric(const QColumnView* self, int param1) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QColumnView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetric(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_metric_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_InitPainter(const QColumnView* self, QPainter* painter) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        vqcolumnview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QColumnView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperInitPainter(const QColumnView* self, QPainter* painter) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->QColumnView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QColumnView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitPainter(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_initpainter_callback = reinterpret_cast<VirtualQColumnView::QColumnView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QColumnView_Redirected(const QColumnView* self, QPoint* offset) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        return vqcolumnview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QColumnView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QColumnView_SuperRedirected(const QColumnView* self, QPoint* offset) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QColumnView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRedirected(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_redirected_callback = reinterpret_cast<VirtualQColumnView::QColumnView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QColumnView_SharedPainter(const QColumnView* self) {
    auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self));
    if (vqcolumnview) {
        return vqcolumnview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QColumnView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QColumnView_SuperSharedPainter(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->QColumnView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QColumnView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSharedPainter(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        vqcolumnview->qcolumnview_sharedpainter_callback = reinterpret_cast<VirtualQColumnView::QColumnView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ChildEvent(QColumnView* self, QChildEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperChildEvent(QColumnView* self, QChildEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChildEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_childevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_CustomEvent(QColumnView* self, QEvent* event) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QColumnView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperCustomEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QColumnView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCustomEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_customevent_callback = reinterpret_cast<VirtualQColumnView::QColumnView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_ConnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColumnView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperConnectNotify(QColumnView* self, const QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColumnView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnConnectNotify(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_connectnotify_callback = reinterpret_cast<VirtualQColumnView::QColumnView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QColumnView_DisconnectNotify(QColumnView* self, const QMetaMethod* signal) {
    auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self);
    if (vqcolumnview) {
        vqcolumnview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QColumnView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QColumnView_SuperDisconnectNotify(QColumnView* self, const QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->QColumnView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QColumnView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDisconnectNotify(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self))
        vqcolumnview->qcolumnview_disconnectnotify_callback = reinterpret_cast<VirtualQColumnView::QColumnView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->VirtualQColumnView::initializeColumn(column);
    } else
        qFatal("Error: Protected method QColumnView::initializeColumn called without a directly constructed type");
}

// Derived class protected handler implementation
int QColumnView_State(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->VirtualQColumnView::state());
    } else
        qFatal("Error: Protected method QColumnView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_SetState(QColumnView* self, int state) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::setState(static_cast<VirtualQColumnView::State>(state));
    } else
        qFatal("Error: Protected method QColumnView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_ScheduleDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QColumnView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_ExecuteDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QColumnView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_SetDirtyRegion(QColumnView* self, const QRegion* region) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QColumnView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_ScrollDirtyRegion(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QColumnView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QColumnView_DirtyRegionOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        return new QPoint(vqcolumnview->dirtyRegionOffset());
    qFatal("Error: Protected method QColumnView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_StartAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::startAutoScroll();
    } else
        qFatal("Error: Protected method QColumnView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_StopAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QColumnView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_DoAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::doAutoScroll();
    } else
        qFatal("Error: Protected method QColumnView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QColumnView_DropIndicatorPosition(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->VirtualQColumnView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QColumnView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_SetViewportMargins(QColumnView* self, int left, int top, int right, int bottom) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QColumnView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QColumnView_ViewportMargins(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self)))
        return new QMargins(vqcolumnview->viewportMargins());
    qFatal("Error: Protected method QColumnView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_DrawFrame(QColumnView* self, QPainter* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QColumnView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_UpdateMicroFocus(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QColumnView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_Create(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::create();
    } else
        qFatal("Error: Protected method QColumnView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QColumnView_Destroy(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->VirtualQColumnView::destroy();
    } else
        qFatal("Error: Protected method QColumnView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColumnView_FocusNextChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->VirtualQColumnView::focusNextChild();
    } else
        qFatal("Error: Protected method QColumnView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColumnView_FocusPreviousChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->VirtualQColumnView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QColumnView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QColumnView_Sender(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->VirtualQColumnView::sender();
    } else
        qFatal("Error: Protected method QColumnView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QColumnView_SenderSignalIndex(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->VirtualQColumnView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QColumnView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QColumnView_Receivers(const QColumnView* self, const char* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->VirtualQColumnView::receivers(signal);
    } else
        qFatal("Error: Protected method QColumnView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QColumnView_IsSignalConnected(const QColumnView* self, const QMetaMethod* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->VirtualQColumnView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QColumnView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QColumnView_GetDecodedMetricF(const QColumnView* self, int metricA, int metricB) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->VirtualQColumnView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QColumnView::getDecodedMetricF called without a directly constructed type");
}

void QColumnView_Delete(QColumnView* self) {
    delete self;
}
