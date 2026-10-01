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
    if (vqquickwidget) {
        vqquickwidget->resizeEvent(param1);
    }
}

void QQuickWidget_TimerEvent(QQuickWidget* self, QTimerEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->timerEvent(param1);
    }
}

void QQuickWidget_KeyPressEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->keyPressEvent(param1);
    }
}

void QQuickWidget_KeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->keyReleaseEvent(param1);
    }
}

void QQuickWidget_MousePressEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->mousePressEvent(param1);
    }
}

void QQuickWidget_MouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->mouseReleaseEvent(param1);
    }
}

void QQuickWidget_MouseMoveEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->mouseMoveEvent(param1);
    }
}

void QQuickWidget_MouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->mouseDoubleClickEvent(param1);
    }
}

void QQuickWidget_ShowEvent(QQuickWidget* self, QShowEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->showEvent(param1);
    }
}

void QQuickWidget_HideEvent(QQuickWidget* self, QHideEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->hideEvent(param1);
    }
}

void QQuickWidget_FocusInEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->focusInEvent(event);
    }
}

void QQuickWidget_FocusOutEvent(QQuickWidget* self, QFocusEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->focusOutEvent(event);
    }
}

void QQuickWidget_WheelEvent(QQuickWidget* self, QWheelEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->wheelEvent(param1);
    }
}

void QQuickWidget_DragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->dragEnterEvent(param1);
    }
}

void QQuickWidget_DragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->dragMoveEvent(param1);
    }
}

void QQuickWidget_DragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->dragLeaveEvent(param1);
    }
}

void QQuickWidget_DropEvent(QQuickWidget* self, QDropEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->dropEvent(param1);
    }
}

bool QQuickWidget_Event(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        return vqquickwidget->event(param1);
    }
    qFatal("Error: Protected method QQuickWidget::event called without a directly constructed type");
}

void QQuickWidget_PaintEvent(QQuickWidget* self, QPaintEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->paintEvent(event);
    }
}

