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
#include <QImage>
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
#include <QPoint>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQuickItem>
#include <QQuickWidget>
#include <QQuickWindow>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qquickwidget.h>
#include "libqquickwidget.h"
#include "libqquickwidget.hxx"

QQuickWidget* QQuickWidget_new(QWidget* parent) {
    return new VirtualQQuickWidget(parent);
}

QQuickWidget* QQuickWidget_new2() {
    return new VirtualQQuickWidget();
}

QQuickWidget* QQuickWidget_new3(QQmlEngine* engine, QWidget* parent) {
    return new VirtualQQuickWidget(engine, parent);
}

QQuickWidget* QQuickWidget_new4(const QUrl* source) {
    return new VirtualQQuickWidget(*source);
}

QQuickWidget* QQuickWidget_new5(const QUrl* source, QWidget* parent) {
    return new VirtualQQuickWidget(*source, parent);
}

QMetaObject* QQuickWidget_MetaObject(const QQuickWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickWidget_Metacast(QQuickWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickWidget_Metacall(QQuickWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickWidget_Tr(const char* s) {
    auto _ret = QQuickWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QQuickWidget_Source(const QQuickWidget* self) {
    return new QUrl(self->source());
}

QQmlEngine* QQuickWidget_Engine(const QQuickWidget* self) {
    return self->engine();
}

QQmlContext* QQuickWidget_RootContext(const QQuickWidget* self) {
    return self->rootContext();
}

QQuickItem* QQuickWidget_RootObject(const QQuickWidget* self) {
    return self->rootObject();
}

int QQuickWidget_ResizeMode(const QQuickWidget* self) {
    return static_cast<int>(self->resizeMode());
}

void QQuickWidget_SetResizeMode(QQuickWidget* self, int resizeMode) {
    self->setResizeMode(static_cast<QQuickWidget::ResizeMode>(resizeMode));
}

int QQuickWidget_Status(const QQuickWidget* self) {
    return static_cast<int>(self->status());
}

libqt_list /* of QQmlError* */ QQuickWidget_Errors(const QQuickWidget* self) {
    QList<QQmlError> _ret = self->errors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QQmlError** _arr = static_cast<QQmlError**>(malloc(sizeof(QQmlError*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QQmlError(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QSize* QQuickWidget_SizeHint(const QQuickWidget* self) {
    return new QSize(self->sizeHint());
}

QSize* QQuickWidget_InitialSize(const QQuickWidget* self) {
    return new QSize(self->initialSize());
}

void QQuickWidget_SetFormat(QQuickWidget* self, const QSurfaceFormat* format) {
    self->setFormat(*format);
}

QSurfaceFormat* QQuickWidget_Format(const QQuickWidget* self) {
    return new QSurfaceFormat(self->format());
}

QImage* QQuickWidget_GrabFramebuffer(const QQuickWidget* self) {
    return new QImage(self->grabFramebuffer());
}

void QQuickWidget_SetClearColor(QQuickWidget* self, const QColor* color) {
    self->setClearColor(*color);
}

QQuickWindow* QQuickWidget_QuickWindow(const QQuickWidget* self) {
    return self->quickWindow();
}

void QQuickWidget_SetSource(QQuickWidget* self, const QUrl* source) {
    self->setSource(*source);
}

void QQuickWidget_SetContent(QQuickWidget* self, const QUrl* url, QQmlComponent* component, QObject* item) {
    self->setContent(*url, component, item);
}

void QQuickWidget_StatusChanged(QQuickWidget* self, int param1) {
    self->statusChanged(static_cast<QQuickWidget::Status>(param1));
}

void QQuickWidget_Connect_StatusChanged(QQuickWidget* self, intptr_t slot) {
    void (*slotFunc)(QQuickWidget*, int) = reinterpret_cast<void (*)(QQuickWidget*, int)>(slot);
    QQuickWidget::connect(self,
                          static_cast<void (QQuickWidget::*)(QQuickWidget::Status)>(&QQuickWidget::statusChanged),
                          [self, slotFunc](QQuickWidget::Status param1) {
                              int sigval1 = static_cast<int>(param1);
                              slotFunc(self, sigval1);
                          });
}

void QQuickWidget_SceneGraphError(QQuickWidget* self, int errorVal, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->sceneGraphError(static_cast<QQuickWindow::SceneGraphError>(errorVal), message_QString);
}

void QQuickWidget_Connect_SceneGraphError(QQuickWidget* self, intptr_t slot) {
    void (*slotFunc)(QQuickWidget*, int, const char*) = reinterpret_cast<void (*)(QQuickWidget*, int, const char*)>(slot);
    QQuickWidget::connect(self,
                          static_cast<void (QQuickWidget::*)(QQuickWindow::SceneGraphError, const QString&)>(&QQuickWidget::sceneGraphError),
                          [self, slotFunc](QQuickWindow::SceneGraphError errorVal, const QString& message) {
                              int sigval1 = static_cast<int>(errorVal);
                              const auto message_ret = message;
                              // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                              QByteArray message_b = message_ret.toUtf8();
                              auto message_str_len = message_b.length();
                              const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                              memcpy((void*)message_str, message_b.data(), message_str_len);
                              ((char*)message_str)[message_str_len] = '\0';
                              const char* sigval2 = message_str;
                              slotFunc(self, sigval1, sigval2);
                              libqt_free(message_str);
                          });
}

void QQuickWidget_ResizeEvent(QQuickWidget* self, QResizeEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->resizeEvent(param1);
    }
}

void QQuickWidget_TimerEvent(QQuickWidget* self, QTimerEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->timerEvent(param1);
    }
}

void QQuickWidget_KeyPressEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->keyPressEvent(param1);
    }
}

void QQuickWidget_KeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->keyReleaseEvent(param1);
    }
}

void QQuickWidget_MousePressEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->mousePressEvent(param1);
    }
}

void QQuickWidget_MouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->mouseReleaseEvent(param1);
    }
}

