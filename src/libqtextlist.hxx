#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTLIST_H
#define SRCC_LIBVIRTUALQTEXTLIST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextList so that we can call protected methods
class VirtualQTextList final : public QTextList {

  public:
    // Virtual class boolean flag
    bool isVirtualQTextList = true;

    // Virtual class public types (including callbacks)
    using QTextList_MetaObject_Callback = QMetaObject* (*)();
    using QTextList_Metacast_Callback = void* (*)(QTextList*, const char*);
    using QTextList_Metacall_Callback = int (*)(QTextList*, int, int, void**);
    using QTextList_BlockInserted_Callback = void (*)(QTextList*, QTextBlock*);
    using QTextList_BlockRemoved_Callback = void (*)(QTextList*, QTextBlock*);
    using QTextList_BlockFormatChanged_Callback = void (*)(QTextList*, QTextBlock*);
    using QTextList_Event_Callback = bool (*)(QTextList*, QEvent*);
    using QTextList_EventFilter_Callback = bool (*)(QTextList*, QObject*, QEvent*);
    using QTextList_TimerEvent_Callback = void (*)(QTextList*, QTimerEvent*);
    using QTextList_ChildEvent_Callback = void (*)(QTextList*, QChildEvent*);
    using QTextList_CustomEvent_Callback = void (*)(QTextList*, QEvent*);
    using QTextList_ConnectNotify_Callback = void (*)(QTextList*, QMetaMethod*);
    using QTextList_DisconnectNotify_Callback = void (*)(QTextList*, QMetaMethod*);
    using QTextList_BlockList_Callback = libqt_list /* of QTextBlock* */ (*)();
    using QTextList_Sender_Callback = QObject* (*)();
    using QTextList_SenderSignalIndex_Callback = int (*)();
    using QTextList_Receivers_Callback = int (*)(const QTextList*, const char*);
    using QTextList_IsSignalConnected_Callback = bool (*)(const QTextList*, QMetaMethod*);

  protected:
    // Instance callback storage
    QTextList_MetaObject_Callback qtextlist_metaobject_callback = nullptr;
    QTextList_Metacast_Callback qtextlist_metacast_callback = nullptr;
    QTextList_Metacall_Callback qtextlist_metacall_callback = nullptr;
    QTextList_BlockInserted_Callback qtextlist_blockinserted_callback = nullptr;
    QTextList_BlockRemoved_Callback qtextlist_blockremoved_callback = nullptr;
    QTextList_BlockFormatChanged_Callback qtextlist_blockformatchanged_callback = nullptr;
    QTextList_Event_Callback qtextlist_event_callback = nullptr;
    QTextList_EventFilter_Callback qtextlist_eventfilter_callback = nullptr;
    QTextList_TimerEvent_Callback qtextlist_timerevent_callback = nullptr;
    QTextList_ChildEvent_Callback qtextlist_childevent_callback = nullptr;
    QTextList_CustomEvent_Callback qtextlist_customevent_callback = nullptr;
    QTextList_ConnectNotify_Callback qtextlist_connectnotify_callback = nullptr;
    QTextList_DisconnectNotify_Callback qtextlist_disconnectnotify_callback = nullptr;
    QTextList_BlockList_Callback qtextlist_blocklist_callback = nullptr;
    QTextList_Sender_Callback qtextlist_sender_callback = nullptr;
    QTextList_SenderSignalIndex_Callback qtextlist_sendersignalindex_callback = nullptr;
    QTextList_Receivers_Callback qtextlist_receivers_callback = nullptr;
    QTextList_IsSignalConnected_Callback qtextlist_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtextlist_metaobject_isbase = false;
    mutable bool qtextlist_metacast_isbase = false;
    mutable bool qtextlist_metacall_isbase = false;
    mutable bool qtextlist_blockinserted_isbase = false;
    mutable bool qtextlist_blockremoved_isbase = false;
    mutable bool qtextlist_blockformatchanged_isbase = false;
    mutable bool qtextlist_event_isbase = false;
    mutable bool qtextlist_eventfilter_isbase = false;
    mutable bool qtextlist_timerevent_isbase = false;
    mutable bool qtextlist_childevent_isbase = false;
    mutable bool qtextlist_customevent_isbase = false;
    mutable bool qtextlist_connectnotify_isbase = false;
    mutable bool qtextlist_disconnectnotify_isbase = false;
    mutable bool qtextlist_blocklist_isbase = false;
    mutable bool qtextlist_sender_isbase = false;
    mutable bool qtextlist_sendersignalindex_isbase = false;
    mutable bool qtextlist_receivers_isbase = false;
    mutable bool qtextlist_issignalconnected_isbase = false;

