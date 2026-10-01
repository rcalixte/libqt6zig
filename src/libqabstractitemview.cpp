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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractItemView_Tr(const char* s) {
    auto _ret = QAbstractItemView::tr(s);
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
    self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self) {
    return self->model();
}

void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
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
    self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

void QAbstractItemView_ScrollTo(QAbstractItemView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, const QPoint* point) {
    return new QModelIndex(self->indexAt(*point));
}

QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, const QModelIndex* index) {
    return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
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
    return self->itemDelegateForIndex(*index);
}

QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

void QAbstractItemView_Reset(QAbstractItemView* self) {
    self->reset();
}

void QAbstractItemView_SetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
    self->doItemsLayout();
}

void QAbstractItemView_SelectAll(QAbstractItemView* self) {
    self->selectAll();
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
    if (vqabstractitemview) {
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void QAbstractItemView_RowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void QAbstractItemView_SelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->selectionChanged(*selected, *deselected);
    }
}

void QAbstractItemView_CurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->currentChanged(*current, *previous);
    }
}

void QAbstractItemView_UpdateEditorData(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->updateEditorData();
    }
}

void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->updateEditorGeometries();
    }
}

void QAbstractItemView_UpdateGeometries(QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->updateGeometries();
    }
}

void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    }
}

void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->commitData(editor);
    }
}

void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->editorDestroyed(editor);
    }
}

void QAbstractItemView_Pressed(QAbstractItemView* self, const QModelIndex* index) {
    self->pressed(*index);
}

void QAbstractItemView_Connect_Pressed(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::pressed),
                               [self, slotFunc](const QModelIndex& index) {
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
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::clicked),
                               [self, slotFunc](const QModelIndex& index) {
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
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::doubleClicked),
                               [self, slotFunc](const QModelIndex& index) {
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
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::activated),
                               [self, slotFunc](const QModelIndex& index) {
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
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::entered),
                               [self, slotFunc](const QModelIndex& index) {
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
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)()>(&QAbstractItemView::viewportEntered),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, const QSize* size) {
    self->iconSizeChanged(*size);
}

void QAbstractItemView_Connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QSize*) = reinterpret_cast<void (*)(QAbstractItemView*, QSize*)>(slot);
    QAbstractItemView::connect(self,
                               static_cast<void (QAbstractItemView::*)(const QSize&)>(&QAbstractItemView::iconSizeChanged),
                               [self, slotFunc](const QSize& size) {
                                   const QSize& size_ret = size;
                                   // Cast returned reference into pointer
                                   QSize* sigval1 = const_cast<QSize*>(&size_ret);
                                   slotFunc(self, sigval1);
                               });
}

QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return new QModelIndex(vqabstractitemview->moveCursor(static_cast<VirtualQAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method QAbstractItemView::moveCursor called without a directly constructed type");
}

int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->horizontalOffset();
    }
    qFatal("Error: Protected method QAbstractItemView::horizontalOffset called without a directly constructed type");
}

int QAbstractItemView_VerticalOffset(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->verticalOffset();
    }
    qFatal("Error: Protected method QAbstractItemView::verticalOffset called without a directly constructed type");
}

bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, const QModelIndex* index) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->isIndexHidden(*index);
    }
    qFatal("Error: Protected method QAbstractItemView::isIndexHidden called without a directly constructed type");
}

void QAbstractItemView_SetSelection(QAbstractItemView* self, const QRect* rect, int command) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, const QItemSelection* selection) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
    }
    qFatal("Error: Protected method QAbstractItemView::visualRegionForSelection called without a directly constructed type");
}

libqt_list /* of QModelIndex* */ QAbstractItemView_SelectedIndexes(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        QList<QModelIndex> _ret = vqabstractitemview->selectedIndexes();
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
    qFatal("Error: Protected method QAbstractItemView::selectedIndexes called without a directly constructed type");
}

bool QAbstractItemView_Edit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
    qFatal("Error: Protected method QAbstractItemView::edit2 called without a directly constructed type");
}

int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    }
    qFatal("Error: Protected method QAbstractItemView::selectionCommand called without a directly constructed type");
}

void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->initViewItemOption(option);
    }
}

bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QAbstractItemView::focusNextPrevChild called without a directly constructed type");
}

bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->event(event);
    }
    qFatal("Error: Protected method QAbstractItemView::event called without a directly constructed type");
}

bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->viewportEvent(event);
    }
    qFatal("Error: Protected method QAbstractItemView::viewportEvent called without a directly constructed type");
}

void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->mousePressEvent(event);
    }
}

void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->mouseMoveEvent(event);
    }
}

void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->mouseReleaseEvent(event);
    }
}

void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->mouseDoubleClickEvent(event);
    }
}

