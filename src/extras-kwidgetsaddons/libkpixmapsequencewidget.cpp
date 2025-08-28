#include <KPixmapSequence>
#include <KPixmapSequenceWidget>
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
#include <kpixmapsequencewidget.h>
#include "libkpixmapsequencewidget.h"
#include "libkpixmapsequencewidget.hxx"

KPixmapSequenceWidget* KPixmapSequenceWidget_new(QWidget* parent) {
    return new VirtualKPixmapSequenceWidget(parent);
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new2() {
    return new VirtualKPixmapSequenceWidget();
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new3(const KPixmapSequence* seq) {
    return new VirtualKPixmapSequenceWidget(*seq);
}

KPixmapSequenceWidget* KPixmapSequenceWidget_new4(const KPixmapSequence* seq, QWidget* parent) {
    return new VirtualKPixmapSequenceWidget(*seq, parent);
}

QMetaObject* KPixmapSequenceWidget_MetaObject(const KPixmapSequenceWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPixmapSequenceWidget_Metacast(KPixmapSequenceWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPixmapSequenceWidget_Metacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPixmapSequenceWidget_Tr(const char* s) {
    QString _ret = KPixmapSequenceWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPixmapSequence* KPixmapSequenceWidget_Sequence(const KPixmapSequenceWidget* self) {
    return new KPixmapSequence(self->sequence());
}

int KPixmapSequenceWidget_Interval(const KPixmapSequenceWidget* self) {
    return self->interval();
}

QSize* KPixmapSequenceWidget_SizeHint(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<const VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapSequenceWidget*)self)->sizeHint());
    }
}

void KPixmapSequenceWidget_SetSequence(KPixmapSequenceWidget* self, const KPixmapSequence* seq) {
    self->setSequence(*seq);
}

void KPixmapSequenceWidget_SetInterval(KPixmapSequenceWidget* self, int msecs) {
    self->setInterval(static_cast<int>(msecs));
}

libqt_string KPixmapSequenceWidget_Tr2(const char* s, const char* c) {
    QString _ret = KPixmapSequenceWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPixmapSequenceWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPixmapSequenceWidget::tr(s, c, static_cast<int>(n));
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
int KPixmapSequenceWidget_QBaseMetacall(KPixmapSequenceWidget* self, int param1, int param2, void** param3) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Metacall_IsBase(true);
        return vkpixmapsequencewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPixmapSequenceWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetacall(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Metacall_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KPixmapSequenceWidget_QBaseSizeHint(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SizeHint_IsBase(true);
        return new QSize(vkpixmapsequencewidget->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapSequenceWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSizeHint(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SizeHint_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceWidget_DevType(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->devType();
    } else {
        return self->KPixmapSequenceWidget::devType();
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_QBaseDevType(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DevType_IsBase(true);
        return vkpixmapsequencewidget->devType();
    } else {
        return self->KPixmapSequenceWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDevType(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DevType_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_SetVisible(KPixmapSequenceWidget* self, bool visible) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setVisible(visible);
    } else {
        self->KPixmapSequenceWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseSetVisible(KPixmapSequenceWidget* self, bool visible) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SetVisible_IsBase(true);
        vkpixmapsequencewidget->setVisible(visible);
    } else {
        self->KPixmapSequenceWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSetVisible(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SetVisible_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPixmapSequenceWidget_MinimumSizeHint(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return new QSize(vkpixmapsequencewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapSequenceWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPixmapSequenceWidget_QBaseMinimumSizeHint(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkpixmapsequencewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapSequenceWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMinimumSizeHint(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceWidget_HeightForWidth(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapSequenceWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_QBaseHeightForWidth(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HeightForWidth_IsBase(true);
        return vkpixmapsequencewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapSequenceWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_HasHeightForWidth(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->hasHeightForWidth();
    } else {
        return self->KPixmapSequenceWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseHasHeightForWidth(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HasHeightForWidth_IsBase(true);
        return vkpixmapsequencewidget->hasHeightForWidth();
    } else {
        return self->KPixmapSequenceWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHasHeightForWidth(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPixmapSequenceWidget_PaintEngine(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->paintEngine();
    } else {
        return self->KPixmapSequenceWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPixmapSequenceWidget_QBasePaintEngine(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_PaintEngine_IsBase(true);
        return vkpixmapsequencewidget->paintEngine();
    } else {
        return self->KPixmapSequenceWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnPaintEngine(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_PaintEngine_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_Event(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->event(event);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Event_IsBase(true);
        return vkpixmapsequencewidget->event(event);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Event_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_MousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->mousePressEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseMousePressEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MousePressEvent_IsBase(true);
        vkpixmapsequencewidget->mousePressEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMousePressEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseMouseReleaseEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseReleaseEvent_IsBase(true);
        vkpixmapsequencewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseMouseDoubleClickEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseDoubleClickEvent_IsBase(true);
        vkpixmapsequencewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseDoubleClickEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_MouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseMouseMoveEvent(KPixmapSequenceWidget* self, QMouseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseMoveEvent_IsBase(true);
        vkpixmapsequencewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMouseMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_WheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->wheelEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseWheelEvent(KPixmapSequenceWidget* self, QWheelEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_WheelEvent_IsBase(true);
        vkpixmapsequencewidget->wheelEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnWheelEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_WheelEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_KeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->keyPressEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseKeyPressEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_KeyPressEvent_IsBase(true);
        vkpixmapsequencewidget->keyPressEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnKeyPressEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_KeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseKeyReleaseEvent(KPixmapSequenceWidget* self, QKeyEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_KeyReleaseEvent_IsBase(true);
        vkpixmapsequencewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnKeyReleaseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_FocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->focusInEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseFocusInEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusInEvent_IsBase(true);
        vkpixmapsequencewidget->focusInEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusInEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_FocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->focusOutEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseFocusOutEvent(KPixmapSequenceWidget* self, QFocusEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusOutEvent_IsBase(true);
        vkpixmapsequencewidget->focusOutEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusOutEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_EnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->enterEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseEnterEvent(KPixmapSequenceWidget* self, QEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_EnterEvent_IsBase(true);
        vkpixmapsequencewidget->enterEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEnterEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_EnterEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_LeaveEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->leaveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseLeaveEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_LeaveEvent_IsBase(true);
        vkpixmapsequencewidget->leaveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_PaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->paintEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBasePaintEvent(KPixmapSequenceWidget* self, QPaintEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_PaintEvent_IsBase(true);
        vkpixmapsequencewidget->paintEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnPaintEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_PaintEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_MoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->moveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseMoveEvent(KPixmapSequenceWidget* self, QMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MoveEvent_IsBase(true);
        vkpixmapsequencewidget->moveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_MoveEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->resizeEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseResizeEvent(KPixmapSequenceWidget* self, QResizeEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ResizeEvent_IsBase(true);
        vkpixmapsequencewidget->resizeEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnResizeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_CloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->closeEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseCloseEvent(KPixmapSequenceWidget* self, QCloseEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_CloseEvent_IsBase(true);
        vkpixmapsequencewidget->closeEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnCloseEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_CloseEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->contextMenuEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseContextMenuEvent(KPixmapSequenceWidget* self, QContextMenuEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ContextMenuEvent_IsBase(true);
        vkpixmapsequencewidget->contextMenuEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnContextMenuEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_TabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->tabletEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseTabletEvent(KPixmapSequenceWidget* self, QTabletEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_TabletEvent_IsBase(true);
        vkpixmapsequencewidget->tabletEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnTabletEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_TabletEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ActionEvent(KPixmapSequenceWidget* self, QActionEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->actionEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseActionEvent(KPixmapSequenceWidget* self, QActionEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ActionEvent_IsBase(true);
        vkpixmapsequencewidget->actionEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnActionEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ActionEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDragEnterEvent(KPixmapSequenceWidget* self, QDragEnterEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragEnterEvent_IsBase(true);
        vkpixmapsequencewidget->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragEnterEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDragMoveEvent(KPixmapSequenceWidget* self, QDragMoveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragMoveEvent_IsBase(true);
        vkpixmapsequencewidget->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragMoveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_DragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDragLeaveEvent(KPixmapSequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragLeaveEvent_IsBase(true);
        vkpixmapsequencewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDragLeaveEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_DropEvent(KPixmapSequenceWidget* self, QDropEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->dropEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDropEvent(KPixmapSequenceWidget* self, QDropEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DropEvent_IsBase(true);
        vkpixmapsequencewidget->dropEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDropEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DropEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ShowEvent(KPixmapSequenceWidget* self, QShowEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->showEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseShowEvent(KPixmapSequenceWidget* self, QShowEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ShowEvent_IsBase(true);
        vkpixmapsequencewidget->showEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnShowEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ShowEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_HideEvent(KPixmapSequenceWidget* self, QHideEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->hideEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseHideEvent(KPixmapSequenceWidget* self, QHideEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HideEvent_IsBase(true);
        vkpixmapsequencewidget->hideEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnHideEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_HideEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_NativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseNativeEvent(KPixmapSequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_NativeEvent_IsBase(true);
        return vkpixmapsequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnNativeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_NativeEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ChangeEvent(KPixmapSequenceWidget* self, QEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->changeEvent(param1);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseChangeEvent(KPixmapSequenceWidget* self, QEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ChangeEvent_IsBase(true);
        vkpixmapsequencewidget->changeEvent(param1);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnChangeEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceWidget_Metric(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_QBaseMetric(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Metric_IsBase(true);
        return vkpixmapsequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnMetric(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Metric_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_InitPainter(const KPixmapSequenceWidget* self, QPainter* painter) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->initPainter(painter);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseInitPainter(const KPixmapSequenceWidget* self, QPainter* painter) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InitPainter_IsBase(true);
        vkpixmapsequencewidget->initPainter(painter);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInitPainter(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InitPainter_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPixmapSequenceWidget_Redirected(const KPixmapSequenceWidget* self, QPoint* offset) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->redirected(offset);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPixmapSequenceWidget_QBaseRedirected(const KPixmapSequenceWidget* self, QPoint* offset) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Redirected_IsBase(true);
        return vkpixmapsequencewidget->redirected(offset);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnRedirected(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Redirected_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPixmapSequenceWidget_SharedPainter(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->sharedPainter();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPixmapSequenceWidget_QBaseSharedPainter(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SharedPainter_IsBase(true);
        return vkpixmapsequencewidget->sharedPainter();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSharedPainter(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SharedPainter_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_InputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseInputMethodEvent(KPixmapSequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InputMethodEvent_IsBase(true);
        vkpixmapsequencewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInputMethodEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPixmapSequenceWidget_InputMethodQuery(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return new QVariant(vkpixmapsequencewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapSequenceWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPixmapSequenceWidget_QBaseInputMethodQuery(const KPixmapSequenceWidget* self, int param1) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkpixmapsequencewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapSequenceWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnInputMethodQuery(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_FocusNextPrevChild(KPixmapSequenceWidget* self, bool next) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseFocusNextPrevChild(KPixmapSequenceWidget* self, bool next) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusNextPrevChild_IsBase(true);
        return vkpixmapsequencewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusNextPrevChild(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_EventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->eventFilter(watched, event);
    } else {
        return self->KPixmapSequenceWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseEventFilter(KPixmapSequenceWidget* self, QObject* watched, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_EventFilter_IsBase(true);
        return vkpixmapsequencewidget->eventFilter(watched, event);
    } else {
        return self->KPixmapSequenceWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnEventFilter(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_EventFilter_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_TimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->timerEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseTimerEvent(KPixmapSequenceWidget* self, QTimerEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_TimerEvent_IsBase(true);
        vkpixmapsequencewidget->timerEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnTimerEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_TimerEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ChildEvent(KPixmapSequenceWidget* self, QChildEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->childEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseChildEvent(KPixmapSequenceWidget* self, QChildEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ChildEvent_IsBase(true);
        vkpixmapsequencewidget->childEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnChildEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ChildEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_CustomEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->customEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseCustomEvent(KPixmapSequenceWidget* self, QEvent* event) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_CustomEvent_IsBase(true);
        vkpixmapsequencewidget->customEvent(event);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnCustomEvent(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_CustomEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_ConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->connectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseConnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ConnectNotify_IsBase(true);
        vkpixmapsequencewidget->connectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnConnectNotify(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_DisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDisconnectNotify(KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DisconnectNotify_IsBase(true);
        vkpixmapsequencewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDisconnectNotify(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_UpdateMicroFocus(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->updateMicroFocus();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseUpdateMicroFocus(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_UpdateMicroFocus_IsBase(true);
        vkpixmapsequencewidget->updateMicroFocus();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnUpdateMicroFocus(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_Create(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->create();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->create();
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseCreate(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Create_IsBase(true);
        vkpixmapsequencewidget->create();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnCreate(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Create_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceWidget_Destroy(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->destroy();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KPixmapSequenceWidget_QBaseDestroy(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Destroy_IsBase(true);
        vkpixmapsequencewidget->destroy();
    } else {
        ((VirtualKPixmapSequenceWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnDestroy(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Destroy_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_FocusNextChild(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->focusNextChild();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseFocusNextChild(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusNextChild_IsBase(true);
        return vkpixmapsequencewidget->focusNextChild();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusNextChild(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_FocusPreviousChild(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->focusPreviousChild();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseFocusPreviousChild(KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusPreviousChild_IsBase(true);
        return vkpixmapsequencewidget->focusPreviousChild();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnFocusPreviousChild(KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = dynamic_cast<VirtualKPixmapSequenceWidget*>(self);
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPixmapSequenceWidget_Sender(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->sender();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPixmapSequenceWidget_QBaseSender(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Sender_IsBase(true);
        return vkpixmapsequencewidget->sender();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSender(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Sender_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceWidget_SenderSignalIndex(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->senderSignalIndex();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_QBaseSenderSignalIndex(const KPixmapSequenceWidget* self) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SenderSignalIndex_IsBase(true);
        return vkpixmapsequencewidget->senderSignalIndex();
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnSenderSignalIndex(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceWidget_Receivers(const KPixmapSequenceWidget* self, const char* signal) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->receivers(signal);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPixmapSequenceWidget_QBaseReceivers(const KPixmapSequenceWidget* self, const char* signal) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Receivers_IsBase(true);
        return vkpixmapsequencewidget->receivers(signal);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnReceivers(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_Receivers_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceWidget_IsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPixmapSequenceWidget_QBaseIsSignalConnected(const KPixmapSequenceWidget* self, const QMetaMethod* signal) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_IsSignalConnected_IsBase(true);
        return vkpixmapsequencewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnIsSignalConnected(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPixmapSequenceWidget_GetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        return vkpixmapsequencewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPixmapSequenceWidget_QBaseGetDecodedMetricF(const KPixmapSequenceWidget* self, int metricA, int metricB) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_GetDecodedMetricF_IsBase(true);
        return vkpixmapsequencewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapSequenceWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceWidget_OnGetDecodedMetricF(const KPixmapSequenceWidget* self, intptr_t slot) {
    auto* vkpixmapsequencewidget = const_cast<VirtualKPixmapSequenceWidget*>(dynamic_cast<const VirtualKPixmapSequenceWidget*>(self));
    if (vkpixmapsequencewidget && vkpixmapsequencewidget->isVirtualKPixmapSequenceWidget) {
        vkpixmapsequencewidget->setKPixmapSequenceWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPixmapSequenceWidget::KPixmapSequenceWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KPixmapSequenceWidget_Delete(KPixmapSequenceWidget* self) {
    delete self;
}
