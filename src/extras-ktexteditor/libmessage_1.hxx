#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBMESSAGE_HXX
#define EXTRAS_KTEXTEDITOR_LIBMESSAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::Message
class VirtualKTextEditorMessage final : public KTextEditor::Message {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__Message_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__Message*);
    using KTextEditor__Message_Metacast_Callback = void* (*)(KTextEditor__Message*, const char*);
    using KTextEditor__Message_Metacall_Callback = int (*)(KTextEditor__Message*, int, int, void**);
    using KTextEditor__Message_Event_Callback = bool (*)(KTextEditor__Message*, QEvent*);
    using KTextEditor__Message_EventFilter_Callback = bool (*)(KTextEditor__Message*, QObject*, QEvent*);
    using KTextEditor__Message_TimerEvent_Callback = void (*)(KTextEditor__Message*, QTimerEvent*);
    using KTextEditor__Message_ChildEvent_Callback = void (*)(KTextEditor__Message*, QChildEvent*);
    using KTextEditor__Message_CustomEvent_Callback = void (*)(KTextEditor__Message*, QEvent*);
    using KTextEditor__Message_ConnectNotify_Callback = void (*)(KTextEditor__Message*, QMetaMethod*);
    using KTextEditor__Message_DisconnectNotify_Callback = void (*)(KTextEditor__Message*, QMetaMethod*);
    using KTextEditor::Message::isSignalConnected;
    using KTextEditor::Message::receivers;
    using KTextEditor::Message::sender;
    using KTextEditor::Message::senderSignalIndex;

    // Instance callback storage
    KTextEditor__Message_MetaObject_Callback ktexteditor__message_metaobject_callback = nullptr;
    KTextEditor__Message_Metacast_Callback ktexteditor__message_metacast_callback = nullptr;
    KTextEditor__Message_Metacall_Callback ktexteditor__message_metacall_callback = nullptr;
    KTextEditor__Message_Event_Callback ktexteditor__message_event_callback = nullptr;
    KTextEditor__Message_EventFilter_Callback ktexteditor__message_eventfilter_callback = nullptr;
    KTextEditor__Message_TimerEvent_Callback ktexteditor__message_timerevent_callback = nullptr;
    KTextEditor__Message_ChildEvent_Callback ktexteditor__message_childevent_callback = nullptr;
    KTextEditor__Message_CustomEvent_Callback ktexteditor__message_customevent_callback = nullptr;
    KTextEditor__Message_ConnectNotify_Callback ktexteditor__message_connectnotify_callback = nullptr;
    KTextEditor__Message_DisconnectNotify_Callback ktexteditor__message_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KTextEditor::Message {
        using KTextEditor::Message::childEvent;
        using KTextEditor::Message::connectNotify;
        using KTextEditor::Message::customEvent;
        using KTextEditor::Message::disconnectNotify;
        using KTextEditor::Message::timerEvent;
    };

    VirtualKTextEditorMessage(const QString& richtext) : KTextEditor::Message(richtext) {};
    VirtualKTextEditorMessage(const QString& richtext, KTextEditor::Message::MessageType typeVal) : KTextEditor::Message(richtext, typeVal) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__message_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__message_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__Message::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__message_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__message_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Message::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__message_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__message_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__Message::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__message_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__message_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__Message::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__message_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__message_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__Message::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__message_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__message_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Message::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__message_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__message_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Message::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__message_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__message_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__Message::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__message_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__message_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Message::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__message_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__message_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__Message::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__Message_SuperTimerEvent(KTextEditor::Message* self, QTimerEvent* event);
    friend void KTextEditor__Message_SuperChildEvent(KTextEditor::Message* self, QChildEvent* event);
    friend void KTextEditor__Message_SuperCustomEvent(KTextEditor::Message* self, QEvent* event);
    friend void KTextEditor__Message_SuperConnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
    friend void KTextEditor__Message_SuperDisconnectNotify(KTextEditor::Message* self, const QMetaMethod* signal);
};

#endif
