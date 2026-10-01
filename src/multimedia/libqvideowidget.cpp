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
#include <QVideoSink>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qvideowidget.h>
#include "libqvideowidget.h"
#include "libqvideowidget.hxx"

QVideoWidget* QVideoWidget_new(QWidget* parent) {
    return new VirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
    return new VirtualQVideoWidget();
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoWidget_Metacall(QVideoWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVideoWidget_Tr(const char* s) {
    auto _ret = QVideoWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self) {
    return self->videoSink();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
    return static_cast<int>(self->aspectRatioMode());
}

QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
    return new QSize(self->sizeHint());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
    self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
    self->fullScreenChanged(fullScreen);
}

void QVideoWidget_Connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, bool) = reinterpret_cast<void (*)(QVideoWidget*, bool)>(slot);
    QVideoWidget::connect(self,
                          static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged),
                          [self, slotFunc](bool fullScreen) {
                              bool sigval1 = fullScreen;
                              slotFunc(self, sigval1);
                          });
}

void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode) {
    self->aspectRatioModeChanged(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_Connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, int) = reinterpret_cast<void (*)(QVideoWidget*, int)>(slot);
    QVideoWidget::connect(self,
                          static_cast<void (QVideoWidget::*)(Qt::AspectRatioMode)>(&QVideoWidget::aspectRatioModeChanged),
                          [self, slotFunc](Qt::AspectRatioMode mode) {
                              int sigval1 = static_cast<int>(mode);
                              slotFunc(self, sigval1);
                          });
}

bool QVideoWidget_Event(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        return vqvideowidget->event(event);
    }
    qFatal("Error: Protected method QVideoWidget::event called without a directly constructed type");
}

void QVideoWidget_ShowEvent(QVideoWidget* self, QShowEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->showEvent(event);
    }
}

void QVideoWidget_HideEvent(QVideoWidget* self, QHideEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->hideEvent(event);
    }
}

void QVideoWidget_ResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->resizeEvent(event);
    }
}

void QVideoWidget_MoveEvent(QVideoWidget* self, QMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->moveEvent(event);
    }
}

