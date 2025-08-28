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
#include <QByteArray>
#include <cstring>
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
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTreeView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTreeView_Tr(const char* s) {
    QString _ret = QTreeView::tr(s);
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
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->setModel(model);
    } else {
        ((VirtualQTreeView*)self)->setModel(model);
    }
}

void QTreeView_SetRootIndex(QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->setRootIndex(*index);
    } else {
        ((VirtualQTreeView*)self)->setRootIndex(*index);
    }
}

void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->setSelectionModel(selectionModel);
    } else {
        ((VirtualQTreeView*)self)->setSelectionModel(selectionModel);
    }
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
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->keyboardSearch(search_QString);
    } else {
        ((VirtualQTreeView*)self)->keyboardSearch(search_QString);
    }
}

QRect* QTreeView_VisualRect(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QRect(self->visualRect(*index));
    } else {
        return new QRect(((VirtualQTreeView*)self)->visualRect(*index));
    }
}

void QTreeView_ScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        ((VirtualQTreeView*)self)->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

QModelIndex* QTreeView_IndexAt(const QTreeView* self, const QPoint* p) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QModelIndex(self->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQTreeView*)self)->indexAt(*p));
    }
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, const QModelIndex* index) {
    return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, const QModelIndex* index) {
    return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_DoItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->doItemsLayout();
    } else {
        ((VirtualQTreeView*)self)->doItemsLayout();
    }
}

void QTreeView_Reset(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->reset();
    } else {
        ((VirtualQTreeView*)self)->reset();
    }
}

void QTreeView_DataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQTreeView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QTreeView_SelectAll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        self->selectAll();
    } else {
        ((VirtualQTreeView*)self)->selectAll();
    }
}

void QTreeView_Expanded(QTreeView* self, const QModelIndex* index) {
    self->expanded(*index);
}

void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, QModelIndex*)>(slot);
    QTreeView::connect(self, &QTreeView::expanded, [self, slotFunc](const QModelIndex& index) {
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
    QTreeView::connect(self, &QTreeView::collapsed, [self, slotFunc](const QModelIndex& index) {
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
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

void QTreeView_RowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QTreeView_RowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QModelIndex(vqtreeview->moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

int QTreeView_HorizontalOffset(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->horizontalOffset();
    }
    return {};
}

int QTreeView_VerticalOffset(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->verticalOffset();
    }
    return {};
}

void QTreeView_SetSelection(QTreeView* self, const QRect* rect, int command) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QRegion(vqtreeview->visualRegionForSelection(*selection));
    }
    return {};
}

libqt_list /* of QModelIndex* */ QTreeView_SelectedIndexes(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        QList<QModelIndex> _ret = vqtreeview->selectedIndexes();
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
    return {};
}

void QTreeView_ChangeEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->changeEvent(event);
    }
}

void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->timerEvent(event);
    }
}

void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->paintEvent(event);
    }
}

void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->drawRow(painter, *options, *index);
    }
}

void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->drawBranches(painter, *rect, *index);
    }
}

void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->mousePressEvent(event);
    }
}

void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->mouseReleaseEvent(event);
    }
}

void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->mouseDoubleClickEvent(event);
    }
}

void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->mouseMoveEvent(event);
    }
}

void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->keyPressEvent(event);
    }
}

void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->dragMoveEvent(event);
    }
}

bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->viewportEvent(event);
    }
    return {};
}

void QTreeView_UpdateGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->updateGeometries();
    }
}

QSize* QTreeView_ViewportSizeHint(const QTreeView* self) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QSize(vqtreeview->viewportSizeHint());
    }
    return {};
}

int QTreeView_SizeHintForColumn(const QTreeView* self, int column) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    }
    return {};
}

void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

bool QTreeView_IsIndexHidden(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<const VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->isIndexHidden(*index);
    }
    return {};
}

void QTreeView_SelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->selectionChanged(*selected, *deselected);
    }
}

void QTreeView_CurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->currentChanged(*current, *previous);
    }
}

