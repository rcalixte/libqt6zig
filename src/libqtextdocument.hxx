#pragma once
#ifndef LIBQTEXTDOCUMENT_HXX
#define LIBQTEXTDOCUMENT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextDocument
class VirtualQTextDocument final : public QTextDocument {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextDocument_MetaObject_Callback = QMetaObject* (*)(const QTextDocument*);
    using QTextDocument_Metacast_Callback = void* (*)(QTextDocument*, const char*);
    using QTextDocument_Metacall_Callback = int (*)(QTextDocument*, int, int, void**);
    using QTextDocument_Clear_Callback = void (*)(QTextDocument*);
    using QTextDocument_CreateObject_Callback = QTextObject* (*)(QTextDocument*, QTextFormat*);
    using QTextDocument_LoadResource_Callback = QVariant* (*)(QTextDocument*, int, QUrl*);
    using QTextDocument_Event_Callback = bool (*)(QTextDocument*, QEvent*);
    using QTextDocument_EventFilter_Callback = bool (*)(QTextDocument*, QObject*, QEvent*);
    using QTextDocument_TimerEvent_Callback = void (*)(QTextDocument*, QTimerEvent*);
    using QTextDocument_ChildEvent_Callback = void (*)(QTextDocument*, QChildEvent*);
    using QTextDocument_CustomEvent_Callback = void (*)(QTextDocument*, QEvent*);
    using QTextDocument_ConnectNotify_Callback = void (*)(QTextDocument*, QMetaMethod*);
    using QTextDocument_DisconnectNotify_Callback = void (*)(QTextDocument*, QMetaMethod*);
    using QTextDocument::isSignalConnected;
    using QTextDocument::receivers;
    using QTextDocument::sender;
    using QTextDocument::senderSignalIndex;

    // Instance callback storage
    QTextDocument_MetaObject_Callback qtextdocument_metaobject_callback = nullptr;
    QTextDocument_Metacast_Callback qtextdocument_metacast_callback = nullptr;
    QTextDocument_Metacall_Callback qtextdocument_metacall_callback = nullptr;
    QTextDocument_Clear_Callback qtextdocument_clear_callback = nullptr;
    QTextDocument_CreateObject_Callback qtextdocument_createobject_callback = nullptr;
    QTextDocument_LoadResource_Callback qtextdocument_loadresource_callback = nullptr;
    QTextDocument_Event_Callback qtextdocument_event_callback = nullptr;
    QTextDocument_EventFilter_Callback qtextdocument_eventfilter_callback = nullptr;
    QTextDocument_TimerEvent_Callback qtextdocument_timerevent_callback = nullptr;
    QTextDocument_ChildEvent_Callback qtextdocument_childevent_callback = nullptr;
    QTextDocument_CustomEvent_Callback qtextdocument_customevent_callback = nullptr;
    QTextDocument_ConnectNotify_Callback qtextdocument_connectnotify_callback = nullptr;
    QTextDocument_DisconnectNotify_Callback qtextdocument_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTextDocument {
        using QTextDocument::childEvent;
        using QTextDocument::connectNotify;
        using QTextDocument::createObject;
        using QTextDocument::customEvent;
        using QTextDocument::disconnectNotify;
        using QTextDocument::loadResource;
        using QTextDocument::timerEvent;
    };

    VirtualQTextDocument() : QTextDocument() {};
    VirtualQTextDocument(const QString& text) : QTextDocument(text) {};
    VirtualQTextDocument(QObject* parent) : QTextDocument(parent) {};
    VirtualQTextDocument(const QString& text, QObject* parent) : QTextDocument(text, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextdocument_metaobject_callback) {
            QMetaObject* callback_ret = qtextdocument_metaobject_callback(this);
            return callback_ret;
        }
        return QTextDocument::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextdocument_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtextdocument_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextDocument::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextdocument_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtextdocument_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextDocument::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qtextdocument_clear_callback) {
            qtextdocument_clear_callback(this);
            return;
        }
        QTextDocument::clear();
    }

    // Virtual method for C ABI access and custom callback
    virtual QTextObject* createObject(const QTextFormat& f) override {
        if (qtextdocument_createobject_callback) {
            const QTextFormat& f_ret = f;
            // Cast returned reference into pointer
            QTextFormat* cbval1 = const_cast<QTextFormat*>(&f_ret);
            QTextObject* callback_ret = qtextdocument_createobject_callback(this, cbval1);
            return callback_ret;
        }
        return QTextDocument::createObject(f);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextdocument_loadresource_callback) {
            int cbval1 = typeVal;
            const QUrl& name_ret = name;
            // Cast returned reference into pointer
            QUrl* cbval2 = const_cast<QUrl*>(&name_ret);
            QVariant* callback_ret = qtextdocument_loadresource_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTextDocument::loadResource(typeVal, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextdocument_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtextdocument_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextDocument::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextdocument_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtextdocument_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextDocument::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextdocument_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtextdocument_timerevent_callback(this, cbval1);
            return;
        }
        QTextDocument::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextdocument_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtextdocument_childevent_callback(this, cbval1);
            return;
        }
        QTextDocument::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextdocument_customevent_callback) {
            QEvent* cbval1 = event;
            qtextdocument_customevent_callback(this, cbval1);
            return;
        }
        QTextDocument::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextdocument_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextdocument_connectnotify_callback(this, cbval1);
            return;
        }
        QTextDocument::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextdocument_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextdocument_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextDocument::disconnectNotify(signal);
    }

    // Friend functions
    friend QTextObject* QTextDocument_SuperCreateObject(QTextDocument* self, const QTextFormat* f);
    friend QVariant* QTextDocument_SuperLoadResource(QTextDocument* self, int typeVal, const QUrl* name);
    friend void QTextDocument_SuperTimerEvent(QTextDocument* self, QTimerEvent* event);
    friend void QTextDocument_SuperChildEvent(QTextDocument* self, QChildEvent* event);
    friend void QTextDocument_SuperCustomEvent(QTextDocument* self, QEvent* event);
    friend void QTextDocument_SuperConnectNotify(QTextDocument* self, const QMetaMethod* signal);
    friend void QTextDocument_SuperDisconnectNotify(QTextDocument* self, const QMetaMethod* signal);
};

#endif
