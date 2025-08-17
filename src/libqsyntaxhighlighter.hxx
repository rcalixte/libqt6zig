#pragma once
#ifndef SRCC_LIBVIRTUALQSYNTAXHIGHLIGHTER_H
#define SRCC_LIBVIRTUALQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSyntaxHighlighter so that we can call protected methods
class VirtualQSyntaxHighlighter final : public QSyntaxHighlighter {

  public:
    // Virtual class boolean flag
    bool isVirtualQSyntaxHighlighter = true;

    // Virtual class public types (including callbacks)
    using QSyntaxHighlighter_Metacall_Callback = int (*)(QSyntaxHighlighter*, int, int, void**);
    using QSyntaxHighlighter_HighlightBlock_Callback = void (*)(QSyntaxHighlighter*, libqt_string);
    using QSyntaxHighlighter_Event_Callback = bool (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_EventFilter_Callback = bool (*)(QSyntaxHighlighter*, QObject*, QEvent*);
    using QSyntaxHighlighter_TimerEvent_Callback = void (*)(QSyntaxHighlighter*, QTimerEvent*);
    using QSyntaxHighlighter_ChildEvent_Callback = void (*)(QSyntaxHighlighter*, QChildEvent*);
    using QSyntaxHighlighter_CustomEvent_Callback = void (*)(QSyntaxHighlighter*, QEvent*);
    using QSyntaxHighlighter_ConnectNotify_Callback = void (*)(QSyntaxHighlighter*, QMetaMethod*);
    using QSyntaxHighlighter_DisconnectNotify_Callback = void (*)(QSyntaxHighlighter*, QMetaMethod*);
    using QSyntaxHighlighter_SetFormat_Callback = void (*)(QSyntaxHighlighter*, int, int, QTextCharFormat*);
    using QSyntaxHighlighter_SetFormat2_Callback = void (*)(QSyntaxHighlighter*, int, int, QColor*);
    using QSyntaxHighlighter_SetFormat3_Callback = void (*)(QSyntaxHighlighter*, int, int, QFont*);
    using QSyntaxHighlighter_Format_Callback = QTextCharFormat* (*)(const QSyntaxHighlighter*, int);
    using QSyntaxHighlighter_PreviousBlockState_Callback = int (*)();
    using QSyntaxHighlighter_CurrentBlockState_Callback = int (*)();
    using QSyntaxHighlighter_SetCurrentBlockState_Callback = void (*)(QSyntaxHighlighter*, int);
    using QSyntaxHighlighter_SetCurrentBlockUserData_Callback = void (*)(QSyntaxHighlighter*, QTextBlockUserData*);
    using QSyntaxHighlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
    using QSyntaxHighlighter_CurrentBlock_Callback = QTextBlock* (*)();
    using QSyntaxHighlighter_Sender_Callback = QObject* (*)();
    using QSyntaxHighlighter_SenderSignalIndex_Callback = int (*)();
    using QSyntaxHighlighter_Receivers_Callback = int (*)(const QSyntaxHighlighter*, const char*);
    using QSyntaxHighlighter_IsSignalConnected_Callback = bool (*)(const QSyntaxHighlighter*, QMetaMethod*);

  protected:
    // Instance callback storage
    QSyntaxHighlighter_Metacall_Callback qsyntaxhighlighter_metacall_callback = nullptr;
    QSyntaxHighlighter_HighlightBlock_Callback qsyntaxhighlighter_highlightblock_callback = nullptr;
    QSyntaxHighlighter_Event_Callback qsyntaxhighlighter_event_callback = nullptr;
    QSyntaxHighlighter_EventFilter_Callback qsyntaxhighlighter_eventfilter_callback = nullptr;
    QSyntaxHighlighter_TimerEvent_Callback qsyntaxhighlighter_timerevent_callback = nullptr;
    QSyntaxHighlighter_ChildEvent_Callback qsyntaxhighlighter_childevent_callback = nullptr;
    QSyntaxHighlighter_CustomEvent_Callback qsyntaxhighlighter_customevent_callback = nullptr;
    QSyntaxHighlighter_ConnectNotify_Callback qsyntaxhighlighter_connectnotify_callback = nullptr;
    QSyntaxHighlighter_DisconnectNotify_Callback qsyntaxhighlighter_disconnectnotify_callback = nullptr;
    QSyntaxHighlighter_SetFormat_Callback qsyntaxhighlighter_setformat_callback = nullptr;
    QSyntaxHighlighter_SetFormat2_Callback qsyntaxhighlighter_setformat2_callback = nullptr;
    QSyntaxHighlighter_SetFormat3_Callback qsyntaxhighlighter_setformat3_callback = nullptr;
    QSyntaxHighlighter_Format_Callback qsyntaxhighlighter_format_callback = nullptr;
    QSyntaxHighlighter_PreviousBlockState_Callback qsyntaxhighlighter_previousblockstate_callback = nullptr;
    QSyntaxHighlighter_CurrentBlockState_Callback qsyntaxhighlighter_currentblockstate_callback = nullptr;
    QSyntaxHighlighter_SetCurrentBlockState_Callback qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
    QSyntaxHighlighter_SetCurrentBlockUserData_Callback qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
    QSyntaxHighlighter_CurrentBlockUserData_Callback qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
    QSyntaxHighlighter_CurrentBlock_Callback qsyntaxhighlighter_currentblock_callback = nullptr;
    QSyntaxHighlighter_Sender_Callback qsyntaxhighlighter_sender_callback = nullptr;
    QSyntaxHighlighter_SenderSignalIndex_Callback qsyntaxhighlighter_sendersignalindex_callback = nullptr;
    QSyntaxHighlighter_Receivers_Callback qsyntaxhighlighter_receivers_callback = nullptr;
    QSyntaxHighlighter_IsSignalConnected_Callback qsyntaxhighlighter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsyntaxhighlighter_metacall_isbase = false;
    mutable bool qsyntaxhighlighter_highlightblock_isbase = false;
    mutable bool qsyntaxhighlighter_event_isbase = false;
    mutable bool qsyntaxhighlighter_eventfilter_isbase = false;
    mutable bool qsyntaxhighlighter_timerevent_isbase = false;
    mutable bool qsyntaxhighlighter_childevent_isbase = false;
    mutable bool qsyntaxhighlighter_customevent_isbase = false;
    mutable bool qsyntaxhighlighter_connectnotify_isbase = false;
    mutable bool qsyntaxhighlighter_disconnectnotify_isbase = false;
    mutable bool qsyntaxhighlighter_setformat_isbase = false;
    mutable bool qsyntaxhighlighter_setformat2_isbase = false;
    mutable bool qsyntaxhighlighter_setformat3_isbase = false;
    mutable bool qsyntaxhighlighter_format_isbase = false;
    mutable bool qsyntaxhighlighter_previousblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockstate_isbase = false;
    mutable bool qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblockuserdata_isbase = false;
    mutable bool qsyntaxhighlighter_currentblock_isbase = false;
    mutable bool qsyntaxhighlighter_sender_isbase = false;
    mutable bool qsyntaxhighlighter_sendersignalindex_isbase = false;
    mutable bool qsyntaxhighlighter_receivers_isbase = false;
    mutable bool qsyntaxhighlighter_issignalconnected_isbase = false;

  public:
    VirtualQSyntaxHighlighter(QObject* parent) : QSyntaxHighlighter(parent) {};
    VirtualQSyntaxHighlighter(QTextDocument* parent) : QSyntaxHighlighter(parent) {};

    ~VirtualQSyntaxHighlighter() {
        qsyntaxhighlighter_metacall_callback = nullptr;
        qsyntaxhighlighter_highlightblock_callback = nullptr;
        qsyntaxhighlighter_event_callback = nullptr;
        qsyntaxhighlighter_eventfilter_callback = nullptr;
        qsyntaxhighlighter_timerevent_callback = nullptr;
        qsyntaxhighlighter_childevent_callback = nullptr;
        qsyntaxhighlighter_customevent_callback = nullptr;
        qsyntaxhighlighter_connectnotify_callback = nullptr;
        qsyntaxhighlighter_disconnectnotify_callback = nullptr;
        qsyntaxhighlighter_setformat_callback = nullptr;
        qsyntaxhighlighter_setformat2_callback = nullptr;
        qsyntaxhighlighter_setformat3_callback = nullptr;
        qsyntaxhighlighter_format_callback = nullptr;
        qsyntaxhighlighter_previousblockstate_callback = nullptr;
        qsyntaxhighlighter_currentblockstate_callback = nullptr;
        qsyntaxhighlighter_setcurrentblockstate_callback = nullptr;
        qsyntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
        qsyntaxhighlighter_currentblockuserdata_callback = nullptr;
        qsyntaxhighlighter_currentblock_callback = nullptr;
        qsyntaxhighlighter_sender_callback = nullptr;
        qsyntaxhighlighter_sendersignalindex_callback = nullptr;
        qsyntaxhighlighter_receivers_callback = nullptr;
        qsyntaxhighlighter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQSyntaxHighlighter_Metacall_Callback(QSyntaxHighlighter_Metacall_Callback cb) { qsyntaxhighlighter_metacall_callback = cb; }
    inline void setQSyntaxHighlighter_HighlightBlock_Callback(QSyntaxHighlighter_HighlightBlock_Callback cb) { qsyntaxhighlighter_highlightblock_callback = cb; }
    inline void setQSyntaxHighlighter_Event_Callback(QSyntaxHighlighter_Event_Callback cb) { qsyntaxhighlighter_event_callback = cb; }
    inline void setQSyntaxHighlighter_EventFilter_Callback(QSyntaxHighlighter_EventFilter_Callback cb) { qsyntaxhighlighter_eventfilter_callback = cb; }
    inline void setQSyntaxHighlighter_TimerEvent_Callback(QSyntaxHighlighter_TimerEvent_Callback cb) { qsyntaxhighlighter_timerevent_callback = cb; }
    inline void setQSyntaxHighlighter_ChildEvent_Callback(QSyntaxHighlighter_ChildEvent_Callback cb) { qsyntaxhighlighter_childevent_callback = cb; }
    inline void setQSyntaxHighlighter_CustomEvent_Callback(QSyntaxHighlighter_CustomEvent_Callback cb) { qsyntaxhighlighter_customevent_callback = cb; }
    inline void setQSyntaxHighlighter_ConnectNotify_Callback(QSyntaxHighlighter_ConnectNotify_Callback cb) { qsyntaxhighlighter_connectnotify_callback = cb; }
    inline void setQSyntaxHighlighter_DisconnectNotify_Callback(QSyntaxHighlighter_DisconnectNotify_Callback cb) { qsyntaxhighlighter_disconnectnotify_callback = cb; }
    inline void setQSyntaxHighlighter_SetFormat_Callback(QSyntaxHighlighter_SetFormat_Callback cb) { qsyntaxhighlighter_setformat_callback = cb; }
    inline void setQSyntaxHighlighter_SetFormat2_Callback(QSyntaxHighlighter_SetFormat2_Callback cb) { qsyntaxhighlighter_setformat2_callback = cb; }
    inline void setQSyntaxHighlighter_SetFormat3_Callback(QSyntaxHighlighter_SetFormat3_Callback cb) { qsyntaxhighlighter_setformat3_callback = cb; }
    inline void setQSyntaxHighlighter_Format_Callback(QSyntaxHighlighter_Format_Callback cb) { qsyntaxhighlighter_format_callback = cb; }
    inline void setQSyntaxHighlighter_PreviousBlockState_Callback(QSyntaxHighlighter_PreviousBlockState_Callback cb) { qsyntaxhighlighter_previousblockstate_callback = cb; }
    inline void setQSyntaxHighlighter_CurrentBlockState_Callback(QSyntaxHighlighter_CurrentBlockState_Callback cb) { qsyntaxhighlighter_currentblockstate_callback = cb; }
    inline void setQSyntaxHighlighter_SetCurrentBlockState_Callback(QSyntaxHighlighter_SetCurrentBlockState_Callback cb) { qsyntaxhighlighter_setcurrentblockstate_callback = cb; }
    inline void setQSyntaxHighlighter_SetCurrentBlockUserData_Callback(QSyntaxHighlighter_SetCurrentBlockUserData_Callback cb) { qsyntaxhighlighter_setcurrentblockuserdata_callback = cb; }
    inline void setQSyntaxHighlighter_CurrentBlockUserData_Callback(QSyntaxHighlighter_CurrentBlockUserData_Callback cb) { qsyntaxhighlighter_currentblockuserdata_callback = cb; }
    inline void setQSyntaxHighlighter_CurrentBlock_Callback(QSyntaxHighlighter_CurrentBlock_Callback cb) { qsyntaxhighlighter_currentblock_callback = cb; }
    inline void setQSyntaxHighlighter_Sender_Callback(QSyntaxHighlighter_Sender_Callback cb) { qsyntaxhighlighter_sender_callback = cb; }
    inline void setQSyntaxHighlighter_SenderSignalIndex_Callback(QSyntaxHighlighter_SenderSignalIndex_Callback cb) { qsyntaxhighlighter_sendersignalindex_callback = cb; }
    inline void setQSyntaxHighlighter_Receivers_Callback(QSyntaxHighlighter_Receivers_Callback cb) { qsyntaxhighlighter_receivers_callback = cb; }
    inline void setQSyntaxHighlighter_IsSignalConnected_Callback(QSyntaxHighlighter_IsSignalConnected_Callback cb) { qsyntaxhighlighter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQSyntaxHighlighter_Metacall_IsBase(bool value) const { qsyntaxhighlighter_metacall_isbase = value; }
    inline void setQSyntaxHighlighter_HighlightBlock_IsBase(bool value) const { qsyntaxhighlighter_highlightblock_isbase = value; }
    inline void setQSyntaxHighlighter_Event_IsBase(bool value) const { qsyntaxhighlighter_event_isbase = value; }
    inline void setQSyntaxHighlighter_EventFilter_IsBase(bool value) const { qsyntaxhighlighter_eventfilter_isbase = value; }
    inline void setQSyntaxHighlighter_TimerEvent_IsBase(bool value) const { qsyntaxhighlighter_timerevent_isbase = value; }
    inline void setQSyntaxHighlighter_ChildEvent_IsBase(bool value) const { qsyntaxhighlighter_childevent_isbase = value; }
    inline void setQSyntaxHighlighter_CustomEvent_IsBase(bool value) const { qsyntaxhighlighter_customevent_isbase = value; }
    inline void setQSyntaxHighlighter_ConnectNotify_IsBase(bool value) const { qsyntaxhighlighter_connectnotify_isbase = value; }
    inline void setQSyntaxHighlighter_DisconnectNotify_IsBase(bool value) const { qsyntaxhighlighter_disconnectnotify_isbase = value; }
    inline void setQSyntaxHighlighter_SetFormat_IsBase(bool value) const { qsyntaxhighlighter_setformat_isbase = value; }
    inline void setQSyntaxHighlighter_SetFormat2_IsBase(bool value) const { qsyntaxhighlighter_setformat2_isbase = value; }
    inline void setQSyntaxHighlighter_SetFormat3_IsBase(bool value) const { qsyntaxhighlighter_setformat3_isbase = value; }
    inline void setQSyntaxHighlighter_Format_IsBase(bool value) const { qsyntaxhighlighter_format_isbase = value; }
    inline void setQSyntaxHighlighter_PreviousBlockState_IsBase(bool value) const { qsyntaxhighlighter_previousblockstate_isbase = value; }
    inline void setQSyntaxHighlighter_CurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_currentblockstate_isbase = value; }
    inline void setQSyntaxHighlighter_SetCurrentBlockState_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockstate_isbase = value; }
    inline void setQSyntaxHighlighter_SetCurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_setcurrentblockuserdata_isbase = value; }
    inline void setQSyntaxHighlighter_CurrentBlockUserData_IsBase(bool value) const { qsyntaxhighlighter_currentblockuserdata_isbase = value; }
    inline void setQSyntaxHighlighter_CurrentBlock_IsBase(bool value) const { qsyntaxhighlighter_currentblock_isbase = value; }
    inline void setQSyntaxHighlighter_Sender_IsBase(bool value) const { qsyntaxhighlighter_sender_isbase = value; }
    inline void setQSyntaxHighlighter_SenderSignalIndex_IsBase(bool value) const { qsyntaxhighlighter_sendersignalindex_isbase = value; }
    inline void setQSyntaxHighlighter_Receivers_IsBase(bool value) const { qsyntaxhighlighter_receivers_isbase = value; }
    inline void setQSyntaxHighlighter_IsSignalConnected_IsBase(bool value) const { qsyntaxhighlighter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsyntaxhighlighter_metacall_isbase) {
            qsyntaxhighlighter_metacall_isbase = false;
            return QSyntaxHighlighter::qt_metacall(param1, param2, param3);
        } else if (qsyntaxhighlighter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qsyntaxhighlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QSyntaxHighlighter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (qsyntaxhighlighter_highlightblock_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            qsyntaxhighlighter_highlightblock_callback(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsyntaxhighlighter_event_isbase) {
            qsyntaxhighlighter_event_isbase = false;
            return QSyntaxHighlighter::event(event);
        } else if (qsyntaxhighlighter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qsyntaxhighlighter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSyntaxHighlighter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsyntaxhighlighter_eventfilter_isbase) {
            qsyntaxhighlighter_eventfilter_isbase = false;
            return QSyntaxHighlighter::eventFilter(watched, event);
        } else if (qsyntaxhighlighter_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qsyntaxhighlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QSyntaxHighlighter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsyntaxhighlighter_timerevent_isbase) {
            qsyntaxhighlighter_timerevent_isbase = false;
            QSyntaxHighlighter::timerEvent(event);
        } else if (qsyntaxhighlighter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qsyntaxhighlighter_timerevent_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsyntaxhighlighter_childevent_isbase) {
            qsyntaxhighlighter_childevent_isbase = false;
            QSyntaxHighlighter::childEvent(event);
        } else if (qsyntaxhighlighter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qsyntaxhighlighter_childevent_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsyntaxhighlighter_customevent_isbase) {
            qsyntaxhighlighter_customevent_isbase = false;
            QSyntaxHighlighter::customEvent(event);
        } else if (qsyntaxhighlighter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qsyntaxhighlighter_customevent_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_connectnotify_isbase) {
            qsyntaxhighlighter_connectnotify_isbase = false;
            QSyntaxHighlighter::connectNotify(signal);
        } else if (qsyntaxhighlighter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsyntaxhighlighter_connectnotify_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsyntaxhighlighter_disconnectnotify_isbase) {
            qsyntaxhighlighter_disconnectnotify_isbase = false;
            QSyntaxHighlighter::disconnectNotify(signal);
        } else if (qsyntaxhighlighter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qsyntaxhighlighter_disconnectnotify_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QTextCharFormat& format) {
        if (qsyntaxhighlighter_setformat_isbase) {
            qsyntaxhighlighter_setformat_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, format);
        } else if (qsyntaxhighlighter_setformat_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;
            const QTextCharFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextCharFormat* cbval3 = const_cast<QTextCharFormat*>(&format_ret);

            qsyntaxhighlighter_setformat_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSyntaxHighlighter::setFormat(start, count, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QColor& color) {
        if (qsyntaxhighlighter_setformat2_isbase) {
            qsyntaxhighlighter_setformat2_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, color);
        } else if (qsyntaxhighlighter_setformat2_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;
            const QColor& color_ret = color;
            // Cast returned reference into pointer
            QColor* cbval3 = const_cast<QColor*>(&color_ret);

            qsyntaxhighlighter_setformat2_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSyntaxHighlighter::setFormat(start, count, color);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QFont& font) {
        if (qsyntaxhighlighter_setformat3_isbase) {
            qsyntaxhighlighter_setformat3_isbase = false;
            QSyntaxHighlighter::setFormat(start, count, font);
        } else if (qsyntaxhighlighter_setformat3_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;
            const QFont& font_ret = font;
            // Cast returned reference into pointer
            QFont* cbval3 = const_cast<QFont*>(&font_ret);

            qsyntaxhighlighter_setformat3_callback(this, cbval1, cbval2, cbval3);
        } else {
            QSyntaxHighlighter::setFormat(start, count, font);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) const {
        if (qsyntaxhighlighter_format_isbase) {
            qsyntaxhighlighter_format_isbase = false;
            return QSyntaxHighlighter::format(pos);
        } else if (qsyntaxhighlighter_format_callback != nullptr) {
            int cbval1 = pos;

            QTextCharFormat* callback_ret = qsyntaxhighlighter_format_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QSyntaxHighlighter::format(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    int previousBlockState() const {
        if (qsyntaxhighlighter_previousblockstate_isbase) {
            qsyntaxhighlighter_previousblockstate_isbase = false;
            return QSyntaxHighlighter::previousBlockState();
        } else if (qsyntaxhighlighter_previousblockstate_callback != nullptr) {
            int callback_ret = qsyntaxhighlighter_previousblockstate_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSyntaxHighlighter::previousBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    int currentBlockState() const {
        if (qsyntaxhighlighter_currentblockstate_isbase) {
            qsyntaxhighlighter_currentblockstate_isbase = false;
            return QSyntaxHighlighter::currentBlockState();
        } else if (qsyntaxhighlighter_currentblockstate_callback != nullptr) {
            int callback_ret = qsyntaxhighlighter_currentblockstate_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSyntaxHighlighter::currentBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockState(int newState) {
        if (qsyntaxhighlighter_setcurrentblockstate_isbase) {
            qsyntaxhighlighter_setcurrentblockstate_isbase = false;
            QSyntaxHighlighter::setCurrentBlockState(newState);
        } else if (qsyntaxhighlighter_setcurrentblockstate_callback != nullptr) {
            int cbval1 = newState;

            qsyntaxhighlighter_setcurrentblockstate_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::setCurrentBlockState(newState);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockUserData(QTextBlockUserData* data) {
        if (qsyntaxhighlighter_setcurrentblockuserdata_isbase) {
            qsyntaxhighlighter_setcurrentblockuserdata_isbase = false;
            QSyntaxHighlighter::setCurrentBlockUserData(data);
        } else if (qsyntaxhighlighter_setcurrentblockuserdata_callback != nullptr) {
            QTextBlockUserData* cbval1 = data;

            qsyntaxhighlighter_setcurrentblockuserdata_callback(this, cbval1);
        } else {
            QSyntaxHighlighter::setCurrentBlockUserData(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlockUserData* currentBlockUserData() const {
        if (qsyntaxhighlighter_currentblockuserdata_isbase) {
            qsyntaxhighlighter_currentblockuserdata_isbase = false;
            return QSyntaxHighlighter::currentBlockUserData();
        } else if (qsyntaxhighlighter_currentblockuserdata_callback != nullptr) {
            QTextBlockUserData* callback_ret = qsyntaxhighlighter_currentblockuserdata_callback();
            return callback_ret;
        } else {
            return QSyntaxHighlighter::currentBlockUserData();
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock currentBlock() const {
        if (qsyntaxhighlighter_currentblock_isbase) {
            qsyntaxhighlighter_currentblock_isbase = false;
            return QSyntaxHighlighter::currentBlock();
        } else if (qsyntaxhighlighter_currentblock_callback != nullptr) {
            QTextBlock* callback_ret = qsyntaxhighlighter_currentblock_callback();
            return *callback_ret;
        } else {
            return QSyntaxHighlighter::currentBlock();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsyntaxhighlighter_sender_isbase) {
            qsyntaxhighlighter_sender_isbase = false;
            return QSyntaxHighlighter::sender();
        } else if (qsyntaxhighlighter_sender_callback != nullptr) {
            QObject* callback_ret = qsyntaxhighlighter_sender_callback();
            return callback_ret;
        } else {
            return QSyntaxHighlighter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsyntaxhighlighter_sendersignalindex_isbase) {
            qsyntaxhighlighter_sendersignalindex_isbase = false;
            return QSyntaxHighlighter::senderSignalIndex();
        } else if (qsyntaxhighlighter_sendersignalindex_callback != nullptr) {
            int callback_ret = qsyntaxhighlighter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QSyntaxHighlighter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsyntaxhighlighter_receivers_isbase) {
            qsyntaxhighlighter_receivers_isbase = false;
            return QSyntaxHighlighter::receivers(signal);
        } else if (qsyntaxhighlighter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qsyntaxhighlighter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QSyntaxHighlighter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsyntaxhighlighter_issignalconnected_isbase) {
            qsyntaxhighlighter_issignalconnected_isbase = false;
            return QSyntaxHighlighter::isSignalConnected(signal);
        } else if (qsyntaxhighlighter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qsyntaxhighlighter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QSyntaxHighlighter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void QSyntaxHighlighter_HighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
    friend void QSyntaxHighlighter_QBaseHighlightBlock(QSyntaxHighlighter* self, const libqt_string text);
    friend void QSyntaxHighlighter_TimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
    friend void QSyntaxHighlighter_QBaseTimerEvent(QSyntaxHighlighter* self, QTimerEvent* event);
    friend void QSyntaxHighlighter_ChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
    friend void QSyntaxHighlighter_QBaseChildEvent(QSyntaxHighlighter* self, QChildEvent* event);
    friend void QSyntaxHighlighter_CustomEvent(QSyntaxHighlighter* self, QEvent* event);
    friend void QSyntaxHighlighter_QBaseCustomEvent(QSyntaxHighlighter* self, QEvent* event);
    friend void QSyntaxHighlighter_ConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend void QSyntaxHighlighter_QBaseConnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend void QSyntaxHighlighter_DisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend void QSyntaxHighlighter_QBaseDisconnectNotify(QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend void QSyntaxHighlighter_SetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend void QSyntaxHighlighter_QBaseSetFormat(QSyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend void QSyntaxHighlighter_SetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
    friend void QSyntaxHighlighter_QBaseSetFormat2(QSyntaxHighlighter* self, int start, int count, const QColor* color);
    friend void QSyntaxHighlighter_SetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
    friend void QSyntaxHighlighter_QBaseSetFormat3(QSyntaxHighlighter* self, int start, int count, const QFont* font);
    friend QTextCharFormat* QSyntaxHighlighter_Format(const QSyntaxHighlighter* self, int pos);
    friend QTextCharFormat* QSyntaxHighlighter_QBaseFormat(const QSyntaxHighlighter* self, int pos);
    friend int QSyntaxHighlighter_PreviousBlockState(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_QBasePreviousBlockState(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_CurrentBlockState(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_QBaseCurrentBlockState(const QSyntaxHighlighter* self);
    friend void QSyntaxHighlighter_SetCurrentBlockState(QSyntaxHighlighter* self, int newState);
    friend void QSyntaxHighlighter_QBaseSetCurrentBlockState(QSyntaxHighlighter* self, int newState);
    friend void QSyntaxHighlighter_SetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
    friend void QSyntaxHighlighter_QBaseSetCurrentBlockUserData(QSyntaxHighlighter* self, QTextBlockUserData* data);
    friend QTextBlockUserData* QSyntaxHighlighter_CurrentBlockUserData(const QSyntaxHighlighter* self);
    friend QTextBlockUserData* QSyntaxHighlighter_QBaseCurrentBlockUserData(const QSyntaxHighlighter* self);
    friend QTextBlock* QSyntaxHighlighter_CurrentBlock(const QSyntaxHighlighter* self);
    friend QTextBlock* QSyntaxHighlighter_QBaseCurrentBlock(const QSyntaxHighlighter* self);
    friend QObject* QSyntaxHighlighter_Sender(const QSyntaxHighlighter* self);
    friend QObject* QSyntaxHighlighter_QBaseSender(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_SenderSignalIndex(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_QBaseSenderSignalIndex(const QSyntaxHighlighter* self);
    friend int QSyntaxHighlighter_Receivers(const QSyntaxHighlighter* self, const char* signal);
    friend int QSyntaxHighlighter_QBaseReceivers(const QSyntaxHighlighter* self, const char* signal);
    friend bool QSyntaxHighlighter_IsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal);
    friend bool QSyntaxHighlighter_QBaseIsSignalConnected(const QSyntaxHighlighter* self, const QMetaMethod* signal);
};

#endif
