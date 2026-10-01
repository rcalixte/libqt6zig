#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONTEXTEDITACTION_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONTEXTEDITACTION_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsWidgets::EmoticonTextEditAction
class VirtualTextEmoticonsWidgetsEmoticonTextEditAction final : public TextEmoticonsWidgets::EmoticonTextEditAction {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsWidgets__EmoticonTextEditAction*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback = void* (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, const char*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback = int (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, int, int, void**);
    using TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback = QWidget* (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QWidget*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QObject*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QWidget*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QTimerEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QChildEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QMetaMethod*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditAction*, QMetaMethod*);
    using TextEmoticonsWidgets::EmoticonTextEditAction::createdWidgets;
    using TextEmoticonsWidgets::EmoticonTextEditAction::isSignalConnected;
    using TextEmoticonsWidgets::EmoticonTextEditAction::receivers;
    using TextEmoticonsWidgets::EmoticonTextEditAction::sender;
    using TextEmoticonsWidgets::EmoticonTextEditAction::senderSignalIndex;

    // Instance callback storage
    TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback textemoticonswidgets__emoticontexteditaction_metaobject_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback textemoticonswidgets__emoticontexteditaction_metacast_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback textemoticonswidgets__emoticontexteditaction_metacall_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback textemoticonswidgets__emoticontexteditaction_createwidget_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback textemoticonswidgets__emoticontexteditaction_event_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback textemoticonswidgets__emoticontexteditaction_eventfilter_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback textemoticonswidgets__emoticontexteditaction_deletewidget_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback textemoticonswidgets__emoticontexteditaction_timerevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback textemoticonswidgets__emoticontexteditaction_childevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback textemoticonswidgets__emoticontexteditaction_customevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback textemoticonswidgets__emoticontexteditaction_connectnotify_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsWidgets::EmoticonTextEditAction {
        using TextEmoticonsWidgets::EmoticonTextEditAction::childEvent;
        using TextEmoticonsWidgets::EmoticonTextEditAction::connectNotify;
        using TextEmoticonsWidgets::EmoticonTextEditAction::customEvent;
        using TextEmoticonsWidgets::EmoticonTextEditAction::deleteWidget;
        using TextEmoticonsWidgets::EmoticonTextEditAction::disconnectNotify;
        using TextEmoticonsWidgets::EmoticonTextEditAction::event;
        using TextEmoticonsWidgets::EmoticonTextEditAction::eventFilter;
        using TextEmoticonsWidgets::EmoticonTextEditAction::timerEvent;
    };

    VirtualTextEmoticonsWidgetsEmoticonTextEditAction(QObject* parent) : TextEmoticonsWidgets::EmoticonTextEditAction(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonswidgets__emoticontexteditaction_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonswidgets__emoticontexteditaction_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonswidgets__emoticontexteditaction_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonswidgets__emoticontexteditaction_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonswidgets__emoticontexteditaction_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonswidgets__emoticontexteditaction_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (textemoticonswidgets__emoticontexteditaction_createwidget_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = textemoticonswidgets__emoticontexteditaction_createwidget_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (textemoticonswidgets__emoticontexteditaction_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = textemoticonswidgets__emoticontexteditaction_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textemoticonswidgets__emoticontexteditaction_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = textemoticonswidgets__emoticontexteditaction_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (textemoticonswidgets__emoticontexteditaction_deletewidget_callback) {
            QWidget* cbval1 = widget;
            textemoticonswidgets__emoticontexteditaction_deletewidget_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditaction_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditaction_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditaction_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditaction_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonswidgets__emoticontexteditaction_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* param1);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter(TextEmoticonsWidgets::EmoticonTextEditAction* self, QObject* param1, QEvent* param2);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget(TextEmoticonsWidgets::EmoticonTextEditAction* self, QWidget* widget);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QTimerEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QChildEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
};

#endif
