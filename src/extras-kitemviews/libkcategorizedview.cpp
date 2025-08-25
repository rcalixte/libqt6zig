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
#include <QByteArray>
#include <cstring>
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
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCategorizedView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategorizedView_OnMetacall(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Metacall_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCategorizedView_QBaseMetacall(KCategorizedView* self, int param1, int param2, void** param3) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Metacall_IsBase(true);
        return vkcategorizedview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCategorizedView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCategorizedView_Tr(const char* s) {
    QString _ret = KCategorizedView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KCategorizedView_SetGridSize(KCategorizedView* self, const QSize* size) {
    self->setGridSize(*size);
}

void KCategorizedView_SetGridSizeOwn(KCategorizedView* self, const QSize* size) {
    self->setGridSizeOwn(*size);
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
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
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
    QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QModelIndex(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KCategorizedView_CategorySpacingChanged(KCategorizedView* self, int spacing) {
    self->categorySpacingChanged(static_cast<int>(spacing));
}

void KCategorizedView_Connect_CategorySpacingChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, int) = reinterpret_cast<void (*)(KCategorizedView*, int)>(slot);
    KCategorizedView::connect(self, &KCategorizedView::categorySpacingChanged, [self, slotFunc](int spacing) {
        int sigval1 = spacing;
        slotFunc(self, sigval1);
    });
}

void KCategorizedView_AlternatingBlockColorsChanged(KCategorizedView* self, bool enable) {
    self->alternatingBlockColorsChanged(enable);
}

void KCategorizedView_Connect_AlternatingBlockColorsChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, bool) = reinterpret_cast<void (*)(KCategorizedView*, bool)>(slot);
    KCategorizedView::connect(self, &KCategorizedView::alternatingBlockColorsChanged, [self, slotFunc](bool enable) {
        bool sigval1 = enable;
        slotFunc(self, sigval1);
    });
}

void KCategorizedView_CollapsibleBlocksChanged(KCategorizedView* self, bool enable) {
    self->collapsibleBlocksChanged(enable);
}

void KCategorizedView_Connect_CollapsibleBlocksChanged(KCategorizedView* self, intptr_t slot) {
    void (*slotFunc)(KCategorizedView*, bool) = reinterpret_cast<void (*)(KCategorizedView*, bool)>(slot);
    KCategorizedView::connect(self, &KCategorizedView::collapsibleBlocksChanged, [self, slotFunc](bool enable) {
        bool sigval1 = enable;
        slotFunc(self, sigval1);
    });
}

