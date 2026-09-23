#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlExpression>
#include <QQmlScriptString>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <qqmlexpression.h>
#include "libqqmlexpression.h"
#include "libqqmlexpression.hxx"

QQmlExpression* QQmlExpression_new() {
    return new VirtualQQmlExpression();
}

QQmlExpression* QQmlExpression_new2(QQmlContext* param1, QObject* param2, const libqt_string param3) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return new VirtualQQmlExpression(param1, param2, param3_QString);
}

QQmlExpression* QQmlExpression_new3(const QQmlScriptString* param1) {
    return new VirtualQQmlExpression(*param1);
}

QQmlExpression* QQmlExpression_new4(QQmlContext* param1, QObject* param2, const libqt_string param3, QObject* param4) {
    QString param3_QString = QString::fromUtf8(param3.data, param3.len);
    return new VirtualQQmlExpression(param1, param2, param3_QString, param4);
}

QQmlExpression* QQmlExpression_new5(const QQmlScriptString* param1, QQmlContext* param2) {
    return new VirtualQQmlExpression(*param1, param2);
}

QQmlExpression* QQmlExpression_new6(const QQmlScriptString* param1, QQmlContext* param2, QObject* param3) {
    return new VirtualQQmlExpression(*param1, param2, param3);
}

QQmlExpression* QQmlExpression_new7(const QQmlScriptString* param1, QQmlContext* param2, QObject* param3, QObject* param4) {
    return new VirtualQQmlExpression(*param1, param2, param3, param4);
}

