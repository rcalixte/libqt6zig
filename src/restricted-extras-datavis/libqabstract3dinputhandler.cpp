#include <Q3DScene>
#include <QAbstract3DInputHandler>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPoint>
#include <QString>
#include <QTouchEvent>
#include <QWheelEvent>
#include <qabstract3dinputhandler.h>
#include "libqabstract3dinputhandler.h"
#include "libqabstract3dinputhandler.hxx"

QMetaObject* QAbstract3DInputHandler_MetaObject(const QAbstract3DInputHandler* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstract3DInputHandler_Metacast(QAbstract3DInputHandler* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstract3DInputHandler_Metacall(QAbstract3DInputHandler* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstract3DInputHandler_Tr(const char* s) {
    auto _ret = QAbstract3DInputHandler::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DInputHandler_MouseDoubleClickEvent(QAbstract3DInputHandler* self, QMouseEvent* event) {
    self->mouseDoubleClickEvent(event);
}

void QAbstract3DInputHandler_TouchEvent(QAbstract3DInputHandler* self, QTouchEvent* event) {
    self->touchEvent(event);
}

void QAbstract3DInputHandler_MousePressEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mousePressEvent(event, *mousePos);
}

void QAbstract3DInputHandler_MouseReleaseEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseReleaseEvent(event, *mousePos);
}

void QAbstract3DInputHandler_MouseMoveEvent(QAbstract3DInputHandler* self, QMouseEvent* event, const QPoint* mousePos) {
    self->mouseMoveEvent(event, *mousePos);
}

void QAbstract3DInputHandler_WheelEvent(QAbstract3DInputHandler* self, QWheelEvent* event) {
    self->wheelEvent(event);
}

int QAbstract3DInputHandler_InputView(const QAbstract3DInputHandler* self) {
    return static_cast<int>(self->inputView());
}

void QAbstract3DInputHandler_SetInputView(QAbstract3DInputHandler* self, int inputView) {
    self->setInputView(static_cast<QAbstract3DInputHandler::InputView>(inputView));
}

QPoint* QAbstract3DInputHandler_InputPosition(const QAbstract3DInputHandler* self) {
    return new QPoint(self->inputPosition());
}

void QAbstract3DInputHandler_SetInputPosition(QAbstract3DInputHandler* self, const QPoint* position) {
    self->setInputPosition(*position);
}

Q3DScene* QAbstract3DInputHandler_Scene(const QAbstract3DInputHandler* self) {
    return self->scene();
}

void QAbstract3DInputHandler_SetScene(QAbstract3DInputHandler* self, Q3DScene* scene) {
    self->setScene(scene);
}

void QAbstract3DInputHandler_PositionChanged(QAbstract3DInputHandler* self, const QPoint* position) {
    self->positionChanged(*position);
}

void QAbstract3DInputHandler_Connect_PositionChanged(QAbstract3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DInputHandler*, QPoint*) = reinterpret_cast<void (*)(QAbstract3DInputHandler*, QPoint*)>(slot);
    QAbstract3DInputHandler::connect(self,
                                     static_cast<void (QAbstract3DInputHandler::*)(const QPoint&)>(&QAbstract3DInputHandler::positionChanged),
                                     [self, slotFunc](const QPoint& position) {
                                         const QPoint& position_ret = position;
                                         // Cast returned reference into pointer
                                         QPoint* sigval1 = const_cast<QPoint*>(&position_ret);
                                         slotFunc(self, sigval1);
                                     });
}

void QAbstract3DInputHandler_InputViewChanged(QAbstract3DInputHandler* self, int view) {
    self->inputViewChanged(static_cast<QAbstract3DInputHandler::InputView>(view));
}

void QAbstract3DInputHandler_Connect_InputViewChanged(QAbstract3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DInputHandler*, int) = reinterpret_cast<void (*)(QAbstract3DInputHandler*, int)>(slot);
    QAbstract3DInputHandler::connect(self,
                                     static_cast<void (QAbstract3DInputHandler::*)(QAbstract3DInputHandler::InputView)>(&QAbstract3DInputHandler::inputViewChanged),
                                     [self, slotFunc](QAbstract3DInputHandler::InputView view) {
                                         int sigval1 = static_cast<int>(view);
                                         slotFunc(self, sigval1);
                                     });
}

void QAbstract3DInputHandler_SceneChanged(QAbstract3DInputHandler* self, Q3DScene* scene) {
    self->sceneChanged(scene);
}

void QAbstract3DInputHandler_Connect_SceneChanged(QAbstract3DInputHandler* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DInputHandler*, Q3DScene*) = reinterpret_cast<void (*)(QAbstract3DInputHandler*, Q3DScene*)>(slot);
    QAbstract3DInputHandler::connect(self,
                                     static_cast<void (QAbstract3DInputHandler::*)(Q3DScene*)>(&QAbstract3DInputHandler::sceneChanged),
                                     [self, slotFunc](Q3DScene* scene) {
                                         Q3DScene* sigval1 = scene;
                                         slotFunc(self, sigval1);
                                     });
}

libqt_string QAbstract3DInputHandler_Tr2(const char* s, const char* c) {
    auto _ret = QAbstract3DInputHandler::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstract3DInputHandler_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstract3DInputHandler::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DInputHandler_Delete(QAbstract3DInputHandler* self) {
    delete self;
}
