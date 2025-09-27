#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QList>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include <QPoint>
#include <QPointF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QTransform>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <qopenglshaderprogram.h>
#include "libqopenglshaderprogram.h"
#include "libqopenglshaderprogram.hxx"

QOpenGLShader* QOpenGLShader_new(int typeVal) {
    return new VirtualQOpenGLShader(static_cast<QOpenGLShader::ShaderType>(typeVal));
}

QOpenGLShader* QOpenGLShader_new2(int typeVal, QObject* parent) {
    return new VirtualQOpenGLShader(static_cast<QOpenGLShader::ShaderType>(typeVal), parent);
}

QMetaObject* QOpenGLShader_MetaObject(const QOpenGLShader* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLShader_Metacast(QOpenGLShader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLShader_Metacall(QOpenGLShader* self, int param1, int param2, void** param3) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLShader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLShader_Tr(const char* s) {
    QString _ret = QOpenGLShader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QOpenGLShader_ShaderType(const QOpenGLShader* self) {
    return static_cast<int>(self->shaderType());
}

bool QOpenGLShader_CompileSourceCode(QOpenGLShader* self, const char* source) {
    return self->compileSourceCode(source);
}

bool QOpenGLShader_CompileSourceCode2(QOpenGLShader* self, const libqt_string source) {
    QByteArray source_QByteArray(source.data, source.len);
    return self->compileSourceCode(source_QByteArray);
}

bool QOpenGLShader_CompileSourceCode3(QOpenGLShader* self, const libqt_string source) {
    QString source_QString = QString::fromUtf8(source.data, source.len);
    return self->compileSourceCode(source_QString);
}

bool QOpenGLShader_CompileSourceFile(QOpenGLShader* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->compileSourceFile(fileName_QString);
}

libqt_string QOpenGLShader_SourceCode(const QOpenGLShader* self) {
    QByteArray _qb = self->sourceCode();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLShader_IsCompiled(const QOpenGLShader* self) {
    return self->isCompiled();
}

libqt_string QOpenGLShader_Log(const QOpenGLShader* self) {
    QString _ret = self->log();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

uint32_t QOpenGLShader_ShaderId(const QOpenGLShader* self) {
    return self->shaderId();
}

bool QOpenGLShader_HasOpenGLShaders(int typeVal) {
    return QOpenGLShader::hasOpenGLShaders(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal));
}

libqt_string QOpenGLShader_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLShader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLShader_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLShader::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLShader_HasOpenGLShaders2(int typeVal, QOpenGLContext* context) {
    return QOpenGLShader::hasOpenGLShaders(static_cast<QFlags<QOpenGLShader::ShaderTypeBit>>(typeVal), context);
}

// Base class handler implementation
int QOpenGLShader_QBaseMetacall(QOpenGLShader* self, int param1, int param2, void** param3) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Metacall_IsBase(true);
        return vqopenglshader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLShader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnMetacall(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Metacall_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShader_Event(QOpenGLShader* self, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->event(event);
    } else {
        return self->QOpenGLShader::event(event);
    }
}

// Base class handler implementation
bool QOpenGLShader_QBaseEvent(QOpenGLShader* self, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Event_IsBase(true);
        return vqopenglshader->event(event);
    } else {
        return self->QOpenGLShader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnEvent(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Event_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShader_EventFilter(QOpenGLShader* self, QObject* watched, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->eventFilter(watched, event);
    } else {
        return self->QOpenGLShader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLShader_QBaseEventFilter(QOpenGLShader* self, QObject* watched, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_EventFilter_IsBase(true);
        return vqopenglshader->eventFilter(watched, event);
    } else {
        return self->QOpenGLShader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnEventFilter(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShader_TimerEvent(QOpenGLShader* self, QTimerEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->timerEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShader_QBaseTimerEvent(QOpenGLShader* self, QTimerEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_TimerEvent_IsBase(true);
        vqopenglshader->timerEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnTimerEvent(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShader_ChildEvent(QOpenGLShader* self, QChildEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->childEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShader_QBaseChildEvent(QOpenGLShader* self, QChildEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_ChildEvent_IsBase(true);
        vqopenglshader->childEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnChildEvent(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShader_CustomEvent(QOpenGLShader* self, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->customEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShader_QBaseCustomEvent(QOpenGLShader* self, QEvent* event) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_CustomEvent_IsBase(true);
        vqopenglshader->customEvent(event);
    } else {
        ((VirtualQOpenGLShader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnCustomEvent(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShader_ConnectNotify(QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLShader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLShader_QBaseConnectNotify(QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_ConnectNotify_IsBase(true);
        vqopenglshader->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLShader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnConnectNotify(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShader_DisconnectNotify(QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLShader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLShader_QBaseDisconnectNotify(QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_DisconnectNotify_IsBase(true);
        vqopenglshader->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLShader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnDisconnectNotify(QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = dynamic_cast<VirtualQOpenGLShader*>(self);
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLShader_Sender(const QOpenGLShader* self) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->sender();
    } else {
        return ((VirtualQOpenGLShader*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLShader_QBaseSender(const QOpenGLShader* self) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Sender_IsBase(true);
        return vqopenglshader->sender();
    } else {
        return ((VirtualQOpenGLShader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnSender(const QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Sender_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLShader_SenderSignalIndex(const QOpenGLShader* self) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLShader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLShader_QBaseSenderSignalIndex(const QOpenGLShader* self) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_SenderSignalIndex_IsBase(true);
        return vqopenglshader->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLShader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnSenderSignalIndex(const QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLShader_Receivers(const QOpenGLShader* self, const char* signal) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->receivers(signal);
    } else {
        return ((VirtualQOpenGLShader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLShader_QBaseReceivers(const QOpenGLShader* self, const char* signal) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Receivers_IsBase(true);
        return vqopenglshader->receivers(signal);
    } else {
        return ((VirtualQOpenGLShader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnReceivers(const QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_Receivers_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShader_IsSignalConnected(const QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        return vqopenglshader->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLShader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLShader_QBaseIsSignalConnected(const QOpenGLShader* self, const QMetaMethod* signal) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_IsSignalConnected_IsBase(true);
        return vqopenglshader->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLShader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShader_OnIsSignalConnected(const QOpenGLShader* self, intptr_t slot) {
    auto* vqopenglshader = const_cast<VirtualQOpenGLShader*>(dynamic_cast<const VirtualQOpenGLShader*>(self));
    if (vqopenglshader && vqopenglshader->isVirtualQOpenGLShader) {
        vqopenglshader->setQOpenGLShader_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLShader::QOpenGLShader_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLShader_Delete(QOpenGLShader* self) {
    delete self;
}

QOpenGLShaderProgram* QOpenGLShaderProgram_new() {
    return new VirtualQOpenGLShaderProgram();
}

QOpenGLShaderProgram* QOpenGLShaderProgram_new2(QObject* parent) {
    return new VirtualQOpenGLShaderProgram(parent);
}

QMetaObject* QOpenGLShaderProgram_MetaObject(const QOpenGLShaderProgram* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLShaderProgram_Metacast(QOpenGLShaderProgram* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLShaderProgram_Metacall(QOpenGLShaderProgram* self, int param1, int param2, void** param3) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLShaderProgram_Tr(const char* s) {
    QString _ret = QOpenGLShaderProgram::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLShaderProgram_AddShader(QOpenGLShaderProgram* self, QOpenGLShader* shader) {
    return self->addShader(shader);
}

void QOpenGLShaderProgram_RemoveShader(QOpenGLShaderProgram* self, QOpenGLShader* shader) {
    self->removeShader(shader);
}

libqt_list /* of QOpenGLShader* */ QOpenGLShaderProgram_Shaders(const QOpenGLShaderProgram* self) {
    QList<QOpenGLShader*> _ret = self->shaders();
    // Convert QList<> from C++ memory to manually-managed C memory
    QOpenGLShader** _arr = static_cast<QOpenGLShader**>(malloc(sizeof(QOpenGLShader*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source) {
    return self->addShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source);
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
    QByteArray source_QByteArray(source.data, source.len);
    return self->addShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source_QByteArray);
}

bool QOpenGLShaderProgram_AddShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
    QString source_QString = QString::fromUtf8(source.data, source.len);
    return self->addShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source_QString);
}

bool QOpenGLShaderProgram_AddShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->addShaderFromSourceFile(static_cast<QOpenGLShader::ShaderType>(typeVal), fileName_QString);
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode(QOpenGLShaderProgram* self, int typeVal, const char* source) {
    return self->addCacheableShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source);
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode2(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
    QByteArray source_QByteArray(source.data, source.len);
    return self->addCacheableShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source_QByteArray);
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceCode3(QOpenGLShaderProgram* self, int typeVal, const libqt_string source) {
    QString source_QString = QString::fromUtf8(source.data, source.len);
    return self->addCacheableShaderFromSourceCode(static_cast<QOpenGLShader::ShaderType>(typeVal), source_QString);
}

bool QOpenGLShaderProgram_AddCacheableShaderFromSourceFile(QOpenGLShaderProgram* self, int typeVal, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return self->addCacheableShaderFromSourceFile(static_cast<QOpenGLShader::ShaderType>(typeVal), fileName_QString);
}

void QOpenGLShaderProgram_RemoveAllShaders(QOpenGLShaderProgram* self) {
    self->removeAllShaders();
}

bool QOpenGLShaderProgram_Link(QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return self->link();
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->link();
    }
}

bool QOpenGLShaderProgram_IsLinked(const QOpenGLShaderProgram* self) {
    return self->isLinked();
}

libqt_string QOpenGLShaderProgram_Log(const QOpenGLShaderProgram* self) {
    QString _ret = self->log();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QOpenGLShaderProgram_Bind(QOpenGLShaderProgram* self) {
    return self->bind();
}

void QOpenGLShaderProgram_Release(QOpenGLShaderProgram* self) {
    self->release();
}

bool QOpenGLShaderProgram_Create(QOpenGLShaderProgram* self) {
    return self->create();
}

uint32_t QOpenGLShaderProgram_ProgramId(const QOpenGLShaderProgram* self) {
    return self->programId();
}

int QOpenGLShaderProgram_MaxGeometryOutputVertices(const QOpenGLShaderProgram* self) {
    return self->maxGeometryOutputVertices();
}

void QOpenGLShaderProgram_SetPatchVertexCount(QOpenGLShaderProgram* self, int count) {
    self->setPatchVertexCount(static_cast<int>(count));
}

int QOpenGLShaderProgram_PatchVertexCount(const QOpenGLShaderProgram* self) {
    return self->patchVertexCount();
}

void QOpenGLShaderProgram_SetDefaultOuterTessellationLevels(QOpenGLShaderProgram* self, const libqt_list /* of float */ levels) {
    QList<float> levels_QList;
    levels_QList.reserve(levels.len);
    float* levels_arr = static_cast<float*>(levels.data);
    for (size_t i = 0; i < levels.len; ++i) {
        levels_QList.push_back(static_cast<float>(levels_arr[i]));
    }
    self->setDefaultOuterTessellationLevels(levels_QList);
}

libqt_list /* of float */ QOpenGLShaderProgram_DefaultOuterTessellationLevels(const QOpenGLShaderProgram* self) {
    QList<float> _ret = self->defaultOuterTessellationLevels();
    // Convert QList<> from C++ memory to manually-managed C memory
    float* _arr = static_cast<float*>(malloc(sizeof(float) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QOpenGLShaderProgram_SetDefaultInnerTessellationLevels(QOpenGLShaderProgram* self, const libqt_list /* of float */ levels) {
    QList<float> levels_QList;
    levels_QList.reserve(levels.len);
    float* levels_arr = static_cast<float*>(levels.data);
    for (size_t i = 0; i < levels.len; ++i) {
        levels_QList.push_back(static_cast<float>(levels_arr[i]));
    }
    self->setDefaultInnerTessellationLevels(levels_QList);
}

libqt_list /* of float */ QOpenGLShaderProgram_DefaultInnerTessellationLevels(const QOpenGLShaderProgram* self) {
    QList<float> _ret = self->defaultInnerTessellationLevels();
    // Convert QList<> from C++ memory to manually-managed C memory
    float* _arr = static_cast<float*>(malloc(sizeof(float) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QOpenGLShaderProgram_BindAttributeLocation(QOpenGLShaderProgram* self, const char* name, int location) {
    self->bindAttributeLocation(name, static_cast<int>(location));
}

void QOpenGLShaderProgram_BindAttributeLocation2(QOpenGLShaderProgram* self, const libqt_string name, int location) {
    QByteArray name_QByteArray(name.data, name.len);
    self->bindAttributeLocation(name_QByteArray, static_cast<int>(location));
}

void QOpenGLShaderProgram_BindAttributeLocation3(QOpenGLShaderProgram* self, const libqt_string name, int location) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->bindAttributeLocation(name_QString, static_cast<int>(location));
}

int QOpenGLShaderProgram_AttributeLocation(const QOpenGLShaderProgram* self, const char* name) {
    return self->attributeLocation(name);
}

int QOpenGLShaderProgram_AttributeLocation2(const QOpenGLShaderProgram* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->attributeLocation(name_QByteArray);
}

int QOpenGLShaderProgram_AttributeLocation3(const QOpenGLShaderProgram* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->attributeLocation(name_QString);
}

void QOpenGLShaderProgram_SetAttributeValue(QOpenGLShaderProgram* self, int location, float value) {
    self->setAttributeValue(static_cast<int>(location), static_cast<GLfloat>(value));
}

void QOpenGLShaderProgram_SetAttributeValue2(QOpenGLShaderProgram* self, int location, float x, float y) {
    self->setAttributeValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLShaderProgram_SetAttributeValue3(QOpenGLShaderProgram* self, int location, float x, float y, float z) {
    self->setAttributeValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLShaderProgram_SetAttributeValue4(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w) {
    self->setAttributeValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLShaderProgram_SetAttributeValue5(QOpenGLShaderProgram* self, int location, const QVector2D* value) {
    self->setAttributeValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetAttributeValue6(QOpenGLShaderProgram* self, int location, const QVector3D* value) {
    self->setAttributeValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetAttributeValue7(QOpenGLShaderProgram* self, int location, const QVector4D* value) {
    self->setAttributeValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetAttributeValue8(QOpenGLShaderProgram* self, int location, const QColor* value) {
    self->setAttributeValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetAttributeValue9(QOpenGLShaderProgram* self, int location, const float* values, int columns, int rows) {
    self->setAttributeValue(static_cast<int>(location), static_cast<const GLfloat*>(values), static_cast<int>(columns), static_cast<int>(rows));
}

void QOpenGLShaderProgram_SetAttributeValue10(QOpenGLShaderProgram* self, const char* name, float value) {
    self->setAttributeValue(name, static_cast<GLfloat>(value));
}

void QOpenGLShaderProgram_SetAttributeValue11(QOpenGLShaderProgram* self, const char* name, float x, float y) {
    self->setAttributeValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLShaderProgram_SetAttributeValue12(QOpenGLShaderProgram* self, const char* name, float x, float y, float z) {
    self->setAttributeValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLShaderProgram_SetAttributeValue13(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w) {
    self->setAttributeValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLShaderProgram_SetAttributeValue14(QOpenGLShaderProgram* self, const char* name, const QVector2D* value) {
    self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue15(QOpenGLShaderProgram* self, const char* name, const QVector3D* value) {
    self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue16(QOpenGLShaderProgram* self, const char* name, const QVector4D* value) {
    self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue17(QOpenGLShaderProgram* self, const char* name, const QColor* value) {
    self->setAttributeValue(name, *value);
}

void QOpenGLShaderProgram_SetAttributeValue18(QOpenGLShaderProgram* self, const char* name, const float* values, int columns, int rows) {
    self->setAttributeValue(name, static_cast<const GLfloat*>(values), static_cast<int>(columns), static_cast<int>(rows));
}

void QOpenGLShaderProgram_SetAttributeArray(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize) {
    self->setAttributeArray(static_cast<int>(location), static_cast<const GLfloat*>(values), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetAttributeArray2(QOpenGLShaderProgram* self, int location, const QVector2D* values) {
    self->setAttributeArray(static_cast<int>(location), values);
}

void QOpenGLShaderProgram_SetAttributeArray3(QOpenGLShaderProgram* self, int location, const QVector3D* values) {
    self->setAttributeArray(static_cast<int>(location), values);
}

void QOpenGLShaderProgram_SetAttributeArray4(QOpenGLShaderProgram* self, int location, const QVector4D* values) {
    self->setAttributeArray(static_cast<int>(location), values);
}

void QOpenGLShaderProgram_SetAttributeArray5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize) {
    self->setAttributeArray(static_cast<int>(location), static_cast<GLenum>(typeVal), values, static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetAttributeArray6(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize) {
    self->setAttributeArray(name, static_cast<const GLfloat*>(values), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetAttributeArray7(QOpenGLShaderProgram* self, const char* name, const QVector2D* values) {
    self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray8(QOpenGLShaderProgram* self, const char* name, const QVector3D* values) {
    self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray9(QOpenGLShaderProgram* self, const char* name, const QVector4D* values) {
    self->setAttributeArray(name, values);
}

void QOpenGLShaderProgram_SetAttributeArray10(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize) {
    self->setAttributeArray(name, static_cast<GLenum>(typeVal), values, static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetAttributeBuffer(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize) {
    self->setAttributeBuffer(static_cast<int>(location), static_cast<GLenum>(typeVal), static_cast<int>(offset), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetAttributeBuffer2(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize) {
    self->setAttributeBuffer(name, static_cast<GLenum>(typeVal), static_cast<int>(offset), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_EnableAttributeArray(QOpenGLShaderProgram* self, int location) {
    self->enableAttributeArray(static_cast<int>(location));
}

void QOpenGLShaderProgram_EnableAttributeArray2(QOpenGLShaderProgram* self, const char* name) {
    self->enableAttributeArray(name);
}

void QOpenGLShaderProgram_DisableAttributeArray(QOpenGLShaderProgram* self, int location) {
    self->disableAttributeArray(static_cast<int>(location));
}

void QOpenGLShaderProgram_DisableAttributeArray2(QOpenGLShaderProgram* self, const char* name) {
    self->disableAttributeArray(name);
}

int QOpenGLShaderProgram_UniformLocation(const QOpenGLShaderProgram* self, const char* name) {
    return self->uniformLocation(name);
}

int QOpenGLShaderProgram_UniformLocation2(const QOpenGLShaderProgram* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    return self->uniformLocation(name_QByteArray);
}

int QOpenGLShaderProgram_UniformLocation3(const QOpenGLShaderProgram* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->uniformLocation(name_QString);
}

void QOpenGLShaderProgram_SetUniformValue(QOpenGLShaderProgram* self, int location, float value) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLfloat>(value));
}

void QOpenGLShaderProgram_SetUniformValue2(QOpenGLShaderProgram* self, int location, int32_t value) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLint>(value));
}

void QOpenGLShaderProgram_SetUniformValue3(QOpenGLShaderProgram* self, int location, uint32_t value) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLuint>(value));
}

void QOpenGLShaderProgram_SetUniformValue4(QOpenGLShaderProgram* self, int location, float x, float y) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLShaderProgram_SetUniformValue5(QOpenGLShaderProgram* self, int location, float x, float y, float z) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLShaderProgram_SetUniformValue6(QOpenGLShaderProgram* self, int location, float x, float y, float z, float w) {
    self->setUniformValue(static_cast<int>(location), static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLShaderProgram_SetUniformValue7(QOpenGLShaderProgram* self, int location, const QVector2D* value) {
    self->setUniformValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetUniformValue8(QOpenGLShaderProgram* self, int location, const QVector3D* value) {
    self->setUniformValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetUniformValue9(QOpenGLShaderProgram* self, int location, const QVector4D* value) {
    self->setUniformValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetUniformValue10(QOpenGLShaderProgram* self, int location, const QColor* color) {
    self->setUniformValue(static_cast<int>(location), *color);
}

void QOpenGLShaderProgram_SetUniformValue11(QOpenGLShaderProgram* self, int location, const QPoint* point) {
    self->setUniformValue(static_cast<int>(location), *point);
}

void QOpenGLShaderProgram_SetUniformValue12(QOpenGLShaderProgram* self, int location, const QPointF* point) {
    self->setUniformValue(static_cast<int>(location), *point);
}

void QOpenGLShaderProgram_SetUniformValue13(QOpenGLShaderProgram* self, int location, const QSize* size) {
    self->setUniformValue(static_cast<int>(location), *size);
}

void QOpenGLShaderProgram_SetUniformValue14(QOpenGLShaderProgram* self, int location, const QSizeF* size) {
    self->setUniformValue(static_cast<int>(location), *size);
}

void QOpenGLShaderProgram_SetUniformValue23(QOpenGLShaderProgram* self, int location, const QMatrix4x4* value) {
    self->setUniformValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetUniformValue24(QOpenGLShaderProgram* self, int location, const QTransform* value) {
    self->setUniformValue(static_cast<int>(location), *value);
}

void QOpenGLShaderProgram_SetUniformValue25(QOpenGLShaderProgram* self, const char* name, float value) {
    self->setUniformValue(name, static_cast<GLfloat>(value));
}

void QOpenGLShaderProgram_SetUniformValue26(QOpenGLShaderProgram* self, const char* name, int32_t value) {
    self->setUniformValue(name, static_cast<GLint>(value));
}

void QOpenGLShaderProgram_SetUniformValue27(QOpenGLShaderProgram* self, const char* name, uint32_t value) {
    self->setUniformValue(name, static_cast<GLuint>(value));
}

void QOpenGLShaderProgram_SetUniformValue28(QOpenGLShaderProgram* self, const char* name, float x, float y) {
    self->setUniformValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y));
}

void QOpenGLShaderProgram_SetUniformValue29(QOpenGLShaderProgram* self, const char* name, float x, float y, float z) {
    self->setUniformValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z));
}

void QOpenGLShaderProgram_SetUniformValue30(QOpenGLShaderProgram* self, const char* name, float x, float y, float z, float w) {
    self->setUniformValue(name, static_cast<GLfloat>(x), static_cast<GLfloat>(y), static_cast<GLfloat>(z), static_cast<GLfloat>(w));
}

void QOpenGLShaderProgram_SetUniformValue31(QOpenGLShaderProgram* self, const char* name, const QVector2D* value) {
    self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue32(QOpenGLShaderProgram* self, const char* name, const QVector3D* value) {
    self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue33(QOpenGLShaderProgram* self, const char* name, const QVector4D* value) {
    self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue34(QOpenGLShaderProgram* self, const char* name, const QColor* color) {
    self->setUniformValue(name, *color);
}

void QOpenGLShaderProgram_SetUniformValue35(QOpenGLShaderProgram* self, const char* name, const QPoint* point) {
    self->setUniformValue(name, *point);
}

void QOpenGLShaderProgram_SetUniformValue36(QOpenGLShaderProgram* self, const char* name, const QPointF* point) {
    self->setUniformValue(name, *point);
}

void QOpenGLShaderProgram_SetUniformValue37(QOpenGLShaderProgram* self, const char* name, const QSize* size) {
    self->setUniformValue(name, *size);
}

void QOpenGLShaderProgram_SetUniformValue38(QOpenGLShaderProgram* self, const char* name, const QSizeF* size) {
    self->setUniformValue(name, *size);
}

void QOpenGLShaderProgram_SetUniformValue47(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* value) {
    self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValue48(QOpenGLShaderProgram* self, const char* name, const QTransform* value) {
    self->setUniformValue(name, *value);
}

void QOpenGLShaderProgram_SetUniformValueArray(QOpenGLShaderProgram* self, int location, const float* values, int count, int tupleSize) {
    self->setUniformValueArray(static_cast<int>(location), static_cast<const GLfloat*>(values), static_cast<int>(count), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetUniformValueArray2(QOpenGLShaderProgram* self, int location, const int32_t* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), static_cast<const GLint*>(values), static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray3(QOpenGLShaderProgram* self, int location, const uint32_t* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), static_cast<const GLuint*>(values), static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray4(QOpenGLShaderProgram* self, int location, const QVector2D* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray5(QOpenGLShaderProgram* self, int location, const QVector3D* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray6(QOpenGLShaderProgram* self, int location, const QVector4D* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray15(QOpenGLShaderProgram* self, int location, const QMatrix4x4* values, int count) {
    self->setUniformValueArray(static_cast<int>(location), values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray16(QOpenGLShaderProgram* self, const char* name, const float* values, int count, int tupleSize) {
    self->setUniformValueArray(name, static_cast<const GLfloat*>(values), static_cast<int>(count), static_cast<int>(tupleSize));
}

void QOpenGLShaderProgram_SetUniformValueArray17(QOpenGLShaderProgram* self, const char* name, const int32_t* values, int count) {
    self->setUniformValueArray(name, static_cast<const GLint*>(values), static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray18(QOpenGLShaderProgram* self, const char* name, const uint32_t* values, int count) {
    self->setUniformValueArray(name, static_cast<const GLuint*>(values), static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray19(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int count) {
    self->setUniformValueArray(name, values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray20(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int count) {
    self->setUniformValueArray(name, values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray21(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int count) {
    self->setUniformValueArray(name, values, static_cast<int>(count));
}

void QOpenGLShaderProgram_SetUniformValueArray30(QOpenGLShaderProgram* self, const char* name, const QMatrix4x4* values, int count) {
    self->setUniformValueArray(name, values, static_cast<int>(count));
}

bool QOpenGLShaderProgram_HasOpenGLShaderPrograms() {
    return QOpenGLShaderProgram::hasOpenGLShaderPrograms();
}

libqt_string QOpenGLShaderProgram_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLShaderProgram::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLShaderProgram_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLShaderProgram::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLShaderProgram_SetAttributeArray42(QOpenGLShaderProgram* self, int location, const float* values, int tupleSize, int stride) {
    self->setAttributeArray(static_cast<int>(location), static_cast<const GLfloat*>(values), static_cast<int>(tupleSize), static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray32(QOpenGLShaderProgram* self, int location, const QVector2D* values, int stride) {
    self->setAttributeArray(static_cast<int>(location), values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray33(QOpenGLShaderProgram* self, int location, const QVector3D* values, int stride) {
    self->setAttributeArray(static_cast<int>(location), values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray34(QOpenGLShaderProgram* self, int location, const QVector4D* values, int stride) {
    self->setAttributeArray(static_cast<int>(location), values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray52(QOpenGLShaderProgram* self, int location, uint32_t typeVal, const void* values, int tupleSize, int stride) {
    self->setAttributeArray(static_cast<int>(location), static_cast<GLenum>(typeVal), values, static_cast<int>(tupleSize), static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray43(QOpenGLShaderProgram* self, const char* name, const float* values, int tupleSize, int stride) {
    self->setAttributeArray(name, static_cast<const GLfloat*>(values), static_cast<int>(tupleSize), static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray35(QOpenGLShaderProgram* self, const char* name, const QVector2D* values, int stride) {
    self->setAttributeArray(name, values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray36(QOpenGLShaderProgram* self, const char* name, const QVector3D* values, int stride) {
    self->setAttributeArray(name, values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray37(QOpenGLShaderProgram* self, const char* name, const QVector4D* values, int stride) {
    self->setAttributeArray(name, values, static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeArray53(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, const void* values, int tupleSize, int stride) {
    self->setAttributeArray(name, static_cast<GLenum>(typeVal), values, static_cast<int>(tupleSize), static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeBuffer5(QOpenGLShaderProgram* self, int location, uint32_t typeVal, int offset, int tupleSize, int stride) {
    self->setAttributeBuffer(static_cast<int>(location), static_cast<GLenum>(typeVal), static_cast<int>(offset), static_cast<int>(tupleSize), static_cast<int>(stride));
}

void QOpenGLShaderProgram_SetAttributeBuffer52(QOpenGLShaderProgram* self, const char* name, uint32_t typeVal, int offset, int tupleSize, int stride) {
    self->setAttributeBuffer(name, static_cast<GLenum>(typeVal), static_cast<int>(offset), static_cast<int>(tupleSize), static_cast<int>(stride));
}

bool QOpenGLShaderProgram_HasOpenGLShaderPrograms1(QOpenGLContext* context) {
    return QOpenGLShaderProgram::hasOpenGLShaderPrograms(context);
}

// Base class handler implementation
int QOpenGLShaderProgram_QBaseMetacall(QOpenGLShaderProgram* self, int param1, int param2, void** param3) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Metacall_IsBase(true);
        return vqopenglshaderprogram->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLShaderProgram::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnMetacall(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Metacall_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool QOpenGLShaderProgram_QBaseLink(QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Link_IsBase(true);
        return vqopenglshaderprogram->link();
    } else {
        return self->QOpenGLShaderProgram::link();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnLink(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Link_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Link_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShaderProgram_Event(QOpenGLShaderProgram* self, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->event(event);
    } else {
        return self->QOpenGLShaderProgram::event(event);
    }
}

// Base class handler implementation
bool QOpenGLShaderProgram_QBaseEvent(QOpenGLShaderProgram* self, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Event_IsBase(true);
        return vqopenglshaderprogram->event(event);
    } else {
        return self->QOpenGLShaderProgram::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnEvent(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Event_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShaderProgram_EventFilter(QOpenGLShaderProgram* self, QObject* watched, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->eventFilter(watched, event);
    } else {
        return self->QOpenGLShaderProgram::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLShaderProgram_QBaseEventFilter(QOpenGLShaderProgram* self, QObject* watched, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_EventFilter_IsBase(true);
        return vqopenglshaderprogram->eventFilter(watched, event);
    } else {
        return self->QOpenGLShaderProgram::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnEventFilter(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShaderProgram_TimerEvent(QOpenGLShaderProgram* self, QTimerEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->timerEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShaderProgram_QBaseTimerEvent(QOpenGLShaderProgram* self, QTimerEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_TimerEvent_IsBase(true);
        vqopenglshaderprogram->timerEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnTimerEvent(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShaderProgram_ChildEvent(QOpenGLShaderProgram* self, QChildEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->childEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShaderProgram_QBaseChildEvent(QOpenGLShaderProgram* self, QChildEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_ChildEvent_IsBase(true);
        vqopenglshaderprogram->childEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnChildEvent(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShaderProgram_CustomEvent(QOpenGLShaderProgram* self, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->customEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLShaderProgram_QBaseCustomEvent(QOpenGLShaderProgram* self, QEvent* event) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_CustomEvent_IsBase(true);
        vqopenglshaderprogram->customEvent(event);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnCustomEvent(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShaderProgram_ConnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLShaderProgram_QBaseConnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_ConnectNotify_IsBase(true);
        vqopenglshaderprogram->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnConnectNotify(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLShaderProgram_DisconnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLShaderProgram_QBaseDisconnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_DisconnectNotify_IsBase(true);
        vqopenglshaderprogram->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLShaderProgram*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnDisconnectNotify(QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = dynamic_cast<VirtualQOpenGLShaderProgram*>(self);
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLShaderProgram_Sender(const QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->sender();
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLShaderProgram_QBaseSender(const QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Sender_IsBase(true);
        return vqopenglshaderprogram->sender();
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnSender(const QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Sender_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLShaderProgram_SenderSignalIndex(const QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLShaderProgram_QBaseSenderSignalIndex(const QOpenGLShaderProgram* self) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_SenderSignalIndex_IsBase(true);
        return vqopenglshaderprogram->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnSenderSignalIndex(const QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLShaderProgram_Receivers(const QOpenGLShaderProgram* self, const char* signal) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->receivers(signal);
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLShaderProgram_QBaseReceivers(const QOpenGLShaderProgram* self, const char* signal) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Receivers_IsBase(true);
        return vqopenglshaderprogram->receivers(signal);
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnReceivers(const QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_Receivers_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLShaderProgram_IsSignalConnected(const QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        return vqopenglshaderprogram->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLShaderProgram_QBaseIsSignalConnected(const QOpenGLShaderProgram* self, const QMetaMethod* signal) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_IsSignalConnected_IsBase(true);
        return vqopenglshaderprogram->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLShaderProgram*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLShaderProgram_OnIsSignalConnected(const QOpenGLShaderProgram* self, intptr_t slot) {
    auto* vqopenglshaderprogram = const_cast<VirtualQOpenGLShaderProgram*>(dynamic_cast<const VirtualQOpenGLShaderProgram*>(self));
    if (vqopenglshaderprogram && vqopenglshaderprogram->isVirtualQOpenGLShaderProgram) {
        vqopenglshaderprogram->setQOpenGLShaderProgram_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLShaderProgram::QOpenGLShaderProgram_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLShaderProgram_Delete(QOpenGLShaderProgram* self) {
    delete self;
}
