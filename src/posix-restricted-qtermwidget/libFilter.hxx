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
    using Konsole__Filter_MetaObject_Callback = QMetaObject* (*)();
    using Konsole__Filter_Metacast_Callback = void* (*)(Konsole__Filter*, const char*);
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
    Konsole__Filter_MetaObject_Callback konsole__filter_metaobject_callback = nullptr;
    Konsole__Filter_Metacast_Callback konsole__filter_metacast_callback = nullptr;
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
    mutable bool konsole__filter_metaobject_isbase = false;
    mutable bool konsole__filter_metacast_isbase = false;
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

    // Callback setters
    inline void setKonsole__Filter_Process_Callback(Konsole__Filter_Process_Callback cb) { konsole__filter_process_callback = cb; }
    inline void setKonsole__Filter_MetaObject_Callback(Konsole__Filter_MetaObject_Callback cb) { konsole__filter_metaobject_callback = cb; }
    inline void setKonsole__Filter_Metacast_Callback(Konsole__Filter_Metacast_Callback cb) { konsole__filter_metacast_callback = cb; }
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
    inline void setKonsole__Filter_MetaObject_IsBase(bool value) const { konsole__filter_metaobject_isbase = value; }
    inline void setKonsole__Filter_Metacast_IsBase(bool value) const { konsole__filter_metacast_isbase = value; }
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
        auto process_cb = konsole__filter_process_callback;
        if (process_cb) {
            process_cb();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__filter_metaobject_isbase) {
            konsole__filter_metaobject_isbase = false;
            return Konsole__Filter::metaObject();
        }
        auto metaobject_cb = konsole__filter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Konsole__Filter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__filter_metacast_isbase) {
            konsole__filter_metacast_isbase = false;
            return Konsole__Filter::qt_metacast(param1);
        }
        auto metacast_cb = konsole__filter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__Filter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filter_metacall_isbase) {
            konsole__filter_metacall_isbase = false;
            return Konsole__Filter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = konsole__filter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__Filter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filter_event_isbase) {
            konsole__filter_event_isbase = false;
            return Konsole__Filter::event(event);
        }
        auto event_cb = konsole__filter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__Filter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filter_eventfilter_isbase) {
            konsole__filter_eventfilter_isbase = false;
            return Konsole__Filter::eventFilter(watched, event);
        }
        auto eventfilter_cb = konsole__filter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__Filter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filter_timerevent_isbase) {
            konsole__filter_timerevent_isbase = false;
            Konsole__Filter::timerEvent(event);
            return;
        }
        auto timerevent_cb = konsole__filter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Konsole__Filter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filter_childevent_isbase) {
            konsole__filter_childevent_isbase = false;
            Konsole__Filter::childEvent(event);
            return;
        }
        auto childevent_cb = konsole__filter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Konsole__Filter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filter_customevent_isbase) {
            konsole__filter_customevent_isbase = false;
            Konsole__Filter::customEvent(event);
            return;
        }
        auto customevent_cb = konsole__filter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Konsole__Filter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_connectnotify_isbase) {
            konsole__filter_connectnotify_isbase = false;
            Konsole__Filter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = konsole__filter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Konsole__Filter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filter_disconnectnotify_isbase) {
            konsole__filter_disconnectnotify_isbase = false;
            Konsole__Filter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = konsole__filter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Konsole__Filter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__filter_addhotspot_isbase) {
            konsole__filter_addhotspot_isbase = false;
            Konsole__Filter::addHotSpot(param1);
            return;
        }
        auto addhotspot_cb = konsole__filter_addhotspot_callback;
        if (addhotspot_cb) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            addhotspot_cb(this, cbval1);
            return;
        }
        Konsole__Filter::addHotSpot(param1);
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__filter_buffer_isbase) {
            konsole__filter_buffer_isbase = false;
            return Konsole__Filter::buffer();
        }
        auto buffer_cb = konsole__filter_buffer_callback;
        if (buffer_cb) {
            const char* callback_ret = buffer_cb();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        }
        return Konsole__Filter::buffer();
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__filter_getlinecolumn_isbase) {
            konsole__filter_getlinecolumn_isbase = false;
            Konsole__Filter::getLineColumn(position, startLine, startColumn);
            return;
        }
        auto getlinecolumn_cb = konsole__filter_getlinecolumn_callback;
        if (getlinecolumn_cb) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            getlinecolumn_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        Konsole__Filter::getLineColumn(position, startLine, startColumn);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__filter_sender_isbase) {
            konsole__filter_sender_isbase = false;
            return Konsole__Filter::sender();
        }
        auto sender_cb = konsole__filter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Konsole__Filter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__filter_sendersignalindex_isbase) {
            konsole__filter_sendersignalindex_isbase = false;
            return Konsole__Filter::senderSignalIndex();
        }
        auto sendersignalindex_cb = konsole__filter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Konsole__Filter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__filter_receivers_isbase) {
            konsole__filter_receivers_isbase = false;
            return Konsole__Filter::receivers(signal);
        }
        auto receivers_cb = konsole__filter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Konsole__Filter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__filter_issignalconnected_isbase) {
            konsole__filter_issignalconnected_isbase = false;
            return Konsole__Filter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = konsole__filter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__Filter::isSignalConnected(signal);
    }

    // Friend functions
    friend void Konsole__Filter_TimerEvent(Konsole::Filter* self, QTimerEvent* event);
    friend void Konsole__Filter_SuperTimerEvent(Konsole::Filter* self, QTimerEvent* event);
    friend void Konsole__Filter_ChildEvent(Konsole::Filter* self, QChildEvent* event);
    friend void Konsole__Filter_SuperChildEvent(Konsole::Filter* self, QChildEvent* event);
    friend void Konsole__Filter_CustomEvent(Konsole::Filter* self, QEvent* event);
    friend void Konsole__Filter_SuperCustomEvent(Konsole::Filter* self, QEvent* event);
    friend void Konsole__Filter_ConnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_SuperConnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_DisconnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_SuperDisconnectNotify(Konsole::Filter* self, const QMetaMethod* signal);
    friend void Konsole__Filter_AddHotSpot(Konsole::Filter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__Filter_SuperAddHotSpot(Konsole::Filter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__Filter_Buffer(Konsole::Filter* self);
    friend libqt_string Konsole__Filter_SuperBuffer(Konsole::Filter* self);
    friend void Konsole__Filter_GetLineColumn(Konsole::Filter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__Filter_SuperGetLineColumn(Konsole::Filter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__Filter_Sender(const Konsole::Filter* self);
    friend QObject* Konsole__Filter_SuperSender(const Konsole::Filter* self);
    friend int Konsole__Filter_SenderSignalIndex(const Konsole::Filter* self);
    friend int Konsole__Filter_SuperSenderSignalIndex(const Konsole::Filter* self);
    friend int Konsole__Filter_Receivers(const Konsole::Filter* self, const char* signal);
    friend int Konsole__Filter_SuperReceivers(const Konsole::Filter* self, const char* signal);
    friend bool Konsole__Filter_IsSignalConnected(const Konsole::Filter* self, const QMetaMethod* signal);
    friend bool Konsole__Filter_SuperIsSignalConnected(const Konsole::Filter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::RegExpFilter so that we can call protected methods
class VirtualKonsoleRegExpFilter final : public Konsole::RegExpFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleRegExpFilter = true;

    // Virtual class public types (including callbacks)
    using Konsole__RegExpFilter_Process_Callback = void (*)();
    using Konsole__RegExpFilter_NewHotSpot_Callback = Konsole__RegExpFilter__HotSpot* (*)(Konsole__RegExpFilter*, int, int, int, int);
    using Konsole__RegExpFilter_MetaObject_Callback = QMetaObject* (*)();
    using Konsole__RegExpFilter_Metacast_Callback = void* (*)(Konsole__RegExpFilter*, const char*);
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
    Konsole__RegExpFilter_MetaObject_Callback konsole__regexpfilter_metaobject_callback = nullptr;
    Konsole__RegExpFilter_Metacast_Callback konsole__regexpfilter_metacast_callback = nullptr;
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
    mutable bool konsole__regexpfilter_metaobject_isbase = false;
    mutable bool konsole__regexpfilter_metacast_isbase = false;
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

    // Callback setters
    inline void setKonsole__RegExpFilter_Process_Callback(Konsole__RegExpFilter_Process_Callback cb) { konsole__regexpfilter_process_callback = cb; }
    inline void setKonsole__RegExpFilter_NewHotSpot_Callback(Konsole__RegExpFilter_NewHotSpot_Callback cb) { konsole__regexpfilter_newhotspot_callback = cb; }
    inline void setKonsole__RegExpFilter_MetaObject_Callback(Konsole__RegExpFilter_MetaObject_Callback cb) { konsole__regexpfilter_metaobject_callback = cb; }
    inline void setKonsole__RegExpFilter_Metacast_Callback(Konsole__RegExpFilter_Metacast_Callback cb) { konsole__regexpfilter_metacast_callback = cb; }
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
    inline void setKonsole__RegExpFilter_MetaObject_IsBase(bool value) const { konsole__regexpfilter_metaobject_isbase = value; }
    inline void setKonsole__RegExpFilter_Metacast_IsBase(bool value) const { konsole__regexpfilter_metacast_isbase = value; }
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
            return;
        }
        auto process_cb = konsole__regexpfilter_process_callback;
        if (process_cb) {
            process_cb();
            return;
        }
        Konsole__RegExpFilter::process();
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int startLine, int startColumn, int endLine, int endColumn) override {
        if (konsole__regexpfilter_newhotspot_isbase) {
            konsole__regexpfilter_newhotspot_isbase = false;
            return Konsole__RegExpFilter::newHotSpot(startLine, startColumn, endLine, endColumn);
        }
        auto newhotspot_cb = konsole__regexpfilter_newhotspot_callback;
        if (newhotspot_cb) {
            int cbval1 = startLine;
            int cbval2 = startColumn;
            int cbval3 = endLine;
            int cbval4 = endColumn;

            Konsole__RegExpFilter__HotSpot* callback_ret = newhotspot_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return Konsole__RegExpFilter::newHotSpot(startLine, startColumn, endLine, endColumn);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (konsole__regexpfilter_metaobject_isbase) {
            konsole__regexpfilter_metaobject_isbase = false;
            return Konsole__RegExpFilter::metaObject();
        }
        auto metaobject_cb = konsole__regexpfilter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Konsole__RegExpFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__regexpfilter_metacast_isbase) {
            konsole__regexpfilter_metacast_isbase = false;
            return Konsole__RegExpFilter::qt_metacast(param1);
        }
        auto metacast_cb = konsole__regexpfilter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__RegExpFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__regexpfilter_metacall_isbase) {
            konsole__regexpfilter_metacall_isbase = false;
            return Konsole__RegExpFilter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = konsole__regexpfilter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__RegExpFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__regexpfilter_event_isbase) {
            konsole__regexpfilter_event_isbase = false;
            return Konsole__RegExpFilter::event(event);
        }
        auto event_cb = konsole__regexpfilter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__RegExpFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__regexpfilter_eventfilter_isbase) {
            konsole__regexpfilter_eventfilter_isbase = false;
            return Konsole__RegExpFilter::eventFilter(watched, event);
        }
        auto eventfilter_cb = konsole__regexpfilter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__RegExpFilter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__regexpfilter_timerevent_isbase) {
            konsole__regexpfilter_timerevent_isbase = false;
            Konsole__RegExpFilter::timerEvent(event);
            return;
        }
        auto timerevent_cb = konsole__regexpfilter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__regexpfilter_childevent_isbase) {
            konsole__regexpfilter_childevent_isbase = false;
            Konsole__RegExpFilter::childEvent(event);
            return;
        }
        auto childevent_cb = konsole__regexpfilter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__regexpfilter_customevent_isbase) {
            konsole__regexpfilter_customevent_isbase = false;
            Konsole__RegExpFilter::customEvent(event);
            return;
        }
        auto customevent_cb = konsole__regexpfilter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_connectnotify_isbase) {
            konsole__regexpfilter_connectnotify_isbase = false;
            Konsole__RegExpFilter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = konsole__regexpfilter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__regexpfilter_disconnectnotify_isbase) {
            konsole__regexpfilter_disconnectnotify_isbase = false;
            Konsole__RegExpFilter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = konsole__regexpfilter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__regexpfilter_addhotspot_isbase) {
            konsole__regexpfilter_addhotspot_isbase = false;
            Konsole__RegExpFilter::addHotSpot(param1);
            return;
        }
        auto addhotspot_cb = konsole__regexpfilter_addhotspot_callback;
        if (addhotspot_cb) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            addhotspot_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter::addHotSpot(param1);
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__regexpfilter_buffer_isbase) {
            konsole__regexpfilter_buffer_isbase = false;
            return Konsole__RegExpFilter::buffer();
        }
        auto buffer_cb = konsole__regexpfilter_buffer_callback;
        if (buffer_cb) {
            const char* callback_ret = buffer_cb();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        }
        return Konsole__RegExpFilter::buffer();
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__regexpfilter_getlinecolumn_isbase) {
            konsole__regexpfilter_getlinecolumn_isbase = false;
            Konsole__RegExpFilter::getLineColumn(position, startLine, startColumn);
            return;
        }
        auto getlinecolumn_cb = konsole__regexpfilter_getlinecolumn_callback;
        if (getlinecolumn_cb) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            getlinecolumn_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        Konsole__RegExpFilter::getLineColumn(position, startLine, startColumn);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__regexpfilter_sender_isbase) {
            konsole__regexpfilter_sender_isbase = false;
            return Konsole__RegExpFilter::sender();
        }
        auto sender_cb = konsole__regexpfilter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Konsole__RegExpFilter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__regexpfilter_sendersignalindex_isbase) {
            konsole__regexpfilter_sendersignalindex_isbase = false;
            return Konsole__RegExpFilter::senderSignalIndex();
        }
        auto sendersignalindex_cb = konsole__regexpfilter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Konsole__RegExpFilter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__regexpfilter_receivers_isbase) {
            konsole__regexpfilter_receivers_isbase = false;
            return Konsole__RegExpFilter::receivers(signal);
        }
        auto receivers_cb = konsole__regexpfilter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Konsole__RegExpFilter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__regexpfilter_issignalconnected_isbase) {
            konsole__regexpfilter_issignalconnected_isbase = false;
            return Konsole__RegExpFilter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = konsole__regexpfilter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__RegExpFilter::isSignalConnected(signal);
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_NewHotSpot(Konsole::RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
    friend Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_SuperNewHotSpot(Konsole::RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn);
    friend void Konsole__RegExpFilter_TimerEvent(Konsole::RegExpFilter* self, QTimerEvent* event);
    friend void Konsole__RegExpFilter_SuperTimerEvent(Konsole::RegExpFilter* self, QTimerEvent* event);
    friend void Konsole__RegExpFilter_ChildEvent(Konsole::RegExpFilter* self, QChildEvent* event);
    friend void Konsole__RegExpFilter_SuperChildEvent(Konsole::RegExpFilter* self, QChildEvent* event);
    friend void Konsole__RegExpFilter_CustomEvent(Konsole::RegExpFilter* self, QEvent* event);
    friend void Konsole__RegExpFilter_SuperCustomEvent(Konsole::RegExpFilter* self, QEvent* event);
    friend void Konsole__RegExpFilter_ConnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_SuperConnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_DisconnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_SuperDisconnectNotify(Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend void Konsole__RegExpFilter_AddHotSpot(Konsole::RegExpFilter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__RegExpFilter_SuperAddHotSpot(Konsole::RegExpFilter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__RegExpFilter_Buffer(Konsole::RegExpFilter* self);
    friend libqt_string Konsole__RegExpFilter_SuperBuffer(Konsole::RegExpFilter* self);
    friend void Konsole__RegExpFilter_GetLineColumn(Konsole::RegExpFilter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__RegExpFilter_SuperGetLineColumn(Konsole::RegExpFilter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__RegExpFilter_Sender(const Konsole::RegExpFilter* self);
    friend QObject* Konsole__RegExpFilter_SuperSender(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_SenderSignalIndex(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_SuperSenderSignalIndex(const Konsole::RegExpFilter* self);
    friend int Konsole__RegExpFilter_Receivers(const Konsole::RegExpFilter* self, const char* signal);
    friend int Konsole__RegExpFilter_SuperReceivers(const Konsole::RegExpFilter* self, const char* signal);
    friend bool Konsole__RegExpFilter_IsSignalConnected(const Konsole::RegExpFilter* self, const QMetaMethod* signal);
    friend bool Konsole__RegExpFilter_SuperIsSignalConnected(const Konsole::RegExpFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::UrlFilter so that we can call protected methods
class VirtualKonsoleUrlFilter final : public Konsole::UrlFilter {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleUrlFilter = true;

    // Virtual class public types (including callbacks)
    using Konsole__UrlFilter_MetaObject_Callback = QMetaObject* (*)();
    using Konsole__UrlFilter_Metacast_Callback = void* (*)(Konsole__UrlFilter*, const char*);
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
    Konsole__UrlFilter_MetaObject_Callback konsole__urlfilter_metaobject_callback = nullptr;
    Konsole__UrlFilter_Metacast_Callback konsole__urlfilter_metacast_callback = nullptr;
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
    mutable bool konsole__urlfilter_metaobject_isbase = false;
    mutable bool konsole__urlfilter_metacast_isbase = false;
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

    // Callback setters
    inline void setKonsole__UrlFilter_MetaObject_Callback(Konsole__UrlFilter_MetaObject_Callback cb) { konsole__urlfilter_metaobject_callback = cb; }
    inline void setKonsole__UrlFilter_Metacast_Callback(Konsole__UrlFilter_Metacast_Callback cb) { konsole__urlfilter_metacast_callback = cb; }
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
    inline void setKonsole__UrlFilter_MetaObject_IsBase(bool value) const { konsole__urlfilter_metaobject_isbase = value; }
    inline void setKonsole__UrlFilter_Metacast_IsBase(bool value) const { konsole__urlfilter_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (konsole__urlfilter_metaobject_isbase) {
            konsole__urlfilter_metaobject_isbase = false;
            return Konsole__UrlFilter::metaObject();
        }
        auto metaobject_cb = konsole__urlfilter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Konsole__UrlFilter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__urlfilter_metacast_isbase) {
            konsole__urlfilter_metacast_isbase = false;
            return Konsole__UrlFilter::qt_metacast(param1);
        }
        auto metacast_cb = konsole__urlfilter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__UrlFilter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__urlfilter_metacall_isbase) {
            konsole__urlfilter_metacall_isbase = false;
            return Konsole__UrlFilter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = konsole__urlfilter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__UrlFilter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual Konsole::RegExpFilter::HotSpot* newHotSpot(int param1, int param2, int param3, int param4) override {
        if (konsole__urlfilter_newhotspot_isbase) {
            konsole__urlfilter_newhotspot_isbase = false;
            return Konsole__UrlFilter::newHotSpot(param1, param2, param3, param4);
        }
        auto newhotspot_cb = konsole__urlfilter_newhotspot_callback;
        if (newhotspot_cb) {
            int cbval1 = param1;
            int cbval2 = param2;
            int cbval3 = param3;
            int cbval4 = param4;

            Konsole__RegExpFilter__HotSpot* callback_ret = newhotspot_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return Konsole__UrlFilter::newHotSpot(param1, param2, param3, param4);
    }

    // Virtual method for C ABI access and custom callback
    virtual void process() override {
        if (konsole__urlfilter_process_isbase) {
            konsole__urlfilter_process_isbase = false;
            Konsole__UrlFilter::process();
            return;
        }
        auto process_cb = konsole__urlfilter_process_callback;
        if (process_cb) {
            process_cb();
            return;
        }
        Konsole__UrlFilter::process();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__urlfilter_event_isbase) {
            konsole__urlfilter_event_isbase = false;
            return Konsole__UrlFilter::event(event);
        }
        auto event_cb = konsole__urlfilter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__UrlFilter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__urlfilter_eventfilter_isbase) {
            konsole__urlfilter_eventfilter_isbase = false;
            return Konsole__UrlFilter::eventFilter(watched, event);
        }
        auto eventfilter_cb = konsole__urlfilter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__UrlFilter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__urlfilter_timerevent_isbase) {
            konsole__urlfilter_timerevent_isbase = false;
            Konsole__UrlFilter::timerEvent(event);
            return;
        }
        auto timerevent_cb = konsole__urlfilter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__urlfilter_childevent_isbase) {
            konsole__urlfilter_childevent_isbase = false;
            Konsole__UrlFilter::childEvent(event);
            return;
        }
        auto childevent_cb = konsole__urlfilter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__urlfilter_customevent_isbase) {
            konsole__urlfilter_customevent_isbase = false;
            Konsole__UrlFilter::customEvent(event);
            return;
        }
        auto customevent_cb = konsole__urlfilter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_connectnotify_isbase) {
            konsole__urlfilter_connectnotify_isbase = false;
            Konsole__UrlFilter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = konsole__urlfilter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__urlfilter_disconnectnotify_isbase) {
            konsole__urlfilter_disconnectnotify_isbase = false;
            Konsole__UrlFilter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = konsole__urlfilter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void addHotSpot(Konsole::Filter::HotSpot* param1) {
        if (konsole__urlfilter_addhotspot_isbase) {
            konsole__urlfilter_addhotspot_isbase = false;
            Konsole__UrlFilter::addHotSpot(param1);
            return;
        }
        auto addhotspot_cb = konsole__urlfilter_addhotspot_callback;
        if (addhotspot_cb) {
            Konsole__Filter__HotSpot* cbval1 = param1;

            addhotspot_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter::addHotSpot(param1);
    }

    // Virtual method for C ABI access and custom callback
    const QString* buffer() {
        if (konsole__urlfilter_buffer_isbase) {
            konsole__urlfilter_buffer_isbase = false;
            return Konsole__UrlFilter::buffer();
        }
        auto buffer_cb = konsole__urlfilter_buffer_callback;
        if (buffer_cb) {
            const char* callback_ret = buffer_cb();
            QString* callback_ret_QString = new QString(QString::fromUtf8(callback_ret));
            return callback_ret_QString;
        }
        return Konsole__UrlFilter::buffer();
    }

    // Virtual method for C ABI access and custom callback
    void getLineColumn(int position, int& startLine, int& startColumn) {
        if (konsole__urlfilter_getlinecolumn_isbase) {
            konsole__urlfilter_getlinecolumn_isbase = false;
            Konsole__UrlFilter::getLineColumn(position, startLine, startColumn);
            return;
        }
        auto getlinecolumn_cb = konsole__urlfilter_getlinecolumn_callback;
        if (getlinecolumn_cb) {
            int cbval1 = position;
            int* cbval2 = &startLine;
            int* cbval3 = &startColumn;

            getlinecolumn_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        Konsole__UrlFilter::getLineColumn(position, startLine, startColumn);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__urlfilter_sender_isbase) {
            konsole__urlfilter_sender_isbase = false;
            return Konsole__UrlFilter::sender();
        }
        auto sender_cb = konsole__urlfilter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Konsole__UrlFilter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__urlfilter_sendersignalindex_isbase) {
            konsole__urlfilter_sendersignalindex_isbase = false;
            return Konsole__UrlFilter::senderSignalIndex();
        }
        auto sendersignalindex_cb = konsole__urlfilter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Konsole__UrlFilter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__urlfilter_receivers_isbase) {
            konsole__urlfilter_receivers_isbase = false;
            return Konsole__UrlFilter::receivers(signal);
        }
        auto receivers_cb = konsole__urlfilter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Konsole__UrlFilter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__urlfilter_issignalconnected_isbase) {
            konsole__urlfilter_issignalconnected_isbase = false;
            return Konsole__UrlFilter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = konsole__urlfilter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__UrlFilter::isSignalConnected(signal);
    }

    // Friend functions
    friend Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_NewHotSpot(Konsole::UrlFilter* self, int param1, int param2, int param3, int param4);
    friend Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_SuperNewHotSpot(Konsole::UrlFilter* self, int param1, int param2, int param3, int param4);
    friend void Konsole__UrlFilter_TimerEvent(Konsole::UrlFilter* self, QTimerEvent* event);
    friend void Konsole__UrlFilter_SuperTimerEvent(Konsole::UrlFilter* self, QTimerEvent* event);
    friend void Konsole__UrlFilter_ChildEvent(Konsole::UrlFilter* self, QChildEvent* event);
    friend void Konsole__UrlFilter_SuperChildEvent(Konsole::UrlFilter* self, QChildEvent* event);
    friend void Konsole__UrlFilter_CustomEvent(Konsole::UrlFilter* self, QEvent* event);
    friend void Konsole__UrlFilter_SuperCustomEvent(Konsole::UrlFilter* self, QEvent* event);
    friend void Konsole__UrlFilter_ConnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_SuperConnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_DisconnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_SuperDisconnectNotify(Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend void Konsole__UrlFilter_AddHotSpot(Konsole::UrlFilter* self, Konsole__Filter__HotSpot* param1);
    friend void Konsole__UrlFilter_SuperAddHotSpot(Konsole::UrlFilter* self, Konsole__Filter__HotSpot* param1);
    friend libqt_string Konsole__UrlFilter_Buffer(Konsole::UrlFilter* self);
    friend libqt_string Konsole__UrlFilter_SuperBuffer(Konsole::UrlFilter* self);
    friend void Konsole__UrlFilter_GetLineColumn(Konsole::UrlFilter* self, int position, int* startLine, int* startColumn);
    friend void Konsole__UrlFilter_SuperGetLineColumn(Konsole::UrlFilter* self, int position, int* startLine, int* startColumn);
    friend QObject* Konsole__UrlFilter_Sender(const Konsole::UrlFilter* self);
    friend QObject* Konsole__UrlFilter_SuperSender(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_SenderSignalIndex(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_SuperSenderSignalIndex(const Konsole::UrlFilter* self);
    friend int Konsole__UrlFilter_Receivers(const Konsole::UrlFilter* self, const char* signal);
    friend int Konsole__UrlFilter_SuperReceivers(const Konsole::UrlFilter* self, const char* signal);
    friend bool Konsole__UrlFilter_IsSignalConnected(const Konsole::UrlFilter* self, const QMetaMethod* signal);
    friend bool Konsole__UrlFilter_SuperIsSignalConnected(const Konsole::UrlFilter* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::FilterObject so that we can call protected methods
class VirtualKonsoleFilterObject final : public Konsole::FilterObject {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleFilterObject = true;

    // Virtual class public types (including callbacks)
    using Konsole__FilterObject_MetaObject_Callback = QMetaObject* (*)();
    using Konsole__FilterObject_Metacast_Callback = void* (*)(Konsole__FilterObject*, const char*);
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
    Konsole__FilterObject_MetaObject_Callback konsole__filterobject_metaobject_callback = nullptr;
    Konsole__FilterObject_Metacast_Callback konsole__filterobject_metacast_callback = nullptr;
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
    mutable bool konsole__filterobject_metaobject_isbase = false;
    mutable bool konsole__filterobject_metacast_isbase = false;
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

    // Callback setters
    inline void setKonsole__FilterObject_MetaObject_Callback(Konsole__FilterObject_MetaObject_Callback cb) { konsole__filterobject_metaobject_callback = cb; }
    inline void setKonsole__FilterObject_Metacast_Callback(Konsole__FilterObject_Metacast_Callback cb) { konsole__filterobject_metacast_callback = cb; }
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
    inline void setKonsole__FilterObject_MetaObject_IsBase(bool value) const { konsole__filterobject_metaobject_isbase = value; }
    inline void setKonsole__FilterObject_Metacast_IsBase(bool value) const { konsole__filterobject_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (konsole__filterobject_metaobject_isbase) {
            konsole__filterobject_metaobject_isbase = false;
            return Konsole__FilterObject::metaObject();
        }
        auto metaobject_cb = konsole__filterobject_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return Konsole__FilterObject::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (konsole__filterobject_metacast_isbase) {
            konsole__filterobject_metacast_isbase = false;
            return Konsole__FilterObject::qt_metacast(param1);
        }
        auto metacast_cb = konsole__filterobject_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__FilterObject::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (konsole__filterobject_metacall_isbase) {
            konsole__filterobject_metacall_isbase = false;
            return Konsole__FilterObject::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = konsole__filterobject_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return Konsole__FilterObject::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (konsole__filterobject_event_isbase) {
            konsole__filterobject_event_isbase = false;
            return Konsole__FilterObject::event(event);
        }
        auto event_cb = konsole__filterobject_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__FilterObject::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (konsole__filterobject_eventfilter_isbase) {
            konsole__filterobject_eventfilter_isbase = false;
            return Konsole__FilterObject::eventFilter(watched, event);
        }
        auto eventfilter_cb = konsole__filterobject_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return Konsole__FilterObject::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (konsole__filterobject_timerevent_isbase) {
            konsole__filterobject_timerevent_isbase = false;
            Konsole__FilterObject::timerEvent(event);
            return;
        }
        auto timerevent_cb = konsole__filterobject_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        Konsole__FilterObject::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (konsole__filterobject_childevent_isbase) {
            konsole__filterobject_childevent_isbase = false;
            Konsole__FilterObject::childEvent(event);
            return;
        }
        auto childevent_cb = konsole__filterobject_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        Konsole__FilterObject::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (konsole__filterobject_customevent_isbase) {
            konsole__filterobject_customevent_isbase = false;
            Konsole__FilterObject::customEvent(event);
            return;
        }
        auto customevent_cb = konsole__filterobject_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        Konsole__FilterObject::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_connectnotify_isbase) {
            konsole__filterobject_connectnotify_isbase = false;
            Konsole__FilterObject::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = konsole__filterobject_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        Konsole__FilterObject::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (konsole__filterobject_disconnectnotify_isbase) {
            konsole__filterobject_disconnectnotify_isbase = false;
            Konsole__FilterObject::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = konsole__filterobject_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        Konsole__FilterObject::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (konsole__filterobject_sender_isbase) {
            konsole__filterobject_sender_isbase = false;
            return Konsole__FilterObject::sender();
        }
        auto sender_cb = konsole__filterobject_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return Konsole__FilterObject::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (konsole__filterobject_sendersignalindex_isbase) {
            konsole__filterobject_sendersignalindex_isbase = false;
            return Konsole__FilterObject::senderSignalIndex();
        }
        auto sendersignalindex_cb = konsole__filterobject_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return Konsole__FilterObject::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (konsole__filterobject_receivers_isbase) {
            konsole__filterobject_receivers_isbase = false;
            return Konsole__FilterObject::receivers(signal);
        }
        auto receivers_cb = konsole__filterobject_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return Konsole__FilterObject::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (konsole__filterobject_issignalconnected_isbase) {
            konsole__filterobject_issignalconnected_isbase = false;
            return Konsole__FilterObject::isSignalConnected(signal);
        }
        auto issignalconnected_cb = konsole__filterobject_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return Konsole__FilterObject::isSignalConnected(signal);
    }

    // Friend functions
    friend void Konsole__FilterObject_TimerEvent(Konsole::FilterObject* self, QTimerEvent* event);
    friend void Konsole__FilterObject_SuperTimerEvent(Konsole::FilterObject* self, QTimerEvent* event);
    friend void Konsole__FilterObject_ChildEvent(Konsole::FilterObject* self, QChildEvent* event);
    friend void Konsole__FilterObject_SuperChildEvent(Konsole::FilterObject* self, QChildEvent* event);
    friend void Konsole__FilterObject_CustomEvent(Konsole::FilterObject* self, QEvent* event);
    friend void Konsole__FilterObject_SuperCustomEvent(Konsole::FilterObject* self, QEvent* event);
    friend void Konsole__FilterObject_ConnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_SuperConnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_DisconnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend void Konsole__FilterObject_SuperDisconnectNotify(Konsole::FilterObject* self, const QMetaMethod* signal);
    friend QObject* Konsole__FilterObject_Sender(const Konsole::FilterObject* self);
    friend QObject* Konsole__FilterObject_SuperSender(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_SenderSignalIndex(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_SuperSenderSignalIndex(const Konsole::FilterObject* self);
    friend int Konsole__FilterObject_Receivers(const Konsole::FilterObject* self, const char* signal);
    friend int Konsole__FilterObject_SuperReceivers(const Konsole::FilterObject* self, const char* signal);
    friend bool Konsole__FilterObject_IsSignalConnected(const Konsole::FilterObject* self, const QMetaMethod* signal);
    friend bool Konsole__FilterObject_SuperIsSignalConnected(const Konsole::FilterObject* self, const QMetaMethod* signal);
};

// This class is a subclass of Konsole::Filter::HotSpot so that we can call protected methods
class VirtualKonsoleFilterHotSpot : public Konsole::Filter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__Filter__HotSpot_Activate_Callback = void (*)(Konsole__Filter__HotSpot*, const char*);
    using Konsole__Filter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)();
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
        auto activate_cb = konsole__filter__hotspot_activate_callback;
        if (activate_cb) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;

            activate_cb(this, cbval1);
            libqt_free(action_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__filter__hotspot_actions_isbase) {
            konsole__filter__hotspot_actions_isbase = false;
            return Konsole__Filter__HotSpot::actions();
        }
        auto actions_cb = konsole__filter__hotspot_actions_callback;
        if (actions_cb) {
            libqt_list /* of QAction* */ callback_ret = actions_cb();
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__Filter__HotSpot::actions();
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__filter__hotspot_settype_isbase) {
            konsole__filter__hotspot_settype_isbase = false;
            Konsole__Filter__HotSpot::setType(typeVal);
            return;
        }
        auto settype_cb = konsole__filter__hotspot_settype_callback;
        if (settype_cb) {
            int cbval1 = static_cast<int>(typeVal);

            settype_cb(this, cbval1);
            return;
        }
        Konsole__Filter__HotSpot::setType(typeVal);
    }

    // Friend functions
    friend void Konsole__Filter__HotSpot_SetType(Konsole::Filter::HotSpot* self, int typeVal);
    friend void Konsole__Filter__HotSpot_SuperSetType(Konsole::Filter::HotSpot* self, int typeVal);
};

// This class is a subclass of Konsole::RegExpFilter::HotSpot so that we can call protected methods
class VirtualKonsoleRegExpFilterHotSpot final : public Konsole::RegExpFilter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleRegExpFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__RegExpFilter__HotSpot_Activate_Callback = void (*)(Konsole__RegExpFilter__HotSpot*, const char*);
    using Konsole__RegExpFilter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)();
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
            return;
        }
        auto activate_cb = konsole__regexpfilter__hotspot_activate_callback;
        if (activate_cb) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;

            activate_cb(this, cbval1);
            libqt_free(action_str);
            return;
        }
        Konsole__RegExpFilter__HotSpot::activate(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> actions() override {
        if (konsole__regexpfilter__hotspot_actions_isbase) {
            konsole__regexpfilter__hotspot_actions_isbase = false;
            return Konsole__RegExpFilter__HotSpot::actions();
        }
        auto actions_cb = konsole__regexpfilter__hotspot_actions_callback;
        if (actions_cb) {
            libqt_list /* of QAction* */ callback_ret = actions_cb();
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__RegExpFilter__HotSpot::actions();
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__regexpfilter__hotspot_settype_isbase) {
            konsole__regexpfilter__hotspot_settype_isbase = false;
            Konsole__RegExpFilter__HotSpot::setType(typeVal);
            return;
        }
        auto settype_cb = konsole__regexpfilter__hotspot_settype_callback;
        if (settype_cb) {
            int cbval1 = static_cast<int>(typeVal);

            settype_cb(this, cbval1);
            return;
        }
        Konsole__RegExpFilter__HotSpot::setType(typeVal);
    }

    // Friend functions
    friend void Konsole__RegExpFilter__HotSpot_SetType(Konsole::RegExpFilter::HotSpot* self, int typeVal);
    friend void Konsole__RegExpFilter__HotSpot_SuperSetType(Konsole::RegExpFilter::HotSpot* self, int typeVal);
};

// This class is a subclass of Konsole::UrlFilter::HotSpot so that we can call protected methods
class VirtualKonsoleUrlFilterHotSpot final : public Konsole::UrlFilter::HotSpot {

  public:
    // Virtual class boolean flag
    bool isVirtualKonsoleUrlFilterHotSpot = true;

    // Virtual class public types (including callbacks)
    using Konsole__UrlFilter__HotSpot_Actions_Callback = libqt_list /* of QAction* */ (*)();
    using Konsole__UrlFilter__HotSpot_Activate_Callback = void (*)(Konsole__UrlFilter__HotSpot*, const char*);
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
        }
        auto actions_cb = konsole__urlfilter__hotspot_actions_callback;
        if (actions_cb) {
            libqt_list /* of QAction* */ callback_ret = actions_cb();
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return Konsole__UrlFilter__HotSpot::actions();
    }

    // Virtual method for C ABI access and custom callback
    virtual void activate(const QString& action) override {
        if (konsole__urlfilter__hotspot_activate_isbase) {
            konsole__urlfilter__hotspot_activate_isbase = false;
            Konsole__UrlFilter__HotSpot::activate(action);
            return;
        }
        auto activate_cb = konsole__urlfilter__hotspot_activate_callback;
        if (activate_cb) {
            const QString action_ret = action;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray action_b = action_ret.toUtf8();
            auto action_str_len = action_b.length();
            const char* action_str = static_cast<const char*>(malloc(action_str_len + 1));
            memcpy((void*)action_str, action_b.data(), action_str_len);
            ((char*)action_str)[action_str_len] = '\0';
            const char* cbval1 = action_str;

            activate_cb(this, cbval1);
            libqt_free(action_str);
            return;
        }
        Konsole__UrlFilter__HotSpot::activate(action);
    }

    // Virtual method for C ABI access and custom callback
    void setType(Konsole::Filter::HotSpot::Type typeVal) {
        if (konsole__urlfilter__hotspot_settype_isbase) {
            konsole__urlfilter__hotspot_settype_isbase = false;
            Konsole__UrlFilter__HotSpot::setType(typeVal);
            return;
        }
        auto settype_cb = konsole__urlfilter__hotspot_settype_callback;
        if (settype_cb) {
            int cbval1 = static_cast<int>(typeVal);

            settype_cb(this, cbval1);
            return;
        }
        Konsole__UrlFilter__HotSpot::setType(typeVal);
    }

    // Friend functions
    friend void Konsole__UrlFilter__HotSpot_SetType(Konsole::UrlFilter::HotSpot* self, int typeVal);
    friend void Konsole__UrlFilter__HotSpot_SuperSetType(Konsole::UrlFilter::HotSpot* self, int typeVal);
};

#endif
