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
#include <QHeaderView>
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
#include <QTableView>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtableview.h>
#include "libqtableview.h"
#include "libqtableview.hxx"

QTableView* QTableView_new(QWidget* parent) {
    return new VirtualQTableView(parent);
}

QTableView* QTableView_new2() {
    return new VirtualQTableView();
}

QMetaObject* QTableView_MetaObject(const QTableView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTableView_Metacast(QTableView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTableView_Metacall(QTableView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTableView_Tr(const char* s) {
    auto _ret = QTableView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTableView_SetModel(QTableView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void QTableView_SetRootIndex(QTableView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

void QTableView_DoItemsLayout(QTableView* self) {
    self->doItemsLayout();
}

QHeaderView* QTableView_HorizontalHeader(const QTableView* self) {
    return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(const QTableView* self) {
    return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
    self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
    self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(const QTableView* self, int row) {
    return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_RowAt(const QTableView* self, int y) {
    return self->rowAt(static_cast<int>(y));
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
    self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_RowHeight(const QTableView* self, int row) {
    return self->rowHeight(static_cast<int>(row));
}

int QTableView_ColumnViewportPosition(const QTableView* self, int column) {
    return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_ColumnAt(const QTableView* self, int x) {
    return self->columnAt(static_cast<int>(x));
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
    self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_ColumnWidth(const QTableView* self, int column) {
    return self->columnWidth(static_cast<int>(column));
}

bool QTableView_IsRowHidden(const QTableView* self, int row) {
    return self->isRowHidden(static_cast<int>(row));
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
    self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_IsColumnHidden(const QTableView* self, int column) {
    return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
    self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(const QTableView* self) {
    return self->isSortingEnabled();
}

bool QTableView_ShowGrid(const QTableView* self) {
    return self->showGrid();
}

int QTableView_GridStyle(const QTableView* self) {
    return static_cast<int>(self->gridStyle());
}

void QTableView_SetGridStyle(QTableView* self, int style) {
    self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
    self->setWordWrap(on);
}

bool QTableView_WordWrap(const QTableView* self) {
    return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
    self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(const QTableView* self) {
    return self->isCornerButtonEnabled();
}

QRect* QTableView_VisualRect(const QTableView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void QTableView_ScrollTo(QTableView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTableView_IndexAt(const QTableView* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
    self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_RowSpan(const QTableView* self, int row, int column) {
    return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_ColumnSpan(const QTableView* self, int row, int column) {
    return self->columnSpan(static_cast<int>(row), static_cast<int>(column));
}

void QTableView_ClearSpans(QTableView* self) {
    self->clearSpans();
}

void QTableView_SelectRow(QTableView* self, int row) {
    self->selectRow(static_cast<int>(row));
}

void QTableView_SelectColumn(QTableView* self, int column) {
    self->selectColumn(static_cast<int>(column));
}

void QTableView_HideRow(QTableView* self, int row) {
    self->hideRow(static_cast<int>(row));
}

void QTableView_HideColumn(QTableView* self, int column) {
    self->hideColumn(static_cast<int>(column));
}

void QTableView_ShowRow(QTableView* self, int row) {
    self->showRow(static_cast<int>(row));
}

void QTableView_ShowColumn(QTableView* self, int column) {
    self->showColumn(static_cast<int>(column));
}

void QTableView_ResizeRowToContents(QTableView* self, int row) {
    self->resizeRowToContents(static_cast<int>(row));
}

void QTableView_ResizeRowsToContents(QTableView* self) {
    self->resizeRowsToContents();
}

void QTableView_ResizeColumnToContents(QTableView* self, int column) {
    self->resizeColumnToContents(static_cast<int>(column));
}

void QTableView_ResizeColumnsToContents(QTableView* self) {
    self->resizeColumnsToContents();
}

void QTableView_SortByColumn(QTableView* self, int column, int order) {
    self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
    self->setShowGrid(show);
}

void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->initViewItemOption(option);
    }
}

void QTableView_PaintEvent(QTableView* self, QPaintEvent* e) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->paintEvent(e);
    }
}

void QTableView_TimerEvent(QTableView* self, QTimerEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->timerEvent(event);
    }
}

void QTableView_DropEvent(QTableView* self, QDropEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->dropEvent(event);
    }
}

int QTableView_HorizontalOffset(const QTableView* self) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->horizontalOffset();
    }
    qFatal("Error: Protected method QTableView::horizontalOffset called without a directly constructed type");
}

int QTableView_VerticalOffset(const QTableView* self) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->verticalOffset();
    }
    qFatal("Error: Protected method QTableView::verticalOffset called without a directly constructed type");
}

QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return new QModelIndex(vqtableview->moveCursor(static_cast<VirtualQTableView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method QTableView::moveCursor called without a directly constructed type");
}

void QTableView_SetSelection(QTableView* self, const QRect* rect, int command) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QTableView_VisualRegionForSelection(const QTableView* self, const QItemSelection* selection) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return new QRegion(vqtableview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QTableView::visualRegionForSelection called without a directly constructed type");
}

libqt_list /* of QModelIndex* */ QTableView_SelectedIndexes(const QTableView* self) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        QList<QModelIndex> _ret = vqtableview->selectedIndexes();
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
    qFatal("Error: Protected method QTableView::selectedIndexes called without a directly constructed type");
}

void QTableView_UpdateGeometries(QTableView* self) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->updateGeometries();
    }
}

QSize* QTableView_ViewportSizeHint(const QTableView* self) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return new QSize(vqtableview->viewportSizeHint());
    }
    qFatal("Error: Protected method QTableView::viewportSizeHint called without a directly constructed type");
}

int QTableView_SizeHintForRow(const QTableView* self, int row) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->sizeHintForRow(static_cast<int>(row));
    }
    qFatal("Error: Protected method QTableView::sizeHintForRow called without a directly constructed type");
}

int QTableView_SizeHintForColumn(const QTableView* self, int column) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->sizeHintForColumn(static_cast<int>(column));
    }
    qFatal("Error: Protected method QTableView::sizeHintForColumn called without a directly constructed type");
}

void QTableView_VerticalScrollbarAction(QTableView* self, int action) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->verticalScrollbarAction(static_cast<int>(action));
    }
}