void QQuickWidget_MouseMoveEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->mouseMoveEvent(param1);
    }
}

void QQuickWidget_MouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->mouseDoubleClickEvent(param1);
    }
}

void QQuickWidget_ShowEvent(QQuickWidget* self, QShowEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->showEvent(param1);
    }
}

void QQuickWidget_HideEvent(QQuickWidget* self, QHideEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->hideEvent(param1);
    }
}

void QQuickWidget_FocusInEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->focusInEvent(event);
    }
}

void QQuickWidget_FocusOutEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->focusOutEvent(event);
    }
}

void QQuickWidget_WheelEvent(QQuickWidget* self, QWheelEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->wheelEvent(param1);
    }
}

void QQuickWidget_DragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->dragEnterEvent(param1);
    }
}

void QQuickWidget_DragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->dragMoveEvent(param1);
    }
}

void QQuickWidget_DragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->dragLeaveEvent(param1);
    }
}

void QQuickWidget_DropEvent(QQuickWidget* self, QDropEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->dropEvent(param1);
    }
}

bool QQuickWidget_Event(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->event(param1);
    }
    return {};
}

void QQuickWidget_PaintEvent(QQuickWidget* self, QPaintEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->paintEvent(event);
    }
}

bool QQuickWidget_FocusNextPrevChild(QQuickWidget* self, bool next) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->focusNextPrevChild(next);
    }
    return {};
}

