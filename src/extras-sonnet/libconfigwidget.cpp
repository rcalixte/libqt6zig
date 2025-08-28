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
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__ConfigWidget
#include <configwidget.h>
#include "libconfigwidget.h"
#include "libconfigwidget.hxx"

Sonnet__ConfigWidget* Sonnet__ConfigWidget_new(QWidget* parent) {
    return new VirtualSonnetConfigWidget(parent);
}

QMetaObject* Sonnet__ConfigWidget_MetaObject(const Sonnet__ConfigWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__ConfigWidget_Metacast(Sonnet__ConfigWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__ConfigWidget_Metacall(Sonnet__ConfigWidget* self, int param1, int param2, void** param3) {
    auto* vsonnet__configwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnet__configwidget && vsonnet__configwidget->isVirtualSonnetConfigWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__ConfigWidget_Tr(const char* s) {
    QString _ret = Sonnet::ConfigWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Sonnet__ConfigWidget_BackgroundCheckingButtonShown(const Sonnet__ConfigWidget* self) {
    return self->backgroundCheckingButtonShown();
}

void Sonnet__ConfigWidget_SetLanguage(Sonnet__ConfigWidget* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setLanguage(language_QString);
}

libqt_string Sonnet__ConfigWidget_Language(const Sonnet__ConfigWidget* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__ConfigWidget_Save(Sonnet__ConfigWidget* self) {
    self->save();
}

void Sonnet__ConfigWidget_SetBackgroundCheckingButtonShown(Sonnet__ConfigWidget* self, bool backgroundCheckingButtonShown) {
    self->setBackgroundCheckingButtonShown(backgroundCheckingButtonShown);
}

void Sonnet__ConfigWidget_SlotDefault(Sonnet__ConfigWidget* self) {
    self->slotDefault();
}

void Sonnet__ConfigWidget_ConfigChanged(Sonnet__ConfigWidget* self) {
    self->configChanged();
}

void Sonnet__ConfigWidget_Connect_ConfigChanged(Sonnet__ConfigWidget* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__ConfigWidget*) = reinterpret_cast<void (*)(Sonnet__ConfigWidget*)>(slot);
    Sonnet::ConfigWidget::connect(self, &Sonnet::ConfigWidget::configChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Sonnet__ConfigWidget_Tr2(const char* s, const char* c) {
    QString _ret = Sonnet::ConfigWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__ConfigWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = Sonnet::ConfigWidget::tr(s, c, static_cast<int>(n));
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
int Sonnet__ConfigWidget_QBaseMetacall(Sonnet__ConfigWidget* self, int param1, int param2, void** param3) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Metacall_IsBase(true);
        return vsonnetconfigwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::ConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetacall(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Metacall_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigWidget_DevType(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->devType();
    } else {
        return self->Sonnet::ConfigWidget::devType();
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_QBaseDevType(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DevType_IsBase(true);
        return vsonnetconfigwidget->devType();
    } else {
        return self->Sonnet::ConfigWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDevType(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DevType_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_SetVisible(Sonnet__ConfigWidget* self, bool visible) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setVisible(visible);
    } else {
        self->Sonnet::ConfigWidget::setVisible(visible);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseSetVisible(Sonnet__ConfigWidget* self, bool visible) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SetVisible_IsBase(true);
        vsonnetconfigwidget->setVisible(visible);
    } else {
        self->Sonnet::ConfigWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSetVisible(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SetVisible_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigWidget_SizeHint(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return new QSize(vsonnetconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigWidget_QBaseSizeHint(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SizeHint_IsBase(true);
        return new QSize(vsonnetconfigwidget->sizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSizeHint(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SizeHint_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__ConfigWidget_MinimumSizeHint(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return new QSize(vsonnetconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__ConfigWidget_QBaseMinimumSizeHint(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vsonnetconfigwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetConfigWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMinimumSizeHint(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigWidget_HeightForWidth(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_QBaseHeightForWidth(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HeightForWidth_IsBase(true);
        return vsonnetconfigwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::ConfigWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHeightForWidth(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_HasHeightForWidth(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseHasHeightForWidth(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HasHeightForWidth_IsBase(true);
        return vsonnetconfigwidget->hasHeightForWidth();
    } else {
        return self->Sonnet::ConfigWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHasHeightForWidth(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigWidget_PaintEngine(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->paintEngine();
    } else {
        return self->Sonnet::ConfigWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigWidget_QBasePaintEngine(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_PaintEngine_IsBase(true);
        return vsonnetconfigwidget->paintEngine();
    } else {
        return self->Sonnet::ConfigWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnPaintEngine(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_PaintEngine_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_Event(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->event(event);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Event_IsBase(true);
        return vsonnetconfigwidget->event(event);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Event_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseMousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MousePressEvent_IsBase(true);
        vsonnetconfigwidget->mousePressEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMousePressEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MousePressEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseMouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseReleaseEvent_IsBase(true);
        vsonnetconfigwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseMouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseDoubleClickEvent_IsBase(true);
        vsonnetconfigwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseDoubleClickEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseMouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseMoveEvent_IsBase(true);
        vsonnetconfigwidget->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_WheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseWheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_WheelEvent_IsBase(true);
        vsonnetconfigwidget->wheelEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnWheelEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_WheelEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_KeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseKeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_KeyPressEvent_IsBase(true);
        vsonnetconfigwidget->keyPressEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnKeyPressEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_KeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseKeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_KeyReleaseEvent_IsBase(true);
        vsonnetconfigwidget->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnKeyReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_FocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseFocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusInEvent_IsBase(true);
        vsonnetconfigwidget->focusInEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusInEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusInEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_FocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseFocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusOutEvent_IsBase(true);
        vsonnetconfigwidget->focusOutEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusOutEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_EnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->enterEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseEnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_EnterEvent_IsBase(true);
        vsonnetconfigwidget->enterEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_EnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_LeaveEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseLeaveEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_LeaveEvent_IsBase(true);
        vsonnetconfigwidget->leaveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_LeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_PaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->paintEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBasePaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_PaintEvent_IsBase(true);
        vsonnetconfigwidget->paintEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnPaintEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_PaintEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->moveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseMoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MoveEvent_IsBase(true);
        vsonnetconfigwidget->moveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_MoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->resizeEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ResizeEvent_IsBase(true);
        vsonnetconfigwidget->resizeEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnResizeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ResizeEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_CloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->closeEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseCloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_CloseEvent_IsBase(true);
        vsonnetconfigwidget->closeEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnCloseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_CloseEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ContextMenuEvent_IsBase(true);
        vsonnetconfigwidget->contextMenuEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnContextMenuEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_TabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseTabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_TabletEvent_IsBase(true);
        vsonnetconfigwidget->tabletEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnTabletEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_TabletEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->actionEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ActionEvent_IsBase(true);
        vsonnetconfigwidget->actionEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnActionEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ActionEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragEnterEvent_IsBase(true);
        vsonnetconfigwidget->dragEnterEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragMoveEvent_IsBase(true);
        vsonnetconfigwidget->dragMoveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragLeaveEvent_IsBase(true);
        vsonnetconfigwidget->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DropEvent(Sonnet__ConfigWidget* self, QDropEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->dropEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDropEvent(Sonnet__ConfigWidget* self, QDropEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DropEvent_IsBase(true);
        vsonnetconfigwidget->dropEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDropEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DropEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->showEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ShowEvent_IsBase(true);
        vsonnetconfigwidget->showEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnShowEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ShowEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_HideEvent(Sonnet__ConfigWidget* self, QHideEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->hideEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseHideEvent(Sonnet__ConfigWidget* self, QHideEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HideEvent_IsBase(true);
        vsonnetconfigwidget->hideEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHideEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_HideEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_NativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseNativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_NativeEvent_IsBase(true);
        return vsonnetconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnNativeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_NativeEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ChangeEvent_IsBase(true);
        vsonnetconfigwidget->changeEvent(param1);
    } else {
        ((VirtualSonnetConfigWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnChangeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ChangeEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigWidget_Metric(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_QBaseMetric(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Metric_IsBase(true);
        return vsonnetconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetric(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Metric_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_InitPainter(const Sonnet__ConfigWidget* self, QPainter* painter) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->initPainter(painter);
    } else {
        ((VirtualSonnetConfigWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseInitPainter(const Sonnet__ConfigWidget* self, QPainter* painter) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InitPainter_IsBase(true);
        vsonnetconfigwidget->initPainter(painter);
    } else {
        ((VirtualSonnetConfigWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInitPainter(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InitPainter_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigWidget_Redirected(const Sonnet__ConfigWidget* self, QPoint* offset) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->redirected(offset);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigWidget_QBaseRedirected(const Sonnet__ConfigWidget* self, QPoint* offset) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Redirected_IsBase(true);
        return vsonnetconfigwidget->redirected(offset);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnRedirected(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Redirected_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* Sonnet__ConfigWidget_SharedPainter(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->sharedPainter();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigWidget_QBaseSharedPainter(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SharedPainter_IsBase(true);
        return vsonnetconfigwidget->sharedPainter();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSharedPainter(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SharedPainter_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_InputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseInputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InputMethodEvent_IsBase(true);
        vsonnetconfigwidget->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetConfigWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInputMethodEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* Sonnet__ConfigWidget_InputMethodQuery(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return new QVariant(vsonnetconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* Sonnet__ConfigWidget_QBaseInputMethodQuery(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vsonnetconfigwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetConfigWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInputMethodQuery(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_FocusNextPrevChild(Sonnet__ConfigWidget* self, bool next) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseFocusNextPrevChild(Sonnet__ConfigWidget* self, bool next) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusNextPrevChild_IsBase(true);
        return vsonnetconfigwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusNextPrevChild(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_EventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->eventFilter(watched, event);
    } else {
        return self->Sonnet::ConfigWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseEventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_EventFilter_IsBase(true);
        return vsonnetconfigwidget->eventFilter(watched, event);
    } else {
        return self->Sonnet::ConfigWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEventFilter(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_EventFilter_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_TimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->timerEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseTimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_TimerEvent_IsBase(true);
        vsonnetconfigwidget->timerEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnTimerEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_TimerEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->childEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ChildEvent_IsBase(true);
        vsonnetconfigwidget->childEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnChildEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ChildEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_CustomEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->customEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseCustomEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_CustomEvent_IsBase(true);
        vsonnetconfigwidget->customEvent(event);
    } else {
        ((VirtualSonnetConfigWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnCustomEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_CustomEvent_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ConnectNotify_IsBase(true);
        vsonnetconfigwidget->connectNotify(*signal);
    } else {
        ((VirtualSonnetConfigWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnConnectNotify(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DisconnectNotify_IsBase(true);
        vsonnetconfigwidget->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetConfigWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDisconnectNotify(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_SlotIgnoreWordRemoved(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->slotIgnoreWordRemoved();
    } else {
        ((VirtualSonnetConfigWidget*)self)->slotIgnoreWordRemoved();
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseSlotIgnoreWordRemoved(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SlotIgnoreWordRemoved_IsBase(true);
        vsonnetconfigwidget->slotIgnoreWordRemoved();
    } else {
        ((VirtualSonnetConfigWidget*)self)->slotIgnoreWordRemoved();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSlotIgnoreWordRemoved(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SlotIgnoreWordRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_SlotIgnoreWordAdded(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->slotIgnoreWordAdded();
    } else {
        ((VirtualSonnetConfigWidget*)self)->slotIgnoreWordAdded();
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseSlotIgnoreWordAdded(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SlotIgnoreWordAdded_IsBase(true);
        vsonnetconfigwidget->slotIgnoreWordAdded();
    } else {
        ((VirtualSonnetConfigWidget*)self)->slotIgnoreWordAdded();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSlotIgnoreWordAdded(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SlotIgnoreWordAdded_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SlotIgnoreWordAdded_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_UpdateMicroFocus(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseUpdateMicroFocus(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_UpdateMicroFocus_IsBase(true);
        vsonnetconfigwidget->updateMicroFocus();
    } else {
        ((VirtualSonnetConfigWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnUpdateMicroFocus(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_Create(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->create();
    } else {
        ((VirtualSonnetConfigWidget*)self)->create();
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseCreate(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Create_IsBase(true);
        vsonnetconfigwidget->create();
    } else {
        ((VirtualSonnetConfigWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnCreate(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Create_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__ConfigWidget_Destroy(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->destroy();
    } else {
        ((VirtualSonnetConfigWidget*)self)->destroy();
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_QBaseDestroy(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Destroy_IsBase(true);
        vsonnetconfigwidget->destroy();
    } else {
        ((VirtualSonnetConfigWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDestroy(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Destroy_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_FocusNextChild(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->focusNextChild();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseFocusNextChild(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusNextChild_IsBase(true);
        return vsonnetconfigwidget->focusNextChild();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusNextChild(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusNextChild_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_FocusPreviousChild(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseFocusPreviousChild(Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusPreviousChild_IsBase(true);
        return vsonnetconfigwidget->focusPreviousChild();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusPreviousChild(Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__ConfigWidget_Sender(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->sender();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__ConfigWidget_QBaseSender(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Sender_IsBase(true);
        return vsonnetconfigwidget->sender();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSender(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Sender_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigWidget_SenderSignalIndex(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_QBaseSenderSignalIndex(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SenderSignalIndex_IsBase(true);
        return vsonnetconfigwidget->senderSignalIndex();
    } else {
        return ((VirtualSonnetConfigWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSenderSignalIndex(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__ConfigWidget_Receivers(const Sonnet__ConfigWidget* self, const char* signal) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->receivers(signal);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_QBaseReceivers(const Sonnet__ConfigWidget* self, const char* signal) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Receivers_IsBase(true);
        return vsonnetconfigwidget->receivers(signal);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnReceivers(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_Receivers_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_IsSignalConnected(const Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_QBaseIsSignalConnected(const Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_IsSignalConnected_IsBase(true);
        return vsonnetconfigwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetConfigWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnIsSignalConnected(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double Sonnet__ConfigWidget_GetDecodedMetricF(const Sonnet__ConfigWidget* self, int metricA, int metricB) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        return vsonnetconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double Sonnet__ConfigWidget_QBaseGetDecodedMetricF(const Sonnet__ConfigWidget* self, int metricA, int metricB) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_GetDecodedMetricF_IsBase(true);
        return vsonnetconfigwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetConfigWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnGetDecodedMetricF(const Sonnet__ConfigWidget* self, intptr_t slot) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget && vsonnetconfigwidget->isVirtualSonnetConfigWidget) {
        vsonnetconfigwidget->setSonnet__ConfigWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void Sonnet__ConfigWidget_Delete(Sonnet__ConfigWidget* self) {
    delete self;
}