void QTableView_HorizontalScrollbarAction(QTableView* self, int action) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

bool QTableView_IsIndexHidden(const QTableView* self, const QModelIndex* index) {
    auto* vqtableview = dynamic_cast<const VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QTableView::isIndexHidden called without a directly constructed type");
}

void QTableView_SelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->selectionChanged(*selected, *deselected);
    }
}

void QTableView_CurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->currentChanged(*current, *previous);
    }
}

libqt_string QTableView_Tr2(const char* s, const char* c) {
    auto _ret = QTableView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTableView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTableView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTableView_SuperMetaObject(const QTableView* self) {
    return (QMetaObject*)self->QTableView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMetaObject(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_metaobject_callback = reinterpret_cast<VirtualQTableView::QTableView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTableView_SuperMetacast(QTableView* self, const char* param1) {
    return self->QTableView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMetacast(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_metacast_callback = reinterpret_cast<VirtualQTableView::QTableView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTableView_SuperMetacall(QTableView* self, int param1, int param2, void** param3) {
    return self->QTableView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMetacall(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_metacall_callback = reinterpret_cast<VirtualQTableView::QTableView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperSetModel(QTableView* self, QAbstractItemModel* model) {
    self->QTableView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetModel(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setmodel_callback = reinterpret_cast<VirtualQTableView::QTableView_SetModel_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperSetRootIndex(QTableView* self, const QModelIndex* index) {
    self->QTableView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetRootIndex(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setrootindex_callback = reinterpret_cast<VirtualQTableView::QTableView_SetRootIndex_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperSetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
    self->QTableView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelectionModel(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setselectionmodel_callback = reinterpret_cast<VirtualQTableView::QTableView_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperDoItemsLayout(QTableView* self) {
    self->QTableView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDoItemsLayout(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_doitemslayout_callback = reinterpret_cast<VirtualQTableView::QTableView_DoItemsLayout_Callback>(slot);
}

// Base class handler implementation
QRect* QTableView_SuperVisualRect(const QTableView* self, const QModelIndex* index) {
    return new QRect(self->QTableView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRect(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_visualrect_callback = reinterpret_cast<VirtualQTableView::QTableView_VisualRect_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperScrollTo(QTableView* self, const QModelIndex* index, int hint) {
    self->QTableView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollTo(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_scrollto_callback = reinterpret_cast<VirtualQTableView::QTableView_ScrollTo_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTableView_SuperIndexAt(const QTableView* self, const QPoint* p) {
    return new QModelIndex(self->QTableView::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIndexAt(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_indexat_callback = reinterpret_cast<VirtualQTableView::QTableView_IndexAt_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperScrollContentsBy(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTableView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollContentsBy(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_scrollcontentsby_callback = reinterpret_cast<VirtualQTableView::QTableView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->QTableView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QTableView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitViewItemOption(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_initviewitemoption_callback = reinterpret_cast<VirtualQTableView::QTableView_InitViewItemOption_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperPaintEvent(QTableView* self, QPaintEvent* e) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QTableView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnPaintEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_paintevent_callback = reinterpret_cast<VirtualQTableView::QTableView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperTimerEvent(QTableView* self, QTimerEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnTimerEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_timerevent_callback = reinterpret_cast<VirtualQTableView::QTableView_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperDropEvent(QTableView* self, QDropEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDropEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_dropevent_callback = reinterpret_cast<VirtualQTableView::QTableView_DropEvent_Callback>(slot);
}

// Base class handler implementation
int QTableView_SuperHorizontalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QTableView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalOffset(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_horizontaloffset_callback = reinterpret_cast<VirtualQTableView::QTableView_HorizontalOffset_Callback>(slot);
}

// Base class handler implementation
int QTableView_SuperVerticalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QTableView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalOffset(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_verticaloffset_callback = reinterpret_cast<VirtualQTableView::QTableView_VerticalOffset_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTableView_SuperMoveCursor(QTableView* self, int cursorAction, int modifiers) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        return new QModelIndex(vqtableview->QTableView::moveCursor(static_cast<VirtualQTableView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QTableView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMoveCursor(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_movecursor_callback = reinterpret_cast<VirtualQTableView::QTableView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperSetSelection(QTableView* self, const QRect* rect, int command) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QTableView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelection(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setselection_callback = reinterpret_cast<VirtualQTableView::QTableView_SetSelection_Callback>(slot);
}

// Base class handler implementation
QRegion* QTableView_SuperVisualRegionForSelection(const QTableView* self, const QItemSelection* selection) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        return new QRegion(vqtableview->QTableView::visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QTableView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRegionForSelection(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_visualregionforselection_callback = reinterpret_cast<VirtualQTableView::QTableView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTableView_SuperSelectedIndexes(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        QList<QModelIndex> _ret = vqtableview->QTableView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QTableView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectedIndexes(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_selectedindexes_callback = reinterpret_cast<VirtualQTableView::QTableView_SelectedIndexes_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperUpdateGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QTableView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateGeometries(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_updategeometries_callback = reinterpret_cast<VirtualQTableView::QTableView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
QSize* QTableView_SuperViewportSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        return new QSize(vqtableview->QTableView::viewportSizeHint());
    qFatal("Error: Protected virtual method QTableView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportSizeHint(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_viewportsizehint_callback = reinterpret_cast<VirtualQTableView::QTableView_ViewportSizeHint_Callback>(slot);
}

// Base class handler implementation
int QTableView_SuperSizeHintForRow(const QTableView* self, int row) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::sizeHintForRow(static_cast<int>(row));
    } else
        qFatal("Error: Protected virtual method QTableView::sizeHintForRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForRow(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_sizehintforrow_callback = reinterpret_cast<VirtualQTableView::QTableView_SizeHintForRow_Callback>(slot);
}

// Base class handler implementation
int QTableView_SuperSizeHintForColumn(const QTableView* self, int column) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::sizeHintForColumn(static_cast<int>(column));
    } else
        qFatal("Error: Protected virtual method QTableView::sizeHintForColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForColumn(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_sizehintforcolumn_callback = reinterpret_cast<VirtualQTableView::QTableView_SizeHintForColumn_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperVerticalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTableView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalScrollbarAction(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQTableView::QTableView_VerticalScrollbarAction_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperHorizontalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTableView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalScrollbarAction(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQTableView::QTableView_HorizontalScrollbarAction_Callback>(slot);
}

// Base class handler implementation
bool QTableView_SuperIsIndexHidden(const QTableView* self, const QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QTableView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIsIndexHidden(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_isindexhidden_callback = reinterpret_cast<VirtualQTableView::QTableView_IsIndexHidden_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperSelectionChanged(QTableView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QTableView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectionChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_selectionchanged_callback = reinterpret_cast<VirtualQTableView::QTableView_SelectionChanged_Callback>(slot);
}

// Base class handler implementation
void QTableView_SuperCurrentChanged(QTableView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QTableView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCurrentChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_currentchanged_callback = reinterpret_cast<VirtualQTableView::QTableView_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableView_KeyboardSearch(QTableView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QTableView_SuperKeyboardSearch(QTableView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QTableView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyboardSearch(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_keyboardsearch_callback = reinterpret_cast<VirtualQTableView::QTableView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QTableView_ItemDelegateForIndex(const QTableView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QTableView_SuperItemDelegateForIndex(const QTableView* self, const QModelIndex* index) {
    return self->QTableView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnItemDelegateForIndex(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_itemdelegateforindex_callback = reinterpret_cast<VirtualQTableView::QTableView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTableView_InputMethodQuery(const QTableView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QTableView_SuperInputMethodQuery(const QTableView* self, int query) {
    return new QVariant(self->QTableView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInputMethodQuery(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_inputmethodquery_callback = reinterpret_cast<VirtualQTableView::QTableView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTableView_Reset(QTableView* self) {
    self->reset();
}

// Base class handler implementation
void QTableView_SuperReset(QTableView* self) {
    self->QTableView::reset();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnReset(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_reset_callback = reinterpret_cast<VirtualQTableView::QTableView_Reset_Callback>(slot);
}

// Derived class handler implementation
void QTableView_SelectAll(QTableView* self) {
    self->selectAll();
}

// Base class handler implementation
void QTableView_SuperSelectAll(QTableView* self) {
    self->QTableView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectAll(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_selectall_callback = reinterpret_cast<VirtualQTableView::QTableView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QTableView_DataChanged(QTableView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method QTableView::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperDataChanged(QTableView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QTableView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDataChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_datachanged_callback = reinterpret_cast<VirtualQTableView::QTableView_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableView_RowsInserted(QTableView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTableView::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperRowsInserted(QTableView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTableView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowsInserted(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_rowsinserted_callback = reinterpret_cast<VirtualQTableView::QTableView_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void QTableView_RowsAboutToBeRemoved(QTableView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTableView::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperRowsAboutToBeRemoved(QTableView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTableView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowsAboutToBeRemoved(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQTableView::QTableView_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QTableView_UpdateEditorData(QTableView* self) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QTableView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperUpdateEditorData(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QTableView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateEditorData(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_updateeditordata_callback = reinterpret_cast<VirtualQTableView::QTableView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QTableView_UpdateEditorGeometries(QTableView* self) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QTableView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperUpdateEditorGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QTableView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateEditorGeometries(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_updateeditorgeometries_callback = reinterpret_cast<VirtualQTableView::QTableView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QTableView_VerticalScrollbarValueChanged(QTableView* self, int value) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTableView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperVerticalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTableView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalScrollbarValueChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTableView::QTableView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableView_HorizontalScrollbarValueChanged(QTableView* self, int value) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTableView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperHorizontalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTableView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalScrollbarValueChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTableView::QTableView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTableView_CloseEditor(QTableView* self, QWidget* editor, int hint) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QTableView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperCloseEditor(QTableView* self, QWidget* editor, int hint) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QTableView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCloseEditor(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_closeeditor_callback = reinterpret_cast<VirtualQTableView::QTableView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QTableView_CommitData(QTableView* self, QWidget* editor) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QTableView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperCommitData(QTableView* self, QWidget* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QTableView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCommitData(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_commitdata_callback = reinterpret_cast<VirtualQTableView::QTableView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QTableView_EditorDestroyed(QTableView* self, QObject* editor) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QTableView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperEditorDestroyed(QTableView* self, QObject* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QTableView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEditorDestroyed(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_editordestroyed_callback = reinterpret_cast<VirtualQTableView::QTableView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_Edit2(QTableView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QTableView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperEdit2(QTableView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QTableView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEdit2(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_edit2_callback = reinterpret_cast<VirtualQTableView::QTableView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QTableView_SelectionCommand(const QTableView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        return static_cast<int>(vqtableview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QTableView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableView_SuperSelectionCommand(const QTableView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->QTableView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QTableView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectionCommand(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_selectioncommand_callback = reinterpret_cast<VirtualQTableView::QTableView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QTableView_StartDrag(QTableView* self, int supportedActions) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QTableView::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperStartDrag(QTableView* self, int supportedActions) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QTableView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnStartDrag(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_startdrag_callback = reinterpret_cast<VirtualQTableView::QTableView_StartDrag_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_FocusNextPrevChild(QTableView* self, bool next) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTableView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperFocusNextPrevChild(QTableView* self, bool next) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTableView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusNextPrevChild(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_focusnextprevchild_callback = reinterpret_cast<VirtualQTableView::QTableView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_Event(QTableView* self, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->event(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::event(event);
    } else
        qFatal("Error: Protected virtual method QTableView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_event_callback = reinterpret_cast<VirtualQTableView::QTableView_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_ViewportEvent(QTableView* self, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperViewportEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_viewportevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_MousePressEvent(QTableView* self, QMouseEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperMousePressEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMousePressEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_mousepressevent_callback = reinterpret_cast<VirtualQTableView::QTableView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_MouseMoveEvent(QTableView* self, QMouseEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperMouseMoveEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_mousemoveevent_callback = reinterpret_cast<VirtualQTableView::QTableView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_MouseReleaseEvent(QTableView* self, QMouseEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperMouseReleaseEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseReleaseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_mousereleaseevent_callback = reinterpret_cast<VirtualQTableView::QTableView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_MouseDoubleClickEvent(QTableView* self, QMouseEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperMouseDoubleClickEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseDoubleClickEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTableView::QTableView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_DragEnterEvent(QTableView* self, QDragEnterEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperDragEnterEvent(QTableView* self, QDragEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragEnterEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_dragenterevent_callback = reinterpret_cast<VirtualQTableView::QTableView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_DragMoveEvent(QTableView* self, QDragMoveEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperDragMoveEvent(QTableView* self, QDragMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_dragmoveevent_callback = reinterpret_cast<VirtualQTableView::QTableView_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_DragLeaveEvent(QTableView* self, QDragLeaveEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperDragLeaveEvent(QTableView* self, QDragLeaveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragLeaveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_dragleaveevent_callback = reinterpret_cast<VirtualQTableView::QTableView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_FocusInEvent(QTableView* self, QFocusEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperFocusInEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusInEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_focusinevent_callback = reinterpret_cast<VirtualQTableView::QTableView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_FocusOutEvent(QTableView* self, QFocusEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperFocusOutEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusOutEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_focusoutevent_callback = reinterpret_cast<VirtualQTableView::QTableView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_KeyPressEvent(QTableView* self, QKeyEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperKeyPressEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyPressEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_keypressevent_callback = reinterpret_cast<VirtualQTableView::QTableView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ResizeEvent(QTableView* self, QResizeEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperResizeEvent(QTableView* self, QResizeEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnResizeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_resizeevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_InputMethodEvent(QTableView* self, QInputMethodEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperInputMethodEvent(QTableView* self, QInputMethodEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInputMethodEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_inputmethodevent_callback = reinterpret_cast<VirtualQTableView::QTableView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_EventFilter(QTableView* self, QObject* object, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QTableView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperEventFilter(QTableView* self, QObject* object, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QTableView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEventFilter(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_eventfilter_callback = reinterpret_cast<VirtualQTableView::QTableView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QTableView_MinimumSizeHint(const QTableView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTableView_SuperMinimumSizeHint(const QTableView* self) {
    return new QSize(self->QTableView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMinimumSizeHint(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_minimumsizehint_callback = reinterpret_cast<VirtualQTableView::QTableView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTableView_SizeHint(const QTableView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTableView_SuperSizeHint(const QTableView* self) {
    return new QSize(self->QTableView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHint(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_sizehint_callback = reinterpret_cast<VirtualQTableView::QTableView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTableView_SetupViewport(QTableView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTableView_SuperSetupViewport(QTableView* self, QWidget* viewport) {
    self->QTableView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetupViewport(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setupviewport_callback = reinterpret_cast<VirtualQTableView::QTableView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QTableView_WheelEvent(QTableView* self, QWheelEvent* param1) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperWheelEvent(QTableView* self, QWheelEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnWheelEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_wheelevent_callback = reinterpret_cast<VirtualQTableView::QTableView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ContextMenuEvent(QTableView* self, QContextMenuEvent* param1) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperContextMenuEvent(QTableView* self, QContextMenuEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnContextMenuEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_contextmenuevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ChangeEvent(QTableView* self, QEvent* param1) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTableView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperChangeEvent(QTableView* self, QEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTableView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnChangeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_changeevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_InitStyleOption(const QTableView* self, QStyleOptionFrame* option) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        vqtableview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTableView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperInitStyleOption(const QTableView* self, QStyleOptionFrame* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->QTableView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTableView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitStyleOption(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_initstyleoption_callback = reinterpret_cast<VirtualQTableView::QTableView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTableView_DevType(const QTableView* self) {
    return self->devType();
}

// Base class handler implementation
int QTableView_SuperDevType(const QTableView* self) {
    return self->QTableView::devType();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDevType(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_devtype_callback = reinterpret_cast<VirtualQTableView::QTableView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTableView_SetVisible(QTableView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTableView_SuperSetVisible(QTableView* self, bool visible) {
    self->QTableView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetVisible(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_setvisible_callback = reinterpret_cast<VirtualQTableView::QTableView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTableView_HeightForWidth(const QTableView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTableView_SuperHeightForWidth(const QTableView* self, int param1) {
    return self->QTableView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHeightForWidth(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_heightforwidth_callback = reinterpret_cast<VirtualQTableView::QTableView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_HasHeightForWidth(const QTableView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTableView_SuperHasHeightForWidth(const QTableView* self) {
    return self->QTableView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHasHeightForWidth(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_hasheightforwidth_callback = reinterpret_cast<VirtualQTableView::QTableView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTableView_PaintEngine(const QTableView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTableView_SuperPaintEngine(const QTableView* self) {
    return self->QTableView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnPaintEngine(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_paintengine_callback = reinterpret_cast<VirtualQTableView::QTableView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTableView_KeyReleaseEvent(QTableView* self, QKeyEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperKeyReleaseEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyReleaseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_keyreleaseevent_callback = reinterpret_cast<VirtualQTableView::QTableView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_EnterEvent(QTableView* self, QEnterEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperEnterEvent(QTableView* self, QEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEnterEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_enterevent_callback = reinterpret_cast<VirtualQTableView::QTableView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_LeaveEvent(QTableView* self, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperLeaveEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnLeaveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_leaveevent_callback = reinterpret_cast<VirtualQTableView::QTableView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_MoveEvent(QTableView* self, QMoveEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperMoveEvent(QTableView* self, QMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_moveevent_callback = reinterpret_cast<VirtualQTableView::QTableView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_CloseEvent(QTableView* self, QCloseEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperCloseEvent(QTableView* self, QCloseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCloseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_closeevent_callback = reinterpret_cast<VirtualQTableView::QTableView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_TabletEvent(QTableView* self, QTabletEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperTabletEvent(QTableView* self, QTabletEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnTabletEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_tabletevent_callback = reinterpret_cast<VirtualQTableView::QTableView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ActionEvent(QTableView* self, QActionEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperActionEvent(QTableView* self, QActionEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnActionEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_actionevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ShowEvent(QTableView* self, QShowEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperShowEvent(QTableView* self, QShowEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnShowEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_showevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_HideEvent(QTableView* self, QHideEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperHideEvent(QTableView* self, QHideEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHideEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_hideevent_callback = reinterpret_cast<VirtualQTableView::QTableView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTableView_NativeEvent(QTableView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        return vqtableview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTableView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTableView_SuperNativeEvent(QTableView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->QTableView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTableView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnNativeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_nativeevent_callback = reinterpret_cast<VirtualQTableView::QTableView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTableView_Metric(const QTableView* self, int param1) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        return vqtableview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTableView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTableView_SuperMetric(const QTableView* self, int param1) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTableView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMetric(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_metric_callback = reinterpret_cast<VirtualQTableView::QTableView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTableView_InitPainter(const QTableView* self, QPainter* painter) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        vqtableview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTableView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperInitPainter(const QTableView* self, QPainter* painter) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->QTableView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTableView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitPainter(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_initpainter_callback = reinterpret_cast<VirtualQTableView::QTableView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTableView_Redirected(const QTableView* self, QPoint* offset) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        return vqtableview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTableView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTableView_SuperRedirected(const QTableView* self, QPoint* offset) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTableView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRedirected(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_redirected_callback = reinterpret_cast<VirtualQTableView::QTableView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTableView_SharedPainter(const QTableView* self) {
    auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self));
    if (vqtableview) {
        return vqtableview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTableView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTableView_SuperSharedPainter(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->QTableView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTableView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSharedPainter(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        vqtableview->qtableview_sharedpainter_callback = reinterpret_cast<VirtualQTableView::QTableView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ChildEvent(QTableView* self, QChildEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperChildEvent(QTableView* self, QChildEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnChildEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_childevent_callback = reinterpret_cast<VirtualQTableView::QTableView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_CustomEvent(QTableView* self, QEvent* event) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTableView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperCustomEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTableView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCustomEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_customevent_callback = reinterpret_cast<VirtualQTableView::QTableView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTableView_ConnectNotify(QTableView* self, const QMetaMethod* signal) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTableView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperConnectNotify(QTableView* self, const QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTableView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnConnectNotify(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_connectnotify_callback = reinterpret_cast<VirtualQTableView::QTableView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTableView_DisconnectNotify(QTableView* self, const QMetaMethod* signal) {
    auto* vqtableview = dynamic_cast<VirtualQTableView*>(self);
    if (vqtableview) {
        vqtableview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTableView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTableView_SuperDisconnectNotify(QTableView* self, const QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->QTableView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTableView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDisconnectNotify(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self))
        vqtableview->qtableview_disconnectnotify_callback = reinterpret_cast<VirtualQTableView::QTableView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else
        qFatal("Error: Protected method QTableView::rowMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else
        qFatal("Error: Protected method QTableView::columnMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else
        qFatal("Error: Protected method QTableView::rowResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else
        qFatal("Error: Protected method QTableView::columnResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTableView::rowCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTableView::columnCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableView_State(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->VirtualQTableView::state());
    } else
        qFatal("Error: Protected method QTableView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_SetState(QTableView* self, int state) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::setState(static_cast<VirtualQTableView::State>(state));
    } else
        qFatal("Error: Protected method QTableView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ScheduleDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTableView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ExecuteDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTableView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_SetDirtyRegion(QTableView* self, const QRegion* region) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QTableView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_ScrollDirtyRegion(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QTableView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QTableView_DirtyRegionOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        return new QPoint(vqtableview->dirtyRegionOffset());
    qFatal("Error: Protected method QTableView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_StartAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::startAutoScroll();
    } else
        qFatal("Error: Protected method QTableView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_StopAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QTableView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_DoAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::doAutoScroll();
    } else
        qFatal("Error: Protected method QTableView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableView_DropIndicatorPosition(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->VirtualQTableView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QTableView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_SetViewportMargins(QTableView* self, int left, int top, int right, int bottom) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTableView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTableView_ViewportMargins(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self)))
        return new QMargins(vqtableview->viewportMargins());
    qFatal("Error: Protected method QTableView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_DrawFrame(QTableView* self, QPainter* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTableView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_UpdateMicroFocus(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTableView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_Create(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::create();
    } else
        qFatal("Error: Protected method QTableView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTableView_Destroy(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->VirtualQTableView::destroy();
    } else
        qFatal("Error: Protected method QTableView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableView_FocusNextChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->VirtualQTableView::focusNextChild();
    } else
        qFatal("Error: Protected method QTableView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableView_FocusPreviousChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->VirtualQTableView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTableView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTableView_Sender(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->VirtualQTableView::sender();
    } else
        qFatal("Error: Protected method QTableView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableView_SenderSignalIndex(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->VirtualQTableView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTableView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTableView_Receivers(const QTableView* self, const char* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->VirtualQTableView::receivers(signal);
    } else
        qFatal("Error: Protected method QTableView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTableView_IsSignalConnected(const QTableView* self, const QMetaMethod* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->VirtualQTableView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTableView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTableView_GetDecodedMetricF(const QTableView* self, int metricA, int metricB) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->VirtualQTableView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTableView::getDecodedMetricF called without a directly constructed type");
}

void QTableView_Delete(QTableView* self) {
    delete self;
}
