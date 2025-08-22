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
    using QTextList_BlockList_Callback = QTextBlock** (*)();
    using QTextList_Sender_Callback = QObject* (*)();
    using QTextList_SenderSignalIndex_Callback = int (*)();
    using QTextList_Receivers_Callback = int (*)(const QTextList*, const char*);
    using QTextList_IsSignalConnected_Callback = bool (*)(const QTextList*, QMetaMethod*);

  protected:
    // Instance callback storage
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

    ~VirtualQTextList() {
        qtextlist_metacall_callback = nullptr;
        qtextlist_blockinserted_callback = nullptr;
        qtextlist_blockremoved_callback = nullptr;
        qtextlist_blockformatchanged_callback = nullptr;
        qtextlist_event_callback = nullptr;
        qtextlist_eventfilter_callback = nullptr;
        qtextlist_timerevent_callback = nullptr;
        qtextlist_childevent_callback = nullptr;
        qtextlist_customevent_callback = nullptr;
        qtextlist_connectnotify_callback = nullptr;
        qtextlist_disconnectnotify_callback = nullptr;
        qtextlist_blocklist_callback = nullptr;
        qtextlist_sender_callback = nullptr;
        qtextlist_sendersignalindex_callback = nullptr;
        qtextlist_receivers_callback = nullptr;
        qtextlist_issignalconnected_callback = nullptr;
    }

    // Callback setters
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
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextlist_metacall_isbase) {
            qtextlist_metacall_isbase = false;
            return QTextList::qt_metacall(param1, param2, param3);
        } else if (qtextlist_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qtextlist_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QTextList::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockInserted(const QTextBlock& block) override {
        if (qtextlist_blockinserted_isbase) {
            qtextlist_blockinserted_isbase = false;
            QTextList::blockInserted(block);
        } else if (qtextlist_blockinserted_callback != nullptr) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            qtextlist_blockinserted_callback(this, cbval1);
        } else {
            QTextList::blockInserted(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockRemoved(const QTextBlock& block) override {
        if (qtextlist_blockremoved_isbase) {
            qtextlist_blockremoved_isbase = false;
            QTextList::blockRemoved(block);
        } else if (qtextlist_blockremoved_callback != nullptr) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            qtextlist_blockremoved_callback(this, cbval1);
        } else {
            QTextList::blockRemoved(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockFormatChanged(const QTextBlock& block) override {
        if (qtextlist_blockformatchanged_isbase) {
            qtextlist_blockformatchanged_isbase = false;
            QTextList::blockFormatChanged(block);
        } else if (qtextlist_blockformatchanged_callback != nullptr) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);

            qtextlist_blockformatchanged_callback(this, cbval1);
        } else {
            QTextList::blockFormatChanged(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextlist_event_isbase) {
            qtextlist_event_isbase = false;
            return QTextList::event(event);
        } else if (qtextlist_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qtextlist_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextList::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextlist_eventfilter_isbase) {
            qtextlist_eventfilter_isbase = false;
            return QTextList::eventFilter(watched, event);
        } else if (qtextlist_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qtextlist_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QTextList::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextlist_timerevent_isbase) {
            qtextlist_timerevent_isbase = false;
            QTextList::timerEvent(event);
        } else if (qtextlist_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qtextlist_timerevent_callback(this, cbval1);
        } else {
            QTextList::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextlist_childevent_isbase) {
            qtextlist_childevent_isbase = false;
            QTextList::childEvent(event);
        } else if (qtextlist_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qtextlist_childevent_callback(this, cbval1);
        } else {
            QTextList::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextlist_customevent_isbase) {
            qtextlist_customevent_isbase = false;
            QTextList::customEvent(event);
        } else if (qtextlist_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qtextlist_customevent_callback(this, cbval1);
        } else {
            QTextList::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextlist_connectnotify_isbase) {
            qtextlist_connectnotify_isbase = false;
            QTextList::connectNotify(signal);
        } else if (qtextlist_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtextlist_connectnotify_callback(this, cbval1);
        } else {
            QTextList::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextlist_disconnectnotify_isbase) {
            qtextlist_disconnectnotify_isbase = false;
            QTextList::disconnectNotify(signal);
        } else if (qtextlist_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qtextlist_disconnectnotify_callback(this, cbval1);
        } else {
            QTextList::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QList<QTextBlock> blockList() const {
        if (qtextlist_blocklist_isbase) {
            qtextlist_blocklist_isbase = false;
            return QTextList::blockList();
        } else if (qtextlist_blocklist_callback != nullptr) {
            QTextBlock** callback_ret = qtextlist_blocklist_callback();
            QList<QTextBlock> callback_ret_QList;
            // Iterate until null pointer sentinel
            for (QTextBlock** ptridx = callback_ret; *ptridx != nullptr; ptridx++) {
                callback_ret_QList.push_back(**ptridx);
            }
            free(callback_ret);
            return callback_ret_QList;
        } else {
            return QTextList::blockList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextlist_sender_isbase) {
            qtextlist_sender_isbase = false;
            return QTextList::sender();
        } else if (qtextlist_sender_callback != nullptr) {
            QObject* callback_ret = qtextlist_sender_callback();
            return callback_ret;
        } else {
            return QTextList::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextlist_sendersignalindex_isbase) {
            qtextlist_sendersignalindex_isbase = false;
            return QTextList::senderSignalIndex();
        } else if (qtextlist_sendersignalindex_callback != nullptr) {
            int callback_ret = qtextlist_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QTextList::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextlist_receivers_isbase) {
            qtextlist_receivers_isbase = false;
            return QTextList::receivers(signal);
        } else if (qtextlist_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qtextlist_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QTextList::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextlist_issignalconnected_isbase) {
            qtextlist_issignalconnected_isbase = false;
            return QTextList::isSignalConnected(signal);
        } else if (qtextlist_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qtextlist_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QTextList::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QTextList_BlockInserted(QTextList* self, const QTextBlock* block);
    friend void QTextList_QBaseBlockInserted(QTextList* self, const QTextBlock* block);
    friend void QTextList_BlockRemoved(QTextList* self, const QTextBlock* block);
    friend void QTextList_QBaseBlockRemoved(QTextList* self, const QTextBlock* block);
    friend void QTextList_BlockFormatChanged(QTextList* self, const QTextBlock* block);
    friend void QTextList_QBaseBlockFormatChanged(QTextList* self, const QTextBlock* block);
    friend void QTextList_TimerEvent(QTextList* self, QTimerEvent* event);
    friend void QTextList_QBaseTimerEvent(QTextList* self, QTimerEvent* event);
    friend void QTextList_ChildEvent(QTextList* self, QChildEvent* event);
    friend void QTextList_QBaseChildEvent(QTextList* self, QChildEvent* event);
    friend void QTextList_CustomEvent(QTextList* self, QEvent* event);
    friend void QTextList_QBaseCustomEvent(QTextList* self, QEvent* event);
    friend void QTextList_ConnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_QBaseConnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_DisconnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_QBaseDisconnectNotify(QTextList* self, const QMetaMethod* signal);
    friend libqt_list /* of QTextBlock* */ QTextList_BlockList(const QTextList* self);
    friend libqt_list /* of QTextBlock* */ QTextList_QBaseBlockList(const QTextList* self);
    friend QObject* QTextList_Sender(const QTextList* self);
    friend QObject* QTextList_QBaseSender(const QTextList* self);
    friend int QTextList_SenderSignalIndex(const QTextList* self);
    friend int QTextList_QBaseSenderSignalIndex(const QTextList* self);
    friend int QTextList_Receivers(const QTextList* self, const char* signal);
    friend int QTextList_QBaseReceivers(const QTextList* self, const char* signal);
    friend bool QTextList_IsSignalConnected(const QTextList* self, const QMetaMethod* signal);
    friend bool QTextList_QBaseIsSignalConnected(const QTextList* self, const QMetaMethod* signal);
};

#endif
