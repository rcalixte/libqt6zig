#pragma once
#ifndef OPENGL_LIBQOPENGLSHADERPROGRAM_HXX
#define OPENGL_LIBQOPENGLSHADERPROGRAM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QOpenGLShader
class VirtualQOpenGLShader final : public QOpenGLShader {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLShader_MetaObject_Callback = QMetaObject* (*)(const QOpenGLShader*);
    using QOpenGLShader_Metacast_Callback = void* (*)(QOpenGLShader*, const char*);
    using QOpenGLShader_Metacall_Callback = int (*)(QOpenGLShader*, int, int, void**);
    using QOpenGLShader_Event_Callback = bool (*)(QOpenGLShader*, QEvent*);
    using QOpenGLShader_EventFilter_Callback = bool (*)(QOpenGLShader*, QObject*, QEvent*);
    using QOpenGLShader_TimerEvent_Callback = void (*)(QOpenGLShader*, QTimerEvent*);
    using QOpenGLShader_ChildEvent_Callback = void (*)(QOpenGLShader*, QChildEvent*);
    using QOpenGLShader_CustomEvent_Callback = void (*)(QOpenGLShader*, QEvent*);
    using QOpenGLShader_ConnectNotify_Callback = void (*)(QOpenGLShader*, QMetaMethod*);
    using QOpenGLShader_DisconnectNotify_Callback = void (*)(QOpenGLShader*, QMetaMethod*);
    using QOpenGLShader::isSignalConnected;
    using QOpenGLShader::receivers;
    using QOpenGLShader::sender;
    using QOpenGLShader::senderSignalIndex;

    // Instance callback storage
    QOpenGLShader_MetaObject_Callback qopenglshader_metaobject_callback = nullptr;
    QOpenGLShader_Metacast_Callback qopenglshader_metacast_callback = nullptr;
    QOpenGLShader_Metacall_Callback qopenglshader_metacall_callback = nullptr;
    QOpenGLShader_Event_Callback qopenglshader_event_callback = nullptr;
    QOpenGLShader_EventFilter_Callback qopenglshader_eventfilter_callback = nullptr;
    QOpenGLShader_TimerEvent_Callback qopenglshader_timerevent_callback = nullptr;
    QOpenGLShader_ChildEvent_Callback qopenglshader_childevent_callback = nullptr;
    QOpenGLShader_CustomEvent_Callback qopenglshader_customevent_callback = nullptr;
    QOpenGLShader_ConnectNotify_Callback qopenglshader_connectnotify_callback = nullptr;
    QOpenGLShader_DisconnectNotify_Callback qopenglshader_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLShader {
        using QOpenGLShader::childEvent;
        using QOpenGLShader::connectNotify;
        using QOpenGLShader::customEvent;
        using QOpenGLShader::disconnectNotify;
        using QOpenGLShader::timerEvent;
    };

    VirtualQOpenGLShader(QOpenGLShader::ShaderType typeVal) : QOpenGLShader(typeVal) {};
    VirtualQOpenGLShader(QOpenGLShader::ShaderType typeVal, QObject* parent) : QOpenGLShader(typeVal, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglshader_metaobject_callback) {
            QMetaObject* callback_ret = qopenglshader_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLShader::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglshader_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglshader_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLShader::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglshader_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglshader_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLShader::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglshader_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopenglshader_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLShader::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglshader_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglshader_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLShader::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglshader_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglshader_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLShader::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglshader_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglshader_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLShader::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglshader_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglshader_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLShader::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglshader_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglshader_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLShader::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglshader_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglshader_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLShader::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLShader_SuperTimerEvent(QOpenGLShader* self, QTimerEvent* event);
    friend void QOpenGLShader_SuperChildEvent(QOpenGLShader* self, QChildEvent* event);
    friend void QOpenGLShader_SuperCustomEvent(QOpenGLShader* self, QEvent* event);
    friend void QOpenGLShader_SuperConnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
    friend void QOpenGLShader_SuperDisconnectNotify(QOpenGLShader* self, const QMetaMethod* signal);
};

// This class is a subclass of QOpenGLShaderProgram
class VirtualQOpenGLShaderProgram final : public QOpenGLShaderProgram {
  public:
    // Virtual class public types (including callbacks and access types)
    using QOpenGLShaderProgram_MetaObject_Callback = QMetaObject* (*)(const QOpenGLShaderProgram*);
    using QOpenGLShaderProgram_Metacast_Callback = void* (*)(QOpenGLShaderProgram*, const char*);
    using QOpenGLShaderProgram_Metacall_Callback = int (*)(QOpenGLShaderProgram*, int, int, void**);
    using QOpenGLShaderProgram_Link_Callback = bool (*)(QOpenGLShaderProgram*);
    using QOpenGLShaderProgram_Event_Callback = bool (*)(QOpenGLShaderProgram*, QEvent*);
    using QOpenGLShaderProgram_EventFilter_Callback = bool (*)(QOpenGLShaderProgram*, QObject*, QEvent*);
    using QOpenGLShaderProgram_TimerEvent_Callback = void (*)(QOpenGLShaderProgram*, QTimerEvent*);
    using QOpenGLShaderProgram_ChildEvent_Callback = void (*)(QOpenGLShaderProgram*, QChildEvent*);
    using QOpenGLShaderProgram_CustomEvent_Callback = void (*)(QOpenGLShaderProgram*, QEvent*);
    using QOpenGLShaderProgram_ConnectNotify_Callback = void (*)(QOpenGLShaderProgram*, QMetaMethod*);
    using QOpenGLShaderProgram_DisconnectNotify_Callback = void (*)(QOpenGLShaderProgram*, QMetaMethod*);
    using QOpenGLShaderProgram::isSignalConnected;
    using QOpenGLShaderProgram::receivers;
    using QOpenGLShaderProgram::sender;
    using QOpenGLShaderProgram::senderSignalIndex;

