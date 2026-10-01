#pragma once
#ifndef POSIX_RESTRICTED_QTERMWIDGET_LIBEMULATION_HXX
#define POSIX_RESTRICTED_QTERMWIDGET_LIBEMULATION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Konsole::Emulation
class VirtualKonsoleEmulation : public Konsole::Emulation {
  public:
    // Virtual class public types (including callbacks and access types)
    using Konsole::Emulation::EmulationCodec;
    using Konsole__Emulation_MetaObject_Callback = QMetaObject* (*)(const Konsole__Emulation*);
    using Konsole__Emulation_Metacast_Callback = void* (*)(Konsole__Emulation*, const char*);
    using Konsole__Emulation_Metacall_Callback = int (*)(Konsole__Emulation*, int, int, void**);
    using Konsole__Emulation_EraseChar_Callback = char (*)(const Konsole__Emulation*);
    using Konsole__Emulation_ClearEntireScreen_Callback = void (*)(Konsole__Emulation*);
    using Konsole__Emulation_Reset_Callback = void (*)(Konsole__Emulation*);
    using Konsole__Emulation_SetImageSize_Callback = void (*)(Konsole__Emulation*, int, int);
    using Konsole__Emulation_SendText_Callback = void (*)(Konsole__Emulation*, const char*);
    using Konsole__Emulation_SendKeyEvent_Callback = void (*)(Konsole__Emulation*, QKeyEvent*, bool);
    using Konsole__Emulation_SendMouseEvent_Callback = void (*)(Konsole__Emulation*, int, int, int, int);
    using Konsole__Emulation_SendString_Callback = void (*)(Konsole__Emulation*, const char*, int);
    using Konsole__Emulation_SetMode_Callback = void (*)(Konsole__Emulation*, int);
    using Konsole__Emulation_ResetMode_Callback = void (*)(Konsole__Emulation*, int);
    using Konsole__Emulation_Event_Callback = bool (*)(Konsole__Emulation*, QEvent*);
    using Konsole__Emulation_EventFilter_Callback = bool (*)(Konsole__Emulation*, QObject*, QEvent*);
    using Konsole__Emulation_TimerEvent_Callback = void (*)(Konsole__Emulation*, QTimerEvent*);
    using Konsole__Emulation_ChildEvent_Callback = void (*)(Konsole__Emulation*, QChildEvent*);
    using Konsole__Emulation_CustomEvent_Callback = void (*)(Konsole__Emulation*, QEvent*);
    using Konsole__Emulation_ConnectNotify_Callback = void (*)(Konsole__Emulation*, QMetaMethod*);
    using Konsole__Emulation_DisconnectNotify_Callback = void (*)(Konsole__Emulation*, QMetaMethod*);
    using Konsole::Emulation::bufferedUpdate;
    using Konsole::Emulation::isSignalConnected;
    using Konsole::Emulation::receivers;
    using Konsole::Emulation::sender;
    using Konsole::Emulation::senderSignalIndex;
    using Konsole::Emulation::setCodec;
    using Konsole::Emulation::setScreen;

    // Instance callback storage
    Konsole__Emulation_MetaObject_Callback konsole__emulation_metaobject_callback = nullptr;
    Konsole__Emulation_Metacast_Callback konsole__emulation_metacast_callback = nullptr;
    Konsole__Emulation_Metacall_Callback konsole__emulation_metacall_callback = nullptr;
    Konsole__Emulation_EraseChar_Callback konsole__emulation_erasechar_callback = nullptr;
    Konsole__Emulation_ClearEntireScreen_Callback konsole__emulation_clearentirescreen_callback = nullptr;
    Konsole__Emulation_Reset_Callback konsole__emulation_reset_callback = nullptr;
    Konsole__Emulation_SetImageSize_Callback konsole__emulation_setimagesize_callback = nullptr;
    Konsole__Emulation_SendText_Callback konsole__emulation_sendtext_callback = nullptr;
    Konsole__Emulation_SendKeyEvent_Callback konsole__emulation_sendkeyevent_callback = nullptr;
    Konsole__Emulation_SendMouseEvent_Callback konsole__emulation_sendmouseevent_callback = nullptr;
    Konsole__Emulation_SendString_Callback konsole__emulation_sendstring_callback = nullptr;
    Konsole__Emulation_SetMode_Callback konsole__emulation_setmode_callback = nullptr;
    Konsole__Emulation_ResetMode_Callback konsole__emulation_resetmode_callback = nullptr;
    Konsole__Emulation_Event_Callback konsole__emulation_event_callback = nullptr;
    Konsole__Emulation_EventFilter_Callback konsole__emulation_eventfilter_callback = nullptr;
    Konsole__Emulation_TimerEvent_Callback konsole__emulation_timerevent_callback = nullptr;
    Konsole__Emulation_ChildEvent_Callback konsole__emulation_childevent_callback = nullptr;
    Konsole__Emulation_CustomEvent_Callback konsole__emulation_customevent_callback = nullptr;
    Konsole__Emulation_ConnectNotify_Callback konsole__emulation_connectnotify_callback = nullptr;
    Konsole__Emulation_DisconnectNotify_Callback konsole__emulation_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : Konsole::Emulation {
        using Konsole::Emulation::childEvent;
        using Konsole::Emulation::connectNotify;
        using Konsole::Emulation::customEvent;
        using Konsole::Emulation::disconnectNotify;
        using Konsole::Emulation::resetMode;
        using Konsole::Emulation::setMode;
        using Konsole::Emulation::timerEvent;
    };

