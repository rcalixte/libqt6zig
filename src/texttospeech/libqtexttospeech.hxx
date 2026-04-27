#pragma once
#ifndef SRC_TEXTTOSPEECHC_LIBVIRTUALQTEXTTOSPEECH_H
#define SRC_TEXTTOSPEECHC_LIBVIRTUALQTEXTTOSPEECH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTextToSpeech so that we can call protected methods
class VirtualQTextToSpeech final : public QTextToSpeech {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextToSpeech = true;

    // Virtual class public types (including callbacks)
    using QTextToSpeech_MetaObject_Callback = QMetaObject* (*)();
    using QTextToSpeech_Metacast_Callback = void* (*)(QTextToSpeech*, const char*);
    using QTextToSpeech_Metacall_Callback = int (*)(QTextToSpeech*, int, int, void**);
    using QTextToSpeech_Event_Callback = bool (*)(QTextToSpeech*, QEvent*);
    using QTextToSpeech_EventFilter_Callback = bool (*)(QTextToSpeech*, QObject*, QEvent*);
    using QTextToSpeech_TimerEvent_Callback = void (*)(QTextToSpeech*, QTimerEvent*);
    using QTextToSpeech_ChildEvent_Callback = void (*)(QTextToSpeech*, QChildEvent*);
    using QTextToSpeech_CustomEvent_Callback = void (*)(QTextToSpeech*, QEvent*);
    using QTextToSpeech_ConnectNotify_Callback = void (*)(QTextToSpeech*, QMetaMethod*);
    using QTextToSpeech_DisconnectNotify_Callback = void (*)(QTextToSpeech*, QMetaMethod*);
    using QTextToSpeech_AllVoices_Callback = libqt_list /* of QVoice* */ (*)(const QTextToSpeech*, QLocale*);
    using QTextToSpeech_Sender_Callback = QObject* (*)();
    using QTextToSpeech_SenderSignalIndex_Callback = int (*)();
    using QTextToSpeech_Receivers_Callback = int (*)(const QTextToSpeech*, const char*);
    using QTextToSpeech_IsSignalConnected_Callback = bool (*)(const QTextToSpeech*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTextToSpeech_MetaObject_Callback qtexttospeech_metaobject_callback = nullptr;
    QTextToSpeech_Metacast_Callback qtexttospeech_metacast_callback = nullptr;
    QTextToSpeech_Metacall_Callback qtexttospeech_metacall_callback = nullptr;
    QTextToSpeech_Event_Callback qtexttospeech_event_callback = nullptr;
    QTextToSpeech_EventFilter_Callback qtexttospeech_eventfilter_callback = nullptr;
    QTextToSpeech_TimerEvent_Callback qtexttospeech_timerevent_callback = nullptr;
    QTextToSpeech_ChildEvent_Callback qtexttospeech_childevent_callback = nullptr;
    QTextToSpeech_CustomEvent_Callback qtexttospeech_customevent_callback = nullptr;
    QTextToSpeech_ConnectNotify_Callback qtexttospeech_connectnotify_callback = nullptr;
    QTextToSpeech_DisconnectNotify_Callback qtexttospeech_disconnectnotify_callback = nullptr;
    QTextToSpeech_AllVoices_Callback qtexttospeech_allvoices_callback = nullptr;
    QTextToSpeech_Sender_Callback qtexttospeech_sender_callback = nullptr;
    QTextToSpeech_SenderSignalIndex_Callback qtexttospeech_sendersignalindex_callback = nullptr;
    QTextToSpeech_Receivers_Callback qtexttospeech_receivers_callback = nullptr;
    QTextToSpeech_IsSignalConnected_Callback qtexttospeech_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtexttospeech_metaobject_isbase = false;
    mutable bool qtexttospeech_metacast_isbase = false;
    mutable bool qtexttospeech_metacall_isbase = false;
    mutable bool qtexttospeech_event_isbase = false;
    mutable bool qtexttospeech_eventfilter_isbase = false;
    mutable bool qtexttospeech_timerevent_isbase = false;
    mutable bool qtexttospeech_childevent_isbase = false;
    mutable bool qtexttospeech_customevent_isbase = false;
    mutable bool qtexttospeech_connectnotify_isbase = false;
    mutable bool qtexttospeech_disconnectnotify_isbase = false;
    mutable bool qtexttospeech_allvoices_isbase = false;
    mutable bool qtexttospeech_sender_isbase = false;
    mutable bool qtexttospeech_sendersignalindex_isbase = false;
    mutable bool qtexttospeech_receivers_isbase = false;
    mutable bool qtexttospeech_issignalconnected_isbase = false;

  public:
    VirtualQTextToSpeech() : QTextToSpeech() {};
    VirtualQTextToSpeech(const QString& engine) : QTextToSpeech(engine) {};
    VirtualQTextToSpeech(const QString& engine, const QMap<QString, QVariant>& params) : QTextToSpeech(engine, params) {};
    VirtualQTextToSpeech(QObject* parent) : QTextToSpeech(parent) {};
    VirtualQTextToSpeech(const QString& engine, QObject* parent) : QTextToSpeech(engine, parent) {};
    VirtualQTextToSpeech(const QString& engine, const QMap<QString, QVariant>& params, QObject* parent) : QTextToSpeech(engine, params, parent) {};

    // Callback setters
    inline void setQTextToSpeech_MetaObject_Callback(QTextToSpeech_MetaObject_Callback cb) { qtexttospeech_metaobject_callback = cb; }
    inline void setQTextToSpeech_Metacast_Callback(QTextToSpeech_Metacast_Callback cb) { qtexttospeech_metacast_callback = cb; }
    inline void setQTextToSpeech_Metacall_Callback(QTextToSpeech_Metacall_Callback cb) { qtexttospeech_metacall_callback = cb; }
    inline void setQTextToSpeech_Event_Callback(QTextToSpeech_Event_Callback cb) { qtexttospeech_event_callback = cb; }
    inline void setQTextToSpeech_EventFilter_Callback(QTextToSpeech_EventFilter_Callback cb) { qtexttospeech_eventfilter_callback = cb; }
    inline void setQTextToSpeech_TimerEvent_Callback(QTextToSpeech_TimerEvent_Callback cb) { qtexttospeech_timerevent_callback = cb; }
    inline void setQTextToSpeech_ChildEvent_Callback(QTextToSpeech_ChildEvent_Callback cb) { qtexttospeech_childevent_callback = cb; }
    inline void setQTextToSpeech_CustomEvent_Callback(QTextToSpeech_CustomEvent_Callback cb) { qtexttospeech_customevent_callback = cb; }
    inline void setQTextToSpeech_ConnectNotify_Callback(QTextToSpeech_ConnectNotify_Callback cb) { qtexttospeech_connectnotify_callback = cb; }
    inline void setQTextToSpeech_DisconnectNotify_Callback(QTextToSpeech_DisconnectNotify_Callback cb) { qtexttospeech_disconnectnotify_callback = cb; }
    inline void setQTextToSpeech_AllVoices_Callback(QTextToSpeech_AllVoices_Callback cb) { qtexttospeech_allvoices_callback = cb; }
    inline void setQTextToSpeech_Sender_Callback(QTextToSpeech_Sender_Callback cb) { qtexttospeech_sender_callback = cb; }
    inline void setQTextToSpeech_SenderSignalIndex_Callback(QTextToSpeech_SenderSignalIndex_Callback cb) { qtexttospeech_sendersignalindex_callback = cb; }
    inline void setQTextToSpeech_Receivers_Callback(QTextToSpeech_Receivers_Callback cb) { qtexttospeech_receivers_callback = cb; }
    inline void setQTextToSpeech_IsSignalConnected_Callback(QTextToSpeech_IsSignalConnected_Callback cb) { qtexttospeech_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTextToSpeech_MetaObject_IsBase(bool value) const { qtexttospeech_metaobject_isbase = value; }
    inline void setQTextToSpeech_Metacast_IsBase(bool value) const { qtexttospeech_metacast_isbase = value; }
    inline void setQTextToSpeech_Metacall_IsBase(bool value) const { qtexttospeech_metacall_isbase = value; }
    inline void setQTextToSpeech_Event_IsBase(bool value) const { qtexttospeech_event_isbase = value; }
    inline void setQTextToSpeech_EventFilter_IsBase(bool value) const { qtexttospeech_eventfilter_isbase = value; }
    inline void setQTextToSpeech_TimerEvent_IsBase(bool value) const { qtexttospeech_timerevent_isbase = value; }
    inline void setQTextToSpeech_ChildEvent_IsBase(bool value) const { qtexttospeech_childevent_isbase = value; }
    inline void setQTextToSpeech_CustomEvent_IsBase(bool value) const { qtexttospeech_customevent_isbase = value; }
    inline void setQTextToSpeech_ConnectNotify_IsBase(bool value) const { qtexttospeech_connectnotify_isbase = value; }
    inline void setQTextToSpeech_DisconnectNotify_IsBase(bool value) const { qtexttospeech_disconnectnotify_isbase = value; }
    inline void setQTextToSpeech_AllVoices_IsBase(bool value) const { qtexttospeech_allvoices_isbase = value; }
    inline void setQTextToSpeech_Sender_IsBase(bool value) const { qtexttospeech_sender_isbase = value; }
    inline void setQTextToSpeech_SenderSignalIndex_IsBase(bool value) const { qtexttospeech_sendersignalindex_isbase = value; }
    inline void setQTextToSpeech_Receivers_IsBase(bool value) const { qtexttospeech_receivers_isbase = value; }
    inline void setQTextToSpeech_IsSignalConnected_IsBase(bool value) const { qtexttospeech_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtexttospeech_metaobject_isbase) {
            qtexttospeech_metaobject_isbase = false;
            return QTextToSpeech::metaObject();
        }
        auto metaobject_cb = qtexttospeech_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTextToSpeech::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtexttospeech_metacast_isbase) {
            qtexttospeech_metacast_isbase = false;
            return QTextToSpeech::qt_metacast(param1);
        }
        auto metacast_cb = qtexttospeech_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeech::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtexttospeech_metacall_isbase) {
            qtexttospeech_metacall_isbase = false;
            return QTextToSpeech::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtexttospeech_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeech::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtexttospeech_event_isbase) {
            qtexttospeech_event_isbase = false;
            return QTextToSpeech::event(event);
        }
        auto event_cb = qtexttospeech_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeech::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtexttospeech_eventfilter_isbase) {
            qtexttospeech_eventfilter_isbase = false;
            return QTextToSpeech::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtexttospeech_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextToSpeech::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtexttospeech_timerevent_isbase) {
            qtexttospeech_timerevent_isbase = false;
            QTextToSpeech::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtexttospeech_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTextToSpeech::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtexttospeech_childevent_isbase) {
            qtexttospeech_childevent_isbase = false;
            QTextToSpeech::childEvent(event);
            return;
        }
        auto childevent_cb = qtexttospeech_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTextToSpeech::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtexttospeech_customevent_isbase) {
            qtexttospeech_customevent_isbase = false;
            QTextToSpeech::customEvent(event);
            return;
        }
        auto customevent_cb = qtexttospeech_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTextToSpeech::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtexttospeech_connectnotify_isbase) {
            qtexttospeech_connectnotify_isbase = false;
            QTextToSpeech::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtexttospeech_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTextToSpeech::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtexttospeech_disconnectnotify_isbase) {
            qtexttospeech_disconnectnotify_isbase = false;
            QTextToSpeech::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtexttospeech_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTextToSpeech::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QVoice> allVoices(const QLocale* locale) const {
        if (qtexttospeech_allvoices_isbase) {
            qtexttospeech_allvoices_isbase = false;
            return QTextToSpeech::allVoices(locale);
        }
        auto allvoices_cb = qtexttospeech_allvoices_callback;
        if (allvoices_cb) {
            QLocale* cbval1 = (QLocale*)locale;

            libqt_list /* of QVoice* */ callback_ret = allvoices_cb(this, cbval1);
            QList<QVoice> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QVoice** callback_ret_arr = static_cast<QVoice**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTextToSpeech::allVoices(locale);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtexttospeech_sender_isbase) {
            qtexttospeech_sender_isbase = false;
            return QTextToSpeech::sender();
        }
        auto sender_cb = qtexttospeech_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTextToSpeech::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtexttospeech_sendersignalindex_isbase) {
            qtexttospeech_sendersignalindex_isbase = false;
            return QTextToSpeech::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtexttospeech_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeech::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtexttospeech_receivers_isbase) {
            qtexttospeech_receivers_isbase = false;
            return QTextToSpeech::receivers(signal);
        }
        auto receivers_cb = qtexttospeech_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextToSpeech::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtexttospeech_issignalconnected_isbase) {
            qtexttospeech_issignalconnected_isbase = false;
            return QTextToSpeech::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtexttospeech_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextToSpeech::isSignalConnected(signal);
    }

    // Friend functions
    friend void QTextToSpeech_TimerEvent(QTextToSpeech* self, QTimerEvent* event);
    friend void QTextToSpeech_SuperTimerEvent(QTextToSpeech* self, QTimerEvent* event);
    friend void QTextToSpeech_ChildEvent(QTextToSpeech* self, QChildEvent* event);
    friend void QTextToSpeech_SuperChildEvent(QTextToSpeech* self, QChildEvent* event);
    friend void QTextToSpeech_CustomEvent(QTextToSpeech* self, QEvent* event);
    friend void QTextToSpeech_SuperCustomEvent(QTextToSpeech* self, QEvent* event);
    friend void QTextToSpeech_ConnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
    friend void QTextToSpeech_SuperConnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
    friend void QTextToSpeech_DisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
    friend void QTextToSpeech_SuperDisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal);
    friend libqt_list /* of QVoice* */ QTextToSpeech_AllVoices(const QTextToSpeech* self, const QLocale* locale);
    friend libqt_list /* of QVoice* */ QTextToSpeech_SuperAllVoices(const QTextToSpeech* self, const QLocale* locale);
    friend QObject* QTextToSpeech_Sender(const QTextToSpeech* self);
    friend QObject* QTextToSpeech_SuperSender(const QTextToSpeech* self);
    friend int QTextToSpeech_SenderSignalIndex(const QTextToSpeech* self);
    friend int QTextToSpeech_SuperSenderSignalIndex(const QTextToSpeech* self);
    friend int QTextToSpeech_Receivers(const QTextToSpeech* self, const char* signal);
    friend int QTextToSpeech_SuperReceivers(const QTextToSpeech* self, const char* signal);
    friend bool QTextToSpeech_IsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal);
    friend bool QTextToSpeech_SuperIsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal);
};

#endif
