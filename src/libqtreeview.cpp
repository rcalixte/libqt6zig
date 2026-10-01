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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTreeView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtreeview.h>
#include "libqtreeview.h"
#include "libqtreeview.hxx"

QTreeView* QTreeView_new(QWidget* parent) {
    return new VirtualQTreeView(parent);
}

QTreeView* QTreeView_new2() {
    return new VirtualQTreeView();
}

QMetaObject* QTreeView_MetaObject(const QTreeView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTreeView_Metacast(QTreeView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTreeView_Metacall(QTreeView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTreeView_Tr(const char* s) {
    auto _ret = QTreeView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void QTreeView_SetRootIndex(QTreeView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

QHeaderView* QTreeView_Header(const QTreeView* self) {
    return self->header();
}

void QTreeView_SetHeader(QTreeView* self, QHeaderView* header) {
    self->setHeader(header);
}

int QTreeView_AutoExpandDelay(const QTreeView* self) {
    return self->autoExpandDelay();
}

void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay) {
    self->setAutoExpandDelay(static_cast<int>(delay));
}

int QTreeView_Indentation(const QTreeView* self) {
    return self->indentation();
}

void QTreeView_SetIndentation(QTreeView* self, int i) {
    self->setIndentation(static_cast<int>(i));
}

void QTreeView_ResetIndentation(QTreeView* self) {
    self->resetIndentation();
}

bool QTreeView_RootIsDecorated(const QTreeView* self) {
    return self->rootIsDecorated();
}

void QTreeView_SetRootIsDecorated(QTreeView* self, bool show) {
    self->setRootIsDecorated(show);
}

bool QTreeView_UniformRowHeights(const QTreeView* self) {
    return self->uniformRowHeights();
}

void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform) {
    self->setUniformRowHeights(uniform);
}

bool QTreeView_ItemsExpandable(const QTreeView* self) {
    return self->itemsExpandable();
}

void QTreeView_SetItemsExpandable(QTreeView* self, bool enable) {
    self->setItemsExpandable(enable);
}

bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self) {
    return self->expandsOnDoubleClick();
}

void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable) {
    self->setExpandsOnDoubleClick(enable);
}

int QTreeView_ColumnViewportPosition(const QTreeView* self, int column) {
    return self->columnViewportPosition(static_cast<int>(column));
}

int QTreeView_ColumnWidth(const QTreeView* self, int column) {
    return self->columnWidth(static_cast<int>(column));
}

void QTreeView_SetColumnWidth(QTreeView* self, int column, int width) {
    self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTreeView_ColumnAt(const QTreeView* self, int x) {
    return self->columnAt(static_cast<int>(x));
}

bool QTreeView_IsColumnHidden(const QTreeView* self, int column) {
    return self->isColumnHidden(static_cast<int>(column));
}

void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide) {
    self->setColumnHidden(static_cast<int>(column), hide);
}

bool QTreeView_IsHeaderHidden(const QTreeView* self) {
    return self->isHeaderHidden();
}

void QTreeView_SetHeaderHidden(QTreeView* self, bool hide) {
    self->setHeaderHidden(hide);
}

bool QTreeView_IsRowHidden(const QTreeView* self, int row, const QModelIndex* parent) {
    return self->isRowHidden(static_cast<int>(row), *parent);
}

void QTreeView_SetRowHidden(QTreeView* self, int row, const QModelIndex* parent, bool hide) {
    self->setRowHidden(static_cast<int>(row), *parent, hide);
}

bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, const QModelIndex* parent) {
    return self->isFirstColumnSpanned(static_cast<int>(row), *parent);
}

void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, const QModelIndex* parent, bool span) {
    self->setFirstColumnSpanned(static_cast<int>(row), *parent, span);
}

bool QTreeView_IsExpanded(const QTreeView* self, const QModelIndex* index) {
    return self->isExpanded(*index);
}