bool QQuickWidget_FocusNextPrevChild(QQuickWidget* self, bool next) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        return vqquickwidget->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QQuickWidget::focusNextPrevChild called without a directly constructed type");
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
    return (QMetaObject*)self->QQuickWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetaObject(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_metaobject_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickWidget_SuperMetacast(QQuickWidget* self, const char* param1) {
    return self->QQuickWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetacast(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_metacast_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickWidget_SuperMetacall(QQuickWidget* self, int param1, int param2, void** param3) {
    return self->QQuickWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetacall(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_metacall_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QQuickWidget_SuperSizeHint(const QQuickWidget* self) {
    return new QSize(self->QQuickWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSizeHint(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_sizehint_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperResizeEvent(QQuickWidget* self, QResizeEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnResizeEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_resizeevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperTimerEvent(QQuickWidget* self, QTimerEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnTimerEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_timerevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperKeyPressEvent(QQuickWidget* self, QKeyEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnKeyPressEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_keypressevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperKeyReleaseEvent(QQuickWidget* self, QKeyEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnKeyReleaseEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperMousePressEvent(QQuickWidget* self, QMouseEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMousePressEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_mousepressevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperMouseReleaseEvent(QQuickWidget* self, QMouseEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseReleaseEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperMouseMoveEvent(QQuickWidget* self, QMouseEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseMoveEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_mousemoveevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperMouseDoubleClickEvent(QQuickWidget* self, QMouseEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::mouseDoubleClickEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMouseDoubleClickEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperShowEvent(QQuickWidget* self, QShowEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnShowEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_showevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperHideEvent(QQuickWidget* self, QHideEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHideEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_hideevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperFocusInEvent(QQuickWidget* self, QFocusEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusInEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_focusinevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperFocusOutEvent(QQuickWidget* self, QFocusEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusOutEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_focusoutevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperWheelEvent(QQuickWidget* self, QWheelEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnWheelEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_wheelevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperDragEnterEvent(QQuickWidget* self, QDragEnterEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragEnterEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_dragenterevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperDragMoveEvent(QQuickWidget* self, QDragMoveEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragMoveEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_dragmoveevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperDragLeaveEvent(QQuickWidget* self, QDragLeaveEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDragLeaveEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_dragleaveevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperDropEvent(QQuickWidget* self, QDropEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDropEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_dropevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DropEvent_Callback>(slot);
}

// Base class handler implementation
bool QQuickWidget_SuperEvent(QQuickWidget* self, QEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        return vqquickwidget->QQuickWidget::event(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_event_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Event_Callback>(slot);
}

// Base class handler implementation
void QQuickWidget_SuperPaintEvent(QQuickWidget* self, QPaintEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnPaintEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_paintevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_PaintEvent_Callback>(slot);
}

// Base class handler implementation
bool QQuickWidget_SuperFocusNextPrevChild(QQuickWidget* self, bool next) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        return vqquickwidget->QQuickWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnFocusNextPrevChild(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
int QQuickWidget_DevType(const QQuickWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QQuickWidget_SuperDevType(const QQuickWidget* self) {
    return self->QQuickWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDevType(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_devtype_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_SetVisible(QQuickWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QQuickWidget_SuperSetVisible(QQuickWidget* self, bool visible) {
    self->QQuickWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSetVisible(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_setvisible_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QQuickWidget_MinimumSizeHint(const QQuickWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QQuickWidget_SuperMinimumSizeHint(const QQuickWidget* self) {
    return new QSize(self->QQuickWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMinimumSizeHint(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_minimumsizehint_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QQuickWidget_HeightForWidth(const QQuickWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QQuickWidget_SuperHeightForWidth(const QQuickWidget* self, int param1) {
    return self->QQuickWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHeightForWidth(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_heightforwidth_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QQuickWidget_HasHeightForWidth(const QQuickWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QQuickWidget_SuperHasHeightForWidth(const QQuickWidget* self) {
    return self->QQuickWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnHasHeightForWidth(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QQuickWidget_PaintEngine(const QQuickWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QQuickWidget_SuperPaintEngine(const QQuickWidget* self) {
    return self->QQuickWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnPaintEngine(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_paintengine_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_EnterEvent(QQuickWidget* self, QEnterEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperEnterEvent(QQuickWidget* self, QEnterEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEnterEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_enterevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_LeaveEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperLeaveEvent(QQuickWidget* self, QEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnLeaveEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_leaveevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_MoveEvent(QQuickWidget* self, QMoveEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperMoveEvent(QQuickWidget* self, QMoveEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMoveEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_moveevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_CloseEvent(QQuickWidget* self, QCloseEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperCloseEvent(QQuickWidget* self, QCloseEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnCloseEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_closeevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_ContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperContextMenuEvent(QQuickWidget* self, QContextMenuEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnContextMenuEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_contextmenuevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_TabletEvent(QQuickWidget* self, QTabletEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperTabletEvent(QQuickWidget* self, QTabletEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnTabletEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_tabletevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_ActionEvent(QQuickWidget* self, QActionEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperActionEvent(QQuickWidget* self, QActionEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnActionEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_actionevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickWidget_NativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        return vqquickwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickWidget_SuperNativeEvent(QQuickWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        return vqquickwidget->QQuickWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QQuickWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnNativeEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_nativeevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_ChangeEvent(QQuickWidget* self, QEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperChangeEvent(QQuickWidget* self, QEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnChangeEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_changeevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QQuickWidget_Metric(const QQuickWidget* self, int param1) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget) {
        return vqquickwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QQuickWidget_SuperMetric(const QQuickWidget* self, int param1) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->QQuickWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QQuickWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnMetric(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_metric_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_InitPainter(const QQuickWidget* self, QPainter* painter) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget) {
        vqquickwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperInitPainter(const QQuickWidget* self, QPainter* painter) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        vqquickwidget->QQuickWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInitPainter(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_initpainter_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QQuickWidget_Redirected(const QQuickWidget* self, QPoint* offset) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget) {
        return vqquickwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QQuickWidget_SuperRedirected(const QQuickWidget* self, QPoint* offset) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->QQuickWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnRedirected(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_redirected_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QQuickWidget_SharedPainter(const QQuickWidget* self) {
    auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self));
    if (vqquickwidget) {
        return vqquickwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QQuickWidget_SuperSharedPainter(const QQuickWidget* self) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->QQuickWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QQuickWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnSharedPainter(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_sharedpainter_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_InputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperInputMethodEvent(QQuickWidget* self, QInputMethodEvent* param1) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInputMethodEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_inputmethodevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QQuickWidget_InputMethodQuery(const QQuickWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QQuickWidget_SuperInputMethodQuery(const QQuickWidget* self, int param1) {
    return new QVariant(self->QQuickWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnInputMethodQuery(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self)))
        vqquickwidget->qquickwidget_inputmethodquery_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QQuickWidget_EventFilter(QQuickWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickWidget_SuperEventFilter(QQuickWidget* self, QObject* watched, QEvent* event) {
    return self->QQuickWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnEventFilter(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_eventfilter_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_ChildEvent(QQuickWidget* self, QChildEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperChildEvent(QQuickWidget* self, QChildEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnChildEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_childevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_CustomEvent(QQuickWidget* self, QEvent* event) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperCustomEvent(QQuickWidget* self, QEvent* event) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnCustomEvent(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_customevent_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_ConnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperConnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnConnectNotify(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_connectnotify_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickWidget_DisconnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self);
    if (vqquickwidget) {
        vqquickwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickWidget_SuperDisconnectNotify(QQuickWidget* self, const QMetaMethod* signal) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->QQuickWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickWidget_OnDisconnectNotify(QQuickWidget* self, intptr_t slot) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self))
        vqquickwidget->qquickwidget_disconnectnotify_callback = reinterpret_cast<VirtualQQuickWidget::QQuickWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QQuickWidget_UpdateMicroFocus(QQuickWidget* self) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->VirtualQQuickWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QQuickWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickWidget_Create(QQuickWidget* self) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->VirtualQQuickWidget::create();
    } else
        qFatal("Error: Protected method QQuickWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickWidget_Destroy(QQuickWidget* self) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        vqquickwidget->VirtualQQuickWidget::destroy();
    } else
        qFatal("Error: Protected method QQuickWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickWidget_FocusNextChild(QQuickWidget* self) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        return vqquickwidget->VirtualQQuickWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QQuickWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickWidget_FocusPreviousChild(QQuickWidget* self) {
    if (auto* vqquickwidget = dynamic_cast<VirtualQQuickWidget*>(self)) {
        return vqquickwidget->VirtualQQuickWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QQuickWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickWidget_Sender(const QQuickWidget* self) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->VirtualQQuickWidget::sender();
    } else
        qFatal("Error: Protected method QQuickWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickWidget_SenderSignalIndex(const QQuickWidget* self) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->VirtualQQuickWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickWidget_Receivers(const QQuickWidget* self, const char* signal) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->VirtualQQuickWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickWidget_IsSignalConnected(const QQuickWidget* self, const QMetaMethod* signal) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->VirtualQQuickWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QQuickWidget_GetDecodedMetricF(const QQuickWidget* self, int metricA, int metricB) {
    if (auto* vqquickwidget = const_cast<VirtualQQuickWidget*>(dynamic_cast<const VirtualQQuickWidget*>(self))) {
        return vqquickwidget->VirtualQQuickWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QQuickWidget::getDecodedMetricF called without a directly constructed type");
}

void QQuickWidget_Delete(QQuickWidget* self) {
    delete self;
}
