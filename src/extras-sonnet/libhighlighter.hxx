#pragma once
#ifndef SRC_EXTRAS_SONNETC_LIBVIRTUALHIGHLIGHTER_H
#define SRC_EXTRAS_SONNETC_LIBVIRTUALHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of Sonnet::Highlighter so that we can call protected methods
class VirtualSonnetHighlighter final : public Sonnet::Highlighter {

  public:
    // Virtual class boolean flag
    bool isVirtualSonnetHighlighter = true;

    // Virtual class public types (including callbacks)
    using Sonnet__Highlighter_Metacall_Callback = int (*)(Sonnet__Highlighter*, int, int, void**);
    using Sonnet__Highlighter_HighlightBlock_Callback = void (*)(Sonnet__Highlighter*, libqt_string);
    using Sonnet__Highlighter_SetMisspelled_Callback = void (*)(Sonnet__Highlighter*, int, int);
    using Sonnet__Highlighter_UnsetMisspelled_Callback = void (*)(Sonnet__Highlighter*, int, int);
    using Sonnet__Highlighter_EventFilter_Callback = bool (*)(Sonnet__Highlighter*, QObject*, QEvent*);
    using Sonnet__Highlighter_Event_Callback = bool (*)(Sonnet__Highlighter*, QEvent*);
    using Sonnet__Highlighter_TimerEvent_Callback = void (*)(Sonnet__Highlighter*, QTimerEvent*);
    using Sonnet__Highlighter_ChildEvent_Callback = void (*)(Sonnet__Highlighter*, QChildEvent*);
    using Sonnet__Highlighter_CustomEvent_Callback = void (*)(Sonnet__Highlighter*, QEvent*);
    using Sonnet__Highlighter_ConnectNotify_Callback = void (*)(Sonnet__Highlighter*, QMetaMethod*);
    using Sonnet__Highlighter_DisconnectNotify_Callback = void (*)(Sonnet__Highlighter*, QMetaMethod*);
    using Sonnet__Highlighter_IntraWordEditing_Callback = bool (*)();
    using Sonnet__Highlighter_SetIntraWordEditing_Callback = void (*)(Sonnet__Highlighter*, bool);
    using Sonnet__Highlighter_SetFormat_Callback = void (*)(Sonnet__Highlighter*, int, int, QTextCharFormat*);
    using Sonnet__Highlighter_Format_Callback = QTextCharFormat* (*)(const Sonnet__Highlighter*, int);
    using Sonnet__Highlighter_PreviousBlockState_Callback = int (*)();
    using Sonnet__Highlighter_CurrentBlockState_Callback = int (*)();
    using Sonnet__Highlighter_SetCurrentBlockState_Callback = void (*)(Sonnet__Highlighter*, int);
    using Sonnet__Highlighter_SetCurrentBlockUserData_Callback = void (*)(Sonnet__Highlighter*, QTextBlockUserData*);
    using Sonnet__Highlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
    using Sonnet__Highlighter_CurrentBlock_Callback = QTextBlock* (*)();
    using Sonnet__Highlighter_Sender_Callback = QObject* (*)();
    using Sonnet__Highlighter_SenderSignalIndex_Callback = int (*)();
    using Sonnet__Highlighter_Receivers_Callback = int (*)(const Sonnet__Highlighter*, const char*);
    using Sonnet__Highlighter_IsSignalConnected_Callback = bool (*)(const Sonnet__Highlighter*, QMetaMethod*);