void QTreeView_SetExpanded(QTreeView* self, const QModelIndex* index, bool expand) {
    self->setExpanded(*index, expand);
}

void QTreeView_SetSortingEnabled(QTreeView* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTreeView_IsSortingEnabled(const QTreeView* self) {
    return self->isSortingEnabled();
}

void QTreeView_SetAnimated(QTreeView* self, bool enable) {
    self->setAnimated(enable);
}

bool QTreeView_IsAnimated(const QTreeView* self) {
    return self->isAnimated();
}

void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable) {
    self->setAllColumnsShowFocus(enable);
}

bool QTreeView_AllColumnsShowFocus(const QTreeView* self) {
    return self->allColumnsShowFocus();
}

void QTreeView_SetWordWrap(QTreeView* self, bool on) {
    self->setWordWrap(on);
}

bool QTreeView_WordWrap(const QTreeView* self) {
    return self->wordWrap();
}

void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex) {
    self->setTreePosition(static_cast<int>(logicalIndex));
}

int QTreeView_TreePosition(const QTreeView* self) {
    return self->treePosition();
}

void QTreeView_KeyboardSearch(QTreeView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

QRect* QTreeView_VisualRect(const QTreeView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void QTreeView_ScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QTreeView_IndexAt(const QTreeView* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, const QModelIndex* index) {
    return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, const QModelIndex* index) {
    return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_DoItemsLayout(QTreeView* self) {
    self->doItemsLayout();
}

void QTreeView_Reset(QTreeView* self) {
    self->reset();
}

void QTreeView_DataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QTreeView_SelectAll(QTreeView* self) {
    self->selectAll();
}

void QTreeView_Expanded(QTreeView* self, const QModelIndex* index) {
    self->expanded(*index);
}

void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, QModelIndex*)>(slot);
    QTreeView::connect(self,
                       static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::expanded),
                       [self, slotFunc](const QModelIndex& index) {
                           const QModelIndex& index_ret = index;
                           // Cast returned reference into pointer
                           QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                           slotFunc(self, sigval1);
                       });
}

void QTreeView_Collapsed(QTreeView* self, const QModelIndex* index) {
    self->collapsed(*index);
}

void QTreeView_Connect_Collapsed(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, QModelIndex*)>(slot);
    QTreeView::connect(self,
                       static_cast<void (QTreeView::*)(const QModelIndex&)>(&QTreeView::collapsed),
                       [self, slotFunc](const QModelIndex& index) {
                           const QModelIndex& index_ret = index;
                           // Cast returned reference into pointer
                           QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                           slotFunc(self, sigval1);
                       });
}

void QTreeView_HideColumn(QTreeView* self, int column) {
    self->hideColumn(static_cast<int>(column));
}

void QTreeView_ShowColumn(QTreeView* self, int column) {
    self->showColumn(static_cast<int>(column));
}

void QTreeView_Expand(QTreeView* self, const QModelIndex* index) {
    self->expand(*index);
}

void QTreeView_Collapse(QTreeView* self, const QModelIndex* index) {
    self->collapse(*index);
}

void QTreeView_ResizeColumnToContents(QTreeView* self, int column) {
    self->resizeColumnToContents(static_cast<int>(column));
}

void QTreeView_SortByColumn(QTreeView* self, int column, int order) {
    self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeView_ExpandAll(QTreeView* self) {
    self->expandAll();
}

void QTreeView_ExpandRecursively(QTreeView* self, const QModelIndex* index) {
    self->expandRecursively(*index);
}

void QTreeView_CollapseAll(QTreeView* self) {
    self->collapseAll();
}

void QTreeView_ExpandToDepth(QTreeView* self, int depth) {
    self->expandToDepth(static_cast<int>(depth));
}

void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return new QModelIndex(vqtreeview->moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method QTreeView::moveCursor called without a directly constructed type");
}

int QTreeView_HorizontalOffset(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->horizontalOffset();
    }
    qFatal("Error: Protected method QTreeView::horizontalOffset called without a directly constructed type");
}