libqt_string KCategorizedView_Tr2(const char* s, const char* c) {
    QString _ret = KCategorizedView::tr(s, c);
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
    QString _ret = KCategorizedView::tr(s, c, static_cast<int>(n));
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
void KCategorizedView_SetModel(KCategorizedView* self, QAbstractItemModel* model) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setModel(model);
    } else {
        self->KCategorizedView::setModel(model);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetModel(KCategorizedView* self, QAbstractItemModel* model) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetModel_IsBase(true);
        vkcategorizedview->setModel(model);
    } else {
        self->KCategorizedView::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetModel(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetModel_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KCategorizedView_VisualRect(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QRect(vkcategorizedview->visualRect(*index));
    } else {
        return new QRect(((VirtualKCategorizedView*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* KCategorizedView_QBaseVisualRect(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VisualRect_IsBase(true);
        return new QRect(vkcategorizedview->visualRect(*index));
    } else {
        return new QRect(((VirtualKCategorizedView*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVisualRect(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VisualRect_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedView_IndexAt(const KCategorizedView* self, const QPoint* point) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QModelIndex(vkcategorizedview->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualKCategorizedView*)self)->indexAt(*point));
    }
}

// Base class handler implementation
QModelIndex* KCategorizedView_QBaseIndexAt(const KCategorizedView* self, const QPoint* point) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IndexAt_IsBase(true);
        return new QModelIndex(vkcategorizedview->indexAt(*point));
    } else {
        return new QModelIndex(((VirtualKCategorizedView*)self)->indexAt(*point));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnIndexAt(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IndexAt_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_Reset(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->reset();
    } else {
        self->KCategorizedView::reset();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseReset(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Reset_IsBase(true);
        vkcategorizedview->reset();
    } else {
        self->KCategorizedView::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnReset(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Reset_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_PaintEvent(KCategorizedView* self, QPaintEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->paintEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBasePaintEvent(KCategorizedView* self, QPaintEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_PaintEvent_IsBase(true);
        vkcategorizedview->paintEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnPaintEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_PaintEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ResizeEvent(KCategorizedView* self, QResizeEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->resizeEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseResizeEvent(KCategorizedView* self, QResizeEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ResizeEvent_IsBase(true);
        vkcategorizedview->resizeEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnResizeEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ResizeEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetSelection(KCategorizedView* self, const QRect* rect, int flags) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else {
        ((VirtualKCategorizedView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetSelection(KCategorizedView* self, const QRect* rect, int flags) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetSelection_IsBase(true);
        vkcategorizedview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else {
        ((VirtualKCategorizedView*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetSelection(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetSelection_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_MouseMoveEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->mouseMoveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseMouseMoveEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseMoveEvent_IsBase(true);
        vkcategorizedview->mouseMoveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseMoveEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseMoveEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_MousePressEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->mousePressEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseMousePressEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MousePressEvent_IsBase(true);
        vkcategorizedview->mousePressEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMousePressEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MousePressEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_MouseReleaseEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->mouseReleaseEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseMouseReleaseEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseReleaseEvent_IsBase(true);
        vkcategorizedview->mouseReleaseEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseReleaseEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_LeaveEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->leaveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseLeaveEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_LeaveEvent_IsBase(true);
        vkcategorizedview->leaveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnLeaveEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_LeaveEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_StartDrag(KCategorizedView* self, int supportedActions) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualKCategorizedView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseStartDrag(KCategorizedView* self, int supportedActions) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StartDrag_IsBase(true);
        vkcategorizedview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualKCategorizedView*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnStartDrag(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StartDrag_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DragMoveEvent(KCategorizedView* self, QDragMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->dragMoveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDragMoveEvent(KCategorizedView* self, QDragMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragMoveEvent_IsBase(true);
        vkcategorizedview->dragMoveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragMoveEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragMoveEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DragEnterEvent(KCategorizedView* self, QDragEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->dragEnterEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDragEnterEvent(KCategorizedView* self, QDragEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragEnterEvent_IsBase(true);
        vkcategorizedview->dragEnterEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragEnterEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragEnterEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->dragLeaveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDragLeaveEvent(KCategorizedView* self, QDragLeaveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragLeaveEvent_IsBase(true);
        vkcategorizedview->dragLeaveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDragLeaveEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DragLeaveEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DropEvent(KCategorizedView* self, QDropEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->dropEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDropEvent(KCategorizedView* self, QDropEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DropEvent_IsBase(true);
        vkcategorizedview->dropEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDropEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DropEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KCategorizedView_MoveCursor(KCategorizedView* self, int cursorAction, int modifiers) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QModelIndex(vkcategorizedview->moveCursor(static_cast<VirtualKCategorizedView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KCategorizedView_QBaseMoveCursor(KCategorizedView* self, int cursorAction, int modifiers) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MoveCursor_IsBase(true);
        return new QModelIndex(vkcategorizedview->moveCursor(static_cast<VirtualKCategorizedView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMoveCursor(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MoveCursor_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_RowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCategorizedView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseRowsAboutToBeRemoved(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RowsAboutToBeRemoved_IsBase(true);
        vkcategorizedview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCategorizedView*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRowsAboutToBeRemoved(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_UpdateGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->updateGeometries();
    } else {
        ((VirtualKCategorizedView*)self)->updateGeometries();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseUpdateGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateGeometries_IsBase(true);
        vkcategorizedview->updateGeometries();
    } else {
        ((VirtualKCategorizedView*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateGeometries(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateGeometries_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_CurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->currentChanged(*current, *previous);
    } else {
        ((VirtualKCategorizedView*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCurrentChanged(KCategorizedView* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CurrentChanged_IsBase(true);
        vkcategorizedview->currentChanged(*current, *previous);
    } else {
        ((VirtualKCategorizedView*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCurrentChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CurrentChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualKCategorizedView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDataChanged(KCategorizedView* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DataChanged_IsBase(true);
        vkcategorizedview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualKCategorizedView*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDataChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DataChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_RowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCategorizedView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseRowsInserted(KCategorizedView* self, const QModelIndex* parent, int start, int end) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RowsInserted_IsBase(true);
        vkcategorizedview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualKCategorizedView*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRowsInserted(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RowsInserted_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SlotLayoutChanged(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->slotLayoutChanged();
    } else {
        ((VirtualKCategorizedView*)self)->slotLayoutChanged();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSlotLayoutChanged(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SlotLayoutChanged_IsBase(true);
        vkcategorizedview->slotLayoutChanged();
    } else {
        ((VirtualKCategorizedView*)self)->slotLayoutChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSlotLayoutChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SlotLayoutChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SlotLayoutChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ScrollTo(KCategorizedView* self, const QModelIndex* index, int hint) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KCategorizedView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseScrollTo(KCategorizedView* self, const QModelIndex* index, int hint) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollTo_IsBase(true);
        vkcategorizedview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->KCategorizedView::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScrollTo(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollTo_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DoItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->doItemsLayout();
    } else {
        self->KCategorizedView::doItemsLayout();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDoItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DoItemsLayout_IsBase(true);
        vkcategorizedview->doItemsLayout();
    } else {
        self->KCategorizedView::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDoItemsLayout(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DoItemsLayout_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetRootIndex(KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setRootIndex(*index);
    } else {
        self->KCategorizedView::setRootIndex(*index);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetRootIndex(KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetRootIndex_IsBase(true);
        vkcategorizedview->setRootIndex(*index);
    } else {
        self->KCategorizedView::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetRootIndex(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetRootIndex_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_Event(KCategorizedView* self, QEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->event(e);
    } else {
        return ((VirtualKCategorizedView*)self)->event(e);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseEvent(KCategorizedView* self, QEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Event_IsBase(true);
        return vkcategorizedview->event(e);
    } else {
        return ((VirtualKCategorizedView*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Event_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ScrollContentsBy(KCategorizedView* self, int dx, int dy) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCategorizedView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseScrollContentsBy(KCategorizedView* self, int dx, int dy) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollContentsBy_IsBase(true);
        vkcategorizedview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCategorizedView*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScrollContentsBy(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollContentsBy_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_WheelEvent(KCategorizedView* self, QWheelEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->wheelEvent(e);
    } else {
        ((VirtualKCategorizedView*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseWheelEvent(KCategorizedView* self, QWheelEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_WheelEvent_IsBase(true);
        vkcategorizedview->wheelEvent(e);
    } else {
        ((VirtualKCategorizedView*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnWheelEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_WheelEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_TimerEvent(KCategorizedView* self, QTimerEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->timerEvent(e);
    } else {
        ((VirtualKCategorizedView*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseTimerEvent(KCategorizedView* self, QTimerEvent* e) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_TimerEvent_IsBase(true);
        vkcategorizedview->timerEvent(e);
    } else {
        ((VirtualKCategorizedView*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnTimerEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_TimerEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_InitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->initViewItemOption(option);
    } else {
        ((VirtualKCategorizedView*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseInitViewItemOption(const KCategorizedView* self, QStyleOptionViewItem* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitViewItemOption_IsBase(true);
        vkcategorizedview->initViewItemOption(option);
    } else {
        ((VirtualKCategorizedView*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitViewItemOption(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitViewItemOption_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_HorizontalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->horizontalOffset();
    } else {
        return ((VirtualKCategorizedView*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int KCategorizedView_QBaseHorizontalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalOffset_IsBase(true);
        return vkcategorizedview->horizontalOffset();
    } else {
        return ((VirtualKCategorizedView*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalOffset(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalOffset_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_VerticalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->verticalOffset();
    } else {
        return ((VirtualKCategorizedView*)self)->verticalOffset();
    }
}

// Base class handler implementation
int KCategorizedView_QBaseVerticalOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalOffset_IsBase(true);
        return vkcategorizedview->verticalOffset();
    } else {
        return ((VirtualKCategorizedView*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalOffset(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalOffset_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* KCategorizedView_VisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QRegion(vkcategorizedview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* KCategorizedView_QBaseVisualRegionForSelection(const KCategorizedView* self, const QItemSelection* selection) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vkcategorizedview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVisualRegionForSelection(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KCategorizedView_SelectedIndexes(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        QList<QModelIndex> _ret = vkcategorizedview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualKCategorizedView*)self)->selectedIndexes();
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
libqt_list /* of QModelIndex* */ KCategorizedView_QBaseSelectedIndexes(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vkcategorizedview->selectedIndexes();
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
        QList<QModelIndex> _ret = ((VirtualKCategorizedView*)self)->selectedIndexes();
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
void KCategorizedView_OnSelectedIndexes(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectedIndexes_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_IsIndexHidden(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->isIndexHidden(*index);
    } else {
        return ((VirtualKCategorizedView*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseIsIndexHidden(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IsIndexHidden_IsBase(true);
        return vkcategorizedview->isIndexHidden(*index);
    } else {
        return ((VirtualKCategorizedView*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnIsIndexHidden(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IsIndexHidden_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKCategorizedView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSelectionChanged(KCategorizedView* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectionChanged_IsBase(true);
        vkcategorizedview->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualKCategorizedView*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectionChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectionChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCategorizedView_ViewportSizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QSize(vkcategorizedview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KCategorizedView_QBaseViewportSizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportSizeHint_IsBase(true);
        return new QSize(vkcategorizedview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnViewportSizeHint(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportSizeHint_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetSelectionModel(KCategorizedView* self, QItemSelectionModel* selectionModel) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setSelectionModel(selectionModel);
    } else {
        self->KCategorizedView::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetSelectionModel(KCategorizedView* self, QItemSelectionModel* selectionModel) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetSelectionModel_IsBase(true);
        vkcategorizedview->setSelectionModel(selectionModel);
    } else {
        self->KCategorizedView::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetSelectionModel(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetSelectionModel_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_KeyboardSearch(KCategorizedView* self, const libqt_string search) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->keyboardSearch(search_QString);
    } else {
        self->KCategorizedView::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseKeyboardSearch(KCategorizedView* self, const libqt_string search) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyboardSearch_IsBase(true);
        vkcategorizedview->keyboardSearch(search_QString);
    } else {
        self->KCategorizedView::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyboardSearch(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyboardSearch_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_SizeHintForRow(const KCategorizedView* self, int row) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KCategorizedView::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int KCategorizedView_QBaseSizeHintForRow(const KCategorizedView* self, int row) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHintForRow_IsBase(true);
        return vkcategorizedview->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->KCategorizedView::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHintForRow(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHintForRow_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_SizeHintForColumn(const KCategorizedView* self, int column) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KCategorizedView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int KCategorizedView_QBaseSizeHintForColumn(const KCategorizedView* self, int column) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHintForColumn_IsBase(true);
        return vkcategorizedview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->KCategorizedView::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHintForColumn(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHintForColumn_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* KCategorizedView_ItemDelegateForIndex(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->itemDelegateForIndex(*index);
    } else {
        return self->KCategorizedView::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* KCategorizedView_QBaseItemDelegateForIndex(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ItemDelegateForIndex_IsBase(true);
        return vkcategorizedview->itemDelegateForIndex(*index);
    } else {
        return self->KCategorizedView::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnItemDelegateForIndex(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KCategorizedView_InputMethodQuery(const KCategorizedView* self, int query) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QVariant(vkcategorizedview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKCategorizedView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* KCategorizedView_QBaseInputMethodQuery(const KCategorizedView* self, int query) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InputMethodQuery_IsBase(true);
        return new QVariant(vkcategorizedview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualKCategorizedView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInputMethodQuery(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InputMethodQuery_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SelectAll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->selectAll();
    } else {
        self->KCategorizedView::selectAll();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSelectAll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectAll_IsBase(true);
        vkcategorizedview->selectAll();
    } else {
        self->KCategorizedView::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectAll(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectAll_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_UpdateEditorData(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->updateEditorData();
    } else {
        ((VirtualKCategorizedView*)self)->updateEditorData();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseUpdateEditorData(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateEditorData_IsBase(true);
        vkcategorizedview->updateEditorData();
    } else {
        ((VirtualKCategorizedView*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateEditorData(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateEditorData_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_UpdateEditorGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->updateEditorGeometries();
    } else {
        ((VirtualKCategorizedView*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseUpdateEditorGeometries(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateEditorGeometries_IsBase(true);
        vkcategorizedview->updateEditorGeometries();
    } else {
        ((VirtualKCategorizedView*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateEditorGeometries(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_VerticalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCategorizedView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseVerticalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalScrollbarAction_IsBase(true);
        vkcategorizedview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCategorizedView*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalScrollbarAction(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_HorizontalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCategorizedView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseHorizontalScrollbarAction(KCategorizedView* self, int action) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalScrollbarAction_IsBase(true);
        vkcategorizedview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualKCategorizedView*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalScrollbarAction(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_VerticalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCategorizedView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseVerticalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalScrollbarValueChanged_IsBase(true);
        vkcategorizedview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCategorizedView*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnVerticalScrollbarValueChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_HorizontalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCategorizedView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseHorizontalScrollbarValueChanged(KCategorizedView* self, int value) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalScrollbarValueChanged_IsBase(true);
        vkcategorizedview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualKCategorizedView*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHorizontalScrollbarValueChanged(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_CloseEditor(KCategorizedView* self, QWidget* editor, int hint) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKCategorizedView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCloseEditor(KCategorizedView* self, QWidget* editor, int hint) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CloseEditor_IsBase(true);
        vkcategorizedview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualKCategorizedView*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCloseEditor(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CloseEditor_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_CommitData(KCategorizedView* self, QWidget* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->commitData(editor);
    } else {
        ((VirtualKCategorizedView*)self)->commitData(editor);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCommitData(KCategorizedView* self, QWidget* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CommitData_IsBase(true);
        vkcategorizedview->commitData(editor);
    } else {
        ((VirtualKCategorizedView*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCommitData(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CommitData_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_EditorDestroyed(KCategorizedView* self, QObject* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->editorDestroyed(editor);
    } else {
        ((VirtualKCategorizedView*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseEditorDestroyed(KCategorizedView* self, QObject* editor) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EditorDestroyed_IsBase(true);
        vkcategorizedview->editorDestroyed(editor);
    } else {
        ((VirtualKCategorizedView*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEditorDestroyed(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EditorDestroyed_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_Edit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKCategorizedView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseEdit2(KCategorizedView* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Edit2_IsBase(true);
        return vkcategorizedview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualKCategorizedView*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEdit2(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Edit2_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_SelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return static_cast<int>(vkcategorizedview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int KCategorizedView_QBaseSelectionCommand(const KCategorizedView* self, const QModelIndex* index, const QEvent* event) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectionCommand_IsBase(true);
        return static_cast<int>(vkcategorizedview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSelectionCommand(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SelectionCommand_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_FocusNextPrevChild(KCategorizedView* self, bool next) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->focusNextPrevChild(next);
    } else {
        return ((VirtualKCategorizedView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseFocusNextPrevChild(KCategorizedView* self, bool next) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusNextPrevChild_IsBase(true);
        return vkcategorizedview->focusNextPrevChild(next);
    } else {
        return ((VirtualKCategorizedView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusNextPrevChild(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_ViewportEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->viewportEvent(event);
    } else {
        return ((VirtualKCategorizedView*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseViewportEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportEvent_IsBase(true);
        return vkcategorizedview->viewportEvent(event);
    } else {
        return ((VirtualKCategorizedView*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnViewportEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_MouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseMouseDoubleClickEvent(KCategorizedView* self, QMouseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseDoubleClickEvent_IsBase(true);
        vkcategorizedview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMouseDoubleClickEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_FocusInEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->focusInEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseFocusInEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusInEvent_IsBase(true);
        vkcategorizedview->focusInEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusInEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusInEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_FocusOutEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->focusOutEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseFocusOutEvent(KCategorizedView* self, QFocusEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusOutEvent_IsBase(true);
        vkcategorizedview->focusOutEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusOutEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusOutEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_KeyPressEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->keyPressEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseKeyPressEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyPressEvent_IsBase(true);
        vkcategorizedview->keyPressEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyPressEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyPressEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_InputMethodEvent(KCategorizedView* self, QInputMethodEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->inputMethodEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseInputMethodEvent(KCategorizedView* self, QInputMethodEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InputMethodEvent_IsBase(true);
        vkcategorizedview->inputMethodEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInputMethodEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InputMethodEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_EventFilter(KCategorizedView* self, QObject* object, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->eventFilter(object, event);
    } else {
        return ((VirtualKCategorizedView*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseEventFilter(KCategorizedView* self, QObject* object, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EventFilter_IsBase(true);
        return vkcategorizedview->eventFilter(object, event);
    } else {
        return ((VirtualKCategorizedView*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEventFilter(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EventFilter_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCategorizedView_MinimumSizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QSize(vkcategorizedview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCategorizedView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KCategorizedView_QBaseMinimumSizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MinimumSizeHint_IsBase(true);
        return new QSize(vkcategorizedview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKCategorizedView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMinimumSizeHint(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MinimumSizeHint_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCategorizedView_SizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QSize(vkcategorizedview->sizeHint());
    } else {
        return new QSize(((VirtualKCategorizedView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KCategorizedView_QBaseSizeHint(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHint_IsBase(true);
        return new QSize(vkcategorizedview->sizeHint());
    } else {
        return new QSize(((VirtualKCategorizedView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSizeHint(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SizeHint_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetupViewport(KCategorizedView* self, QWidget* viewport) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setupViewport(viewport);
    } else {
        self->KCategorizedView::setupViewport(viewport);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetupViewport(KCategorizedView* self, QWidget* viewport) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetupViewport_IsBase(true);
        vkcategorizedview->setupViewport(viewport);
    } else {
        self->KCategorizedView::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetupViewport(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetupViewport_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->contextMenuEvent(param1);
    } else {
        ((VirtualKCategorizedView*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseContextMenuEvent(KCategorizedView* self, QContextMenuEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ContextMenuEvent_IsBase(true);
        vkcategorizedview->contextMenuEvent(param1);
    } else {
        ((VirtualKCategorizedView*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnContextMenuEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ContextMenuEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ChangeEvent(KCategorizedView* self, QEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->changeEvent(param1);
    } else {
        ((VirtualKCategorizedView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseChangeEvent(KCategorizedView* self, QEvent* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ChangeEvent_IsBase(true);
        vkcategorizedview->changeEvent(param1);
    } else {
        ((VirtualKCategorizedView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnChangeEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ChangeEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_InitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->initStyleOption(option);
    } else {
        ((VirtualKCategorizedView*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseInitStyleOption(const KCategorizedView* self, QStyleOptionFrame* option) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitStyleOption_IsBase(true);
        vkcategorizedview->initStyleOption(option);
    } else {
        ((VirtualKCategorizedView*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitStyleOption(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitStyleOption_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_DevType(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->devType();
    } else {
        return self->KCategorizedView::devType();
    }
}

// Base class handler implementation
int KCategorizedView_QBaseDevType(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DevType_IsBase(true);
        return vkcategorizedview->devType();
    } else {
        return self->KCategorizedView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDevType(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DevType_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetVisible(KCategorizedView* self, bool visible) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setVisible(visible);
    } else {
        self->KCategorizedView::setVisible(visible);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetVisible(KCategorizedView* self, bool visible) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetVisible_IsBase(true);
        vkcategorizedview->setVisible(visible);
    } else {
        self->KCategorizedView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetVisible(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetVisible_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_HeightForWidth(const KCategorizedView* self, int param1) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCategorizedView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KCategorizedView_QBaseHeightForWidth(const KCategorizedView* self, int param1) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HeightForWidth_IsBase(true);
        return vkcategorizedview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KCategorizedView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHeightForWidth(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HeightForWidth_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_HasHeightForWidth(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->hasHeightForWidth();
    } else {
        return self->KCategorizedView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseHasHeightForWidth(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HasHeightForWidth_IsBase(true);
        return vkcategorizedview->hasHeightForWidth();
    } else {
        return self->KCategorizedView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHasHeightForWidth(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HasHeightForWidth_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KCategorizedView_PaintEngine(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->paintEngine();
    } else {
        return self->KCategorizedView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KCategorizedView_QBasePaintEngine(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_PaintEngine_IsBase(true);
        return vkcategorizedview->paintEngine();
    } else {
        return self->KCategorizedView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnPaintEngine(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_PaintEngine_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_KeyReleaseEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->keyReleaseEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseKeyReleaseEvent(KCategorizedView* self, QKeyEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyReleaseEvent_IsBase(true);
        vkcategorizedview->keyReleaseEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnKeyReleaseEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_EnterEvent(KCategorizedView* self, QEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->enterEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseEnterEvent(KCategorizedView* self, QEnterEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EnterEvent_IsBase(true);
        vkcategorizedview->enterEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnEnterEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_EnterEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_MoveEvent(KCategorizedView* self, QMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->moveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseMoveEvent(KCategorizedView* self, QMoveEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MoveEvent_IsBase(true);
        vkcategorizedview->moveEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMoveEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_MoveEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_CloseEvent(KCategorizedView* self, QCloseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->closeEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCloseEvent(KCategorizedView* self, QCloseEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CloseEvent_IsBase(true);
        vkcategorizedview->closeEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCloseEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CloseEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_TabletEvent(KCategorizedView* self, QTabletEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->tabletEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseTabletEvent(KCategorizedView* self, QTabletEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_TabletEvent_IsBase(true);
        vkcategorizedview->tabletEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnTabletEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_TabletEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ActionEvent(KCategorizedView* self, QActionEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->actionEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseActionEvent(KCategorizedView* self, QActionEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ActionEvent_IsBase(true);
        vkcategorizedview->actionEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnActionEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ActionEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ShowEvent(KCategorizedView* self, QShowEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->showEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseShowEvent(KCategorizedView* self, QShowEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ShowEvent_IsBase(true);
        vkcategorizedview->showEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnShowEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ShowEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_HideEvent(KCategorizedView* self, QHideEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->hideEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseHideEvent(KCategorizedView* self, QHideEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HideEvent_IsBase(true);
        vkcategorizedview->hideEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnHideEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_HideEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_NativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCategorizedView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseNativeEvent(KCategorizedView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_NativeEvent_IsBase(true);
        return vkcategorizedview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKCategorizedView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnNativeEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_NativeEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_Metric(const KCategorizedView* self, int param1) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCategorizedView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KCategorizedView_QBaseMetric(const KCategorizedView* self, int param1) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Metric_IsBase(true);
        return vkcategorizedview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKCategorizedView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnMetric(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Metric_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_InitPainter(const KCategorizedView* self, QPainter* painter) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->initPainter(painter);
    } else {
        ((VirtualKCategorizedView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseInitPainter(const KCategorizedView* self, QPainter* painter) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitPainter_IsBase(true);
        vkcategorizedview->initPainter(painter);
    } else {
        ((VirtualKCategorizedView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnInitPainter(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_InitPainter_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KCategorizedView_Redirected(const KCategorizedView* self, QPoint* offset) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->redirected(offset);
    } else {
        return ((VirtualKCategorizedView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KCategorizedView_QBaseRedirected(const KCategorizedView* self, QPoint* offset) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Redirected_IsBase(true);
        return vkcategorizedview->redirected(offset);
    } else {
        return ((VirtualKCategorizedView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRedirected(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Redirected_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KCategorizedView_SharedPainter(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->sharedPainter();
    } else {
        return ((VirtualKCategorizedView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KCategorizedView_QBaseSharedPainter(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SharedPainter_IsBase(true);
        return vkcategorizedview->sharedPainter();
    } else {
        return ((VirtualKCategorizedView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSharedPainter(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SharedPainter_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ChildEvent(KCategorizedView* self, QChildEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->childEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseChildEvent(KCategorizedView* self, QChildEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ChildEvent_IsBase(true);
        vkcategorizedview->childEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnChildEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ChildEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_CustomEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->customEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCustomEvent(KCategorizedView* self, QEvent* event) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CustomEvent_IsBase(true);
        vkcategorizedview->customEvent(event);
    } else {
        ((VirtualKCategorizedView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCustomEvent(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_CustomEvent_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ConnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->connectNotify(*signal);
    } else {
        ((VirtualKCategorizedView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseConnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ConnectNotify_IsBase(true);
        vkcategorizedview->connectNotify(*signal);
    } else {
        ((VirtualKCategorizedView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnConnectNotify(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ConnectNotify_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DisconnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->disconnectNotify(*signal);
    } else {
        ((VirtualKCategorizedView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDisconnectNotify(KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DisconnectNotify_IsBase(true);
        vkcategorizedview->disconnectNotify(*signal);
    } else {
        ((VirtualKCategorizedView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDisconnectNotify(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DisconnectNotify_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ResizeContents(KCategorizedView* self, int width, int height) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKCategorizedView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseResizeContents(KCategorizedView* self, int width, int height) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ResizeContents_IsBase(true);
        vkcategorizedview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualKCategorizedView*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnResizeContents(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ResizeContents_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCategorizedView_ContentsSize(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QSize(vkcategorizedview->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* KCategorizedView_QBaseContentsSize(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ContentsSize_IsBase(true);
        return new QSize(vkcategorizedview->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnContentsSize(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ContentsSize_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* KCategorizedView_RectForIndex(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QRect(vkcategorizedview->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* KCategorizedView_QBaseRectForIndex(const KCategorizedView* self, const QModelIndex* index) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RectForIndex_IsBase(true);
        return new QRect(vkcategorizedview->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnRectForIndex(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_RectForIndex_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetPositionForIndex(KCategorizedView* self, const QPoint* position, const QModelIndex* index) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKCategorizedView*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetPositionForIndex(KCategorizedView* self, const QPoint* position, const QModelIndex* index) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetPositionForIndex_IsBase(true);
        vkcategorizedview->setPositionForIndex(*position, *index);
    } else {
        ((VirtualKCategorizedView*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetPositionForIndex(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetPositionForIndex_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_State(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return static_cast<int>(vkcategorizedview->state());
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->state());
    }
}

// Base class handler implementation
int KCategorizedView_QBaseState(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_State_IsBase(true);
        return static_cast<int>(vkcategorizedview->state());
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnState(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_State_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetState(KCategorizedView* self, int state) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setState(static_cast<VirtualKCategorizedView::State>(state));
    } else {
        ((VirtualKCategorizedView*)self)->setState(static_cast<VirtualKCategorizedView::State>(state));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetState(KCategorizedView* self, int state) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetState_IsBase(true);
        vkcategorizedview->setState(static_cast<VirtualKCategorizedView::State>(state));
    } else {
        ((VirtualKCategorizedView*)self)->setState(static_cast<VirtualKCategorizedView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetState(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetState_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ScheduleDelayedItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKCategorizedView*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseScheduleDelayedItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScheduleDelayedItemsLayout_IsBase(true);
        vkcategorizedview->scheduleDelayedItemsLayout();
    } else {
        ((VirtualKCategorizedView*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScheduleDelayedItemsLayout(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ExecuteDelayedItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->executeDelayedItemsLayout();
    } else {
        ((VirtualKCategorizedView*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseExecuteDelayedItemsLayout(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ExecuteDelayedItemsLayout_IsBase(true);
        vkcategorizedview->executeDelayedItemsLayout();
    } else {
        ((VirtualKCategorizedView*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnExecuteDelayedItemsLayout(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetDirtyRegion(KCategorizedView* self, const QRegion* region) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setDirtyRegion(*region);
    } else {
        ((VirtualKCategorizedView*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetDirtyRegion(KCategorizedView* self, const QRegion* region) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetDirtyRegion_IsBase(true);
        vkcategorizedview->setDirtyRegion(*region);
    } else {
        ((VirtualKCategorizedView*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetDirtyRegion(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetDirtyRegion_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_ScrollDirtyRegion(KCategorizedView* self, int dx, int dy) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCategorizedView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseScrollDirtyRegion(KCategorizedView* self, int dx, int dy) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollDirtyRegion_IsBase(true);
        vkcategorizedview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKCategorizedView*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnScrollDirtyRegion(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* KCategorizedView_DirtyRegionOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QPoint(vkcategorizedview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* KCategorizedView_QBaseDirtyRegionOffset(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vkcategorizedview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDirtyRegionOffset(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_StartAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->startAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseStartAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StartAutoScroll_IsBase(true);
        vkcategorizedview->startAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnStartAutoScroll(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StartAutoScroll_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_StopAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->stopAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseStopAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StopAutoScroll_IsBase(true);
        vkcategorizedview->stopAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnStopAutoScroll(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_StopAutoScroll_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DoAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->doAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDoAutoScroll(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DoAutoScroll_IsBase(true);
        vkcategorizedview->doAutoScroll();
    } else {
        ((VirtualKCategorizedView*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDoAutoScroll(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DoAutoScroll_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_DropIndicatorPosition(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return static_cast<int>(vkcategorizedview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int KCategorizedView_QBaseDropIndicatorPosition(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vkcategorizedview->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualKCategorizedView*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDropIndicatorPosition(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_SetViewportMargins(KCategorizedView* self, int left, int top, int right, int bottom) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKCategorizedView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KCategorizedView_QBaseSetViewportMargins(KCategorizedView* self, int left, int top, int right, int bottom) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetViewportMargins_IsBase(true);
        vkcategorizedview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKCategorizedView*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSetViewportMargins(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SetViewportMargins_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KCategorizedView_ViewportMargins(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return new QMargins(vkcategorizedview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KCategorizedView_QBaseViewportMargins(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportMargins_IsBase(true);
        return new QMargins(vkcategorizedview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnViewportMargins(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_ViewportMargins_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_DrawFrame(KCategorizedView* self, QPainter* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->drawFrame(param1);
    } else {
        ((VirtualKCategorizedView*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDrawFrame(KCategorizedView* self, QPainter* param1) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DrawFrame_IsBase(true);
        vkcategorizedview->drawFrame(param1);
    } else {
        ((VirtualKCategorizedView*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDrawFrame(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_DrawFrame_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_UpdateMicroFocus(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->updateMicroFocus();
    } else {
        ((VirtualKCategorizedView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseUpdateMicroFocus(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateMicroFocus_IsBase(true);
        vkcategorizedview->updateMicroFocus();
    } else {
        ((VirtualKCategorizedView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnUpdateMicroFocus(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_Create(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->create();
    } else {
        ((VirtualKCategorizedView*)self)->create();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseCreate(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Create_IsBase(true);
        vkcategorizedview->create();
    } else {
        ((VirtualKCategorizedView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnCreate(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Create_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategorizedView_Destroy(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->destroy();
    } else {
        ((VirtualKCategorizedView*)self)->destroy();
    }
}

// Base class handler implementation
void KCategorizedView_QBaseDestroy(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Destroy_IsBase(true);
        vkcategorizedview->destroy();
    } else {
        ((VirtualKCategorizedView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnDestroy(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Destroy_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_FocusNextChild(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->focusNextChild();
    } else {
        return ((VirtualKCategorizedView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseFocusNextChild(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusNextChild_IsBase(true);
        return vkcategorizedview->focusNextChild();
    } else {
        return ((VirtualKCategorizedView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusNextChild(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusNextChild_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_FocusPreviousChild(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->focusPreviousChild();
    } else {
        return ((VirtualKCategorizedView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseFocusPreviousChild(KCategorizedView* self) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusPreviousChild_IsBase(true);
        return vkcategorizedview->focusPreviousChild();
    } else {
        return ((VirtualKCategorizedView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnFocusPreviousChild(KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = dynamic_cast<VirtualKCategorizedView*>(self);
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_FocusPreviousChild_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCategorizedView_Sender(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->sender();
    } else {
        return ((VirtualKCategorizedView*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCategorizedView_QBaseSender(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Sender_IsBase(true);
        return vkcategorizedview->sender();
    } else {
        return ((VirtualKCategorizedView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSender(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Sender_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_SenderSignalIndex(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->senderSignalIndex();
    } else {
        return ((VirtualKCategorizedView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCategorizedView_QBaseSenderSignalIndex(const KCategorizedView* self) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SenderSignalIndex_IsBase(true);
        return vkcategorizedview->senderSignalIndex();
    } else {
        return ((VirtualKCategorizedView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnSenderSignalIndex(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategorizedView_Receivers(const KCategorizedView* self, const char* signal) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->receivers(signal);
    } else {
        return ((VirtualKCategorizedView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCategorizedView_QBaseReceivers(const KCategorizedView* self, const char* signal) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Receivers_IsBase(true);
        return vkcategorizedview->receivers(signal);
    } else {
        return ((VirtualKCategorizedView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnReceivers(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_Receivers_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategorizedView_IsSignalConnected(const KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategorizedView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCategorizedView_QBaseIsSignalConnected(const KCategorizedView* self, const QMetaMethod* signal) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IsSignalConnected_IsBase(true);
        return vkcategorizedview->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategorizedView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnIsSignalConnected(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_IsSignalConnected_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KCategorizedView_GetDecodedMetricF(const KCategorizedView* self, int metricA, int metricB) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        return vkcategorizedview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCategorizedView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KCategorizedView_QBaseGetDecodedMetricF(const KCategorizedView* self, int metricA, int metricB) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_GetDecodedMetricF_IsBase(true);
        return vkcategorizedview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKCategorizedView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KCategorizedView_OnGetDecodedMetricF(const KCategorizedView* self, intptr_t slot) {
    auto* vkcategorizedview = const_cast<VirtualKCategorizedView*>(dynamic_cast<const VirtualKCategorizedView*>(self));
    if (vkcategorizedview && vkcategorizedview->isVirtualKCategorizedView) {
        vkcategorizedview->setKCategorizedView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKCategorizedView::KCategorizedView_GetDecodedMetricF_Callback>(slot));
    }
}

void KCategorizedView_Delete(KCategorizedView* self) {
    delete self;
}
