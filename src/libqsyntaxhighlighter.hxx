#pragma once
#ifndef LIBQSYNTAXHIGHLIGHTER_HXX
#define LIBQSYNTAXHIGHLIGHTER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSyntaxHighlighter
class VirtualQSyntaxHighlighter : public QSyntaxHighlighter {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSyntaxHighlighter_MetaObject_Callback = QMetaObject* (*)(const QSyntaxHighlighter*);
    using QSyntaxHighlighter_Metacast_Callback = void* (*)(QSyntaxHighlighter*, const char*);
    using QSyntaxHighlighter_Metacall_Callback = int (*)(QSyntaxHighlighter*, int, int, void**);
    using QSyntaxHighlighter_HighlightBlock_Callback = void (*)(QSyntaxHighlighter*, const char*);
    using QSyntaxHighlighter_Event_Callback = bool (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_EventFilter_Callback = bool (*)(QSyntaxHighlighter*, QObject*, QEvent*);
    using QSyntaxHighlighter_TimerEvent_Callback = void (*)(QSyntaxHighlighter*, QTimerEvent*);
    using QSyntaxHighlighter_ChildEvent_Callback = void (*)(QSyntaxHighlighter*, QChildEvent*);
    using QSyntaxHighlighter_CustomEvent_Callback = void (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_ConnectNotify_Callback = void (*)(QSyntaxHighlighter*, QMetaMethod*);
    using QSyntaxHighlighter_DisconnectNotify_Callback = void (*)(QSyntaxHighlighter*, QMetaMethod*);
    using QSyntaxHighlighter::currentBlock;
    using QSyntaxHighlighter::currentBlockState;
    using QSyntaxHighlighter::currentBlockUserData;
    using QSyntaxHighlighter::format;
    using QSyntaxHighlighter::isSignalConnected;
    using QSyntaxHighlighter::previousBlockState;
    using QSyntaxHighlighter::receivers;
    using QSyntaxHighlighter::sender;
    using QSyntaxHighlighter::senderSignalIndex;
    using QSyntaxHighlighter::setCurrentBlockState;
    using QSyntaxHighlighter::setCurrentBlockUserData;
    using QSyntaxHighlighter::setFormat;

    // Instance callback storage
    QSyntaxHighlighter_MetaObject_Callback qsyntaxhighlighter_metaobject_callback = nullptr;
    QSyntaxHighlighter_Metacast_Callback qsyntaxhighlighter_metacast_callback = nullptr;
    QSyntaxHighlighter_Metacall_Callback qsyntaxhighlighter_metacall_callback = nullptr;
    QSyntaxHighlighter_HighlightBlock_Callback qsyntaxhighlighter_highlightblock_callback = nullptr;
    QSyntaxHighlighter_Event_Callback qsyntaxhighlighter_event_callback = nullptr;
    QSyntaxHighlighter_EventFilter_Callback qsyntaxhighlighter_eventfilter_callback = nullptr;
    QSyntaxHighlighter_TimerEvent_Callback qsyntaxhighlighter_timerevent_callback = nullptr;
    QSyntaxHighlighter_ChildEvent_Callback qsyntaxhighlighter_childevent_callback = nullptr;
    QSyntaxHighlighter_CustomEvent_Callback qsyntaxhighlighter_customevent_callback = nullptr;
    QSyntaxHighlighter_ConnectNotify_Callback qsyntaxhighlighter_connectnotify_callback = nullptr;
    QSyntaxHighlighter_DisconnectNotify_Callback qsyntaxhighlighter_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSyntaxHighlighter {
        using QSyntaxHighlighter::childEvent;
        using QSyntaxHighlighter::connectNotify;
        using QSyntaxHighlighter::customEvent;
        using QSyntaxHighlighter::disconnectNotify;
        using QSyntaxHighlighter::highlightBlock;
        using QSyntaxHighlighter::timerEvent;
    };

    VirtualQSyntaxHighlighter(QObject* parent) : QSyntaxHighlighter(parent) {};
    VirtualQSyntaxHighlighter(QTextDocument* parent) : QSyntaxHighlighter(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsyntaxhighlighter_metaobject_callback) {
            QMetaObject* callback_ret = qsyntaxhighlighter_metaobject_callback(this);
            return callback_ret;
        }
        return QSyntaxHighlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsyntaxhighlighter_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsyntaxhighlighter_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSyntaxHighlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsyntaxhighlighter_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsyntaxhighlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSyntaxHighlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (qsyntaxhighlighter_highlightblock_callback) {
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;
            qsyntaxhighlighter_highlightblock_callback(this, cbval1);
            libqt_free(text_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QSyntaxHighlighter::highlightBlock called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsyntaxhighlighter_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsyntaxhighlighter_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSyntaxHighlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsyntaxhighlighter_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsyntaxhighlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSyntaxHighlighter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsyntaxhighlighter_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsyntaxhighlighter_timerevent_callback(this, cbval1);
            return;
        }
        QSyntaxHighlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsyntaxhighlighter_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsyntaxhighlighter_childevent_callback(this, cbval1);
            return;
        }
        QSyntaxHighlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsyntaxhighlighter_customevent_callback) {
            QEvent* cbval1 = event;
            qsyntaxhighlighter_customevent_callback(this, cbval1);
            return;
        }
        QSyntaxHighlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsyntaxhighlighter_connectnotify_callback(this, cbval1);
            return;
        }
        QSyntaxHighlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsyntaxhighlighter_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSyntaxHighlighter::disconnectNotify(signal);
    }

    // Friend functions
    friend void QSyntaxHighlighter_SuperTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
    friend void QSyntaxHighlighter_SuperChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
    friend void QSyntaxHighlighter_SuperCustomEvent(QSyntaxHighlighter* self, QEvent* event);
    friend void QSyntaxHighlighter_SuperConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend void QSyntaxHighlighter_SuperDisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
};

#endif
