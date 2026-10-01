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
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSplashScreen>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplashscreen.h>
#include "libqsplashscreen.h"
#include "libqsplashscreen.hxx"

QSplashScreen* QSplashScreen_new() {
    return new VirtualQSplashScreen();
}

QSplashScreen* QSplashScreen_new2(QScreen* screen) {
    return new VirtualQSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new3(const QPixmap* pixmap) {
    return new VirtualQSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new4(const QPixmap* pixmap, int f) {
    return new VirtualQSplashScreen(*pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new5(QScreen* screen, const QPixmap* pixmap) {
    return new VirtualQSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, const QPixmap* pixmap, int f) {
    return new VirtualQSplashScreen(screen, *pixmap, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplashScreen_Metacall(QSplashScreen* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSplashScreen_Tr(const char* s) {
    auto _ret = QSplashScreen::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplashScreen_SetPixmap(QSplashScreen* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self) {
    return new QPixmap(self->pixmap());
}

void QSplashScreen_Finish(QSplashScreen* self, QWidget* w) {
    self->finish(w);
}

void QSplashScreen_Repaint(QSplashScreen* self) {
    self->repaint();
}

libqt_string QSplashScreen_Message(const QSplashScreen* self) {
    auto _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplashScreen_ShowMessage(QSplashScreen* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString);
}

void QSplashScreen_ClearMessage(QSplashScreen* self) {
    self->clearMessage();
}

void QSplashScreen_MessageChanged(QSplashScreen* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->messageChanged(message_QString);
}

void QSplashScreen_Connect_MessageChanged(QSplashScreen* self, intptr_t slot) {
    void (*slotFunc)(QSplashScreen*, const char*) = reinterpret_cast<void (*)(QSplashScreen*, const char*)>(slot);
    QSplashScreen::connect(self,
                           static_cast<void (QSplashScreen::*)(const QString&)>(&QSplashScreen::messageChanged),
                           [self, slotFunc](const QString& message) {
                               const auto message_ret = message;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray message_b = message_ret.toUtf8();
                               auto message_str_len = message_b.length();
                               const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                               memcpy((void*)message_str, message_b.data(), message_str_len);
                               ((char*)message_str)[message_str_len] = '\0';
                               const char* sigval1 = message_str;
                               slotFunc(self, sigval1);
                               libqt_free(message_str);
                           });
}

bool QSplashScreen_Event(QSplashScreen* self, QEvent* e) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        return vqsplashscreen->event(e);
    }
    qFatal("Error: Protected method QSplashScreen::event called without a directly constructed type");
}

void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->drawContents(painter);
    }
}

void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->mousePressEvent(param1);
    }
}

libqt_string QSplashScreen_Tr2(const char* s, const char* c) {
    auto _ret = QSplashScreen::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplashScreen_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSplashScreen::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplashScreen_ShowMessage2(QSplashScreen* self, const libqt_string message, int alignment) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString, static_cast<int>(alignment));
}

void QSplashScreen_ShowMessage3(QSplashScreen* self, const libqt_string message, int alignment, const QColor* color) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString, static_cast<int>(alignment), *color);
}