    // Instance callback storage
    QOpenGLShaderProgram_MetaObject_Callback qopenglshaderprogram_metaobject_callback = nullptr;
    QOpenGLShaderProgram_Metacast_Callback qopenglshaderprogram_metacast_callback = nullptr;
    QOpenGLShaderProgram_Metacall_Callback qopenglshaderprogram_metacall_callback = nullptr;
    QOpenGLShaderProgram_Link_Callback qopenglshaderprogram_link_callback = nullptr;
    QOpenGLShaderProgram_Event_Callback qopenglshaderprogram_event_callback = nullptr;
    QOpenGLShaderProgram_EventFilter_Callback qopenglshaderprogram_eventfilter_callback = nullptr;
    QOpenGLShaderProgram_TimerEvent_Callback qopenglshaderprogram_timerevent_callback = nullptr;
    QOpenGLShaderProgram_ChildEvent_Callback qopenglshaderprogram_childevent_callback = nullptr;
    QOpenGLShaderProgram_CustomEvent_Callback qopenglshaderprogram_customevent_callback = nullptr;
    QOpenGLShaderProgram_ConnectNotify_Callback qopenglshaderprogram_connectnotify_callback = nullptr;
    QOpenGLShaderProgram_DisconnectNotify_Callback qopenglshaderprogram_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QOpenGLShaderProgram {
        using QOpenGLShaderProgram::childEvent;
        using QOpenGLShaderProgram::connectNotify;
        using QOpenGLShaderProgram::customEvent;
        using QOpenGLShaderProgram::disconnectNotify;
        using QOpenGLShaderProgram::timerEvent;
    };

    VirtualQOpenGLShaderProgram() : QOpenGLShaderProgram() {};
    VirtualQOpenGLShaderProgram(QObject* parent) : QOpenGLShaderProgram(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qopenglshaderprogram_metaobject_callback) {
            QMetaObject* callback_ret = qopenglshaderprogram_metaobject_callback(this);
            return callback_ret;
        }
        return QOpenGLShaderProgram::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qopenglshaderprogram_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qopenglshaderprogram_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLShaderProgram::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qopenglshaderprogram_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qopenglshaderprogram_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QOpenGLShaderProgram::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool link() override {
        if (qopenglshaderprogram_link_callback) {
            bool callback_ret = qopenglshaderprogram_link_callback(this);
            return callback_ret;
        }
        return QOpenGLShaderProgram::link();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qopenglshaderprogram_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qopenglshaderprogram_event_callback(this, cbval1);
            return callback_ret;
        }
        return QOpenGLShaderProgram::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qopenglshaderprogram_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qopenglshaderprogram_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QOpenGLShaderProgram::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qopenglshaderprogram_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qopenglshaderprogram_timerevent_callback(this, cbval1);
            return;
        }
        QOpenGLShaderProgram::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qopenglshaderprogram_childevent_callback) {
            QChildEvent* cbval1 = event;
            qopenglshaderprogram_childevent_callback(this, cbval1);
            return;
        }
        QOpenGLShaderProgram::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qopenglshaderprogram_customevent_callback) {
            QEvent* cbval1 = event;
            qopenglshaderprogram_customevent_callback(this, cbval1);
            return;
        }
        QOpenGLShaderProgram::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qopenglshaderprogram_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglshaderprogram_connectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLShaderProgram::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qopenglshaderprogram_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qopenglshaderprogram_disconnectnotify_callback(this, cbval1);
            return;
        }
        QOpenGLShaderProgram::disconnectNotify(signal);
    }

    // Friend functions
    friend void QOpenGLShaderProgram_SuperTimerEvent(QOpenGLShaderProgram* self, QTimerEvent* event);
    friend void QOpenGLShaderProgram_SuperChildEvent(QOpenGLShaderProgram* self, QChildEvent* event);
    friend void QOpenGLShaderProgram_SuperCustomEvent(QOpenGLShaderProgram* self, QEvent* event);
    friend void QOpenGLShaderProgram_SuperConnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
    friend void QOpenGLShaderProgram_SuperDisconnectNotify(QOpenGLShaderProgram* self, const QMetaMethod* signal);
};

#endif
