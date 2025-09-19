#pragma once
#ifndef SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALFILTER_H
#define SRC_POSIX_RESTRICTED_QTERMWIDGETC_LIBVIRTUALFILTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Konsole::Filter so that we can call protected methods
class VirtualKonsoleFilter : public Konsole::Filter {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleFilter = true;

    // Virtual class public types (including callbacks)
    using Konsole__Filter_Process_Callback = void (*)();
    using Konsole__Filter_Metacall_Callback = int (*)(Konsole__Filter*, int, int, void**);
    using Konsole__Filter_Event_Callback = bool (*)(Konsole__Filter*, QEvent*);
    using Konsole__Filter_EventFilter_Callback = bool (*)(Konsole__Filter*, QObject*, QEvent*);
    using Konsole__Filter_TimerEvent_Callback = void (*)(Konsole__Filter*, QTimerEvent*);
    using Konsole__Filter_ChildEvent_Callback = void (*)(Konsole__Filter*, QChildEvent*);
    using Konsole__Filter_CustomEvent_Callback = void (*)(Konsole__Filter*, QEvent*);
    using Konsole__Filter_ConnectNotify_Callback = void (*)(Konsole__Filter*, QMetaMethod*);
    using Konsole__Filter_DisconnectNotify_Callback = void (*)(Konsole__Filter*, QMetaMethod*);
    using Konsole__Filter_AddHotSpot_Callback = void (*)(Konsole__Filter*, Konsole__Filter__HotSpot*);
    using Konsole__Filter_Buffer_Callback = const char* (*)();
    using Konsole__Filter_GetLineColumn_Callback = void (*)(Konsole__Filter*, int, int*, int*);
    using Konsole__Filter_Sender_Callback = QObject* (*)();
    using Konsole__Filter_SenderSignalIndex_Callback = int (*)();
    using Konsole__Filter_Receivers_Callback = int (*)(const Konsole__Filter*, const char*);
    using Konsole__Filter_IsSignalConnected_Callback = bool (*)(const Konsole__Filter*, QMetaMethod*);

  protected:
    // Instance callback storage
    Konsole__Filter_Process_Callback konsole__filter_process_callback = nullptr;
    Konsole__Filter_Metacall_Callback konsole__filter_metacall_callback = nullptr;
    Konsole__Filter_Event_Callback konsole__filter_event_callback = nullptr;
    Konsole__Filter_EventFilter_Callback konsole__filter_eventfilter_callback = nullptr;
    Konsole__Filter_TimerEvent_Callback konsole__filter_timerevent_callback = nullptr;
    Konsole__Filter_ChildEvent_Callback konsole__filter_childevent_callback = nullptr;
    Konsole__Filter_CustomEvent_Callback konsole__filter_customevent_callback = nullptr;
    Konsole__Filter_ConnectNotify_Callback konsole__filter_connectnotify_callback = nullptr;
    Konsole__Filter_DisconnectNotify_Callback konsole__filter_disconnectnotify_callback = nullptr;
    Konsole__Filter_AddHotSpot_Callback konsole__filter_addhotspot_callback = nullptr;
    Konsole__Filter_Buffer_Callback konsole__filter_buffer_callback = nullptr;
    Konsole__Filter_GetLineColumn_Callback konsole__filter_getlinecolumn_callback = nullptr;
    Konsole__Filter_Sender_Callback konsole__filter_sender_callback = nullptr;
    Konsole__Filter_SenderSignalIndex_Callback konsole__filter_sendersignalindex_callback = nullptr;
    Konsole__Filter_Receivers_Callback konsole__filter_receivers_callback = nullptr;
    Konsole__Filter_IsSignalConnected_Callback konsole__filter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool konsole__filter_process_isbase = false;
    mutable bool konsole__filter_metacall_isbase = false;
    mutable bool konsole__filter_event_isbase = false;
    mutable bool konsole__filter_eventfilter_isbase = false;
    mutable bool konsole__filter_timerevent_isbase = false;
    mutable bool konsole__filter_childevent_isbase = false;
    mutable bool konsole__filter_customevent_isbase = false;
    mutable bool konsole__filter_connectnotify_isbase = false;
    mutable bool konsole__filter_disconnectnotify_isbase = false;
    mutable bool konsole__filter_addhotspot_isbase = false;
    mutable bool konsole__filter_buffer_isbase = false;
    mutable bool konsole__filter_getlinecolumn_isbase = false;
    mutable bool konsole__filter_sender_isbase = false;
    mutable bool konsole__filter_sendersignalindex_isbase = false;
    mutable bool konsole__filter_receivers_isbase = false;
    mutable bool konsole__filter_issignalconnected_isbase = false;

  public:
    VirtualKonsoleFilter() : Konsole::Filter() {};