int QTreeView_VerticalOffset(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->verticalOffset();
    }
    qFatal("Error: Protected method QTreeView::verticalOffset called without a directly constructed type");
}

void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return new QRegion(vqtreeview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QTreeView::visualRegionForSelection called without a directly constructed type");
}

libqt_list /* of QModelIndex* */ QTreeView_SelectedIndexes(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        QList<QModelIndex> _ret = vqtreeview->selectedIndexes();
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
    qFatal("Error: Protected method QTreeView::selectedIndexes called without a directly constructed type");
}

void QTreeView_ChangeEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->changeEvent(event);
    }
}

void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->timerEvent(event);
    }
}

void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->paintEvent(event);
    }
}

void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->drawRow(painter, *options, *index);
    }
}

void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->drawBranches(painter, *rect, *index);
    }
}

void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->mousePressEvent(event);
    }
}

void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->mouseReleaseEvent(event);
    }
}

void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->mouseDoubleClickEvent(event);
    }
}

void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->mouseMoveEvent(event);
    }
}

void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->keyPressEvent(event);
    }
}

void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->dragMoveEvent(event);
    }
}

bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->viewportEvent(event);
    }
    qFatal("Error: Protected method QTreeView::viewportEvent called without a directly constructed type");
}

void QTreeView_UpdateGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->updateGeometries();
    }
}

QSize* QTreeView_ViewportSizeHint(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return new QSize(vqtreeview->viewportSizeHint());
    }
    qFatal("Error: Protected method QTreeView::viewportSizeHint called without a directly constructed type");
}

int QTreeView_SizeHintForColumn(const QTreeView* self, int column) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    }
    qFatal("Error: Protected method QTreeView::sizeHintForColumn called without a directly constructed type");
}

void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QTreeView::isIndexHidden called without a directly constructed type");
}

void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->selectionChanged(*selected, *deselected);
    }
}

void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->currentChanged(*current, *previous);
    }
}

