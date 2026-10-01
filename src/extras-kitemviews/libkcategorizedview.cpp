#include <KCategorizedView>
#include <KCategoryDrawer>
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
#include <kcategorizedview.h>
#include "libkcategorizedview.h"
#include "libkcategorizedview.hxx"

KCategorizedView* KCategorizedView_new(QWidget* parent) {
    return new VirtualKCategorizedView(parent);
}

KCategorizedView* KCategorizedView_new2() {
    return new VirtualKCategorizedView();
}

QMetaObject* KCategorizedView_MetaObject(const KCategorizedView* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCategorizedView_Metacast(KCategorizedView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCategorizedView_Metacall(KCategorizedView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCategorizedView_Tr(const char* s) {
    auto _ret = KCategorizedView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCategorizedView_SetModel(KCategorizedView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

void KCategorizedView_SetGridSize(KCategorizedView* self, const QSize* size) {
    self->setGridSize(*size);
}

void KCategorizedView_SetGridSizeOwn(KCategorizedView* self, const QSize* size) {
    self->setGridSizeOwn(*size);
}

QRect* KCategorizedView_VisualRect(const KCategorizedView* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

KCategoryDrawer* KCategorizedView_CategoryDrawer(const KCategorizedView* self) {
    return self->categoryDrawer();
}

void KCategorizedView_SetCategoryDrawer(KCategorizedView* self, KCategoryDrawer* categoryDrawer) {
    self->setCategoryDrawer(categoryDrawer);
}

int KCategorizedView_CategorySpacing(const KCategorizedView* self) {
    return self->categorySpacing();
}

void KCategorizedView_SetCategorySpacing(KCategorizedView* self, int categorySpacing) {
    self->setCategorySpacing(static_cast<int>(categorySpacing));
}

bool KCategorizedView_AlternatingBlockColors(const KCategorizedView* self) {
    return self->alternatingBlockColors();
}

void KCategorizedView_SetAlternatingBlockColors(KCategorizedView* self, bool enable) {
    self->setAlternatingBlockColors(enable);
}

bool KCategorizedView_CollapsibleBlocks(const KCategorizedView* self) {
    return self->collapsibleBlocks();
}

void KCategorizedView_SetCollapsibleBlocks(KCategorizedView* self, bool enable) {
    self->setCollapsibleBlocks(enable);
}

libqt_list /* of QModelIndex* */ KCategorizedView_Block(KCategorizedView* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    QList<QModelIndex> _ret = self->block(category_QString);
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

libqt_list /* of QModelIndex* */ KCategorizedView_Block2(KCategorizedView* self, const QModelIndex* representative) {
    QList<QModelIndex> _ret = self->block(*representative);
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

QModelIndex* KCategorizedView_IndexAt(const KCategorizedView* self, const QPoint* point) {
    return new QModelIndex(self->indexAt(*point));
}

void KCategorizedView_Reset(KCategorizedView* self) {
    self->reset();
}

void KCategorizedView_CategorySpacingChanged(KCategorizedView* self, int spacing) {
    self->categorySpacingChanged(static_cast<int>(spacing));
}

void KCategorizedView_Connect_CategorySpacingChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, int) = reinterpret_cast<void (*)(KCategorizedView*, int)>(slot);
    KCategorizedView::connect(self,
                              static_cast<void (KCategorizedView::*)(int)>(&KCategorizedView::categorySpacingChanged),
                              [self, slotFunc](int spacing) {
                                  int sigval1 = spacing;
                                  slotFunc(self, sigval1);
                              });
}

void KCategorizedView_AlternatingBlockColorsChanged(KCategorizedView* self, bool enable) {
    self->alternatingBlockColorsChanged(enable);
}

void KCategorizedView_Connect_AlternatingBlockColorsChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, bool) = reinterpret_cast<void (*)(KCategorizedView*, bool)>(slot);
    KCategorizedView::connect(self,
                              static_cast<void (KCategorizedView::*)(bool)>(&KCategorizedView::alternatingBlockColorsChanged),
                              [self, slotFunc](bool enable) {
                                  bool sigval1 = enable;
                                  slotFunc(self, sigval1);
                              });
}

void KCategorizedView_CollapsibleBlocksChanged(KCategorizedView* self, bool enable) {
    self->collapsibleBlocksChanged(enable);
}

void KCategorizedView_Connect_CollapsibleBlocksChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, bool) = reinterpret_cast<void (*)(KCategorizedView*, bool)>(slot);
    KCategorizedView::connect(self,
                              static_cast<void (KCategorizedView::*)(bool)>(&KCategorizedView::collapsibleBlocksChanged),
                              [self, slotFunc](bool enable) {
                                  bool sigval1 = enable;
                                  slotFunc(self, sigval1);
                              });
}

void KCategorizedView_PaintEvent(KCategorizedView* self, QPaintEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->paintEvent(event);
    }
}

void KCategorizedView_ResizeEvent(KCategorizedView* self, QResizeEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->resizeEvent(event);
    }
}

