#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardAbstractInputMethod so that we can call protected methods
class VirtualQVirtualKeyboardAbstractInputMethod : public QVirtualKeyboardAbstractInputMethod {

  public:
    // Virtual class boolean flag
    bool isVirtualQVirtualKeyboardAbstractInputMethod = true;

    // Virtual class public types (including callbacks)
    using QVirtualKeyboardAbstractInputMethod_MetaObject_Callback = QMetaObject* (*)();
    using QVirtualKeyboardAbstractInputMethod_Metacast_Callback = void* (*)(QVirtualKeyboardAbstractInputMethod*, const char*);
    using QVirtualKeyboardAbstractInputMethod_Metacall_Callback = int (*)(QVirtualKeyboardAbstractInputMethod*, int, int, void**);
    using QVirtualKeyboardAbstractInputMethod_InputModes_Callback = libqt_list /* of int */ (*)(QVirtualKeyboardAbstractInputMethod*, const char*);
    using QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, const char*, int);
    using QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, const char*, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback = libqt_list /* of int */ (*)();
    using QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback = int (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback = QVariant* (*)(QVirtualKeyboardAbstractInputMethod*, int, int, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, int, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, int);
    using QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback = libqt_list /* of int */ (*)();
    using QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback = QVirtualKeyboardTrace* (*)(QVirtualKeyboardAbstractInputMethod*, int, int, libqt_map /* of libqt_string to QVariant* */, libqt_map /* of libqt_string to QVariant* */);
    using QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QVirtualKeyboardTrace*);
    using QVirtualKeyboardAbstractInputMethod_Reselect_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, const int*);
    using QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_Reset_Callback = void (*)();
    using QVirtualKeyboardAbstractInputMethod_Update_Callback = void (*)();
    using QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback = void (*)();
    using QVirtualKeyboardAbstractInputMethod_Event_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_EventFilter_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QObject*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QTimerEvent*);
    using QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QChildEvent*);
    using QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QMetaMethod*);
    using QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QMetaMethod*);
    using QVirtualKeyboardAbstractInputMethod_Sender_Callback = QObject* (*)();
    using QVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback = int (*)();
    using QVirtualKeyboardAbstractInputMethod_Receivers_Callback = int (*)(const QVirtualKeyboardAbstractInputMethod*, const char*);
    using QVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback = bool (*)(const QVirtualKeyboardAbstractInputMethod*, QMetaMethod*);

  protected:
    // Instance callback storage
    QVirtualKeyboardAbstractInputMethod_MetaObject_Callback qvirtualkeyboardabstractinputmethod_metaobject_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Metacast_Callback qvirtualkeyboardabstractinputmethod_metacast_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Metacall_Callback qvirtualkeyboardabstractinputmethod_metacall_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_InputModes_Callback qvirtualkeyboardabstractinputmethod_inputmodes_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback qvirtualkeyboardabstractinputmethod_setinputmode_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback qvirtualkeyboardabstractinputmethod_settextcase_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback qvirtualkeyboardabstractinputmethod_keyevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback qvirtualkeyboardabstractinputmethod_selectionlists_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback qvirtualkeyboardabstractinputmethod_selectionlistdata_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback qvirtualkeyboardabstractinputmethod_tracebegin_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback qvirtualkeyboardabstractinputmethod_traceend_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Reselect_Callback qvirtualkeyboardabstractinputmethod_reselect_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback qvirtualkeyboardabstractinputmethod_clickpreedittext_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Reset_Callback qvirtualkeyboardabstractinputmethod_reset_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Update_Callback qvirtualkeyboardabstractinputmethod_update_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback qvirtualkeyboardabstractinputmethod_clearinputmode_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Event_Callback qvirtualkeyboardabstractinputmethod_event_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_EventFilter_Callback qvirtualkeyboardabstractinputmethod_eventfilter_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback qvirtualkeyboardabstractinputmethod_timerevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback qvirtualkeyboardabstractinputmethod_childevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback qvirtualkeyboardabstractinputmethod_customevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback qvirtualkeyboardabstractinputmethod_connectnotify_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback qvirtualkeyboardabstractinputmethod_disconnectnotify_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Sender_Callback qvirtualkeyboardabstractinputmethod_sender_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback qvirtualkeyboardabstractinputmethod_sendersignalindex_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Receivers_Callback qvirtualkeyboardabstractinputmethod_receivers_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback qvirtualkeyboardabstractinputmethod_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvirtualkeyboardabstractinputmethod_metaobject_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_metacast_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_metacall_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_inputmodes_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_setinputmode_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_settextcase_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_keyevent_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_selectionlists_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_selectionlistitemcount_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_selectionlistdata_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_selectionlistitemselected_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_tracebegin_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_traceend_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_reselect_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_clickpreedittext_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_reset_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_update_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_clearinputmode_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_event_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_eventfilter_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_timerevent_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_childevent_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_customevent_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_connectnotify_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_disconnectnotify_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_sender_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_sendersignalindex_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_receivers_isbase = false;
    mutable bool qvirtualkeyboardabstractinputmethod_issignalconnected_isbase = false;

  public:
    VirtualQVirtualKeyboardAbstractInputMethod() : QVirtualKeyboardAbstractInputMethod() {};
    VirtualQVirtualKeyboardAbstractInputMethod(QObject* parent) : QVirtualKeyboardAbstractInputMethod(parent) {};

    // Callback setters
    inline void setQVirtualKeyboardAbstractInputMethod_MetaObject_Callback(QVirtualKeyboardAbstractInputMethod_MetaObject_Callback cb) { qvirtualkeyboardabstractinputmethod_metaobject_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Metacast_Callback(QVirtualKeyboardAbstractInputMethod_Metacast_Callback cb) { qvirtualkeyboardabstractinputmethod_metacast_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Metacall_Callback(QVirtualKeyboardAbstractInputMethod_Metacall_Callback cb) { qvirtualkeyboardabstractinputmethod_metacall_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_InputModes_Callback(QVirtualKeyboardAbstractInputMethod_InputModes_Callback cb) { qvirtualkeyboardabstractinputmethod_inputmodes_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SetInputMode_Callback(QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback cb) { qvirtualkeyboardabstractinputmethod_setinputmode_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SetTextCase_Callback(QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback cb) { qvirtualkeyboardabstractinputmethod_settextcase_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_KeyEvent_Callback(QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback cb) { qvirtualkeyboardabstractinputmethod_keyevent_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionLists_Callback(QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback cb) { qvirtualkeyboardabstractinputmethod_selectionlists_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback(QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback cb) { qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListData_Callback(QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback cb) { qvirtualkeyboardabstractinputmethod_selectionlistdata_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback(QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback cb) { qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback(QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback cb) { qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback(QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback cb) { qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_TraceBegin_Callback(QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback cb) { qvirtualkeyboardabstractinputmethod_tracebegin_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_TraceEnd_Callback(QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback cb) { qvirtualkeyboardabstractinputmethod_traceend_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Reselect_Callback(QVirtualKeyboardAbstractInputMethod_Reselect_Callback cb) { qvirtualkeyboardabstractinputmethod_reselect_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback(QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback cb) { qvirtualkeyboardabstractinputmethod_clickpreedittext_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Reset_Callback(QVirtualKeyboardAbstractInputMethod_Reset_Callback cb) { qvirtualkeyboardabstractinputmethod_reset_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Update_Callback(QVirtualKeyboardAbstractInputMethod_Update_Callback cb) { qvirtualkeyboardabstractinputmethod_update_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback(QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback cb) { qvirtualkeyboardabstractinputmethod_clearinputmode_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Event_Callback(QVirtualKeyboardAbstractInputMethod_Event_Callback cb) { qvirtualkeyboardabstractinputmethod_event_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_EventFilter_Callback(QVirtualKeyboardAbstractInputMethod_EventFilter_Callback cb) { qvirtualkeyboardabstractinputmethod_eventfilter_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_TimerEvent_Callback(QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback cb) { qvirtualkeyboardabstractinputmethod_timerevent_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_ChildEvent_Callback(QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback cb) { qvirtualkeyboardabstractinputmethod_childevent_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_CustomEvent_Callback(QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback cb) { qvirtualkeyboardabstractinputmethod_customevent_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback(QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback cb) { qvirtualkeyboardabstractinputmethod_connectnotify_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback(QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback cb) { qvirtualkeyboardabstractinputmethod_disconnectnotify_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Sender_Callback(QVirtualKeyboardAbstractInputMethod_Sender_Callback cb) { qvirtualkeyboardabstractinputmethod_sender_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback(QVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback cb) { qvirtualkeyboardabstractinputmethod_sendersignalindex_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_Receivers_Callback(QVirtualKeyboardAbstractInputMethod_Receivers_Callback cb) { qvirtualkeyboardabstractinputmethod_receivers_callback = cb; }
    inline void setQVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback(QVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback cb) { qvirtualkeyboardabstractinputmethod_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQVirtualKeyboardAbstractInputMethod_MetaObject_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_metaobject_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Metacast_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_metacast_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Metacall_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_metacall_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_InputModes_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_inputmodes_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SetInputMode_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_setinputmode_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SetTextCase_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_settextcase_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_KeyEvent_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_keyevent_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionLists_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_selectionlists_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListItemCount_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_selectionlistitemcount_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListData_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_selectionlistdata_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_selectionlistitemselected_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_TraceBegin_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_tracebegin_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_TraceEnd_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_traceend_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Reselect_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_reselect_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_ClickPreeditText_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_clickpreedittext_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Reset_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_reset_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Update_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_update_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_ClearInputMode_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_clearinputmode_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Event_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_event_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_EventFilter_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_eventfilter_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_TimerEvent_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_timerevent_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_ChildEvent_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_childevent_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_CustomEvent_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_customevent_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_ConnectNotify_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_connectnotify_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_DisconnectNotify_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_disconnectnotify_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Sender_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_sender_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_SenderSignalIndex_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_sendersignalindex_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_Receivers_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_receivers_isbase = value; }
    inline void setQVirtualKeyboardAbstractInputMethod_IsSignalConnected_IsBase(bool value) const { qvirtualkeyboardabstractinputmethod_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardabstractinputmethod_metaobject_isbase) {
            qvirtualkeyboardabstractinputmethod_metaobject_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::metaObject();
        }
        auto metaobject_cb = qvirtualkeyboardabstractinputmethod_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardabstractinputmethod_metacast_isbase) {
            qvirtualkeyboardabstractinputmethod_metacast_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::qt_metacast(param1);
        }
        auto metacast_cb = qvirtualkeyboardabstractinputmethod_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardabstractinputmethod_metacall_isbase) {
            qvirtualkeyboardabstractinputmethod_metacall_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qvirtualkeyboardabstractinputmethod_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardInputEngine::InputMode> inputModes(const QString& locale) override {
        auto inputmodes_cb = qvirtualkeyboardabstractinputmethod_inputmodes_callback;
        if (inputmodes_cb) {
            const auto locale_ret = locale;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray locale_b = locale_ret.toUtf8();
            auto locale_str_len = locale_b.length();
            const char* locale_str = static_cast<const char*>(malloc(locale_str_len + 1));
            memcpy((void*)locale_str, locale_b.data(), locale_str_len);
            ((char*)locale_str)[locale_str_len] = '\0';
            const char* cbval1 = locale_str;
            libqt_list /* of int */ callback_ret = inputmodes_cb(this, cbval1);
            QList<QVirtualKeyboardInputEngine::InputMode> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardInputEngine::InputMode>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            libqt_free(locale_str);
            return callback_ret_QList;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setInputMode(const QString& locale, QVirtualKeyboardInputEngine::InputMode inputMode) override {
        auto setinputmode_cb = qvirtualkeyboardabstractinputmethod_setinputmode_callback;
        if (setinputmode_cb) {
            const auto locale_ret = locale;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray locale_b = locale_ret.toUtf8();
            auto locale_str_len = locale_b.length();
            const char* locale_str = static_cast<const char*>(malloc(locale_str_len + 1));
            memcpy((void*)locale_str, locale_b.data(), locale_str_len);
            ((char*)locale_str)[locale_str_len] = '\0';
            const char* cbval1 = locale_str;
            int cbval2 = static_cast<int>(inputMode);
            bool callback_ret = setinputmode_cb(this, cbval1, cbval2);
            libqt_free(locale_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setTextCase(QVirtualKeyboardInputEngine::TextCase textCase) override {
        auto settextcase_cb = qvirtualkeyboardabstractinputmethod_settextcase_callback;
        if (settextcase_cb) {
            int cbval1 = static_cast<int>(textCase);
            bool callback_ret = settextcase_cb(this, cbval1);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual bool keyEvent(Qt::Key key, const QString& text, Qt::KeyboardModifiers modifiers) override {
        auto keyevent_cb = qvirtualkeyboardabstractinputmethod_keyevent_callback;
        if (keyevent_cb) {
            int cbval1 = static_cast<int>(key);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            int cbval3 = static_cast<int>(modifiers);
            bool callback_ret = keyevent_cb(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardSelectionListModel::Type> selectionLists() override {
        if (qvirtualkeyboardabstractinputmethod_selectionlists_isbase) {
            qvirtualkeyboardabstractinputmethod_selectionlists_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::selectionLists();
        }
        auto selectionlists_cb = qvirtualkeyboardabstractinputmethod_selectionlists_callback;
        if (selectionlists_cb) {
            libqt_list /* of int */ callback_ret = selectionlists_cb();
            QList<QVirtualKeyboardSelectionListModel::Type> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardSelectionListModel::Type>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionLists();
    }

    // Virtual method for C ABI access and custom callback
    virtual int selectionListItemCount(QVirtualKeyboardSelectionListModel::Type typeVal) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistitemcount_isbase) {
            qvirtualkeyboardabstractinputmethod_selectionlistitemcount_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::selectionListItemCount(typeVal);
        }
        auto selectionlistitemcount_cb = qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback;
        if (selectionlistitemcount_cb) {
            int cbval1 = static_cast<int>(typeVal);
            int callback_ret = selectionlistitemcount_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListItemCount(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant selectionListData(QVirtualKeyboardSelectionListModel::Type typeVal, int index, QVirtualKeyboardSelectionListModel::Role role) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistdata_isbase) {
            qvirtualkeyboardabstractinputmethod_selectionlistdata_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::selectionListData(typeVal, index, role);
        }
        auto selectionlistdata_cb = qvirtualkeyboardabstractinputmethod_selectionlistdata_callback;
        if (selectionlistdata_cb) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            int cbval3 = static_cast<int>(role);
            QVariant* callback_ret = selectionlistdata_cb(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListData(typeVal, index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionListItemSelected(QVirtualKeyboardSelectionListModel::Type typeVal, int index) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistitemselected_isbase) {
            qvirtualkeyboardabstractinputmethod_selectionlistitemselected_isbase = false;
            QVirtualKeyboardAbstractInputMethod::selectionListItemSelected(typeVal, index);
            return;
        }
        auto selectionlistitemselected_cb = qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback;
        if (selectionlistitemselected_cb) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            selectionlistitemselected_cb(this, cbval1, cbval2);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::selectionListItemSelected(typeVal, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectionListRemoveItem(QVirtualKeyboardSelectionListModel::Type typeVal, int index) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_isbase) {
            qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::selectionListRemoveItem(typeVal, index);
        }
        auto selectionlistremoveitem_cb = qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback;
        if (selectionlistremoveitem_cb) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            bool callback_ret = selectionlistremoveitem_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListRemoveItem(typeVal, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> patternRecognitionModes() const override {
        if (qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_isbase) {
            qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::patternRecognitionModes();
        }
        auto patternrecognitionmodes_cb = qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback;
        if (patternrecognitionmodes_cb) {
            libqt_list /* of int */ callback_ret = patternrecognitionmodes_cb();
            QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QVirtualKeyboardAbstractInputMethod::patternRecognitionModes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVirtualKeyboardTrace* traceBegin(int traceId, QVirtualKeyboardInputEngine::PatternRecognitionMode patternRecognitionMode, const QMap<QString, QVariant>& traceCaptureDeviceInfo, const QMap<QString, QVariant>& traceScreenInfo) override {
        if (qvirtualkeyboardabstractinputmethod_tracebegin_isbase) {
            qvirtualkeyboardabstractinputmethod_tracebegin_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::traceBegin(traceId, patternRecognitionMode, traceCaptureDeviceInfo, traceScreenInfo);
        }
        auto tracebegin_cb = qvirtualkeyboardabstractinputmethod_tracebegin_callback;
        if (tracebegin_cb) {
            int cbval1 = traceId;
            int cbval2 = static_cast<int>(patternRecognitionMode);
            const QMap<QString, QVariant>& traceCaptureDeviceInfo_ret = traceCaptureDeviceInfo;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* traceCaptureDeviceInfo_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * traceCaptureDeviceInfo_ret.size()));
            QVariant** traceCaptureDeviceInfo_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * traceCaptureDeviceInfo_ret.size()));
            int traceCaptureDeviceInfo_ctr = 0;
            for (auto traceCaptureDeviceInfo_itr = traceCaptureDeviceInfo_ret.keyValueBegin(); traceCaptureDeviceInfo_itr != traceCaptureDeviceInfo_ret.keyValueEnd(); ++traceCaptureDeviceInfo_itr) {
                auto traceCaptureDeviceInfo_mapkey_ret = traceCaptureDeviceInfo_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray traceCaptureDeviceInfo_mapkey_b = traceCaptureDeviceInfo_mapkey_ret.toUtf8();
                libqt_string traceCaptureDeviceInfo_mapkey_str;
                traceCaptureDeviceInfo_mapkey_str.len = traceCaptureDeviceInfo_mapkey_b.length();
                traceCaptureDeviceInfo_mapkey_str.data = static_cast<const char*>(malloc(traceCaptureDeviceInfo_mapkey_str.len + 1));
                memcpy((void*)traceCaptureDeviceInfo_mapkey_str.data, traceCaptureDeviceInfo_mapkey_b.data(), traceCaptureDeviceInfo_mapkey_str.len);
                ((char*)traceCaptureDeviceInfo_mapkey_str.data)[traceCaptureDeviceInfo_mapkey_str.len] = '\0';
                traceCaptureDeviceInfo_karr[traceCaptureDeviceInfo_ctr] = traceCaptureDeviceInfo_mapkey_str;
                traceCaptureDeviceInfo_varr[traceCaptureDeviceInfo_ctr] = new QVariant(traceCaptureDeviceInfo_itr->second);
                traceCaptureDeviceInfo_ctr++;
            }
            libqt_map traceCaptureDeviceInfo_out;
            traceCaptureDeviceInfo_out.len = traceCaptureDeviceInfo_ret.size();
            traceCaptureDeviceInfo_out.keys = static_cast<void*>(traceCaptureDeviceInfo_karr);
            traceCaptureDeviceInfo_out.values = static_cast<void*>(traceCaptureDeviceInfo_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval3 = traceCaptureDeviceInfo_out;
            const QMap<QString, QVariant>& traceScreenInfo_ret = traceScreenInfo;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* traceScreenInfo_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * traceScreenInfo_ret.size()));
            QVariant** traceScreenInfo_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * traceScreenInfo_ret.size()));
            int traceScreenInfo_ctr = 0;
            for (auto traceScreenInfo_itr = traceScreenInfo_ret.keyValueBegin(); traceScreenInfo_itr != traceScreenInfo_ret.keyValueEnd(); ++traceScreenInfo_itr) {
                auto traceScreenInfo_mapkey_ret = traceScreenInfo_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray traceScreenInfo_mapkey_b = traceScreenInfo_mapkey_ret.toUtf8();
                libqt_string traceScreenInfo_mapkey_str;
                traceScreenInfo_mapkey_str.len = traceScreenInfo_mapkey_b.length();
                traceScreenInfo_mapkey_str.data = static_cast<const char*>(malloc(traceScreenInfo_mapkey_str.len + 1));
                memcpy((void*)traceScreenInfo_mapkey_str.data, traceScreenInfo_mapkey_b.data(), traceScreenInfo_mapkey_str.len);
                ((char*)traceScreenInfo_mapkey_str.data)[traceScreenInfo_mapkey_str.len] = '\0';
                traceScreenInfo_karr[traceScreenInfo_ctr] = traceScreenInfo_mapkey_str;
                traceScreenInfo_varr[traceScreenInfo_ctr] = new QVariant(traceScreenInfo_itr->second);
                traceScreenInfo_ctr++;
            }
            libqt_map traceScreenInfo_out;
            traceScreenInfo_out.len = traceScreenInfo_ret.size();
            traceScreenInfo_out.keys = static_cast<void*>(traceScreenInfo_karr);
            traceScreenInfo_out.values = static_cast<void*>(traceScreenInfo_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval4 = traceScreenInfo_out;
            QVirtualKeyboardTrace* callback_ret = tracebegin_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::traceBegin(traceId, patternRecognitionMode, traceCaptureDeviceInfo, traceScreenInfo);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool traceEnd(QVirtualKeyboardTrace* trace) override {
        if (qvirtualkeyboardabstractinputmethod_traceend_isbase) {
            qvirtualkeyboardabstractinputmethod_traceend_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::traceEnd(trace);
        }
        auto traceend_cb = qvirtualkeyboardabstractinputmethod_traceend_callback;
        if (traceend_cb) {
            QVirtualKeyboardTrace* cbval1 = trace;
            bool callback_ret = traceend_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::traceEnd(trace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reselect(int cursorPosition, const QVirtualKeyboardInputEngine::ReselectFlags& reselectFlags) override {
        if (qvirtualkeyboardabstractinputmethod_reselect_isbase) {
            qvirtualkeyboardabstractinputmethod_reselect_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::reselect(cursorPosition, reselectFlags);
        }
        auto reselect_cb = qvirtualkeyboardabstractinputmethod_reselect_callback;
        if (reselect_cb) {
            int cbval1 = cursorPosition;
            const QVirtualKeyboardInputEngine::ReselectFlags& reselectFlags_ret = reselectFlags;
            const int* cbval2 = reinterpret_cast<const int*>(&reselectFlags_ret);
            bool callback_ret = reselect_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::reselect(cursorPosition, reselectFlags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clickPreeditText(int cursorPosition) override {
        if (qvirtualkeyboardabstractinputmethod_clickpreedittext_isbase) {
            qvirtualkeyboardabstractinputmethod_clickpreedittext_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::clickPreeditText(cursorPosition);
        }
        auto clickpreedittext_cb = qvirtualkeyboardabstractinputmethod_clickpreedittext_callback;
        if (clickpreedittext_cb) {
            int cbval1 = cursorPosition;
            bool callback_ret = clickpreedittext_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::clickPreeditText(cursorPosition);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qvirtualkeyboardabstractinputmethod_reset_isbase) {
            qvirtualkeyboardabstractinputmethod_reset_isbase = false;
            QVirtualKeyboardAbstractInputMethod::reset();
            return;
        }
        auto reset_cb = qvirtualkeyboardabstractinputmethod_reset_callback;
        if (reset_cb) {
            reset_cb();
            return;
        }
        QVirtualKeyboardAbstractInputMethod::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void update() override {
        if (qvirtualkeyboardabstractinputmethod_update_isbase) {
            qvirtualkeyboardabstractinputmethod_update_isbase = false;
            QVirtualKeyboardAbstractInputMethod::update();
            return;
        }
        auto update_cb = qvirtualkeyboardabstractinputmethod_update_callback;
        if (update_cb) {
            update_cb();
            return;
        }
        QVirtualKeyboardAbstractInputMethod::update();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearInputMode() override {
        if (qvirtualkeyboardabstractinputmethod_clearinputmode_isbase) {
            qvirtualkeyboardabstractinputmethod_clearinputmode_isbase = false;
            QVirtualKeyboardAbstractInputMethod::clearInputMode();
            return;
        }
        auto clearinputmode_cb = qvirtualkeyboardabstractinputmethod_clearinputmode_callback;
        if (clearinputmode_cb) {
            clearinputmode_cb();
            return;
        }
        QVirtualKeyboardAbstractInputMethod::clearInputMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_event_isbase) {
            qvirtualkeyboardabstractinputmethod_event_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::event(event);
        }
        auto event_cb = qvirtualkeyboardabstractinputmethod_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_eventfilter_isbase) {
            qvirtualkeyboardabstractinputmethod_eventfilter_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
        }
        auto eventfilter_cb = qvirtualkeyboardabstractinputmethod_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_timerevent_isbase) {
            qvirtualkeyboardabstractinputmethod_timerevent_isbase = false;
            QVirtualKeyboardAbstractInputMethod::timerEvent(event);
            return;
        }
        auto timerevent_cb = qvirtualkeyboardabstractinputmethod_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_childevent_isbase) {
            qvirtualkeyboardabstractinputmethod_childevent_isbase = false;
            QVirtualKeyboardAbstractInputMethod::childEvent(event);
            return;
        }
        auto childevent_cb = qvirtualkeyboardabstractinputmethod_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_customevent_isbase) {
            qvirtualkeyboardabstractinputmethod_customevent_isbase = false;
            QVirtualKeyboardAbstractInputMethod::customEvent(event);
            return;
        }
        auto customevent_cb = qvirtualkeyboardabstractinputmethod_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardabstractinputmethod_connectnotify_isbase) {
            qvirtualkeyboardabstractinputmethod_connectnotify_isbase = false;
            QVirtualKeyboardAbstractInputMethod::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qvirtualkeyboardabstractinputmethod_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardabstractinputmethod_disconnectnotify_isbase) {
            qvirtualkeyboardabstractinputmethod_disconnectnotify_isbase = false;
            QVirtualKeyboardAbstractInputMethod::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qvirtualkeyboardabstractinputmethod_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvirtualkeyboardabstractinputmethod_sender_isbase) {
            qvirtualkeyboardabstractinputmethod_sender_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::sender();
        }
        auto sender_cb = qvirtualkeyboardabstractinputmethod_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvirtualkeyboardabstractinputmethod_sendersignalindex_isbase) {
            qvirtualkeyboardabstractinputmethod_sendersignalindex_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::senderSignalIndex();
        }
        auto sendersignalindex_cb = qvirtualkeyboardabstractinputmethod_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvirtualkeyboardabstractinputmethod_receivers_isbase) {
            qvirtualkeyboardabstractinputmethod_receivers_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::receivers(signal);
        }
        auto receivers_cb = qvirtualkeyboardabstractinputmethod_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvirtualkeyboardabstractinputmethod_issignalconnected_isbase) {
            qvirtualkeyboardabstractinputmethod_issignalconnected_isbase = false;
            return QVirtualKeyboardAbstractInputMethod::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qvirtualkeyboardabstractinputmethod_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::isSignalConnected(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardAbstractInputMethod_TimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperTimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_ChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_CustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperCustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_ConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardAbstractInputMethod_SuperConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardAbstractInputMethod_DisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend QObject* QVirtualKeyboardAbstractInputMethod_Sender(const QVirtualKeyboardAbstractInputMethod* self);
    friend QObject* QVirtualKeyboardAbstractInputMethod_SuperSender(const QVirtualKeyboardAbstractInputMethod* self);
    friend int QVirtualKeyboardAbstractInputMethod_SenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self);
    friend int QVirtualKeyboardAbstractInputMethod_SuperSenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self);
    friend int QVirtualKeyboardAbstractInputMethod_Receivers(const QVirtualKeyboardAbstractInputMethod* self, const char* signal);
    friend int QVirtualKeyboardAbstractInputMethod_SuperReceivers(const QVirtualKeyboardAbstractInputMethod* self, const char* signal);
    friend bool QVirtualKeyboardAbstractInputMethod_IsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend bool QVirtualKeyboardAbstractInputMethod_SuperIsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
};

#endif
