#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALSYNTAXHIGHLIGHTER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGC_LIBVIRTUALSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSyntaxHighlighting::SyntaxHighlighter so that we can call protected methods
class VirtualKSyntaxHighlightingSyntaxHighlighter final : public KSyntaxHighlighting::SyntaxHighlighter {

  public:
    // Virtual class boolean flag
    bool isVirtualKSyntaxHighlightingSyntaxHighlighter = true;

    // Virtual class public types (including callbacks)
    using KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback = QMetaObject* (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback = void* (*)(KSyntaxHighlighting__SyntaxHighlighter*, const char*);
    using KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback = int (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, void**);
    using KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, KSyntaxHighlighting__Definition*);
    using KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, KSyntaxHighlighting__Theme*);
    using KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, const char*);
    using KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, KSyntaxHighlighting__Format*);
    using KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, KSyntaxHighlighting__FoldingRegion*);
    using KSyntaxHighlighting__SyntaxHighlighter_Event_Callback = bool (*)(KSyntaxHighlighting__SyntaxHighlighter*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback = bool (*)(KSyntaxHighlighting__SyntaxHighlighter*, QObject*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QTimerEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QChildEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QEvent*);
    using KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QMetaMethod*);
    using KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QMetaMethod*);
    using KSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int, int, QTextCharFormat*);
    using KSyntaxHighlighting__SyntaxHighlighter_Format_Callback = QTextCharFormat* (*)(const KSyntaxHighlighting__SyntaxHighlighter*, int);
    using KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback = int (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback = int (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, int);
    using KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback = void (*)(KSyntaxHighlighting__SyntaxHighlighter*, QTextBlockUserData*);
    using KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback = QTextBlock* (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_Sender_Callback = QObject* (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback = int (*)();
    using KSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback = int (*)(const KSyntaxHighlighting__SyntaxHighlighter*, const char*);
    using KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback = bool (*)(const KSyntaxHighlighting__SyntaxHighlighter*, QMetaMethod*);

  protected:
    // Instance callback storage
    KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback ksyntaxhighlighting__syntaxhighlighter_metaobject_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback ksyntaxhighlighting__syntaxhighlighter_metacast_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback ksyntaxhighlighting__syntaxhighlighter_metacall_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback ksyntaxhighlighting__syntaxhighlighter_settheme_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback ksyntaxhighlighting__syntaxhighlighter_applyformat_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Event_Callback ksyntaxhighlighting__syntaxhighlighter_event_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback ksyntaxhighlighting__syntaxhighlighter_timerevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback ksyntaxhighlighting__syntaxhighlighter_childevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback ksyntaxhighlighting__syntaxhighlighter_customevent_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback ksyntaxhighlighting__syntaxhighlighter_setformat_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Format_Callback ksyntaxhighlighting__syntaxhighlighter_format_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback ksyntaxhighlighting__syntaxhighlighter_previousblockstate_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback ksyntaxhighlighting__syntaxhighlighter_currentblockstate_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback ksyntaxhighlighting__syntaxhighlighter_currentblock_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Sender_Callback ksyntaxhighlighting__syntaxhighlighter_sender_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback ksyntaxhighlighting__syntaxhighlighter_receivers_callback = nullptr;
    KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback ksyntaxhighlighting__syntaxhighlighter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool ksyntaxhighlighting__syntaxhighlighter_metaobject_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_metacast_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_metacall_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_setdefinition_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_settheme_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_highlightblock_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_applyformat_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_applyfolding_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_event_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_eventfilter_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_timerevent_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_childevent_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_customevent_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_connectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_setformat_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_format_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_previousblockstate_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_currentblockstate_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_currentblock_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_sender_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_receivers_isbase = false;
    mutable bool ksyntaxhighlighting__syntaxhighlighter_issignalconnected_isbase = false;

  public:
    VirtualKSyntaxHighlightingSyntaxHighlighter() : KSyntaxHighlighting::SyntaxHighlighter() {};
    VirtualKSyntaxHighlightingSyntaxHighlighter(QTextDocument* document) : KSyntaxHighlighting::SyntaxHighlighter(document) {};
    VirtualKSyntaxHighlightingSyntaxHighlighter(QObject* parent) : KSyntaxHighlighting::SyntaxHighlighter(parent) {};

    // Callback setters
    inline void setKSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback(KSyntaxHighlighting__SyntaxHighlighter_MetaObject_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_metaobject_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback(KSyntaxHighlighting__SyntaxHighlighter_Metacast_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_metacast_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback(KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_metacall_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback(KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback(KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_settheme_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback(KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback(KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_applyformat_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback(KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Event_Callback(KSyntaxHighlighting__SyntaxHighlighter_Event_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_event_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback(KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback(KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_timerevent_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback(KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_childevent_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback(KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_customevent_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback(KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback(KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback(KSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_setformat_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Format_Callback(KSyntaxHighlighting__SyntaxHighlighter_Format_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_format_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback(KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_previousblockstate_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback(KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_currentblockstate_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback(KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback(KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback(KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback(KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_currentblock_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Sender_Callback(KSyntaxHighlighting__SyntaxHighlighter_Sender_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_sender_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback(KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback(KSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_receivers_callback = cb; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback(KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback cb) { ksyntaxhighlighting__syntaxhighlighter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKSyntaxHighlighting__SyntaxHighlighter_MetaObject_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_metaobject_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Metacast_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_metacast_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Metacall_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_metacall_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetDefinition_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_setdefinition_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetTheme_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_settheme_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_highlightblock_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_applyformat_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_applyfolding_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Event_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_event_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_EventFilter_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_eventfilter_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_TimerEvent_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_timerevent_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ChildEvent_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_childevent_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CustomEvent_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_customevent_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_connectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetFormat_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_setformat_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Format_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_format_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_previousblockstate_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_currentblockstate_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_currentblock_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Sender_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_sender_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_Receivers_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_receivers_isbase = value; }
    inline void setKSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_IsBase(bool value) const { ksyntaxhighlighting__syntaxhighlighter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksyntaxhighlighting__syntaxhighlighter_metaobject_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_metaobject_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::metaObject();
        }
        auto metaobject_cb = ksyntaxhighlighting__syntaxhighlighter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksyntaxhighlighting__syntaxhighlighter_metacast_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_metacast_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::qt_metacast(param1);
        }
        auto metacast_cb = ksyntaxhighlighting__syntaxhighlighter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksyntaxhighlighting__syntaxhighlighter_metacall_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_metacall_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = ksyntaxhighlighting__syntaxhighlighter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefinition(const KSyntaxHighlighting::Definition& def) override {
        if (ksyntaxhighlighting__syntaxhighlighter_setdefinition_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_setdefinition_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::setDefinition(def);
            return;
        }
        auto setdefinition_cb = ksyntaxhighlighting__syntaxhighlighter_setdefinition_callback;
        if (setdefinition_cb) {
            const KSyntaxHighlighting::Definition& def_ret = def;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Definition* cbval1 = const_cast<KSyntaxHighlighting::Definition*>(&def_ret);

            setdefinition_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setDefinition(def);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTheme(const KSyntaxHighlighting::Theme& theme) override {
        if (ksyntaxhighlighting__syntaxhighlighter_settheme_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_settheme_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::setTheme(theme);
            return;
        }
        auto settheme_cb = ksyntaxhighlighting__syntaxhighlighter_settheme_callback;
        if (settheme_cb) {
            const KSyntaxHighlighting::Theme& theme_ret = theme;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Theme* cbval1 = const_cast<KSyntaxHighlighting::Theme*>(&theme_ret);

            settheme_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setTheme(theme);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (ksyntaxhighlighting__syntaxhighlighter_highlightblock_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_highlightblock_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::highlightBlock(text);
            return;
        }
        auto highlightblock_cb = ksyntaxhighlighting__syntaxhighlighter_highlightblock_callback;
        if (highlightblock_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            highlightblock_cb(this, cbval1);
            libqt_free(text_str);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::highlightBlock(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFormat(int offset, int length, const KSyntaxHighlighting::Format& format) override {
        if (ksyntaxhighlighting__syntaxhighlighter_applyformat_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_applyformat_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::applyFormat(offset, length, format);
            return;
        }
        auto applyformat_cb = ksyntaxhighlighting__syntaxhighlighter_applyformat_callback;
        if (applyformat_cb) {
            int cbval1 = offset;
            int cbval2 = length;
            const KSyntaxHighlighting::Format& format_ret = format;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Format* cbval3 = const_cast<KSyntaxHighlighting::Format*>(&format_ret);

            applyformat_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::applyFormat(offset, length, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFolding(int offset, int length, KSyntaxHighlighting::FoldingRegion region) override {
        if (ksyntaxhighlighting__syntaxhighlighter_applyfolding_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_applyfolding_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::applyFolding(offset, length, region);
            return;
        }
        auto applyfolding_cb = ksyntaxhighlighting__syntaxhighlighter_applyfolding_callback;
        if (applyfolding_cb) {
            int cbval1 = offset;
            int cbval2 = length;
            KSyntaxHighlighting__FoldingRegion* cbval3 = new KSyntaxHighlighting::FoldingRegion(region);

            applyfolding_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::applyFolding(offset, length, region);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_event_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_event_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::event(event);
        }
        auto event_cb = ksyntaxhighlighting__syntaxhighlighter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_eventfilter_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_eventfilter_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::eventFilter(watched, event);
        }
        auto eventfilter_cb = ksyntaxhighlighting__syntaxhighlighter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_timerevent_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_timerevent_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::timerEvent(event);
            return;
        }
        auto timerevent_cb = ksyntaxhighlighting__syntaxhighlighter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_childevent_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_childevent_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::childEvent(event);
            return;
        }
        auto childevent_cb = ksyntaxhighlighting__syntaxhighlighter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksyntaxhighlighting__syntaxhighlighter_customevent_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_customevent_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::customEvent(event);
            return;
        }
        auto customevent_cb = ksyntaxhighlighting__syntaxhighlighter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__syntaxhighlighter_connectnotify_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_connectnotify_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = ksyntaxhighlighting__syntaxhighlighter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = ksyntaxhighlighting__syntaxhighlighter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QTextCharFormat& format) {
        if (ksyntaxhighlighting__syntaxhighlighter_setformat_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_setformat_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::setFormat(start, count, format);
            return;
        }
        auto setformat_cb = ksyntaxhighlighting__syntaxhighlighter_setformat_callback;
        if (setformat_cb) {
            int cbval1 = start;
            int cbval2 = count;
            const QTextCharFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextCharFormat* cbval3 = const_cast<QTextCharFormat*>(&format_ret);

            setformat_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setFormat(start, count, format);
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) const {
        if (ksyntaxhighlighting__syntaxhighlighter_format_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_format_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::format(pos);
        }
        auto format_cb = ksyntaxhighlighting__syntaxhighlighter_format_callback;
        if (format_cb) {
            int cbval1 = pos;

            QTextCharFormat* callback_ret = format_cb(this, cbval1);
            return *callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::format(pos);
    }

    // Virtual method for C ABI access and custom callback
    int previousBlockState() const {
        if (ksyntaxhighlighting__syntaxhighlighter_previousblockstate_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_previousblockstate_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::previousBlockState();
        }
        auto previousblockstate_cb = ksyntaxhighlighting__syntaxhighlighter_previousblockstate_callback;
        if (previousblockstate_cb) {
            int callback_ret = previousblockstate_cb();
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::previousBlockState();
    }

    // Virtual method for C ABI access and custom callback
    int currentBlockState() const {
        if (ksyntaxhighlighting__syntaxhighlighter_currentblockstate_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_currentblockstate_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::currentBlockState();
        }
        auto currentblockstate_cb = ksyntaxhighlighting__syntaxhighlighter_currentblockstate_callback;
        if (currentblockstate_cb) {
            int callback_ret = currentblockstate_cb();
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::currentBlockState();
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockState(int newState) {
        if (ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::setCurrentBlockState(newState);
            return;
        }
        auto setcurrentblockstate_cb = ksyntaxhighlighting__syntaxhighlighter_setcurrentblockstate_callback;
        if (setcurrentblockstate_cb) {
            int cbval1 = newState;

            setcurrentblockstate_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setCurrentBlockState(newState);
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockUserData(QTextBlockUserData* data) {
        if (ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_isbase = false;
            KSyntaxHighlighting__SyntaxHighlighter::setCurrentBlockUserData(data);
            return;
        }
        auto setcurrentblockuserdata_cb = ksyntaxhighlighting__syntaxhighlighter_setcurrentblockuserdata_callback;
        if (setcurrentblockuserdata_cb) {
            QTextBlockUserData* cbval1 = data;

            setcurrentblockuserdata_cb(this, cbval1);
            return;
        }
        KSyntaxHighlighting__SyntaxHighlighter::setCurrentBlockUserData(data);
    }

    // Virtual method for C ABI access and custom callback
    QTextBlockUserData* currentBlockUserData() const {
        if (ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::currentBlockUserData();
        }
        auto currentblockuserdata_cb = ksyntaxhighlighting__syntaxhighlighter_currentblockuserdata_callback;
        if (currentblockuserdata_cb) {
            QTextBlockUserData* callback_ret = currentblockuserdata_cb();
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::currentBlockUserData();
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock currentBlock() const {
        if (ksyntaxhighlighting__syntaxhighlighter_currentblock_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_currentblock_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::currentBlock();
        }
        auto currentblock_cb = ksyntaxhighlighting__syntaxhighlighter_currentblock_callback;
        if (currentblock_cb) {
            QTextBlock* callback_ret = currentblock_cb();
            return *callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::currentBlock();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (ksyntaxhighlighting__syntaxhighlighter_sender_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_sender_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::sender();
        }
        auto sender_cb = ksyntaxhighlighting__syntaxhighlighter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::senderSignalIndex();
        }
        auto sendersignalindex_cb = ksyntaxhighlighting__syntaxhighlighter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (ksyntaxhighlighting__syntaxhighlighter_receivers_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_receivers_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::receivers(signal);
        }
        auto receivers_cb = ksyntaxhighlighting__syntaxhighlighter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSyntaxHighlighting__SyntaxHighlighter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (ksyntaxhighlighting__syntaxhighlighter_issignalconnected_isbase) {
            ksyntaxhighlighting__syntaxhighlighter_issignalconnected_isbase = false;
            return KSyntaxHighlighting__SyntaxHighlighter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = ksyntaxhighlighting__syntaxhighlighter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return KSyntaxHighlighting__SyntaxHighlighter::isSignalConnected(signal);
    }

    // Friend functions
    friend void KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(KSyntaxHighlighting::SyntaxHighlighter* self, const libqt_string text);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperHighlightBlock(KSyntaxHighlighting::SyntaxHighlighter* self, const libqt_string text);
    friend void KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFormat(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend void KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperApplyFolding(KSyntaxHighlighting::SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
    friend void KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperTimerEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QTimerEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QChildEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperChildEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QChildEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperCustomEvent(KSyntaxHighlighting::SyntaxHighlighter* self, QEvent* event);
    friend void KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperConnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperDisconnectNotify(KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SetFormat(KSyntaxHighlighting::SyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperSetFormat(KSyntaxHighlighting::SyntaxHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_Format(const KSyntaxHighlighting::SyntaxHighlighter* self, int pos);
    friend QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_SuperFormat(const KSyntaxHighlighting::SyntaxHighlighter* self, int pos);
    friend int KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_SuperPreviousBlockState(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockState(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(KSyntaxHighlighting::SyntaxHighlighter* self, int newState);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockState(KSyntaxHighlighting::SyntaxHighlighter* self, int newState);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(KSyntaxHighlighting::SyntaxHighlighter* self, QTextBlockUserData* data);
    friend void KSyntaxHighlighting__SyntaxHighlighter_SuperSetCurrentBlockUserData(KSyntaxHighlighting::SyntaxHighlighter* self, QTextBlockUserData* data);
    friend QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlockUserData(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_SuperCurrentBlock(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend QObject* KSyntaxHighlighting__SyntaxHighlighter_Sender(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend QObject* KSyntaxHighlighting__SyntaxHighlighter_SuperSender(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_SuperSenderSignalIndex(const KSyntaxHighlighting::SyntaxHighlighter* self);
    friend int KSyntaxHighlighting__SyntaxHighlighter_Receivers(const KSyntaxHighlighting::SyntaxHighlighter* self, const char* signal);
    friend int KSyntaxHighlighting__SyntaxHighlighter_SuperReceivers(const KSyntaxHighlighting::SyntaxHighlighter* self, const char* signal);
    friend bool KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(const KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
    friend bool KSyntaxHighlighting__SyntaxHighlighter_SuperIsSignalConnected(const KSyntaxHighlighting::SyntaxHighlighter* self, const QMetaMethod* signal);
};

#endif