  protected:
    // Instance callback storage
    Sonnet__Highlighter_Metacall_Callback sonnet__highlighter_metacall_callback = nullptr;
    Sonnet__Highlighter_HighlightBlock_Callback sonnet__highlighter_highlightblock_callback = nullptr;
    Sonnet__Highlighter_SetMisspelled_Callback sonnet__highlighter_setmisspelled_callback = nullptr;
    Sonnet__Highlighter_UnsetMisspelled_Callback sonnet__highlighter_unsetmisspelled_callback = nullptr;
    Sonnet__Highlighter_EventFilter_Callback sonnet__highlighter_eventfilter_callback = nullptr;
    Sonnet__Highlighter_Event_Callback sonnet__highlighter_event_callback = nullptr;
    Sonnet__Highlighter_TimerEvent_Callback sonnet__highlighter_timerevent_callback = nullptr;
    Sonnet__Highlighter_ChildEvent_Callback sonnet__highlighter_childevent_callback = nullptr;
    Sonnet__Highlighter_CustomEvent_Callback sonnet__highlighter_customevent_callback = nullptr;
    Sonnet__Highlighter_ConnectNotify_Callback sonnet__highlighter_connectnotify_callback = nullptr;
    Sonnet__Highlighter_DisconnectNotify_Callback sonnet__highlighter_disconnectnotify_callback = nullptr;
    Sonnet__Highlighter_IntraWordEditing_Callback sonnet__highlighter_intrawordediting_callback = nullptr;
    Sonnet__Highlighter_SetIntraWordEditing_Callback sonnet__highlighter_setintrawordediting_callback = nullptr;
    Sonnet__Highlighter_SetFormat_Callback sonnet__highlighter_setformat_callback = nullptr;
    Sonnet__Highlighter_Format_Callback sonnet__highlighter_format_callback = nullptr;
    Sonnet__Highlighter_PreviousBlockState_Callback sonnet__highlighter_previousblockstate_callback = nullptr;
    Sonnet__Highlighter_CurrentBlockState_Callback sonnet__highlighter_currentblockstate_callback = nullptr;
    Sonnet__Highlighter_SetCurrentBlockState_Callback sonnet__highlighter_setcurrentblockstate_callback = nullptr;
    Sonnet__Highlighter_SetCurrentBlockUserData_Callback sonnet__highlighter_setcurrentblockuserdata_callback = nullptr;
    Sonnet__Highlighter_CurrentBlockUserData_Callback sonnet__highlighter_currentblockuserdata_callback = nullptr;
    Sonnet__Highlighter_CurrentBlock_Callback sonnet__highlighter_currentblock_callback = nullptr;
    Sonnet__Highlighter_Sender_Callback sonnet__highlighter_sender_callback = nullptr;
    Sonnet__Highlighter_SenderSignalIndex_Callback sonnet__highlighter_sendersignalindex_callback = nullptr;
    Sonnet__Highlighter_Receivers_Callback sonnet__highlighter_receivers_callback = nullptr;
    Sonnet__Highlighter_IsSignalConnected_Callback sonnet__highlighter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool sonnet__highlighter_metacall_isbase = false;
    mutable bool sonnet__highlighter_highlightblock_isbase = false;
    mutable bool sonnet__highlighter_setmisspelled_isbase = false;
    mutable bool sonnet__highlighter_unsetmisspelled_isbase = false;
    mutable bool sonnet__highlighter_eventfilter_isbase = false;
    mutable bool sonnet__highlighter_event_isbase = false;
    mutable bool sonnet__highlighter_timerevent_isbase = false;
    mutable bool sonnet__highlighter_childevent_isbase = false;
    mutable bool sonnet__highlighter_customevent_isbase = false;
    mutable bool sonnet__highlighter_connectnotify_isbase = false;
    mutable bool sonnet__highlighter_disconnectnotify_isbase = false;
    mutable bool sonnet__highlighter_intrawordediting_isbase = false;
    mutable bool sonnet__highlighter_setintrawordediting_isbase = false;
    mutable bool sonnet__highlighter_setformat_isbase = false;
    mutable bool sonnet__highlighter_format_isbase = false;
    mutable bool sonnet__highlighter_previousblockstate_isbase = false;
    mutable bool sonnet__highlighter_currentblockstate_isbase = false;
    mutable bool sonnet__highlighter_setcurrentblockstate_isbase = false;
    mutable bool sonnet__highlighter_setcurrentblockuserdata_isbase = false;
    mutable bool sonnet__highlighter_currentblockuserdata_isbase = false;
    mutable bool sonnet__highlighter_currentblock_isbase = false;
    mutable bool sonnet__highlighter_sender_isbase = false;
    mutable bool sonnet__highlighter_sendersignalindex_isbase = false;
    mutable bool sonnet__highlighter_receivers_isbase = false;
    mutable bool sonnet__highlighter_issignalconnected_isbase = false;

