#include <KAdjustingScrollArea>
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
#include <QKeyEvent>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QScrollArea>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kadjustingscrollarea.h>
#include "libkadjustingscrollarea.h"
#include "libkadjustingscrollarea.hxx"

KAdjustingScrollArea* KAdjustingScrollArea_new(QWidget* parent) {
    return new VirtualKAdjustingScrollArea(parent);
}

KAdjustingScrollArea* KAdjustingScrollArea_new2() {
    return new VirtualKAdjustingScrollArea();
}

QMetaObject* KAdjustingScrollArea_MetaObject(const KAdjustingScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAdjustingScrollArea_Metacast(KAdjustingScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAdjustingScrollArea_Metacall(KAdjustingScrollArea* self, int param1, int param2, void** param3) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KAdjustingScrollArea_Tr(const char* s) {
    QString _ret = KAdjustingScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* KAdjustingScrollArea_MinimumSizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<const VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return new QSize(self->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAdjustingScrollArea*)self)->minimumSizeHint());
    }
}

QSize* KAdjustingScrollArea_SizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<const VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKAdjustingScrollArea*)self)->sizeHint());
    }
}

bool KAdjustingScrollArea_Event(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return self->event(event);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->event(event);
    }
}

libqt_string KAdjustingScrollArea_Tr2(const char* s, const char* c) {
    QString _ret = KAdjustingScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAdjustingScrollArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAdjustingScrollArea::tr(s, c, static_cast<int>(n));
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
int KAdjustingScrollArea_QBaseMetacall(KAdjustingScrollArea* self, int param1, int param2, void** param3) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Metacall_IsBase(true);
        return vkadjustingscrollarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KAdjustingScrollArea::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetacall(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Metacall_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KAdjustingScrollArea_QBaseMinimumSizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MinimumSizeHint_IsBase(true);
        return new QSize(vkadjustingscrollarea->minimumSizeHint());
    } else {
        return new QSize(((VirtualKAdjustingScrollArea*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMinimumSizeHint(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MinimumSizeHint_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KAdjustingScrollArea_QBaseSizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SizeHint_IsBase(true);
        return new QSize(vkadjustingscrollarea->sizeHint());
    } else {
        return new QSize(((VirtualKAdjustingScrollArea*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSizeHint(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SizeHint_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Event_IsBase(true);
        return vkadjustingscrollarea->event(event);
    } else {
        return self->KAdjustingScrollArea::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Event_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_FocusNextPrevChild(KAdjustingScrollArea* self, bool next) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->focusNextPrevChild(next);
    } else {
        return self->KAdjustingScrollArea::focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseFocusNextPrevChild(KAdjustingScrollArea* self, bool next) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusNextPrevChild_IsBase(true);
        return vkadjustingscrollarea->focusNextPrevChild(next);
    } else {
        return self->KAdjustingScrollArea::focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusNextPrevChild(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->resizeEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseResizeEvent(KAdjustingScrollArea* self, QResizeEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ResizeEvent_IsBase(true);
        vkadjustingscrollarea->resizeEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnResizeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKAdjustingScrollArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseScrollContentsBy(KAdjustingScrollArea* self, int dx, int dy) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ScrollContentsBy_IsBase(true);
        vkadjustingscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKAdjustingScrollArea*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnScrollContentsBy(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KAdjustingScrollArea_ViewportSizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return new QSize(vkadjustingscrollarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KAdjustingScrollArea_QBaseViewportSizeHint(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportSizeHint_IsBase(true);
        return new QSize(vkadjustingscrollarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnViewportSizeHint(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_SetupViewport(KAdjustingScrollArea* self, QWidget* viewport) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setupViewport(viewport);
    } else {
        self->KAdjustingScrollArea::setupViewport(viewport);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseSetupViewport(KAdjustingScrollArea* self, QWidget* viewport) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetupViewport_IsBase(true);
        vkadjustingscrollarea->setupViewport(viewport);
    } else {
        self->KAdjustingScrollArea::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSetupViewport(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_ViewportEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->viewportEvent(param1);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseViewportEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportEvent_IsBase(true);
        return vkadjustingscrollarea->viewportEvent(param1);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnViewportEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_PaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->paintEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBasePaintEvent(KAdjustingScrollArea* self, QPaintEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_PaintEvent_IsBase(true);
        vkadjustingscrollarea->paintEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnPaintEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_MousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->mousePressEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseMousePressEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MousePressEvent_IsBase(true);
        vkadjustingscrollarea->mousePressEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMousePressEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseMouseReleaseEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseReleaseEvent_IsBase(true);
        vkadjustingscrollarea->mouseReleaseEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseReleaseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseMouseDoubleClickEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseDoubleClickEvent_IsBase(true);
        vkadjustingscrollarea->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseDoubleClickEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_MouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->mouseMoveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseMouseMoveEvent(KAdjustingScrollArea* self, QMouseEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseMoveEvent_IsBase(true);
        vkadjustingscrollarea->mouseMoveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMouseMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_WheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->wheelEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseWheelEvent(KAdjustingScrollArea* self, QWheelEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_WheelEvent_IsBase(true);
        vkadjustingscrollarea->wheelEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnWheelEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->contextMenuEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseContextMenuEvent(KAdjustingScrollArea* self, QContextMenuEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ContextMenuEvent_IsBase(true);
        vkadjustingscrollarea->contextMenuEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnContextMenuEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->dragEnterEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDragEnterEvent(KAdjustingScrollArea* self, QDragEnterEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragEnterEvent_IsBase(true);
        vkadjustingscrollarea->dragEnterEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragEnterEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->dragMoveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDragMoveEvent(KAdjustingScrollArea* self, QDragMoveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragMoveEvent_IsBase(true);
        vkadjustingscrollarea->dragMoveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->dragLeaveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDragLeaveEvent(KAdjustingScrollArea* self, QDragLeaveEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragLeaveEvent_IsBase(true);
        vkadjustingscrollarea->dragLeaveEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDragLeaveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DropEvent(KAdjustingScrollArea* self, QDropEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->dropEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDropEvent(KAdjustingScrollArea* self, QDropEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DropEvent_IsBase(true);
        vkadjustingscrollarea->dropEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDropEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DropEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_KeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->keyPressEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseKeyPressEvent(KAdjustingScrollArea* self, QKeyEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_KeyPressEvent_IsBase(true);
        vkadjustingscrollarea->keyPressEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnKeyPressEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ChangeEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->changeEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseChangeEvent(KAdjustingScrollArea* self, QEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ChangeEvent_IsBase(true);
        vkadjustingscrollarea->changeEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnChangeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ChangeEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_InitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->initStyleOption(option);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseInitStyleOption(const KAdjustingScrollArea* self, QStyleOptionFrame* option) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InitStyleOption_IsBase(true);
        vkadjustingscrollarea->initStyleOption(option);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInitStyleOption(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InitStyleOption_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KAdjustingScrollArea_DevType(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->devType();
    } else {
        return self->KAdjustingScrollArea::devType();
    }
}

// Base class handler implementation
int KAdjustingScrollArea_QBaseDevType(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DevType_IsBase(true);
        return vkadjustingscrollarea->devType();
    } else {
        return self->KAdjustingScrollArea::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDevType(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DevType_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_SetVisible(KAdjustingScrollArea* self, bool visible) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setVisible(visible);
    } else {
        self->KAdjustingScrollArea::setVisible(visible);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseSetVisible(KAdjustingScrollArea* self, bool visible) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetVisible_IsBase(true);
        vkadjustingscrollarea->setVisible(visible);
    } else {
        self->KAdjustingScrollArea::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSetVisible(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetVisible_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KAdjustingScrollArea_HeightForWidth(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAdjustingScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KAdjustingScrollArea_QBaseHeightForWidth(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HeightForWidth_IsBase(true);
        return vkadjustingscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KAdjustingScrollArea::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHeightForWidth(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HeightForWidth_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_HasHeightForWidth(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->hasHeightForWidth();
    } else {
        return self->KAdjustingScrollArea::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseHasHeightForWidth(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HasHeightForWidth_IsBase(true);
        return vkadjustingscrollarea->hasHeightForWidth();
    } else {
        return self->KAdjustingScrollArea::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHasHeightForWidth(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KAdjustingScrollArea_PaintEngine(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->paintEngine();
    } else {
        return self->KAdjustingScrollArea::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KAdjustingScrollArea_QBasePaintEngine(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_PaintEngine_IsBase(true);
        return vkadjustingscrollarea->paintEngine();
    } else {
        return self->KAdjustingScrollArea::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnPaintEngine(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_PaintEngine_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_KeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseKeyReleaseEvent(KAdjustingScrollArea* self, QKeyEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_KeyReleaseEvent_IsBase(true);
        vkadjustingscrollarea->keyReleaseEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnKeyReleaseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_FocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->focusInEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseFocusInEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusInEvent_IsBase(true);
        vkadjustingscrollarea->focusInEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusInEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusInEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_FocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->focusOutEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseFocusOutEvent(KAdjustingScrollArea* self, QFocusEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusOutEvent_IsBase(true);
        vkadjustingscrollarea->focusOutEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusOutEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusOutEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_EnterEvent(KAdjustingScrollArea* self, QEnterEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->enterEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseEnterEvent(KAdjustingScrollArea* self, QEnterEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_EnterEvent_IsBase(true);
        vkadjustingscrollarea->enterEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnEnterEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_EnterEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_LeaveEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->leaveEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseLeaveEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_LeaveEvent_IsBase(true);
        vkadjustingscrollarea->leaveEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnLeaveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_LeaveEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_MoveEvent(KAdjustingScrollArea* self, QMoveEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->moveEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseMoveEvent(KAdjustingScrollArea* self, QMoveEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MoveEvent_IsBase(true);
        vkadjustingscrollarea->moveEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMoveEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_MoveEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_CloseEvent(KAdjustingScrollArea* self, QCloseEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->closeEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseCloseEvent(KAdjustingScrollArea* self, QCloseEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_CloseEvent_IsBase(true);
        vkadjustingscrollarea->closeEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnCloseEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_CloseEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_TabletEvent(KAdjustingScrollArea* self, QTabletEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->tabletEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseTabletEvent(KAdjustingScrollArea* self, QTabletEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_TabletEvent_IsBase(true);
        vkadjustingscrollarea->tabletEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnTabletEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_TabletEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ActionEvent(KAdjustingScrollArea* self, QActionEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->actionEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseActionEvent(KAdjustingScrollArea* self, QActionEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ActionEvent_IsBase(true);
        vkadjustingscrollarea->actionEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnActionEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ActionEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ShowEvent(KAdjustingScrollArea* self, QShowEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->showEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseShowEvent(KAdjustingScrollArea* self, QShowEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ShowEvent_IsBase(true);
        vkadjustingscrollarea->showEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnShowEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ShowEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_HideEvent(KAdjustingScrollArea* self, QHideEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->hideEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseHideEvent(KAdjustingScrollArea* self, QHideEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HideEvent_IsBase(true);
        vkadjustingscrollarea->hideEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnHideEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_HideEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_NativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseNativeEvent(KAdjustingScrollArea* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_NativeEvent_IsBase(true);
        return vkadjustingscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnNativeEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_NativeEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KAdjustingScrollArea_Metric(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KAdjustingScrollArea_QBaseMetric(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Metric_IsBase(true);
        return vkadjustingscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnMetric(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Metric_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_InitPainter(const KAdjustingScrollArea* self, QPainter* painter) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->initPainter(painter);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseInitPainter(const KAdjustingScrollArea* self, QPainter* painter) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InitPainter_IsBase(true);
        vkadjustingscrollarea->initPainter(painter);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInitPainter(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InitPainter_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KAdjustingScrollArea_Redirected(const KAdjustingScrollArea* self, QPoint* offset) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->redirected(offset);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KAdjustingScrollArea_QBaseRedirected(const KAdjustingScrollArea* self, QPoint* offset) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Redirected_IsBase(true);
        return vkadjustingscrollarea->redirected(offset);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnRedirected(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Redirected_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KAdjustingScrollArea_SharedPainter(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->sharedPainter();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KAdjustingScrollArea_QBaseSharedPainter(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SharedPainter_IsBase(true);
        return vkadjustingscrollarea->sharedPainter();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSharedPainter(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SharedPainter_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_InputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseInputMethodEvent(KAdjustingScrollArea* self, QInputMethodEvent* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InputMethodEvent_IsBase(true);
        vkadjustingscrollarea->inputMethodEvent(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInputMethodEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InputMethodEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KAdjustingScrollArea_InputMethodQuery(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return new QVariant(vkadjustingscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAdjustingScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KAdjustingScrollArea_QBaseInputMethodQuery(const KAdjustingScrollArea* self, int param1) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InputMethodQuery_IsBase(true);
        return new QVariant(vkadjustingscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKAdjustingScrollArea*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnInputMethodQuery(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_InputMethodQuery_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_TimerEvent(KAdjustingScrollArea* self, QTimerEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->timerEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseTimerEvent(KAdjustingScrollArea* self, QTimerEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_TimerEvent_IsBase(true);
        vkadjustingscrollarea->timerEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnTimerEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_TimerEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ChildEvent(KAdjustingScrollArea* self, QChildEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->childEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseChildEvent(KAdjustingScrollArea* self, QChildEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ChildEvent_IsBase(true);
        vkadjustingscrollarea->childEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnChildEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ChildEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_CustomEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->customEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseCustomEvent(KAdjustingScrollArea* self, QEvent* event) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_CustomEvent_IsBase(true);
        vkadjustingscrollarea->customEvent(event);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnCustomEvent(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_CustomEvent_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_ConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->connectNotify(*signal);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseConnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ConnectNotify_IsBase(true);
        vkadjustingscrollarea->connectNotify(*signal);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnConnectNotify(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ConnectNotify_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDisconnectNotify(KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DisconnectNotify_IsBase(true);
        vkadjustingscrollarea->disconnectNotify(*signal);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDisconnectNotify(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DisconnectNotify_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_SetViewportMargins(KAdjustingScrollArea* self, int left, int top, int right, int bottom) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKAdjustingScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseSetViewportMargins(KAdjustingScrollArea* self, int left, int top, int right, int bottom) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetViewportMargins_IsBase(true);
        vkadjustingscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKAdjustingScrollArea*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSetViewportMargins(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KAdjustingScrollArea_ViewportMargins(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return new QMargins(vkadjustingscrollarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KAdjustingScrollArea_QBaseViewportMargins(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportMargins_IsBase(true);
        return new QMargins(vkadjustingscrollarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnViewportMargins(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_DrawFrame(KAdjustingScrollArea* self, QPainter* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->drawFrame(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDrawFrame(KAdjustingScrollArea* self, QPainter* param1) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DrawFrame_IsBase(true);
        vkadjustingscrollarea->drawFrame(param1);
    } else {
        ((VirtualKAdjustingScrollArea*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDrawFrame(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_DrawFrame_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_UpdateMicroFocus(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->updateMicroFocus();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseUpdateMicroFocus(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_UpdateMicroFocus_IsBase(true);
        vkadjustingscrollarea->updateMicroFocus();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnUpdateMicroFocus(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_Create(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->create();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->create();
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseCreate(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Create_IsBase(true);
        vkadjustingscrollarea->create();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnCreate(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Create_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KAdjustingScrollArea_Destroy(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->destroy();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->destroy();
    }
}

// Base class handler implementation
void KAdjustingScrollArea_QBaseDestroy(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Destroy_IsBase(true);
        vkadjustingscrollarea->destroy();
    } else {
        ((VirtualKAdjustingScrollArea*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnDestroy(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Destroy_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_FocusNextChild(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->focusNextChild();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseFocusNextChild(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusNextChild_IsBase(true);
        return vkadjustingscrollarea->focusNextChild();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusNextChild(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusNextChild_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_FocusPreviousChild(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->focusPreviousChild();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseFocusPreviousChild(KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusPreviousChild_IsBase(true);
        return vkadjustingscrollarea->focusPreviousChild();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnFocusPreviousChild(KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = dynamic_cast<VirtualKAdjustingScrollArea*>(self);
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KAdjustingScrollArea_Sender(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->sender();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->sender();
    }
}

// Base class handler implementation
QObject* KAdjustingScrollArea_QBaseSender(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Sender_IsBase(true);
        return vkadjustingscrollarea->sender();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSender(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Sender_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KAdjustingScrollArea_SenderSignalIndex(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->senderSignalIndex();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KAdjustingScrollArea_QBaseSenderSignalIndex(const KAdjustingScrollArea* self) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SenderSignalIndex_IsBase(true);
        return vkadjustingscrollarea->senderSignalIndex();
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnSenderSignalIndex(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KAdjustingScrollArea_Receivers(const KAdjustingScrollArea* self, const char* signal) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->receivers(signal);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KAdjustingScrollArea_QBaseReceivers(const KAdjustingScrollArea* self, const char* signal) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Receivers_IsBase(true);
        return vkadjustingscrollarea->receivers(signal);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnReceivers(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_Receivers_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KAdjustingScrollArea_IsSignalConnected(const KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KAdjustingScrollArea_QBaseIsSignalConnected(const KAdjustingScrollArea* self, const QMetaMethod* signal) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_IsSignalConnected_IsBase(true);
        return vkadjustingscrollarea->isSignalConnected(*signal);
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnIsSignalConnected(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_IsSignalConnected_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KAdjustingScrollArea_GetDecodedMetricF(const KAdjustingScrollArea* self, int metricA, int metricB) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        return vkadjustingscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KAdjustingScrollArea_QBaseGetDecodedMetricF(const KAdjustingScrollArea* self, int metricA, int metricB) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_GetDecodedMetricF_IsBase(true);
        return vkadjustingscrollarea->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKAdjustingScrollArea*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KAdjustingScrollArea_OnGetDecodedMetricF(const KAdjustingScrollArea* self, intptr_t slot) {
    auto* vkadjustingscrollarea = const_cast<VirtualKAdjustingScrollArea*>(dynamic_cast<const VirtualKAdjustingScrollArea*>(self));
    if (vkadjustingscrollarea && vkadjustingscrollarea->isVirtualKAdjustingScrollArea) {
        vkadjustingscrollarea->setKAdjustingScrollArea_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKAdjustingScrollArea::KAdjustingScrollArea_GetDecodedMetricF_Callback>(slot));
    }
}

void KAdjustingScrollArea_Delete(KAdjustingScrollArea* self) {
    delete self;
}