void KCategorizedView_SetSelection(KCategorizedView* self, const QRect* rect, int flags) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

void KCategorizedView_MouseMoveEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->mouseMoveEvent(event);
    }
}

void KCategorizedView_MousePressEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->mousePressEvent(event);
    }
}

void KCategorizedView_MouseReleaseEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->mouseReleaseEvent(event);
    }
}

void KCategorizedView_LeaveEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->leaveEvent(event);
    }
}

void KCategorizedView_StartDrag(KCategorizedView* self, int supportedActions) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

void KCategorizedView_DragMoveEvent(KCategorizedView* self, QDragMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->dragMoveEvent(event);
    }
}

void KCategorizedView_DragEnterEvent(KCategorizedView* self, QDragEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->dragEnterEvent(event);
    }
}

void KCategorizedView_DragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->dragLeaveEvent(event);
    }
}

void KCategorizedView_DropEvent(KCategorizedView* self, QDropEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->dropEvent(event);
    }
}

QModelIndex* KCategorizedView_MoveCursor(KCategorizedView* self, int cursorAction, int modifiers) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return new QModelIndex(vkcategorizedview->moveCursor(static_cast<VirtualKCategorizedView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    qFatal("Error: Protected method KCategorizedView::moveCursor called without a directly constructed type");
}

void KCategorizedView_RowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void KCategorizedView_UpdateGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->updateGeometries();
    }
}

void KCategorizedView_CurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->currentChanged(*current, *previous);
    }
}

void KCategorizedView_DataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

void KCategorizedView_RowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

void KCategorizedView_SlotLayoutChanged(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->slotLayoutChanged();
    }
}

