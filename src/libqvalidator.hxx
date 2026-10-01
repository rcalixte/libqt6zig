#pragma once
#ifndef LIBQVALIDATOR_HXX
#define LIBQVALIDATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QValidator
class VirtualQValidator : public QValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QValidator_MetaObject_Callback = QMetaObject* (*)(const QValidator*);
    using QValidator_Metacast_Callback = void* (*)(QValidator*, const char*);
    using QValidator_Metacall_Callback = int (*)(QValidator*, int, int, void**);
    using QValidator_Validate_Callback = int (*)(const QValidator*, const char*, int*);
    using QValidator_Fixup_Callback = void (*)(const QValidator*, const char*);
    using QValidator_Event_Callback = bool (*)(QValidator*, QEvent*);
    using QValidator_EventFilter_Callback = bool (*)(QValidator*, QObject*, QEvent*);
    using QValidator_TimerEvent_Callback = void (*)(QValidator*, QTimerEvent*);
    using QValidator_ChildEvent_Callback = void (*)(QValidator*, QChildEvent*);
    using QValidator_CustomEvent_Callback = void (*)(QValidator*, QEvent*);
    using QValidator_ConnectNotify_Callback = void (*)(QValidator*, QMetaMethod*);
    using QValidator_DisconnectNotify_Callback = void (*)(QValidator*, QMetaMethod*);
    using QValidator::isSignalConnected;
    using QValidator::receivers;
    using QValidator::sender;
    using QValidator::senderSignalIndex;

    // Instance callback storage
    QValidator_MetaObject_Callback qvalidator_metaobject_callback = nullptr;
    QValidator_Metacast_Callback qvalidator_metacast_callback = nullptr;
    QValidator_Metacall_Callback qvalidator_metacall_callback = nullptr;
    QValidator_Validate_Callback qvalidator_validate_callback = nullptr;
    QValidator_Fixup_Callback qvalidator_fixup_callback = nullptr;
    QValidator_Event_Callback qvalidator_event_callback = nullptr;
    QValidator_EventFilter_Callback qvalidator_eventfilter_callback = nullptr;
    QValidator_TimerEvent_Callback qvalidator_timerevent_callback = nullptr;
    QValidator_ChildEvent_Callback qvalidator_childevent_callback = nullptr;
    QValidator_CustomEvent_Callback qvalidator_customevent_callback = nullptr;
    QValidator_ConnectNotify_Callback qvalidator_connectnotify_callback = nullptr;
    QValidator_DisconnectNotify_Callback qvalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QValidator {
        using QValidator::childEvent;
        using QValidator::connectNotify;
        using QValidator::customEvent;
        using QValidator::disconnectNotify;
        using QValidator::timerEvent;
    };

    VirtualQValidator() : QValidator() {};
    VirtualQValidator(QObject* parent) : QValidator(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvalidator_metaobject_callback) {
            QMetaObject* callback_ret = qvalidator_metaobject_callback(this);
            return callback_ret;
        }
        return QValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        if (qvalidator_validate_callback) {
            auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            int* cbval2 = &param2;
            int callback_ret = qvalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(param1_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QValidator::validate called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& param1) const override {
        if (qvalidator_fixup_callback) {
            auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            qvalidator_fixup_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        QValidator::fixup(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvalidator_timerevent_callback(this, cbval1);
            return;
        }
        QValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvalidator_childevent_callback(this, cbval1);
            return;
        }
        QValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvalidator_customevent_callback) {
            QEvent* cbval1 = event;
            qvalidator_customevent_callback(this, cbval1);
            return;
        }
        QValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalidator_connectnotify_callback(this, cbval1);
            return;
        }
        QValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QValidator_SuperTimerEvent(QValidator* self, QTimerEvent* event);
    friend void QValidator_SuperChildEvent(QValidator* self, QChildEvent* event);
    friend void QValidator_SuperCustomEvent(QValidator* self, QEvent* event);
    friend void QValidator_SuperConnectNotify(QValidator* self, const QMetaMethod* signal);
    friend void QValidator_SuperDisconnectNotify(QValidator* self, const QMetaMethod* signal);
};

