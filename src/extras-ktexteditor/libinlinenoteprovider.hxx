#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALINLINENOTEPROVIDER_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBVIRTUALINLINENOTEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::InlineNoteProvider so that we can call protected methods
class VirtualKTextEditorInlineNoteProvider : public KTextEditor::InlineNoteProvider {

  public:
    // Virtual class boolean flag
    bool isVirtualKTextEditorInlineNoteProvider = true;

    // Virtual class public types (including callbacks)
    using KTextEditor__InlineNoteProvider_Metacall_Callback = int (*)(KTextEditor__InlineNoteProvider*, int, int, void**);
    using KTextEditor__InlineNoteProvider_InlineNotes_Callback = int* (*)(const KTextEditor__InlineNoteProvider*, int);
    using KTextEditor__InlineNoteProvider_InlineNoteSize_Callback = QSize* (*)(const KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*);
    using KTextEditor__InlineNoteProvider_PaintInlineNote_Callback = void (*)(const KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*, QPainter*, int);
    using KTextEditor__InlineNoteProvider_InlineNoteActivated_Callback = void (*)(KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*, int, QPoint*);
    using KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*, QPoint*);
    using KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*);
    using KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, KTextEditor__InlineNote*, QPoint*);
    using KTextEditor__InlineNoteProvider_Event_Callback = bool (*)(KTextEditor__InlineNoteProvider*, QEvent*);
    using KTextEditor__InlineNoteProvider_EventFilter_Callback = bool (*)(KTextEditor__InlineNoteProvider*, QObject*, QEvent*);
    using KTextEditor__InlineNoteProvider_TimerEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, QTimerEvent*);
    using KTextEditor__InlineNoteProvider_ChildEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, QChildEvent*);
    using KTextEditor__InlineNoteProvider_CustomEvent_Callback = void (*)(KTextEditor__InlineNoteProvider*, QEvent*);
    using KTextEditor__InlineNoteProvider_ConnectNotify_Callback = void (*)(KTextEditor__InlineNoteProvider*, QMetaMethod*);
    using KTextEditor__InlineNoteProvider_DisconnectNotify_Callback = void (*)(KTextEditor__InlineNoteProvider*, QMetaMethod*);
    using KTextEditor__InlineNoteProvider_Sender_Callback = QObject* (*)();
    using KTextEditor__InlineNoteProvider_SenderSignalIndex_Callback = int (*)();
    using KTextEditor__InlineNoteProvider_Receivers_Callback = int (*)(const KTextEditor__InlineNoteProvider*, const char*);
    using KTextEditor__InlineNoteProvider_IsSignalConnected_Callback = bool (*)(const KTextEditor__InlineNoteProvider*, QMetaMethod*);

  protected:
    // Instance callback storage
    KTextEditor__InlineNoteProvider_Metacall_Callback ktexteditor__inlinenoteprovider_metacall_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNotes_Callback ktexteditor__inlinenoteprovider_inlinenotes_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNoteSize_Callback ktexteditor__inlinenoteprovider_inlinenotesize_callback = nullptr;
    KTextEditor__InlineNoteProvider_PaintInlineNote_Callback ktexteditor__inlinenoteprovider_paintinlinenote_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNoteActivated_Callback ktexteditor__inlinenoteprovider_inlinenoteactivated_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_Event_Callback ktexteditor__inlinenoteprovider_event_callback = nullptr;
    KTextEditor__InlineNoteProvider_EventFilter_Callback ktexteditor__inlinenoteprovider_eventfilter_callback = nullptr;
    KTextEditor__InlineNoteProvider_TimerEvent_Callback ktexteditor__inlinenoteprovider_timerevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_ChildEvent_Callback ktexteditor__inlinenoteprovider_childevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_CustomEvent_Callback ktexteditor__inlinenoteprovider_customevent_callback = nullptr;
    KTextEditor__InlineNoteProvider_ConnectNotify_Callback ktexteditor__inlinenoteprovider_connectnotify_callback = nullptr;
    KTextEditor__InlineNoteProvider_DisconnectNotify_Callback ktexteditor__inlinenoteprovider_disconnectnotify_callback = nullptr;
    KTextEditor__InlineNoteProvider_Sender_Callback ktexteditor__inlinenoteprovider_sender_callback = nullptr;
    KTextEditor__InlineNoteProvider_SenderSignalIndex_Callback ktexteditor__inlinenoteprovider_sendersignalindex_callback = nullptr;
    KTextEditor__InlineNoteProvider_Receivers_Callback ktexteditor__inlinenoteprovider_receivers_callback = nullptr;
    KTextEditor__InlineNoteProvider_IsSignalConnected_Callback ktexteditor__inlinenoteprovider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ktexteditor__inlinenoteprovider_metacall_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenotes_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenotesize_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_paintinlinenote_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_event_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_eventfilter_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_timerevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_childevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_customevent_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_connectnotify_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_disconnectnotify_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_sender_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_sendersignalindex_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_receivers_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_issignalconnected_isbase = false;

  public:
    VirtualKTextEditorInlineNoteProvider() : KTextEditor::InlineNoteProvider() {};

    ~VirtualKTextEditorInlineNoteProvider() {
        ktexteditor__inlinenoteprovider_metacall_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenotes_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenotesize_callback = nullptr;
        ktexteditor__inlinenoteprovider_paintinlinenote_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenoteactivated_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_event_callback = nullptr;
        ktexteditor__inlinenoteprovider_eventfilter_callback = nullptr;
        ktexteditor__inlinenoteprovider_timerevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_childevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_customevent_callback = nullptr;
        ktexteditor__inlinenoteprovider_connectnotify_callback = nullptr;
        ktexteditor__inlinenoteprovider_disconnectnotify_callback = nullptr;
        ktexteditor__inlinenoteprovider_sender_callback = nullptr;
        ktexteditor__inlinenoteprovider_sendersignalindex_callback = nullptr;
        ktexteditor__inlinenoteprovider_receivers_callback = nullptr;
        ktexteditor__inlinenoteprovider_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKTextEditor__InlineNoteProvider_Metacall_Callback(KTextEditor__InlineNoteProvider_Metacall_Callback cb) { ktexteditor__inlinenoteprovider_metacall_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNotes_Callback(KTextEditor__InlineNoteProvider_InlineNotes_Callback cb) { ktexteditor__inlinenoteprovider_inlinenotes_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteSize_Callback(KTextEditor__InlineNoteProvider_InlineNoteSize_Callback cb) { ktexteditor__inlinenoteprovider_inlinenotesize_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_PaintInlineNote_Callback(KTextEditor__InlineNoteProvider_PaintInlineNote_Callback cb) { ktexteditor__inlinenoteprovider_paintinlinenote_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteActivated_Callback(KTextEditor__InlineNoteProvider_InlineNoteActivated_Callback cb) { ktexteditor__inlinenoteprovider_inlinenoteactivated_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback(KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback cb) { ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback(KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback cb) { ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback(KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback cb) { ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_Event_Callback(KTextEditor__InlineNoteProvider_Event_Callback cb) { ktexteditor__inlinenoteprovider_event_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_EventFilter_Callback(KTextEditor__InlineNoteProvider_EventFilter_Callback cb) { ktexteditor__inlinenoteprovider_eventfilter_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_TimerEvent_Callback(KTextEditor__InlineNoteProvider_TimerEvent_Callback cb) { ktexteditor__inlinenoteprovider_timerevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_ChildEvent_Callback(KTextEditor__InlineNoteProvider_ChildEvent_Callback cb) { ktexteditor__inlinenoteprovider_childevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_CustomEvent_Callback(KTextEditor__InlineNoteProvider_CustomEvent_Callback cb) { ktexteditor__inlinenoteprovider_customevent_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_ConnectNotify_Callback(KTextEditor__InlineNoteProvider_ConnectNotify_Callback cb) { ktexteditor__inlinenoteprovider_connectnotify_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_DisconnectNotify_Callback(KTextEditor__InlineNoteProvider_DisconnectNotify_Callback cb) { ktexteditor__inlinenoteprovider_disconnectnotify_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_Sender_Callback(KTextEditor__InlineNoteProvider_Sender_Callback cb) { ktexteditor__inlinenoteprovider_sender_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_SenderSignalIndex_Callback(KTextEditor__InlineNoteProvider_SenderSignalIndex_Callback cb) { ktexteditor__inlinenoteprovider_sendersignalindex_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_Receivers_Callback(KTextEditor__InlineNoteProvider_Receivers_Callback cb) { ktexteditor__inlinenoteprovider_receivers_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_IsSignalConnected_Callback(KTextEditor__InlineNoteProvider_IsSignalConnected_Callback cb) { ktexteditor__inlinenoteprovider_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKTextEditor__InlineNoteProvider_Metacall_IsBase(bool value) const { ktexteditor__inlinenoteprovider_metacall_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNotes_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenotes_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteSize_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenotesize_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_PaintInlineNote_IsBase(bool value) const { ktexteditor__inlinenoteprovider_paintinlinenote_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteActivated_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_Event_IsBase(bool value) const { ktexteditor__inlinenoteprovider_event_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_EventFilter_IsBase(bool value) const { ktexteditor__inlinenoteprovider_eventfilter_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_TimerEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_timerevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_ChildEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_childevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_CustomEvent_IsBase(bool value) const { ktexteditor__inlinenoteprovider_customevent_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_ConnectNotify_IsBase(bool value) const { ktexteditor__inlinenoteprovider_connectnotify_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_DisconnectNotify_IsBase(bool value) const { ktexteditor__inlinenoteprovider_disconnectnotify_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_Sender_IsBase(bool value) const { ktexteditor__inlinenoteprovider_sender_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_SenderSignalIndex_IsBase(bool value) const { ktexteditor__inlinenoteprovider_sendersignalindex_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_Receivers_IsBase(bool value) const { ktexteditor__inlinenoteprovider_receivers_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_IsSignalConnected_IsBase(bool value) const { ktexteditor__inlinenoteprovider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__inlinenoteprovider_metacall_isbase) {
            ktexteditor__inlinenoteprovider_metacall_isbase = false;
            return KTextEditor__InlineNoteProvider::qt_metacall(param1, param2, param3);
        } else if (ktexteditor__inlinenoteprovider_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = ktexteditor__inlinenoteprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__InlineNoteProvider::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> inlineNotes(int line) const override {
        if (ktexteditor__inlinenoteprovider_inlinenotes_callback != nullptr) {
            int cbval1 = line;

            int* callback_ret = ktexteditor__inlinenoteprovider_inlinenotes_callback(this, cbval1);
            QList<int> callback_ret_QList;
            for (int* ptr = callback_ret; *ptr != -1; ++ptr) {
                callback_ret_QList.push_back(*ptr);
            }
            return callback_ret_QList;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize inlineNoteSize(const KTextEditor::InlineNote& note) const override {
        if (ktexteditor__inlinenoteprovider_inlinenotesize_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);

            QSize* callback_ret = ktexteditor__inlinenoteprovider_inlinenotesize_callback(this, cbval1);
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintInlineNote(const KTextEditor::InlineNote& note, QPainter& painter, Qt::LayoutDirection direction) const override {
        if (ktexteditor__inlinenoteprovider_paintinlinenote_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval2 = &painter_ret;
            int cbval3 = static_cast<int>(direction);

            ktexteditor__inlinenoteprovider_paintinlinenote_callback(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteActivated(const KTextEditor::InlineNote& note, Qt::MouseButtons buttons, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase) {
            ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteActivated(note, buttons, globalPos);
        } else if (ktexteditor__inlinenoteprovider_inlinenoteactivated_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            int cbval2 = static_cast<int>(buttons);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&globalPos_ret);

            ktexteditor__inlinenoteprovider_inlinenoteactivated_callback(this, cbval1, cbval2, cbval3);
        } else {
            KTextEditor__InlineNoteProvider::inlineNoteActivated(note, buttons, globalPos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusInEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteFocusInEvent(note, globalPos);
        } else if (ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__InlineNoteProvider::inlineNoteFocusInEvent(note, globalPos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusOutEvent(const KTextEditor::InlineNote& note) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteFocusOutEvent(note);
        } else if (ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);

            ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::inlineNoteFocusOutEvent(note);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteMouseMoveEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteMouseMoveEvent(note, globalPos);
        } else if (ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback != nullptr) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback(this, cbval1, cbval2);
        } else {
            KTextEditor__InlineNoteProvider::inlineNoteMouseMoveEvent(note, globalPos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_event_isbase) {
            ktexteditor__inlinenoteprovider_event_isbase = false;
            return KTextEditor__InlineNoteProvider::event(event);
        } else if (ktexteditor__inlinenoteprovider_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = ktexteditor__inlinenoteprovider_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__InlineNoteProvider::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_eventfilter_isbase) {
            ktexteditor__inlinenoteprovider_eventfilter_isbase = false;
            return KTextEditor__InlineNoteProvider::eventFilter(watched, event);
        } else if (ktexteditor__inlinenoteprovider_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = ktexteditor__inlinenoteprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KTextEditor__InlineNoteProvider::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__inlinenoteprovider_timerevent_isbase) {
            ktexteditor__inlinenoteprovider_timerevent_isbase = false;
            KTextEditor__InlineNoteProvider::timerEvent(event);
        } else if (ktexteditor__inlinenoteprovider_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            ktexteditor__inlinenoteprovider_timerevent_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__inlinenoteprovider_childevent_isbase) {
            ktexteditor__inlinenoteprovider_childevent_isbase = false;
            KTextEditor__InlineNoteProvider::childEvent(event);
        } else if (ktexteditor__inlinenoteprovider_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            ktexteditor__inlinenoteprovider_childevent_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_customevent_isbase) {
            ktexteditor__inlinenoteprovider_customevent_isbase = false;
            KTextEditor__InlineNoteProvider::customEvent(event);
        } else if (ktexteditor__inlinenoteprovider_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            ktexteditor__inlinenoteprovider_customevent_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_connectnotify_isbase) {
            ktexteditor__inlinenoteprovider_connectnotify_isbase = false;
            KTextEditor__InlineNoteProvider::connectNotify(signal);
        } else if (ktexteditor__inlinenoteprovider_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__inlinenoteprovider_connectnotify_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_disconnectnotify_isbase) {
            ktexteditor__inlinenoteprovider_disconnectnotify_isbase = false;
            KTextEditor__InlineNoteProvider::disconnectNotify(signal);
        } else if (ktexteditor__inlinenoteprovider_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            ktexteditor__inlinenoteprovider_disconnectnotify_callback(this, cbval1);
        } else {
            KTextEditor__InlineNoteProvider::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__inlinenoteprovider_sender_isbase) {
            ktexteditor__inlinenoteprovider_sender_isbase = false;
            return KTextEditor__InlineNoteProvider::sender();
        } else if (ktexteditor__inlinenoteprovider_sender_callback != nullptr) {
            QObject* callback_ret = ktexteditor__inlinenoteprovider_sender_callback();
            return callback_ret;
        } else {
            return KTextEditor__InlineNoteProvider::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__inlinenoteprovider_sendersignalindex_isbase) {
            ktexteditor__inlinenoteprovider_sendersignalindex_isbase = false;
            return KTextEditor__InlineNoteProvider::senderSignalIndex();
        } else if (ktexteditor__inlinenoteprovider_sendersignalindex_callback != nullptr) {
            int callback_ret = ktexteditor__inlinenoteprovider_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__InlineNoteProvider::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__inlinenoteprovider_receivers_isbase) {
            ktexteditor__inlinenoteprovider_receivers_isbase = false;
            return KTextEditor__InlineNoteProvider::receivers(signal);
        } else if (ktexteditor__inlinenoteprovider_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = ktexteditor__inlinenoteprovider_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KTextEditor__InlineNoteProvider::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__inlinenoteprovider_issignalconnected_isbase) {
            ktexteditor__inlinenoteprovider_issignalconnected_isbase = false;
            return KTextEditor__InlineNoteProvider::isSignalConnected(signal);
        } else if (ktexteditor__inlinenoteprovider_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = ktexteditor__inlinenoteprovider_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KTextEditor__InlineNoteProvider::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KTextEditor__InlineNoteProvider_TimerEvent(KTextEditor::InlineNoteProvider* self, QTimerEvent* event);
    friend void KTextEditor__InlineNoteProvider_QBaseTimerEvent(KTextEditor::InlineNoteProvider* self, QTimerEvent* event);
    friend void KTextEditor__InlineNoteProvider_ChildEvent(KTextEditor::InlineNoteProvider* self, QChildEvent* event);
    friend void KTextEditor__InlineNoteProvider_QBaseChildEvent(KTextEditor::InlineNoteProvider* self, QChildEvent* event);
    friend void KTextEditor__InlineNoteProvider_CustomEvent(KTextEditor::InlineNoteProvider* self, QEvent* event);
    friend void KTextEditor__InlineNoteProvider_QBaseCustomEvent(KTextEditor::InlineNoteProvider* self, QEvent* event);
    friend void KTextEditor__InlineNoteProvider_ConnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_QBaseConnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_DisconnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_QBaseDisconnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__InlineNoteProvider_Sender(const KTextEditor::InlineNoteProvider* self);
    friend QObject* KTextEditor__InlineNoteProvider_QBaseSender(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_SenderSignalIndex(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_QBaseSenderSignalIndex(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_Receivers(const KTextEditor::InlineNoteProvider* self, const char* signal);
    friend int KTextEditor__InlineNoteProvider_QBaseReceivers(const KTextEditor::InlineNoteProvider* self, const char* signal);
    friend bool KTextEditor__InlineNoteProvider_IsSignalConnected(const KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend bool KTextEditor__InlineNoteProvider_QBaseIsSignalConnected(const KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
};

#endif
