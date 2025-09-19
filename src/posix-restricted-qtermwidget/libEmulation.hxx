#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALEMULATION_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALEMULATION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Konsole::Emulation so that we can call protected methods
class VirtualKonsoleEmulation : public Konsole::Emulation {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleEmulation = true;

    // Virtual class public types (including callbacks)
    using Konsole::Emulation::EmulationCodec;
    using Konsole__Emulation_Metacall_Callback = int (*)(Konsole__Emulation*, int, int, void**);
    using Konsole__Emulation_EraseChar_Callback = char (*)();
    using Konsole__Emulation_ClearEntireScreen_Callback = void (*)();
    using Konsole__Emulation_Reset_Callback = void (*)();
    using Konsole__Emulation_SetImageSize_Callback = void (*)(Konsole__Emulation*, int, int);
    using Konsole__Emulation_SendText_Callback = void (*)(Konsole__Emulation*, libqt_string);
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
    using Konsole__Emulation_SetScreen_Callback = void (*)(Konsole__Emulation*, int);
    using Konsole__Emulation_SetCodec_Callback = void (*)(Konsole__Emulation*, int);
    using Konsole__Emulation_BufferedUpdate_Callback = void (*)();
    using Konsole__Emulation_Sender_Callback = QObject* (*)();
    using Konsole__Emulation_SenderSignalIndex_Callback = int (*)();
    using Konsole__Emulation_Receivers_Callback = int (*)(const Konsole__Emulation*, const char*);
    using Konsole__Emulation_IsSignalConnected_Callback = bool (*)(const Konsole__Emulation*, QMetaMethod*);

  protected:
    // Instance callback storage
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
    Konsole__Emulation_SetScreen_Callback konsole__emulation_setscreen_callback = nullptr;
    Konsole__Emulation_SetCodec_Callback konsole__emulation_setcodec_callback = nullptr;
    Konsole__Emulation_BufferedUpdate_Callback konsole__emulation_bufferedupdate_callback = nullptr;
    Konsole__Emulation_Sender_Callback konsole__emulation_sender_callback = nullptr;
    Konsole__Emulation_SenderSignalIndex_Callback konsole__emulation_sendersignalindex_callback = nullptr;
    Konsole__Emulation_Receivers_Callback konsole__emulation_receivers_callback = nullptr;
    Konsole__Emulation_IsSignalConnected_Callback konsole__emulation_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool konsole__emulation_metacall_isbase = false;
    mutable bool konsole__emulation_erasechar_isbase = false;
    mutable bool konsole__emulation_clearentirescreen_isbase = false;
    mutable bool konsole__emulation_reset_isbase = false;
    mutable bool konsole__emulation_setimagesize_isbase = false;
    mutable bool konsole__emulation_sendtext_isbase = false;
    mutable bool konsole__emulation_sendkeyevent_isbase = false;
    mutable bool konsole__emulation_sendmouseevent_isbase = false;
    mutable bool konsole__emulation_sendstring_isbase = false;
    mutable bool konsole__emulation_setmode_isbase = false;
    mutable bool konsole__emulation_resetmode_isbase = false;
    mutable bool konsole__emulation_event_isbase = false;
    mutable bool konsole__emulation_eventfilter_isbase = false;
    mutable bool konsole__emulation_timerevent_isbase = false;
    mutable bool konsole__emulation_childevent_isbase = false;
    mutable bool konsole__emulation_customevent_isbase = false;
    mutable bool konsole__emulation_connectnotify_isbase = false;
    mutable bool konsole__emulation_disconnectnotify_isbase = false;
    mutable bool konsole__emulation_setscreen_isbase = false;
    mutable bool konsole__emulation_setcodec_isbase = false;
    mutable bool konsole__emulation_bufferedupdate_isbase = false;
    mutable bool konsole__emulation_sender_isbase = false;
    mutable bool konsole__emulation_sendersignalindex_isbase = false;
    mutable bool konsole__emulation_receivers_isbase = false;
    mutable bool konsole__emulation_issignalconnected_isbase = false;