// This class is a subclass of QIntValidator
class VirtualQIntValidator final : public QIntValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIntValidator_MetaObject_Callback = QMetaObject* (*)(const QIntValidator*);
    using QIntValidator_Metacast_Callback = void* (*)(QIntValidator*, const char*);
    using QIntValidator_Metacall_Callback = int (*)(QIntValidator*, int, int, void**);
    using QIntValidator_Validate_Callback = int (*)(const QIntValidator*, const char*, int*);
    using QIntValidator_Fixup_Callback = void (*)(const QIntValidator*, const char*);
    using QIntValidator_Event_Callback = bool (*)(QIntValidator*, QEvent*);
    using QIntValidator_EventFilter_Callback = bool (*)(QIntValidator*, QObject*, QEvent*);
    using QIntValidator_TimerEvent_Callback = void (*)(QIntValidator*, QTimerEvent*);
    using QIntValidator_ChildEvent_Callback = void (*)(QIntValidator*, QChildEvent*);
    using QIntValidator_CustomEvent_Callback = void (*)(QIntValidator*, QEvent*);
    using QIntValidator_ConnectNotify_Callback = void (*)(QIntValidator*, QMetaMethod*);
    using QIntValidator_DisconnectNotify_Callback = void (*)(QIntValidator*, QMetaMethod*);
    using QIntValidator::isSignalConnected;
    using QIntValidator::receivers;
    using QIntValidator::sender;
    using QIntValidator::senderSignalIndex;

    // Instance callback storage
    QIntValidator_MetaObject_Callback qintvalidator_metaobject_callback = nullptr;
    QIntValidator_Metacast_Callback qintvalidator_metacast_callback = nullptr;
    QIntValidator_Metacall_Callback qintvalidator_metacall_callback = nullptr;
    QIntValidator_Validate_Callback qintvalidator_validate_callback = nullptr;
    QIntValidator_Fixup_Callback qintvalidator_fixup_callback = nullptr;
    QIntValidator_Event_Callback qintvalidator_event_callback = nullptr;
    QIntValidator_EventFilter_Callback qintvalidator_eventfilter_callback = nullptr;
    QIntValidator_TimerEvent_Callback qintvalidator_timerevent_callback = nullptr;
    QIntValidator_ChildEvent_Callback qintvalidator_childevent_callback = nullptr;
    QIntValidator_CustomEvent_Callback qintvalidator_customevent_callback = nullptr;
    QIntValidator_ConnectNotify_Callback qintvalidator_connectnotify_callback = nullptr;
    QIntValidator_DisconnectNotify_Callback qintvalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QIntValidator {
        using QIntValidator::childEvent;
        using QIntValidator::connectNotify;
        using QIntValidator::customEvent;
        using QIntValidator::disconnectNotify;
        using QIntValidator::timerEvent;
    };

    VirtualQIntValidator() : QIntValidator() {};
    VirtualQIntValidator(int bottom, int top) : QIntValidator(bottom, top) {};
    VirtualQIntValidator(QObject* parent) : QIntValidator(parent) {};
    VirtualQIntValidator(int bottom, int top, QObject* parent) : QIntValidator(bottom, top, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qintvalidator_metaobject_callback) {
            QMetaObject* callback_ret = qintvalidator_metaobject_callback(this);
            return callback_ret;
        }
        return QIntValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qintvalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qintvalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QIntValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qintvalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qintvalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIntValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        if (qintvalidator_validate_callback) {
            auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            int* cbval2 = &param2;
            int callback_ret = qintvalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(param1_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QIntValidator::validate(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qintvalidator_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qintvalidator_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QIntValidator::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qintvalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qintvalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QIntValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qintvalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qintvalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIntValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qintvalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qintvalidator_timerevent_callback(this, cbval1);
            return;
        }
        QIntValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qintvalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qintvalidator_childevent_callback(this, cbval1);
            return;
        }
        QIntValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qintvalidator_customevent_callback) {
            QEvent* cbval1 = event;
            qintvalidator_customevent_callback(this, cbval1);
            return;
        }
        QIntValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qintvalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qintvalidator_connectnotify_callback(this, cbval1);
            return;
        }
        QIntValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qintvalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qintvalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QIntValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QIntValidator_SuperTimerEvent(QIntValidator* self, QTimerEvent* event);
    friend void QIntValidator_SuperChildEvent(QIntValidator* self, QChildEvent* event);
    friend void QIntValidator_SuperCustomEvent(QIntValidator* self, QEvent* event);
    friend void QIntValidator_SuperConnectNotify(QIntValidator* self, const QMetaMethod* signal);
    friend void QIntValidator_SuperDisconnectNotify(QIntValidator* self, const QMetaMethod* signal);
};

