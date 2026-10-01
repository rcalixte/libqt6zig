#pragma once
#ifndef EXTRAS_KTEXTEDITOR_LIBINLINENOTEPROVIDER_HXX
#define EXTRAS_KTEXTEDITOR_LIBINLINENOTEPROVIDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KTextEditor::InlineNoteProvider
class VirtualKTextEditorInlineNoteProvider : public KTextEditor::InlineNoteProvider {
  public:
    // Virtual class public types (including callbacks and access types)
    using KTextEditor__InlineNoteProvider_MetaObject_Callback = QMetaObject* (*)(const KTextEditor__InlineNoteProvider*);
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
    using KTextEditor::InlineNoteProvider::isSignalConnected;
    using KTextEditor::InlineNoteProvider::receivers;
    using KTextEditor::InlineNoteProvider::sender;
    using KTextEditor::InlineNoteProvider::senderSignalIndex;

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

    // Access struct
    struct Base : KTextEditor::InlineNoteProvider {
        using KTextEditor::InlineNoteProvider::childEvent;
        using KTextEditor::InlineNoteProvider::connectNotify;
        using KTextEditor::InlineNoteProvider::customEvent;
        using KTextEditor::InlineNoteProvider::disconnectNotify;
        using KTextEditor::InlineNoteProvider::timerEvent;
    };

    VirtualKTextEditorInlineNoteProvider() : KTextEditor::InlineNoteProvider() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ktexteditor__inlinenoteprovider_metaobject_callback) {
            QMetaObject* callback_ret = ktexteditor__inlinenoteprovider_metaobject_callback(this);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ktexteditor__inlinenoteprovider_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ktexteditor__inlinenoteprovider_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ktexteditor__inlinenoteprovider_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ktexteditor__inlinenoteprovider_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KTextEditor__InlineNoteProvider::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> inlineNotes(int line) const override {
        if (ktexteditor__inlinenoteprovider_inlinenotes_callback) {
            int cbval1 = line;
            libqt_list /* of int */ callback_ret = ktexteditor__inlinenoteprovider_inlinenotes_callback(this, cbval1);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::InlineNoteProvider::inlineNotes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize inlineNoteSize(const KTextEditor::InlineNote& note) const override {
        if (ktexteditor__inlinenoteprovider_inlinenotesize_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            QSize* callback_ret = ktexteditor__inlinenoteprovider_inlinenotesize_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::InlineNoteProvider::inlineNoteSize called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintInlineNote(const KTextEditor::InlineNote& note, QPainter& painter, Qt::LayoutDirection direction) const override {
        if (ktexteditor__inlinenoteprovider_paintinlinenote_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            QPainter& painter_ret = painter;
            // Cast returned reference into pointer
            QPainter* cbval2 = &painter_ret;
            int cbval3 = static_cast<int>(direction);
            ktexteditor__inlinenoteprovider_paintinlinenote_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KTextEditor::InlineNoteProvider::paintInlineNote called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteActivated(const KTextEditor::InlineNote& note, Qt::MouseButtons buttons, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenoteactivated_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            int cbval2 = static_cast<int>(buttons);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&globalPos_ret);
            ktexteditor__inlinenoteprovider_inlinenoteactivated_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteActivated(note, buttons, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusInEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);
            ktexteditor__inlinenoteprovider_inlinenotefocusinevent_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteFocusInEvent(note, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteFocusOutEvent(const KTextEditor::InlineNote& note) override {
        if (ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            ktexteditor__inlinenoteprovider_inlinenotefocusoutevent_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteFocusOutEvent(note);
    }

    // Virtual method for C ABI access and custom callback
    virtual void inlineNoteMouseMoveEvent(const KTextEditor::InlineNote& note, const QPoint& globalPos) override {
        if (ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback) {
            const KTextEditor::InlineNote& note_ret = note;
            // Cast returned reference into pointer
            KTextEditor__InlineNote* cbval1 = const_cast<KTextEditor::InlineNote*>(&note_ret);
            const QPoint& globalPos_ret = globalPos;
            // Cast returned reference into pointer
            QPoint* cbval2 = const_cast<QPoint*>(&globalPos_ret);
            ktexteditor__inlinenoteprovider_inlinenotemousemoveevent_callback(this, cbval1, cbval2);
            return;
        }
        KTextEditor__InlineNoteProvider::inlineNoteMouseMoveEvent(note, globalPos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ktexteditor__inlinenoteprovider_event_callback(this, cbval1);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ktexteditor__inlinenoteprovider_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KTextEditor__InlineNoteProvider::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ktexteditor__inlinenoteprovider_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ktexteditor__inlinenoteprovider_timerevent_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ktexteditor__inlinenoteprovider_childevent_callback) {
            QChildEvent* cbval1 = event;
            ktexteditor__inlinenoteprovider_childevent_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ktexteditor__inlinenoteprovider_customevent_callback) {
            QEvent* cbval1 = event;
            ktexteditor__inlinenoteprovider_customevent_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__inlinenoteprovider_connectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ktexteditor__inlinenoteprovider_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ktexteditor__inlinenoteprovider_disconnectnotify_callback(this, cbval1);
            return;
        }
        KTextEditor__InlineNoteProvider::disconnectNotify(signal);
    }

    // Friend functions
    friend void KTextEditor__InlineNoteProvider_SuperTimerEvent(KTextEditor::InlineNoteProvider* self, QTimerEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperChildEvent(KTextEditor::InlineNoteProvider* self, QChildEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperCustomEvent(KTextEditor::InlineNoteProvider* self, QEvent* event);
    friend void KTextEditor__InlineNoteProvider_SuperConnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
    friend void KTextEditor__InlineNoteProvider_SuperDisconnectNotify(KTextEditor::InlineNoteProvider* self, const QMetaMethod* signal);
};

#endif