  public:
    VirtualKonsoleEmulation() : Konsole::Emulation() {};

    ~VirtualKonsoleEmulation() {
        konsole__emulation_metacall_callback = nullptr;
        konsole__emulation_erasechar_callback = nullptr;
        konsole__emulation_clearentirescreen_callback = nullptr;
        konsole__emulation_reset_callback = nullptr;
        konsole__emulation_setimagesize_callback = nullptr;
        konsole__emulation_sendtext_callback = nullptr;
        konsole__emulation_sendkeyevent_callback = nullptr;
        konsole__emulation_sendmouseevent_callback = nullptr;
        konsole__emulation_sendstring_callback = nullptr;
        konsole__emulation_setmode_callback = nullptr;
        konsole__emulation_resetmode_callback = nullptr;
        konsole__emulation_event_callback = nullptr;
        konsole__emulation_eventfilter_callback = nullptr;
        konsole__emulation_timerevent_callback = nullptr;
        konsole__emulation_childevent_callback = nullptr;
        konsole__emulation_customevent_callback = nullptr;
        konsole__emulation_connectnotify_callback = nullptr;
        konsole__emulation_disconnectnotify_callback = nullptr;
        konsole__emulation_setscreen_callback = nullptr;
        konsole__emulation_setcodec_callback = nullptr;
        konsole__emulation_bufferedupdate_callback = nullptr;
        konsole__emulation_sender_callback = nullptr;
        konsole__emulation_sendersignalindex_callback = nullptr;
        konsole__emulation_receivers_callback = nullptr;
        konsole__emulation_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__Emulation_Metacall_Callback(Konsole__Emulation_Metacall_Callback cb) { konsole__emulation_metacall_callback = cb; }
    inline void setKonsole__Emulation_EraseChar_Callback(Konsole__Emulation_EraseChar_Callback cb) { konsole__emulation_erasechar_callback = cb; }
    inline void setKonsole__Emulation_ClearEntireScreen_Callback(Konsole__Emulation_ClearEntireScreen_Callback cb) { konsole__emulation_clearentirescreen_callback = cb; }
    inline void setKonsole__Emulation_Reset_Callback(Konsole__Emulation_Reset_Callback cb) { konsole__emulation_reset_callback = cb; }
    inline void setKonsole__Emulation_SetImageSize_Callback(Konsole__Emulation_SetImageSize_Callback cb) { konsole__emulation_setimagesize_callback = cb; }
    inline void setKonsole__Emulation_SendText_Callback(Konsole__Emulation_SendText_Callback cb) { konsole__emulation_sendtext_callback = cb; }
    inline void setKonsole__Emulation_SendKeyEvent_Callback(Konsole__Emulation_SendKeyEvent_Callback cb) { konsole__emulation_sendkeyevent_callback = cb; }
    inline void setKonsole__Emulation_SendMouseEvent_Callback(Konsole__Emulation_SendMouseEvent_Callback cb) { konsole__emulation_sendmouseevent_callback = cb; }
    inline void setKonsole__Emulation_SendString_Callback(Konsole__Emulation_SendString_Callback cb) { konsole__emulation_sendstring_callback = cb; }
    inline void setKonsole__Emulation_SetMode_Callback(Konsole__Emulation_SetMode_Callback cb) { konsole__emulation_setmode_callback = cb; }
    inline void setKonsole__Emulation_ResetMode_Callback(Konsole__Emulation_ResetMode_Callback cb) { konsole__emulation_resetmode_callback = cb; }
    inline void setKonsole__Emulation_Event_Callback(Konsole__Emulation_Event_Callback cb) { konsole__emulation_event_callback = cb; }
    inline void setKonsole__Emulation_EventFilter_Callback(Konsole__Emulation_EventFilter_Callback cb) { konsole__emulation_eventfilter_callback = cb; }
    inline void setKonsole__Emulation_TimerEvent_Callback(Konsole__Emulation_TimerEvent_Callback cb) { konsole__emulation_timerevent_callback = cb; }
    inline void setKonsole__Emulation_ChildEvent_Callback(Konsole__Emulation_ChildEvent_Callback cb) { konsole__emulation_childevent_callback = cb; }
    inline void setKonsole__Emulation_CustomEvent_Callback(Konsole__Emulation_CustomEvent_Callback cb) { konsole__emulation_customevent_callback = cb; }
    inline void setKonsole__Emulation_ConnectNotify_Callback(Konsole__Emulation_ConnectNotify_Callback cb) { konsole__emulation_connectnotify_callback = cb; }
    inline void setKonsole__Emulation_DisconnectNotify_Callback(Konsole__Emulation_DisconnectNotify_Callback cb) { konsole__emulation_disconnectnotify_callback = cb; }
    inline void setKonsole__Emulation_SetScreen_Callback(Konsole__Emulation_SetScreen_Callback cb) { konsole__emulation_setscreen_callback = cb; }
    inline void setKonsole__Emulation_SetCodec_Callback(Konsole__Emulation_SetCodec_Callback cb) { konsole__emulation_setcodec_callback = cb; }
    inline void setKonsole__Emulation_BufferedUpdate_Callback(Konsole__Emulation_BufferedUpdate_Callback cb) { konsole__emulation_bufferedupdate_callback = cb; }
    inline void setKonsole__Emulation_Sender_Callback(Konsole__Emulation_Sender_Callback cb) { konsole__emulation_sender_callback = cb; }
    inline void setKonsole__Emulation_SenderSignalIndex_Callback(Konsole__Emulation_SenderSignalIndex_Callback cb) { konsole__emulation_sendersignalindex_callback = cb; }
    inline void setKonsole__Emulation_Receivers_Callback(Konsole__Emulation_Receivers_Callback cb) { konsole__emulation_receivers_callback = cb; }
    inline void setKonsole__Emulation_IsSignalConnected_Callback(Konsole__Emulation_IsSignalConnected_Callback cb) { konsole__emulation_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKonsole__Emulation_Metacall_IsBase(bool value) const { konsole__emulation_metacall_isbase = value; }
    inline void setKonsole__Emulation_EraseChar_IsBase(bool value) const { konsole__emulation_erasechar_isbase = value; }
    inline void setKonsole__Emulation_ClearEntireScreen_IsBase(bool value) const { konsole__emulation_clearentirescreen_isbase = value; }
    inline void setKonsole__Emulation_Reset_IsBase(bool value) const { konsole__emulation_reset_isbase = value; }
    inline void setKonsole__Emulation_SetImageSize_IsBase(bool value) const { konsole__emulation_setimagesize_isbase = value; }
    inline void setKonsole__Emulation_SendText_IsBase(bool value) const { konsole__emulation_sendtext_isbase = value; }
    inline void setKonsole__Emulation_SendKeyEvent_IsBase(bool value) const { konsole__emulation_sendkeyevent_isbase = value; }
    inline void setKonsole__Emulation_SendMouseEvent_IsBase(bool value) const { konsole__emulation_sendmouseevent_isbase = value; }
    inline void setKonsole__Emulation_SendString_IsBase(bool value) const { konsole__emulation_sendstring_isbase = value; }
    inline void setKonsole__Emulation_SetMode_IsBase(bool value) const { konsole__emulation_setmode_isbase = value; }
    inline void setKonsole__Emulation_ResetMode_IsBase(bool value) const { konsole__emulation_resetmode_isbase = value; }
    inline void setKonsole__Emulation_Event_IsBase(bool value) const { konsole__emulation_event_isbase = value; }
    inline void setKonsole__Emulation_EventFilter_IsBase(bool value) const { konsole__emulation_eventfilter_isbase = value; }
    inline void setKonsole__Emulation_TimerEvent_IsBase(bool value) const { konsole__emulation_timerevent_isbase = value; }
    inline void setKonsole__Emulation_ChildEvent_IsBase(bool value) const { konsole__emulation_childevent_isbase = value; }
    inline void setKonsole__Emulation_CustomEvent_IsBase(bool value) const { konsole__emulation_customevent_isbase = value; }
    inline void setKonsole__Emulation_ConnectNotify_IsBase(bool value) const { konsole__emulation_connectnotify_isbase = value; }
    inline void setKonsole__Emulation_DisconnectNotify_IsBase(bool value) const { konsole__emulation_disconnectnotify_isbase = value; }
    inline void setKonsole__Emulation_SetScreen_IsBase(bool value) const { konsole__emulation_setscreen_isbase = value; }
    inline void setKonsole__Emulation_SetCodec_IsBase(bool value) const { konsole__emulation_setcodec_isbase = value; }
    inline void setKonsole__Emulation_BufferedUpdate_IsBase(bool value) const { konsole__emulation_bufferedupdate_isbase = value; }
    inline void setKonsole__Emulation_Sender_IsBase(bool value) const { konsole__emulation_sender_isbase = value; }
    inline void setKonsole__Emulation_SenderSignalIndex_IsBase(bool value) const { konsole__emulation_sendersignalindex_isbase = value; }
    inline void setKonsole__Emulation_Receivers_IsBase(bool value) const { konsole__emulation_receivers_isbase = value; }
    inline void setKonsole__Emulation_IsSignalConnected_IsBase(bool value) const { konsole__emulation_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__emulation_metacall_isbase) {
            konsole__emulation_metacall_isbase = false;
            return Konsole__Emulation::qt_metacall(param1, param2, param3);
        } else if (konsole__emulation_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = konsole__emulation_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Emulation::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual char eraseChar() const override {
        if (konsole__emulation_erasechar_isbase) {
            konsole__emulation_erasechar_isbase = false;
            return Konsole__Emulation::eraseChar();
        } else if (konsole__emulation_erasechar_callback != nullptr) {
            char callback_ret = konsole__emulation_erasechar_callback();
            return static_cast<char>(callback_ret);
        } else {
            return Konsole__Emulation::eraseChar();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearEntireScreen() override {
        if (konsole__emulation_clearentirescreen_callback != nullptr) {
            konsole__emulation_clearentirescreen_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (konsole__emulation_reset_callback != nullptr) {
            konsole__emulation_reset_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setImageSize(int lines, int columns) override {
        if (konsole__emulation_setimagesize_isbase) {
            konsole__emulation_setimagesize_isbase = false;
            Konsole__Emulation::setImageSize(lines, columns);
        } else if (konsole__emulation_setimagesize_callback != nullptr) {
            int cbval1 = lines;
            int cbval2 = columns;

            konsole__emulation_setimagesize_callback(this, cbval1, cbval2);
        } else {
            Konsole__Emulation::setImageSize(lines, columns);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendText(const QString& text) override {
        if (konsole__emulation_sendtext_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            konsole__emulation_sendtext_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendKeyEvent(QKeyEvent* param1, bool fromPaste) override {
        if (konsole__emulation_sendkeyevent_isbase) {
            konsole__emulation_sendkeyevent_isbase = false;
            Konsole__Emulation::sendKeyEvent(param1, fromPaste);
        } else if (konsole__emulation_sendkeyevent_callback != nullptr) {
            QKeyEvent* cbval1 = param1;
            bool cbval2 = fromPaste;

            konsole__emulation_sendkeyevent_callback(this, cbval1, cbval2);
        } else {
            Konsole__Emulation::sendKeyEvent(param1, fromPaste);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendMouseEvent(int buttons, int column, int line, int eventType) override {
        if (konsole__emulation_sendmouseevent_isbase) {
            konsole__emulation_sendmouseevent_isbase = false;
            Konsole__Emulation::sendMouseEvent(buttons, column, line, eventType);
        } else if (konsole__emulation_sendmouseevent_callback != nullptr) {
            int cbval1 = buttons;
            int cbval2 = column;
            int cbval3 = line;
            int cbval4 = eventType;

            konsole__emulation_sendmouseevent_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            Konsole__Emulation::sendMouseEvent(buttons, column, line, eventType);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sendString(const char* stringVal, int length) override {
        if (konsole__emulation_sendstring_callback != nullptr) {
            const char* cbval1 = (const char*)stringVal;
            int cbval2 = length;

            konsole__emulation_sendstring_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMode(int mode) override {
        if (konsole__emulation_setmode_callback != nullptr) {
            int cbval1 = mode;

            konsole__emulation_setmode_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetMode(int mode) override {
        if (konsole__emulation_resetmode_callback != nullptr) {
            int cbval1 = mode;

            konsole__emulation_resetmode_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__emulation_event_isbase) {
            konsole__emulation_event_isbase = false;
            return Konsole__Emulation::event(event);
        } else if (konsole__emulation_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = konsole__emulation_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__Emulation::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__emulation_eventfilter_isbase) {
            konsole__emulation_eventfilter_isbase = false;
            return Konsole__Emulation::eventFilter(watched, event);
        } else if (konsole__emulation_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = konsole__emulation_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Konsole__Emulation::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__emulation_timerevent_isbase) {
            konsole__emulation_timerevent_isbase = false;
            Konsole__Emulation::timerEvent(event);
        } else if (konsole__emulation_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            konsole__emulation_timerevent_callback(this, cbval1);
        } else {
            Konsole__Emulation::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__emulation_childevent_isbase) {
            konsole__emulation_childevent_isbase = false;
            Konsole__Emulation::childEvent(event);
        } else if (konsole__emulation_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            konsole__emulation_childevent_callback(this, cbval1);
        } else {
            Konsole__Emulation::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__emulation_customevent_isbase) {
            konsole__emulation_customevent_isbase = false;
            Konsole__Emulation::customEvent(event);
        } else if (konsole__emulation_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            konsole__emulation_customevent_callback(this, cbval1);
        } else {
            Konsole__Emulation::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__emulation_connectnotify_isbase) {
            konsole__emulation_connectnotify_isbase = false;
            Konsole__Emulation::connectNotify(signal);
        } else if (konsole__emulation_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__emulation_connectnotify_callback(this, cbval1);
        } else {
            Konsole__Emulation::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__emulation_disconnectnotify_isbase) {
            konsole__emulation_disconnectnotify_isbase = false;
            Konsole__Emulation::disconnectNotify(signal);
        } else if (konsole__emulation_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__emulation_disconnectnotify_callback(this, cbval1);
        } else {
            Konsole__Emulation::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setScreen(int index) {
        if (konsole__emulation_setscreen_isbase) {
            konsole__emulation_setscreen_isbase = false;
            Konsole__Emulation::setScreen(index);
        } else if (konsole__emulation_setscreen_callback != nullptr) {
            int cbval1 = index;

            konsole__emulation_setscreen_callback(this, cbval1);
        } else {
            Konsole__Emulation::setScreen(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCodec(Konsole::Emulation::EmulationCodec codec) {
        if (konsole__emulation_setcodec_isbase) {
            konsole__emulation_setcodec_isbase = false;
            Konsole__Emulation::setCodec(codec);
        } else if (konsole__emulation_setcodec_callback != nullptr) {
            int cbval1 = static_cast<int>(codec);

            konsole__emulation_setcodec_callback(this, cbval1);
        } else {
            Konsole__Emulation::setCodec(codec);
        }
    }

    // Virtual method for C ABI access and custom callback
    void bufferedUpdate() {
        if (konsole__emulation_bufferedupdate_isbase) {
            konsole__emulation_bufferedupdate_isbase = false;
            Konsole__Emulation::bufferedUpdate();
        } else if (konsole__emulation_bufferedupdate_callback != nullptr) {
            konsole__emulation_bufferedupdate_callback();
        } else {
            Konsole__Emulation::bufferedUpdate();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__emulation_sender_isbase) {
            konsole__emulation_sender_isbase = false;
            return Konsole__Emulation::sender();
        } else if (konsole__emulation_sender_callback != nullptr) {
            QObject* callback_ret = konsole__emulation_sender_callback();
            return callback_ret;
        } else {
            return Konsole__Emulation::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__emulation_sendersignalindex_isbase) {
            konsole__emulation_sendersignalindex_isbase = false;
            return Konsole__Emulation::senderSignalIndex();
        } else if (konsole__emulation_sendersignalindex_callback != nullptr) {
            int callback_ret = konsole__emulation_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Emulation::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__emulation_receivers_isbase) {
            konsole__emulation_receivers_isbase = false;
            return Konsole__Emulation::receivers(signal);
        } else if (konsole__emulation_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = konsole__emulation_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Emulation::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__emulation_issignalconnected_isbase) {
            konsole__emulation_issignalconnected_isbase = false;
            return Konsole__Emulation::isSignalConnected(signal);
        } else if (konsole__emulation_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = konsole__emulation_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__Emulation::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Konsole__Emulation_SetMode(Konsole::Emulation* self, int mode);
    friend void Konsole__Emulation_QBaseSetMode(Konsole::Emulation* self, int mode);
    friend void Konsole__Emulation_ResetMode(Konsole::Emulation* self, int mode);
    friend void Konsole__Emulation_QBaseResetMode(Konsole::Emulation* self, int mode);
    friend void Konsole__Emulation_TimerEvent(Konsole::Emulation* self, QTimerEvent* event);
    friend void Konsole__Emulation_QBaseTimerEvent(Konsole::Emulation* self, QTimerEvent* event);
    friend void Konsole__Emulation_ChildEvent(Konsole::Emulation* self, QChildEvent* event);
    friend void Konsole__Emulation_QBaseChildEvent(Konsole::Emulation* self, QChildEvent* event);
    friend void Konsole__Emulation_CustomEvent(Konsole::Emulation* self, QEvent* event);
    friend void Konsole__Emulation_QBaseCustomEvent(Konsole::Emulation* self, QEvent* event);
    friend void Konsole__Emulation_ConnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
    friend void Konsole__Emulation_QBaseConnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
    friend void Konsole__Emulation_DisconnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
    friend void Konsole__Emulation_QBaseDisconnectNotify(Konsole::Emulation* self, const QMetaMethod* signal);
    friend void Konsole__Emulation_SetScreen(Konsole::Emulation* self, int index);
    friend void Konsole__Emulation_QBaseSetScreen(Konsole::Emulation* self, int index);
    friend void Konsole__Emulation_SetCodec(Konsole::Emulation* self, int codec);
    friend void Konsole__Emulation_QBaseSetCodec(Konsole::Emulation* self, int codec);
    friend void Konsole__Emulation_BufferedUpdate(Konsole::Emulation* self);
    friend void Konsole__Emulation_QBaseBufferedUpdate(Konsole::Emulation* self);
    friend QObject* Konsole__Emulation_Sender(const Konsole::Emulation* self);
    friend QObject* Konsole__Emulation_QBaseSender(const Konsole::Emulation* self);
    friend int Konsole__Emulation_SenderSignalIndex(const Konsole::Emulation* self);
    friend int Konsole__Emulation_QBaseSenderSignalIndex(const Konsole::Emulation* self);
    friend int Konsole__Emulation_Receivers(const Konsole::Emulation* self, const char* signal);
    friend int Konsole__Emulation_QBaseReceivers(const Konsole::Emulation* self, const char* signal);
    friend bool Konsole__Emulation_IsSignalConnected(const Konsole::Emulation* self, const QMetaMethod* signal);
    friend bool Konsole__Emulation_QBaseIsSignalConnected(const Konsole::Emulation* self, const QMetaMethod* signal);
};

#endif