// This class is a subclass of QDoubleValidator
class VirtualQDoubleValidator final : public QDoubleValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDoubleValidator_MetaObject_Callback = QMetaObject* (*)(const QDoubleValidator*);
    using QDoubleValidator_Metacast_Callback = void* (*)(QDoubleValidator*, const char*);
    using QDoubleValidator_Metacall_Callback = int (*)(QDoubleValidator*, int, int, void**);
    using QDoubleValidator_Validate_Callback = int (*)(const QDoubleValidator*, const char*, int*);
    using QDoubleValidator_Fixup_Callback = void (*)(const QDoubleValidator*, const char*);
    using QDoubleValidator_Event_Callback = bool (*)(QDoubleValidator*, QEvent*);
    using QDoubleValidator_EventFilter_Callback = bool (*)(QDoubleValidator*, QObject*, QEvent*);
    using QDoubleValidator_TimerEvent_Callback = void (*)(QDoubleValidator*, QTimerEvent*);
    using QDoubleValidator_ChildEvent_Callback = void (*)(QDoubleValidator*, QChildEvent*);
    using QDoubleValidator_CustomEvent_Callback = void (*)(QDoubleValidator*, QEvent*);
    using QDoubleValidator_ConnectNotify_Callback = void (*)(QDoubleValidator*, QMetaMethod*);
    using QDoubleValidator_DisconnectNotify_Callback = void (*)(QDoubleValidator*, QMetaMethod*);
    using QDoubleValidator::isSignalConnected;
    using QDoubleValidator::receivers;
    using QDoubleValidator::sender;
    using QDoubleValidator::senderSignalIndex;

    // Instance callback storage
    QDoubleValidator_MetaObject_Callback qdoublevalidator_metaobject_callback = nullptr;
    QDoubleValidator_Metacast_Callback qdoublevalidator_metacast_callback = nullptr;
    QDoubleValidator_Metacall_Callback qdoublevalidator_metacall_callback = nullptr;
    QDoubleValidator_Validate_Callback qdoublevalidator_validate_callback = nullptr;
    QDoubleValidator_Fixup_Callback qdoublevalidator_fixup_callback = nullptr;
    QDoubleValidator_Event_Callback qdoublevalidator_event_callback = nullptr;
    QDoubleValidator_EventFilter_Callback qdoublevalidator_eventfilter_callback = nullptr;
    QDoubleValidator_TimerEvent_Callback qdoublevalidator_timerevent_callback = nullptr;
    QDoubleValidator_ChildEvent_Callback qdoublevalidator_childevent_callback = nullptr;
    QDoubleValidator_CustomEvent_Callback qdoublevalidator_customevent_callback = nullptr;
    QDoubleValidator_ConnectNotify_Callback qdoublevalidator_connectnotify_callback = nullptr;
    QDoubleValidator_DisconnectNotify_Callback qdoublevalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDoubleValidator {
        using QDoubleValidator::childEvent;
        using QDoubleValidator::connectNotify;
        using QDoubleValidator::customEvent;
        using QDoubleValidator::disconnectNotify;
        using QDoubleValidator::timerEvent;
    };

    VirtualQDoubleValidator() : QDoubleValidator() {};
    VirtualQDoubleValidator(double bottom, double top, int decimals) : QDoubleValidator(bottom, top, decimals) {};
    VirtualQDoubleValidator(QObject* parent) : QDoubleValidator(parent) {};
    VirtualQDoubleValidator(double bottom, double top, int decimals, QObject* parent) : QDoubleValidator(bottom, top, decimals, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdoublevalidator_metaobject_callback) {
            QMetaObject* callback_ret = qdoublevalidator_metaobject_callback(this);
            return callback_ret;
        }
        return QDoubleValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdoublevalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdoublevalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdoublevalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdoublevalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDoubleValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& param1, int& param2) const override {
        if (qdoublevalidator_validate_callback) {
            auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            int* cbval2 = &param2;
            int callback_ret = qdoublevalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(param1_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QDoubleValidator::validate(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdoublevalidator_fixup_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            qdoublevalidator_fixup_callback(this, cbval1);
            libqt_free(input_str);
            return;
        }
        QDoubleValidator::fixup(input);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdoublevalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdoublevalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDoubleValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdoublevalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdoublevalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDoubleValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdoublevalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdoublevalidator_timerevent_callback(this, cbval1);
            return;
        }
        QDoubleValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdoublevalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdoublevalidator_childevent_callback(this, cbval1);
            return;
        }
        QDoubleValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdoublevalidator_customevent_callback) {
            QEvent* cbval1 = event;
            qdoublevalidator_customevent_callback(this, cbval1);
            return;
        }
        QDoubleValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdoublevalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdoublevalidator_connectnotify_callback(this, cbval1);
            return;
        }
        QDoubleValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdoublevalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdoublevalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDoubleValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDoubleValidator_SuperTimerEvent(QDoubleValidator* self, QTimerEvent* event);
    friend void QDoubleValidator_SuperChildEvent(QDoubleValidator* self, QChildEvent* event);
    friend void QDoubleValidator_SuperCustomEvent(QDoubleValidator* self, QEvent* event);
    friend void QDoubleValidator_SuperConnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
    friend void QDoubleValidator_SuperDisconnectNotify(QDoubleValidator* self, const QMetaMethod* signal);
};

