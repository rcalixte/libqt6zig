#include <KGradientSelector>
#include <KSelector>
#include <QAbstractSlider>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kselector.h>
#include "libkselector.h"
#include "libkselector.hxx"

KSelector* KSelector_new(QWidget* parent) {
    return new VirtualKSelector(parent);
}

KSelector* KSelector_new2() {
    return new VirtualKSelector();
}

KSelector* KSelector_new3(int o) {
    return new VirtualKSelector(static_cast<Qt::Orientation>(o));
}

KSelector* KSelector_new4(int o, QWidget* parent) {
    return new VirtualKSelector(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* KSelector_MetaObject(const KSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSelector_Metacast(KSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSelector_Metacall(KSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSelector_Tr(const char* s) {
    auto _ret = KSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRect* KSelector_ContentsRect(const KSelector* self) {
    return new QRect(self->contentsRect());
}

void KSelector_SetIndent(KSelector* self, bool i) {
    self->setIndent(i);
}

bool KSelector_Indent(const KSelector* self) {
    return self->indent();
}

void KSelector_SetArrowDirection(KSelector* self, int direction) {
    self->setArrowDirection(static_cast<Qt::ArrowType>(direction));
}

int KSelector_ArrowDirection(const KSelector* self) {
    return static_cast<int>(self->arrowDirection());
}

void KSelector_DrawContents(KSelector* self, QPainter* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->drawContents(param1);
    }
}

void KSelector_DrawArrow(KSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->drawArrow(painter, *pos);
    }
}

void KSelector_PaintEvent(KSelector* self, QPaintEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->paintEvent(param1);
    }
}

void KSelector_MousePressEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->mousePressEvent(e);
    }
}

void KSelector_MouseMoveEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->mouseMoveEvent(e);
    }
}

void KSelector_MouseReleaseEvent(KSelector* self, QMouseEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->mouseReleaseEvent(e);
    }
}

void KSelector_WheelEvent(KSelector* self, QWheelEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->wheelEvent(param1);
    }
}

