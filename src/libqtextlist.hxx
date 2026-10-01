#pragma once
#ifndef LIBQTEXTLIST_HXX
#define LIBQTEXTLIST_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextList
class VirtualQTextList final : public QTextList {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTextList_MetaObject_Callback = QMetaObject* (*)(const QTextList*);
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
    using QTextList::blockList;
    using QTextList::isSignalConnected;
    using QTextList::receivers;
    using QTextList::sender;
    using QTextList::senderSignalIndex;

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

    // Access struct
    struct Base : QTextList {
        using QTextList::blockFormatChanged;
        using QTextList::blockInserted;
        using QTextList::blockRemoved;
        using QTextList::childEvent;
        using QTextList::connectNotify;
        using QTextList::customEvent;
        using QTextList::disconnectNotify;
        using QTextList::timerEvent;
    };

    VirtualQTextList(QTextDocument* doc) : QTextList(doc) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtextlist_metaobject_callback) {
            QMetaObject* callback_ret = qtextlist_metaobject_callback(this);
            return callback_ret;
        }
        return QTextList::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtextlist_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtextlist_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTextList::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextlist_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtextlist_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTextList::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockInserted(const QTextBlock& block) override {
        if (qtextlist_blockinserted_callback) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            qtextlist_blockinserted_callback(this, cbval1);
            return;
        }
        QTextList::blockInserted(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockRemoved(const QTextBlock& block) override {
        if (qtextlist_blockremoved_callback) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            qtextlist_blockremoved_callback(this, cbval1);
            return;
        }
        QTextList::blockRemoved(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void blockFormatChanged(const QTextBlock& block) override {
        if (qtextlist_blockformatchanged_callback) {
            const QTextBlock& block_ret = block;
            // Cast returned reference into pointer
            QTextBlock* cbval1 = const_cast<QTextBlock*>(&block_ret);
            qtextlist_blockformatchanged_callback(this, cbval1);
            return;
        }
        QTextList::blockFormatChanged(block);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtextlist_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtextlist_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTextList::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtextlist_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtextlist_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTextList::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtextlist_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtextlist_timerevent_callback(this, cbval1);
            return;
        }
        QTextList::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextlist_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtextlist_childevent_callback(this, cbval1);
            return;
        }
        QTextList::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextlist_customevent_callback) {
            QEvent* cbval1 = event;
            qtextlist_customevent_callback(this, cbval1);
            return;
        }
        QTextList::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextlist_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextlist_connectnotify_callback(this, cbval1);
            return;
        }
        QTextList::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextlist_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtextlist_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTextList::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTextList_SuperBlockInserted(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperBlockRemoved(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperBlockFormatChanged(QTextList* self, const QTextBlock* block);
    friend void QTextList_SuperTimerEvent(QTextList* self, QTimerEvent* event);
    friend void QTextList_SuperChildEvent(QTextList* self, QChildEvent* event);
    friend void QTextList_SuperCustomEvent(QTextList* self, QEvent* event);
    friend void QTextList_SuperConnectNotify(QTextList* self, const QMetaMethod* signal);
    friend void QTextList_SuperDisconnectNotify(QTextList* self, const QMetaMethod* signal);
};

#endif