// This class is a subclass of QRegularExpressionValidator
class VirtualQRegularExpressionValidator final : public QRegularExpressionValidator {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRegularExpressionValidator_MetaObject_Callback = QMetaObject* (*)(const QRegularExpressionValidator*);
    using QRegularExpressionValidator_Metacast_Callback = void* (*)(QRegularExpressionValidator*, const char*);
    using QRegularExpressionValidator_Metacall_Callback = int (*)(QRegularExpressionValidator*, int, int, void**);
    using QRegularExpressionValidator_Validate_Callback = int (*)(const QRegularExpressionValidator*, const char*, int*);
    using QRegularExpressionValidator_Fixup_Callback = void (*)(const QRegularExpressionValidator*, const char*);
    using QRegularExpressionValidator_Event_Callback = bool (*)(QRegularExpressionValidator*, QEvent*);
    using QRegularExpressionValidator_EventFilter_Callback = bool (*)(QRegularExpressionValidator*, QObject*, QEvent*);
    using QRegularExpressionValidator_TimerEvent_Callback = void (*)(QRegularExpressionValidator*, QTimerEvent*);
    using QRegularExpressionValidator_ChildEvent_Callback = void (*)(QRegularExpressionValidator*, QChildEvent*);
    using QRegularExpressionValidator_CustomEvent_Callback = void (*)(QRegularExpressionValidator*, QEvent*);
    using QRegularExpressionValidator_ConnectNotify_Callback = void (*)(QRegularExpressionValidator*, QMetaMethod*);
    using QRegularExpressionValidator_DisconnectNotify_Callback = void (*)(QRegularExpressionValidator*, QMetaMethod*);
    using QRegularExpressionValidator::isSignalConnected;
    using QRegularExpressionValidator::receivers;
    using QRegularExpressionValidator::sender;
    using QRegularExpressionValidator::senderSignalIndex;

    // Instance callback storage
    QRegularExpressionValidator_MetaObject_Callback qregularexpressionvalidator_metaobject_callback = nullptr;
    QRegularExpressionValidator_Metacast_Callback qregularexpressionvalidator_metacast_callback = nullptr;
    QRegularExpressionValidator_Metacall_Callback qregularexpressionvalidator_metacall_callback = nullptr;
    QRegularExpressionValidator_Validate_Callback qregularexpressionvalidator_validate_callback = nullptr;
    QRegularExpressionValidator_Fixup_Callback qregularexpressionvalidator_fixup_callback = nullptr;
    QRegularExpressionValidator_Event_Callback qregularexpressionvalidator_event_callback = nullptr;
    QRegularExpressionValidator_EventFilter_Callback qregularexpressionvalidator_eventfilter_callback = nullptr;
    QRegularExpressionValidator_TimerEvent_Callback qregularexpressionvalidator_timerevent_callback = nullptr;
    QRegularExpressionValidator_ChildEvent_Callback qregularexpressionvalidator_childevent_callback = nullptr;
    QRegularExpressionValidator_CustomEvent_Callback qregularexpressionvalidator_customevent_callback = nullptr;
    QRegularExpressionValidator_ConnectNotify_Callback qregularexpressionvalidator_connectnotify_callback = nullptr;
    QRegularExpressionValidator_DisconnectNotify_Callback qregularexpressionvalidator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QRegularExpressionValidator {
        using QRegularExpressionValidator::childEvent;
        using QRegularExpressionValidator::connectNotify;
        using QRegularExpressionValidator::customEvent;
        using QRegularExpressionValidator::disconnectNotify;
        using QRegularExpressionValidator::timerEvent;
    };