    ~VirtualKonsoleFilter() {
        konsole__filter_process_callback = nullptr;
        konsole__filter_metacall_callback = nullptr;
        konsole__filter_event_callback = nullptr;
        konsole__filter_eventfilter_callback = nullptr;
        konsole__filter_timerevent_callback = nullptr;
        konsole__filter_childevent_callback = nullptr;
        konsole__filter_customevent_callback = nullptr;
        konsole__filter_connectnotify_callback = nullptr;
        konsole__filter_disconnectnotify_callback = nullptr;
        konsole__filter_addhotspot_callback = nullptr;
        konsole__filter_buffer_callback = nullptr;
        konsole__filter_getlinecolumn_callback = nullptr;
        konsole__filter_sender_callback = nullptr;
        konsole__filter_sendersignalindex_callback = nullptr;
        konsole__filter_receivers_callback = nullptr;
        konsole__filter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__Filter_Process_Callback(Konsole__Filter_Process_Callback cb) { konsole__filter_process_callback = cb; }
    inline void setKonsole__Filter_Metacall_Callback(Konsole__Filter_Metacall_Callback cb) { konsole__filter_metacall_callback = cb; }
    inline void setKonsole__Filter_Event_Callback(Konsole__Filter_Event_Callback cb) { konsole__filter_event_callback = cb; }
    inline void setKonsole__Filter_EventFilter_Callback(Konsole__Filter_EventFilter_Callback cb) { konsole__filter_eventfilter_callback = cb; }
    inline void setKonsole__Filter_TimerEvent_Callback(Konsole__Filter_TimerEvent_Callback cb) { konsole__filter_timerevent_callback = cb; }
    inline void setKonsole__Filter_ChildEvent_Callback(Konsole__Filter_ChildEvent_Callback cb) { konsole__filter_childevent_callback = cb; }
    inline void setKonsole__Filter_CustomEvent_Callback(Konsole__Filter_CustomEvent_Callback cb) { konsole__filter_customevent_callback = cb; }
    inline void setKonsole__Filter_ConnectNotify_Callback(Konsole__Filter_ConnectNotify_Callback cb) { konsole__filter_connectnotify_callback = cb; }
    inline void setKonsole__Filter_DisconnectNotify_Callback(Konsole__Filter_DisconnectNotify_Callback cb) { konsole__filter_disconnectnotify_callback = cb; }
    inline void setKonsole__Filter_AddHotSpot_Callback(Konsole__Filter_AddHotSpot_Callback cb) { konsole__filter_addhotspot_callback = cb; }
    inline void setKonsole__Filter_Buffer_Callback(Konsole__Filter_Buffer_Callback cb) { konsole__filter_buffer_callback = cb; }
    inline void setKonsole__Filter_GetLineColumn_Callback(Konsole__Filter_GetLineColumn_Callback cb) { konsole__filter_getlinecolumn_callback = cb; }
    inline void setKonsole__Filter_Sender_Callback(Konsole__Filter_Sender_Callback cb) { konsole__filter_sender_callback = cb; }
    inline void setKonsole__Filter_SenderSignalIndex_Callback(Konsole__Filter_SenderSignalIndex_Callback cb) { konsole__filter_sendersignalindex_callback = cb; }
    inline void setKonsole__Filter_Receivers_Callback(Konsole__Filter_Receivers_Callback cb) { konsole__filter_receivers_callback = cb; }
    inline void setKonsole__Filter_IsSignalConnected_Callback(Konsole__Filter_IsSignalConnected_Callback cb) { konsole__filter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKonsole__Filter_Process_IsBase(bool value) const { konsole__filter_process_isbase = value; }
    inline void setKonsole__Filter_Metacall_IsBase(bool value) const { konsole__filter_metacall_isbase = value; }
    inline void setKonsole__Filter_Event_IsBase(bool value) const { konsole__filter_event_isbase = value; }
    inline void setKonsole__Filter_EventFilter_IsBase(bool value) const { konsole__filter_eventfilter_isbase = value; }
    inline void setKonsole__Filter_TimerEvent_IsBase(bool value) const { konsole__filter_timerevent_isbase = value; }
    inline void setKonsole__Filter_ChildEvent_IsBase(bool value) const { konsole__filter_childevent_isbase = value; }
    inline void setKonsole__Filter_CustomEvent_IsBase(bool value) const { konsole__filter_customevent_isbase = value; }
    inline void setKonsole__Filter_ConnectNotify_IsBase(bool value) const { konsole__filter_connectnotify_isbase = value; }
    inline void setKonsole__Filter_DisconnectNotify_IsBase(bool value) const { konsole__filter_disconnectnotify_isbase = value; }
    inline void setKonsole__Filter_AddHotSpot_IsBase(bool value) const { konsole__filter_addhotspot_isbase = value; }
    inline void setKonsole__Filter_Buffer_IsBase(bool value) const { konsole__filter_buffer_isbase = value; }
    inline void setKonsole__Filter_GetLineColumn_IsBase(bool value) const { konsole__filter_getlinecolumn_isbase = value; }
    inline void setKonsole__Filter_Sender_IsBase(bool value) const { konsole__filter_sender_isbase = value; }
    inline void setKonsole__Filter_SenderSignalIndex_IsBase(bool value) const { konsole__filter_sendersignalindex_isbase = value; }
    inline void setKonsole__Filter_Receivers_IsBase(bool value) const { konsole__filter_receivers_isbase = value; }
    inline void setKonsole__Filter_IsSignalConnected_IsBase(bool value) const { konsole__filter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__filter_process_callback != nullptr) {
            konsole__filter_process_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filter_metacall_isbase) {
            konsole__filter_metacall_isbase = false;
            return Konsole__Filter::qt_metacall(param1, param2, param3);
        } else if (konsole__filter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = konsole__filter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Filter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filter_event_isbase) {
            konsole__filter_event_isbase = false;
            return Konsole__Filter::event(event);
        } else if (konsole__filter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = konsole__filter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__Filter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filter_eventfilter_isbase) {
            konsole__filter_eventfilter_isbase = false;
            return Konsole__Filter::eventFilter(watched, event);
        } else if (konsole__filter_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = konsole__filter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Konsole__Filter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filter_timerevent_isbase) {
            konsole__filter_timerevent_isbase = false;
            Konsole__Filter::timerEvent(event);
        } else if (konsole__filter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            konsole__filter_timerevent_callback(this, cbval1);
        } else {
            Konsole__Filter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filter_childevent_isbase) {
            konsole__filter_childevent_isbase = false;
            Konsole__Filter::childEvent(event);
        } else if (konsole__filter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            konsole__filter_childevent_callback(this, cbval1);
        } else {
            Konsole__Filter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filter_customevent_isbase) {
            konsole__filter_customevent_isbase = false;
            Konsole__Filter::customEvent(event);
        } else if (konsole__filter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            konsole__filter_customevent_callback(this, cbval1);
        } else {
            Konsole__Filter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_connectnotify_isbase) {
            konsole__filter_connectnotify_isbase = false;
            Konsole__Filter::connectNotify(signal);
        } else if (konsole__filter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__filter_connectnotify_callback(this, cbval1);
        } else {
            Konsole__Filter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_disconnectnotify_isbase) {
            konsole__filter_disconnectnotify_isbase = false;
            Konsole__Filter::disconnectNotify(signal);
        } else if (konsole__filter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__filter_disconnectnotify_callback(this, cbval1);
        } else {
            Konsole__Filter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__filter_addhotspot_isbase) {
            konsole__filter_addhotspot_isbase = false;
            Konsole__Filter::addHotSpot(param1);
        } else if (konsole__filter_addhotspot_callback != nullptr) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            konsole__filter_addhotspot_callback(this, cbval1);
        } else {
            Konsole__Filter::addHotSpot(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__filter_buffer_isbase) {
            konsole__filter_buffer_isbase = false;
            return Konsole__Filter::buffer();
        } else if (konsole__filter_buffer_callback != nullptr) {
            const char* callback_ret = konsole__filter_buffer_callback();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        } else {
            return Konsole__Filter::buffer();
        }
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__filter_getlinecolumn_isbase) {
            konsole__filter_getlinecolumn_isbase = false;
            Konsole__Filter::getLineColumn(position, startLine, startColumn);
        } else if (konsole__filter_getlinecolumn_callback != nullptr) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            konsole__filter_getlinecolumn_callback(this, cbval1, cbval2, cbval3);
        } else {
            Konsole__Filter::getLineColumn(position, startLine, startColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__filter_sender_isbase) {
            konsole__filter_sender_isbase = false;
            return Konsole__Filter::sender();
        } else if (konsole__filter_sender_callback != nullptr) {
            QObject* callback_ret = konsole__filter_sender_callback();
            return callback_ret;
        } else {
            return Konsole__Filter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__filter_sendersignalindex_isbase) {
            konsole__filter_sendersignalindex_isbase = false;
            return Konsole__Filter::senderSignalIndex();
        } else if (konsole__filter_sendersignalindex_callback != nullptr) {
            int callback_ret = konsole__filter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Filter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__filter_receivers_isbase) {
            konsole__filter_receivers_isbase = false;
            return Konsole__Filter::receivers(signal);
        } else if (konsole__filter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = konsole__filter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__Filter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__filter_issignalconnected_isbase) {
            konsole__filter_issignalconnected_isbase = false;
            return Konsole__Filter::isSignalConnected(signal);
        } else if (konsole__filter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = konsole__filter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__Filter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Konsole__Filter_TimerEvent(Konsole::Filter* self, QTimerEvent* event);
    friend void Konsole__Filter_QBaseTimerEvent(Konsole::Filter* self, QTimerEvent* event);
    friend void Konsole__Filter_ChildEvent(Konsole::Filter* self, QChildEvent* event);
    friend void Konsole__Filter_QBaseChildEvent(Konsole::Filter* self, QChildEvent* event);
    friend void Konsole__Filter_CustomEvent(Konsole::Filter* self, QEvent* event);
    friend void Konsole__Filter_QBaseCustomEvent(Konsole::Filter* self, QEvent* event);
    friend void Konsole__Filter_ConnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_QBaseConnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_DisconnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_QBaseDisconnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_AddHotSpot(Konsole::Filter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__Filter_QBaseAddHotSpot(Konsole::Filter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__Filter_Buffer(Konsole::Filter* self);
    friend libqt_string Konsole__Filter_QBaseBuffer(Konsole::Filter* self);
    friend void Konsole__Filter_GetLineColumn(Konsole::Filter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__Filter_QBaseGetLineColumn(Konsole::Filter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__Filter_Sender(const Konsole::Filter* self);
    friend QObject* Konsole__Filter_QBaseSender(const Konsole::Filter* self);
    friend int Konsole__Filter_SenderSignalIndex(const Konsole::Filter* self);
    friend int Konsole__Filter_QBaseSenderSignalIndex(const Konsole::Filter* self);
    friend int Konsole__Filter_Receivers(const Konsole::Filter* self, const char* signal);
    friend int Konsole__Filter_QBaseReceivers(const Konsole::Filter* self, const char* signal);
    friend bool Konsole__Filter_IsSignalConnected(const Konsole::Filter* self, const QMetaMethod* signal);
    friend bool Konsole__Filter_QBaseIsSignalConnected(const Konsole::Filter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::RegExpFilter so that we can call protected methods
class VirtualKonsoleRegExpFilter final : public Konsole::RegExpFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleRegExpFilter = true;

    // Virtual class public types (including callbacks)
    using Konsole__RegExpFilter_Process_Callback = void (*)();
    using Konsole__RegExpFilter_NewHotSpot_Callback = Konsole__RegExpFilter__HotSpot* (*)(Konsole__RegExpFilter*, int, int, int, int);
    using Konsole__RegExpFilter_Metacall_Callback = int (*)(Konsole__RegExpFilter*, int, int, void**);
    using Konsole__RegExpFilter_Event_Callback = bool (*)(Konsole__RegExpFilter*, QEvent*);
    using Konsole__RegExpFilter_EventFilter_Callback = bool (*)(Konsole__RegExpFilter*, QObject*, QEvent*);
    using Konsole__RegExpFilter_TimerEvent_Callback = void (*)(Konsole__RegExpFilter*, QTimerEvent*);
    using Konsole__RegExpFilter_ChildEvent_Callback = void (*)(Konsole__RegExpFilter*, QChildEvent*);
    using Konsole__RegExpFilter_CustomEvent_Callback = void (*)(Konsole__RegExpFilter*, QEvent*);
    using Konsole__RegExpFilter_ConnectNotify_Callback = void (*)(Konsole__RegExpFilter*, QMetaMethod*);
    using Konsole__RegExpFilter_DisconnectNotify_Callback = void (*)(Konsole__RegExpFilter*, QMetaMethod*);
    using Konsole__RegExpFilter_AddHotSpot_Callback = void (*)(Konsole__RegExpFilter*, Konsole__Filter__HotSpot*);
    using Konsole__RegExpFilter_Buffer_Callback = const char* (*)();
    using Konsole__RegExpFilter_GetLineColumn_Callback = void (*)(Konsole__RegExpFilter*, int, int*, int*);
    using Konsole__RegExpFilter_Sender_Callback = QObject* (*)();
    using Konsole__RegExpFilter_SenderSignalIndex_Callback = int (*)();
    using Konsole__RegExpFilter_Receivers_Callback = int (*)(const Konsole__RegExpFilter*, const char*);
    using Konsole__RegExpFilter_IsSignalConnected_Callback = bool (*)(const Konsole__RegExpFilter*, QMetaMethod*);

  protected:
    // Instance callback storage
    Konsole__RegExpFilter_Process_Callback konsole__regexpfilter_process_callback = nullptr;
    Konsole__RegExpFilter_NewHotSpot_Callback konsole__regexpfilter_newhotspot_callback = nullptr;
    Konsole__RegExpFilter_Metacall_Callback konsole__regexpfilter_metacall_callback = nullptr;
    Konsole__RegExpFilter_Event_Callback konsole__regexpfilter_event_callback = nullptr;
    Konsole__RegExpFilter_EventFilter_Callback konsole__regexpfilter_eventfilter_callback = nullptr;
    Konsole__RegExpFilter_TimerEvent_Callback konsole__regexpfilter_timerevent_callback = nullptr;
    Konsole__RegExpFilter_ChildEvent_Callback konsole__regexpfilter_childevent_callback = nullptr;
    Konsole__RegExpFilter_CustomEvent_Callback konsole__regexpfilter_customevent_callback = nullptr;
    Konsole__RegExpFilter_ConnectNotify_Callback konsole__regexpfilter_connectnotify_callback = nullptr;
    Konsole__RegExpFilter_DisconnectNotify_Callback konsole__regexpfilter_disconnectnotify_callback = nullptr;
    Konsole__RegExpFilter_AddHotSpot_Callback konsole__regexpfilter_addhotspot_callback = nullptr;
    Konsole__RegExpFilter_Buffer_Callback konsole__regexpfilter_buffer_callback = nullptr;
    Konsole__RegExpFilter_GetLineColumn_Callback konsole__regexpfilter_getlinecolumn_callback = nullptr;
    Konsole__RegExpFilter_Sender_Callback konsole__regexpfilter_sender_callback = nullptr;
    Konsole__RegExpFilter_SenderSignalIndex_Callback konsole__regexpfilter_sendersignalindex_callback = nullptr;
    Konsole__RegExpFilter_Receivers_Callback konsole__regexpfilter_receivers_callback = nullptr;
    Konsole__RegExpFilter_IsSignalConnected_Callback konsole__regexpfilter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool konsole__regexpfilter_process_isbase = false;
    mutable bool konsole__regexpfilter_newhotspot_isbase = false;
    mutable bool konsole__regexpfilter_metacall_isbase = false;
    mutable bool konsole__regexpfilter_event_isbase = false;
    mutable bool konsole__regexpfilter_eventfilter_isbase = false;
    mutable bool konsole__regexpfilter_timerevent_isbase = false;
    mutable bool konsole__regexpfilter_childevent_isbase = false;
    mutable bool konsole__regexpfilter_customevent_isbase = false;
    mutable bool konsole__regexpfilter_connectnotify_isbase = false;
    mutable bool konsole__regexpfilter_disconnectnotify_isbase = false;
    mutable bool konsole__regexpfilter_addhotspot_isbase = false;
    mutable bool konsole__regexpfilter_buffer_isbase = false;
    mutable bool konsole__regexpfilter_getlinecolumn_isbase = false;
    mutable bool konsole__regexpfilter_sender_isbase = false;
    mutable bool konsole__regexpfilter_sendersignalindex_isbase = false;
    mutable bool konsole__regexpfilter_receivers_isbase = false;
    mutable bool konsole__regexpfilter_issignalconnected_isbase = false;

  public:
    VirtualKonsoleRegExpFilter() : Konsole::RegExpFilter() {};

    ~VirtualKonsoleRegExpFilter() {
        konsole__regexpfilter_process_callback = nullptr;
        konsole__regexpfilter_newhotspot_callback = nullptr;
        konsole__regexpfilter_metacall_callback = nullptr;
        konsole__regexpfilter_event_callback = nullptr;
        konsole__regexpfilter_eventfilter_callback = nullptr;
        konsole__regexpfilter_timerevent_callback = nullptr;
        konsole__regexpfilter_childevent_callback = nullptr;
        konsole__regexpfilter_customevent_callback = nullptr;
        konsole__regexpfilter_connectnotify_callback = nullptr;
        konsole__regexpfilter_disconnectnotify_callback = nullptr;
        konsole__regexpfilter_addhotspot_callback = nullptr;
        konsole__regexpfilter_buffer_callback = nullptr;
        konsole__regexpfilter_getlinecolumn_callback = nullptr;
        konsole__regexpfilter_sender_callback = nullptr;
        konsole__regexpfilter_sendersignalindex_callback = nullptr;
        konsole__regexpfilter_receivers_callback = nullptr;
        konsole__regexpfilter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__RegExpFilter_Process_Callback(Konsole__RegExpFilter_Process_Callback cb) { konsole__regexpfilter_process_callback = cb; }
    inline void setKonsole__RegExpFilter_NewHotSpot_Callback(Konsole__RegExpFilter_NewHotSpot_Callback cb) { konsole__regexpfilter_newhotspot_callback = cb; }
    inline void setKonsole__RegExpFilter_Metacall_Callback(Konsole__RegExpFilter_Metacall_Callback cb) { konsole__regexpfilter_metacall_callback = cb; }
    inline void setKonsole__RegExpFilter_Event_Callback(Konsole__RegExpFilter_Event_Callback cb) { konsole__regexpfilter_event_callback = cb; }
    inline void setKonsole__RegExpFilter_EventFilter_Callback(Konsole__RegExpFilter_EventFilter_Callback cb) { konsole__regexpfilter_eventfilter_callback = cb; }
    inline void setKonsole__RegExpFilter_TimerEvent_Callback(Konsole__RegExpFilter_TimerEvent_Callback cb) { konsole__regexpfilter_timerevent_callback = cb; }
    inline void setKonsole__RegExpFilter_ChildEvent_Callback(Konsole__RegExpFilter_ChildEvent_Callback cb) { konsole__regexpfilter_childevent_callback = cb; }
    inline void setKonsole__RegExpFilter_CustomEvent_Callback(Konsole__RegExpFilter_CustomEvent_Callback cb) { konsole__regexpfilter_customevent_callback = cb; }
    inline void setKonsole__RegExpFilter_ConnectNotify_Callback(Konsole__RegExpFilter_ConnectNotify_Callback cb) { konsole__regexpfilter_connectnotify_callback = cb; }
    inline void setKonsole__RegExpFilter_DisconnectNotify_Callback(Konsole__RegExpFilter_DisconnectNotify_Callback cb) { konsole__regexpfilter_disconnectnotify_callback = cb; }
    inline void setKonsole__RegExpFilter_AddHotSpot_Callback(Konsole__RegExpFilter_AddHotSpot_Callback cb) { konsole__regexpfilter_addhotspot_callback = cb; }
    inline void setKonsole__RegExpFilter_Buffer_Callback(Konsole__RegExpFilter_Buffer_Callback cb) { konsole__regexpfilter_buffer_callback = cb; }
    inline void setKonsole__RegExpFilter_GetLineColumn_Callback(Konsole__RegExpFilter_GetLineColumn_Callback cb) { konsole__regexpfilter_getlinecolumn_callback = cb; }
    inline void setKonsole__RegExpFilter_Sender_Callback(Konsole__RegExpFilter_Sender_Callback cb) { konsole__regexpfilter_sender_callback = cb; }
    inline void setKonsole__RegExpFilter_SenderSignalIndex_Callback(Konsole__RegExpFilter_SenderSignalIndex_Callback cb) { konsole__regexpfilter_sendersignalindex_callback = cb; }
    inline void setKonsole__RegExpFilter_Receivers_Callback(Konsole__RegExpFilter_Receivers_Callback cb) { konsole__regexpfilter_receivers_callback = cb; }
    inline void setKonsole__RegExpFilter_IsSignalConnected_Callback(Konsole__RegExpFilter_IsSignalConnected_Callback cb) { konsole__regexpfilter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKonsole__RegExpFilter_Process_IsBase(bool value) const { konsole__regexpfilter_process_isbase = value; }
    inline void setKonsole__RegExpFilter_NewHotSpot_IsBase(bool value) const { konsole__regexpfilter_newhotspot_isbase = value; }
    inline void setKonsole__RegExpFilter_Metacall_IsBase(bool value) const { konsole__regexpfilter_metacall_isbase = value; }
    inline void setKonsole__RegExpFilter_Event_IsBase(bool value) const { konsole__regexpfilter_event_isbase = value; }
    inline void setKonsole__RegExpFilter_EventFilter_IsBase(bool value) const { konsole__regexpfilter_eventfilter_isbase = value; }
    inline void setKonsole__RegExpFilter_TimerEvent_IsBase(bool value) const { konsole__regexpfilter_timerevent_isbase = value; }
    inline void setKonsole__RegExpFilter_ChildEvent_IsBase(bool value) const { konsole__regexpfilter_childevent_isbase = value; }
    inline void setKonsole__RegExpFilter_CustomEvent_IsBase(bool value) const { konsole__regexpfilter_customevent_isbase = value; }
    inline void setKonsole__RegExpFilter_ConnectNotify_IsBase(bool value) const { konsole__regexpfilter_connectnotify_isbase = value; }
    inline void setKonsole__RegExpFilter_DisconnectNotify_IsBase(bool value) const { konsole__regexpfilter_disconnectnotify_isbase = value; }
    inline void setKonsole__RegExpFilter_AddHotSpot_IsBase(bool value) const { konsole__regexpfilter_addhotspot_isbase = value; }
    inline void setKonsole__RegExpFilter_Buffer_IsBase(bool value) const { konsole__regexpfilter_buffer_isbase = value; }
    inline void setKonsole__RegExpFilter_GetLineColumn_IsBase(bool value) const { konsole__regexpfilter_getlinecolumn_isbase = value; }
    inline void setKonsole__RegExpFilter_Sender_IsBase(bool value) const { konsole__regexpfilter_sender_isbase = value; }
    inline void setKonsole__RegExpFilter_SenderSignalIndex_IsBase(bool value) const { konsole__regexpfilter_sendersignalindex_isbase = value; }
    inline void setKonsole__RegExpFilter_Receivers_IsBase(bool value) const { konsole__regexpfilter_receivers_isbase = value; }
    inline void setKonsole__RegExpFilter_IsSignalConnected_IsBase(bool value) const { konsole__regexpfilter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__regexpfilter_process_isbase) {
            konsole__regexpfilter_process_isbase = false;
            Konsole__RegExpFilter::process();
        } else if (konsole__regexpfilter_process_callback != nullptr) {
            konsole__regexpfilter_process_callback();
        } else {
            Konsole__RegExpFilter::process();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int startLine, int startColumn, int endLine, int endColumn) override {
        if (konsole__regexpfilter_newhotspot_isbase) {
            konsole__regexpfilter_newhotspot_isbase = false;
            return Konsole__RegExpFilter::newHotSpot(startLine, startColumn, endLine, endColumn);
        } else if (konsole__regexpfilter_newhotspot_callback != nullptr) {
            int cbval1 = startLine;
            int cbval2 = startColumn;
            int cbval3 = endLine;
            int cbval4 = endColumn;

            Konsole__RegExpFilter__HotSpot* callback_ret = konsole__regexpfilter_newhotspot_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return Konsole__RegExpFilter::newHotSpot(startLine, startColumn, endLine, endColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__regexpfilter_metacall_isbase) {
            konsole__regexpfilter_metacall_isbase = false;
            return Konsole__RegExpFilter::qt_metacall(param1, param2, param3);
        } else if (konsole__regexpfilter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = konsole__regexpfilter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__RegExpFilter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__regexpfilter_event_isbase) {
            konsole__regexpfilter_event_isbase = false;
            return Konsole__RegExpFilter::event(event);
        } else if (konsole__regexpfilter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = konsole__regexpfilter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__RegExpFilter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__regexpfilter_eventfilter_isbase) {
            konsole__regexpfilter_eventfilter_isbase = false;
            return Konsole__RegExpFilter::eventFilter(watched, event);
        } else if (konsole__regexpfilter_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = konsole__regexpfilter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Konsole__RegExpFilter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__regexpfilter_timerevent_isbase) {
            konsole__regexpfilter_timerevent_isbase = false;
            Konsole__RegExpFilter::timerEvent(event);
        } else if (konsole__regexpfilter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            konsole__regexpfilter_timerevent_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__regexpfilter_childevent_isbase) {
            konsole__regexpfilter_childevent_isbase = false;
            Konsole__RegExpFilter::childEvent(event);
        } else if (konsole__regexpfilter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            konsole__regexpfilter_childevent_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__regexpfilter_customevent_isbase) {
            konsole__regexpfilter_customevent_isbase = false;
            Konsole__RegExpFilter::customEvent(event);
        } else if (konsole__regexpfilter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            konsole__regexpfilter_customevent_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_connectnotify_isbase) {
            konsole__regexpfilter_connectnotify_isbase = false;
            Konsole__RegExpFilter::connectNotify(signal);
        } else if (konsole__regexpfilter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__regexpfilter_connectnotify_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_disconnectnotify_isbase) {
            konsole__regexpfilter_disconnectnotify_isbase = false;
            Konsole__RegExpFilter::disconnectNotify(signal);
        } else if (konsole__regexpfilter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__regexpfilter_disconnectnotify_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__regexpfilter_addhotspot_isbase) {
            konsole__regexpfilter_addhotspot_isbase = false;
            Konsole__RegExpFilter::addHotSpot(param1);
        } else if (konsole__regexpfilter_addhotspot_callback != nullptr) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            konsole__regexpfilter_addhotspot_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter::addHotSpot(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__regexpfilter_buffer_isbase) {
            konsole__regexpfilter_buffer_isbase = false;
            return Konsole__RegExpFilter::buffer();
        } else if (konsole__regexpfilter_buffer_callback != nullptr) {
            const char* callback_ret = konsole__regexpfilter_buffer_callback();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        } else {
            return Konsole__RegExpFilter::buffer();
        }
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__regexpfilter_getlinecolumn_isbase) {
            konsole__regexpfilter_getlinecolumn_isbase = false;
            Konsole__RegExpFilter::getLineColumn(position, startLine, startColumn);
        } else if (konsole__regexpfilter_getlinecolumn_callback != nullptr) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            konsole__regexpfilter_getlinecolumn_callback(this, cbval1, cbval2, cbval3);
        } else {
            Konsole__RegExpFilter::getLineColumn(position, startLine, startColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__regexpfilter_sender_isbase) {
            konsole__regexpfilter_sender_isbase = false;
            return Konsole__RegExpFilter::sender();
        } else if (konsole__regexpfilter_sender_callback != nullptr) {
            QObject* callback_ret = konsole__regexpfilter_sender_callback();
            return callback_ret;
        } else {
            return Konsole__RegExpFilter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__regexpfilter_sendersignalindex_isbase) {
            konsole__regexpfilter_sendersignalindex_isbase = false;
            return Konsole__RegExpFilter::senderSignalIndex();
        } else if (konsole__regexpfilter_sendersignalindex_callback != nullptr) {
            int callback_ret = konsole__regexpfilter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__RegExpFilter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__regexpfilter_receivers_isbase) {
            konsole__regexpfilter_receivers_isbase = false;
            return Konsole__RegExpFilter::receivers(signal);
        } else if (konsole__regexpfilter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = konsole__regexpfilter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__RegExpFilter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__regexpfilter_issignalconnected_isbase) {
            konsole__regexpfilter_issignalconnected_isbase = false;
            return Konsole__RegExpFilter::isSignalConnected(signal);
        } else if (konsole__regexpfilter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = konsole__regexpfilter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__RegExpFilter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_NewHotSpot(Konsole::RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
    friend Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_QBaseNewHotSpot(Konsole::RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
    friend void Konsole__RegExpFilter_TimerEvent(Konsole::RegExpFilter* self, QTimerEvent* event);
    friend void Konsole__RegExpFilter_QBaseTimerEvent(Konsole::RegExpFilter* self, QTimerEvent* event);
    friend void Konsole__RegExpFilter_ChildEvent(Konsole::RegExpFilter* self, QChildEvent* event);
    friend void Konsole__RegExpFilter_QBaseChildEvent(Konsole::RegExpFilter* self, QChildEvent* event);
    friend void Konsole__RegExpFilter_CustomEvent(Konsole::RegExpFilter* self, QEvent* event);
    friend void Konsole__RegExpFilter_QBaseCustomEvent(Konsole::RegExpFilter* self, QEvent* event);
    friend void Konsole__RegExpFilter_ConnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_QBaseConnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_DisconnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_QBaseDisconnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_AddHotSpot(Konsole::RegExpFilter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__RegExpFilter_QBaseAddHotSpot(Konsole::RegExpFilter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__RegExpFilter_Buffer(Konsole::RegExpFilter* self);
    friend libqt_string Konsole__RegExpFilter_QBaseBuffer(Konsole::RegExpFilter* self);
    friend void Konsole__RegExpFilter_GetLineColumn(Konsole::RegExpFilter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__RegExpFilter_QBaseGetLineColumn(Konsole::RegExpFilter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__RegExpFilter_Sender(const Konsole::RegExpFilter* self);
    friend QObject* Konsole__RegExpFilter_QBaseSender(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_SenderSignalIndex(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_QBaseSenderSignalIndex(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_Receivers(const Konsole::RegExpFilter* self, const char* signal);
    friend int Konsole__RegExpFilter_QBaseReceivers(const Konsole::RegExpFilter* self, const char* signal);
    friend bool Konsole__RegExpFilter_IsSignalConnected(const Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend bool Konsole__RegExpFilter_QBaseIsSignalConnected(const Konsole::RegExpFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::UrlFilter so that we can call protected methods
class VirtualKonsoleUrlFilter final : public Konsole::UrlFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleUrlFilter = true;

    // Virtual class public types (including callbacks)
    using Konsole__UrlFilter_Metacall_Callback = int (*)(Konsole__UrlFilter*, int, int, void**);
    using Konsole__UrlFilter_NewHotSpot_Callback = Konsole__RegExpFilter__HotSpot* (*)(Konsole__UrlFilter*, int, int, int, int);
    using Konsole__UrlFilter_Process_Callback = void (*)();
    using Konsole__UrlFilter_Event_Callback = bool (*)(Konsole__UrlFilter*, QEvent*);
    using Konsole__UrlFilter_EventFilter_Callback = bool (*)(Konsole__UrlFilter*, QObject*, QEvent*);
    using Konsole__UrlFilter_TimerEvent_Callback = void (*)(Konsole__UrlFilter*, QTimerEvent*);
    using Konsole__UrlFilter_ChildEvent_Callback = void (*)(Konsole__UrlFilter*, QChildEvent*);
    using Konsole__UrlFilter_CustomEvent_Callback = void (*)(Konsole__UrlFilter*, QEvent*);
    using Konsole__UrlFilter_ConnectNotify_Callback = void (*)(Konsole__UrlFilter*, QMetaMethod*);
    using Konsole__UrlFilter_DisconnectNotify_Callback = void (*)(Konsole__UrlFilter*, QMetaMethod*);
    using Konsole__UrlFilter_AddHotSpot_Callback = void (*)(Konsole__UrlFilter*, Konsole__Filter__HotSpot*);
    using Konsole__UrlFilter_Buffer_Callback = const char* (*)();
    using Konsole__UrlFilter_GetLineColumn_Callback = void (*)(Konsole__UrlFilter*, int, int*, int*);
    using Konsole__UrlFilter_Sender_Callback = QObject* (*)();
    using Konsole__UrlFilter_SenderSignalIndex_Callback = int (*)();
    using Konsole__UrlFilter_Receivers_Callback = int (*)(const Konsole__UrlFilter*, const char*);
    using Konsole__UrlFilter_IsSignalConnected_Callback = bool (*)(const Konsole__UrlFilter*, QMetaMethod*);

  protected:
    // Instance callback storage
    Konsole__UrlFilter_Metacall_Callback konsole__urlfilter_metacall_callback = nullptr;
    Konsole__UrlFilter_NewHotSpot_Callback konsole__urlfilter_newhotspot_callback = nullptr;
    Konsole__UrlFilter_Process_Callback konsole__urlfilter_process_callback = nullptr;
    Konsole__UrlFilter_Event_Callback konsole__urlfilter_event_callback = nullptr;
    Konsole__UrlFilter_EventFilter_Callback konsole__urlfilter_eventfilter_callback = nullptr;
    Konsole__UrlFilter_TimerEvent_Callback konsole__urlfilter_timerevent_callback = nullptr;
    Konsole__UrlFilter_ChildEvent_Callback konsole__urlfilter_childevent_callback = nullptr;
    Konsole__UrlFilter_CustomEvent_Callback konsole__urlfilter_customevent_callback = nullptr;
    Konsole__UrlFilter_ConnectNotify_Callback konsole__urlfilter_connectnotify_callback = nullptr;
    Konsole__UrlFilter_DisconnectNotify_Callback konsole__urlfilter_disconnectnotify_callback = nullptr;
    Konsole__UrlFilter_AddHotSpot_Callback konsole__urlfilter_addhotspot_callback = nullptr;
    Konsole__UrlFilter_Buffer_Callback konsole__urlfilter_buffer_callback = nullptr;
    Konsole__UrlFilter_GetLineColumn_Callback konsole__urlfilter_getlinecolumn_callback = nullptr;
    Konsole__UrlFilter_Sender_Callback konsole__urlfilter_sender_callback = nullptr;
    Konsole__UrlFilter_SenderSignalIndex_Callback konsole__urlfilter_sendersignalindex_callback = nullptr;
    Konsole__UrlFilter_Receivers_Callback konsole__urlfilter_receivers_callback = nullptr;
    Konsole__UrlFilter_IsSignalConnected_Callback konsole__urlfilter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool konsole__urlfilter_metacall_isbase = false;
    mutable bool konsole__urlfilter_newhotspot_isbase = false;
    mutable bool konsole__urlfilter_process_isbase = false;
    mutable bool konsole__urlfilter_event_isbase = false;
    mutable bool konsole__urlfilter_eventfilter_isbase = false;
    mutable bool konsole__urlfilter_timerevent_isbase = false;
    mutable bool konsole__urlfilter_childevent_isbase = false;
    mutable bool konsole__urlfilter_customevent_isbase = false;
    mutable bool konsole__urlfilter_connectnotify_isbase = false;
    mutable bool konsole__urlfilter_disconnectnotify_isbase = false;
    mutable bool konsole__urlfilter_addhotspot_isbase = false;
    mutable bool konsole__urlfilter_buffer_isbase = false;
    mutable bool konsole__urlfilter_getlinecolumn_isbase = false;
    mutable bool konsole__urlfilter_sender_isbase = false;
    mutable bool konsole__urlfilter_sendersignalindex_isbase = false;
    mutable bool konsole__urlfilter_receivers_isbase = false;
    mutable bool konsole__urlfilter_issignalconnected_isbase = false;

  public:
    VirtualKonsoleUrlFilter() : Konsole::UrlFilter() {};

    ~VirtualKonsoleUrlFilter() {
        konsole__urlfilter_metacall_callback = nullptr;
        konsole__urlfilter_newhotspot_callback = nullptr;
        konsole__urlfilter_process_callback = nullptr;
        konsole__urlfilter_event_callback = nullptr;
        konsole__urlfilter_eventfilter_callback = nullptr;
        konsole__urlfilter_timerevent_callback = nullptr;
        konsole__urlfilter_childevent_callback = nullptr;
        konsole__urlfilter_customevent_callback = nullptr;
        konsole__urlfilter_connectnotify_callback = nullptr;
        konsole__urlfilter_disconnectnotify_callback = nullptr;
        konsole__urlfilter_addhotspot_callback = nullptr;
        konsole__urlfilter_buffer_callback = nullptr;
        konsole__urlfilter_getlinecolumn_callback = nullptr;
        konsole__urlfilter_sender_callback = nullptr;
        konsole__urlfilter_sendersignalindex_callback = nullptr;
        konsole__urlfilter_receivers_callback = nullptr;
        konsole__urlfilter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__UrlFilter_Metacall_Callback(Konsole__UrlFilter_Metacall_Callback cb) { konsole__urlfilter_metacall_callback = cb; }
    inline void setKonsole__UrlFilter_NewHotSpot_Callback(Konsole__UrlFilter_NewHotSpot_Callback cb) { konsole__urlfilter_newhotspot_callback = cb; }
    inline void setKonsole__UrlFilter_Process_Callback(Konsole__UrlFilter_Process_Callback cb) { konsole__urlfilter_process_callback = cb; }
    inline void setKonsole__UrlFilter_Event_Callback(Konsole__UrlFilter_Event_Callback cb) { konsole__urlfilter_event_callback = cb; }
    inline void setKonsole__UrlFilter_EventFilter_Callback(Konsole__UrlFilter_EventFilter_Callback cb) { konsole__urlfilter_eventfilter_callback = cb; }
    inline void setKonsole__UrlFilter_TimerEvent_Callback(Konsole__UrlFilter_TimerEvent_Callback cb) { konsole__urlfilter_timerevent_callback = cb; }
    inline void setKonsole__UrlFilter_ChildEvent_Callback(Konsole__UrlFilter_ChildEvent_Callback cb) { konsole__urlfilter_childevent_callback = cb; }
    inline void setKonsole__UrlFilter_CustomEvent_Callback(Konsole__UrlFilter_CustomEvent_Callback cb) { konsole__urlfilter_customevent_callback = cb; }
    inline void setKonsole__UrlFilter_ConnectNotify_Callback(Konsole__UrlFilter_ConnectNotify_Callback cb) { konsole__urlfilter_connectnotify_callback = cb; }
    inline void setKonsole__UrlFilter_DisconnectNotify_Callback(Konsole__UrlFilter_DisconnectNotify_Callback cb) { konsole__urlfilter_disconnectnotify_callback = cb; }
    inline void setKonsole__UrlFilter_AddHotSpot_Callback(Konsole__UrlFilter_AddHotSpot_Callback cb) { konsole__urlfilter_addhotspot_callback = cb; }
    inline void setKonsole__UrlFilter_Buffer_Callback(Konsole__UrlFilter_Buffer_Callback cb) { konsole__urlfilter_buffer_callback = cb; }
    inline void setKonsole__UrlFilter_GetLineColumn_Callback(Konsole__UrlFilter_GetLineColumn_Callback cb) { konsole__urlfilter_getlinecolumn_callback = cb; }
    inline void setKonsole__UrlFilter_Sender_Callback(Konsole__UrlFilter_Sender_Callback cb) { konsole__urlfilter_sender_callback = cb; }
    inline void setKonsole__UrlFilter_SenderSignalIndex_Callback(Konsole__UrlFilter_SenderSignalIndex_Callback cb) { konsole__urlfilter_sendersignalindex_callback = cb; }
    inline void setKonsole__UrlFilter_Receivers_Callback(Konsole__UrlFilter_Receivers_Callback cb) { konsole__urlfilter_receivers_callback = cb; }
    inline void setKonsole__UrlFilter_IsSignalConnected_Callback(Konsole__UrlFilter_IsSignalConnected_Callback cb) { konsole__urlfilter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKonsole__UrlFilter_Metacall_IsBase(bool value) const { konsole__urlfilter_metacall_isbase = value; }
    inline void setKonsole__UrlFilter_NewHotSpot_IsBase(bool value) const { konsole__urlfilter_newhotspot_isbase = value; }
    inline void setKonsole__UrlFilter_Process_IsBase(bool value) const { konsole__urlfilter_process_isbase = value; }
    inline void setKonsole__UrlFilter_Event_IsBase(bool value) const { konsole__urlfilter_event_isbase = value; }
    inline void setKonsole__UrlFilter_EventFilter_IsBase(bool value) const { konsole__urlfilter_eventfilter_isbase = value; }
    inline void setKonsole__UrlFilter_TimerEvent_IsBase(bool value) const { konsole__urlfilter_timerevent_isbase = value; }
    inline void setKonsole__UrlFilter_ChildEvent_IsBase(bool value) const { konsole__urlfilter_childevent_isbase = value; }
    inline void setKonsole__UrlFilter_CustomEvent_IsBase(bool value) const { konsole__urlfilter_customevent_isbase = value; }
    inline void setKonsole__UrlFilter_ConnectNotify_IsBase(bool value) const { konsole__urlfilter_connectnotify_isbase = value; }
    inline void setKonsole__UrlFilter_DisconnectNotify_IsBase(bool value) const { konsole__urlfilter_disconnectnotify_isbase = value; }
    inline void setKonsole__UrlFilter_AddHotSpot_IsBase(bool value) const { konsole__urlfilter_addhotspot_isbase = value; }
    inline void setKonsole__UrlFilter_Buffer_IsBase(bool value) const { konsole__urlfilter_buffer_isbase = value; }
    inline void setKonsole__UrlFilter_GetLineColumn_IsBase(bool value) const { konsole__urlfilter_getlinecolumn_isbase = value; }
    inline void setKonsole__UrlFilter_Sender_IsBase(bool value) const { konsole__urlfilter_sender_isbase = value; }
    inline void setKonsole__UrlFilter_SenderSignalIndex_IsBase(bool value) const { konsole__urlfilter_sendersignalindex_isbase = value; }
    inline void setKonsole__UrlFilter_Receivers_IsBase(bool value) const { konsole__urlfilter_receivers_isbase = value; }
    inline void setKonsole__UrlFilter_IsSignalConnected_IsBase(bool value) const { konsole__urlfilter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__urlfilter_metacall_isbase) {
            konsole__urlfilter_metacall_isbase = false;
            return Konsole__UrlFilter::qt_metacall(param1, param2, param3);
        } else if (konsole__urlfilter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = konsole__urlfilter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__UrlFilter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int param1, int param2, int param3, int param4) override {
        if (konsole__urlfilter_newhotspot_isbase) {
            konsole__urlfilter_newhotspot_isbase = false;
            return Konsole__UrlFilter::newHotSpot(param1, param2, param3, param4);
        } else if (konsole__urlfilter_newhotspot_callback != nullptr) {
            int cbval1 = param1;
            int cbval2 = param2;
            int cbval3 = param3;
            int cbval4 = param4;

            Konsole__RegExpFilter__HotSpot* callback_ret = konsole__urlfilter_newhotspot_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return Konsole__UrlFilter::newHotSpot(param1, param2, param3, param4);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__urlfilter_process_isbase) {
            konsole__urlfilter_process_isbase = false;
            Konsole__UrlFilter::process();
        } else if (konsole__urlfilter_process_callback != nullptr) {
            konsole__urlfilter_process_callback();
        } else {
            Konsole__UrlFilter::process();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__urlfilter_event_isbase) {
            konsole__urlfilter_event_isbase = false;
            return Konsole__UrlFilter::event(event);
        } else if (konsole__urlfilter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = konsole__urlfilter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__UrlFilter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__urlfilter_eventfilter_isbase) {
            konsole__urlfilter_eventfilter_isbase = false;
            return Konsole__UrlFilter::eventFilter(watched, event);
        } else if (konsole__urlfilter_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = konsole__urlfilter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Konsole__UrlFilter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__urlfilter_timerevent_isbase) {
            konsole__urlfilter_timerevent_isbase = false;
            Konsole__UrlFilter::timerEvent(event);
        } else if (konsole__urlfilter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            konsole__urlfilter_timerevent_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__urlfilter_childevent_isbase) {
            konsole__urlfilter_childevent_isbase = false;
            Konsole__UrlFilter::childEvent(event);
        } else if (konsole__urlfilter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            konsole__urlfilter_childevent_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__urlfilter_customevent_isbase) {
            konsole__urlfilter_customevent_isbase = false;
            Konsole__UrlFilter::customEvent(event);
        } else if (konsole__urlfilter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            konsole__urlfilter_customevent_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_connectnotify_isbase) {
            konsole__urlfilter_connectnotify_isbase = false;
            Konsole__UrlFilter::connectNotify(signal);
        } else if (konsole__urlfilter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__urlfilter_connectnotify_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_disconnectnotify_isbase) {
            konsole__urlfilter_disconnectnotify_isbase = false;
            Konsole__UrlFilter::disconnectNotify(signal);
        } else if (konsole__urlfilter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__urlfilter_disconnectnotify_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__urlfilter_addhotspot_isbase) {
            konsole__urlfilter_addhotspot_isbase = false;
            Konsole__UrlFilter::addHotSpot(param1);
        } else if (konsole__urlfilter_addhotspot_callback != nullptr) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            konsole__urlfilter_addhotspot_callback(this, cbval1);
        } else {
            Konsole__UrlFilter::addHotSpot(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__urlfilter_buffer_isbase) {
            konsole__urlfilter_buffer_isbase = false;
            return Konsole__UrlFilter::buffer();
        } else if (konsole__urlfilter_buffer_callback != nullptr) {
            const char* callback_ret = konsole__urlfilter_buffer_callback();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        } else {
            return Konsole__UrlFilter::buffer();
        }
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__urlfilter_getlinecolumn_isbase) {
            konsole__urlfilter_getlinecolumn_isbase = false;
            Konsole__UrlFilter::getLineColumn(position, startLine, startColumn);
        } else if (konsole__urlfilter_getlinecolumn_callback != nullptr) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            konsole__urlfilter_getlinecolumn_callback(this, cbval1, cbval2, cbval3);
        } else {
            Konsole__UrlFilter::getLineColumn(position, startLine, startColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__urlfilter_sender_isbase) {
            konsole__urlfilter_sender_isbase = false;
            return Konsole__UrlFilter::sender();
        } else if (konsole__urlfilter_sender_callback != nullptr) {
            QObject* callback_ret = konsole__urlfilter_sender_callback();
            return callback_ret;
        } else {
            return Konsole__UrlFilter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__urlfilter_sendersignalindex_isbase) {
            konsole__urlfilter_sendersignalindex_isbase = false;
            return Konsole__UrlFilter::senderSignalIndex();
        } else if (konsole__urlfilter_sendersignalindex_callback != nullptr) {
            int callback_ret = konsole__urlfilter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__UrlFilter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__urlfilter_receivers_isbase) {
            konsole__urlfilter_receivers_isbase = false;
            return Konsole__UrlFilter::receivers(signal);
        } else if (konsole__urlfilter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = konsole__urlfilter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__UrlFilter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__urlfilter_issignalconnected_isbase) {
            konsole__urlfilter_issignalconnected_isbase = false;
            return Konsole__UrlFilter::isSignalConnected(signal);
        } else if (konsole__urlfilter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = konsole__urlfilter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__UrlFilter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_NewHotSpot(Konsole::UrlFilter* self, int param1, int param2, int param3, int param4);
    friend Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_QBaseNewHotSpot(Konsole::UrlFilter* self, int param1, int param2, int param3, int param4);
    friend void Konsole__UrlFilter_TimerEvent(Konsole::UrlFilter* self, QTimerEvent* event);
    friend void Konsole__UrlFilter_QBaseTimerEvent(Konsole::UrlFilter* self, QTimerEvent* event);
    friend void Konsole__UrlFilter_ChildEvent(Konsole::UrlFilter* self, QChildEvent* event);
    friend void Konsole__UrlFilter_QBaseChildEvent(Konsole::UrlFilter* self, QChildEvent* event);
    friend void Konsole__UrlFilter_CustomEvent(Konsole::UrlFilter* self, QEvent* event);
    friend void Konsole__UrlFilter_QBaseCustomEvent(Konsole::UrlFilter* self, QEvent* event);
    friend void Konsole__UrlFilter_ConnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_QBaseConnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_DisconnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_QBaseDisconnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_AddHotSpot(Konsole::UrlFilter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__UrlFilter_QBaseAddHotSpot(Konsole::UrlFilter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__UrlFilter_Buffer(Konsole::UrlFilter* self);
    friend libqt_string Konsole__UrlFilter_QBaseBuffer(Konsole::UrlFilter* self);
    friend void Konsole__UrlFilter_GetLineColumn(Konsole::UrlFilter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__UrlFilter_QBaseGetLineColumn(Konsole::UrlFilter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__UrlFilter_Sender(const Konsole::UrlFilter* self);
    friend QObject* Konsole__UrlFilter_QBaseSender(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_SenderSignalIndex(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_QBaseSenderSignalIndex(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_Receivers(const Konsole::UrlFilter* self, const char* signal);
    friend int Konsole__UrlFilter_QBaseReceivers(const Konsole::UrlFilter* self, const char* signal);
    friend bool Konsole__UrlFilter_IsSignalConnected(const Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend bool Konsole__UrlFilter_QBaseIsSignalConnected(const Konsole::UrlFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::FilterObject so that we can call protected methods
class VirtualKonsoleFilterObject final : public Konsole::FilterObject {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleFilterObject = true;

    // Virtual class public types (including callbacks)
    using Konsole__FilterObject_Metacall_Callback = int (*)(Konsole__FilterObject*, int, int, void**);
    using Konsole__FilterObject_Event_Callback = bool (*)(Konsole__FilterObject*, QEvent*);
    using Konsole__FilterObject_EventFilter_Callback = bool (*)(Konsole__FilterObject*, QObject*, QEvent*);
    using Konsole__FilterObject_TimerEvent_Callback = void (*)(Konsole__FilterObject*, QTimerEvent*);
    using Konsole__FilterObject_ChildEvent_Callback = void (*)(Konsole__FilterObject*, QChildEvent*);
    using Konsole__FilterObject_CustomEvent_Callback = void (*)(Konsole__FilterObject*, QEvent*);
    using Konsole__FilterObject_ConnectNotify_Callback = void (*)(Konsole__FilterObject*, QMetaMethod*);
    using Konsole__FilterObject_DisconnectNotify_Callback = void (*)(Konsole__FilterObject*, QMetaMethod*);
    using Konsole__FilterObject_Sender_Callback = QObject* (*)();
    using Konsole__FilterObject_SenderSignalIndex_Callback = int (*)();
    using Konsole__FilterObject_Receivers_Callback = int (*)(const Konsole__FilterObject*, const char*);
    using Konsole__FilterObject_IsSignalConnected_Callback = bool (*)(const Konsole__FilterObject*, QMetaMethod*);

  protected:
    // Instance callback storage
    Konsole__FilterObject_Metacall_Callback konsole__filterobject_metacall_callback = nullptr;
    Konsole__FilterObject_Event_Callback konsole__filterobject_event_callback = nullptr;
    Konsole__FilterObject_EventFilter_Callback konsole__filterobject_eventfilter_callback = nullptr;
    Konsole__FilterObject_TimerEvent_Callback konsole__filterobject_timerevent_callback = nullptr;
    Konsole__FilterObject_ChildEvent_Callback konsole__filterobject_childevent_callback = nullptr;
    Konsole__FilterObject_CustomEvent_Callback konsole__filterobject_customevent_callback = nullptr;
    Konsole__FilterObject_ConnectNotify_Callback konsole__filterobject_connectnotify_callback = nullptr;
    Konsole__FilterObject_DisconnectNotify_Callback konsole__filterobject_disconnectnotify_callback = nullptr;
    Konsole__FilterObject_Sender_Callback konsole__filterobject_sender_callback = nullptr;
    Konsole__FilterObject_SenderSignalIndex_Callback konsole__filterobject_sendersignalindex_callback = nullptr;
    Konsole__FilterObject_Receivers_Callback konsole__filterobject_receivers_callback = nullptr;
    Konsole__FilterObject_IsSignalConnected_Callback konsole__filterobject_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool konsole__filterobject_metacall_isbase = false;
    mutable bool konsole__filterobject_event_isbase = false;
    mutable bool konsole__filterobject_eventfilter_isbase = false;
    mutable bool konsole__filterobject_timerevent_isbase = false;
    mutable bool konsole__filterobject_childevent_isbase = false;
    mutable bool konsole__filterobject_customevent_isbase = false;
    mutable bool konsole__filterobject_connectnotify_isbase = false;
    mutable bool konsole__filterobject_disconnectnotify_isbase = false;
    mutable bool konsole__filterobject_sender_isbase = false;
    mutable bool konsole__filterobject_sendersignalindex_isbase = false;
    mutable bool konsole__filterobject_receivers_isbase = false;
    mutable bool konsole__filterobject_issignalconnected_isbase = false;

  public:
    VirtualKonsoleFilterObject(Konsole::Filter::HotSpot* filter) : Konsole::FilterObject(filter) {};

    ~VirtualKonsoleFilterObject() {
        konsole__filterobject_metacall_callback = nullptr;
        konsole__filterobject_event_callback = nullptr;
        konsole__filterobject_eventfilter_callback = nullptr;
        konsole__filterobject_timerevent_callback = nullptr;
        konsole__filterobject_childevent_callback = nullptr;
        konsole__filterobject_customevent_callback = nullptr;
        konsole__filterobject_connectnotify_callback = nullptr;
        konsole__filterobject_disconnectnotify_callback = nullptr;
        konsole__filterobject_sender_callback = nullptr;
        konsole__filterobject_sendersignalindex_callback = nullptr;
        konsole__filterobject_receivers_callback = nullptr;
        konsole__filterobject_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__FilterObject_Metacall_Callback(Konsole__FilterObject_Metacall_Callback cb) { konsole__filterobject_metacall_callback = cb; }
    inline void setKonsole__FilterObject_Event_Callback(Konsole__FilterObject_Event_Callback cb) { konsole__filterobject_event_callback = cb; }
    inline void setKonsole__FilterObject_EventFilter_Callback(Konsole__FilterObject_EventFilter_Callback cb) { konsole__filterobject_eventfilter_callback = cb; }
    inline void setKonsole__FilterObject_TimerEvent_Callback(Konsole__FilterObject_TimerEvent_Callback cb) { konsole__filterobject_timerevent_callback = cb; }
    inline void setKonsole__FilterObject_ChildEvent_Callback(Konsole__FilterObject_ChildEvent_Callback cb) { konsole__filterobject_childevent_callback = cb; }
    inline void setKonsole__FilterObject_CustomEvent_Callback(Konsole__FilterObject_CustomEvent_Callback cb) { konsole__filterobject_customevent_callback = cb; }
    inline void setKonsole__FilterObject_ConnectNotify_Callback(Konsole__FilterObject_ConnectNotify_Callback cb) { konsole__filterobject_connectnotify_callback = cb; }
    inline void setKonsole__FilterObject_DisconnectNotify_Callback(Konsole__FilterObject_DisconnectNotify_Callback cb) { konsole__filterobject_disconnectnotify_callback = cb; }
    inline void setKonsole__FilterObject_Sender_Callback(Konsole__FilterObject_Sender_Callback cb) { konsole__filterobject_sender_callback = cb; }
    inline void setKonsole__FilterObject_SenderSignalIndex_Callback(Konsole__FilterObject_SenderSignalIndex_Callback cb) { konsole__filterobject_sendersignalindex_callback = cb; }
    inline void setKonsole__FilterObject_Receivers_Callback(Konsole__FilterObject_Receivers_Callback cb) { konsole__filterobject_receivers_callback = cb; }
    inline void setKonsole__FilterObject_IsSignalConnected_Callback(Konsole__FilterObject_IsSignalConnected_Callback cb) { konsole__filterobject_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKonsole__FilterObject_Metacall_IsBase(bool value) const { konsole__filterobject_metacall_isbase = value; }
    inline void setKonsole__FilterObject_Event_IsBase(bool value) const { konsole__filterobject_event_isbase = value; }
    inline void setKonsole__FilterObject_EventFilter_IsBase(bool value) const { konsole__filterobject_eventfilter_isbase = value; }
    inline void setKonsole__FilterObject_TimerEvent_IsBase(bool value) const { konsole__filterobject_timerevent_isbase = value; }
    inline void setKonsole__FilterObject_ChildEvent_IsBase(bool value) const { konsole__filterobject_childevent_isbase = value; }
    inline void setKonsole__FilterObject_CustomEvent_IsBase(bool value) const { konsole__filterobject_customevent_isbase = value; }
    inline void setKonsole__FilterObject_ConnectNotify_IsBase(bool value) const { konsole__filterobject_connectnotify_isbase = value; }
    inline void setKonsole__FilterObject_DisconnectNotify_IsBase(bool value) const { konsole__filterobject_disconnectnotify_isbase = value; }
    inline void setKonsole__FilterObject_Sender_IsBase(bool value) const { konsole__filterobject_sender_isbase = value; }
    inline void setKonsole__FilterObject_SenderSignalIndex_IsBase(bool value) const { konsole__filterobject_sendersignalindex_isbase = value; }
    inline void setKonsole__FilterObject_Receivers_IsBase(bool value) const { konsole__filterobject_receivers_isbase = value; }
    inline void setKonsole__FilterObject_IsSignalConnected_IsBase(bool value) const { konsole__filterobject_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filterobject_metacall_isbase) {
            konsole__filterobject_metacall_isbase = false;
            return Konsole__FilterObject::qt_metacall(param1, param2, param3);
        } else if (konsole__filterobject_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = konsole__filterobject_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__FilterObject::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filterobject_event_isbase) {
            konsole__filterobject_event_isbase = false;
            return Konsole__FilterObject::event(event);
        } else if (konsole__filterobject_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = konsole__filterobject_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__FilterObject::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filterobject_eventfilter_isbase) {
            konsole__filterobject_eventfilter_isbase = false;
            return Konsole__FilterObject::eventFilter(watched, event);
        } else if (konsole__filterobject_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = konsole__filterobject_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Konsole__FilterObject::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filterobject_timerevent_isbase) {
            konsole__filterobject_timerevent_isbase = false;
            Konsole__FilterObject::timerEvent(event);
        } else if (konsole__filterobject_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            konsole__filterobject_timerevent_callback(this, cbval1);
        } else {
            Konsole__FilterObject::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filterobject_childevent_isbase) {
            konsole__filterobject_childevent_isbase = false;
            Konsole__FilterObject::childEvent(event);
        } else if (konsole__filterobject_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            konsole__filterobject_childevent_callback(this, cbval1);
        } else {
            Konsole__FilterObject::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filterobject_customevent_isbase) {
            konsole__filterobject_customevent_isbase = false;
            Konsole__FilterObject::customEvent(event);
        } else if (konsole__filterobject_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            konsole__filterobject_customevent_callback(this, cbval1);
        } else {
            Konsole__FilterObject::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_connectnotify_isbase) {
            konsole__filterobject_connectnotify_isbase = false;
            Konsole__FilterObject::connectNotify(signal);
        } else if (konsole__filterobject_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__filterobject_connectnotify_callback(this, cbval1);
        } else {
            Konsole__FilterObject::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_disconnectnotify_isbase) {
            konsole__filterobject_disconnectnotify_isbase = false;
            Konsole__FilterObject::disconnectNotify(signal);
        } else if (konsole__filterobject_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            konsole__filterobject_disconnectnotify_callback(this, cbval1);
        } else {
            Konsole__FilterObject::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__filterobject_sender_isbase) {
            konsole__filterobject_sender_isbase = false;
            return Konsole__FilterObject::sender();
        } else if (konsole__filterobject_sender_callback != nullptr) {
            QObject* callback_ret = konsole__filterobject_sender_callback();
            return callback_ret;
        } else {
            return Konsole__FilterObject::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__filterobject_sendersignalindex_isbase) {
            konsole__filterobject_sendersignalindex_isbase = false;
            return Konsole__FilterObject::senderSignalIndex();
        } else if (konsole__filterobject_sendersignalindex_callback != nullptr) {
            int callback_ret = konsole__filterobject_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__FilterObject::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__filterobject_receivers_isbase) {
            konsole__filterobject_receivers_isbase = false;
            return Konsole__FilterObject::receivers(signal);
        } else if (konsole__filterobject_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = konsole__filterobject_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Konsole__FilterObject::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__filterobject_issignalconnected_isbase) {
            konsole__filterobject_issignalconnected_isbase = false;
            return Konsole__FilterObject::isSignalConnected(signal);
        } else if (konsole__filterobject_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = konsole__filterobject_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Konsole__FilterObject::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Konsole__FilterObject_TimerEvent(Konsole::FilterObject* self, QTimerEvent* event);
    friend void Konsole__FilterObject_QBaseTimerEvent(Konsole::FilterObject* self, QTimerEvent* event);
    friend void Konsole__FilterObject_ChildEvent(Konsole::FilterObject* self, QChildEvent* event);
    friend void Konsole__FilterObject_QBaseChildEvent(Konsole::FilterObject* self, QChildEvent* event);
    friend void Konsole__FilterObject_CustomEvent(Konsole::FilterObject* self, QEvent* event);
    friend void Konsole__FilterObject_QBaseCustomEvent(Konsole::FilterObject* self, QEvent* event);
    friend void Konsole__FilterObject_ConnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_QBaseConnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_DisconnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_QBaseDisconnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend QObject* Konsole__FilterObject_Sender(const Konsole::FilterObject* self);
    friend QObject* Konsole__FilterObject_QBaseSender(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_SenderSignalIndex(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_QBaseSenderSignalIndex(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_Receivers(const Konsole::FilterObject* self, const char* signal);
    friend int Konsole__FilterObject_QBaseReceivers(const Konsole::FilterObject* self, const char* signal);
    friend bool Konsole__FilterObject_IsSignalConnected(const Konsole::FilterObject* self, const QMetaMethod* signal);
    friend bool Konsole__FilterObject_QBaseIsSignalConnected(const Konsole::FilterObject* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::Filter::HotSpot so that we can call protected methods
class VirtualKonsoleFilterHotSpot : public Konsole::Filter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__Filter__HotSpot_Activate_Callback = void (*)(Konsole__Filter__HotSpot*, libqt_string);
    using Konsole__Filter__HotSpot_Actions_Callback = QAction** (*)();
    using Konsole__Filter__HotSpot_SetType_Callback = void (*)(Konsole__Filter__HotSpot*, int);

  protected:
    // Instance callback storage
    Konsole__Filter__HotSpot_Activate_Callback konsole__filter__hotspot_activate_callback = nullptr;
    Konsole__Filter__HotSpot_Actions_Callback konsole__filter__hotspot_actions_callback = nullptr;
    Konsole__Filter__HotSpot_SetType_Callback konsole__filter__hotspot_settype_callback = nullptr;

    // Instance base flags
    mutable bool konsole__filter__hotspot_activate_isbase = false;
    mutable bool konsole__filter__hotspot_actions_isbase = false;
    mutable bool konsole__filter__hotspot_settype_isbase = false;

  public:
    VirtualKonsoleFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::Filter::HotSpot(startLine, startColumn, endLine, endColumn) {};
    VirtualKonsoleFilterHotSpot(const Konsole::Filter::HotSpot& param1) : Konsole::Filter::HotSpot(param1) {};

    ~VirtualKonsoleFilterHotSpot() {
        konsole__filter__hotspot_activate_callback = nullptr;
        konsole__filter__hotspot_actions_callback = nullptr;
        konsole__filter__hotspot_settype_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__Filter__HotSpot_Activate_Callback(Konsole__Filter__HotSpot_Activate_Callback cb) { konsole__filter__hotspot_activate_callback = cb; }
    inline void setKonsole__Filter__HotSpot_Actions_Callback(Konsole__Filter__HotSpot_Actions_Callback cb) { konsole__filter__hotspot_actions_callback = cb; }
    inline void setKonsole__Filter__HotSpot_SetType_Callback(Konsole__Filter__HotSpot_SetType_Callback cb) { konsole__filter__hotspot_settype_callback = cb; }

    // Base flag setters
    inline void setKonsole__Filter__HotSpot_Activate_IsBase(bool value) const { konsole__filter__hotspot_activate_isbase = value; }
    inline void setKonsole__Filter__HotSpot_Actions_IsBase(bool value) const { konsole__filter__hotspot_actions_isbase = value; }
    inline void setKonsole__Filter__HotSpot_SetType_IsBase(bool value) const { konsole__filter__hotspot_settype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__filter__hotspot_activate_callback != nullptr) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            libqt_string action_str;
            action_str.len = action_b.length();
            action_str.data = static_cast<const char*>(malloc(action_str.len + 1));
            memcpy((void*)action_str.data, action_b.data(), action_str.len);
            ((char*)action_str.data)[action_str.len] = '\0';
            libqt_string cbval1 = action_str;

            konsole__filter__hotspot_activate_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__filter__hotspot_actions_isbase) {
            konsole__filter__hotspot_actions_isbase = false;
            return Konsole__Filter__HotSpot::actions();
        } else if (konsole__filter__hotspot_actions_callback != nullptr) {
            QAction** callback_ret = konsole__filter__hotspot_actions_callback();
            QList<QAction*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QAction** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return Konsole__Filter__HotSpot::actions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__filter__hotspot_settype_isbase) {
            konsole__filter__hotspot_settype_isbase = false;
            Konsole__Filter__HotSpot::setType(typeVal);
        } else if (konsole__filter__hotspot_settype_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            konsole__filter__hotspot_settype_callback(this, cbval1);
        } else {
            Konsole__Filter__HotSpot::setType(typeVal);
        }
    }

    // Friend functions
    friend void Konsole__Filter__HotSpot_SetType(Konsole::Filter::HotSpot* self, int typeVal);
    friend void Konsole__Filter__HotSpot_QBaseSetType(Konsole::Filter::HotSpot* self, int typeVal);
};

// This class is a subclass of Konsole::RegExpFilter::HotSpot so that we can call protected methods
class VirtualKonsoleRegExpFilterHotSpot final : public Konsole::RegExpFilter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleRegExpFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__RegExpFilter__HotSpot_Activate_Callback = void (*)(Konsole__RegExpFilter__HotSpot*, libqt_string);
    using Konsole__RegExpFilter__HotSpot_Actions_Callback = QAction** (*)();
    using Konsole__RegExpFilter__HotSpot_SetType_Callback = void (*)(Konsole__RegExpFilter__HotSpot*, int);

  protected:
    // Instance callback storage
    Konsole__RegExpFilter__HotSpot_Activate_Callback konsole__regexpfilter__hotspot_activate_callback = nullptr;
    Konsole__RegExpFilter__HotSpot_Actions_Callback konsole__regexpfilter__hotspot_actions_callback = nullptr;
    Konsole__RegExpFilter__HotSpot_SetType_Callback konsole__regexpfilter__hotspot_settype_callback = nullptr;

    // Instance base flags
    mutable bool konsole__regexpfilter__hotspot_activate_isbase = false;
    mutable bool konsole__regexpfilter__hotspot_actions_isbase = false;
    mutable bool konsole__regexpfilter__hotspot_settype_isbase = false;

  public:
    VirtualKonsoleRegExpFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::RegExpFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};
    VirtualKonsoleRegExpFilterHotSpot(const Konsole::RegExpFilter::HotSpot& param1) : Konsole::RegExpFilter::HotSpot(param1) {};

    ~VirtualKonsoleRegExpFilterHotSpot() {
        konsole__regexpfilter__hotspot_activate_callback = nullptr;
        konsole__regexpfilter__hotspot_actions_callback = nullptr;
        konsole__regexpfilter__hotspot_settype_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__RegExpFilter__HotSpot_Activate_Callback(Konsole__RegExpFilter__HotSpot_Activate_Callback cb) { konsole__regexpfilter__hotspot_activate_callback = cb; }
    inline void setKonsole__RegExpFilter__HotSpot_Actions_Callback(Konsole__RegExpFilter__HotSpot_Actions_Callback cb) { konsole__regexpfilter__hotspot_actions_callback = cb; }
    inline void setKonsole__RegExpFilter__HotSpot_SetType_Callback(Konsole__RegExpFilter__HotSpot_SetType_Callback cb) { konsole__regexpfilter__hotspot_settype_callback = cb; }

    // Base flag setters
    inline void setKonsole__RegExpFilter__HotSpot_Activate_IsBase(bool value) const { konsole__regexpfilter__hotspot_activate_isbase = value; }
    inline void setKonsole__RegExpFilter__HotSpot_Actions_IsBase(bool value) const { konsole__regexpfilter__hotspot_actions_isbase = value; }
    inline void setKonsole__RegExpFilter__HotSpot_SetType_IsBase(bool value) const { konsole__regexpfilter__hotspot_settype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__regexpfilter__hotspot_activate_isbase) {
            konsole__regexpfilter__hotspot_activate_isbase = false;
            Konsole__RegExpFilter__HotSpot::activate(action);
        } else if (konsole__regexpfilter__hotspot_activate_callback != nullptr) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            libqt_string action_str;
            action_str.len = action_b.length();
            action_str.data = static_cast<const char*>(malloc(action_str.len + 1));
            memcpy((void*)action_str.data, action_b.data(), action_str.len);
            ((char*)action_str.data)[action_str.len] = '\0';
            libqt_string cbval1 = action_str;

            konsole__regexpfilter__hotspot_activate_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter__HotSpot::activate(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__regexpfilter__hotspot_actions_isbase) {
            konsole__regexpfilter__hotspot_actions_isbase = false;
            return Konsole__RegExpFilter__HotSpot::actions();
        } else if (konsole__regexpfilter__hotspot_actions_callback != nullptr) {
            QAction** callback_ret = konsole__regexpfilter__hotspot_actions_callback();
            QList<QAction*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QAction** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return Konsole__RegExpFilter__HotSpot::actions();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__regexpfilter__hotspot_settype_isbase) {
            konsole__regexpfilter__hotspot_settype_isbase = false;
            Konsole__RegExpFilter__HotSpot::setType(typeVal);
        } else if (konsole__regexpfilter__hotspot_settype_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            konsole__regexpfilter__hotspot_settype_callback(this, cbval1);
        } else {
            Konsole__RegExpFilter__HotSpot::setType(typeVal);
        }
    }

    // Friend functions
    friend void Konsole__RegExpFilter__HotSpot_SetType(Konsole::RegExpFilter::HotSpot* self, int typeVal);
    friend void Konsole__RegExpFilter__HotSpot_QBaseSetType(Konsole::RegExpFilter::HotSpot* self, int typeVal);
};

// This class is a subclass of Konsole::UrlFilter::HotSpot so that we can call protected methods
class VirtualKonsoleUrlFilterHotSpot final : public Konsole::UrlFilter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleUrlFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__UrlFilter__HotSpot_Actions_Callback = QAction** (*)();
    using Konsole__UrlFilter__HotSpot_Activate_Callback = void (*)(Konsole__UrlFilter__HotSpot*, libqt_string);
    using Konsole__UrlFilter__HotSpot_SetType_Callback = void (*)(Konsole__UrlFilter__HotSpot*, int);

  protected:
    // Instance callback storage
    Konsole__UrlFilter__HotSpot_Actions_Callback konsole__urlfilter__hotspot_actions_callback = nullptr;
    Konsole__UrlFilter__HotSpot_Activate_Callback konsole__urlfilter__hotspot_activate_callback = nullptr;
    Konsole__UrlFilter__HotSpot_SetType_Callback konsole__urlfilter__hotspot_settype_callback = nullptr;

    // Instance base flags
    mutable bool konsole__urlfilter__hotspot_actions_isbase = false;
    mutable bool konsole__urlfilter__hotspot_activate_isbase = false;
    mutable bool konsole__urlfilter__hotspot_settype_isbase = false;

  public:
    VirtualKonsoleUrlFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn) : Konsole::UrlFilter::HotSpot(startLine, startColumn, endLine, endColumn) {};

    ~VirtualKonsoleUrlFilterHotSpot() {
        konsole__urlfilter__hotspot_actions_callback = nullptr;
        konsole__urlfilter__hotspot_activate_callback = nullptr;
        konsole__urlfilter__hotspot_settype_callback = nullptr;
    }

    // Callback setters
    inline void setKonsole__UrlFilter__HotSpot_Actions_Callback(Konsole__UrlFilter__HotSpot_Actions_Callback cb) { konsole__urlfilter__hotspot_actions_callback = cb; }
    inline void setKonsole__UrlFilter__HotSpot_Activate_Callback(Konsole__UrlFilter__HotSpot_Activate_Callback cb) { konsole__urlfilter__hotspot_activate_callback = cb; }
    inline void setKonsole__UrlFilter__HotSpot_SetType_Callback(Konsole__UrlFilter__HotSpot_SetType_Callback cb) { konsole__urlfilter__hotspot_settype_callback = cb; }

    // Base flag setters
    inline void setKonsole__UrlFilter__HotSpot_Actions_IsBase(bool value) const { konsole__urlfilter__hotspot_actions_isbase = value; }
    inline void setKonsole__UrlFilter__HotSpot_Activate_IsBase(bool value) const { konsole__urlfilter__hotspot_activate_isbase = value; }
    inline void setKonsole__UrlFilter__HotSpot_SetType_IsBase(bool value) const { konsole__urlfilter__hotspot_settype_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__urlfilter__hotspot_actions_isbase) {
            konsole__urlfilter__hotspot_actions_isbase = false;
            return Konsole__UrlFilter__HotSpot::actions();
        } else if (konsole__urlfilter__hotspot_actions_callback != nullptr) {
            QAction** callback_ret = konsole__urlfilter__hotspot_actions_callback();
            QList<QAction*> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QAction** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(*ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return Konsole__UrlFilter__HotSpot::actions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__urlfilter__hotspot_activate_isbase) {
            konsole__urlfilter__hotspot_activate_isbase = false;
            Konsole__UrlFilter__HotSpot::activate(action);
        } else if (konsole__urlfilter__hotspot_activate_callback != nullptr) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            libqt_string action_str;
            action_str.len = action_b.length();
            action_str.data = static_cast<const char*>(malloc(action_str.len + 1));
            memcpy((void*)action_str.data, action_b.data(), action_str.len);
            ((char*)action_str.data)[action_str.len] = '\0';
            libqt_string cbval1 = action_str;

            konsole__urlfilter__hotspot_activate_callback(this, cbval1);
        } else {
            Konsole__UrlFilter__HotSpot::activate(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__urlfilter__hotspot_settype_isbase) {
            konsole__urlfilter__hotspot_settype_isbase = false;
            Konsole__UrlFilter__HotSpot::setType(typeVal);
        } else if (konsole__urlfilter__hotspot_settype_callback != nullptr) {
            int cbval1 = static_cast<int>(typeVal);

            konsole__urlfilter__hotspot_settype_callback(this, cbval1);
        } else {
            Konsole__UrlFilter__HotSpot::setType(typeVal);
        }
    }

    // Friend functions
    friend void Konsole__UrlFilter__HotSpot_SetType(Konsole::UrlFilter::HotSpot* self, int typeVal);
    friend void Konsole__UrlFilter__HotSpot_QBaseSetType(Konsole::UrlFilter::HotSpot* self, int typeVal);
};

#endif