libqt_string QTreeView_Tr2(const char* s, const char* c) {
    QString _ret = QTreeView::tr(s, c);
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
    QString _ret = QTreeView::tr(s, c, static_cast<int>(n));
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
int QTreeView_QBaseMetacall(QTreeView* self, int param1, int param2, void** param3) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Metacall_IsBase(true);
        return vqtreeview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QTreeView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetacall(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Metacall_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetModel(QTreeView* self, QAbstractItemModel* model) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetModel_IsBase(true);
        vqtreeview->setModel(model);
    } else {
        self->QTreeView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetModel_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetRootIndex(QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetRootIndex_IsBase(true);
        vqtreeview->setRootIndex(*index);
    } else {
        self->QTreeView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetRootIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetRootIndex_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetSelectionModel_IsBase(true);
        vqtreeview->setSelectionModel(selectionModel);
    } else {
        self->QTreeView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelectionModel_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyboardSearch(QTreeView* self, const libqt_string search) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyboardSearch_IsBase(true);
        vqtreeview->keyboardSearch(search_QString);
    } else {
        self->QTreeView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyboardSearch_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyboardSearch_Callback>(slot));
    }
}

// Base class handler implementation
QRect* QTreeView_QBaseVisualRect(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VisualRect_IsBase(true);
        return new QRect(vqtreeview->visualRect(*index));
    } else {
        return new QRect(((VirtualQTreeView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRect(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VisualRect_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRect_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollTo(QTreeView* self, const QModelIndex* index, int hint) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollTo_IsBase(true);
        vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QTreeView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollTo_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollTo_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseIndexAt(const QTreeView* self, const QPoint* p) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IndexAt_IsBase(true);
        return new QModelIndex(vqtreeview->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQTreeView*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexAt(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IndexAt_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexAt_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseDoItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DoItemsLayout_IsBase(true);
        vqtreeview->doItemsLayout();
    } else {
        self->QTreeView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DoItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DoItemsLayout_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseReset(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Reset_IsBase(true);
        vqtreeview->reset();
    } else {
        self->QTreeView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReset(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Reset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reset_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseDataChanged(QTreeView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DataChanged_IsBase(true);
        vqtreeview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        self->QTreeView::dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DataChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DataChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSelectAll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectAll_IsBase(true);
        vqtreeview->selectAll();
    } else {
        self->QTreeView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectAll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectAll_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalScrollbarValueChanged_IsBase(true);
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollContentsBy_IsBase(true);
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollContentsBy_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsInserted(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsInserted_IsBase(true);
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsInserted_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsInserted_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsAboutToBeRemoved_IsBase(true);
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MoveCursor_IsBase(true);
        return new QModelIndex(vqtreeview->moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MoveCursor_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
int QTreeView_QBaseHorizontalOffset(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalOffset_IsBase(true);
        return vqtreeview->horizontalOffset();
    } else {
        return ((VirtualQTreeView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalOffset(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalOffset_Callback>(slot));
    }
}

// Base class handler implementation
int QTreeView_QBaseVerticalOffset(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalOffset_IsBase(true);
        return vqtreeview->verticalOffset();
    } else {
        return ((VirtualQTreeView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalOffset(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalOffset_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetSelection(QTreeView* self, const QRect* rect, int command) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetSelection_IsBase(true);
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQTreeView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelection_Callback>(slot));
    }
}

// Base class handler implementation
QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, const QItemSelection* selection) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtreeview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRegionForSelection(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRegionForSelection_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTreeView_QBaseSelectedIndexes(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqtreeview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQTreeView*)self)->selectedIndexes();
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
void QTreeView_OnSelectedIndexes(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectedIndexes_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectedIndexes_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ChangeEvent_IsBase(true);
        vqtreeview->changeEvent(event);
    } else {
        ((VirtualQTreeView*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ChangeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ChangeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_TimerEvent_IsBase(true);
        vqtreeview->timerEvent(event);
    } else {
        ((VirtualQTreeView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_TimerEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_TimerEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_PaintEvent_IsBase(true);
        vqtreeview->paintEvent(event);
    } else {
        ((VirtualQTreeView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_PaintEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_PaintEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawRow_IsBase(true);
        vqtreeview->drawRow(painter, *options, *index);
    } else {
        ((VirtualQTreeView*)self)->drawRow(painter, *options, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawRow(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawRow_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawRow_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawBranches_IsBase(true);
        vqtreeview->drawBranches(painter, *rect, *index);
    } else {
        ((VirtualQTreeView*)self)->drawBranches(painter, *rect, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawBranches(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawBranches_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawBranches_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MousePressEvent_IsBase(true);
        vqtreeview->mousePressEvent(event);
    } else {
        ((VirtualQTreeView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MousePressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseReleaseEvent_IsBase(true);
        vqtreeview->mouseReleaseEvent(event);
    } else {
        ((VirtualQTreeView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseDoubleClickEvent_IsBase(true);
        vqtreeview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTreeView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseMoveEvent_IsBase(true);
        vqtreeview->mouseMoveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyPressEvent_IsBase(true);
        vqtreeview->keyPressEvent(event);
    } else {
        ((VirtualQTreeView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyPressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragMoveEvent_IsBase(true);
        vqtreeview->dragMoveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportEvent_IsBase(true);
        return vqtreeview->viewportEvent(event);
    } else {
        return ((VirtualQTreeView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateGeometries_IsBase(true);
        vqtreeview->updateGeometries();
    } else {
        ((VirtualQTreeView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateGeometries_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateGeometries_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportSizeHint_IsBase(true);
        return new QSize(vqtreeview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportSizeHint(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHintForColumn_IsBase(true);
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return ((VirtualQTreeView*)self)->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForColumn(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForColumn_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalScrollbarAction_IsBase(true);
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Base class handler implementation
bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IsIndexHidden_IsBase(true);
        return vqtreeview->isIndexHidden(*index);
    } else {
        return ((VirtualQTreeView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsIndexHidden(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IsIndexHidden_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IsIndexHidden_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseSelectionChanged(QTreeView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectionChanged_IsBase(true);
        vqtreeview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQTreeView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectionChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectionChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QTreeView_QBaseCurrentChanged(QTreeView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CurrentChanged_IsBase(true);
        vqtreeview->currentChanged(*current, *previous);
    } else {
        ((VirtualQTreeView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CurrentChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SizeHintForRow(const QTreeView* self, int row) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QTreeView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTreeView_QBaseSizeHintForRow(const QTreeView* self, int row) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHintForRow_IsBase(true);
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QTreeView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForRow(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHintForRow_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeView_ItemDelegateForIndex(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->itemDelegateForIndex(*index);
    } else {
        return self->QTreeView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTreeView_QBaseItemDelegateForIndex(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ItemDelegateForIndex_IsBase(true);
        return vqtreeview->itemDelegateForIndex(*index);
    } else {
        return self->QTreeView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnItemDelegateForIndex(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeView_InputMethodQuery(const QTreeView* self, int query) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QVariant(vqtreeview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQTreeView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTreeView_QBaseInputMethodQuery(const QTreeView* self, int query) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InputMethodQuery_IsBase(true);
        return new QVariant(vqtreeview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQTreeView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodQuery(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InputMethodQuery_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateEditorData(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->updateEditorData();
    } else {
        ((VirtualQTreeView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateEditorData(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateEditorData_IsBase(true);
        vqtreeview->updateEditorData();
    } else {
        ((VirtualQTreeView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorData(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateEditorData_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateEditorGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->updateEditorGeometries();
    } else {
        ((VirtualQTreeView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateEditorGeometries(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateEditorGeometries_IsBase(true);
        vqtreeview->updateEditorGeometries();
    } else {
        ((VirtualQTreeView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorGeometries(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_VerticalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeView_QBaseVerticalScrollbarAction(QTreeView* self, int action) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalScrollbarAction_IsBase(true);
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarAction(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_HorizontalScrollbarValueChanged(QTreeView* self, int value) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeView_QBaseHorizontalScrollbarValueChanged(QTreeView* self, int value) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalScrollbarValueChanged_IsBase(true);
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CloseEditor(QTreeView* self, QWidget* editor, int hint) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQTreeView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTreeView_QBaseCloseEditor(QTreeView* self, QWidget* editor, int hint) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CloseEditor_IsBase(true);
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQTreeView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEditor(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CloseEditor_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CommitData(QTreeView* self, QWidget* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->commitData(editor);
    } else {
        ((VirtualQTreeView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QTreeView_QBaseCommitData(QTreeView* self, QWidget* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CommitData_IsBase(true);
        vqtreeview->commitData(editor);
    } else {
        ((VirtualQTreeView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCommitData(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CommitData_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_EditorDestroyed(QTreeView* self, QObject* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->editorDestroyed(editor);
    } else {
        ((VirtualQTreeView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTreeView_QBaseEditorDestroyed(QTreeView* self, QObject* editor) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EditorDestroyed_IsBase(true);
        vqtreeview->editorDestroyed(editor);
    } else {
        ((VirtualQTreeView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEditorDestroyed(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EditorDestroyed_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_Edit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQTreeView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEdit2(QTreeView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Edit2_IsBase(true);
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQTreeView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEdit2(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Edit2_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTreeView_QBaseSelectionCommand(const QTreeView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionCommand(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SelectionCommand_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StartDrag(QTreeView* self, int supportedActions) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQTreeView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTreeView_QBaseStartDrag(QTreeView* self, int supportedActions) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StartDrag_IsBase(true);
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQTreeView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStartDrag(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StartDrag_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->initViewItemOption(option);
    } else {
        ((VirtualQTreeView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitViewItemOption_IsBase(true);
        vqtreeview->initViewItemOption(option);
    } else {
        ((VirtualQTreeView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitViewItemOption(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitViewItemOption_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusNextPrevChild(QTreeView* self, bool next) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->focusNextPrevChild(next);
    } else {
        return ((VirtualQTreeView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusNextPrevChild(QTreeView* self, bool next) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusNextPrevChild_IsBase(true);
        return vqtreeview->focusNextPrevChild(next);
    } else {
        return ((VirtualQTreeView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusNextPrevChild(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_Event(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->event(event);
    } else {
        return ((VirtualQTreeView*)self)->event(event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Event_IsBase(true);
        return vqtreeview->event(event);
    } else {
        return ((VirtualQTreeView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Event_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->dragEnterEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragEnterEvent_IsBase(true);
        vqtreeview->dragEnterEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragEnterEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragEnterEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->dragLeaveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragLeaveEvent_IsBase(true);
        vqtreeview->dragLeaveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragLeaveEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DropEvent(QTreeView* self, QDropEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->dropEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDropEvent(QTreeView* self, QDropEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DropEvent_IsBase(true);
        vqtreeview->dropEvent(event);
    } else {
        ((VirtualQTreeView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDropEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DropEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_FocusInEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->focusInEvent(event);
    } else {
        ((VirtualQTreeView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseFocusInEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusInEvent_IsBase(true);
        vqtreeview->focusInEvent(event);
    } else {
        ((VirtualQTreeView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusInEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusInEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_FocusOutEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->focusOutEvent(event);
    } else {
        ((VirtualQTreeView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseFocusOutEvent(QTreeView* self, QFocusEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusOutEvent_IsBase(true);
        vqtreeview->focusOutEvent(event);
    } else {
        ((VirtualQTreeView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusOutEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusOutEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ResizeEvent(QTreeView* self, QResizeEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->resizeEvent(event);
    } else {
        ((VirtualQTreeView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseResizeEvent(QTreeView* self, QResizeEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ResizeEvent_IsBase(true);
        vqtreeview->resizeEvent(event);
    } else {
        ((VirtualQTreeView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnResizeEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ResizeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->inputMethodEvent(event);
    } else {
        ((VirtualQTreeView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseInputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InputMethodEvent_IsBase(true);
        vqtreeview->inputMethodEvent(event);
    } else {
        ((VirtualQTreeView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InputMethodEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_EventFilter(QTreeView* self, QObject* object, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->eventFilter(object, event);
    } else {
        return ((VirtualQTreeView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEventFilter(QTreeView* self, QObject* object, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EventFilter_IsBase(true);
        return vqtreeview->eventFilter(object, event);
    } else {
        return ((VirtualQTreeView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEventFilter(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EventFilter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeView_MinimumSizeHint(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QSize(vqtreeview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTreeView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTreeView_QBaseMinimumSizeHint(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MinimumSizeHint_IsBase(true);
        return new QSize(vqtreeview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTreeView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMinimumSizeHint(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeView_SizeHint(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QSize(vqtreeview->sizeHint());
    } else {
        return new QSize(((VirtualQTreeView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTreeView_QBaseSizeHint(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHint_IsBase(true);
        return new QSize(vqtreeview->sizeHint());
    } else {
        return new QSize(((VirtualQTreeView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHint(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetupViewport(QTreeView* self, QWidget* viewport) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setupViewport(viewport);
    } else {
        self->QTreeView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetupViewport(QTreeView* self, QWidget* viewport) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetupViewport_IsBase(true);
        vqtreeview->setupViewport(viewport);
    } else {
        self->QTreeView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetupViewport(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetupViewport_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_WheelEvent(QTreeView* self, QWheelEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->wheelEvent(param1);
    } else {
        ((VirtualQTreeView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseWheelEvent(QTreeView* self, QWheelEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_WheelEvent_IsBase(true);
        vqtreeview->wheelEvent(param1);
    } else {
        ((VirtualQTreeView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnWheelEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_WheelEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->contextMenuEvent(param1);
    } else {
        ((VirtualQTreeView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ContextMenuEvent_IsBase(true);
        vqtreeview->contextMenuEvent(param1);
    } else {
        ((VirtualQTreeView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnContextMenuEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->initStyleOption(option);
    } else {
        ((VirtualQTreeView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitStyleOption_IsBase(true);
        vqtreeview->initStyleOption(option);
    } else {
        ((VirtualQTreeView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitStyleOption(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitStyleOption_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_DevType(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->devType();
    } else {
        return self->QTreeView::devType();
    }
}

// Base class handler implementation
int QTreeView_QBaseDevType(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DevType_IsBase(true);
        return vqtreeview->devType();
    } else {
        return self->QTreeView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDevType(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DevType_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetVisible(QTreeView* self, bool visible) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setVisible(visible);
    } else {
        self->QTreeView::setVisible(visible);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetVisible(QTreeView* self, bool visible) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetVisible_IsBase(true);
        vqtreeview->setVisible(visible);
    } else {
        self->QTreeView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetVisible(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetVisible_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_HeightForWidth(const QTreeView* self, int param1) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTreeView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTreeView_QBaseHeightForWidth(const QTreeView* self, int param1) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HeightForWidth_IsBase(true);
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTreeView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHeightForWidth(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HeightForWidth_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_HasHeightForWidth(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->hasHeightForWidth();
    } else {
        return self->QTreeView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTreeView_QBaseHasHeightForWidth(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HasHeightForWidth_IsBase(true);
        return vqtreeview->hasHeightForWidth();
    } else {
        return self->QTreeView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHasHeightForWidth(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTreeView_PaintEngine(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->paintEngine();
    } else {
        return self->QTreeView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTreeView_QBasePaintEngine(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_PaintEngine_IsBase(true);
        return vqtreeview->paintEngine();
    } else {
        return self->QTreeView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEngine(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_PaintEngine_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_KeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->keyReleaseEvent(event);
    } else {
        ((VirtualQTreeView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyReleaseEvent_IsBase(true);
        vqtreeview->keyReleaseEvent(event);
    } else {
        ((VirtualQTreeView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyReleaseEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_EnterEvent(QTreeView* self, QEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->enterEvent(event);
    } else {
        ((VirtualQTreeView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseEnterEvent(QTreeView* self, QEnterEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EnterEvent_IsBase(true);
        vqtreeview->enterEvent(event);
    } else {
        ((VirtualQTreeView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEnterEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_EnterEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_LeaveEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->leaveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseLeaveEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_LeaveEvent_IsBase(true);
        vqtreeview->leaveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnLeaveEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_LeaveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MoveEvent(QTreeView* self, QMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->moveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMoveEvent(QTreeView* self, QMoveEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MoveEvent_IsBase(true);
        vqtreeview->moveEvent(event);
    } else {
        ((VirtualQTreeView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_MoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CloseEvent(QTreeView* self, QCloseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->closeEvent(event);
    } else {
        ((VirtualQTreeView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseCloseEvent(QTreeView* self, QCloseEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CloseEvent_IsBase(true);
        vqtreeview->closeEvent(event);
    } else {
        ((VirtualQTreeView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CloseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_TabletEvent(QTreeView* self, QTabletEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->tabletEvent(event);
    } else {
        ((VirtualQTreeView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseTabletEvent(QTreeView* self, QTabletEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_TabletEvent_IsBase(true);
        vqtreeview->tabletEvent(event);
    } else {
        ((VirtualQTreeView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTabletEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_TabletEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ActionEvent(QTreeView* self, QActionEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->actionEvent(event);
    } else {
        ((VirtualQTreeView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseActionEvent(QTreeView* self, QActionEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ActionEvent_IsBase(true);
        vqtreeview->actionEvent(event);
    } else {
        ((VirtualQTreeView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnActionEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ActionEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ShowEvent(QTreeView* self, QShowEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->showEvent(event);
    } else {
        ((VirtualQTreeView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseShowEvent(QTreeView* self, QShowEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ShowEvent_IsBase(true);
        vqtreeview->showEvent(event);
    } else {
        ((VirtualQTreeView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnShowEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ShowEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_HideEvent(QTreeView* self, QHideEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->hideEvent(event);
    } else {
        ((VirtualQTreeView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseHideEvent(QTreeView* self, QHideEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HideEvent_IsBase(true);
        vqtreeview->hideEvent(event);
    } else {
        ((VirtualQTreeView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHideEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_HideEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_NativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTreeView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTreeView_QBaseNativeEvent(QTreeView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_NativeEvent_IsBase(true);
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTreeView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnNativeEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_NativeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_Metric(const QTreeView* self, int param1) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTreeView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTreeView_QBaseMetric(const QTreeView* self, int param1) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Metric_IsBase(true);
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTreeView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetric(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Metric_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitPainter(const QTreeView* self, QPainter* painter) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->initPainter(painter);
    } else {
        ((VirtualQTreeView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitPainter(const QTreeView* self, QPainter* painter) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitPainter_IsBase(true);
        vqtreeview->initPainter(painter);
    } else {
        ((VirtualQTreeView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitPainter(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_InitPainter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTreeView_Redirected(const QTreeView* self, QPoint* offset) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->redirected(offset);
    } else {
        return ((VirtualQTreeView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTreeView_QBaseRedirected(const QTreeView* self, QPoint* offset) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Redirected_IsBase(true);
        return vqtreeview->redirected(offset);
    } else {
        return ((VirtualQTreeView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRedirected(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Redirected_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTreeView_SharedPainter(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->sharedPainter();
    } else {
        return ((VirtualQTreeView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTreeView_QBaseSharedPainter(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SharedPainter_IsBase(true);
        return vqtreeview->sharedPainter();
    } else {
        return ((VirtualQTreeView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSharedPainter(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SharedPainter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ChildEvent(QTreeView* self, QChildEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->childEvent(event);
    } else {
        ((VirtualQTreeView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseChildEvent(QTreeView* self, QChildEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ChildEvent_IsBase(true);
        vqtreeview->childEvent(event);
    } else {
        ((VirtualQTreeView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChildEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ChildEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CustomEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->customEvent(event);
    } else {
        ((VirtualQTreeView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseCustomEvent(QTreeView* self, QEvent* event) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CustomEvent_IsBase(true);
        vqtreeview->customEvent(event);
    } else {
        ((VirtualQTreeView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCustomEvent(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_CustomEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ConnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->connectNotify(*signal);
    } else {
        ((VirtualQTreeView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeView_QBaseConnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ConnectNotify_IsBase(true);
        vqtreeview->connectNotify(*signal);
    } else {
        ((VirtualQTreeView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnConnectNotify(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ConnectNotify_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DisconnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->disconnectNotify(*signal);
    } else {
        ((VirtualQTreeView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeView_QBaseDisconnectNotify(QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DisconnectNotify_IsBase(true);
        vqtreeview->disconnectNotify(*signal);
    } else {
        ((VirtualQTreeView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDisconnectNotify(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DisconnectNotify_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        ((VirtualQTreeView*)self)->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnResized_IsBase(true);
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        ((VirtualQTreeView*)self)->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnResized(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnResized_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        ((VirtualQTreeView*)self)->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnCountChanged_IsBase(true);
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        ((VirtualQTreeView*)self)->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnCountChanged(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnMoved(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->columnMoved();
    } else {
        ((VirtualQTreeView*)self)->columnMoved();
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnMoved(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnMoved_IsBase(true);
        vqtreeview->columnMoved();
    } else {
        ((VirtualQTreeView*)self)->columnMoved();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnMoved(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ColumnMoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Reexpand(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->reexpand();
    } else {
        ((VirtualQTreeView*)self)->reexpand();
    }
}

// Base class handler implementation
void QTreeView_QBaseReexpand(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Reexpand_IsBase(true);
        vqtreeview->reexpand();
    } else {
        ((VirtualQTreeView*)self)->reexpand();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReexpand(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Reexpand_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reexpand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_RowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTreeView*)self)->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsRemoved(QTreeView* self, const QModelIndex* parent, int first, int last) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsRemoved_IsBase(true);
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTreeView*)self)->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsRemoved(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowsRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, const QRegion* region) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->drawTree(painter, *region);
    } else {
        ((VirtualQTreeView*)self)->drawTree(painter, *region);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, const QRegion* region) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawTree_IsBase(true);
        vqtreeview->drawTree(painter, *region);
    } else {
        ((VirtualQTreeView*)self)->drawTree(painter, *region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawTree(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawTree_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawTree_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_IndexRowSizeHint(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->indexRowSizeHint(*index);
    } else {
        return ((VirtualQTreeView*)self)->indexRowSizeHint(*index);
    }
}

// Base class handler implementation
int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IndexRowSizeHint_IsBase(true);
        return vqtreeview->indexRowSizeHint(*index);
    } else {
        return ((VirtualQTreeView*)self)->indexRowSizeHint(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexRowSizeHint(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IndexRowSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexRowSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_RowHeight(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->rowHeight(*index);
    } else {
        return ((VirtualQTreeView*)self)->rowHeight(*index);
    }
}

// Base class handler implementation
int QTreeView_QBaseRowHeight(const QTreeView* self, const QModelIndex* index) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowHeight_IsBase(true);
        return vqtreeview->rowHeight(*index);
    } else {
        return ((VirtualQTreeView*)self)->rowHeight(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowHeight(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_RowHeight_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowHeight_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_State(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return static_cast<int>(vqtreeview->state());
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->state());
    }
}

// Base class handler implementation
int QTreeView_QBaseState(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_State_IsBase(true);
        return static_cast<int>(vqtreeview->state());
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnState(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_State_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetState(QTreeView* self, int state) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    } else {
        ((VirtualQTreeView*)self)->setState(static_cast<VirtualQTreeView::State>(state));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetState(QTreeView* self, int state) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetState_IsBase(true);
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    } else {
        ((VirtualQTreeView*)self)->setState(static_cast<VirtualQTreeView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetState(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetState_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScheduleDelayedItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQTreeView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeView_QBaseScheduleDelayedItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScheduleDelayedItemsLayout_IsBase(true);
        vqtreeview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQTreeView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScheduleDelayedItemsLayout(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ExecuteDelayedItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->executeDelayedItemsLayout();
    } else {
        ((VirtualQTreeView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeView_QBaseExecuteDelayedItemsLayout(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ExecuteDelayedItemsLayout_IsBase(true);
        vqtreeview->executeDelayedItemsLayout();
    } else {
        ((VirtualQTreeView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnExecuteDelayedItemsLayout(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetDirtyRegion(QTreeView* self, const QRegion* region) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setDirtyRegion(*region);
    } else {
        ((VirtualQTreeView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetDirtyRegion(QTreeView* self, const QRegion* region) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetDirtyRegion_IsBase(true);
        vqtreeview->setDirtyRegion(*region);
    } else {
        ((VirtualQTreeView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetDirtyRegion(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScrollDirtyRegion(QTreeView* self, int dx, int dy) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollDirtyRegion(QTreeView* self, int dx, int dy) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollDirtyRegion_IsBase(true);
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollDirtyRegion(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTreeView_DirtyRegionOffset(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QPoint(vqtreeview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTreeView_QBaseDirtyRegionOffset(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtreeview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDirtyRegionOffset(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StartAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->startAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseStartAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StartAutoScroll_IsBase(true);
        vqtreeview->startAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStartAutoScroll(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StartAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StopAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->stopAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseStopAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StopAutoScroll_IsBase(true);
        vqtreeview->stopAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStopAutoScroll(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_StopAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DoAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->doAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseDoAutoScroll(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DoAutoScroll_IsBase(true);
        vqtreeview->doAutoScroll();
    } else {
        ((VirtualQTreeView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoAutoScroll(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DoAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_DropIndicatorPosition(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTreeView_QBaseDropIndicatorPosition(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQTreeView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDropIndicatorPosition(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetViewportMargins(QTreeView* self, int left, int top, int right, int bottom) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTreeView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetViewportMargins(QTreeView* self, int left, int top, int right, int bottom) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetViewportMargins_IsBase(true);
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTreeView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetViewportMargins(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SetViewportMargins_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTreeView_ViewportMargins(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return new QMargins(vqtreeview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTreeView_QBaseViewportMargins(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportMargins_IsBase(true);
        return new QMargins(vqtreeview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportMargins(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_ViewportMargins_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawFrame(QTreeView* self, QPainter* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->drawFrame(param1);
    } else {
        ((VirtualQTreeView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawFrame(QTreeView* self, QPainter* param1) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawFrame_IsBase(true);
        vqtreeview->drawFrame(param1);
    } else {
        ((VirtualQTreeView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawFrame(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_DrawFrame_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateMicroFocus(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->updateMicroFocus();
    } else {
        ((VirtualQTreeView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateMicroFocus(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateMicroFocus_IsBase(true);
        vqtreeview->updateMicroFocus();
    } else {
        ((VirtualQTreeView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateMicroFocus(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Create(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->create();
    } else {
        ((VirtualQTreeView*)self)->create();
    }
}

// Base class handler implementation
void QTreeView_QBaseCreate(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Create_IsBase(true);
        vqtreeview->create();
    } else {
        ((VirtualQTreeView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCreate(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Create_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Destroy(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->destroy();
    } else {
        ((VirtualQTreeView*)self)->destroy();
    }
}

// Base class handler implementation
void QTreeView_QBaseDestroy(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Destroy_IsBase(true);
        vqtreeview->destroy();
    } else {
        ((VirtualQTreeView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDestroy(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Destroy_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusNextChild(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->focusNextChild();
    } else {
        return ((VirtualQTreeView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusNextChild(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusNextChild_IsBase(true);
        return vqtreeview->focusNextChild();
    } else {
        return ((VirtualQTreeView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusNextChild(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusNextChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusPreviousChild(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->focusPreviousChild();
    } else {
        return ((VirtualQTreeView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusPreviousChild(QTreeView* self) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusPreviousChild_IsBase(true);
        return vqtreeview->focusPreviousChild();
    } else {
        return ((VirtualQTreeView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusPreviousChild(QTreeView* self, intptr_t slot) {
    auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self);
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTreeView_Sender(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->sender();
    } else {
        return ((VirtualQTreeView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTreeView_QBaseSender(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Sender_IsBase(true);
        return vqtreeview->sender();
    } else {
        return ((VirtualQTreeView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSender(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Sender_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SenderSignalIndex(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->senderSignalIndex();
    } else {
        return ((VirtualQTreeView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTreeView_QBaseSenderSignalIndex(const QTreeView* self) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SenderSignalIndex_IsBase(true);
        return vqtreeview->senderSignalIndex();
    } else {
        return ((VirtualQTreeView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSenderSignalIndex(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_Receivers(const QTreeView* self, const char* signal) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->receivers(signal);
    } else {
        return ((VirtualQTreeView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTreeView_QBaseReceivers(const QTreeView* self, const char* signal) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Receivers_IsBase(true);
        return vqtreeview->receivers(signal);
    } else {
        return ((VirtualQTreeView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReceivers(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_Receivers_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_IsSignalConnected(const QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->isSignalConnected(*signal);
    } else {
        return ((VirtualQTreeView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTreeView_QBaseIsSignalConnected(const QTreeView* self, const QMetaMethod* signal) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IsSignalConnected_IsBase(true);
        return vqtreeview->isSignalConnected(*signal);
    } else {
        return ((VirtualQTreeView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsSignalConnected(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_IsSignalConnected_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTreeView_GetDecodedMetricF(const QTreeView* self, int metricA, int metricB) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        return vqtreeview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTreeView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTreeView_QBaseGetDecodedMetricF(const QTreeView* self, int metricA, int metricB) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_GetDecodedMetricF_IsBase(true);
        return vqtreeview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTreeView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnGetDecodedMetricF(const QTreeView* self, intptr_t slot) {
    auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self));
    if (vqtreeview && vqtreeview->isVirtualQTreeView) {
        vqtreeview->setQTreeView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_GetDecodedMetricF_Callback>(slot));
    }
}

void QTreeView_Delete(QTreeView* self) {
    delete self;
}
