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
#include <qabstractitemview.h>
#include "libqabstractitemview.h"
#include "libqabstractitemview.hxx"

QAbstractItemView* QAbstractItemView_new(QWidget* parent) {
    return new VirtualQAbstractItemView(parent);
}

QAbstractItemView* QAbstractItemView_new2() {
    return new VirtualQAbstractItemView();
}

QMetaObject* QAbstractItemView_MetaObject(const QAbstractItemView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemView_Metacast(QAbstractItemView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemView_Metacall(QAbstractItemView* self, int param1, int param2, void** param3) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQAbstractItemView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractItemView_Tr(const char* s) {
    QString _ret = QAbstractItemView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->setModel(model);
    } else {
        ((VirtualQAbstractItemView*)self)->setModel(model);
    }
}

QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self) {
    return self->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->setSelectionModel(selectionModel);
    } else {
        ((VirtualQAbstractItemView*)self)->setSelectionModel(selectionModel);
    }
}

QItemSelectionModel* QAbstractItemView_SelectionModel(const QAbstractItemView* self) {
    return self->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(const QAbstractItemView* self) {
    return self->itemDelegate();
}

void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, int mode) {
    self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_SelectionMode(const QAbstractItemView* self) {
    return static_cast<int>(self->selectionMode());
}

void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, int behavior) {
    self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_SelectionBehavior(const QAbstractItemView* self) {
    return static_cast<int>(self->selectionBehavior());
}

QModelIndex* QAbstractItemView_CurrentIndex(const QAbstractItemView* self) {
    return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_RootIndex(const QAbstractItemView* self) {
    return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers) {
    self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_EditTriggers(const QAbstractItemView* self) {
    return static_cast<int>(self->editTriggers());
}

void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, int mode) {
    self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_VerticalScrollMode(const QAbstractItemView* self) {
    return static_cast<int>(self->verticalScrollMode());
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
    self->resetVerticalScrollMode();
}

void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, int mode) {
    self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_HorizontalScrollMode(const QAbstractItemView* self) {
    return static_cast<int>(self->horizontalScrollMode());
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
    self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
    self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(const QAbstractItemView* self) {
    return self->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
    self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_AutoScrollMargin(const QAbstractItemView* self) {
    return self->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
    self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(const QAbstractItemView* self) {
    return self->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
    self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(const QAbstractItemView* self) {
    return self->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
    self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(const QAbstractItemView* self) {
    return self->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
    self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(const QAbstractItemView* self) {
    return self->dragDropOverwriteMode();
}

void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, int behavior) {
    self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_DragDropMode(const QAbstractItemView* self) {
    return static_cast<int>(self->dragDropMode());
}

void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, int dropAction) {
    self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_DefaultDropAction(const QAbstractItemView* self) {
    return static_cast<int>(self->defaultDropAction());
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
    self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(const QAbstractItemView* self) {
    return self->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, const QSize* size) {
    self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(const QAbstractItemView* self) {
    return new QSize(self->iconSize());
}

void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, int mode) {
    self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_TextElideMode(const QAbstractItemView* self) {
    return static_cast<int>(self->textElideMode());
}

void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->keyboardSearch(search_QString);
    } else {
        ((VirtualQAbstractItemView*)self)->keyboardSearch(search_QString);
    }
}

QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QRect(vqabstractitemview->visualRect(*index));
    } else {
        return new QRect(((VirtualQAbstractItemView*)self)->visualRect(*index));
    }
}

void QAbstractItemView_ScrollTo(QAbstractItemView* self, const QModelIndex* index, int hint) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, const QPoint* point) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QModelIndex(vqabstractitemview->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualQAbstractItemView*)self)->indexAt(*point));
    }
}

QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, const QModelIndex* index) {
    return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return self->sizeHintForRow(static_cast<int>(row));
    } else {
        return ((VirtualQAbstractItemView*)self)->sizeHintForRow(static_cast<int>(row));
    }
}