libqt_string KSelector_Tr2(const char* s, const char* c) {
    auto _ret = KSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = KSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSelector_SuperMetaObject(const KSelector* self) {
    return (QMetaObject*)self->KSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMetaObject(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_metaobject_callback = reinterpret_cast<VirtualKSelector::KSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSelector_SuperMetacast(KSelector* self, const char* param1) {
    return self->KSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMetacast(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_metacast_callback = reinterpret_cast<VirtualKSelector::KSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSelector_SuperMetacall(KSelector* self, int param1, int param2, void** param3) {
    return self->KSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMetacall(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_metacall_callback = reinterpret_cast<VirtualKSelector::KSelector_Metacall_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperDrawContents(KSelector* self, QPainter* param1) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::drawContents(param1);
    } else
        qFatal("Error: Protected virtual method KSelector::drawContents called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDrawContents(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_drawcontents_callback = reinterpret_cast<VirtualKSelector::KSelector_DrawContents_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperDrawArrow(KSelector* self, QPainter* painter, const QPoint* pos) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::drawArrow(painter, *pos);
    } else
        qFatal("Error: Protected virtual method KSelector::drawArrow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDrawArrow(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_drawarrow_callback = reinterpret_cast<VirtualKSelector::KSelector_DrawArrow_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperPaintEvent(KSelector* self, QPaintEvent* param1) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnPaintEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_paintevent_callback = reinterpret_cast<VirtualKSelector::KSelector_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperMousePressEvent(KSelector* self, QMouseEvent* e) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMousePressEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_mousepressevent_callback = reinterpret_cast<VirtualKSelector::KSelector_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperMouseMoveEvent(KSelector* self, QMouseEvent* e) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMouseMoveEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_mousemoveevent_callback = reinterpret_cast<VirtualKSelector::KSelector_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperMouseReleaseEvent(KSelector* self, QMouseEvent* e) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMouseReleaseEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_mousereleaseevent_callback = reinterpret_cast<VirtualKSelector::KSelector_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void KSelector_SuperWheelEvent(KSelector* self, QWheelEvent* param1) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnWheelEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_wheelevent_callback = reinterpret_cast<VirtualKSelector::KSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSelector_Event(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        return vkselector->event(e);
    } else {
        qFatal("Error: Protected virtual method KSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSelector_SuperEvent(KSelector* self, QEvent* e) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        return vkselector->KSelector::event(e);
    } else
        qFatal("Error: Protected virtual method KSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_event_callback = reinterpret_cast<VirtualKSelector::KSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void KSelector_SliderChange(KSelector* self, int change) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    } else {
        qFatal("Error: Protected virtual method KSelector::sliderChange called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperSliderChange(KSelector* self, int change) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::sliderChange(static_cast<VirtualKSelector::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method KSelector::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSliderChange(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_sliderchange_callback = reinterpret_cast<VirtualKSelector::KSelector_SliderChange_Callback>(slot);
}

// Derived class handler implementation
void KSelector_KeyPressEvent(KSelector* self, QKeyEvent* ev) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KSelector::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperKeyPressEvent(KSelector* self, QKeyEvent* ev) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnKeyPressEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_keypressevent_callback = reinterpret_cast<VirtualKSelector::KSelector_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_TimerEvent(KSelector* self, QTimerEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperTimerEvent(KSelector* self, QTimerEvent* param1) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnTimerEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_timerevent_callback = reinterpret_cast<VirtualKSelector::KSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ChangeEvent(KSelector* self, QEvent* e) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperChangeEvent(KSelector* self, QEvent* e) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnChangeEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_changeevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSelector_DevType(const KSelector* self) {
    return self->devType();
}

// Base class handler implementation
int KSelector_SuperDevType(const KSelector* self) {
    return self->KSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDevType(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_devtype_callback = reinterpret_cast<VirtualKSelector::KSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void KSelector_SetVisible(KSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSelector_SuperSetVisible(KSelector* self, bool visible) {
    self->KSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSetVisible(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_setvisible_callback = reinterpret_cast<VirtualKSelector::KSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KSelector_SizeHint(const KSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KSelector_SuperSizeHint(const KSelector* self) {
    return new QSize(self->KSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSizeHint(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_sizehint_callback = reinterpret_cast<VirtualKSelector::KSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KSelector_MinimumSizeHint(const KSelector* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KSelector_SuperMinimumSizeHint(const KSelector* self) {
    return new QSize(self->KSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMinimumSizeHint(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_minimumsizehint_callback = reinterpret_cast<VirtualKSelector::KSelector_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KSelector_HeightForWidth(const KSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSelector_SuperHeightForWidth(const KSelector* self, int param1) {
    return self->KSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHeightForWidth(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_heightforwidth_callback = reinterpret_cast<VirtualKSelector::KSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSelector_HasHeightForWidth(const KSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSelector_SuperHasHeightForWidth(const KSelector* self) {
    return self->KSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHasHeightForWidth(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_hasheightforwidth_callback = reinterpret_cast<VirtualKSelector::KSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSelector_PaintEngine(const KSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSelector_SuperPaintEngine(const KSelector* self) {
    return self->KSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnPaintEngine(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_paintengine_callback = reinterpret_cast<VirtualKSelector::KSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KSelector_MouseDoubleClickEvent(KSelector* self, QMouseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperMouseDoubleClickEvent(KSelector* self, QMouseEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMouseDoubleClickEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSelector::KSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_KeyReleaseEvent(KSelector* self, QKeyEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperKeyReleaseEvent(KSelector* self, QKeyEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnKeyReleaseEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_keyreleaseevent_callback = reinterpret_cast<VirtualKSelector::KSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_FocusInEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperFocusInEvent(KSelector* self, QFocusEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusInEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_focusinevent_callback = reinterpret_cast<VirtualKSelector::KSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_FocusOutEvent(KSelector* self, QFocusEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperFocusOutEvent(KSelector* self, QFocusEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusOutEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_focusoutevent_callback = reinterpret_cast<VirtualKSelector::KSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_EnterEvent(KSelector* self, QEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperEnterEvent(KSelector* self, QEnterEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEnterEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_enterevent_callback = reinterpret_cast<VirtualKSelector::KSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_LeaveEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperLeaveEvent(KSelector* self, QEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnLeaveEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_leaveevent_callback = reinterpret_cast<VirtualKSelector::KSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_MoveEvent(KSelector* self, QMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperMoveEvent(KSelector* self, QMoveEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMoveEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_moveevent_callback = reinterpret_cast<VirtualKSelector::KSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ResizeEvent(KSelector* self, QResizeEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperResizeEvent(KSelector* self, QResizeEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnResizeEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_resizeevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_CloseEvent(KSelector* self, QCloseEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperCloseEvent(KSelector* self, QCloseEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnCloseEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_closeevent_callback = reinterpret_cast<VirtualKSelector::KSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ContextMenuEvent(KSelector* self, QContextMenuEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperContextMenuEvent(KSelector* self, QContextMenuEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnContextMenuEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_contextmenuevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_TabletEvent(KSelector* self, QTabletEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperTabletEvent(KSelector* self, QTabletEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnTabletEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_tabletevent_callback = reinterpret_cast<VirtualKSelector::KSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ActionEvent(KSelector* self, QActionEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperActionEvent(KSelector* self, QActionEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnActionEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_actionevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_DragEnterEvent(KSelector* self, QDragEnterEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperDragEnterEvent(KSelector* self, QDragEnterEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragEnterEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_dragenterevent_callback = reinterpret_cast<VirtualKSelector::KSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_DragMoveEvent(KSelector* self, QDragMoveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperDragMoveEvent(KSelector* self, QDragMoveEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragMoveEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_dragmoveevent_callback = reinterpret_cast<VirtualKSelector::KSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_DragLeaveEvent(KSelector* self, QDragLeaveEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperDragLeaveEvent(KSelector* self, QDragLeaveEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDragLeaveEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_dragleaveevent_callback = reinterpret_cast<VirtualKSelector::KSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_DropEvent(KSelector* self, QDropEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperDropEvent(KSelector* self, QDropEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDropEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_dropevent_callback = reinterpret_cast<VirtualKSelector::KSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ShowEvent(KSelector* self, QShowEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperShowEvent(KSelector* self, QShowEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnShowEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_showevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_HideEvent(KSelector* self, QHideEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperHideEvent(KSelector* self, QHideEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnHideEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_hideevent_callback = reinterpret_cast<VirtualKSelector::KSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSelector_NativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        return vkselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSelector_SuperNativeEvent(KSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        return vkselector->KSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnNativeEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_nativeevent_callback = reinterpret_cast<VirtualKSelector::KSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSelector_Metric(const KSelector* self, int param1) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector) {
        return vkselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSelector_SuperMetric(const KSelector* self, int param1) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->KSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnMetric(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_metric_callback = reinterpret_cast<VirtualKSelector::KSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSelector_InitPainter(const KSelector* self, QPainter* painter) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector) {
        vkselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperInitPainter(const KSelector* self, QPainter* painter) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        vkselector->KSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInitPainter(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_initpainter_callback = reinterpret_cast<VirtualKSelector::KSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSelector_Redirected(const KSelector* self, QPoint* offset) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector) {
        return vkselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSelector_SuperRedirected(const KSelector* self, QPoint* offset) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->KSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnRedirected(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_redirected_callback = reinterpret_cast<VirtualKSelector::KSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSelector_SharedPainter(const KSelector* self) {
    auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self));
    if (vkselector) {
        return vkselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSelector_SuperSharedPainter(const KSelector* self) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->KSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnSharedPainter(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_sharedpainter_callback = reinterpret_cast<VirtualKSelector::KSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSelector_InputMethodEvent(KSelector* self, QInputMethodEvent* param1) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperInputMethodEvent(KSelector* self, QInputMethodEvent* param1) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInputMethodEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_inputmethodevent_callback = reinterpret_cast<VirtualKSelector::KSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSelector_InputMethodQuery(const KSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSelector_SuperInputMethodQuery(const KSelector* self, int param1) {
    return new QVariant(self->KSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnInputMethodQuery(KSelector* self, intptr_t slot) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self)))
        vkselector->kselector_inputmethodquery_callback = reinterpret_cast<VirtualKSelector::KSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSelector_FocusNextPrevChild(KSelector* self, bool next) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        return vkselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSelector_SuperFocusNextPrevChild(KSelector* self, bool next) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        return vkselector->KSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnFocusNextPrevChild(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_focusnextprevchild_callback = reinterpret_cast<VirtualKSelector::KSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KSelector_EventFilter(KSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSelector_SuperEventFilter(KSelector* self, QObject* watched, QEvent* event) {
    return self->KSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnEventFilter(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_eventfilter_callback = reinterpret_cast<VirtualKSelector::KSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ChildEvent(KSelector* self, QChildEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperChildEvent(KSelector* self, QChildEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnChildEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_childevent_callback = reinterpret_cast<VirtualKSelector::KSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_CustomEvent(KSelector* self, QEvent* event) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperCustomEvent(KSelector* self, QEvent* event) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnCustomEvent(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_customevent_callback = reinterpret_cast<VirtualKSelector::KSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSelector_ConnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperConnectNotify(KSelector* self, const QMetaMethod* signal) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnConnectNotify(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_connectnotify_callback = reinterpret_cast<VirtualKSelector::KSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSelector_DisconnectNotify(KSelector* self, const QMetaMethod* signal) {
    auto* vkselector = dynamic_cast<VirtualKSelector*>(self);
    if (vkselector) {
        vkselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSelector_SuperDisconnectNotify(KSelector* self, const QMetaMethod* signal) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->KSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSelector_OnDisconnectNotify(KSelector* self, intptr_t slot) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self))
        vkselector->kselector_disconnectnotify_callback = reinterpret_cast<VirtualKSelector::KSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSelector_SetRepeatAction(KSelector* self, int action) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->VirtualKSelector::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method KSelector::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelector_RepeatAction(const KSelector* self) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return static_cast<int>(vkselector->VirtualKSelector::repeatAction());
    } else
        qFatal("Error: Protected method KSelector::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelector_UpdateMicroFocus(KSelector* self) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->VirtualKSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelector_Create(KSelector* self) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->VirtualKSelector::create();
    } else
        qFatal("Error: Protected method KSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSelector_Destroy(KSelector* self) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        vkselector->VirtualKSelector::destroy();
    } else
        qFatal("Error: Protected method KSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelector_FocusNextChild(KSelector* self) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        return vkselector->VirtualKSelector::focusNextChild();
    } else
        qFatal("Error: Protected method KSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelector_FocusPreviousChild(KSelector* self) {
    if (auto* vkselector = dynamic_cast<VirtualKSelector*>(self)) {
        return vkselector->VirtualKSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSelector_Sender(const KSelector* self) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->VirtualKSelector::sender();
    } else
        qFatal("Error: Protected method KSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelector_SenderSignalIndex(const KSelector* self) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->VirtualKSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSelector_Receivers(const KSelector* self, const char* signal) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->VirtualKSelector::receivers(signal);
    } else
        qFatal("Error: Protected method KSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSelector_IsSignalConnected(const KSelector* self, const QMetaMethod* signal) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->VirtualKSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSelector_GetDecodedMetricF(const KSelector* self, int metricA, int metricB) {
    if (auto* vkselector = const_cast<VirtualKSelector*>(dynamic_cast<const VirtualKSelector*>(self))) {
        return vkselector->VirtualKSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSelector::getDecodedMetricF called without a directly constructed type");
}

void KSelector_Delete(KSelector* self) {
    delete self;
}

KGradientSelector* KGradientSelector_new(QWidget* parent) {
    return new VirtualKGradientSelector(parent);
}

KGradientSelector* KGradientSelector_new2() {
    return new VirtualKGradientSelector();
}

KGradientSelector* KGradientSelector_new3(int o) {
    return new VirtualKGradientSelector(static_cast<Qt::Orientation>(o));
}

KGradientSelector* KGradientSelector_new4(int o, QWidget* parent) {
    return new VirtualKGradientSelector(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* KGradientSelector_MetaObject(const KGradientSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* KGradientSelector_Metacast(KGradientSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KGradientSelector_Metacall(KGradientSelector* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KGradientSelector_Tr(const char* s) {
    auto _ret = KGradientSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGradientSelector_SetStops(KGradientSelector* self, const libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    QList<QPair<double, QColor>> stops_QList;
    stops_QList.reserve(stops.len);
    pair_double_qcolor /* tuple of double and QColor* */* stops_arr = static_cast<pair_double_qcolor /* tuple of double and QColor* */*>(stops.data);
    for (size_t i = 0; i < stops.len; ++i) {
        QPair<double, QColor> stops_arr_i_QPair;
        stops_arr_i_QPair.first = stops_arr[i].first;
        stops_arr_i_QPair.second = *(stops_arr[i].second);
        stops_QList.push_back(stops_arr_i_QPair);
    }
    self->setStops(stops_QList);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ KGradientSelector_Stops(const KGradientSelector* self) {
    QList<QPair<double, QColor>> _ret = self->stops();
    // Convert QList<> from C++ memory to manually-managed C memory
    pair_double_qcolor /* tuple of double and QColor* */* _arr = static_cast<pair_double_qcolor /* tuple of double and QColor* */*>(malloc(sizeof(pair_double_qcolor /* tuple of double and QColor* */) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QPair<double, QColor> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        pair_double_qcolor /* tuple of double and QColor* */ _lv_out;
        _lv_out.first = _lv_ret.first;
        _lv_out.second = new QColor(_lv_ret.second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KGradientSelector_SetColors(KGradientSelector* self, const QColor* col1, const QColor* col2) {
    self->setColors(*col1, *col2);
}

void KGradientSelector_SetText(KGradientSelector* self, const libqt_string t1, const libqt_string t2) {
    QString t1_QString = QString::fromUtf8(t1.data, t1.len);
    QString t2_QString = QString::fromUtf8(t2.data, t2.len);
    self->setText(t1_QString, t2_QString);
}

void KGradientSelector_SetFirstColor(KGradientSelector* self, const QColor* col) {
    self->setFirstColor(*col);
}

void KGradientSelector_SetSecondColor(KGradientSelector* self, const QColor* col) {
    self->setSecondColor(*col);
}

void KGradientSelector_SetFirstText(KGradientSelector* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    self->setFirstText(t_QString);
}

void KGradientSelector_SetSecondText(KGradientSelector* self, const libqt_string t) {
    QString t_QString = QString::fromUtf8(t.data, t.len);
    self->setSecondText(t_QString);
}

QColor* KGradientSelector_FirstColor(const KGradientSelector* self) {
    return new QColor(self->firstColor());
}

QColor* KGradientSelector_SecondColor(const KGradientSelector* self) {
    return new QColor(self->secondColor());
}

libqt_string KGradientSelector_FirstText(const KGradientSelector* self) {
    auto _ret = self->firstText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGradientSelector_SecondText(const KGradientSelector* self) {
    auto _ret = self->secondText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KGradientSelector_DrawContents(KGradientSelector* self, QPainter* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->drawContents(param1);
    }
}

QSize* KGradientSelector_MinimumSize(const KGradientSelector* self) {
    auto* vkgradientselector = dynamic_cast<const VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        return new QSize(vkgradientselector->minimumSize());
    }
    qFatal("Error: Protected method KGradientSelector::minimumSize called without a directly constructed type");
}

libqt_string KGradientSelector_Tr2(const char* s, const char* c) {
    auto _ret = KGradientSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KGradientSelector_Tr3(const char* s, const char* c, int n) {
    auto _ret = KGradientSelector::tr(s, c, static_cast<int>(n));
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
QMetaObject* KGradientSelector_SuperMetaObject(const KGradientSelector* self) {
    return (QMetaObject*)self->KGradientSelector::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMetaObject(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_metaobject_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KGradientSelector_SuperMetacast(KGradientSelector* self, const char* param1) {
    return self->KGradientSelector::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMetacast(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_metacast_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Metacast_Callback>(slot);
}

// Base class handler implementation
int KGradientSelector_SuperMetacall(KGradientSelector* self, int param1, int param2, void** param3) {
    return self->KGradientSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMetacall(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_metacall_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Metacall_Callback>(slot);
}

// Base class handler implementation
void KGradientSelector_SuperDrawContents(KGradientSelector* self, QPainter* param1) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::drawContents(param1);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::drawContents called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDrawContents(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_drawcontents_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DrawContents_Callback>(slot);
}

// Base class handler implementation
QSize* KGradientSelector_SuperMinimumSize(const KGradientSelector* self) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        return new QSize(vkgradientselector->KGradientSelector::minimumSize());
    qFatal("Error: Protected virtual method KGradientSelector::minimumSize called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMinimumSize(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_minimumsize_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MinimumSize_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->drawArrow(painter, *pos);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::drawArrow called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDrawArrow(KGradientSelector* self, QPainter* painter, const QPoint* pos) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::drawArrow(painter, *pos);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::drawArrow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDrawArrow(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_drawarrow_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DrawArrow_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_PaintEvent(KGradientSelector* self, QPaintEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperPaintEvent(KGradientSelector* self, QPaintEvent* param1) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnPaintEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_paintevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_MousePressEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperMousePressEvent(KGradientSelector* self, QMouseEvent* e) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMousePressEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_mousepressevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_MouseMoveEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperMouseMoveEvent(KGradientSelector* self, QMouseEvent* e) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseMoveEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_mousemoveevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_MouseReleaseEvent(KGradientSelector* self, QMouseEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperMouseReleaseEvent(KGradientSelector* self, QMouseEvent* e) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseReleaseEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_mousereleaseevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_WheelEvent(KGradientSelector* self, QWheelEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperWheelEvent(KGradientSelector* self, QWheelEvent* param1) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnWheelEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_wheelevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
bool KGradientSelector_Event(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        return vkgradientselector->event(e);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KGradientSelector_SuperEvent(KGradientSelector* self, QEvent* e) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        return vkgradientselector->KGradientSelector::event(e);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_event_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Event_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_SliderChange(KGradientSelector* self, int change) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::sliderChange called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperSliderChange(KGradientSelector* self, int change) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::sliderChange(static_cast<VirtualKGradientSelector::SliderChange>(change));
    } else
        qFatal("Error: Protected virtual method KGradientSelector::sliderChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSliderChange(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_sliderchange_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SliderChange_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_KeyPressEvent(KGradientSelector* self, QKeyEvent* ev) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->keyPressEvent(ev);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperKeyPressEvent(KGradientSelector* self, QKeyEvent* ev) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnKeyPressEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_keypressevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_TimerEvent(KGradientSelector* self, QTimerEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->timerEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperTimerEvent(KGradientSelector* self, QTimerEvent* param1) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnTimerEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_timerevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ChangeEvent(KGradientSelector* self, QEvent* e) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperChangeEvent(KGradientSelector* self, QEvent* e) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnChangeEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_changeevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KGradientSelector_DevType(const KGradientSelector* self) {
    return self->devType();
}

// Base class handler implementation
int KGradientSelector_SuperDevType(const KGradientSelector* self) {
    return self->KGradientSelector::devType();
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDevType(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_devtype_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DevType_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_SetVisible(KGradientSelector* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KGradientSelector_SuperSetVisible(KGradientSelector* self, bool visible) {
    self->KGradientSelector::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSetVisible(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_setvisible_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KGradientSelector_SizeHint(const KGradientSelector* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KGradientSelector_SuperSizeHint(const KGradientSelector* self) {
    return new QSize(self->KGradientSelector::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSizeHint(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_sizehint_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KGradientSelector_MinimumSizeHint(const KGradientSelector* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KGradientSelector_SuperMinimumSizeHint(const KGradientSelector* self) {
    return new QSize(self->KGradientSelector::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMinimumSizeHint(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_minimumsizehint_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KGradientSelector_HeightForWidth(const KGradientSelector* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KGradientSelector_SuperHeightForWidth(const KGradientSelector* self, int param1) {
    return self->KGradientSelector::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHeightForWidth(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_heightforwidth_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KGradientSelector_HasHeightForWidth(const KGradientSelector* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KGradientSelector_SuperHasHeightForWidth(const KGradientSelector* self) {
    return self->KGradientSelector::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHasHeightForWidth(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_hasheightforwidth_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KGradientSelector_PaintEngine(const KGradientSelector* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KGradientSelector_SuperPaintEngine(const KGradientSelector* self) {
    return self->KGradientSelector::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnPaintEngine(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_paintengine_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_MouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperMouseDoubleClickEvent(KGradientSelector* self, QMouseEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMouseDoubleClickEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_mousedoubleclickevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_KeyReleaseEvent(KGradientSelector* self, QKeyEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperKeyReleaseEvent(KGradientSelector* self, QKeyEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnKeyReleaseEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_keyreleaseevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_FocusInEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperFocusInEvent(KGradientSelector* self, QFocusEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusInEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_focusinevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_FocusOutEvent(KGradientSelector* self, QFocusEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperFocusOutEvent(KGradientSelector* self, QFocusEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusOutEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_focusoutevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_EnterEvent(KGradientSelector* self, QEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperEnterEvent(KGradientSelector* self, QEnterEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEnterEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_enterevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_LeaveEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperLeaveEvent(KGradientSelector* self, QEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnLeaveEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_leaveevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_MoveEvent(KGradientSelector* self, QMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperMoveEvent(KGradientSelector* self, QMoveEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMoveEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_moveevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ResizeEvent(KGradientSelector* self, QResizeEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperResizeEvent(KGradientSelector* self, QResizeEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnResizeEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_resizeevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_CloseEvent(KGradientSelector* self, QCloseEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperCloseEvent(KGradientSelector* self, QCloseEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnCloseEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_closeevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperContextMenuEvent(KGradientSelector* self, QContextMenuEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnContextMenuEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_contextmenuevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_TabletEvent(KGradientSelector* self, QTabletEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperTabletEvent(KGradientSelector* self, QTabletEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnTabletEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_tabletevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ActionEvent(KGradientSelector* self, QActionEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperActionEvent(KGradientSelector* self, QActionEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnActionEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_actionevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DragEnterEvent(KGradientSelector* self, QDragEnterEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDragEnterEvent(KGradientSelector* self, QDragEnterEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragEnterEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_dragenterevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DragMoveEvent(KGradientSelector* self, QDragMoveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDragMoveEvent(KGradientSelector* self, QDragMoveEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragMoveEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_dragmoveevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDragLeaveEvent(KGradientSelector* self, QDragLeaveEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDragLeaveEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_dragleaveevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DropEvent(KGradientSelector* self, QDropEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDropEvent(KGradientSelector* self, QDropEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDropEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_dropevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ShowEvent(KGradientSelector* self, QShowEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperShowEvent(KGradientSelector* self, QShowEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnShowEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_showevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_HideEvent(KGradientSelector* self, QHideEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperHideEvent(KGradientSelector* self, QHideEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnHideEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_hideevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KGradientSelector_NativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        return vkgradientselector->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KGradientSelector_SuperNativeEvent(KGradientSelector* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        return vkgradientselector->KGradientSelector::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KGradientSelector::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnNativeEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_nativeevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KGradientSelector_Metric(const KGradientSelector* self, int param1) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector) {
        return vkgradientselector->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KGradientSelector_SuperMetric(const KGradientSelector* self, int param1) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->KGradientSelector::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KGradientSelector::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnMetric(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_metric_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Metric_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_InitPainter(const KGradientSelector* self, QPainter* painter) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector) {
        vkgradientselector->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperInitPainter(const KGradientSelector* self, QPainter* painter) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        vkgradientselector->KGradientSelector::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInitPainter(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_initpainter_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KGradientSelector_Redirected(const KGradientSelector* self, QPoint* offset) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector) {
        return vkgradientselector->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KGradientSelector_SuperRedirected(const KGradientSelector* self, QPoint* offset) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->KGradientSelector::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnRedirected(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_redirected_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KGradientSelector_SharedPainter(const KGradientSelector* self) {
    auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self));
    if (vkgradientselector) {
        return vkgradientselector->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KGradientSelector_SuperSharedPainter(const KGradientSelector* self) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->KGradientSelector::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KGradientSelector::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnSharedPainter(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_sharedpainter_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_InputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperInputMethodEvent(KGradientSelector* self, QInputMethodEvent* param1) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInputMethodEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_inputmethodevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KGradientSelector_InputMethodQuery(const KGradientSelector* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KGradientSelector_SuperInputMethodQuery(const KGradientSelector* self, int param1) {
    return new QVariant(self->KGradientSelector::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnInputMethodQuery(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self)))
        vkgradientselector->kgradientselector_inputmethodquery_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KGradientSelector_FocusNextPrevChild(KGradientSelector* self, bool next) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        return vkgradientselector->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KGradientSelector_SuperFocusNextPrevChild(KGradientSelector* self, bool next) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        return vkgradientselector->KGradientSelector::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnFocusNextPrevChild(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_focusnextprevchild_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KGradientSelector_EventFilter(KGradientSelector* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KGradientSelector_SuperEventFilter(KGradientSelector* self, QObject* watched, QEvent* event) {
    return self->KGradientSelector::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnEventFilter(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_eventfilter_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ChildEvent(KGradientSelector* self, QChildEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperChildEvent(KGradientSelector* self, QChildEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnChildEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_childevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_CustomEvent(KGradientSelector* self, QEvent* event) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperCustomEvent(KGradientSelector* self, QEvent* event) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnCustomEvent(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_customevent_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_ConnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperConnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnConnectNotify(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_connectnotify_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KGradientSelector_DisconnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self);
    if (vkgradientselector) {
        vkgradientselector->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KGradientSelector::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KGradientSelector_SuperDisconnectNotify(KGradientSelector* self, const QMetaMethod* signal) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->KGradientSelector::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KGradientSelector::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KGradientSelector_OnDisconnectNotify(KGradientSelector* self, intptr_t slot) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self))
        vkgradientselector->kgradientselector_disconnectnotify_callback = reinterpret_cast<VirtualKGradientSelector::KGradientSelector_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KGradientSelector_SetRepeatAction(KGradientSelector* self, int action) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->VirtualKGradientSelector::setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else
        qFatal("Error: Protected method KGradientSelector::setRepeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
int KGradientSelector_RepeatAction(const KGradientSelector* self) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return static_cast<int>(vkgradientselector->VirtualKGradientSelector::repeatAction());
    } else
        qFatal("Error: Protected method KGradientSelector::repeatAction called without a directly constructed type");
}

// Derived class protected handler implementation
void KGradientSelector_UpdateMicroFocus(KGradientSelector* self) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->VirtualKGradientSelector::updateMicroFocus();
    } else
        qFatal("Error: Protected method KGradientSelector::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KGradientSelector_Create(KGradientSelector* self) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->VirtualKGradientSelector::create();
    } else
        qFatal("Error: Protected method KGradientSelector::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KGradientSelector_Destroy(KGradientSelector* self) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        vkgradientselector->VirtualKGradientSelector::destroy();
    } else
        qFatal("Error: Protected method KGradientSelector::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KGradientSelector_FocusNextChild(KGradientSelector* self) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        return vkgradientselector->VirtualKGradientSelector::focusNextChild();
    } else
        qFatal("Error: Protected method KGradientSelector::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KGradientSelector_FocusPreviousChild(KGradientSelector* self) {
    if (auto* vkgradientselector = dynamic_cast<VirtualKGradientSelector*>(self)) {
        return vkgradientselector->VirtualKGradientSelector::focusPreviousChild();
    } else
        qFatal("Error: Protected method KGradientSelector::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KGradientSelector_Sender(const KGradientSelector* self) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->VirtualKGradientSelector::sender();
    } else
        qFatal("Error: Protected method KGradientSelector::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KGradientSelector_SenderSignalIndex(const KGradientSelector* self) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->VirtualKGradientSelector::senderSignalIndex();
    } else
        qFatal("Error: Protected method KGradientSelector::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KGradientSelector_Receivers(const KGradientSelector* self, const char* signal) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->VirtualKGradientSelector::receivers(signal);
    } else
        qFatal("Error: Protected method KGradientSelector::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KGradientSelector_IsSignalConnected(const KGradientSelector* self, const QMetaMethod* signal) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->VirtualKGradientSelector::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KGradientSelector::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KGradientSelector_GetDecodedMetricF(const KGradientSelector* self, int metricA, int metricB) {
    if (auto* vkgradientselector = const_cast<VirtualKGradientSelector*>(dynamic_cast<const VirtualKGradientSelector*>(self))) {
        return vkgradientselector->VirtualKGradientSelector::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KGradientSelector::getDecodedMetricF called without a directly constructed type");
}

void KGradientSelector_Delete(KGradientSelector* self) {
    delete self;
}