libqt_string QTreeView_Tr2(const char* s, const char* c) {
    auto _ret = QTreeView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTreeView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTreeView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeView_ExpandRecursively2(QTreeView* self, const QModelIndex* index, int depth) {
    self->expandRecursively(*index, static_cast<int>(depth));
}

// Base class handler implementation
QMetaObject* QTreeView_SuperMetaObject(const QTreeView* self) {
    return (QMetaObject*)self->QTreeView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetaObject(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_metaobject_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTreeView_SuperMetacast(QTreeView* self, const char* param1) {
    return self->QTreeView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetacast(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_metacast_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTreeView_SuperMetacall(QTreeView* self, int param1, int param2, void** param3) {
    return self->QTreeView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetacall(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_metacall_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSetModel(QTreeView* self, QAbstractItemModel* model) {
    self->QTreeView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setmodel_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetModel_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSetRootIndex(QTreeView* self, const QModelIndex* index) {
    self->QTreeView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setrootindex_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetRootIndex_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    self->QTreeView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setselectionmodel_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperKeyboardSearch(QTreeView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QTreeView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_keyboardsearch_callback = reinterpret_cast<VirtualQTreeView::QTreeView_KeyboardSearch_Callback>(slot);
}

// Base class handler implementation
QRect* QTreeView_SuperVisualRect(const QTreeView* self, const QModelIndex* index) {
    return new QRect(self->QTreeView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRect(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_visualrect_callback = reinterpret_cast<VirtualQTreeView::QTreeView_VisualRect_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
    self->QTreeView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_scrollto_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ScrollTo_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTreeView_SuperIndexAt(const QTreeView* self, const QPoint* p) {
    return new QModelIndex(self->QTreeView::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexAt(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_indexat_callback = reinterpret_cast<VirtualQTreeView::QTreeView_IndexAt_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperDoItemsLayout(QTreeView* self) {
    self->QTreeView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_doitemslayout_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DoItemsLayout_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperReset(QTreeView* self) {
    self->QTreeView::reset();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReset(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_reset_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Reset_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperDataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->QTreeView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_datachanged_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DataChanged_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSelectAll(QTreeView* self) {
    self->QTreeView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_selectall_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SelectAll_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperVerticalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTreeView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperScrollContentsBy(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTreeView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_scrollcontentsby_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ScrollContentsBy_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTreeView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_rowsinserted_callback = reinterpret_cast<VirtualQTreeView::QTreeView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTreeView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQTreeView::QTreeView_RowsAboutToBeRemoved_Callback>(slot);
}

// Base class handler implementation
QModelIndex* QTreeView_SuperMoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        return new QModelIndex(vqtreeview->QTreeView::moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QTreeView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_movecursor_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
int QTreeView_SuperHorizontalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QTreeView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalOffset(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_horizontaloffset_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalOffset_Callback>(slot);
}

// Base class handler implementation
int QTreeView_SuperVerticalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QTreeView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalOffset(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_verticaloffset_callback = reinterpret_cast<VirtualQTreeView::QTreeView_VerticalOffset_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSetSelection(QTreeView* self, const QRect* rect, int command) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QTreeView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setselection_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetSelection_Callback>(slot);
}

// Base class handler implementation
QRegion* QTreeView_SuperVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        return new QRegion(vqtreeview->QTreeView::visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QTreeView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRegionForSelection(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_visualregionforselection_callback = reinterpret_cast<VirtualQTreeView::QTreeView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTreeView_SuperSelectedIndexes(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        QList<QModelIndex> _ret = vqtreeview->QTreeView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QTreeView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectedIndexes(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_selectedindexes_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SelectedIndexes_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperChangeEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_changeevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperTimerEvent(QTreeView* self, QTimerEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_timerevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperPaintEvent(QTreeView* self, QPaintEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_paintevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->QTreeView::drawRow(painter, *options, *index);
    } else
        qFatal("Error: Protected virtual method QTreeView::drawRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawRow(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_drawrow_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DrawRow_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->QTreeView::drawBranches(painter, *rect, *index);
    } else
        qFatal("Error: Protected virtual method QTreeView::drawBranches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawBranches(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_drawbranches_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DrawBranches_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperMousePressEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_mousepressevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperMouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_mousereleaseevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperMouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_mousemoveevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperKeyPressEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_keypressevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperDragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_dragmoveevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
bool QTreeView_SuperViewportEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_viewportevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperUpdateGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QTreeView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_updategeometries_callback = reinterpret_cast<VirtualQTreeView::QTreeView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
QSize* QTreeView_SuperViewportSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        return new QSize(vqtreeview->QTreeView::viewportSizeHint());
    qFatal("Error: Protected virtual method QTreeView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportSizeHint(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_viewportsizehint_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ViewportSizeHint_Callback>(slot);
}

// Base class handler implementation
int QTreeView_SuperSizeHintForColumn(const QTreeView* self, int column) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::sizeHintForColumn(static_cast<int>(column));
    } else
        qFatal("Error: Protected virtual method QTreeView::sizeHintForColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForColumn(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_sizehintforcolumn_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForColumn_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperHorizontalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTreeView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarAction_Callback>(slot);
}

// Base class handler implementation
bool QTreeView_SuperIsIndexHidden(const QTreeView* self, const QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QTreeView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsIndexHidden(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_isindexhidden_callback = reinterpret_cast<VirtualQTreeView::QTreeView_IsIndexHidden_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QTreeView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_selectionchanged_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SelectionChanged_Callback>(slot);
}

// Base class handler implementation
void QTreeView_SuperCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QTreeView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_currentchanged_callback = reinterpret_cast<VirtualQTreeView::QTreeView_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
int QTreeView_SizeHintForRow(const QTreeView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QTreeView_SuperSizeHintForRow(const QTreeView* self, int row) {
    return self->QTreeView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForRow(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_sizehintforrow_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeView_ItemDelegateForIndex(const QTreeView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QTreeView_SuperItemDelegateForIndex(const QTreeView* self, const QModelIndex* index) {
    return self->QTreeView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnItemDelegateForIndex(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_itemdelegateforindex_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTreeView_InputMethodQuery(const QTreeView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QTreeView_SuperInputMethodQuery(const QTreeView* self, int query) {
    return new QVariant(self->QTreeView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodQuery(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_inputmethodquery_callback = reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_UpdateEditorData(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QTreeView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperUpdateEditorData(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QTreeView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorData(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_updateeditordata_callback = reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_UpdateEditorGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QTreeView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperUpdateEditorGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QTreeView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorGeometries(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_updateeditorgeometries_callback = reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_VerticalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QTreeView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperVerticalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTreeView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarAction(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_HorizontalScrollbarValueChanged(QTreeView* self, int value) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTreeView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperHorizontalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTreeView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_CloseEditor(QTreeView* self, QWidget* editor, int hint) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QTreeView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperCloseEditor(QTreeView* self, QWidget* editor, int hint) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QTreeView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEditor(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_closeeditor_callback = reinterpret_cast<VirtualQTreeView::QTreeView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_CommitData(QTreeView* self, QWidget* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QTreeView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperCommitData(QTreeView* self, QWidget* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QTreeView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCommitData(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_commitdata_callback = reinterpret_cast<VirtualQTreeView::QTreeView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_EditorDestroyed(QTreeView* self, QObject* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QTreeView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperEditorDestroyed(QTreeView* self, QObject* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QTreeView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEditorDestroyed(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_editordestroyed_callback = reinterpret_cast<VirtualQTreeView::QTreeView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_Edit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeView_SuperEdit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QTreeView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEdit2(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_edit2_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QTreeView_SelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QTreeView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeView_SuperSelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->QTreeView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QTreeView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionCommand(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_selectioncommand_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_StartDrag(QTreeView* self, int supportedActions) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QTreeView::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperStartDrag(QTreeView* self, int supportedActions) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QTreeView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStartDrag(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_startdrag_callback = reinterpret_cast<VirtualQTreeView::QTreeView_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_InitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        vqtreeview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QTreeView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->QTreeView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QTreeView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitViewItemOption(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_initviewitemoption_callback = reinterpret_cast<VirtualQTreeView::QTreeView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_FocusNextPrevChild(QTreeView* self, bool next) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTreeView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeView_SuperFocusNextPrevChild(QTreeView* self, bool next) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTreeView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusNextPrevChild(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_focusnextprevchild_callback = reinterpret_cast<VirtualQTreeView::QTreeView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_Event(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->event(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeView_SuperEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::event(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_event_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Event_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_DragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperDragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragEnterEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_dragenterevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_DragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragLeaveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_dragleaveevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_DropEvent(QTreeView* self, QDropEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperDropEvent(QTreeView* self, QDropEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDropEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_dropevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_FocusInEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperFocusInEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusInEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_focusinevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_FocusOutEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperFocusOutEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusOutEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_focusoutevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ResizeEvent(QTreeView* self, QResizeEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperResizeEvent(QTreeView* self, QResizeEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnResizeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_resizeevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_InputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperInputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_inputmethodevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_EventFilter(QTreeView* self, QObject* object, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeView_SuperEventFilter(QTreeView* self, QObject* object, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QTreeView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEventFilter(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_eventfilter_callback = reinterpret_cast<VirtualQTreeView::QTreeView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QTreeView_MinimumSizeHint(const QTreeView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTreeView_SuperMinimumSizeHint(const QTreeView* self) {
    return new QSize(self->QTreeView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMinimumSizeHint(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_minimumsizehint_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTreeView_SizeHint(const QTreeView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTreeView_SuperSizeHint(const QTreeView* self) {
    return new QSize(self->QTreeView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHint(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_sizehint_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_SetupViewport(QTreeView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTreeView_SuperSetupViewport(QTreeView* self, QWidget* viewport) {
    self->QTreeView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetupViewport(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setupviewport_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_WheelEvent(QTreeView* self, QWheelEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTreeView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperWheelEvent(QTreeView* self, QWheelEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTreeView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnWheelEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_wheelevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTreeView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTreeView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnContextMenuEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_contextmenuevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_InitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        vqtreeview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTreeView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperInitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->QTreeView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTreeView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitStyleOption(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_initstyleoption_callback = reinterpret_cast<VirtualQTreeView::QTreeView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTreeView_DevType(const QTreeView* self) {
    return self->devType();
}

// Base class handler implementation
int QTreeView_SuperDevType(const QTreeView* self) {
    return self->QTreeView::devType();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDevType(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_devtype_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_SetVisible(QTreeView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTreeView_SuperSetVisible(QTreeView* self, bool visible) {
    self->QTreeView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetVisible(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_setvisible_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTreeView_HeightForWidth(const QTreeView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTreeView_SuperHeightForWidth(const QTreeView* self, int param1) {
    return self->QTreeView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHeightForWidth(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_heightforwidth_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_HasHeightForWidth(const QTreeView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTreeView_SuperHasHeightForWidth(const QTreeView* self) {
    return self->QTreeView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHasHeightForWidth(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_hasheightforwidth_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTreeView_PaintEngine(const QTreeView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTreeView_SuperPaintEngine(const QTreeView* self) {
    return self->QTreeView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEngine(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_paintengine_callback = reinterpret_cast<VirtualQTreeView::QTreeView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_KeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperKeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyReleaseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_keyreleaseevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_EnterEvent(QTreeView* self, QEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperEnterEvent(QTreeView* self, QEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEnterEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_enterevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_LeaveEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperLeaveEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnLeaveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_leaveevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_MoveEvent(QTreeView* self, QMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperMoveEvent(QTreeView* self, QMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_moveevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_CloseEvent(QTreeView* self, QCloseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperCloseEvent(QTreeView* self, QCloseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_closeevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_TabletEvent(QTreeView* self, QTabletEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperTabletEvent(QTreeView* self, QTabletEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTabletEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_tabletevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ActionEvent(QTreeView* self, QActionEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperActionEvent(QTreeView* self, QActionEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnActionEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_actionevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ShowEvent(QTreeView* self, QShowEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperShowEvent(QTreeView* self, QShowEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnShowEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_showevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_HideEvent(QTreeView* self, QHideEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperHideEvent(QTreeView* self, QHideEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHideEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_hideevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTreeView_NativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTreeView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeView_SuperNativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->QTreeView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTreeView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnNativeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_nativeevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTreeView_Metric(const QTreeView* self, int param1) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTreeView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeView_SuperMetric(const QTreeView* self, int param1) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTreeView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetric(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_metric_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_InitPainter(const QTreeView* self, QPainter* painter) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        vqtreeview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTreeView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperInitPainter(const QTreeView* self, QPainter* painter) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->QTreeView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTreeView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitPainter(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_initpainter_callback = reinterpret_cast<VirtualQTreeView::QTreeView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTreeView_Redirected(const QTreeView* self, QPoint* offset) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        return vqtreeview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTreeView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTreeView_SuperRedirected(const QTreeView* self, QPoint* offset) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTreeView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRedirected(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_redirected_callback = reinterpret_cast<VirtualQTreeView::QTreeView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTreeView_SharedPainter(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview) {
        return vqtreeview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTreeView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTreeView_SuperSharedPainter(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->QTreeView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTreeView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSharedPainter(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        vqtreeview->qtreeview_sharedpainter_callback = reinterpret_cast<VirtualQTreeView::QTreeView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ChildEvent(QTreeView* self, QChildEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperChildEvent(QTreeView* self, QChildEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChildEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_childevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_CustomEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperCustomEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCustomEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_customevent_callback = reinterpret_cast<VirtualQTreeView::QTreeView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_ConnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTreeView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperConnectNotify(QTreeView* self, const QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTreeView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnConnectNotify(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_connectnotify_callback = reinterpret_cast<VirtualQTreeView::QTreeView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTreeView_DisconnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview) {
        vqtreeview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTreeView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeView_SuperDisconnectNotify(QTreeView* self, const QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->QTreeView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTreeView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDisconnectNotify(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self))
        vqtreeview->qtreeview_disconnectnotify_callback = reinterpret_cast<VirtualQTreeView::QTreeView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else
        qFatal("Error: Protected method QTreeView::columnResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTreeView::columnCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_ColumnMoved(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::columnMoved();
    } else
        qFatal("Error: Protected method QTreeView::columnMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_Reexpand(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::reexpand();
    } else
        qFatal("Error: Protected method QTreeView::reexpand called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTreeView::rowsRemoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->VirtualQTreeView::drawTree(painter, *region);
    } else
        qFatal("Error: Protected method QTreeView::drawTree called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::indexRowSizeHint(*index);
    } else
        qFatal("Error: Protected method QTreeView::indexRowSizeHint called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::rowHeight(*index);
    } else
        qFatal("Error: Protected method QTreeView::rowHeight called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_State(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->VirtualQTreeView::state());
    } else
        qFatal("Error: Protected method QTreeView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_SetState(QTreeView* self, int state) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::setState(static_cast<VirtualQTreeView::State>(state));
    } else
        qFatal("Error: Protected method QTreeView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_ScheduleDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTreeView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_ExecuteDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTreeView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_SetDirtyRegion(QTreeView* self, const QRegion* region) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QTreeView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_ScrollDirtyRegion(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QTreeView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QTreeView_DirtyRegionOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        return new QPoint(vqtreeview->dirtyRegionOffset());
    qFatal("Error: Protected method QTreeView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_StartAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::startAutoScroll();
    } else
        qFatal("Error: Protected method QTreeView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_StopAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QTreeView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_DoAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::doAutoScroll();
    } else
        qFatal("Error: Protected method QTreeView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_DropIndicatorPosition(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->VirtualQTreeView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QTreeView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_SetViewportMargins(QTreeView* self, int left, int top, int right, int bottom) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTreeView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTreeView_ViewportMargins(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self)))
        return new QMargins(vqtreeview->viewportMargins());
    qFatal("Error: Protected method QTreeView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_DrawFrame(QTreeView* self, QPainter* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTreeView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_UpdateMicroFocus(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTreeView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_Create(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::create();
    } else
        qFatal("Error: Protected method QTreeView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeView_Destroy(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->VirtualQTreeView::destroy();
    } else
        qFatal("Error: Protected method QTreeView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeView_FocusNextChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->VirtualQTreeView::focusNextChild();
    } else
        qFatal("Error: Protected method QTreeView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeView_FocusPreviousChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->VirtualQTreeView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTreeView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTreeView_Sender(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::sender();
    } else
        qFatal("Error: Protected method QTreeView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_SenderSignalIndex(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTreeView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeView_Receivers(const QTreeView* self, const char* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::receivers(signal);
    } else
        qFatal("Error: Protected method QTreeView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeView_IsSignalConnected(const QTreeView* self, const QMetaMethod* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTreeView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTreeView_GetDecodedMetricF(const QTreeView* self, int metricA, int metricB) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->VirtualQTreeView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTreeView::getDecodedMetricF called without a directly constructed type");
}

void QTreeView_Delete(QTreeView* self) {
    delete self;
}