libqt_string KCategorizedView_Tr2(const char* s, const char* c) {
    auto _ret = KCategorizedView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCategorizedView_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCategorizedView::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCategorizedView_SuperMetaObject(const KCategorizedView* self) {
    return (QMetaObject*)self->KCategorizedView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMetaObject(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_metaobject_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCategorizedView_SuperMetacast(KCategorizedView* self, const char* param1) {
    return self->KCategorizedView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMetacast(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_metacast_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCategorizedView_SuperMetacall(KCategorizedView* self, int param1, int param2, void** param3) {
    return self->KCategorizedView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMetacall(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_metacall_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Metacall_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperSetModel(KCategorizedView* self, QAbstractItemModel* model) {
    self->KCategorizedView::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetModel(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setmodel_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetModel_Callback>(slot);
}

// Base class handler implementation
QRect* KCategorizedView_SuperVisualRect(const KCategorizedView* self, const QModelIndex* index) {
    return new QRect(self->KCategorizedView::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVisualRect(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_visualrect_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VisualRect_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KCategorizedView_SuperIndexAt(const KCategorizedView* self, const QPoint* point) {
    return new QModelIndex(self->KCategorizedView::indexAt(*point));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnIndexAt(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_indexat_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_IndexAt_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperReset(KCategorizedView* self) {
    self->KCategorizedView::reset();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnReset(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_reset_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Reset_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperPaintEvent(KCategorizedView* self, QPaintEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnPaintEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_paintevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperResizeEvent(KCategorizedView* self, QResizeEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnResizeEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_resizeevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperSetSelection(KCategorizedView* self, const QRect* rect, int flags) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetSelection(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setselection_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetSelection_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperMouseMoveEvent(KCategorizedView* self, QMouseEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseMoveEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_mousemoveevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperMousePressEvent(KCategorizedView* self, QMouseEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMousePressEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_mousepressevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperMouseReleaseEvent(KCategorizedView* self, QMouseEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseReleaseEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_mousereleaseevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperLeaveEvent(KCategorizedView* self, QEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnLeaveEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_leaveevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_LeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperStartDrag(KCategorizedView* self, int supportedActions) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnStartDrag(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_startdrag_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_StartDrag_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperDragMoveEvent(KCategorizedView* self, QDragMoveEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragMoveEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_dragmoveevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperDragEnterEvent(KCategorizedView* self, QDragEnterEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragEnterEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_dragenterevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperDragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragLeaveEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_dragleaveevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperDropEvent(KCategorizedView* self, QDropEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDropEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_dropevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DropEvent_Callback>(slot);
}

// Base class handler implementation
QModelIndex* KCategorizedView_SuperMoveCursor(KCategorizedView* self, int cursorAction, int modifiers) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        return new QModelIndex(vkcategorizedview->KCategorizedView::moveCursor(static_cast<VirtualKCategorizedView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method KCategorizedView::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMoveCursor(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_movecursor_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MoveCursor_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperRowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRowsAboutToBeRemoved(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_rowsabouttoberemoved_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_RowsAboutToBeRemoved_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperUpdateGeometries(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::updateGeometries();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateGeometries(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_updategeometries_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateGeometries_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperCurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCurrentChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_currentchanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CurrentChanged_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperDataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDataChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_datachanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DataChanged_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperRowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRowsInserted(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_rowsinserted_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_RowsInserted_Callback>(slot);
}

// Base class handler implementation
void KCategorizedView_SuperSlotLayoutChanged(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::slotLayoutChanged();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::slotLayoutChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSlotLayoutChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_slotlayoutchanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SlotLayoutChanged_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ScrollTo(KCategorizedView* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void KCategorizedView_SuperScrollTo(KCategorizedView* self, const QModelIndex* index, int hint) {
    self->KCategorizedView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScrollTo(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_scrollto_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_DoItemsLayout(KCategorizedView* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void KCategorizedView_SuperDoItemsLayout(KCategorizedView* self) {
    self->KCategorizedView::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDoItemsLayout(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_doitemslayout_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SetRootIndex(KCategorizedView* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void KCategorizedView_SuperSetRootIndex(KCategorizedView* self, const QModelIndex* index) {
    self->KCategorizedView::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetRootIndex(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setrootindex_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_Event(KCategorizedView* self, QEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->event(e);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperEvent(KCategorizedView* self, QEvent* e) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::event(e);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_event_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Event_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ScrollContentsBy(KCategorizedView* self, int dx, int dy) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperScrollContentsBy(KCategorizedView* self, int dx, int dy) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScrollContentsBy(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_scrollcontentsby_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_WheelEvent(KCategorizedView* self, QWheelEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperWheelEvent(KCategorizedView* self, QWheelEvent* e) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnWheelEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_wheelevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_TimerEvent(KCategorizedView* self, QTimerEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperTimerEvent(KCategorizedView* self, QTimerEvent* e) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnTimerEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_timerevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_InitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        vkcategorizedview->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperInitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        vkcategorizedview->KCategorizedView::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitViewItemOption(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_initviewitemoption_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_HorizontalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KCategorizedView_SuperHorizontalOffset(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalOffset(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_horizontaloffset_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_VerticalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int KCategorizedView_SuperVerticalOffset(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::verticalOffset();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalOffset(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_verticaloffset_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QRegion* KCategorizedView_VisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualKCategorizedView::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* KCategorizedView_SuperVisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QRegion(vkcategorizedview->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method KCategorizedView::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVisualRegionForSelection(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_visualregionforselection_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedView_SelectedIndexes(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        QList<QModelIndex> _ret = vkcategorizedview->selectedIndexes();
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
        qFatal("Error: Protected virtual method KCategorizedView::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedView_SuperSelectedIndexes(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        QList<QModelIndex> _ret = vkcategorizedview->KCategorizedView::selectedIndexes();
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
        qFatal("Error: Protected virtual method KCategorizedView::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectedIndexes(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_selectedindexes_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_IsIndexHidden(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperIsIndexHidden(const KCategorizedView* self, const QModelIndex* index) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnIsIndexHidden(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_isindexhidden_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperSelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectionChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_selectionchanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
QSize* KCategorizedView_ViewportSizeHint(const KCategorizedView* self) {
    return new QSize((self->*&VirtualKCategorizedView::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KCategorizedView_SuperViewportSizeHint(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QSize(vkcategorizedview->viewportSizeHint());
    qFatal("Error: Protected virtual method KCategorizedView::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnViewportSizeHint(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_viewportsizehint_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SetSelectionModel(KCategorizedView* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
}

// Base class handler implementation
void KCategorizedView_SuperSetSelectionModel(KCategorizedView* self, QItemSelectionModel* selectionModel) {
    self->KCategorizedView::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetSelectionModel(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setselectionmodel_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetSelectionModel_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_KeyboardSearch(KCategorizedView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void KCategorizedView_SuperKeyboardSearch(KCategorizedView* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->KCategorizedView::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyboardSearch(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_keyboardsearch_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_SizeHintForRow(const KCategorizedView* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int KCategorizedView_SuperSizeHintForRow(const KCategorizedView* self, int row) {
    return self->KCategorizedView::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHintForRow(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_sizehintforrow_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_SizeHintForColumn(const KCategorizedView* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int KCategorizedView_SuperSizeHintForColumn(const KCategorizedView* self, int column) {
    return self->KCategorizedView::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHintForColumn(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_sizehintforcolumn_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* KCategorizedView_ItemDelegateForIndex(const KCategorizedView* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* KCategorizedView_SuperItemDelegateForIndex(const KCategorizedView* self, const QModelIndex* index) {
    return self->KCategorizedView::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnItemDelegateForIndex(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_itemdelegateforindex_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* KCategorizedView_InputMethodQuery(const KCategorizedView* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* KCategorizedView_SuperInputMethodQuery(const KCategorizedView* self, int query) {
    return new QVariant(self->KCategorizedView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInputMethodQuery(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_inputmethodquery_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SelectAll(KCategorizedView* self) {
    self->selectAll();
}

// Base class handler implementation
void KCategorizedView_SuperSelectAll(KCategorizedView* self) {
    self->KCategorizedView::selectAll();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectAll(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_selectall_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_UpdateEditorData(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperUpdateEditorData(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::updateEditorData();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateEditorData(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_updateeditordata_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_UpdateEditorGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperUpdateEditorGeometries(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateEditorGeometries(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_updateeditorgeometries_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_VerticalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperVerticalScrollbarAction(KCategorizedView* self, int action) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalScrollbarAction(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_verticalscrollbaraction_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_HorizontalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperHorizontalScrollbarAction(KCategorizedView* self, int action) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalScrollbarAction(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_horizontalscrollbaraction_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_VerticalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperVerticalScrollbarValueChanged(KCategorizedView* self, int value) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalScrollbarValueChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_HorizontalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperHorizontalScrollbarValueChanged(KCategorizedView* self, int value) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalScrollbarValueChanged(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_CloseEditor(KCategorizedView* self, QWidget* editor, int hint) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperCloseEditor(KCategorizedView* self, QWidget* editor, int hint) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCloseEditor(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_closeeditor_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_CommitData(KCategorizedView* self, QWidget* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperCommitData(KCategorizedView* self, QWidget* editor) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::commitData(editor);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCommitData(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_commitdata_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CommitData_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_EditorDestroyed(KCategorizedView* self, QObject* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperEditorDestroyed(KCategorizedView* self, QObject* editor) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEditorDestroyed(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_editordestroyed_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_Edit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperEdit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEdit2(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_edit2_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Edit2_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_SelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return static_cast<int>(vkcategorizedview->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int KCategorizedView_SuperSelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return static_cast<int>(vkcategorizedview->KCategorizedView::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectionCommand(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_selectioncommand_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_FocusNextPrevChild(KCategorizedView* self, bool next) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperFocusNextPrevChild(KCategorizedView* self, bool next) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusNextPrevChild(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_focusnextprevchild_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_ViewportEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperViewportEvent(KCategorizedView* self, QEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnViewportEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_viewportevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_MouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperMouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseDoubleClickEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_mousedoubleclickevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_FocusInEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperFocusInEvent(KCategorizedView* self, QFocusEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusInEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_focusinevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_FocusOutEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperFocusOutEvent(KCategorizedView* self, QFocusEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusOutEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_focusoutevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_KeyPressEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperKeyPressEvent(KCategorizedView* self, QKeyEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyPressEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_keypressevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_InputMethodEvent(KCategorizedView* self, QInputMethodEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperInputMethodEvent(KCategorizedView* self, QInputMethodEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInputMethodEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_inputmethodevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_EventFilter(KCategorizedView* self, QObject* object, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperEventFilter(KCategorizedView* self, QObject* object, QEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEventFilter(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_eventfilter_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* KCategorizedView_MinimumSizeHint(const KCategorizedView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KCategorizedView_SuperMinimumSizeHint(const KCategorizedView* self) {
    return new QSize(self->KCategorizedView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMinimumSizeHint(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_minimumsizehint_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KCategorizedView_SizeHint(const KCategorizedView* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KCategorizedView_SuperSizeHint(const KCategorizedView* self) {
    return new QSize(self->KCategorizedView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHint(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_sizehint_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SetupViewport(KCategorizedView* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KCategorizedView_SuperSetupViewport(KCategorizedView* self, QWidget* viewport) {
    self->KCategorizedView::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetupViewport(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setupviewport_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnContextMenuEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_contextmenuevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ChangeEvent(KCategorizedView* self, QEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperChangeEvent(KCategorizedView* self, QEvent* param1) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnChangeEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_changeevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_InitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        vkcategorizedview->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperInitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        vkcategorizedview->KCategorizedView::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitStyleOption(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_initstyleoption_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_DevType(const KCategorizedView* self) {
    return self->devType();
}

// Base class handler implementation
int KCategorizedView_SuperDevType(const KCategorizedView* self) {
    return self->KCategorizedView::devType();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDevType(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_devtype_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DevType_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_SetVisible(KCategorizedView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KCategorizedView_SuperSetVisible(KCategorizedView* self, bool visible) {
    self->KCategorizedView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetVisible(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_setvisible_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_HeightForWidth(const KCategorizedView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KCategorizedView_SuperHeightForWidth(const KCategorizedView* self, int param1) {
    return self->KCategorizedView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHeightForWidth(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_heightforwidth_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_HasHeightForWidth(const KCategorizedView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KCategorizedView_SuperHasHeightForWidth(const KCategorizedView* self) {
    return self->KCategorizedView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHasHeightForWidth(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_hasheightforwidth_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KCategorizedView_PaintEngine(const KCategorizedView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KCategorizedView_SuperPaintEngine(const KCategorizedView* self) {
    return self->KCategorizedView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnPaintEngine(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_paintengine_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_KeyReleaseEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperKeyReleaseEvent(KCategorizedView* self, QKeyEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyReleaseEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_keyreleaseevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_EnterEvent(KCategorizedView* self, QEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperEnterEvent(KCategorizedView* self, QEnterEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEnterEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_enterevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_MoveEvent(KCategorizedView* self, QMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperMoveEvent(KCategorizedView* self, QMoveEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMoveEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_moveevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_CloseEvent(KCategorizedView* self, QCloseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperCloseEvent(KCategorizedView* self, QCloseEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCloseEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_closeevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_TabletEvent(KCategorizedView* self, QTabletEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperTabletEvent(KCategorizedView* self, QTabletEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnTabletEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_tabletevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ActionEvent(KCategorizedView* self, QActionEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperActionEvent(KCategorizedView* self, QActionEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnActionEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_actionevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ShowEvent(KCategorizedView* self, QShowEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperShowEvent(KCategorizedView* self, QShowEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnShowEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_showevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_HideEvent(KCategorizedView* self, QHideEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperHideEvent(KCategorizedView* self, QHideEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHideEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_hideevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KCategorizedView_NativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        return vkcategorizedview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCategorizedView_SuperNativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->KCategorizedView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnNativeEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_nativeevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KCategorizedView_Metric(const KCategorizedView* self, int param1) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KCategorizedView_SuperMetric(const KCategorizedView* self, int param1) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KCategorizedView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMetric(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_metric_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Metric_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_InitPainter(const KCategorizedView* self, QPainter* painter) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        vkcategorizedview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperInitPainter(const KCategorizedView* self, QPainter* painter) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        vkcategorizedview->KCategorizedView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitPainter(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_initpainter_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KCategorizedView_Redirected(const KCategorizedView* self, QPoint* offset) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KCategorizedView_SuperRedirected(const KCategorizedView* self, QPoint* offset) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRedirected(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_redirected_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KCategorizedView_SharedPainter(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview) {
        return vkcategorizedview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KCategorizedView_SuperSharedPainter(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->KCategorizedView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KCategorizedView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSharedPainter(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        vkcategorizedview->kcategorizedview_sharedpainter_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ChildEvent(KCategorizedView* self, QChildEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperChildEvent(KCategorizedView* self, QChildEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnChildEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_childevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_CustomEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperCustomEvent(KCategorizedView* self, QEvent* event) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCustomEvent(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_customevent_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_ConnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperConnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnConnectNotify(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_connectnotify_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCategorizedView_DisconnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview) {
        vkcategorizedview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategorizedView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategorizedView_SuperDisconnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->KCategorizedView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategorizedView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDisconnectNotify(KCategorizedView* self, intptr_t slot) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self))
        vkcategorizedview->kcategorizedview_disconnectnotify_callback = reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCategorizedView_ResizeContents(KCategorizedView* self, int width, int height) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method KCategorizedView::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* KCategorizedView_ContentsSize(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QSize(vkcategorizedview->contentsSize());
    qFatal("Error: Protected method KCategorizedView::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* KCategorizedView_RectForIndex(const KCategorizedView* self, const QModelIndex* index) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QRect(vkcategorizedview->rectForIndex(*index));
    qFatal("Error: Protected method KCategorizedView::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_SetPositionForIndex(KCategorizedView* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method KCategorizedView::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedView_State(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return static_cast<int>(vkcategorizedview->VirtualKCategorizedView::state());
    } else
        qFatal("Error: Protected method KCategorizedView::state called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_SetState(KCategorizedView* self, int state) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::setState(static_cast<VirtualKCategorizedView::State>(state));
    } else
        qFatal("Error: Protected method KCategorizedView::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_ScheduleDelayedItemsLayout(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KCategorizedView::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_ExecuteDelayedItemsLayout(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method KCategorizedView::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_SetDirtyRegion(KCategorizedView* self, const QRegion* region) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method KCategorizedView::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_ScrollDirtyRegion(KCategorizedView* self, int dx, int dy) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method KCategorizedView::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* KCategorizedView_DirtyRegionOffset(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QPoint(vkcategorizedview->dirtyRegionOffset());
    qFatal("Error: Protected method KCategorizedView::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_StartAutoScroll(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::startAutoScroll();
    } else
        qFatal("Error: Protected method KCategorizedView::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_StopAutoScroll(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::stopAutoScroll();
    } else
        qFatal("Error: Protected method KCategorizedView::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_DoAutoScroll(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::doAutoScroll();
    } else
        qFatal("Error: Protected method KCategorizedView::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedView_DropIndicatorPosition(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return static_cast<int>(vkcategorizedview->VirtualKCategorizedView::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method KCategorizedView::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_SetViewportMargins(KCategorizedView* self, int left, int top, int right, int bottom) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KCategorizedView::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KCategorizedView_ViewportMargins(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self)))
        return new QMargins(vkcategorizedview->viewportMargins());
    qFatal("Error: Protected method KCategorizedView::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_DrawFrame(KCategorizedView* self, QPainter* param1) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::drawFrame(param1);
    } else
        qFatal("Error: Protected method KCategorizedView::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_UpdateMicroFocus(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::updateMicroFocus();
    } else
        qFatal("Error: Protected method KCategorizedView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_Create(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::create();
    } else
        qFatal("Error: Protected method KCategorizedView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KCategorizedView_Destroy(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        vkcategorizedview->VirtualKCategorizedView::destroy();
    } else
        qFatal("Error: Protected method KCategorizedView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedView_FocusNextChild(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->VirtualKCategorizedView::focusNextChild();
    } else
        qFatal("Error: Protected method KCategorizedView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedView_FocusPreviousChild(KCategorizedView* self) {
    if (auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self)) {
        return vkcategorizedview->VirtualKCategorizedView::focusPreviousChild();
    } else
        qFatal("Error: Protected method KCategorizedView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCategorizedView_Sender(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->VirtualKCategorizedView::sender();
    } else
        qFatal("Error: Protected method KCategorizedView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedView_SenderSignalIndex(const KCategorizedView* self) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->VirtualKCategorizedView::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCategorizedView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategorizedView_Receivers(const KCategorizedView* self, const char* signal) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->VirtualKCategorizedView::receivers(signal);
    } else
        qFatal("Error: Protected method KCategorizedView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategorizedView_IsSignalConnected(const KCategorizedView* self, const QMetaMethod* signal) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->VirtualKCategorizedView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCategorizedView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KCategorizedView_GetDecodedMetricF(const KCategorizedView* self, int metricA, int metricB) {
    if (auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self))) {
        return vkcategorizedview->VirtualKCategorizedView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KCategorizedView::getDecodedMetricF called without a directly constructed type");
}

void KCategorizedView_Delete(KCategorizedView* self) {
    delete self;
}