int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return self->sizeHintForColumn(static_cast<int>(column));
    } else {
        return ((VirtualQAbstractItemView*)self)->sizeHintForColumn(static_cast<int>(column));
    }
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, const QModelIndex* index) {
    self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, const QModelIndex* index) {
    self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(const QAbstractItemView* self, const QModelIndex* index) {
    return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, const QModelIndex* index, QWidget* widget) {
    self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(const QAbstractItemView* self, const QModelIndex* index) {
    return self->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
    self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(const QAbstractItemView* self, int row) {
    return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
    self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(const QAbstractItemView* self, int column) {
    return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate2(const QAbstractItemView* self, const QModelIndex* index) {
    return self->itemDelegate(*index);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForIndex(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return self->itemDelegateForIndex(*index);
    } else {
        return ((VirtualQAbstractItemView*)self)->itemDelegateForIndex(*index);
    }
}

QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQAbstractItemView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

void QAbstractItemView_Reset(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->reset();
    } else {
        ((VirtualQAbstractItemView*)self)->reset();
    }
}

void QAbstractItemView_SetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->setRootIndex(*index);
    } else {
        ((VirtualQAbstractItemView*)self)->setRootIndex(*index);
    }
}

void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->doItemsLayout();
    } else {
        ((VirtualQAbstractItemView*)self)->doItemsLayout();
    }
}

void QAbstractItemView_SelectAll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        self->selectAll();
    } else {
        ((VirtualQAbstractItemView*)self)->selectAll();
    }
}

void QAbstractItemView_Edit(QAbstractItemView* self, const QModelIndex* index) {
    self->edit(*index);
}

void QAbstractItemView_ClearSelection(QAbstractItemView* self) {
    self->clearSelection();
}

void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, const QModelIndex* index) {
    self->setCurrentIndex(*index);
}

void QAbstractItemView_ScrollToTop(QAbstractItemView* self) {
    self->scrollToTop();
}

void QAbstractItemView_ScrollToBottom(QAbstractItemView* self) {
    self->scrollToBottom();
}

void QAbstractItemView_Update(QAbstractItemView* self, const QModelIndex* index) {
    self->update(*index);
}

void QAbstractItemView_DataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->selectionChanged(*selected, *deselected);
    }
}

void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->currentChanged(*current, *previous);
    }
}

void QAbstractItemView_UpdateEditorData(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->updateEditorData();
    }
}

void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->updateEditorGeometries();
    }
}

void QAbstractItemView_UpdateGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->updateGeometries();
    }
}

void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    }
}

void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->commitData(editor);
    }
}

void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->editorDestroyed(editor);
    }
}

void QAbstractItemView_Pressed(QAbstractItemView* self, const QModelIndex* index) {
    self->pressed(*index);
}

void QAbstractItemView_Connect_Pressed(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::pressed, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Clicked(QAbstractItemView* self, const QModelIndex* index) {
    self->clicked(*index);
}

void QAbstractItemView_Connect_Clicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::clicked, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_DoubleClicked(QAbstractItemView* self, const QModelIndex* index) {
    self->doubleClicked(*index);
}

void QAbstractItemView_Connect_DoubleClicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::doubleClicked, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Activated(QAbstractItemView* self, const QModelIndex* index) {
    self->activated(*index);
}

void QAbstractItemView_Connect_Activated(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::activated, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Entered(QAbstractItemView* self, const QModelIndex* index) {
    self->entered(*index);
}

void QAbstractItemView_Connect_Entered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::entered, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_ViewportEntered(QAbstractItemView* self) {
    self->viewportEntered();
}

void QAbstractItemView_Connect_ViewportEntered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*) = reinterpret_cast<void (*)(QAbstractItemView*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::viewportEntered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, const QSize* size) {
    self->iconSizeChanged(*size);
}

void QAbstractItemView_Connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QSize*) = reinterpret_cast<void (*)(QAbstractItemView*, QSize*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::iconSizeChanged, [self, slotFunc](const QSize& size) {
        const QSize& size_ret = size;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QModelIndex(vqabstractitemview->moveCursor(static_cast<VirtualQAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->horizontalOffset();
    }
    return {};
}

int QAbstractItemView_VerticalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->verticalOffset();
    }
    return {};
}

bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->isIndexHidden(*index);
    }
    return {};
}

void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
    }
    return {};
}

libqt_list /* of QModelIndex* */ QAbstractItemView_SelectedIndexes(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        QList<QModelIndex> _ret = vqabstractitemview->selectedIndexes();
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

bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
    return {};
}

int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    }
    return {};
}

void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->initViewItemOption(option);
    }
}

bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->focusNextPrevChild(next);
    }
    return {};
}

bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->event(event);
    }
    return {};
}

bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->viewportEvent(event);
    }
    return {};
}

void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->mousePressEvent(event);
    }
}

void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->mouseMoveEvent(event);
    }
}

void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->mouseReleaseEvent(event);
    }
}

void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->mouseDoubleClickEvent(event);
    }
}

void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->dragEnterEvent(event);
    }
}

void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->dragMoveEvent(event);
    }
}

void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->dragLeaveEvent(event);
    }
}

void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->dropEvent(event);
    }
}

void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->focusInEvent(event);
    }
}

void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->focusOutEvent(event);
    }
}

void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->keyPressEvent(event);
    }
}

void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->resizeEvent(event);
    }
}

void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->timerEvent(event);
    }
}

void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->inputMethodEvent(event);
    }
}

bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->eventFilter(object, event);
    }
    return {};
}

QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QSize(vqabstractitemview->viewportSizeHint());
    }
    return {};
}

