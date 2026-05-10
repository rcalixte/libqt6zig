#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOTICONTEXTEDITACTION_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALEMOTICONTEXTEDITACTION_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsWidgets::EmoticonTextEditAction so that we can call protected methods
class VirtualTextEmoticonsWidgetsEmoticonTextEditAction final : public TextEmoticonsWidgets::EmoticonTextEditAction {

  public:
    // Virtual class boolean flag
    bool isVirtualTextEmoticonsWidgetsEmoticonTextEditAction = true;

    // Virtual class public types (including callbacks)
    using TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback = QMetaObject* (*)();
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
    using TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback = libqt_list /* of QWidget* */ (*)();
    using TextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback = QObject* (*)();
    using TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback = int (*)();
    using TextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback = int (*)(const TextEmoticonsWidgets__EmoticonTextEditAction*, const char*);
    using TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback = bool (*)(const TextEmoticonsWidgets__EmoticonTextEditAction*, QMetaMethod*);

  protected:
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
    TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback textemoticonswidgets__emoticontexteditaction_createdwidgets_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback textemoticonswidgets__emoticontexteditaction_sender_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback textemoticonswidgets__emoticontexteditaction_sendersignalindex_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback textemoticonswidgets__emoticontexteditaction_receivers_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback textemoticonswidgets__emoticontexteditaction_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textemoticonswidgets__emoticontexteditaction_metaobject_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_metacast_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_metacall_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_createwidget_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_event_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_eventfilter_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_deletewidget_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_timerevent_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_childevent_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_customevent_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_connectnotify_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_disconnectnotify_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_createdwidgets_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_sender_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_sendersignalindex_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_receivers_isbase = false;
    mutable bool textemoticonswidgets__emoticontexteditaction_issignalconnected_isbase = false;

  public:
    VirtualTextEmoticonsWidgetsEmoticonTextEditAction(QObject* parent) : TextEmoticonsWidgets::EmoticonTextEditAction(parent) {};