QMetaObject* QQmlExpression_MetaObject(const QQmlExpression* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQmlExpression_Metacast(QQmlExpression* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQmlExpression_Metacall(QQmlExpression* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQmlExpression_Tr(const char* s) {
    auto _ret = QQmlExpression::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QQmlEngine* QQmlExpression_Engine(const QQmlExpression* self) {
    return self->engine();
}

QQmlContext* QQmlExpression_Context(const QQmlExpression* self) {
    return self->context();
}

libqt_string QQmlExpression_Expression(const QQmlExpression* self) {
    auto _ret = self->expression();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlExpression_SetExpression(QQmlExpression* self, const libqt_string expression) {
    QString expression_QString = QString::fromUtf8(expression.data, expression.len);
    self->setExpression(expression_QString);
}

bool QQmlExpression_NotifyOnValueChanged(const QQmlExpression* self) {
    return self->notifyOnValueChanged();
}

void QQmlExpression_SetNotifyOnValueChanged(QQmlExpression* self, bool notifyOnValueChanged) {
    self->setNotifyOnValueChanged(notifyOnValueChanged);
}

libqt_string QQmlExpression_SourceFile(const QQmlExpression* self) {
    auto _ret = self->sourceFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QQmlExpression_LineNumber(const QQmlExpression* self) {
    return self->lineNumber();
}

int QQmlExpression_ColumnNumber(const QQmlExpression* self) {
    return self->columnNumber();
}

void QQmlExpression_SetSourceLocation(QQmlExpression* self, const libqt_string fileName, int line) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setSourceLocation(fileName_QString, static_cast<int>(line));
}

QObject* QQmlExpression_ScopeObject(const QQmlExpression* self) {
    return self->scopeObject();
}

bool QQmlExpression_HasError(const QQmlExpression* self) {
    return self->hasError();
}

void QQmlExpression_ClearError(QQmlExpression* self) {
    self->clearError();
}

QQmlError* QQmlExpression_Error(const QQmlExpression* self) {
    return new QQmlError(self->error());
}

QVariant* QQmlExpression_Evaluate(QQmlExpression* self) {
    return new QVariant(self->evaluate());
}

void QQmlExpression_ValueChanged(QQmlExpression* self) {
    self->valueChanged();
}

void QQmlExpression_Connect_ValueChanged(QQmlExpression* self, intptr_t slot) {
    void (*slotFunc)(QQmlExpression*) = reinterpret_cast<void (*)(QQmlExpression*)>(slot);
    QQmlExpression::connect(self,
                            static_cast<void (QQmlExpression::*)()>(&QQmlExpression::valueChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

libqt_string QQmlExpression_Tr2(const char* s, const char* c) {
    auto _ret = QQmlExpression::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQmlExpression_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQmlExpression::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQmlExpression_SetSourceLocation3(QQmlExpression* self, const libqt_string fileName, int line, int column) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setSourceLocation(fileName_QString, static_cast<int>(line), static_cast<int>(column));
}

QVariant* QQmlExpression_Evaluate1(QQmlExpression* self, bool* valueIsUndefined) {
    return new QVariant(self->evaluate(valueIsUndefined));
}

// Base class handler implementation
QMetaObject* QQmlExpression_SuperMetaObject(const QQmlExpression* self) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_MetaObject_IsBase(true);
        return (QMetaObject*)vqqmlexpression->metaObject();
    } else {
        return (QMetaObject*)self->QQmlExpression::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnMetaObject(const QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_MetaObject_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQmlExpression_SuperMetacast(QQmlExpression* self, const char* param1) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_Metacast_IsBase(true);
        return vqqmlexpression->qt_metacast(param1);
    } else {
        return self->QQmlExpression::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnMetacast(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_Metacast_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQmlExpression_SuperMetacall(QQmlExpression* self, int param1, int param2, void** param3) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_Metacall_IsBase(true);
        return vqqmlexpression->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQmlExpression::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnMetacall(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_Metacall_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_Metacall_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExpression_Event(QQmlExpression* self, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->event(event);
    } else {
        return self->QQmlExpression::event(event);
    }
}

// Base class handler implementation
bool QQmlExpression_SuperEvent(QQmlExpression* self, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_Event_IsBase(true);
        return vqqmlexpression->event(event);
    } else {
        return self->QQmlExpression::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnEvent(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_Event_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExpression_EventFilter(QQmlExpression* self, QObject* watched, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->eventFilter(watched, event);
    } else {
        return self->QQmlExpression::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQmlExpression_SuperEventFilter(QQmlExpression* self, QObject* watched, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_EventFilter_IsBase(true);
        return vqqmlexpression->eventFilter(watched, event);
    } else {
        return self->QQmlExpression::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnEventFilter(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_EventFilter_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQmlExpression_TimerEvent(QQmlExpression* self, QTimerEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->timerEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQmlExpression_SuperTimerEvent(QQmlExpression* self, QTimerEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_TimerEvent_IsBase(true);
        vqqmlexpression->timerEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnTimerEvent(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_TimerEvent_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExpression_ChildEvent(QQmlExpression* self, QChildEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->childEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQmlExpression_SuperChildEvent(QQmlExpression* self, QChildEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_ChildEvent_IsBase(true);
        vqqmlexpression->childEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnChildEvent(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_ChildEvent_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExpression_CustomEvent(QQmlExpression* self, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->customEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQmlExpression_SuperCustomEvent(QQmlExpression* self, QEvent* event) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_CustomEvent_IsBase(true);
        vqqmlexpression->customEvent(event);
    } else {
        ((VirtualQQmlExpression*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnCustomEvent(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_CustomEvent_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQmlExpression_ConnectNotify(QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->connectNotify(*signal);
    } else {
        ((VirtualQQmlExpression*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlExpression_SuperConnectNotify(QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_ConnectNotify_IsBase(true);
        vqqmlexpression->connectNotify(*signal);
    } else {
        ((VirtualQQmlExpression*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnConnectNotify(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_ConnectNotify_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQmlExpression_DisconnectNotify(QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlExpression*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQmlExpression_SuperDisconnectNotify(QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_DisconnectNotify_IsBase(true);
        vqqmlexpression->disconnectNotify(*signal);
    } else {
        ((VirtualQQmlExpression*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnDisconnectNotify(QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = dynamic_cast<VirtualQQmlExpression*>(self);
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_DisconnectNotify_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQmlExpression_Sender(const QQmlExpression* self) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->sender();
    } else {
        return ((VirtualQQmlExpression*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQmlExpression_SuperSender(const QQmlExpression* self) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_Sender_IsBase(true);
        return vqqmlexpression->sender();
    } else {
        return ((VirtualQQmlExpression*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnSender(const QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_Sender_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQmlExpression_SenderSignalIndex(const QQmlExpression* self) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->senderSignalIndex();
    } else {
        return ((VirtualQQmlExpression*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQmlExpression_SuperSenderSignalIndex(const QQmlExpression* self) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_SenderSignalIndex_IsBase(true);
        return vqqmlexpression->senderSignalIndex();
    } else {
        return ((VirtualQQmlExpression*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnSenderSignalIndex(const QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQmlExpression_Receivers(const QQmlExpression* self, const char* signal) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->receivers(signal);
    } else {
        return ((VirtualQQmlExpression*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQmlExpression_SuperReceivers(const QQmlExpression* self, const char* signal) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_Receivers_IsBase(true);
        return vqqmlexpression->receivers(signal);
    } else {
        return ((VirtualQQmlExpression*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnReceivers(const QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_Receivers_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQmlExpression_IsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        return vqqmlexpression->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlExpression*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQmlExpression_SuperIsSignalConnected(const QQmlExpression* self, const QMetaMethod* signal) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression) {
        vqqmlexpression->setQQmlExpression_IsSignalConnected_IsBase(true);
        return vqqmlexpression->isSignalConnected(*signal);
    } else {
        return ((VirtualQQmlExpression*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQmlExpression_OnIsSignalConnected(const QQmlExpression* self, intptr_t slot) {
    auto* vqqmlexpression = const_cast<VirtualQQmlExpression*>(dynamic_cast<const VirtualQQmlExpression*>(self));
    if (vqqmlexpression && vqqmlexpression->isVirtualQQmlExpression)
        vqqmlexpression->setQQmlExpression_IsSignalConnected_Callback(reinterpret_cast<VirtualQQmlExpression::QQmlExpression_IsSignalConnected_Callback>(slot));
}

void QQmlExpression_Delete(QQmlExpression* self) {
    delete self;
}