libqt_string QAbstractItemView_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractItemView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
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
int QAbstractItemView_QBaseMetacall(QAbstractItemView* self, int param1, int param2, void** param3) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Metacall_IsBase(true);
        return vqabstractitemview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QAbstractItemView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetacall(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Metacall_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetModel(QAbstractItemView* self, QAbstractItemModel* model) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetModel_IsBase(true);
        vqabstractitemview->setModel(model);
    } else {
        self->QAbstractItemView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetModel(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetModel_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetSelectionModel_IsBase(true);
        vqabstractitemview->setSelectionModel(selectionModel);
    } else {
        self->QAbstractItemView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelectionModel(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetSelectionModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelectionModel_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyboardSearch(QAbstractItemView* self, const libqt_string search) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyboardSearch_IsBase(true);
        vqabstractitemview->keyboardSearch(search_QString);
    } else {
        self->QAbstractItemView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyboardSearch(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyboardSearch_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyboardSearch_Callback>(slot));
    }
}

// Base class handler implementation
QRect* QAbstractItemView_QBaseVisualRect(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VisualRect_IsBase(true);
        return new QRect(vqabstractitemview->visualRect(*index));
    } else {
        return new QRect(((VirtualQAbstractItemView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRect(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VisualRect_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRect_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollTo(QAbstractItemView* self, const QModelIndex* index, int hint) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollTo_IsBase(true);
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollTo(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollTo_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollTo_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseIndexAt(const QAbstractItemView* self, const QPoint* point) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IndexAt_IsBase(true);
        return new QModelIndex(vqabstractitemview->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualQAbstractItemView*)self)->indexAt(*point));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIndexAt(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IndexAt_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IndexAt_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForRow(const QAbstractItemView* self, int row) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHintForRow_IsBase(true);
        return vqabstractitemview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QAbstractItemView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForRow(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHintForRow_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForRow_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForColumn(const QAbstractItemView* self, int column) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHintForColumn_IsBase(true);
        return vqabstractitemview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QAbstractItemView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForColumn(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForColumn_Callback>(slot));
    }
}

// Base class handler implementation
QAbstractItemDelegate* QAbstractItemView_QBaseItemDelegateForIndex(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_IsBase(true);
        return vqabstractitemview->itemDelegateForIndex(*index);
    } else {
        return self->QAbstractItemView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnItemDelegateForIndex(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Base class handler implementation
QVariant* QAbstractItemView_QBaseInputMethodQuery(const QAbstractItemView* self, int query) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractitemview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQAbstractItemView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodQuery(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodQuery_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseReset(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Reset_IsBase(true);
        vqabstractitemview->reset();
    } else {
        self->QAbstractItemView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReset(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Reset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Reset_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetRootIndex_IsBase(true);
        vqabstractitemview->setRootIndex(*index);
    } else {
        self->QAbstractItemView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetRootIndex(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetRootIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetRootIndex_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDoItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DoItemsLayout_IsBase(true);
        vqabstractitemview->doItemsLayout();
    } else {
        self->QAbstractItemView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoItemsLayout(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DoItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoItemsLayout_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectAll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectAll_IsBase(true);
        vqabstractitemview->selectAll();
    } else {
        self->QAbstractItemView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectAll(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectAll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectAll_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DataChanged_IsBase(true);
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQAbstractItemView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDataChanged(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DataChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DataChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_RowsInserted_IsBase(true);
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQAbstractItemView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsInserted(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_RowsInserted_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsInserted_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_IsBase(true);
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQAbstractItemView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsAboutToBeRemoved(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectionChanged_IsBase(true);
        vqabstractitemview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQAbstractItemView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionChanged(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectionChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CurrentChanged_IsBase(true);
        vqabstractitemview->currentChanged(*current, *previous);
    } else {
        ((VirtualQAbstractItemView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCurrentChanged(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CurrentChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CurrentChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorData(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorData_IsBase(true);
        vqabstractitemview->updateEditorData();
    } else {
        ((VirtualQAbstractItemView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorData(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorData_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_IsBase(true);
        vqabstractitemview->updateEditorGeometries();
    } else {
        ((VirtualQAbstractItemView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorGeometries(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateGeometries_IsBase(true);
        vqabstractitemview->updateGeometries();
    } else {
        ((VirtualQAbstractItemView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateGeometries(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateGeometries_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_IsBase(true);
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQAbstractItemView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_IsBase(true);
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQAbstractItemView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(true);
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQAbstractItemView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(true);
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQAbstractItemView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CloseEditor_IsBase(true);
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQAbstractItemView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEditor(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CloseEditor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEditor_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCommitData(QAbstractItemView* self, QWidget* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CommitData_IsBase(true);
        vqabstractitemview->commitData(editor);
    } else {
        ((VirtualQAbstractItemView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCommitData(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CommitData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CommitData_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseEditorDestroyed(QAbstractItemView* self, QObject* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EditorDestroyed_IsBase(true);
        vqabstractitemview->editorDestroyed(editor);
    } else {
        ((VirtualQAbstractItemView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEditorDestroyed(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EditorDestroyed_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EditorDestroyed_Callback>(slot));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MoveCursor_IsBase(true);
        return new QModelIndex(vqabstractitemview->moveCursor(static_cast<VirtualQAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveCursor(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MoveCursor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveCursor_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseHorizontalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalOffset_IsBase(true);
        return vqabstractitemview->horizontalOffset();
    } else {
        return ((VirtualQAbstractItemView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalOffset(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HorizontalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalOffset_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseVerticalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalOffset_IsBase(true);
        return vqabstractitemview->verticalOffset();
    } else {
        return ((VirtualQAbstractItemView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalOffset(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VerticalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalOffset_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseIsIndexHidden(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IsIndexHidden_IsBase(true);
        return vqabstractitemview->isIndexHidden(*index);
    } else {
        return ((VirtualQAbstractItemView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsIndexHidden(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IsIndexHidden_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsIndexHidden_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelection(QAbstractItemView* self, const QRect* rect, int command) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetSelection_IsBase(true);
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQAbstractItemView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelection(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelection_Callback>(slot));
    }
}

// Base class handler implementation
QRegion* QAbstractItemView_QBaseVisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRegionForSelection(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRegionForSelection_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemView_QBaseSelectedIndexes(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqabstractitemview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualQAbstractItemView*)self)->selectedIndexes();
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
void QAbstractItemView_OnSelectedIndexes(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectedIndexes_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectedIndexes_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Edit2_IsBase(true);
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQAbstractItemView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEdit2(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Edit2_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Edit2_Callback>(slot));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQAbstractItemView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionCommand(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SelectionCommand_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionCommand_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStartDrag(QAbstractItemView* self, int supportedActions) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StartDrag_IsBase(true);
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQAbstractItemView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartDrag(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StartDrag_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartDrag_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitViewItemOption_IsBase(true);
        vqabstractitemview->initViewItemOption(option);
    } else {
        ((VirtualQAbstractItemView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitViewItemOption(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitViewItemOption_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitViewItemOption_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusNextPrevChild(QAbstractItemView* self, bool next) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_IsBase(true);
        return vqabstractitemview->focusNextPrevChild(next);
    } else {
        return ((VirtualQAbstractItemView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextPrevChild(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextPrevChild_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Event_IsBase(true);
        return vqabstractitemview->event(event);
    } else {
        return ((VirtualQAbstractItemView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Event_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Event_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseViewportEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportEvent_IsBase(true);
        return vqabstractitemview->viewportEvent(event);
    } else {
        return ((VirtualQAbstractItemView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MousePressEvent_IsBase(true);
        vqabstractitemview->mousePressEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMousePressEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MousePressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseMoveEvent_IsBase(true);
        vqabstractitemview->mouseMoveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseMoveEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_IsBase(true);
        vqabstractitemview->mouseReleaseEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseReleaseEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_IsBase(true);
        vqabstractitemview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseDoubleClickEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragEnterEvent_IsBase(true);
        vqabstractitemview->dragEnterEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragEnterEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragEnterEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragMoveEvent_IsBase(true);
        vqabstractitemview->dragMoveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragMoveEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragMoveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragLeaveEvent_IsBase(true);
        vqabstractitemview->dragLeaveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragLeaveEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDropEvent(QAbstractItemView* self, QDropEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DropEvent_IsBase(true);
        vqabstractitemview->dropEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DropEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusInEvent_IsBase(true);
        vqabstractitemview->focusInEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusInEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusOutEvent_IsBase(true);
        vqabstractitemview->focusOutEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusOutEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusOutEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyPressEvent_IsBase(true);
        vqabstractitemview->keyPressEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyPressEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ResizeEvent_IsBase(true);
        vqabstractitemview->resizeEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnResizeEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseTimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_TimerEvent_IsBase(true);
        vqabstractitemview->timerEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTimerEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TimerEvent_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InputMethodEvent_IsBase(true);
        vqabstractitemview->inputMethodEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EventFilter_IsBase(true);
        return vqabstractitemview->eventFilter(object, event);
    } else {
        return ((VirtualQAbstractItemView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEventFilter(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EventFilter_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseViewportSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportSizeHint_IsBase(true);
        return new QSize(vqabstractitemview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportSizeHint(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemView_MinimumSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QSize(vqabstractitemview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractItemView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseMinimumSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractitemview->minimumSizeHint());
    } else {
        return new QSize(((VirtualQAbstractItemView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMinimumSizeHint(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemView_SizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QSize(vqabstractitemview->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractItemView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHint_IsBase(true);
        return new QSize(vqabstractitemview->sizeHint());
    } else {
        return new QSize(((VirtualQAbstractItemView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHint(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetupViewport(QAbstractItemView* self, QWidget* viewport) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setupViewport(viewport);
    } else {
        self->QAbstractItemView::setupViewport(viewport);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetupViewport(QAbstractItemView* self, QWidget* viewport) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetupViewport_IsBase(true);
        vqabstractitemview->setupViewport(viewport);
    } else {
        self->QAbstractItemView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetupViewport(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetupViewport_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_PaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->paintEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBasePaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_PaintEvent_IsBase(true);
        vqabstractitemview->paintEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_WheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->wheelEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseWheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_WheelEvent_IsBase(true);
        vqabstractitemview->wheelEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnWheelEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->contextMenuEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ContextMenuEvent_IsBase(true);
        vqabstractitemview->contextMenuEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnContextMenuEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollContentsBy_IsBase(true);
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollContentsBy(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ChangeEvent(QAbstractItemView* self, QEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->changeEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseChangeEvent(QAbstractItemView* self, QEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ChangeEvent_IsBase(true);
        vqabstractitemview->changeEvent(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChangeEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->initStyleOption(option);
    } else {
        ((VirtualQAbstractItemView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitStyleOption_IsBase(true);
        vqabstractitemview->initStyleOption(option);
    } else {
        ((VirtualQAbstractItemView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitStyleOption(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_DevType(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->devType();
    } else {
        return self->QAbstractItemView::devType();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseDevType(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DevType_IsBase(true);
        return vqabstractitemview->devType();
    } else {
        return self->QAbstractItemView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDevType(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DevType_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetVisible(QAbstractItemView* self, bool visible) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setVisible(visible);
    } else {
        self->QAbstractItemView::setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetVisible(QAbstractItemView* self, bool visible) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetVisible_IsBase(true);
        vqabstractitemview->setVisible(visible);
    } else {
        self->QAbstractItemView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetVisible(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetVisible_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_HeightForWidth(const QAbstractItemView* self, int param1) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractItemView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseHeightForWidth(const QAbstractItemView* self, int param1) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HeightForWidth_IsBase(true);
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QAbstractItemView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHeightForWidth(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_HasHeightForWidth(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->hasHeightForWidth();
    } else {
        return self->QAbstractItemView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseHasHeightForWidth(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HasHeightForWidth_IsBase(true);
        return vqabstractitemview->hasHeightForWidth();
    } else {
        return self->QAbstractItemView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHasHeightForWidth(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractItemView_PaintEngine(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->paintEngine();
    } else {
        return self->QAbstractItemView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractItemView_QBasePaintEngine(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_PaintEngine_IsBase(true);
        return vqabstractitemview->paintEngine();
    } else {
        return self->QAbstractItemView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEngine(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_KeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyReleaseEvent_IsBase(true);
        vqabstractitemview->keyReleaseEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_EnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->enterEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseEnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EnterEvent_IsBase(true);
        vqabstractitemview->enterEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEnterEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_LeaveEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->leaveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseLeaveEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_LeaveEvent_IsBase(true);
        vqabstractitemview->leaveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->moveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MoveEvent_IsBase(true);
        vqabstractitemview->moveEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->closeEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CloseEvent_IsBase(true);
        vqabstractitemview->closeEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_TabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->tabletEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseTabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_TabletEvent_IsBase(true);
        vqabstractitemview->tabletEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTabletEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ActionEvent(QAbstractItemView* self, QActionEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->actionEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseActionEvent(QAbstractItemView* self, QActionEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ActionEvent_IsBase(true);
        vqabstractitemview->actionEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnActionEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ShowEvent(QAbstractItemView* self, QShowEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->showEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseShowEvent(QAbstractItemView* self, QShowEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ShowEvent_IsBase(true);
        vqabstractitemview->showEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnShowEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_HideEvent(QAbstractItemView* self, QHideEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->hideEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHideEvent(QAbstractItemView* self, QHideEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HideEvent_IsBase(true);
        vqabstractitemview->hideEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHideEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_HideEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_NativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractItemView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseNativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_NativeEvent_IsBase(true);
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQAbstractItemView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnNativeEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_Metric(const QAbstractItemView* self, int param1) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractItemView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseMetric(const QAbstractItemView* self, int param1) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Metric_IsBase(true);
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQAbstractItemView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetric(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Metric_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InitPainter(const QAbstractItemView* self, QPainter* painter) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->initPainter(painter);
    } else {
        ((VirtualQAbstractItemView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitPainter(const QAbstractItemView* self, QPainter* painter) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitPainter_IsBase(true);
        vqabstractitemview->initPainter(painter);
    } else {
        ((VirtualQAbstractItemView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitPainter(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_InitPainter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractItemView_Redirected(const QAbstractItemView* self, QPoint* offset) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->redirected(offset);
    } else {
        return ((VirtualQAbstractItemView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractItemView_QBaseRedirected(const QAbstractItemView* self, QPoint* offset) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Redirected_IsBase(true);
        return vqabstractitemview->redirected(offset);
    } else {
        return ((VirtualQAbstractItemView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRedirected(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Redirected_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractItemView_SharedPainter(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->sharedPainter();
    } else {
        return ((VirtualQAbstractItemView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractItemView_QBaseSharedPainter(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SharedPainter_IsBase(true);
        return vqabstractitemview->sharedPainter();
    } else {
        return ((VirtualQAbstractItemView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSharedPainter(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ChildEvent(QAbstractItemView* self, QChildEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->childEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseChildEvent(QAbstractItemView* self, QChildEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ChildEvent_IsBase(true);
        vqabstractitemview->childEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChildEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CustomEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->customEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCustomEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CustomEvent_IsBase(true);
        vqabstractitemview->customEvent(event);
    } else {
        ((VirtualQAbstractItemView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCustomEvent(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ConnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseConnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ConnectNotify_IsBase(true);
        vqabstractitemview->connectNotify(*signal);
    } else {
        ((VirtualQAbstractItemView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnConnectNotify(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DisconnectNotify_IsBase(true);
        vqabstractitemview->disconnectNotify(*signal);
    } else {
        ((VirtualQAbstractItemView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDisconnectNotify(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_State(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return static_cast<int>(vqabstractitemview->state());
    } else {
        return static_cast<int>(((VirtualQAbstractItemView*)self)->state());
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseState(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_State_IsBase(true);
        return static_cast<int>(vqabstractitemview->state());
    } else {
        return static_cast<int>(((VirtualQAbstractItemView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnState(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_State_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetState(QAbstractItemView* self, int state) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    } else {
        ((VirtualQAbstractItemView*)self)->setState(static_cast<VirtualQAbstractItemView::State>(state));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetState(QAbstractItemView* self, int state) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetState_IsBase(true);
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    } else {
        ((VirtualQAbstractItemView*)self)->setState(static_cast<VirtualQAbstractItemView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetState(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetState_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQAbstractItemView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScheduleDelayedItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(true);
        vqabstractitemview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQAbstractItemView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScheduleDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->executeDelayedItemsLayout();
    } else {
        ((VirtualQAbstractItemView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseExecuteDelayedItemsLayout(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(true);
        vqabstractitemview->executeDelayedItemsLayout();
    } else {
        ((VirtualQAbstractItemView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnExecuteDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setDirtyRegion(*region);
    } else {
        ((VirtualQAbstractItemView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetDirtyRegion(QAbstractItemView* self, const QRegion* region) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetDirtyRegion_IsBase(true);
        vqabstractitemview->setDirtyRegion(*region);
    } else {
        ((VirtualQAbstractItemView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetDirtyRegion(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_IsBase(true);
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQAbstractItemView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollDirtyRegion(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QPoint(vqabstractitemview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QAbstractItemView_QBaseDirtyRegionOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqabstractitemview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDirtyRegionOffset(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_StartAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->startAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStartAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StartAutoScroll_IsBase(true);
        vqabstractitemview->startAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartAutoScroll(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StartAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_StopAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->stopAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStopAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StopAutoScroll_IsBase(true);
        vqabstractitemview->stopAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStopAutoScroll(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_StopAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DoAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->doAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDoAutoScroll(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DoAutoScroll_IsBase(true);
        vqabstractitemview->doAutoScroll();
    } else {
        ((VirtualQAbstractItemView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoAutoScroll(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DoAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQAbstractItemView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseDropIndicatorPosition(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQAbstractItemView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropIndicatorPosition(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQAbstractItemView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetViewportMargins_IsBase(true);
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQAbstractItemView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetViewportMargins(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SetViewportMargins_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QAbstractItemView_ViewportMargins(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return new QMargins(vqabstractitemview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QAbstractItemView_QBaseViewportMargins(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportMargins_IsBase(true);
        return new QMargins(vqabstractitemview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportMargins(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_ViewportMargins_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DrawFrame(QAbstractItemView* self, QPainter* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->drawFrame(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDrawFrame(QAbstractItemView* self, QPainter* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DrawFrame_IsBase(true);
        vqabstractitemview->drawFrame(param1);
    } else {
        ((VirtualQAbstractItemView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDrawFrame(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_DrawFrame_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_UpdateMicroFocus(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->updateMicroFocus();
    } else {
        ((VirtualQAbstractItemView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateMicroFocus(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateMicroFocus_IsBase(true);
        vqabstractitemview->updateMicroFocus();
    } else {
        ((VirtualQAbstractItemView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateMicroFocus(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_Create(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->create();
    } else {
        ((VirtualQAbstractItemView*)self)->create();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCreate(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Create_IsBase(true);
        vqabstractitemview->create();
    } else {
        ((VirtualQAbstractItemView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCreate(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Create_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_Destroy(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->destroy();
    } else {
        ((VirtualQAbstractItemView*)self)->destroy();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDestroy(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Destroy_IsBase(true);
        vqabstractitemview->destroy();
    } else {
        ((VirtualQAbstractItemView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDestroy(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Destroy_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_FocusNextChild(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->focusNextChild();
    } else {
        return ((VirtualQAbstractItemView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusNextChild(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusNextChild_IsBase(true);
        return vqabstractitemview->focusNextChild();
    } else {
        return ((VirtualQAbstractItemView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextChild(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_FocusPreviousChild(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->focusPreviousChild();
    } else {
        return ((VirtualQAbstractItemView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusPreviousChild(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusPreviousChild_IsBase(true);
        return vqabstractitemview->focusPreviousChild();
    } else {
        return ((VirtualQAbstractItemView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusPreviousChild(QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractItemView_Sender(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->sender();
    } else {
        return ((VirtualQAbstractItemView*)self)->sender();
    }
}

// Base class handler implementation
QObject* QAbstractItemView_QBaseSender(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Sender_IsBase(true);
        return vqabstractitemview->sender();
    } else {
        return ((VirtualQAbstractItemView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSender(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Sender_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_SenderSignalIndex(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSenderSignalIndex(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SenderSignalIndex_IsBase(true);
        return vqabstractitemview->senderSignalIndex();
    } else {
        return ((VirtualQAbstractItemView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSenderSignalIndex(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_Receivers(const QAbstractItemView* self, const char* signal) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->receivers(signal);
    } else {
        return ((VirtualQAbstractItemView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseReceivers(const QAbstractItemView* self, const char* signal) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Receivers_IsBase(true);
        return vqabstractitemview->receivers(signal);
    } else {
        return ((VirtualQAbstractItemView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReceivers(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_Receivers_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_IsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseIsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IsSignalConnected_IsBase(true);
        return vqabstractitemview->isSignalConnected(*signal);
    } else {
        return ((VirtualQAbstractItemView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsSignalConnected(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QAbstractItemView_GetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        return vqabstractitemview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractItemView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QAbstractItemView_QBaseGetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_GetDecodedMetricF_IsBase(true);
        return vqabstractitemview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQAbstractItemView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnGetDecodedMetricF(const QAbstractItemView* self, intptr_t slot) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview && vqabstractitemview->isVirtualQAbstractItemView) {
        vqabstractitemview->setQAbstractItemView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_GetDecodedMetricF_Callback>(slot));
    }
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
    delete self;
}
