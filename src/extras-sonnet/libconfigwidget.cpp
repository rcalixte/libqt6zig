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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__ConfigWidget_Tr(const char* s) {
    auto _ret = Sonnet::ConfigWidget::tr(s);
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
    auto _ret = self->language();
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
    Sonnet::ConfigWidget::connect(self,
                                  static_cast<void (Sonnet::ConfigWidget::*)()>(&Sonnet::ConfigWidget::configChanged),
                                  [self, slotFunc]() {
                                      slotFunc(self);
                                  });
}

libqt_string Sonnet__ConfigWidget_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::ConfigWidget::tr(s, c);
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
    auto _ret = Sonnet::ConfigWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* Sonnet__ConfigWidget_SuperMetaObject(const Sonnet__ConfigWidget* self) {
    return (QMetaObject*)self->Sonnet::ConfigWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetaObject(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_metaobject_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__ConfigWidget_SuperMetacast(Sonnet__ConfigWidget* self, const char* param1) {
    return self->Sonnet::ConfigWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetacast(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_metacast_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__ConfigWidget_SuperMetacall(Sonnet__ConfigWidget* self, int param1, int param2, void** param3) {
    return self->Sonnet::ConfigWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetacall(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_metacall_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigWidget_DevType(const Sonnet__ConfigWidget* self) {
    return self->devType();
}

// Base class handler implementation
int Sonnet__ConfigWidget_SuperDevType(const Sonnet__ConfigWidget* self) {
    return self->Sonnet::ConfigWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDevType(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_devtype_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_SetVisible(Sonnet__ConfigWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperSetVisible(Sonnet__ConfigWidget* self, bool visible) {
    self->Sonnet::ConfigWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSetVisible(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_setvisible_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigWidget_SizeHint(const Sonnet__ConfigWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigWidget_SuperSizeHint(const Sonnet__ConfigWidget* self) {
    return new QSize(self->Sonnet::ConfigWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSizeHint(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_sizehint_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__ConfigWidget_MinimumSizeHint(const Sonnet__ConfigWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* Sonnet__ConfigWidget_SuperMinimumSizeHint(const Sonnet__ConfigWidget* self) {
    return new QSize(self->Sonnet::ConfigWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMinimumSizeHint(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_minimumsizehint_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigWidget_HeightForWidth(const Sonnet__ConfigWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int Sonnet__ConfigWidget_SuperHeightForWidth(const Sonnet__ConfigWidget* self, int param1) {
    return self->Sonnet::ConfigWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHeightForWidth(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_heightforwidth_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_HasHeightForWidth(const Sonnet__ConfigWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool Sonnet__ConfigWidget_SuperHasHeightForWidth(const Sonnet__ConfigWidget* self) {
    return self->Sonnet::ConfigWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHasHeightForWidth(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_hasheightforwidth_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* Sonnet__ConfigWidget_PaintEngine(const Sonnet__ConfigWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* Sonnet__ConfigWidget_SuperPaintEngine(const Sonnet__ConfigWidget* self) {
    return self->Sonnet::ConfigWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnPaintEngine(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_paintengine_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_Event(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_SuperEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::event(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_event_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperMousePressEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMousePressEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_mousepressevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperMouseReleaseEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_mousereleaseevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperMouseDoubleClickEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseDoubleClickEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperMouseMoveEvent(Sonnet__ConfigWidget* self, QMouseEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMouseMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_mousemoveevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_WheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperWheelEvent(Sonnet__ConfigWidget* self, QWheelEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnWheelEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_wheelevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_KeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperKeyPressEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnKeyPressEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_keypressevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_KeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperKeyReleaseEvent(Sonnet__ConfigWidget* self, QKeyEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnKeyReleaseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_keyreleaseevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_FocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperFocusInEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusInEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_focusinevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_FocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperFocusOutEvent(Sonnet__ConfigWidget* self, QFocusEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusOutEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_focusoutevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_EnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperEnterEvent(Sonnet__ConfigWidget* self, QEnterEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_enterevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_LeaveEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperLeaveEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_leaveevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_PaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperPaintEvent(Sonnet__ConfigWidget* self, QPaintEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnPaintEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_paintevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_MoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperMoveEvent(Sonnet__ConfigWidget* self, QMoveEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_moveevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperResizeEvent(Sonnet__ConfigWidget* self, QResizeEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnResizeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_resizeevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_CloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperCloseEvent(Sonnet__ConfigWidget* self, QCloseEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnCloseEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_closeevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperContextMenuEvent(Sonnet__ConfigWidget* self, QContextMenuEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnContextMenuEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_contextmenuevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_TabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperTabletEvent(Sonnet__ConfigWidget* self, QTabletEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnTabletEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_tabletevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperActionEvent(Sonnet__ConfigWidget* self, QActionEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnActionEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_actionevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperDragEnterEvent(Sonnet__ConfigWidget* self, QDragEnterEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragEnterEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_dragenterevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperDragMoveEvent(Sonnet__ConfigWidget* self, QDragMoveEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragMoveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_dragmoveevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperDragLeaveEvent(Sonnet__ConfigWidget* self, QDragLeaveEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDragLeaveEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_dragleaveevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DropEvent(Sonnet__ConfigWidget* self, QDropEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperDropEvent(Sonnet__ConfigWidget* self, QDropEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDropEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_dropevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperShowEvent(Sonnet__ConfigWidget* self, QShowEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnShowEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_showevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_HideEvent(Sonnet__ConfigWidget* self, QHideEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperHideEvent(Sonnet__ConfigWidget* self, QHideEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnHideEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_hideevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_NativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_SuperNativeEvent(Sonnet__ConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnNativeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_nativeevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperChangeEvent(Sonnet__ConfigWidget* self, QEvent* param1) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnChangeEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_changeevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__ConfigWidget_Metric(const Sonnet__ConfigWidget* self, int param1) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int Sonnet__ConfigWidget_SuperMetric(const Sonnet__ConfigWidget* self, int param1) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnMetric(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_metric_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_InitPainter(const Sonnet__ConfigWidget* self, QPainter* painter) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperInitPainter(const Sonnet__ConfigWidget* self, QPainter* painter) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInitPainter(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_initpainter_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* Sonnet__ConfigWidget_Redirected(const Sonnet__ConfigWidget* self, QPoint* offset) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__ConfigWidget_SuperRedirected(const Sonnet__ConfigWidget* self, QPoint* offset) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnRedirected(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_redirected_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* Sonnet__ConfigWidget_SharedPainter(const Sonnet__ConfigWidget* self) {
    auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self));
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* Sonnet__ConfigWidget_SuperSharedPainter(const Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnSharedPainter(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_sharedpainter_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_InputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperInputMethodEvent(Sonnet__ConfigWidget* self, QInputMethodEvent* param1) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInputMethodEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_inputmethodevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* Sonnet__ConfigWidget_InputMethodQuery(const Sonnet__ConfigWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* Sonnet__ConfigWidget_SuperInputMethodQuery(const Sonnet__ConfigWidget* self, int param1) {
    return new QVariant(self->Sonnet::ConfigWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnInputMethodQuery(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self)))
        vsonnetconfigwidget->sonnet__configwidget_inputmethodquery_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_FocusNextPrevChild(Sonnet__ConfigWidget* self, bool next) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        return vsonnetconfigwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__ConfigWidget_SuperFocusNextPrevChild(Sonnet__ConfigWidget* self, bool next) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        return vsonnetconfigwidget->Sonnet::ConfigWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnFocusNextPrevChild(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_focusnextprevchild_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__ConfigWidget_EventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Sonnet__ConfigWidget_SuperEventFilter(Sonnet__ConfigWidget* self, QObject* watched, QEvent* event) {
    return self->Sonnet::ConfigWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnEventFilter(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_eventfilter_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_TimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperTimerEvent(Sonnet__ConfigWidget* self, QTimerEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnTimerEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_timerevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperChildEvent(Sonnet__ConfigWidget* self, QChildEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnChildEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_childevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_CustomEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperCustomEvent(Sonnet__ConfigWidget* self, QEvent* event) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnCustomEvent(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_customevent_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_ConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperConnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnConnectNotify(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_connectnotify_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__ConfigWidget_DisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self);
    if (vsonnetconfigwidget) {
        vsonnetconfigwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__ConfigWidget_SuperDisconnectNotify(Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->Sonnet::ConfigWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::ConfigWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__ConfigWidget_OnDisconnectNotify(Sonnet__ConfigWidget* self, intptr_t slot) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self))
        vsonnetconfigwidget->sonnet__configwidget_disconnectnotify_callback = reinterpret_cast<VirtualSonnetConfigWidget::Sonnet__ConfigWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Sonnet__ConfigWidget_SlotIgnoreWordRemoved(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->VirtualSonnetConfigWidget::slotIgnoreWordRemoved();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::slotIgnoreWordRemoved called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigWidget_SlotIgnoreWordAdded(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->VirtualSonnetConfigWidget::slotIgnoreWordAdded();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::slotIgnoreWordAdded called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigWidget_UpdateMicroFocus(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->VirtualSonnetConfigWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigWidget_Create(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->VirtualSonnetConfigWidget::create();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__ConfigWidget_Destroy(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        vsonnetconfigwidget->VirtualSonnetConfigWidget::destroy();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigWidget_FocusNextChild(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::focusNextChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigWidget_FocusPreviousChild(Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = dynamic_cast<VirtualSonnetConfigWidget*>(self)) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__ConfigWidget_Sender(const Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::sender();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigWidget_SenderSignalIndex(const Sonnet__ConfigWidget* self) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__ConfigWidget_Receivers(const Sonnet__ConfigWidget* self, const char* signal) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__ConfigWidget_IsSignalConnected(const Sonnet__ConfigWidget* self, const QMetaMethod* signal) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double Sonnet__ConfigWidget_GetDecodedMetricF(const Sonnet__ConfigWidget* self, int metricA, int metricB) {
    if (auto* vsonnetconfigwidget = const_cast<VirtualSonnetConfigWidget*>(dynamic_cast<const VirtualSonnetConfigWidget*>(self))) {
        return vsonnetconfigwidget->VirtualSonnetConfigWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method Sonnet::ConfigWidget::getDecodedMetricF called without a directly constructed type");
}

void Sonnet__ConfigWidget_Delete(Sonnet__ConfigWidget* self) {
    delete self;
}
