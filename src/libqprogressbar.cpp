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
#include <QProgressBar>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionProgressBar>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressbar.h>
#include "libqprogressbar.h"
#include "libqprogressbar.hxx"

QProgressBar* QProgressBar_new(QWidget* parent) {
    return new VirtualQProgressBar(parent);
}

QProgressBar* QProgressBar_new2() {
    return new VirtualQProgressBar();
}

QMetaObject* QProgressBar_MetaObject(const QProgressBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProgressBar_Metacast(QProgressBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProgressBar_Metacall(QProgressBar* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QProgressBar_Tr(const char* s) {
    auto _ret = QProgressBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QProgressBar_Minimum(const QProgressBar* self) {
    return self->minimum();
}

int QProgressBar_Maximum(const QProgressBar* self) {
    return self->maximum();
}

int QProgressBar_Value(const QProgressBar* self) {
    return self->value();
}

libqt_string QProgressBar_Text(const QProgressBar* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QProgressBar_SetTextVisible(QProgressBar* self, bool visible) {
    self->setTextVisible(visible);
}

bool QProgressBar_IsTextVisible(const QProgressBar* self) {
    return self->isTextVisible();
}

int QProgressBar_Alignment(const QProgressBar* self) {
    return static_cast<int>(self->alignment());
}

void QProgressBar_SetAlignment(QProgressBar* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

QSize* QProgressBar_SizeHint(const QProgressBar* self) {
    return new QSize(self->sizeHint());
}

QSize* QProgressBar_MinimumSizeHint(const QProgressBar* self) {
    return new QSize(self->minimumSizeHint());
}

int QProgressBar_Orientation(const QProgressBar* self) {
    return static_cast<int>(self->orientation());
}

void QProgressBar_SetInvertedAppearance(QProgressBar* self, bool invert) {
    self->setInvertedAppearance(invert);
}

bool QProgressBar_InvertedAppearance(const QProgressBar* self) {
    return self->invertedAppearance();
}

void QProgressBar_SetTextDirection(QProgressBar* self, int textDirection) {
    self->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

int QProgressBar_TextDirection(const QProgressBar* self) {
    return static_cast<int>(self->textDirection());
}

void QProgressBar_SetFormat(QProgressBar* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setFormat(format_QString);
}

void QProgressBar_ResetFormat(QProgressBar* self) {
    self->resetFormat();
}

libqt_string QProgressBar_Format(const QProgressBar* self) {
    auto _ret = self->format();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QProgressBar_Reset(QProgressBar* self) {
    self->reset();
}

void QProgressBar_SetRange(QProgressBar* self, int minimum, int maximum) {
    self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressBar_SetMinimum(QProgressBar* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

void QProgressBar_SetMaximum(QProgressBar* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

void QProgressBar_SetValue(QProgressBar* self, int value) {
    self->setValue(static_cast<int>(value));
}

void QProgressBar_SetOrientation(QProgressBar* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QProgressBar_ValueChanged(QProgressBar* self, int value) {
    self->valueChanged(static_cast<int>(value));
}

void QProgressBar_Connect_ValueChanged(QProgressBar* self, intptr_t slot) {
    void (*slotFunc)(QProgressBar*, int) = reinterpret_cast<void (*)(QProgressBar*, int)>(slot);
    QProgressBar::connect(self,
                          static_cast<void (QProgressBar::*)(int)>(&QProgressBar::valueChanged),
                          [self, slotFunc](int value) {
                              int sigval1 = value;
                              slotFunc(self, sigval1);
                          });
}

bool QProgressBar_Event(QProgressBar* self, QEvent* e) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        return vqprogressbar->event(e);
    }
    qFatal("Error: Protected method QProgressBar::event called without a directly constructed type");
}

void QProgressBar_PaintEvent(QProgressBar* self, QPaintEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->paintEvent(param1);
    }
}

void QProgressBar_InitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option) {
    auto* vqprogressbar = dynamic_cast<const VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->initStyleOption(option);
    }
}

libqt_string QProgressBar_Tr2(const char* s, const char* c) {
    auto _ret = QProgressBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QProgressBar_Tr3(const char* s, const char* c, int n) {
    auto _ret = QProgressBar::tr(s, c, static_cast<int>(n));
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
QMetaObject* QProgressBar_SuperMetaObject(const QProgressBar* self) {
    return (QMetaObject*)self->QProgressBar::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMetaObject(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_metaobject_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QProgressBar_SuperMetacast(QProgressBar* self, const char* param1) {
    return self->QProgressBar::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMetacast(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_metacast_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Metacast_Callback>(slot);
}

// Base class handler implementation
int QProgressBar_SuperMetacall(QProgressBar* self, int param1, int param2, void** param3) {
    return self->QProgressBar::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMetacall(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_metacall_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QProgressBar_SuperText(const QProgressBar* self) {
    auto _ret = self->QProgressBar::text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnText(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_text_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Text_Callback>(slot);
}

// Base class handler implementation
QSize* QProgressBar_SuperSizeHint(const QProgressBar* self) {
    return new QSize(self->QProgressBar::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSizeHint(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_sizehint_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QProgressBar_SuperMinimumSizeHint(const QProgressBar* self) {
    return new QSize(self->QProgressBar::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMinimumSizeHint(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_minimumsizehint_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QProgressBar_SuperEvent(QProgressBar* self, QEvent* e) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        return vqprogressbar->QProgressBar::event(e);
    } else
        qFatal("Error: Protected virtual method QProgressBar::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_event_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Event_Callback>(slot);
}

// Base class handler implementation
void QProgressBar_SuperPaintEvent(QProgressBar* self, QPaintEvent* param1) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressBar::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnPaintEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_paintevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QProgressBar_SuperInitStyleOption(const QProgressBar* self, QStyleOptionProgressBar* option) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        vqprogressbar->QProgressBar::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QProgressBar::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInitStyleOption(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_initstyleoption_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QProgressBar_DevType(const QProgressBar* self) {
    return self->devType();
}

// Base class handler implementation
int QProgressBar_SuperDevType(const QProgressBar* self) {
    return self->QProgressBar::devType();
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDevType(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_devtype_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DevType_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_SetVisible(QProgressBar* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QProgressBar_SuperSetVisible(QProgressBar* self, bool visible) {
    self->QProgressBar::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSetVisible(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_setvisible_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QProgressBar_HeightForWidth(const QProgressBar* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QProgressBar_SuperHeightForWidth(const QProgressBar* self, int param1) {
    return self->QProgressBar::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHeightForWidth(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_heightforwidth_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QProgressBar_HasHeightForWidth(const QProgressBar* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QProgressBar_SuperHasHeightForWidth(const QProgressBar* self) {
    return self->QProgressBar::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHasHeightForWidth(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_hasheightforwidth_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QProgressBar_PaintEngine(const QProgressBar* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QProgressBar_SuperPaintEngine(const QProgressBar* self) {
    return self->QProgressBar::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnPaintEngine(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_paintengine_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_MousePressEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperMousePressEvent(QProgressBar* self, QMouseEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMousePressEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_mousepressevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_MouseReleaseEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperMouseReleaseEvent(QProgressBar* self, QMouseEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseReleaseEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_mousereleaseevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_MouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperMouseDoubleClickEvent(QProgressBar* self, QMouseEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseDoubleClickEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_mousedoubleclickevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_MouseMoveEvent(QProgressBar* self, QMouseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperMouseMoveEvent(QProgressBar* self, QMouseEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMouseMoveEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_mousemoveevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_WheelEvent(QProgressBar* self, QWheelEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperWheelEvent(QProgressBar* self, QWheelEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnWheelEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_wheelevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_KeyPressEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperKeyPressEvent(QProgressBar* self, QKeyEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnKeyPressEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_keypressevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_KeyReleaseEvent(QProgressBar* self, QKeyEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperKeyReleaseEvent(QProgressBar* self, QKeyEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnKeyReleaseEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_keyreleaseevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_FocusInEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperFocusInEvent(QProgressBar* self, QFocusEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusInEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_focusinevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_FocusOutEvent(QProgressBar* self, QFocusEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperFocusOutEvent(QProgressBar* self, QFocusEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusOutEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_focusoutevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_EnterEvent(QProgressBar* self, QEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperEnterEvent(QProgressBar* self, QEnterEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEnterEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_enterevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_LeaveEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperLeaveEvent(QProgressBar* self, QEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnLeaveEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_leaveevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_MoveEvent(QProgressBar* self, QMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperMoveEvent(QProgressBar* self, QMoveEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMoveEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_moveevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ResizeEvent(QProgressBar* self, QResizeEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperResizeEvent(QProgressBar* self, QResizeEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnResizeEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_resizeevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_CloseEvent(QProgressBar* self, QCloseEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperCloseEvent(QProgressBar* self, QCloseEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnCloseEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_closeevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ContextMenuEvent(QProgressBar* self, QContextMenuEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperContextMenuEvent(QProgressBar* self, QContextMenuEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnContextMenuEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_contextmenuevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_TabletEvent(QProgressBar* self, QTabletEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperTabletEvent(QProgressBar* self, QTabletEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnTabletEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_tabletevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ActionEvent(QProgressBar* self, QActionEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperActionEvent(QProgressBar* self, QActionEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnActionEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_actionevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_DragEnterEvent(QProgressBar* self, QDragEnterEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperDragEnterEvent(QProgressBar* self, QDragEnterEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragEnterEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_dragenterevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_DragMoveEvent(QProgressBar* self, QDragMoveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperDragMoveEvent(QProgressBar* self, QDragMoveEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragMoveEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_dragmoveevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_DragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperDragLeaveEvent(QProgressBar* self, QDragLeaveEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDragLeaveEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_dragleaveevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_DropEvent(QProgressBar* self, QDropEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperDropEvent(QProgressBar* self, QDropEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDropEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_dropevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ShowEvent(QProgressBar* self, QShowEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperShowEvent(QProgressBar* self, QShowEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnShowEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_showevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_HideEvent(QProgressBar* self, QHideEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperHideEvent(QProgressBar* self, QHideEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnHideEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_hideevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QProgressBar_NativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        return vqprogressbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QProgressBar::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressBar_SuperNativeEvent(QProgressBar* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        return vqprogressbar->QProgressBar::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QProgressBar::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnNativeEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_nativeevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ChangeEvent(QProgressBar* self, QEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperChangeEvent(QProgressBar* self, QEvent* param1) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressBar::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnChangeEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_changeevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QProgressBar_Metric(const QProgressBar* self, int param1) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar) {
        return vqprogressbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QProgressBar::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QProgressBar_SuperMetric(const QProgressBar* self, int param1) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->QProgressBar::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QProgressBar::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnMetric(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_metric_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Metric_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_InitPainter(const QProgressBar* self, QPainter* painter) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar) {
        vqprogressbar->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperInitPainter(const QProgressBar* self, QPainter* painter) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        vqprogressbar->QProgressBar::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QProgressBar::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInitPainter(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_initpainter_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QProgressBar_Redirected(const QProgressBar* self, QPoint* offset) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar) {
        return vqprogressbar->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QProgressBar_SuperRedirected(const QProgressBar* self, QPoint* offset) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->QProgressBar::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QProgressBar::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnRedirected(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_redirected_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QProgressBar_SharedPainter(const QProgressBar* self) {
    auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self));
    if (vqprogressbar) {
        return vqprogressbar->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QProgressBar::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QProgressBar_SuperSharedPainter(const QProgressBar* self) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->QProgressBar::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QProgressBar::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnSharedPainter(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_sharedpainter_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_InputMethodEvent(QProgressBar* self, QInputMethodEvent* param1) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperInputMethodEvent(QProgressBar* self, QInputMethodEvent* param1) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressBar::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInputMethodEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_inputmethodevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QProgressBar_InputMethodQuery(const QProgressBar* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QProgressBar_SuperInputMethodQuery(const QProgressBar* self, int param1) {
    return new QVariant(self->QProgressBar::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnInputMethodQuery(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self)))
        vqprogressbar->qprogressbar_inputmethodquery_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QProgressBar_FocusNextPrevChild(QProgressBar* self, bool next) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        return vqprogressbar->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressBar_SuperFocusNextPrevChild(QProgressBar* self, bool next) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        return vqprogressbar->QProgressBar::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QProgressBar::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnFocusNextPrevChild(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_focusnextprevchild_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QProgressBar_EventFilter(QProgressBar* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QProgressBar_SuperEventFilter(QProgressBar* self, QObject* watched, QEvent* event) {
    return self->QProgressBar::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnEventFilter(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_eventfilter_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_TimerEvent(QProgressBar* self, QTimerEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperTimerEvent(QProgressBar* self, QTimerEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnTimerEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_timerevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ChildEvent(QProgressBar* self, QChildEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperChildEvent(QProgressBar* self, QChildEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnChildEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_childevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_CustomEvent(QProgressBar* self, QEvent* event) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperCustomEvent(QProgressBar* self, QEvent* event) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressBar::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnCustomEvent(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_customevent_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_ConnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperConnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProgressBar::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnConnectNotify(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_connectnotify_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QProgressBar_DisconnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self);
    if (vqprogressbar) {
        vqprogressbar->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProgressBar::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressBar_SuperDisconnectNotify(QProgressBar* self, const QMetaMethod* signal) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->QProgressBar::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProgressBar::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressBar_OnDisconnectNotify(QProgressBar* self, intptr_t slot) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self))
        vqprogressbar->qprogressbar_disconnectnotify_callback = reinterpret_cast<VirtualQProgressBar::QProgressBar_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QProgressBar_UpdateMicroFocus(QProgressBar* self) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->VirtualQProgressBar::updateMicroFocus();
    } else
        qFatal("Error: Protected method QProgressBar::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressBar_Create(QProgressBar* self) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->VirtualQProgressBar::create();
    } else
        qFatal("Error: Protected method QProgressBar::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressBar_Destroy(QProgressBar* self) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        vqprogressbar->VirtualQProgressBar::destroy();
    } else
        qFatal("Error: Protected method QProgressBar::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressBar_FocusNextChild(QProgressBar* self) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        return vqprogressbar->VirtualQProgressBar::focusNextChild();
    } else
        qFatal("Error: Protected method QProgressBar::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressBar_FocusPreviousChild(QProgressBar* self) {
    if (auto* vqprogressbar = dynamic_cast<VirtualQProgressBar*>(self)) {
        return vqprogressbar->VirtualQProgressBar::focusPreviousChild();
    } else
        qFatal("Error: Protected method QProgressBar::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QProgressBar_Sender(const QProgressBar* self) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->VirtualQProgressBar::sender();
    } else
        qFatal("Error: Protected method QProgressBar::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QProgressBar_SenderSignalIndex(const QProgressBar* self) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->VirtualQProgressBar::senderSignalIndex();
    } else
        qFatal("Error: Protected method QProgressBar::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QProgressBar_Receivers(const QProgressBar* self, const char* signal) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->VirtualQProgressBar::receivers(signal);
    } else
        qFatal("Error: Protected method QProgressBar::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressBar_IsSignalConnected(const QProgressBar* self, const QMetaMethod* signal) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->VirtualQProgressBar::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QProgressBar::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QProgressBar_GetDecodedMetricF(const QProgressBar* self, int metricA, int metricB) {
    if (auto* vqprogressbar = const_cast<VirtualQProgressBar*>(dynamic_cast<const VirtualQProgressBar*>(self))) {
        return vqprogressbar->VirtualQProgressBar::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QProgressBar::getDecodedMetricF called without a directly constructed type");
}

void QProgressBar_Delete(QProgressBar* self) {
    delete self;
}