  public:
    VirtualSonnetHighlighter(QTextEdit* textEdit) : Sonnet::Highlighter(textEdit) {};
    VirtualSonnetHighlighter(QPlainTextEdit* textEdit) : Sonnet::Highlighter(textEdit) {};
    VirtualSonnetHighlighter(QTextEdit* textEdit, const QColor& col) : Sonnet::Highlighter(textEdit, col) {};
    VirtualSonnetHighlighter(QPlainTextEdit* textEdit, const QColor& col) : Sonnet::Highlighter(textEdit, col) {};

    ~VirtualSonnetHighlighter() {
        sonnet__highlighter_metacall_callback = nullptr;
        sonnet__highlighter_highlightblock_callback = nullptr;
        sonnet__highlighter_setmisspelled_callback = nullptr;
        sonnet__highlighter_unsetmisspelled_callback = nullptr;
        sonnet__highlighter_eventfilter_callback = nullptr;
        sonnet__highlighter_event_callback = nullptr;
        sonnet__highlighter_timerevent_callback = nullptr;
        sonnet__highlighter_childevent_callback = nullptr;
        sonnet__highlighter_customevent_callback = nullptr;
        sonnet__highlighter_connectnotify_callback = nullptr;
        sonnet__highlighter_disconnectnotify_callback = nullptr;
        sonnet__highlighter_intrawordediting_callback = nullptr;
        sonnet__highlighter_setintrawordediting_callback = nullptr;
        sonnet__highlighter_setformat_callback = nullptr;
        sonnet__highlighter_format_callback = nullptr;
        sonnet__highlighter_previousblockstate_callback = nullptr;
        sonnet__highlighter_currentblockstate_callback = nullptr;
        sonnet__highlighter_setcurrentblockstate_callback = nullptr;
        sonnet__highlighter_setcurrentblockuserdata_callback = nullptr;
        sonnet__highlighter_currentblockuserdata_callback = nullptr;
        sonnet__highlighter_currentblock_callback = nullptr;
        sonnet__highlighter_sender_callback = nullptr;
        sonnet__highlighter_sendersignalindex_callback = nullptr;
        sonnet__highlighter_receivers_callback = nullptr;
        sonnet__highlighter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setSonnet__Highlighter_Metacall_Callback(Sonnet__Highlighter_Metacall_Callback cb) { sonnet__highlighter_metacall_callback = cb; }
    inline void setSonnet__Highlighter_HighlightBlock_Callback(Sonnet__Highlighter_HighlightBlock_Callback cb) { sonnet__highlighter_highlightblock_callback = cb; }
    inline void setSonnet__Highlighter_SetMisspelled_Callback(Sonnet__Highlighter_SetMisspelled_Callback cb) { sonnet__highlighter_setmisspelled_callback = cb; }
    inline void setSonnet__Highlighter_UnsetMisspelled_Callback(Sonnet__Highlighter_UnsetMisspelled_Callback cb) { sonnet__highlighter_unsetmisspelled_callback = cb; }
    inline void setSonnet__Highlighter_EventFilter_Callback(Sonnet__Highlighter_EventFilter_Callback cb) { sonnet__highlighter_eventfilter_callback = cb; }
    inline void setSonnet__Highlighter_Event_Callback(Sonnet__Highlighter_Event_Callback cb) { sonnet__highlighter_event_callback = cb; }
    inline void setSonnet__Highlighter_TimerEvent_Callback(Sonnet__Highlighter_TimerEvent_Callback cb) { sonnet__highlighter_timerevent_callback = cb; }
    inline void setSonnet__Highlighter_ChildEvent_Callback(Sonnet__Highlighter_ChildEvent_Callback cb) { sonnet__highlighter_childevent_callback = cb; }
    inline void setSonnet__Highlighter_CustomEvent_Callback(Sonnet__Highlighter_CustomEvent_Callback cb) { sonnet__highlighter_customevent_callback = cb; }
    inline void setSonnet__Highlighter_ConnectNotify_Callback(Sonnet__Highlighter_ConnectNotify_Callback cb) { sonnet__highlighter_connectnotify_callback = cb; }
    inline void setSonnet__Highlighter_DisconnectNotify_Callback(Sonnet__Highlighter_DisconnectNotify_Callback cb) { sonnet__highlighter_disconnectnotify_callback = cb; }
    inline void setSonnet__Highlighter_IntraWordEditing_Callback(Sonnet__Highlighter_IntraWordEditing_Callback cb) { sonnet__highlighter_intrawordediting_callback = cb; }
    inline void setSonnet__Highlighter_SetIntraWordEditing_Callback(Sonnet__Highlighter_SetIntraWordEditing_Callback cb) { sonnet__highlighter_setintrawordediting_callback = cb; }
    inline void setSonnet__Highlighter_SetFormat_Callback(Sonnet__Highlighter_SetFormat_Callback cb) { sonnet__highlighter_setformat_callback = cb; }
    inline void setSonnet__Highlighter_Format_Callback(Sonnet__Highlighter_Format_Callback cb) { sonnet__highlighter_format_callback = cb; }
    inline void setSonnet__Highlighter_PreviousBlockState_Callback(Sonnet__Highlighter_PreviousBlockState_Callback cb) { sonnet__highlighter_previousblockstate_callback = cb; }
    inline void setSonnet__Highlighter_CurrentBlockState_Callback(Sonnet__Highlighter_CurrentBlockState_Callback cb) { sonnet__highlighter_currentblockstate_callback = cb; }
    inline void setSonnet__Highlighter_SetCurrentBlockState_Callback(Sonnet__Highlighter_SetCurrentBlockState_Callback cb) { sonnet__highlighter_setcurrentblockstate_callback = cb; }
    inline void setSonnet__Highlighter_SetCurrentBlockUserData_Callback(Sonnet__Highlighter_SetCurrentBlockUserData_Callback cb) { sonnet__highlighter_setcurrentblockuserdata_callback = cb; }
    inline void setSonnet__Highlighter_CurrentBlockUserData_Callback(Sonnet__Highlighter_CurrentBlockUserData_Callback cb) { sonnet__highlighter_currentblockuserdata_callback = cb; }
    inline void setSonnet__Highlighter_CurrentBlock_Callback(Sonnet__Highlighter_CurrentBlock_Callback cb) { sonnet__highlighter_currentblock_callback = cb; }
    inline void setSonnet__Highlighter_Sender_Callback(Sonnet__Highlighter_Sender_Callback cb) { sonnet__highlighter_sender_callback = cb; }
    inline void setSonnet__Highlighter_SenderSignalIndex_Callback(Sonnet__Highlighter_SenderSignalIndex_Callback cb) { sonnet__highlighter_sendersignalindex_callback = cb; }
    inline void setSonnet__Highlighter_Receivers_Callback(Sonnet__Highlighter_Receivers_Callback cb) { sonnet__highlighter_receivers_callback = cb; }
    inline void setSonnet__Highlighter_IsSignalConnected_Callback(Sonnet__Highlighter_IsSignalConnected_Callback cb) { sonnet__highlighter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setSonnet__Highlighter_Metacall_IsBase(bool value) const { sonnet__highlighter_metacall_isbase = value; }
    inline void setSonnet__Highlighter_HighlightBlock_IsBase(bool value) const { sonnet__highlighter_highlightblock_isbase = value; }
    inline void setSonnet__Highlighter_SetMisspelled_IsBase(bool value) const { sonnet__highlighter_setmisspelled_isbase = value; }
    inline void setSonnet__Highlighter_UnsetMisspelled_IsBase(bool value) const { sonnet__highlighter_unsetmisspelled_isbase = value; }
    inline void setSonnet__Highlighter_EventFilter_IsBase(bool value) const { sonnet__highlighter_eventfilter_isbase = value; }
    inline void setSonnet__Highlighter_Event_IsBase(bool value) const { sonnet__highlighter_event_isbase = value; }
    inline void setSonnet__Highlighter_TimerEvent_IsBase(bool value) const { sonnet__highlighter_timerevent_isbase = value; }
    inline void setSonnet__Highlighter_ChildEvent_IsBase(bool value) const { sonnet__highlighter_childevent_isbase = value; }
    inline void setSonnet__Highlighter_CustomEvent_IsBase(bool value) const { sonnet__highlighter_customevent_isbase = value; }
    inline void setSonnet__Highlighter_ConnectNotify_IsBase(bool value) const { sonnet__highlighter_connectnotify_isbase = value; }
    inline void setSonnet__Highlighter_DisconnectNotify_IsBase(bool value) const { sonnet__highlighter_disconnectnotify_isbase = value; }
    inline void setSonnet__Highlighter_IntraWordEditing_IsBase(bool value) const { sonnet__highlighter_intrawordediting_isbase = value; }
    inline void setSonnet__Highlighter_SetIntraWordEditing_IsBase(bool value) const { sonnet__highlighter_setintrawordediting_isbase = value; }
    inline void setSonnet__Highlighter_SetFormat_IsBase(bool value) const { sonnet__highlighter_setformat_isbase = value; }
    inline void setSonnet__Highlighter_Format_IsBase(bool value) const { sonnet__highlighter_format_isbase = value; }
    inline void setSonnet__Highlighter_PreviousBlockState_IsBase(bool value) const { sonnet__highlighter_previousblockstate_isbase = value; }
    inline void setSonnet__Highlighter_CurrentBlockState_IsBase(bool value) const { sonnet__highlighter_currentblockstate_isbase = value; }
    inline void setSonnet__Highlighter_SetCurrentBlockState_IsBase(bool value) const { sonnet__highlighter_setcurrentblockstate_isbase = value; }
    inline void setSonnet__Highlighter_SetCurrentBlockUserData_IsBase(bool value) const { sonnet__highlighter_setcurrentblockuserdata_isbase = value; }
    inline void setSonnet__Highlighter_CurrentBlockUserData_IsBase(bool value) const { sonnet__highlighter_currentblockuserdata_isbase = value; }
    inline void setSonnet__Highlighter_CurrentBlock_IsBase(bool value) const { sonnet__highlighter_currentblock_isbase = value; }
    inline void setSonnet__Highlighter_Sender_IsBase(bool value) const { sonnet__highlighter_sender_isbase = value; }
    inline void setSonnet__Highlighter_SenderSignalIndex_IsBase(bool value) const { sonnet__highlighter_sendersignalindex_isbase = value; }
    inline void setSonnet__Highlighter_Receivers_IsBase(bool value) const { sonnet__highlighter_receivers_isbase = value; }
    inline void setSonnet__Highlighter_IsSignalConnected_IsBase(bool value) const { sonnet__highlighter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (sonnet__highlighter_metacall_isbase) {
            sonnet__highlighter_metacall_isbase = false;
            return Sonnet__Highlighter::qt_metacall(param1, param2, param3);
        } else if (sonnet__highlighter_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = sonnet__highlighter_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Highlighter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (sonnet__highlighter_highlightblock_isbase) {
            sonnet__highlighter_highlightblock_isbase = false;
            Sonnet__Highlighter::highlightBlock(text);
        } else if (sonnet__highlighter_highlightblock_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            sonnet__highlighter_highlightblock_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::highlightBlock(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMisspelled(int start, int count) override {
        if (sonnet__highlighter_setmisspelled_isbase) {
            sonnet__highlighter_setmisspelled_isbase = false;
            Sonnet__Highlighter::setMisspelled(start, count);
        } else if (sonnet__highlighter_setmisspelled_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;

            sonnet__highlighter_setmisspelled_callback(this, cbval1, cbval2);
        } else {
            Sonnet__Highlighter::setMisspelled(start, count);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unsetMisspelled(int start, int count) override {
        if (sonnet__highlighter_unsetmisspelled_isbase) {
            sonnet__highlighter_unsetmisspelled_isbase = false;
            Sonnet__Highlighter::unsetMisspelled(start, count);
        } else if (sonnet__highlighter_unsetmisspelled_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;

            sonnet__highlighter_unsetmisspelled_callback(this, cbval1, cbval2);
        } else {
            Sonnet__Highlighter::unsetMisspelled(start, count);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (sonnet__highlighter_eventfilter_isbase) {
            sonnet__highlighter_eventfilter_isbase = false;
            return Sonnet__Highlighter::eventFilter(o, e);
        } else if (sonnet__highlighter_eventfilter_callback != nullptr) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;

            bool callback_ret = sonnet__highlighter_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return Sonnet__Highlighter::eventFilter(o, e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (sonnet__highlighter_event_isbase) {
            sonnet__highlighter_event_isbase = false;
            return Sonnet__Highlighter::event(event);
        } else if (sonnet__highlighter_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = sonnet__highlighter_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Highlighter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (sonnet__highlighter_timerevent_isbase) {
            sonnet__highlighter_timerevent_isbase = false;
            Sonnet__Highlighter::timerEvent(event);
        } else if (sonnet__highlighter_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            sonnet__highlighter_timerevent_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (sonnet__highlighter_childevent_isbase) {
            sonnet__highlighter_childevent_isbase = false;
            Sonnet__Highlighter::childEvent(event);
        } else if (sonnet__highlighter_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            sonnet__highlighter_childevent_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (sonnet__highlighter_customevent_isbase) {
            sonnet__highlighter_customevent_isbase = false;
            Sonnet__Highlighter::customEvent(event);
        } else if (sonnet__highlighter_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            sonnet__highlighter_customevent_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (sonnet__highlighter_connectnotify_isbase) {
            sonnet__highlighter_connectnotify_isbase = false;
            Sonnet__Highlighter::connectNotify(signal);
        } else if (sonnet__highlighter_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__highlighter_connectnotify_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (sonnet__highlighter_disconnectnotify_isbase) {
            sonnet__highlighter_disconnectnotify_isbase = false;
            Sonnet__Highlighter::disconnectNotify(signal);
        } else if (sonnet__highlighter_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            sonnet__highlighter_disconnectnotify_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool intraWordEditing() const {
        if (sonnet__highlighter_intrawordediting_isbase) {
            sonnet__highlighter_intrawordediting_isbase = false;
            return Sonnet__Highlighter::intraWordEditing();
        } else if (sonnet__highlighter_intrawordediting_callback != nullptr) {
            bool callback_ret = sonnet__highlighter_intrawordediting_callback();
            return callback_ret;
        } else {
            return Sonnet__Highlighter::intraWordEditing();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setIntraWordEditing(bool editing) {
        if (sonnet__highlighter_setintrawordediting_isbase) {
            sonnet__highlighter_setintrawordediting_isbase = false;
            Sonnet__Highlighter::setIntraWordEditing(editing);
        } else if (sonnet__highlighter_setintrawordediting_callback != nullptr) {
            bool cbval1 = editing;

            sonnet__highlighter_setintrawordediting_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::setIntraWordEditing(editing);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QTextCharFormat& format) {
        if (sonnet__highlighter_setformat_isbase) {
            sonnet__highlighter_setformat_isbase = false;
            Sonnet__Highlighter::setFormat(start, count, format);
        } else if (sonnet__highlighter_setformat_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = count;
            const QTextCharFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextCharFormat* cbval3 = const_cast<QTextCharFormat*>(&format_ret);

            sonnet__highlighter_setformat_callback(this, cbval1, cbval2, cbval3);
        } else {
            Sonnet__Highlighter::setFormat(start, count, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) const {
        if (sonnet__highlighter_format_isbase) {
            sonnet__highlighter_format_isbase = false;
            return Sonnet__Highlighter::format(pos);
        } else if (sonnet__highlighter_format_callback != nullptr) {
            int cbval1 = pos;

            QTextCharFormat* callback_ret = sonnet__highlighter_format_callback(this, cbval1);
            return *callback_ret;
        } else {
            return Sonnet__Highlighter::format(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    int previousBlockState() const {
        if (sonnet__highlighter_previousblockstate_isbase) {
            sonnet__highlighter_previousblockstate_isbase = false;
            return Sonnet__Highlighter::previousBlockState();
        } else if (sonnet__highlighter_previousblockstate_callback != nullptr) {
            int callback_ret = sonnet__highlighter_previousblockstate_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Highlighter::previousBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    int currentBlockState() const {
        if (sonnet__highlighter_currentblockstate_isbase) {
            sonnet__highlighter_currentblockstate_isbase = false;
            return Sonnet__Highlighter::currentBlockState();
        } else if (sonnet__highlighter_currentblockstate_callback != nullptr) {
            int callback_ret = sonnet__highlighter_currentblockstate_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Highlighter::currentBlockState();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockState(int newState) {
        if (sonnet__highlighter_setcurrentblockstate_isbase) {
            sonnet__highlighter_setcurrentblockstate_isbase = false;
            Sonnet__Highlighter::setCurrentBlockState(newState);
        } else if (sonnet__highlighter_setcurrentblockstate_callback != nullptr) {
            int cbval1 = newState;

            sonnet__highlighter_setcurrentblockstate_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::setCurrentBlockState(newState);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockUserData(QTextBlockUserData* data) {
        if (sonnet__highlighter_setcurrentblockuserdata_isbase) {
            sonnet__highlighter_setcurrentblockuserdata_isbase = false;
            Sonnet__Highlighter::setCurrentBlockUserData(data);
        } else if (sonnet__highlighter_setcurrentblockuserdata_callback != nullptr) {
            QTextBlockUserData* cbval1 = data;

            sonnet__highlighter_setcurrentblockuserdata_callback(this, cbval1);
        } else {
            Sonnet__Highlighter::setCurrentBlockUserData(data);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlockUserData* currentBlockUserData() const {
        if (sonnet__highlighter_currentblockuserdata_isbase) {
            sonnet__highlighter_currentblockuserdata_isbase = false;
            return Sonnet__Highlighter::currentBlockUserData();
        } else if (sonnet__highlighter_currentblockuserdata_callback != nullptr) {
            QTextBlockUserData* callback_ret = sonnet__highlighter_currentblockuserdata_callback();
            return callback_ret;
        } else {
            return Sonnet__Highlighter::currentBlockUserData();
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock currentBlock() const {
        if (sonnet__highlighter_currentblock_isbase) {
            sonnet__highlighter_currentblock_isbase = false;
            return Sonnet__Highlighter::currentBlock();
        } else if (sonnet__highlighter_currentblock_callback != nullptr) {
            QTextBlock* callback_ret = sonnet__highlighter_currentblock_callback();
            return *callback_ret;
        } else {
            return Sonnet__Highlighter::currentBlock();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (sonnet__highlighter_sender_isbase) {
            sonnet__highlighter_sender_isbase = false;
            return Sonnet__Highlighter::sender();
        } else if (sonnet__highlighter_sender_callback != nullptr) {
            QObject* callback_ret = sonnet__highlighter_sender_callback();
            return callback_ret;
        } else {
            return Sonnet__Highlighter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (sonnet__highlighter_sendersignalindex_isbase) {
            sonnet__highlighter_sendersignalindex_isbase = false;
            return Sonnet__Highlighter::senderSignalIndex();
        } else if (sonnet__highlighter_sendersignalindex_callback != nullptr) {
            int callback_ret = sonnet__highlighter_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Highlighter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (sonnet__highlighter_receivers_isbase) {
            sonnet__highlighter_receivers_isbase = false;
            return Sonnet__Highlighter::receivers(signal);
        } else if (sonnet__highlighter_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = sonnet__highlighter_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return Sonnet__Highlighter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (sonnet__highlighter_issignalconnected_isbase) {
            sonnet__highlighter_issignalconnected_isbase = false;
            return Sonnet__Highlighter::isSignalConnected(signal);
        } else if (sonnet__highlighter_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = sonnet__highlighter_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return Sonnet__Highlighter::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void Sonnet__Highlighter_HighlightBlock(Sonnet::Highlighter* self, const libqt_string text);
    friend void Sonnet__Highlighter_QBaseHighlightBlock(Sonnet::Highlighter* self, const libqt_string text);
    friend void Sonnet__Highlighter_SetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend void Sonnet__Highlighter_QBaseSetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend void Sonnet__Highlighter_UnsetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend void Sonnet__Highlighter_QBaseUnsetMisspelled(Sonnet::Highlighter* self, int start, int count);
    friend bool Sonnet__Highlighter_EventFilter(Sonnet::Highlighter* self, QObject* o, QEvent* e);
    friend bool Sonnet__Highlighter_QBaseEventFilter(Sonnet::Highlighter* self, QObject* o, QEvent* e);
    friend void Sonnet__Highlighter_TimerEvent(Sonnet::Highlighter* self, QTimerEvent* event);
    friend void Sonnet__Highlighter_QBaseTimerEvent(Sonnet::Highlighter* self, QTimerEvent* event);
    friend void Sonnet__Highlighter_ChildEvent(Sonnet::Highlighter* self, QChildEvent* event);
    friend void Sonnet__Highlighter_QBaseChildEvent(Sonnet::Highlighter* self, QChildEvent* event);
    friend void Sonnet__Highlighter_CustomEvent(Sonnet::Highlighter* self, QEvent* event);
    friend void Sonnet__Highlighter_QBaseCustomEvent(Sonnet::Highlighter* self, QEvent* event);
    friend void Sonnet__Highlighter_ConnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend void Sonnet__Highlighter_QBaseConnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend void Sonnet__Highlighter_DisconnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend void Sonnet__Highlighter_QBaseDisconnectNotify(Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend bool Sonnet__Highlighter_IntraWordEditing(const Sonnet::Highlighter* self);
    friend bool Sonnet__Highlighter_QBaseIntraWordEditing(const Sonnet::Highlighter* self);
    friend void Sonnet__Highlighter_SetIntraWordEditing(Sonnet::Highlighter* self, bool editing);
    friend void Sonnet__Highlighter_QBaseSetIntraWordEditing(Sonnet::Highlighter* self, bool editing);
    friend void Sonnet__Highlighter_SetFormat(Sonnet::Highlighter* self, int start, int count, const QTextCharFormat* format);
    friend void Sonnet__Highlighter_QBaseSetFormat(Sonnet::Highlighter* self, int start, int count, const QTextCharFormat* format);
    friend QTextCharFormat* Sonnet__Highlighter_Format(const Sonnet::Highlighter* self, int pos);
    friend QTextCharFormat* Sonnet__Highlighter_QBaseFormat(const Sonnet::Highlighter* self, int pos);
    friend int Sonnet__Highlighter_PreviousBlockState(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_QBasePreviousBlockState(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_CurrentBlockState(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_QBaseCurrentBlockState(const Sonnet::Highlighter* self);
    friend void Sonnet__Highlighter_SetCurrentBlockState(Sonnet::Highlighter* self, int newState);
    friend void Sonnet__Highlighter_QBaseSetCurrentBlockState(Sonnet::Highlighter* self, int newState);
    friend void Sonnet__Highlighter_SetCurrentBlockUserData(Sonnet::Highlighter* self, QTextBlockUserData* data);
    friend void Sonnet__Highlighter_QBaseSetCurrentBlockUserData(Sonnet::Highlighter* self, QTextBlockUserData* data);
    friend QTextBlockUserData* Sonnet__Highlighter_CurrentBlockUserData(const Sonnet::Highlighter* self);
    friend QTextBlockUserData* Sonnet__Highlighter_QBaseCurrentBlockUserData(const Sonnet::Highlighter* self);
    friend QTextBlock* Sonnet__Highlighter_CurrentBlock(const Sonnet::Highlighter* self);
    friend QTextBlock* Sonnet__Highlighter_QBaseCurrentBlock(const Sonnet::Highlighter* self);
    friend QObject* Sonnet__Highlighter_Sender(const Sonnet::Highlighter* self);
    friend QObject* Sonnet__Highlighter_QBaseSender(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_SenderSignalIndex(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_QBaseSenderSignalIndex(const Sonnet::Highlighter* self);
    friend int Sonnet__Highlighter_Receivers(const Sonnet::Highlighter* self, const char* signal);
    friend int Sonnet__Highlighter_QBaseReceivers(const Sonnet::Highlighter* self, const char* signal);
    friend bool Sonnet__Highlighter_IsSignalConnected(const Sonnet::Highlighter* self, const QMetaMethod* signal);
    friend bool Sonnet__Highlighter_QBaseIsSignalConnected(const Sonnet::Highlighter* self, const QMetaMethod* signal);
};

#endif