    // Callback setters
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_Callback cb) { textemoticonswidgets__emoticontexteditaction_metaobject_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_Metacast_Callback cb) { textemoticonswidgets__emoticontexteditaction_metacast_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_Metacall_Callback cb) { textemoticonswidgets__emoticontexteditaction_metacall_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_Callback cb) { textemoticonswidgets__emoticontexteditaction_createwidget_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_Event_Callback cb) { textemoticonswidgets__emoticontexteditaction_event_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_Callback cb) { textemoticonswidgets__emoticontexteditaction_eventfilter_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_Callback cb) { textemoticonswidgets__emoticontexteditaction_deletewidget_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_Callback cb) { textemoticonswidgets__emoticontexteditaction_timerevent_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_Callback cb) { textemoticonswidgets__emoticontexteditaction_childevent_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_Callback cb) { textemoticonswidgets__emoticontexteditaction_customevent_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_Callback cb) { textemoticonswidgets__emoticontexteditaction_connectnotify_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_Callback cb) { textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_Callback cb) { textemoticonswidgets__emoticontexteditaction_createdwidgets_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_Sender_Callback cb) { textemoticonswidgets__emoticontexteditaction_sender_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_Callback cb) { textemoticonswidgets__emoticontexteditaction_sendersignalindex_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_Receivers_Callback cb) { textemoticonswidgets__emoticontexteditaction_receivers_callback = cb; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback(TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_Callback cb) { textemoticonswidgets__emoticontexteditaction_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_MetaObject_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_metaobject_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Metacast_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_metacast_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Metacall_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_metacall_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_createwidget_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Event_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_event_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_EventFilter_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_eventfilter_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_deletewidget_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_timerevent_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_childevent_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_customevent_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_connectnotify_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_disconnectnotify_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_createdwidgets_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Sender_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_sender_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_sendersignalindex_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_Receivers_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_receivers_isbase = value; }
    inline void setTextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected_IsBase(bool value) const { textemoticonswidgets__emoticontexteditaction_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonswidgets__emoticontexteditaction_metaobject_isbase) {
            textemoticonswidgets__emoticontexteditaction_metaobject_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::metaObject();
        }
        auto metaobject_cb = textemoticonswidgets__emoticontexteditaction_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonswidgets__emoticontexteditaction_metacast_isbase) {
            textemoticonswidgets__emoticontexteditaction_metacast_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacast(param1);
        }
        auto metacast_cb = textemoticonswidgets__emoticontexteditaction_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonswidgets__emoticontexteditaction_metacall_isbase) {
            textemoticonswidgets__emoticontexteditaction_metacall_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textemoticonswidgets__emoticontexteditaction_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(QWidget* parent) override {
        if (textemoticonswidgets__emoticontexteditaction_createwidget_isbase) {
            textemoticonswidgets__emoticontexteditaction_createwidget_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::createWidget(parent);
        }
        auto createwidget_cb = textemoticonswidgets__emoticontexteditaction_createwidget_callback;
        if (createwidget_cb) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = createwidget_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::createWidget(parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (textemoticonswidgets__emoticontexteditaction_event_isbase) {
            textemoticonswidgets__emoticontexteditaction_event_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::event(param1);
        }
        auto event_cb = textemoticonswidgets__emoticontexteditaction_event_callback;
        if (event_cb) {
            QEvent* cbval1 = param1;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (textemoticonswidgets__emoticontexteditaction_eventfilter_isbase) {
            textemoticonswidgets__emoticontexteditaction_eventfilter_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::eventFilter(param1, param2);
        }
        auto eventfilter_cb = textemoticonswidgets__emoticontexteditaction_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void deleteWidget(QWidget* widget) override {
        if (textemoticonswidgets__emoticontexteditaction_deletewidget_isbase) {
            textemoticonswidgets__emoticontexteditaction_deletewidget_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::deleteWidget(widget);
            return;
        }
        auto deletewidget_cb = textemoticonswidgets__emoticontexteditaction_deletewidget_callback;
        if (deletewidget_cb) {
            QWidget* cbval1 = widget;

            deletewidget_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::deleteWidget(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_timerevent_isbase) {
            textemoticonswidgets__emoticontexteditaction_timerevent_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::timerEvent(event);
            return;
        }
        auto timerevent_cb = textemoticonswidgets__emoticontexteditaction_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_childevent_isbase) {
            textemoticonswidgets__emoticontexteditaction_childevent_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::childEvent(event);
            return;
        }
        auto childevent_cb = textemoticonswidgets__emoticontexteditaction_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditaction_customevent_isbase) {
            textemoticonswidgets__emoticontexteditaction_customevent_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::customEvent(event);
            return;
        }
        auto customevent_cb = textemoticonswidgets__emoticontexteditaction_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditaction_connectnotify_isbase) {
            textemoticonswidgets__emoticontexteditaction_connectnotify_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textemoticonswidgets__emoticontexteditaction_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditaction_disconnectnotify_isbase) {
            textemoticonswidgets__emoticontexteditaction_disconnectnotify_isbase = false;
            TextEmoticonsWidgets__EmoticonTextEditAction::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textemoticonswidgets__emoticontexteditaction_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditAction::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QList<QWidget*> createdWidgets() const {
        if (textemoticonswidgets__emoticontexteditaction_createdwidgets_isbase) {
            textemoticonswidgets__emoticontexteditaction_createdwidgets_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::createdWidgets();
        }
        auto createdwidgets_cb = textemoticonswidgets__emoticontexteditaction_createdwidgets_callback;
        if (createdwidgets_cb) {
            libqt_list /* of QWidget* */ callback_ret = createdwidgets_cb();
            QList<QWidget*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QWidget** callback_ret_arr = static_cast<QWidget**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::createdWidgets();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textemoticonswidgets__emoticontexteditaction_sender_isbase) {
            textemoticonswidgets__emoticontexteditaction_sender_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::sender();
        }
        auto sender_cb = textemoticonswidgets__emoticontexteditaction_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textemoticonswidgets__emoticontexteditaction_sendersignalindex_isbase) {
            textemoticonswidgets__emoticontexteditaction_sendersignalindex_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::senderSignalIndex();
        }
        auto sendersignalindex_cb = textemoticonswidgets__emoticontexteditaction_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textemoticonswidgets__emoticontexteditaction_receivers_isbase) {
            textemoticonswidgets__emoticontexteditaction_receivers_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::receivers(signal);
        }
        auto receivers_cb = textemoticonswidgets__emoticontexteditaction_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textemoticonswidgets__emoticontexteditaction_issignalconnected_isbase) {
            textemoticonswidgets__emoticontexteditaction_issignalconnected_isbase = false;
            return TextEmoticonsWidgets__EmoticonTextEditAction::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textemoticonswidgets__emoticontexteditaction_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditAction::isSignalConnected(signal);
    }

    // Friend functions
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_Event(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* param1);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* param1);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter(TextEmoticonsWidgets::EmoticonTextEditAction* self, QObject* param1, QEvent* param2);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter(TextEmoticonsWidgets::EmoticonTextEditAction* self, QObject* param1, QEvent* param2);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget(TextEmoticonsWidgets::EmoticonTextEditAction* self, QWidget* widget);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget(TextEmoticonsWidgets::EmoticonTextEditAction* self, QWidget* widget);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QTimerEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QTimerEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QChildEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QChildEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent(TextEmoticonsWidgets::EmoticonTextEditAction* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend void TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify(TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend libqt_list /* of QWidget* */ TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend libqt_list /* of QWidget* */ TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreatedWidgets(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend QObject* TextEmoticonsWidgets__EmoticonTextEditAction_Sender(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend QObject* TextEmoticonsWidgets__EmoticonTextEditAction_SuperSender(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend int TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend int TextEmoticonsWidgets__EmoticonTextEditAction_SuperSenderSignalIndex(const TextEmoticonsWidgets::EmoticonTextEditAction* self);
    friend int TextEmoticonsWidgets__EmoticonTextEditAction_Receivers(const TextEmoticonsWidgets::EmoticonTextEditAction* self, const char* signal);
    friend int TextEmoticonsWidgets__EmoticonTextEditAction_SuperReceivers(const TextEmoticonsWidgets::EmoticonTextEditAction* self, const char* signal);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected(const TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
    friend bool TextEmoticonsWidgets__EmoticonTextEditAction_SuperIsSignalConnected(const TextEmoticonsWidgets::EmoticonTextEditAction* self, const QMetaMethod* signal);
};

#endif