void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->dragEnterEvent(event);
    }
}

void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->dragMoveEvent(event);
    }
}

void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->dragLeaveEvent(event);
    }
}

void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->dropEvent(event);
    }
}

void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->focusInEvent(event);
    }
}

void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->focusOutEvent(event);
    }
}

void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->keyPressEvent(event);
    }
}

void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->resizeEvent(event);
    }
}

void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->timerEvent(event);
    }
}

void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->inputMethodEvent(event);
    }
}

bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->eventFilter(object, event);
    }
    qFatal("Error: Protected method QAbstractItemView::eventFilter called without a directly constructed type");
}

QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self) {
    auto* vqabstractitemview = dynamic_cast<const VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return new QSize(vqabstractitemview->viewportSizeHint());
    }
    qFatal("Error: Protected method QAbstractItemView::viewportSizeHint called without a directly constructed type");
}

libqt_string QAbstractItemView_Tr2(const char* s, const char* c) {
    auto _ret = QAbstractItemView::tr(s, c);
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
    auto _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAbstractItemView_SuperMetaObject(const QAbstractItemView* self) {
    return (QMetaObject*)self->QAbstractItemView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetaObject(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_metaobject_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAbstractItemView_SuperMetacast(QAbstractItemView* self, const char* param1) {
    return self->QAbstractItemView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetacast(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_metacast_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemView_SuperMetacall(QAbstractItemView* self, int param1, int param2, void** param3) {
    return self->QAbstractItemView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetacall(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_metacall_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metacall_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperSetModel(QAbstractItemView* self, QAbstractItemModel* model) {
    self->QAbstractItemView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetModel(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setmodel_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetModel_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperSetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    self->QAbstractItemView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelectionModel(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setselectionmodel_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperKeyboardSearch(QAbstractItemView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QAbstractItemView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyboardSearch(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_keyboardsearch_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyboardSearch_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRect(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_visualrect_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRect_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollTo(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_scrollto_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollTo_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIndexAt(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_indexat_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IndexAt_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemView_SuperSizeHintForRow(const QAbstractItemView* self, int row) {
    return self->QAbstractItemView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForRow(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_sizehintforrow_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForRow_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemView_SuperSizeHintForColumn(const QAbstractItemView* self, int column) {
    return self->QAbstractItemView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForColumn(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_sizehintforcolumn_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForColumn_Callback>(slot);
}

// Base class handler implementation
QAbstractItemDelegate* QAbstractItemView_SuperItemDelegateForIndex(const QAbstractItemView* self, const QModelIndex* index) {
    return self->QAbstractItemView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnItemDelegateForIndex(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_itemdelegateforindex_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ItemDelegateForIndex_Callback>(slot);
}

// Base class handler implementation
QVariant* QAbstractItemView_SuperInputMethodQuery(const QAbstractItemView* self, int query) {
    return new QVariant(self->QAbstractItemView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodQuery(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_inputmethodquery_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperReset(QAbstractItemView* self) {
    self->QAbstractItemView::reset();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReset(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_reset_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Reset_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperSetRootIndex(QAbstractItemView* self, const QModelIndex* index) {
    self->QAbstractItemView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetRootIndex(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setrootindex_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetRootIndex_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDoItemsLayout(QAbstractItemView* self) {
    self->QAbstractItemView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoItemsLayout(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_doitemslayout_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoItemsLayout_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperSelectAll(QAbstractItemView* self) {
    self->QAbstractItemView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectAll(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_selectall_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectAll_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDataChanged(QAbstractItemView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDataChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_datachanged_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DataChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperRowsInserted(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsInserted(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_rowsinserted_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperRowsAboutToBeRemoved(QAbstractItemView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsAboutToBeRemoved(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsAboutToBeRemoved_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperSelectionChanged(QAbstractItemView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_selectionchanged_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperCurrentChanged(QAbstractItemView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCurrentChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_currentchanged_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CurrentChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperUpdateEditorData(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorData(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_updateeditordata_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorData_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperUpdateEditorGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorGeometries(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_updateeditorgeometries_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorGeometries_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperUpdateGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateGeometries(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_updategeometries_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperVerticalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_verticalscrollbaraction_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarAction_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperHorizontalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarAction_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperVerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperHorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperCloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEditor(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_closeeditor_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEditor_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperCommitData(QAbstractItemView* self, QWidget* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCommitData(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_commitdata_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CommitData_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperEditorDestroyed(QAbstractItemView* self, QObject* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEditorDestroyed(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_editordestroyed_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EditorDestroyed_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveCursor(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_movecursor_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveCursor_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalOffset(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_horizontaloffset_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalOffset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalOffset(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_verticaloffset_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalOffset_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsIndexHidden(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_isindexhidden_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsIndexHidden_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelection(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setselection_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelection_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRegionForSelection(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_visualregionforselection_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRegionForSelection_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemView_SuperSelectedIndexes(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        QList<QModelIndex> _ret = vqabstractitemview->QAbstractItemView::selectedIndexes();
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
        qFatal("Error: Protected virtual method QAbstractItemView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectedIndexes(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_selectedindexes_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectedIndexes_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemView_SuperEdit2(QAbstractItemView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEdit2(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_edit2_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Edit2_Callback>(slot);
}

// Base class handler implementation
int QAbstractItemView_SuperSelectionCommand(const QAbstractItemView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->QAbstractItemView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionCommand(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_selectioncommand_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionCommand_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperStartDrag(QAbstractItemView* self, int supportedActions) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartDrag(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_startdrag_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartDrag_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->QAbstractItemView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitViewItemOption(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_initviewitemoption_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitViewItemOption_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemView_SuperFocusNextPrevChild(QAbstractItemView* self, bool next) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextPrevChild(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_focusnextprevchild_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemView_SuperEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::event(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_event_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Event_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemView_SuperViewportEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_viewportevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperMousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMousePressEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_mousepressevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_mousemoveevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_mousereleaseevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseDoubleClickEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragEnterEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_dragenterevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_dragmoveevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_dragleaveevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperDropEvent(QAbstractItemView* self, QDropEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_dropevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperFocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusInEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_focusinevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperFocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusOutEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_focusoutevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperKeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyPressEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_keypressevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnResizeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_resizeevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperTimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTimerEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_timerevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QAbstractItemView_SuperInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_inputmethodevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
bool QAbstractItemView_SuperEventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEventFilter(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_eventfilter_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EventFilter_Callback>(slot);
}

// Base class handler implementation
QSize* QAbstractItemView_SuperViewportSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        return new QSize(vqabstractitemview->QAbstractItemView::viewportSizeHint());
    qFatal("Error: Protected virtual method QAbstractItemView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportSizeHint(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_viewportsizehint_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractItemView_MinimumSizeHint(const QAbstractItemView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QAbstractItemView_SuperMinimumSizeHint(const QAbstractItemView* self) {
    return new QSize(self->QAbstractItemView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMinimumSizeHint(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_minimumsizehint_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QAbstractItemView_SizeHint(const QAbstractItemView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QAbstractItemView_SuperSizeHint(const QAbstractItemView* self) {
    return new QSize(self->QAbstractItemView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHint(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_sizehint_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_SetupViewport(QAbstractItemView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QAbstractItemView_SuperSetupViewport(QAbstractItemView* self, QWidget* viewport) {
    self->QAbstractItemView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetupViewport(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setupviewport_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_PaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperPaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_paintevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_WheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperWheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnWheelEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_wheelevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnContextMenuEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_contextmenuevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollContentsBy(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_scrollcontentsby_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ChangeEvent(QAbstractItemView* self, QEvent* param1) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperChangeEvent(QAbstractItemView* self, QEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChangeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_changeevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_InitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview) {
        vqabstractitemview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->QAbstractItemView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitStyleOption(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_initstyleoption_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QAbstractItemView_DevType(const QAbstractItemView* self) {
    return self->devType();
}

// Base class handler implementation
int QAbstractItemView_SuperDevType(const QAbstractItemView* self) {
    return self->QAbstractItemView::devType();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDevType(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_devtype_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_SetVisible(QAbstractItemView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QAbstractItemView_SuperSetVisible(QAbstractItemView* self, bool visible) {
    self->QAbstractItemView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetVisible(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_setvisible_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QAbstractItemView_HeightForWidth(const QAbstractItemView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QAbstractItemView_SuperHeightForWidth(const QAbstractItemView* self, int param1) {
    return self->QAbstractItemView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHeightForWidth(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_heightforwidth_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemView_HasHeightForWidth(const QAbstractItemView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QAbstractItemView_SuperHasHeightForWidth(const QAbstractItemView* self) {
    return self->QAbstractItemView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHasHeightForWidth(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_hasheightforwidth_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QAbstractItemView_PaintEngine(const QAbstractItemView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QAbstractItemView_SuperPaintEngine(const QAbstractItemView* self) {
    return self->QAbstractItemView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEngine(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_paintengine_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_KeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_keyreleaseevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_EnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperEnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEnterEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_enterevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_LeaveEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperLeaveEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_leaveevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_MoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperMoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_moveevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_CloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperCloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_closeevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_TabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperTabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTabletEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_tabletevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ActionEvent(QAbstractItemView* self, QActionEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperActionEvent(QAbstractItemView* self, QActionEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnActionEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_actionevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ShowEvent(QAbstractItemView* self, QShowEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperShowEvent(QAbstractItemView* self, QShowEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnShowEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_showevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_HideEvent(QAbstractItemView* self, QHideEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperHideEvent(QAbstractItemView* self, QHideEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHideEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_hideevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QAbstractItemView_NativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QAbstractItemView_SuperNativeEvent(QAbstractItemView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->QAbstractItemView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnNativeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_nativeevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QAbstractItemView_Metric(const QAbstractItemView* self, int param1) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview) {
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QAbstractItemView_SuperMetric(const QAbstractItemView* self, int param1) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->QAbstractItemView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetric(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_metric_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_InitPainter(const QAbstractItemView* self, QPainter* painter) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview) {
        vqabstractitemview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperInitPainter(const QAbstractItemView* self, QPainter* painter) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->QAbstractItemView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitPainter(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_initpainter_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QAbstractItemView_Redirected(const QAbstractItemView* self, QPoint* offset) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview) {
        return vqabstractitemview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QAbstractItemView_SuperRedirected(const QAbstractItemView* self, QPoint* offset) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->QAbstractItemView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRedirected(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_redirected_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QAbstractItemView_SharedPainter(const QAbstractItemView* self) {
    auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self));
    if (vqabstractitemview) {
        return vqabstractitemview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QAbstractItemView_SuperSharedPainter(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->QAbstractItemView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSharedPainter(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        vqabstractitemview->qabstractitemview_sharedpainter_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ChildEvent(QAbstractItemView* self, QChildEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperChildEvent(QAbstractItemView* self, QChildEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChildEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_childevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_CustomEvent(QAbstractItemView* self, QEvent* event) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperCustomEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCustomEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_customevent_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_ConnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperConnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnConnectNotify(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_connectnotify_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAbstractItemView_DisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self);
    if (vqabstractitemview) {
        vqabstractitemview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAbstractItemView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAbstractItemView_SuperDisconnectNotify(QAbstractItemView* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->QAbstractItemView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAbstractItemView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDisconnectNotify(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self))
        vqabstractitemview->qabstractitemview_disconnectnotify_callback = reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
int QAbstractItemView_State(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->VirtualQAbstractItemView::state());
    } else
        qFatal("Error: Protected method QAbstractItemView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_SetState(QAbstractItemView* self, int state) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::setState(static_cast<VirtualQAbstractItemView::State>(state));
    } else
        qFatal("Error: Protected method QAbstractItemView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QAbstractItemView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QAbstractItemView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, const QRegion* region) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QAbstractItemView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QAbstractItemView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        return new QPoint(vqabstractitemview->dirtyRegionOffset());
    qFatal("Error: Protected method QAbstractItemView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_StartAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::startAutoScroll();
    } else
        qFatal("Error: Protected method QAbstractItemView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_StopAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::stopAutoScroll();
    } else
        qFatal("Error: Protected method QAbstractItemView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_DoAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::doAutoScroll();
    } else
        qFatal("Error: Protected method QAbstractItemView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->VirtualQAbstractItemView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QAbstractItemView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_SetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QAbstractItemView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QAbstractItemView_ViewportMargins(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self)))
        return new QMargins(vqabstractitemview->viewportMargins());
    qFatal("Error: Protected method QAbstractItemView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_DrawFrame(QAbstractItemView* self, QPainter* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::drawFrame(param1);
    } else
        qFatal("Error: Protected method QAbstractItemView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_UpdateMicroFocus(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QAbstractItemView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_Create(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::create();
    } else
        qFatal("Error: Protected method QAbstractItemView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractItemView_Destroy(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->VirtualQAbstractItemView::destroy();
    } else
        qFatal("Error: Protected method QAbstractItemView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemView_FocusNextChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->VirtualQAbstractItemView::focusNextChild();
    } else
        qFatal("Error: Protected method QAbstractItemView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemView_FocusPreviousChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->VirtualQAbstractItemView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QAbstractItemView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QAbstractItemView_Sender(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->VirtualQAbstractItemView::sender();
    } else
        qFatal("Error: Protected method QAbstractItemView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemView_SenderSignalIndex(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->VirtualQAbstractItemView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAbstractItemView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAbstractItemView_Receivers(const QAbstractItemView* self, const char* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->VirtualQAbstractItemView::receivers(signal);
    } else
        qFatal("Error: Protected method QAbstractItemView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAbstractItemView_IsSignalConnected(const QAbstractItemView* self, const QMetaMethod* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->VirtualQAbstractItemView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAbstractItemView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QAbstractItemView_GetDecodedMetricF(const QAbstractItemView* self, int metricA, int metricB) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->VirtualQAbstractItemView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QAbstractItemView::getDecodedMetricF called without a directly constructed type");
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
    delete self;
}