libqt_string QVideoWidget_Tr2(const char* s, const char* c) {
    auto _ret = QVideoWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVideoWidget_SuperMetaObject(const QVideoWidget* self) {
    return (QMetaObject*)self->QVideoWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetaObject(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_metaobject_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVideoWidget_SuperMetacast(QVideoWidget* self, const char* param1) {
    return self->QVideoWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetacast(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_metacast_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVideoWidget_SuperMetacall(QVideoWidget* self, int param1, int param2, void** param3) {
    return self->QVideoWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetacall(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_metacall_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QVideoWidget_SuperSizeHint(const QVideoWidget* self) {
    return new QSize(self->QVideoWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSizeHint(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_sizehint_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QVideoWidget_SuperEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->QVideoWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_event_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QVideoWidget_SuperShowEvent(QVideoWidget* self, QShowEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnShowEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_showevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QVideoWidget_SuperHideEvent(QVideoWidget* self, QHideEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHideEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_hideevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QVideoWidget_SuperResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnResizeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_resizeevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QVideoWidget_SuperMoveEvent(QVideoWidget* self, QMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_moveevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
int QVideoWidget_DevType(const QVideoWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QVideoWidget_SuperDevType(const QVideoWidget* self) {
    return self->QVideoWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDevType(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_devtype_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_SetVisible(QVideoWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QVideoWidget_SuperSetVisible(QVideoWidget* self, bool visible) {
    self->QVideoWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSetVisible(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_setvisible_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QVideoWidget_MinimumSizeHint(const QVideoWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QVideoWidget_SuperMinimumSizeHint(const QVideoWidget* self) {
    return new QSize(self->QVideoWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMinimumSizeHint(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_minimumsizehint_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QVideoWidget_HeightForWidth(const QVideoWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QVideoWidget_SuperHeightForWidth(const QVideoWidget* self, int param1) {
    return self->QVideoWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHeightForWidth(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_heightforwidth_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QVideoWidget_HasHeightForWidth(const QVideoWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QVideoWidget_SuperHasHeightForWidth(const QVideoWidget* self) {
    return self->QVideoWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHasHeightForWidth(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_hasheightforwidth_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QVideoWidget_PaintEngine(const QVideoWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QVideoWidget_SuperPaintEngine(const QVideoWidget* self) {
    return self->QVideoWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEngine(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_paintengine_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_MousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperMousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMousePressEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_mousepressevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_MouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperMouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseReleaseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_mousereleaseevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_MouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperMouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseDoubleClickEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_MouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperMouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_mousemoveevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_WheelEvent(QVideoWidget* self, QWheelEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperWheelEvent(QVideoWidget* self, QWheelEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnWheelEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_wheelevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_KeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperKeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyPressEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_keypressevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_KeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperKeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyReleaseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_keyreleaseevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_FocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperFocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusInEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_focusinevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_FocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperFocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusOutEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_focusoutevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_EnterEvent(QVideoWidget* self, QEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperEnterEvent(QVideoWidget* self, QEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEnterEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_enterevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_LeaveEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperLeaveEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnLeaveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_leaveevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_PaintEvent(QVideoWidget* self, QPaintEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperPaintEvent(QVideoWidget* self, QPaintEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_paintevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_CloseEvent(QVideoWidget* self, QCloseEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperCloseEvent(QVideoWidget* self, QCloseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCloseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_closeevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_ContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnContextMenuEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_contextmenuevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_TabletEvent(QVideoWidget* self, QTabletEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperTabletEvent(QVideoWidget* self, QTabletEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTabletEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_tabletevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_ActionEvent(QVideoWidget* self, QActionEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperActionEvent(QVideoWidget* self, QActionEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnActionEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_actionevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_DragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperDragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragEnterEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_dragenterevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_DragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperDragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_dragmoveevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_DragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperDragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragLeaveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_dragleaveevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_DropEvent(QVideoWidget* self, QDropEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperDropEvent(QVideoWidget* self, QDropEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDropEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_dropevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QVideoWidget_NativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QVideoWidget_SuperNativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->QVideoWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QVideoWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnNativeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_nativeevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_ChangeEvent(QVideoWidget* self, QEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperChangeEvent(QVideoWidget* self, QEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChangeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_changeevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QVideoWidget_Metric(const QVideoWidget* self, int param1) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget) {
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QVideoWidget_SuperMetric(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->QVideoWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QVideoWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetric(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_metric_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_InitPainter(const QVideoWidget* self, QPainter* painter) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget) {
        vqvideowidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperInitPainter(const QVideoWidget* self, QPainter* painter) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->QVideoWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInitPainter(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_initpainter_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QVideoWidget_Redirected(const QVideoWidget* self, QPoint* offset) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget) {
        return vqvideowidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QVideoWidget_SuperRedirected(const QVideoWidget* self, QPoint* offset) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->QVideoWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnRedirected(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_redirected_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QVideoWidget_SharedPainter(const QVideoWidget* self) {
    auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self));
    if (vqvideowidget) {
        return vqvideowidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QVideoWidget_SuperSharedPainter(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->QVideoWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QVideoWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSharedPainter(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_sharedpainter_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_InputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperInputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_inputmethodevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QVideoWidget_InputMethodQuery(const QVideoWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QVideoWidget_SuperInputMethodQuery(const QVideoWidget* self, int param1) {
    return new QVariant(self->QVideoWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodQuery(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self)))
        vqvideowidget->qvideowidget_inputmethodquery_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QVideoWidget_FocusNextPrevChild(QVideoWidget* self, bool next) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        return vqvideowidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QVideoWidget_SuperFocusNextPrevChild(QVideoWidget* self, bool next) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->QVideoWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusNextPrevChild(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_focusnextprevchild_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QVideoWidget_EventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVideoWidget_SuperEventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    return self->QVideoWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEventFilter(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_eventfilter_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_TimerEvent(QVideoWidget* self, QTimerEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperTimerEvent(QVideoWidget* self, QTimerEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTimerEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_timerevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_ChildEvent(QVideoWidget* self, QChildEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperChildEvent(QVideoWidget* self, QChildEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChildEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_childevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_CustomEvent(QVideoWidget* self, QEvent* event) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperCustomEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCustomEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_customevent_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_ConnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperConnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnConnectNotify(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_connectnotify_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVideoWidget_DisconnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self);
    if (vqvideowidget) {
        vqvideowidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoWidget_SuperDisconnectNotify(QVideoWidget* self, const QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->QVideoWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDisconnectNotify(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self))
        vqvideowidget->qvideowidget_disconnectnotify_callback = reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QVideoWidget_UpdateMicroFocus(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->VirtualQVideoWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QVideoWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QVideoWidget_Create(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->VirtualQVideoWidget::create();
    } else
        qFatal("Error: Protected method QVideoWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QVideoWidget_Destroy(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->VirtualQVideoWidget::destroy();
    } else
        qFatal("Error: Protected method QVideoWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVideoWidget_FocusNextChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->VirtualQVideoWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QVideoWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVideoWidget_FocusPreviousChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->VirtualQVideoWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QVideoWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QVideoWidget_Sender(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->VirtualQVideoWidget::sender();
    } else
        qFatal("Error: Protected method QVideoWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoWidget_SenderSignalIndex(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->VirtualQVideoWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVideoWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoWidget_Receivers(const QVideoWidget* self, const char* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->VirtualQVideoWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QVideoWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVideoWidget_IsSignalConnected(const QVideoWidget* self, const QMetaMethod* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->VirtualQVideoWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVideoWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QVideoWidget_GetDecodedMetricF(const QVideoWidget* self, int metricA, int metricB) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->VirtualQVideoWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QVideoWidget::getDecodedMetricF called without a directly constructed type");
}

void QVideoWidget_Delete(QVideoWidget* self) {
    delete self;
}
