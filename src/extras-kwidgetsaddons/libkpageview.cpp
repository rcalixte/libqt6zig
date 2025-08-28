#include <KPageView>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
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
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpageview.h>
#include "libkpageview.h"
#include "libkpageview.hxx"

KPageView* KPageView_new(QWidget* parent) {
    return new VirtualKPageView(parent);
}

KPageView* KPageView_new2() {
    return new VirtualKPageView();
}

QMetaObject* KPageView_MetaObject(const KPageView* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageView_Metacast(KPageView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageView_Metacall(KPageView* self, int param1, int param2, void** param3) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageView*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageView_Tr(const char* s) {
    QString _ret = KPageView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageView_SetModel(KPageView* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* KPageView_Model(const KPageView* self) {
    return self->model();
}

void KPageView_SetFaceType(KPageView* self, int faceType) {
    self->setFaceType(static_cast<KPageView::FaceType>(faceType));
}

int KPageView_FaceType(const KPageView* self) {
    return static_cast<int>(self->faceType());
}

void KPageView_SetCurrentPage(KPageView* self, const QModelIndex* index) {
    self->setCurrentPage(*index);
}

QModelIndex* KPageView_CurrentPage(const KPageView* self) {
    return new QModelIndex(self->currentPage());
}

void KPageView_SetItemDelegate(KPageView* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* KPageView_ItemDelegate(const KPageView* self) {
    return self->itemDelegate();
}

void KPageView_SetDefaultWidget(KPageView* self, QWidget* widget) {
    self->setDefaultWidget(widget);
}

void KPageView_SetPageHeader(KPageView* self, QWidget* header) {
    self->setPageHeader(header);
}

QWidget* KPageView_PageHeader(const KPageView* self) {
    return self->pageHeader();
}

void KPageView_SetPageFooter(KPageView* self, QWidget* footer) {
    self->setPageFooter(footer);
}

QWidget* KPageView_PageFooter(const KPageView* self) {
    return self->pageFooter();
}

void KPageView_CurrentPageChanged(KPageView* self, const QModelIndex* current, const QModelIndex* previous) {
    self->currentPageChanged(*current, *previous);
}

void KPageView_Connect_CurrentPageChanged(KPageView* self, intptr_t slot) {
    void (*slotFunc)(KPageView*, QModelIndex*, QModelIndex*) = reinterpret_cast<void (*)(KPageView*, QModelIndex*, QModelIndex*)>(slot);
    KPageView::connect(self, &KPageView::currentPageChanged, [self, slotFunc](const QModelIndex& current, const QModelIndex& previous) {
        const QModelIndex& current_ret = current;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
        const QModelIndex& previous_ret = previous;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

QAbstractItemView* KPageView_CreateView(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->createView();
    }
    return {};
}

bool KPageView_ShowPageHeader(const KPageView* self) {
    auto* vkpageview = dynamic_cast<const VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->showPageHeader();
    }
    return {};
}

int KPageView_ViewPosition(const KPageView* self) {
    auto* vkpageview = dynamic_cast<const VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return static_cast<int>(vkpageview->viewPosition());
    }
    return {};
}

libqt_string KPageView_Tr2(const char* s, const char* c) {
    QString _ret = KPageView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageView_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPageView::tr(s, c, static_cast<int>(n));
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
int KPageView_QBaseMetacall(KPageView* self, int param1, int param2, void** param3) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Metacall_IsBase(true);
        return vkpageview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPageView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetacall(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Metacall_Callback(reinterpret_cast<VirtualKPageView::KPageView_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QAbstractItemView* KPageView_QBaseCreateView(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CreateView_IsBase(true);
        return vkpageview->createView();
    } else {
        return ((VirtualKPageView*)self)->createView();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCreateView(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CreateView_Callback(reinterpret_cast<VirtualKPageView::KPageView_CreateView_Callback>(slot));
    }
}

// Base class handler implementation
bool KPageView_QBaseShowPageHeader(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ShowPageHeader_IsBase(true);
        return vkpageview->showPageHeader();
    } else {
        return ((VirtualKPageView*)self)->showPageHeader();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnShowPageHeader(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ShowPageHeader_Callback(reinterpret_cast<VirtualKPageView::KPageView_ShowPageHeader_Callback>(slot));
    }
}

// Base class handler implementation
int KPageView_QBaseViewPosition(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ViewPosition_IsBase(true);
        return static_cast<int>(vkpageview->viewPosition());
    } else {
        return static_cast<int>(((VirtualKPageView*)self)->viewPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnViewPosition(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ViewPosition_Callback(reinterpret_cast<VirtualKPageView::KPageView_ViewPosition_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageView_DevType(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->devType();
    } else {
        return self->KPageView::devType();
    }
}

// Base class handler implementation
int KPageView_QBaseDevType(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DevType_IsBase(true);
        return vkpageview->devType();
    } else {
        return self->KPageView::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDevType(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DevType_Callback(reinterpret_cast<VirtualKPageView::KPageView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_SetVisible(KPageView* self, bool visible) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setVisible(visible);
    } else {
        self->KPageView::setVisible(visible);
    }
}

// Base class handler implementation
void KPageView_QBaseSetVisible(KPageView* self, bool visible) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SetVisible_IsBase(true);
        vkpageview->setVisible(visible);
    } else {
        self->KPageView::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSetVisible(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SetVisible_Callback(reinterpret_cast<VirtualKPageView::KPageView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageView_SizeHint(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return new QSize(vkpageview->sizeHint());
    } else {
        return new QSize(((VirtualKPageView*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPageView_QBaseSizeHint(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SizeHint_IsBase(true);
        return new QSize(vkpageview->sizeHint());
    } else {
        return new QSize(((VirtualKPageView*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSizeHint(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SizeHint_Callback(reinterpret_cast<VirtualKPageView::KPageView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageView_MinimumSizeHint(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return new QSize(vkpageview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageView*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPageView_QBaseMinimumSizeHint(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MinimumSizeHint_IsBase(true);
        return new QSize(vkpageview->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPageView*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMinimumSizeHint(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPageView::KPageView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageView_HeightForWidth(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageView::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPageView_QBaseHeightForWidth(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HeightForWidth_IsBase(true);
        return vkpageview->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPageView::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHeightForWidth(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HeightForWidth_Callback(reinterpret_cast<VirtualKPageView::KPageView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_HasHeightForWidth(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->hasHeightForWidth();
    } else {
        return self->KPageView::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPageView_QBaseHasHeightForWidth(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HasHeightForWidth_IsBase(true);
        return vkpageview->hasHeightForWidth();
    } else {
        return self->KPageView::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHasHeightForWidth(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPageView::KPageView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPageView_PaintEngine(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->paintEngine();
    } else {
        return self->KPageView::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPageView_QBasePaintEngine(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_PaintEngine_IsBase(true);
        return vkpageview->paintEngine();
    } else {
        return self->KPageView::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnPaintEngine(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_PaintEngine_Callback(reinterpret_cast<VirtualKPageView::KPageView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_Event(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->event(event);
    } else {
        return ((VirtualKPageView*)self)->event(event);
    }
}

// Base class handler implementation
bool KPageView_QBaseEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Event_IsBase(true);
        return vkpageview->event(event);
    } else {
        return ((VirtualKPageView*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Event_Callback(reinterpret_cast<VirtualKPageView::KPageView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_MousePressEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->mousePressEvent(event);
    } else {
        ((VirtualKPageView*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseMousePressEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MousePressEvent_IsBase(true);
        vkpageview->mousePressEvent(event);
    } else {
        ((VirtualKPageView*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMousePressEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MousePressEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_MouseReleaseEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseMouseReleaseEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseReleaseEvent_IsBase(true);
        vkpageview->mouseReleaseEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseReleaseEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_MouseDoubleClickEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseMouseDoubleClickEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseDoubleClickEvent_IsBase(true);
        vkpageview->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseDoubleClickEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_MouseMoveEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->mouseMoveEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseMouseMoveEvent(KPageView* self, QMouseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseMoveEvent_IsBase(true);
        vkpageview->mouseMoveEvent(event);
    } else {
        ((VirtualKPageView*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMouseMoveEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_WheelEvent(KPageView* self, QWheelEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->wheelEvent(event);
    } else {
        ((VirtualKPageView*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseWheelEvent(KPageView* self, QWheelEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_WheelEvent_IsBase(true);
        vkpageview->wheelEvent(event);
    } else {
        ((VirtualKPageView*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnWheelEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_WheelEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_KeyPressEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->keyPressEvent(event);
    } else {
        ((VirtualKPageView*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseKeyPressEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_KeyPressEvent_IsBase(true);
        vkpageview->keyPressEvent(event);
    } else {
        ((VirtualKPageView*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnKeyPressEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_KeyPressEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_KeyReleaseEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->keyReleaseEvent(event);
    } else {
        ((VirtualKPageView*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseKeyReleaseEvent(KPageView* self, QKeyEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_KeyReleaseEvent_IsBase(true);
        vkpageview->keyReleaseEvent(event);
    } else {
        ((VirtualKPageView*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnKeyReleaseEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_FocusInEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->focusInEvent(event);
    } else {
        ((VirtualKPageView*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseFocusInEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusInEvent_IsBase(true);
        vkpageview->focusInEvent(event);
    } else {
        ((VirtualKPageView*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusInEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusInEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_FocusOutEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->focusOutEvent(event);
    } else {
        ((VirtualKPageView*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseFocusOutEvent(KPageView* self, QFocusEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusOutEvent_IsBase(true);
        vkpageview->focusOutEvent(event);
    } else {
        ((VirtualKPageView*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusOutEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusOutEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_EnterEvent(KPageView* self, QEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->enterEvent(event);
    } else {
        ((VirtualKPageView*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseEnterEvent(KPageView* self, QEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_EnterEvent_IsBase(true);
        vkpageview->enterEvent(event);
    } else {
        ((VirtualKPageView*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEnterEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_EnterEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_LeaveEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->leaveEvent(event);
    } else {
        ((VirtualKPageView*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseLeaveEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_LeaveEvent_IsBase(true);
        vkpageview->leaveEvent(event);
    } else {
        ((VirtualKPageView*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnLeaveEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_LeaveEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_PaintEvent(KPageView* self, QPaintEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->paintEvent(event);
    } else {
        ((VirtualKPageView*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBasePaintEvent(KPageView* self, QPaintEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_PaintEvent_IsBase(true);
        vkpageview->paintEvent(event);
    } else {
        ((VirtualKPageView*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnPaintEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_PaintEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_MoveEvent(KPageView* self, QMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->moveEvent(event);
    } else {
        ((VirtualKPageView*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseMoveEvent(KPageView* self, QMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MoveEvent_IsBase(true);
        vkpageview->moveEvent(event);
    } else {
        ((VirtualKPageView*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMoveEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_MoveEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ResizeEvent(KPageView* self, QResizeEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->resizeEvent(event);
    } else {
        ((VirtualKPageView*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseResizeEvent(KPageView* self, QResizeEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ResizeEvent_IsBase(true);
        vkpageview->resizeEvent(event);
    } else {
        ((VirtualKPageView*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnResizeEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ResizeEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_CloseEvent(KPageView* self, QCloseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->closeEvent(event);
    } else {
        ((VirtualKPageView*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseCloseEvent(KPageView* self, QCloseEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CloseEvent_IsBase(true);
        vkpageview->closeEvent(event);
    } else {
        ((VirtualKPageView*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCloseEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CloseEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ContextMenuEvent(KPageView* self, QContextMenuEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->contextMenuEvent(event);
    } else {
        ((VirtualKPageView*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseContextMenuEvent(KPageView* self, QContextMenuEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ContextMenuEvent_IsBase(true);
        vkpageview->contextMenuEvent(event);
    } else {
        ((VirtualKPageView*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnContextMenuEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_TabletEvent(KPageView* self, QTabletEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->tabletEvent(event);
    } else {
        ((VirtualKPageView*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseTabletEvent(KPageView* self, QTabletEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_TabletEvent_IsBase(true);
        vkpageview->tabletEvent(event);
    } else {
        ((VirtualKPageView*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnTabletEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_TabletEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ActionEvent(KPageView* self, QActionEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->actionEvent(event);
    } else {
        ((VirtualKPageView*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseActionEvent(KPageView* self, QActionEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ActionEvent_IsBase(true);
        vkpageview->actionEvent(event);
    } else {
        ((VirtualKPageView*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnActionEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ActionEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_DragEnterEvent(KPageView* self, QDragEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->dragEnterEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseDragEnterEvent(KPageView* self, QDragEnterEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragEnterEvent_IsBase(true);
        vkpageview->dragEnterEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragEnterEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragEnterEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_DragMoveEvent(KPageView* self, QDragMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->dragMoveEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseDragMoveEvent(KPageView* self, QDragMoveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragMoveEvent_IsBase(true);
        vkpageview->dragMoveEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragMoveEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragMoveEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_DragLeaveEvent(KPageView* self, QDragLeaveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->dragLeaveEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseDragLeaveEvent(KPageView* self, QDragLeaveEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragLeaveEvent_IsBase(true);
        vkpageview->dragLeaveEvent(event);
    } else {
        ((VirtualKPageView*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDragLeaveEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_DropEvent(KPageView* self, QDropEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->dropEvent(event);
    } else {
        ((VirtualKPageView*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseDropEvent(KPageView* self, QDropEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DropEvent_IsBase(true);
        vkpageview->dropEvent(event);
    } else {
        ((VirtualKPageView*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDropEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DropEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ShowEvent(KPageView* self, QShowEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->showEvent(event);
    } else {
        ((VirtualKPageView*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseShowEvent(KPageView* self, QShowEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ShowEvent_IsBase(true);
        vkpageview->showEvent(event);
    } else {
        ((VirtualKPageView*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnShowEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ShowEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_HideEvent(KPageView* self, QHideEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->hideEvent(event);
    } else {
        ((VirtualKPageView*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseHideEvent(KPageView* self, QHideEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HideEvent_IsBase(true);
        vkpageview->hideEvent(event);
    } else {
        ((VirtualKPageView*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnHideEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_HideEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_NativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPageView_QBaseNativeEvent(KPageView* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_NativeEvent_IsBase(true);
        return vkpageview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPageView*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnNativeEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_NativeEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ChangeEvent(KPageView* self, QEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->changeEvent(param1);
    } else {
        ((VirtualKPageView*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPageView_QBaseChangeEvent(KPageView* self, QEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ChangeEvent_IsBase(true);
        vkpageview->changeEvent(param1);
    } else {
        ((VirtualKPageView*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnChangeEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ChangeEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageView_Metric(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPageView_QBaseMetric(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Metric_IsBase(true);
        return vkpageview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPageView*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnMetric(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Metric_Callback(reinterpret_cast<VirtualKPageView::KPageView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_InitPainter(const KPageView* self, QPainter* painter) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->initPainter(painter);
    } else {
        ((VirtualKPageView*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPageView_QBaseInitPainter(const KPageView* self, QPainter* painter) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InitPainter_IsBase(true);
        vkpageview->initPainter(painter);
    } else {
        ((VirtualKPageView*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInitPainter(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InitPainter_Callback(reinterpret_cast<VirtualKPageView::KPageView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPageView_Redirected(const KPageView* self, QPoint* offset) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->redirected(offset);
    } else {
        return ((VirtualKPageView*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPageView_QBaseRedirected(const KPageView* self, QPoint* offset) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Redirected_IsBase(true);
        return vkpageview->redirected(offset);
    } else {
        return ((VirtualKPageView*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnRedirected(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Redirected_Callback(reinterpret_cast<VirtualKPageView::KPageView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPageView_SharedPainter(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->sharedPainter();
    } else {
        return ((VirtualKPageView*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPageView_QBaseSharedPainter(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SharedPainter_IsBase(true);
        return vkpageview->sharedPainter();
    } else {
        return ((VirtualKPageView*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSharedPainter(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SharedPainter_Callback(reinterpret_cast<VirtualKPageView::KPageView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_InputMethodEvent(KPageView* self, QInputMethodEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->inputMethodEvent(param1);
    } else {
        ((VirtualKPageView*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPageView_QBaseInputMethodEvent(KPageView* self, QInputMethodEvent* param1) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InputMethodEvent_IsBase(true);
        vkpageview->inputMethodEvent(param1);
    } else {
        ((VirtualKPageView*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInputMethodEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InputMethodEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageView_InputMethodQuery(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return new QVariant(vkpageview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPageView_QBaseInputMethodQuery(const KPageView* self, int param1) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InputMethodQuery_IsBase(true);
        return new QVariant(vkpageview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPageView*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnInputMethodQuery(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_InputMethodQuery_Callback(reinterpret_cast<VirtualKPageView::KPageView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_FocusNextPrevChild(KPageView* self, bool next) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageView*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPageView_QBaseFocusNextPrevChild(KPageView* self, bool next) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusNextPrevChild_IsBase(true);
        return vkpageview->focusNextPrevChild(next);
    } else {
        return ((VirtualKPageView*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusNextPrevChild(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPageView::KPageView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_EventFilter(KPageView* self, QObject* watched, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->eventFilter(watched, event);
    } else {
        return self->KPageView::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPageView_QBaseEventFilter(KPageView* self, QObject* watched, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_EventFilter_IsBase(true);
        return vkpageview->eventFilter(watched, event);
    } else {
        return self->KPageView::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnEventFilter(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_EventFilter_Callback(reinterpret_cast<VirtualKPageView::KPageView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_TimerEvent(KPageView* self, QTimerEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->timerEvent(event);
    } else {
        ((VirtualKPageView*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseTimerEvent(KPageView* self, QTimerEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_TimerEvent_IsBase(true);
        vkpageview->timerEvent(event);
    } else {
        ((VirtualKPageView*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnTimerEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_TimerEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ChildEvent(KPageView* self, QChildEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->childEvent(event);
    } else {
        ((VirtualKPageView*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseChildEvent(KPageView* self, QChildEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ChildEvent_IsBase(true);
        vkpageview->childEvent(event);
    } else {
        ((VirtualKPageView*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnChildEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ChildEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_CustomEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->customEvent(event);
    } else {
        ((VirtualKPageView*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageView_QBaseCustomEvent(KPageView* self, QEvent* event) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CustomEvent_IsBase(true);
        vkpageview->customEvent(event);
    } else {
        ((VirtualKPageView*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCustomEvent(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_CustomEvent_Callback(reinterpret_cast<VirtualKPageView::KPageView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_ConnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->connectNotify(*signal);
    } else {
        ((VirtualKPageView*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageView_QBaseConnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ConnectNotify_IsBase(true);
        vkpageview->connectNotify(*signal);
    } else {
        ((VirtualKPageView*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnConnectNotify(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_ConnectNotify_Callback(reinterpret_cast<VirtualKPageView::KPageView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_DisconnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->disconnectNotify(*signal);
    } else {
        ((VirtualKPageView*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageView_QBaseDisconnectNotify(KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DisconnectNotify_IsBase(true);
        vkpageview->disconnectNotify(*signal);
    } else {
        ((VirtualKPageView*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDisconnectNotify(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageView::KPageView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_UpdateMicroFocus(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->updateMicroFocus();
    } else {
        ((VirtualKPageView*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPageView_QBaseUpdateMicroFocus(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_UpdateMicroFocus_IsBase(true);
        vkpageview->updateMicroFocus();
    } else {
        ((VirtualKPageView*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnUpdateMicroFocus(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPageView::KPageView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_Create(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->create();
    } else {
        ((VirtualKPageView*)self)->create();
    }
}

// Base class handler implementation
void KPageView_QBaseCreate(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Create_IsBase(true);
        vkpageview->create();
    } else {
        ((VirtualKPageView*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnCreate(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Create_Callback(reinterpret_cast<VirtualKPageView::KPageView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageView_Destroy(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->destroy();
    } else {
        ((VirtualKPageView*)self)->destroy();
    }
}

// Base class handler implementation
void KPageView_QBaseDestroy(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Destroy_IsBase(true);
        vkpageview->destroy();
    } else {
        ((VirtualKPageView*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnDestroy(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Destroy_Callback(reinterpret_cast<VirtualKPageView::KPageView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_FocusNextChild(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->focusNextChild();
    } else {
        return ((VirtualKPageView*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPageView_QBaseFocusNextChild(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusNextChild_IsBase(true);
        return vkpageview->focusNextChild();
    } else {
        return ((VirtualKPageView*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusNextChild(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusNextChild_Callback(reinterpret_cast<VirtualKPageView::KPageView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_FocusPreviousChild(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->focusPreviousChild();
    } else {
        return ((VirtualKPageView*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPageView_QBaseFocusPreviousChild(KPageView* self) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusPreviousChild_IsBase(true);
        return vkpageview->focusPreviousChild();
    } else {
        return ((VirtualKPageView*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnFocusPreviousChild(KPageView* self, intptr_t slot) {
    auto* vkpageview = dynamic_cast<VirtualKPageView*>(self);
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPageView::KPageView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageView_Sender(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->sender();
    } else {
        return ((VirtualKPageView*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageView_QBaseSender(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Sender_IsBase(true);
        return vkpageview->sender();
    } else {
        return ((VirtualKPageView*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSender(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Sender_Callback(reinterpret_cast<VirtualKPageView::KPageView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageView_SenderSignalIndex(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->senderSignalIndex();
    } else {
        return ((VirtualKPageView*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageView_QBaseSenderSignalIndex(const KPageView* self) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SenderSignalIndex_IsBase(true);
        return vkpageview->senderSignalIndex();
    } else {
        return ((VirtualKPageView*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnSenderSignalIndex(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageView::KPageView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageView_Receivers(const KPageView* self, const char* signal) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->receivers(signal);
    } else {
        return ((VirtualKPageView*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageView_QBaseReceivers(const KPageView* self, const char* signal) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Receivers_IsBase(true);
        return vkpageview->receivers(signal);
    } else {
        return ((VirtualKPageView*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnReceivers(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_Receivers_Callback(reinterpret_cast<VirtualKPageView::KPageView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageView_IsSignalConnected(const KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageView*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageView_QBaseIsSignalConnected(const KPageView* self, const QMetaMethod* signal) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_IsSignalConnected_IsBase(true);
        return vkpageview->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageView*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnIsSignalConnected(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageView::KPageView_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPageView_GetDecodedMetricF(const KPageView* self, int metricA, int metricB) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        return vkpageview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPageView_QBaseGetDecodedMetricF(const KPageView* self, int metricA, int metricB) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_GetDecodedMetricF_IsBase(true);
        return vkpageview->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPageView*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageView_OnGetDecodedMetricF(const KPageView* self, intptr_t slot) {
    auto* vkpageview = const_cast<VirtualKPageView*>(dynamic_cast<const VirtualKPageView*>(self));
    if (vkpageview && vkpageview->isVirtualKPageView) {
        vkpageview->setKPageView_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPageView::KPageView_GetDecodedMetricF_Callback>(slot));
    }
}

void KPageView_Delete(KPageView* self) {
    delete self;
}