  public:
    VirtualQTextList(QTextDocument* doc) : QTextList(doc) {};

    // Callback setters
    inline void setQTextList_MetaObject_Callback(QTextList_MetaObject_Callback cb) { qtextlist_metaobject_callback = cb; }
    inline void setQTextList_Metacast_Callback(QTextList_Metacast_Callback cb) { qtextlist_metacast_callback = cb; }
    inline void setQTextList_Metacall_Callback(QTextList_Metacall_Callback cb) { qtextlist_metacall_callback = cb; }
    inline void setQTextList_BlockInserted_Callback(QTextList_BlockInserted_Callback cb) { qtextlist_blockinserted_callback = cb; }
    inline void setQTextList_BlockRemoved_Callback(QTextList_BlockRemoved_Callback cb) { qtextlist_blockremoved_callback = cb; }
    inline void setQTextList_BlockFormatChanged_Callback(QTextList_BlockFormatChanged_Callback cb) { qtextlist_blockformatchanged_callback = cb; }
    inline void setQTextList_Event_Callback(QTextList_Event_Callback cb) { qtextlist_event_callback = cb; }
    inline void setQTextList_EventFilter_Callback(QTextList_EventFilter_Callback cb) { qtextlist_eventfilter_callback = cb; }
    inline void setQTextList_TimerEvent_Callback(QTextList_TimerEvent_Callback cb) { qtextlist_timerevent_callback = cb; }
    inline void setQTextList_ChildEvent_Callback(QTextList_ChildEvent_Callback cb) { qtextlist_childevent_callback = cb; }
    inline void setQTextList_CustomEvent_Callback(QTextList_CustomEvent_Callback cb) { qtextlist_customevent_callback = cb; }
    inline void setQTextList_ConnectNotify_Callback(QTextList_ConnectNotify_Callback cb) { qtextlist_connectnotify_callback = cb; }
    inline void setQTextList_DisconnectNotify_Callback(QTextList_DisconnectNotify_Callback cb) { qtextlist_disconnectnotify_callback = cb; }
    inline void setQTextList_BlockList_Callback(QTextList_BlockList_Callback cb) { qtextlist_blocklist_callback = cb; }
    inline void setQTextList_Sender_Callback(QTextList_Sender_Callback cb) { qtextlist_sender_callback = cb; }
    inline void setQTextList_SenderSignalIndex_Callback(QTextList_SenderSignalIndex_Callback cb) { qtextlist_sendersignalindex_callback = cb; }
    inline void setQTextList_Receivers_Callback(QTextList_Receivers_Callback cb) { qtextlist_receivers_callback = cb; }
    inline void setQTextList_IsSignalConnected_Callback(QTextList_IsSignalConnected_Callback cb) { qtextlist_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQTextList_MetaObject_IsBase(bool value) const { qtextlist_metaobject_isbase = value; }
    inline void setQTextList_Metacast_IsBase(bool value) const { qtextlist_metacast_isbase = value; }
    inline void setQTextList_Metacall_IsBase(bool value) const { qtextlist_metacall_isbase = value; }
    inline void setQTextList_BlockInserted_IsBase(bool value) const { qtextlist_blockinserted_isbase = value; }
    inline void setQTextList_BlockRemoved_IsBase(bool value) const { qtextlist_blockremoved_isbase = value; }
    inline void setQTextList_BlockFormatChanged_IsBase(bool value) const { qtextlist_blockformatchanged_isbase = value; }
    inline void setQTextList_Event_IsBase(bool value) const { qtextlist_event_isbase = value; }
    inline void setQTextList_EventFilter_IsBase(bool value) const { qtextlist_eventfilter_isbase = value; }
    inline void setQTextList_TimerEvent_IsBase(bool value) const { qtextlist_timerevent_isbase = value; }
    inline void setQTextList_ChildEvent_IsBase(bool value) const { qtextlist_childevent_isbase = value; }
    inline void setQTextList_CustomEvent_IsBase(bool value) const { qtextlist_customevent_isbase = value; }
    inline void setQTextList_ConnectNotify_IsBase(bool value) const { qtextlist_connectnotify_isbase = value; }
    inline void setQTextList_DisconnectNotify_IsBase(bool value) const { qtextlist_disconnectnotify_isbase = value; }
    inline void setQTextList_BlockList_IsBase(bool value) const { qtextlist_blocklist_isbase = value; }
    inline void setQTextList_Sender_IsBase(bool value) const { qtextlist_sender_isbase = value; }
    inline void setQTextList_SenderSignalIndex_IsBase(bool value) const { qtextlist_sendersignalindex_isbase = value; }
    inline void setQTextList_Receivers_IsBase(bool value) const { qtextlist_receivers_isbase = value; }
    inline void setQTextList_IsSignalConnected_IsBase(bool value) const { qtextlist_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextlist_metaobject_isbase) {
            qtextlist_metaobject_isbase = false;
            return QTextList::metaObject();
        }
        auto metaobject_cb = qtextlist_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QTextList::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextlist_metacast_isbase) {
            qtextlist_metacast_isbase = false;
            return QTextList::qt_metacast(param1);
        }
        auto metacast_cb = qtextlist_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QTextList::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextlist_metacall_isbase) {
            qtextlist_metacall_isbase = false;
            return QTextList::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qtextlist_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextList::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockInserted(const QTextBlock& block) override {
        if (qtextlist_blockinserted_isbase) {
            qtextlist_blockinserted_isbase = false;
            QTextList::blockInserted(block);
            return;
        }
        auto blockinserted_cb = qtextlist_blockinserted_callback;
        if (blockinserted_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            blockinserted_cb(this, cbval1);
            return;
        }
        QTextList::blockInserted(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockRemoved(const QTextBlock& block) override {
        if (qtextlist_blockremoved_isbase) {
            qtextlist_blockremoved_isbase = false;
            QTextList::blockRemoved(block);
            return;
        }
        auto blockremoved_cb = qtextlist_blockremoved_callback;
        if (blockremoved_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            blockremoved_cb(this, cbval1);
            return;
        }
        QTextList::blockRemoved(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockFormatChanged(const QTextBlock& block) override {
        if (qtextlist_blockformatchanged_isbase) {
            qtextlist_blockformatchanged_isbase = false;
            QTextList::blockFormatChanged(block);
            return;
        }
        auto blockformatchanged_cb = qtextlist_blockformatchanged_callback;
        if (blockformatchanged_cb) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            blockformatchanged_cb(this, cbval1);
            return;
        }
        QTextList::blockFormatChanged(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextlist_event_isbase) {
            qtextlist_event_isbase = false;
            return QTextList::event(event);
        }
        auto event_cb = qtextlist_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QTextList::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextlist_eventfilter_isbase) {
            qtextlist_eventfilter_isbase = false;
            return QTextList::eventFilter(watched, event);
        }
        auto eventfilter_cb = qtextlist_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextList::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextlist_timerevent_isbase) {
            qtextlist_timerevent_isbase = false;
            QTextList::timerEvent(event);
            return;
        }
        auto timerevent_cb = qtextlist_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QTextList::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextlist_childevent_isbase) {
            qtextlist_childevent_isbase = false;
            QTextList::childEvent(event);
            return;
        }
        auto childevent_cb = qtextlist_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QTextList::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextlist_customevent_isbase) {
            qtextlist_customevent_isbase = false;
            QTextList::customEvent(event);
            return;
        }
        auto customevent_cb = qtextlist_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QTextList::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextlist_connectnotify_isbase) {
            qtextlist_connectnotify_isbase = false;
            QTextList::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qtextlist_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QTextList::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextlist_disconnectnotify_isbase) {
            qtextlist_disconnectnotify_isbase = false;
            QTextList::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qtextlist_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QTextList::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QTextBlock> blockList() const {
        if (qtextlist_blocklist_isbase) {
            qtextlist_blocklist_isbase = false;
            return QTextList::blockList();
        }
        auto blocklist_cb = qtextlist_blocklist_callback;
        if (blocklist_cb) {
            libqt_list /* of QTextBlock* */ callback_ret = blocklist_cb();
            QList<QTextBlock> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QTextBlock** callback_ret_arr = static_cast<QTextBlock**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QTextList::blockList();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextlist_sender_isbase) {
            qtextlist_sender_isbase = false;
            return QTextList::sender();
        }
        auto sender_cb = qtextlist_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QTextList::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextlist_sendersignalindex_isbase) {
            qtextlist_sendersignalindex_isbase = false;
            return QTextList::senderSignalIndex();
        }
        auto sendersignalindex_cb = qtextlist_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QTextList::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextlist_receivers_isbase) {
            qtextlist_receivers_isbase = false;
            return QTextList::receivers(signal);
        }
        auto receivers_cb = qtextlist_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTextList::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextlist_issignalconnected_isbase) {
            qtextlist_issignalconnected_isbase = false;
            return QTextList::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qtextlist_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QTextList::isSignalConnected(signal);
    }

    // Friend functions
    friend void QTextList_BlockInserted(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperBlockInserted(QTextList* self, const QTextBlock* block);
    friend void QTextList_BlockRemoved(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperBlockRemoved(QTextList* self, const QTextBlock* block);
    friend void QTextList_BlockFormatChanged(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperBlockFormatChanged(QTextList* self, const QTextBlock* block);
    friend void QTextList_TimerEvent(QTextList* self, QTimerEvent* event);
    friend void QTextList_SuperTimerEvent(QTextList* self, QTimerEvent* event);
    friend void QTextList_ChildEvent(QTextList* self, QChildEvent* event);
    friend void QTextList_SuperChildEvent(QTextList* self, QChildEvent* event);
    friend void QTextList_CustomEvent(QTextList* self, QEvent* event);
    friend void QTextList_SuperCustomEvent(QTextList* self, QEvent* event);
    friend void QTextList_ConnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_SuperConnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_DisconnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_SuperDisconnectNotify(QTextList* self, const QMetaMethod* signal);
    friend libqt_list /* of QTextBlock* */ QTextList_BlockList(const QTextList* self);
    friend libqt_list /* of QTextBlock* */ QTextList_SuperBlockList(const QTextList* self);
    friend QObject* QTextList_Sender(const QTextList* self);
    friend QObject* QTextList_SuperSender(const QTextList* self);
    friend int QTextList_SenderSignalIndex(const QTextList* self);
    friend int QTextList_SuperSenderSignalIndex(const QTextList* self);
    friend int QTextList_Receivers(const QTextList* self, const char* signal);
    friend int QTextList_SuperReceivers(const QTextList* self, const char* signal);
    friend bool QTextList_IsSignalConnected(const QTextList* self, const QMetaMethod* signal);
    friend bool QTextList_SuperIsSignalConnected(const QTextList* self, const QMetaMethod* signal);
};

#endif