    VirtualKonsoleEmulation() : Konsole::Emulation() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__emulation_metaobject_callback) {
            QMetaObject* callback_ret = konsole__emulation_metaobject_callback(this);
            return callback_ret;
        }
        return Konsole__Emulation::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__emulation_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = konsole__emulation_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__Emulation::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__emulation_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = konsole__emulation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__Emulation::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual char eraseChar() const override {
        if (konsole__emulation_erasechar_callback) {
            char callback_ret = konsole__emulation_erasechar_callback(this);
            return static_cast<char>(callback_ret);
        }
        return Konsole__Emulation::eraseChar();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearEntireScreen() override {
        if (konsole__emulation_clearentirescreen_callback) {
            konsole__emulation_clearentirescreen_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::clearEntireScreen called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (konsole__emulation_reset_callback) {
            konsole__emulation_reset_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::reset called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImageSize(int lines, int columns) override {
        if (konsole__emulation_setimagesize_callback) {
            int cbval1 = lines;
            int cbval2 = columns;
            konsole__emulation_setimagesize_callback(this, cbval1, cbval2);
            return;
        }
        Konsole__Emulation::setImageSize(lines, columns);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendText(const QString& text) override {
        if (konsole__emulation_sendtext_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            konsole__emulation_sendtext_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::sendText called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendKeyEvent(QKeyEvent* param1, bool fromPaste) override {
        if (konsole__emulation_sendkeyevent_callback) {
            QKeyEvent* cbval1 = param1;
            bool cbval2 = fromPaste;
            konsole__emulation_sendkeyevent_callback(this, cbval1, cbval2);
            return;
        }
        Konsole__Emulation::sendKeyEvent(param1, fromPaste);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendMouseEvent(int buttons, int column, int line, int eventType) override {
        if (konsole__emulation_sendmouseevent_callback) {
            int cbval1 = buttons;
            int cbval2 = column;
            int cbval3 = line;
            int cbval4 = eventType;
            konsole__emulation_sendmouseevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        Konsole__Emulation::sendMouseEvent(buttons, column, line, eventType);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendString(const char* string, int length) override {
        if (konsole__emulation_sendstring_callback) {
            const char* cbval1 = (const char*)string;
            int cbval2 = length;
            konsole__emulation_sendstring_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::sendString called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(int mode) override {
        if (konsole__emulation_setmode_callback) {
            int cbval1 = mode;
            konsole__emulation_setmode_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::setMode called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetMode(int mode) override {
        if (konsole__emulation_resetmode_callback) {
            int cbval1 = mode;
            konsole__emulation_resetmode_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method Konsole::Emulation::resetMode called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__emulation_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = konsole__emulation_event_callback(this, cbval1);
            return callback_ret;
        }
        return Konsole__Emulation::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__emulation_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = konsole__emulation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__Emulation::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__emulation_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            konsole__emulation_timerevent_callback(this, cbval1);
            return;
        }
        Konsole__Emulation::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__emulation_childevent_callback) {
            QChildEvent* cbval1 = event;
            konsole__emulation_childevent_callback(this, cbval1);
            return;
        }
        Konsole__Emulation::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__emulation_customevent_callback) {
            QEvent* cbval1 = event;
            konsole__emulation_customevent_callback(this, cbval1);
            return;
        }
        Konsole__Emulation::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__emulation_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__emulation_connectnotify_callback(this, cbval1);
            return;
        }
        Konsole__Emulation::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__emulation_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            konsole__emulation_disconnectnotify_callback(this, cbval1);
            return;
        }
        Konsole__Emulation::disconnectNotify(signal);
    }

    // Friend functions
    friend void Konsole__Emulation_SuperTimerEvent(Konsole::Emulation* self, QTimerEvent* event);
    friend void Konsole__Emulation_SuperChildEvent(Konsole::Emulation* self, QChildEvent* event);
    friend void Konsole__Emulation_SuperCustomEvent(Konsole::Emulation* self, QEvent* event);
    friend void Konsole__Emulation_SuperConnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
    friend void Konsole__Emulation_SuperDisconnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
};

#endif