// Base class handler implementation
QMetaObject* QSplashScreen_SuperMetaObject(const QSplashScreen* self) {
    return (QMetaObject*)self->QSplashScreen::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMetaObject(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_metaobject_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSplashScreen_SuperMetacast(QSplashScreen* self, const char* param1) {
    return self->QSplashScreen::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMetacast(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_metacast_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSplashScreen_SuperMetacall(QSplashScreen* self, int param1, int param2, void** param3) {
    return self->QSplashScreen::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMetacall(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_metacall_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QSplashScreen_SuperEvent(QSplashScreen* self, QEvent* e) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->QSplashScreen::event(e);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_event_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Event_Callback>(slot);
}

// Base class handler implementation
void QSplashScreen_SuperDrawContents(QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::drawContents(painter);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::drawContents called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDrawContents(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_drawcontents_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DrawContents_Callback>(slot);
}

// Base class handler implementation
void QSplashScreen_SuperMousePressEvent(QSplashScreen* self, QMouseEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMousePressEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_mousepressevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
int QSplashScreen_DevType(const QSplashScreen* self) {
    return self->devType();
}

// Base class handler implementation
int QSplashScreen_SuperDevType(const QSplashScreen* self) {
    return self->QSplashScreen::devType();
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDevType(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_devtype_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_SetVisible(QSplashScreen* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSplashScreen_SuperSetVisible(QSplashScreen* self, bool visible) {
    self->QSplashScreen::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSetVisible(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_setvisible_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QSplashScreen_SizeHint(const QSplashScreen* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QSplashScreen_SuperSizeHint(const QSplashScreen* self) {
    return new QSize(self->QSplashScreen::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSizeHint(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_sizehint_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QSplashScreen_MinimumSizeHint(const QSplashScreen* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QSplashScreen_SuperMinimumSizeHint(const QSplashScreen* self) {
    return new QSize(self->QSplashScreen::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMinimumSizeHint(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_minimumsizehint_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QSplashScreen_HeightForWidth(const QSplashScreen* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSplashScreen_SuperHeightForWidth(const QSplashScreen* self, int param1) {
    return self->QSplashScreen::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHeightForWidth(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_heightforwidth_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSplashScreen_HasHeightForWidth(const QSplashScreen* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSplashScreen_SuperHasHeightForWidth(const QSplashScreen* self) {
    return self->QSplashScreen::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHasHeightForWidth(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_hasheightforwidth_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSplashScreen_PaintEngine(const QSplashScreen* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSplashScreen_SuperPaintEngine(const QSplashScreen* self) {
    return self->QSplashScreen::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnPaintEngine(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_paintengine_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_MouseReleaseEvent(QSplashScreen* self, QMouseEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperMouseReleaseEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseReleaseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_mousereleaseevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_MouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperMouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseDoubleClickEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_MouseMoveEvent(QSplashScreen* self, QMouseEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperMouseMoveEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_mousemoveevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_WheelEvent(QSplashScreen* self, QWheelEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperWheelEvent(QSplashScreen* self, QWheelEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnWheelEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_wheelevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_KeyPressEvent(QSplashScreen* self, QKeyEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperKeyPressEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnKeyPressEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_keypressevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_KeyReleaseEvent(QSplashScreen* self, QKeyEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperKeyReleaseEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnKeyReleaseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_keyreleaseevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_FocusInEvent(QSplashScreen* self, QFocusEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperFocusInEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusInEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_focusinevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_FocusOutEvent(QSplashScreen* self, QFocusEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperFocusOutEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusOutEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_focusoutevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_EnterEvent(QSplashScreen* self, QEnterEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperEnterEvent(QSplashScreen* self, QEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEnterEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_enterevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_LeaveEvent(QSplashScreen* self, QEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperLeaveEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnLeaveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_leaveevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_PaintEvent(QSplashScreen* self, QPaintEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperPaintEvent(QSplashScreen* self, QPaintEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnPaintEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_paintevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_MoveEvent(QSplashScreen* self, QMoveEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperMoveEvent(QSplashScreen* self, QMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_moveevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ResizeEvent(QSplashScreen* self, QResizeEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperResizeEvent(QSplashScreen* self, QResizeEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnResizeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_resizeevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_CloseEvent(QSplashScreen* self, QCloseEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperCloseEvent(QSplashScreen* self, QCloseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnCloseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_closeevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnContextMenuEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_contextmenuevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_TabletEvent(QSplashScreen* self, QTabletEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperTabletEvent(QSplashScreen* self, QTabletEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnTabletEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_tabletevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ActionEvent(QSplashScreen* self, QActionEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperActionEvent(QSplashScreen* self, QActionEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnActionEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_actionevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_DragEnterEvent(QSplashScreen* self, QDragEnterEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperDragEnterEvent(QSplashScreen* self, QDragEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragEnterEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_dragenterevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_DragMoveEvent(QSplashScreen* self, QDragMoveEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperDragMoveEvent(QSplashScreen* self, QDragMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_dragmoveevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_DragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperDragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragLeaveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_dragleaveevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_DropEvent(QSplashScreen* self, QDropEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperDropEvent(QSplashScreen* self, QDropEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDropEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_dropevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ShowEvent(QSplashScreen* self, QShowEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperShowEvent(QSplashScreen* self, QShowEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnShowEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_showevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_HideEvent(QSplashScreen* self, QHideEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperHideEvent(QSplashScreen* self, QHideEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHideEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_hideevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSplashScreen_NativeEvent(QSplashScreen* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        return vqsplashscreen->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplashScreen_SuperNativeEvent(QSplashScreen* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->QSplashScreen::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSplashScreen::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnNativeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_nativeevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ChangeEvent(QSplashScreen* self, QEvent* param1) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperChangeEvent(QSplashScreen* self, QEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnChangeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_changeevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSplashScreen_Metric(const QSplashScreen* self, int param1) {
    auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self));
    if (vqsplashscreen) {
        return vqsplashscreen->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSplashScreen_SuperMetric(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->QSplashScreen::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSplashScreen::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMetric(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_metric_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_InitPainter(const QSplashScreen* self, QPainter* painter) {
    auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self));
    if (vqsplashscreen) {
        vqsplashscreen->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperInitPainter(const QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->QSplashScreen::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInitPainter(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_initpainter_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSplashScreen_Redirected(const QSplashScreen* self, QPoint* offset) {
    auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self));
    if (vqsplashscreen) {
        return vqsplashscreen->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSplashScreen_SuperRedirected(const QSplashScreen* self, QPoint* offset) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->QSplashScreen::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnRedirected(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_redirected_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSplashScreen_SharedPainter(const QSplashScreen* self) {
    auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self));
    if (vqsplashscreen) {
        return vqsplashscreen->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSplashScreen_SuperSharedPainter(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->QSplashScreen::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSplashScreen::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSharedPainter(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_sharedpainter_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_InputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperInputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInputMethodEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_inputmethodevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSplashScreen_InputMethodQuery(const QSplashScreen* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSplashScreen_SuperInputMethodQuery(const QSplashScreen* self, int param1) {
    return new QVariant(self->QSplashScreen::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInputMethodQuery(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self)))
        vqsplashscreen->qsplashscreen_inputmethodquery_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSplashScreen_FocusNextPrevChild(QSplashScreen* self, bool next) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        return vqsplashscreen->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplashScreen_SuperFocusNextPrevChild(QSplashScreen* self, bool next) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->QSplashScreen::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusNextPrevChild(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_focusnextprevchild_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSplashScreen_EventFilter(QSplashScreen* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSplashScreen_SuperEventFilter(QSplashScreen* self, QObject* watched, QEvent* event) {
    return self->QSplashScreen::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEventFilter(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_eventfilter_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_TimerEvent(QSplashScreen* self, QTimerEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperTimerEvent(QSplashScreen* self, QTimerEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnTimerEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_timerevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ChildEvent(QSplashScreen* self, QChildEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperChildEvent(QSplashScreen* self, QChildEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnChildEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_childevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_CustomEvent(QSplashScreen* self, QEvent* event) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperCustomEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnCustomEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_customevent_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_ConnectNotify(QSplashScreen* self, const QMetaMethod* signal) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperConnectNotify(QSplashScreen* self, const QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnConnectNotify(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_connectnotify_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSplashScreen_DisconnectNotify(QSplashScreen* self, const QMetaMethod* signal) {
    auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self);
    if (vqsplashscreen) {
        vqsplashscreen->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplashScreen::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplashScreen_SuperDisconnectNotify(QSplashScreen* self, const QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->QSplashScreen::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplashScreen::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDisconnectNotify(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self))
        vqsplashscreen->qsplashscreen_disconnectnotify_callback = reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSplashScreen_UpdateMicroFocus(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->VirtualQSplashScreen::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSplashScreen::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplashScreen_Create(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->VirtualQSplashScreen::create();
    } else
        qFatal("Error: Protected method QSplashScreen::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplashScreen_Destroy(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->VirtualQSplashScreen::destroy();
    } else
        qFatal("Error: Protected method QSplashScreen::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplashScreen_FocusNextChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->VirtualQSplashScreen::focusNextChild();
    } else
        qFatal("Error: Protected method QSplashScreen::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplashScreen_FocusPreviousChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->VirtualQSplashScreen::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSplashScreen::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSplashScreen_Sender(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->VirtualQSplashScreen::sender();
    } else
        qFatal("Error: Protected method QSplashScreen::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplashScreen_SenderSignalIndex(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->VirtualQSplashScreen::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSplashScreen::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplashScreen_Receivers(const QSplashScreen* self, const char* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->VirtualQSplashScreen::receivers(signal);
    } else
        qFatal("Error: Protected method QSplashScreen::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplashScreen_IsSignalConnected(const QSplashScreen* self, const QMetaMethod* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->VirtualQSplashScreen::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSplashScreen::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSplashScreen_GetDecodedMetricF(const QSplashScreen* self, int metricA, int metricB) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->VirtualQSplashScreen::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSplashScreen::getDecodedMetricF called without a directly constructed type");
}

void QSplashScreen_Delete(QSplashScreen* self) {
    delete self;
}