    VirtualQRegularExpressionValidator() : QRegularExpressionValidator() {};
    VirtualQRegularExpressionValidator(const QRegularExpression& re) : QRegularExpressionValidator(re) {};
    VirtualQRegularExpressionValidator(QObject* parent) : QRegularExpressionValidator(parent) {};
    VirtualQRegularExpressionValidator(const QRegularExpression& re, QObject* parent) : QRegularExpressionValidator(re, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qregularexpressionvalidator_metaobject_callback) {
            QMetaObject* callback_ret = qregularexpressionvalidator_metaobject_callback(this);
            return callback_ret;
        }
        return QRegularExpressionValidator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qregularexpressionvalidator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qregularexpressionvalidator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QRegularExpressionValidator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qregularexpressionvalidator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qregularexpressionvalidator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRegularExpressionValidator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qregularexpressionvalidator_validate_callback) {
            auto input_ret = input;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray input_b = input_ret.toUtf8();
            auto input_str_len = input_b.length();
            const char* input_str = static_cast<const char*>(malloc(input_str_len + 1));
            memcpy((void*)input_str, input_b.data(), input_str_len);
            ((char*)input_str)[input_str_len] = '\0';
            const char* cbval1 = input_str;
            int* cbval2 = &pos;
            int callback_ret = qregularexpressionvalidator_validate_callback(this, cbval1, cbval2);
            libqt_free(input_str);
            return static_cast<QValidator::State>(callback_ret);
        }
        return QRegularExpressionValidator::validate(input, pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& param1) const override {
        if (qregularexpressionvalidator_fixup_callback) {
            auto param1_ret = param1;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray param1_b = param1_ret.toUtf8();
            auto param1_str_len = param1_b.length();
            const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
            memcpy((void*)param1_str, param1_b.data(), param1_str_len);
            ((char*)param1_str)[param1_str_len] = '\0';
            const char* cbval1 = param1_str;
            qregularexpressionvalidator_fixup_callback(this, cbval1);
            libqt_free(param1_str);
            return;
        }
        QRegularExpressionValidator::fixup(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qregularexpressionvalidator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qregularexpressionvalidator_event_callback(this, cbval1);
            return callback_ret;
        }
        return QRegularExpressionValidator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qregularexpressionvalidator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qregularexpressionvalidator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRegularExpressionValidator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qregularexpressionvalidator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qregularexpressionvalidator_timerevent_callback(this, cbval1);
            return;
        }
        QRegularExpressionValidator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qregularexpressionvalidator_childevent_callback) {
            QChildEvent* cbval1 = event;
            qregularexpressionvalidator_childevent_callback(this, cbval1);
            return;
        }
        QRegularExpressionValidator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qregularexpressionvalidator_customevent_callback) {
            QEvent* cbval1 = event;
            qregularexpressionvalidator_customevent_callback(this, cbval1);
            return;
        }
        QRegularExpressionValidator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qregularexpressionvalidator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qregularexpressionvalidator_connectnotify_callback(this, cbval1);
            return;
        }
        QRegularExpressionValidator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qregularexpressionvalidator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qregularexpressionvalidator_disconnectnotify_callback(this, cbval1);
            return;
        }
        QRegularExpressionValidator::disconnectNotify(signal);
    }

    // Friend functions
    friend void QRegularExpressionValidator_SuperTimerEvent(QRegularExpressionValidator* self, QTimerEvent* event);
    friend void QRegularExpressionValidator_SuperChildEvent(QRegularExpressionValidator* self, QChildEvent* event);
    friend void QRegularExpressionValidator_SuperCustomEvent(QRegularExpressionValidator* self, QEvent* event);
    friend void QRegularExpressionValidator_SuperConnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
    friend void QRegularExpressionValidator_SuperDisconnectNotify(QRegularExpressionValidator* self, const QMetaMethod* signal);
};

#endif
