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
    using KTextEditor__InlineNoteProvider_MetaObject_Callback = QMetaObject* (*)();
    using KTextEditor__InlineNoteProvider_Metacast_Callback = void* (*)(KTextEditor__InlineNoteProvider*, const char*);
    using KTextEditor__InlineNoteProvider_Metacall_Callback = int (*)(KTextEditor__InlineNoteProvider*, int, int, void**);
    using KTextEditor__InlineNoteProvider_InlineNotes_Callback = libqt_list /* of int */ (*)(const KTextEditor__InlineNoteProvider*, int);
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
    KTextEditor__InlineNoteProvider_MetaObject_Callback ktexteditor__inlinenoteprovider_metaobject_callback = nullptr;
    KTextEditor__InlineNoteProvider_Metacast_Callback ktexteditor__inlinenoteprovider_metacast_callback = nullptr;
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
    mutable bool ktexteditor__inlinenoteprovider_metaobject_isbase = false;
    mutable bool ktexteditor__inlinenoteprovider_metacast_isbase = false;
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

    // Callback setters
    inline void setKTextEditor__InlineNoteProvider_MetaObject_Callback(KTextEditor__InlineNoteProvider_MetaObject_Callback cb) { ktexteditor__inlinenoteprovider_metaobject_callback = cb; }
    inline void setKTextEditor__InlineNoteProvider_Metacast_Callback(KTextEditor__InlineNoteProvider_Metacast_Callback cb) { ktexteditor__inlinenoteprovider_metacast_callback = cb; }
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
    inline void setKTextEditor__InlineNoteProvider_MetaObject_IsBase(bool value) const { ktexteditor__inlinenoteprovider_metaobject_isbase = value; }
    inline void setKTextEditor__InlineNoteProvider_Metacast_IsBase(bool value) const { ktexteditor__inlinenoteprovider_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__inlinenoteprovider_metaobject_isbase) {
            ktexteditor__inlinenoteprovider_metaobject_isbase = false;
            return KTextEditor__InlineNoteProvider::metaObject();
        }
        auto metaobject_cb = ktexteditor__inlinenoteprovider_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__inlinenoteprovider_metacast_isbase) {
            ktexteditor__inlinenoteprovider_metacast_isbase = false;
            return KTextEditor__InlineNoteProvider::qt_metacast(param1);
        }
        auto metacast_cb = ktexteditor__inlinenoteprovider_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__inlinenoteprovider_metacall_isbase) {
            ktexteditor__inlinenoteprovider_metacall_isbase = false;
            return KTextEditor__InlineNoteProvider::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ktexteditor__inlinenoteprovider_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__InlineNoteProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> inlineNotes(int line) const override {
        auto inlinenotes_cb = ktexteditor__inlinenoteprovider_inlinenotes_callback;
        if (inlinenotes_cb) {
            int cbval1 = line;

            libqt_list /* of int */ callback_ret = inlinenotes_cb(this, cbval1);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize inlineNoteSize(const KTextEditor::InlineNote& note) const override {
        auto inlinenotesize_cb = ktexteditor__inlinenoteprovider_inlinenotesize_callback;
        if (inlinenotesize_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);

            QSize* callback_ret = inlinenotesize_cb(this, cbval1);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintInlineNote(const KTextEditor::InlineNote& note, QPainter& painter, Qt::LayoutDirection direction) const override {
        auto paintinlinenote_cb = ktexteditor__inlinenoteprovider_paintinlinenote_callback;
        if (paintinlinenote_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval2 = &painter_ret;
            int cbval3 = static_cast<int>(direction);

            paintinlinenote_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteActivated(const KTextEditor::InlineNote& note, Qt::MouseButtons buttons, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase) {
            ktexteditor__inlinenoteprovider_inlinenoteactivated_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteActivated(note, buttons, globalPos);
            return;
        }
        auto inlinenoteactivated_cb = ktexteditor__inlinenoteprovider_inlinenoteactivated_callback;
        if (inlinenoteactivated_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            int cbval2 = static_cast<int>(buttons);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&globalPos_ret);

            inlinenoteactivated_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteActivated(note, buttons, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusInEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotefocusinevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteFocusInEvent(note, globalPos);
            return;
        }
        auto inlinenotefocusinevent_cb = ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback;
        if (inlinenotefocusinevent_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            inlinenotefocusinevent_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteFocusInEvent(note, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusOutEvent(const KTextEditor::InlineNote& note) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteFocusOutEvent(note);
            return;
        }
        auto inlinenotefocusoutevent_cb = ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback;
        if (inlinenotefocusoutevent_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);

            inlinenotefocusoutevent_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteFocusOutEvent(note);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteMouseMoveEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase) {
            ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_isbase = false;
            KTextEditor__InlineNoteProvider::inlineNoteMouseMoveEvent(note, globalPos);
            return;
        }
        auto inlinenotemousemoveevent_cb = ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback;
        if (inlinenotemousemoveevent_cb) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);

            inlinenotemousemoveevent_cb(this, cbval1, cbval2);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteMouseMoveEvent(note, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_event_isbase) {
            ktexteditor__inlinenoteprovider_event_isbase = false;
            return KTextEditor__InlineNoteProvider::event(event);
        }
        auto event_cb = ktexteditor__inlinenoteprovider_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_eventfilter_isbase) {
            ktexteditor__inlinenoteprovider_eventfilter_isbase = false;
            return KTextEditor__InlineNoteProvider::eventFilter(watched, event);
        }
        auto eventfilter_cb = ktexteditor__inlinenoteprovider_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__inlinenoteprovider_timerevent_isbase) {
            ktexteditor__inlinenoteprovider_timerevent_isbase = false;
            KTextEditor__InlineNoteProvider::timerEvent(event);
            return;
        }
        auto timerevent_cb = ktexteditor__inlinenoteprovider_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__inlinenoteprovider_childevent_isbase) {
            ktexteditor__inlinenoteprovider_childevent_isbase = false;
            KTextEditor__InlineNoteProvider::childEvent(event);
            return;
        }
        auto childevent_cb = ktexteditor__inlinenoteprovider_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_customevent_isbase) {
            ktexteditor__inlinenoteprovider_customevent_isbase = false;
            KTextEditor__InlineNoteProvider::customEvent(event);
            return;
        }
        auto customevent_cb = ktexteditor__inlinenoteprovider_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_connectnotify_isbase) {
            ktexteditor__inlinenoteprovider_connectnotify_isbase = false;
            KTextEditor__InlineNoteProvider::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ktexteditor__inlinenoteprovider_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_disconnectnotify_isbase) {
            ktexteditor__inlinenoteprovider_disconnectnotify_isbase = false;
            KTextEditor__InlineNoteProvider::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ktexteditor__inlinenoteprovider_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ktexteditor__inlinenoteprovider_sender_isbase) {
            ktexteditor__inlinenoteprovider_sender_isbase = false;
            return KTextEditor__InlineNoteProvider::sender();
        }
        auto sender_cb = ktexteditor__inlinenoteprovider_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ktexteditor__inlinenoteprovider_sendersignalindex_isbase) {
            ktexteditor__inlinenoteprovider_sendersignalindex_isbase = false;
            return KTextEditor__InlineNoteProvider::senderSignalIndex();
        }
        auto sendersignalindex_cb = ktexteditor__inlinenoteprovider_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__InlineNoteProvider::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ktexteditor__inlinenoteprovider_receivers_isbase) {
            ktexteditor__inlinenoteprovider_receivers_isbase = false;
            return KTextEditor__InlineNoteProvider::receivers(signal);
        }
        auto receivers_cb = ktexteditor__inlinenoteprovider_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__InlineNoteProvider::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ktexteditor__inlinenoteprovider_issignalconnected_isbase) {
            ktexteditor__inlinenoteprovider_issignalconnected_isbase = false;
            return KTextEditor__InlineNoteProvider::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ktexteditor__inlinenoteprovider_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::isSignalConnected(signal);
    }

    // Friend functions
    friend void KTextEditor__InlineNoteProvider_TimerEvent(KTextEditor::InlineNoteProvider* self, QTimerEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperTimerEvent(KTextEditor::InlineNoteProvider* self, QTimerEvent* event);
    friend void KTextEditor__InlineNoteProvider_ChildEvent(KTextEditor::InlineNoteProvider* self, QChildEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperChildEvent(KTextEditor::InlineNoteProvider* self, QChildEvent* event);
    friend void KTextEditor__InlineNoteProvider_CustomEvent(KTextEditor::InlineNoteProvider* self, QEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperCustomEvent(KTextEditor::InlineNoteProvider* self, QEvent* event);
    friend void KTextEditor__InlineNoteProvider_ConnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_SuperConnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_DisconnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_SuperDisconnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend QObject* KTextEditor__InlineNoteProvider_Sender(const KTextEditor::InlineNoteProvider* self);
    friend QObject* KTextEditor__InlineNoteProvider_SuperSender(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_SenderSignalIndex(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_SuperSenderSignalIndex(const KTextEditor::InlineNoteProvider* self);
    friend int KTextEditor__InlineNoteProvider_Receivers(const KTextEditor::InlineNoteProvider* self, const char* signal);
    friend int KTextEditor__InlineNoteProvider_SuperReceivers(const KTextEditor::InlineNoteProvider* self, const char* signal);
    friend bool KTextEditor__InlineNoteProvider_IsSignalConnected(const KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend bool KTextEditor__InlineNoteProvider_SuperIsSignalConnected(const KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
};

#endif