libqt_string QQuickWidget_Tr2(const char* s, const char* c) {
    auto _ret = QQuickWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickWidget_SuperMetaObject(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickwidget->metaObject();
    } else {
        return (QMetaObject*)self->QQuickWidget::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetaObject(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MetaObject_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickWidget_SuperMetacast(QQuickWidget* self, const char* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Metacast_IsBase(true);
        return vqquickwidget->qt_metacast(param1);
    } else {
        return self->QQuickWidget::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetacast(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Metacast_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickWidget_SuperMetacall(QQuickWidget* self, int param1, int param2, void** param3) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Metacall_IsBase(true);
        return vqquickwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetacall(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Metacall_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metacall_Callback>(slot));
}

// Base class handler implementation
QSize* QQuickWidget_SuperSizeHint(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_SizeHint_IsBase(true);
        return new QSize(vqquickwidget->sizeHint());
    } else {
        return new QSize(((VirtualQQuickWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSizeHint(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_SizeHint_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SizeHint_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperResizeEvent(QQuickWidget* self, QResizeEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ResizeEvent_IsBase(true);
        vqquickwidget->resizeEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnResizeEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ResizeEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperTimerEvent(QQuickWidget* self, QTimerEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_TimerEvent_IsBase(true);
        vqquickwidget->timerEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnTimerEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_TimerEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_TimerEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperKeyPressEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_KeyPressEvent_IsBase(true);
        vqquickwidget->keyPressEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnKeyPressEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_KeyPressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperKeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_KeyReleaseEvent_IsBase(true);
        vqquickwidget->keyReleaseEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnKeyReleaseEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_KeyReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperMousePressEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MousePressEvent_IsBase(true);
        vqquickwidget->mousePressEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMousePressEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MousePressEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperMouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MouseReleaseEvent_IsBase(true);
        vqquickwidget->mouseReleaseEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseReleaseEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseReleaseEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperMouseMoveEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MouseMoveEvent_IsBase(true);
        vqquickwidget->mouseMoveEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseMoveEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperMouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MouseDoubleClickEvent_IsBase(true);
        vqquickwidget->mouseDoubleClickEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseDoubleClickEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseDoubleClickEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperShowEvent(QQuickWidget* self, QShowEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ShowEvent_IsBase(true);
        vqquickwidget->showEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnShowEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ShowEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ShowEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperHideEvent(QQuickWidget* self, QHideEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_HideEvent_IsBase(true);
        vqquickwidget->hideEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHideEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_HideEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HideEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperFocusInEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_FocusInEvent_IsBase(true);
        vqquickwidget->focusInEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusInEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusInEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperFocusOutEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_FocusOutEvent_IsBase(true);
        vqquickwidget->focusOutEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusOutEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusOutEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperWheelEvent(QQuickWidget* self, QWheelEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_WheelEvent_IsBase(true);
        vqquickwidget->wheelEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnWheelEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_WheelEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_WheelEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperDragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DragEnterEvent_IsBase(true);
        vqquickwidget->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragEnterEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragEnterEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperDragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DragMoveEvent_IsBase(true);
        vqquickwidget->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragMoveEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragMoveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperDragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DragLeaveEvent_IsBase(true);
        vqquickwidget->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragLeaveEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragLeaveEvent_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperDropEvent(QQuickWidget* self, QDropEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DropEvent_IsBase(true);
        vqquickwidget->dropEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDropEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DropEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DropEvent_Callback>(slot));
}

// Base class handler implementation
bool QQuickWidget_SuperEvent(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Event_IsBase(true);
        return vqquickwidget->event(param1);
    } else {
        return ((VirtualQQuickWidget*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Event_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Event_Callback>(slot));
}

// Base class handler implementation
void QQuickWidget_SuperPaintEvent(QQuickWidget* self, QPaintEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_PaintEvent_IsBase(true);
        vqquickwidget->paintEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnPaintEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_PaintEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_PaintEvent_Callback>(slot));
}

// Base class handler implementation
bool QQuickWidget_SuperFocusNextPrevChild(QQuickWidget* self, bool next) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_FocusNextPrevChild_IsBase(true);
        return vqquickwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQQuickWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusNextPrevChild(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusNextPrevChild_Callback>(slot));
}

// Derived class handler implementation
int QQuickWidget_DevType(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->devType();
    } else {
        return self->QQuickWidget::devType();
    }
}

// Base class handler implementation
int QQuickWidget_SuperDevType(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DevType_IsBase(true);
        return vqquickwidget->devType();
    } else {
        return self->QQuickWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDevType(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DevType_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DevType_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_SetVisible(QQuickWidget* self, bool visible) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setVisible(visible);
    } else {
        self->QQuickWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QQuickWidget_SuperSetVisible(QQuickWidget* self, bool visible) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_SetVisible_IsBase(true);
        vqquickwidget->setVisible(visible);
    } else {
        self->QQuickWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSetVisible(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_SetVisible_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SetVisible_Callback>(slot));
}

// Derived class handler implementation
QSize* QQuickWidget_MinimumSizeHint(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return new QSize(vqquickwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQQuickWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QQuickWidget_SuperMinimumSizeHint(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqquickwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQQuickWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMinimumSizeHint(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MinimumSizeHint_Callback>(slot));
}

// Derived class handler implementation
int QQuickWidget_HeightForWidth(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QQuickWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QQuickWidget_SuperHeightForWidth(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_HeightForWidth_IsBase(true);
        return vqquickwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QQuickWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHeightForWidth(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HeightForWidth_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_HasHeightForWidth(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->hasHeightForWidth();
    } else {
        return self->QQuickWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QQuickWidget_SuperHasHeightForWidth(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_HasHeightForWidth_IsBase(true);
        return vqquickwidget->hasHeightForWidth();
    } else {
        return self->QQuickWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHasHeightForWidth(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HasHeightForWidth_Callback>(slot));
}

// Derived class handler implementation
QPaintEngine* QQuickWidget_PaintEngine(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->paintEngine();
    } else {
        return self->QQuickWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QQuickWidget_SuperPaintEngine(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_PaintEngine_IsBase(true);
        return vqquickwidget->paintEngine();
    } else {
        return self->QQuickWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnPaintEngine(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_PaintEngine_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_PaintEngine_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_EnterEvent(QQuickWidget* self, QEnterEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->enterEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperEnterEvent(QQuickWidget* self, QEnterEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_EnterEvent_IsBase(true);
        vqquickwidget->enterEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEnterEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_EnterEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_EnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_LeaveEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->leaveEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperLeaveEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_LeaveEvent_IsBase(true);
        vqquickwidget->leaveEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnLeaveEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_LeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_MoveEvent(QQuickWidget* self, QMoveEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->moveEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperMoveEvent(QQuickWidget* self, QMoveEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_MoveEvent_IsBase(true);
        vqquickwidget->moveEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMoveEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_MoveEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_CloseEvent(QQuickWidget* self, QCloseEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->closeEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperCloseEvent(QQuickWidget* self, QCloseEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_CloseEvent_IsBase(true);
        vqquickwidget->closeEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnCloseEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_CloseEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_CloseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_ContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->contextMenuEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ContextMenuEvent_IsBase(true);
        vqquickwidget->contextMenuEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnContextMenuEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ContextMenuEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_TabletEvent(QQuickWidget* self, QTabletEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->tabletEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperTabletEvent(QQuickWidget* self, QTabletEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_TabletEvent_IsBase(true);
        vqquickwidget->tabletEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnTabletEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_TabletEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_TabletEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_ActionEvent(QQuickWidget* self, QActionEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->actionEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperActionEvent(QQuickWidget* self, QActionEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ActionEvent_IsBase(true);
        vqquickwidget->actionEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnActionEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ActionEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ActionEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_NativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QQuickWidget_SuperNativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_NativeEvent_IsBase(true);
        return vqquickwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQQuickWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnNativeEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_NativeEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_NativeEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_ChangeEvent(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->changeEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QQuickWidget_SuperChangeEvent(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ChangeEvent_IsBase(true);
        vqquickwidget->changeEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnChangeEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ChangeEvent_Callback>(slot));
}

// Derived class handler implementation
int QQuickWidget_Metric(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQQuickWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QQuickWidget_SuperMetric(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Metric_IsBase(true);
        return vqquickwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQQuickWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetric(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Metric_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metric_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_InitPainter(const QQuickWidget* self, QPainter* painter) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->initPainter(painter);
    } else {
        ((VirtualQQuickWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QQuickWidget_SuperInitPainter(const QQuickWidget* self, QPainter* painter) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_InitPainter_IsBase(true);
        vqquickwidget->initPainter(painter);
    } else {
        ((VirtualQQuickWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInitPainter(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_InitPainter_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InitPainter_Callback>(slot));
}

// Derived class handler implementation
QPaintDevice* QQuickWidget_Redirected(const QQuickWidget* self, QPoint* offset) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->redirected(offset);
    } else {
        return ((VirtualQQuickWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QQuickWidget_SuperRedirected(const QQuickWidget* self, QPoint* offset) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Redirected_IsBase(true);
        return vqquickwidget->redirected(offset);
    } else {
        return ((VirtualQQuickWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnRedirected(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Redirected_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Redirected_Callback>(slot));
}

// Derived class handler implementation
QPainter* QQuickWidget_SharedPainter(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->sharedPainter();
    } else {
        return ((VirtualQQuickWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QQuickWidget_SuperSharedPainter(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_SharedPainter_IsBase(true);
        return vqquickwidget->sharedPainter();
    } else {
        return ((VirtualQQuickWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSharedPainter(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_SharedPainter_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SharedPainter_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_InputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QQuickWidget_SuperInputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_InputMethodEvent_IsBase(true);
        vqquickwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInputMethodEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InputMethodEvent_Callback>(slot));
}

// Derived class handler implementation
QVariant* QQuickWidget_InputMethodQuery(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return new QVariant(vqquickwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQQuickWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QQuickWidget_SuperInputMethodQuery(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqquickwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQQuickWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInputMethodQuery(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InputMethodQuery_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_EventFilter(QQuickWidget* self, QObject* watched, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->eventFilter(watched, event);
    } else {
        return self->QQuickWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickWidget_SuperEventFilter(QQuickWidget* self, QObject* watched, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_EventFilter_IsBase(true);
        return vqquickwidget->eventFilter(watched, event);
    } else {
        return self->QQuickWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEventFilter(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_EventFilter_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_ChildEvent(QQuickWidget* self, QChildEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->childEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperChildEvent(QQuickWidget* self, QChildEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ChildEvent_IsBase(true);
        vqquickwidget->childEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnChildEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ChildEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_CustomEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->customEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickWidget_SuperCustomEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_CustomEvent_IsBase(true);
        vqquickwidget->customEvent(event);
    } else {
        ((VirtualQQuickWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnCustomEvent(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_CustomEvent_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_ConnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->connectNotify(*signal);
    } else {
        ((VirtualQQuickWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickWidget_SuperConnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_ConnectNotify_IsBase(true);
        vqquickwidget->connectNotify(*signal);
    } else {
        ((VirtualQQuickWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnConnectNotify(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_DisconnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickWidget_SuperDisconnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_DisconnectNotify_IsBase(true);
        vqquickwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDisconnectNotify(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_UpdateMicroFocus(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->updateMicroFocus();
    } else {
        ((VirtualQQuickWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QQuickWidget_SuperUpdateMicroFocus(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_UpdateMicroFocus_IsBase(true);
        vqquickwidget->updateMicroFocus();
    } else {
        ((VirtualQQuickWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnUpdateMicroFocus(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_UpdateMicroFocus_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_Create(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->create();
    } else {
        ((VirtualQQuickWidget*)self)->create();
    }
}

// Base class handler implementation
void QQuickWidget_SuperCreate(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Create_IsBase(true);
        vqquickwidget->create();
    } else {
        ((VirtualQQuickWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnCreate(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Create_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Create_Callback>(slot));
}

// Derived class handler implementation
void QQuickWidget_Destroy(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->destroy();
    } else {
        ((VirtualQQuickWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QQuickWidget_SuperDestroy(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Destroy_IsBase(true);
        vqquickwidget->destroy();
    } else {
        ((VirtualQQuickWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDestroy(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Destroy_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Destroy_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_FocusNextChild(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->focusNextChild();
    } else {
        return ((VirtualQQuickWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QQuickWidget_SuperFocusNextChild(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_FocusNextChild_IsBase(true);
        return vqquickwidget->focusNextChild();
    } else {
        return ((VirtualQQuickWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusNextChild(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusNextChild_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_FocusPreviousChild(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->focusPreviousChild();
    } else {
        return ((VirtualQQuickWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QQuickWidget_SuperFocusPreviousChild(QQuickWidget* self) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_FocusPreviousChild_IsBase(true);
        return vqquickwidget->focusPreviousChild();
    } else {
        return ((VirtualQQuickWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusPreviousChild(QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusPreviousChild_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickWidget_Sender(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->sender();
    } else {
        return ((VirtualQQuickWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickWidget_SuperSender(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Sender_IsBase(true);
        return vqquickwidget->sender();
    } else {
        return ((VirtualQQuickWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSender(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Sender_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickWidget_SenderSignalIndex(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->senderSignalIndex();
    } else {
        return ((VirtualQQuickWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickWidget_SuperSenderSignalIndex(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_SenderSignalIndex_IsBase(true);
        return vqquickwidget->senderSignalIndex();
    } else {
        return ((VirtualQQuickWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSenderSignalIndex(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickWidget_Receivers(const QQuickWidget* self, const char* signal) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->receivers(signal);
    } else {
        return ((VirtualQQuickWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickWidget_SuperReceivers(const QQuickWidget* self, const char* signal) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_Receivers_IsBase(true);
        return vqquickwidget->receivers(signal);
    } else {
        return ((VirtualQQuickWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnReceivers(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_Receivers_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickWidget_IsSignalConnected(const QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickWidget_SuperIsSignalConnected(const QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_IsSignalConnected_IsBase(true);
        return vqquickwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnIsSignalConnected(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_IsSignalConnected_Callback>(slot));
}

// Derived class handler implementation
double QQuickWidget_GetDecodedMetricF(const QQuickWidget* self, int metricA, int metricB) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        return vqquickwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQQuickWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QQuickWidget_SuperGetDecodedMetricF(const QQuickWidget* self, int metricA, int metricB) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget) {
        vqquickwidget->setQQuickWidget_GetDecodedMetricF_IsBase(true);
        return vqquickwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQQuickWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnGetDecodedMetricF(const QQuickWidget* self, intptr_t slot) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget && vqquickwidget->isVirtualQQuickWidget)
        vqquickwidget->setQQuickWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQQuickWidget::QQuickWidget_GetDecodedMetricF_Callback>(slot));
}

void QQuickWidget_Delete(QQuickWidget* self) {
    delete self;
}
