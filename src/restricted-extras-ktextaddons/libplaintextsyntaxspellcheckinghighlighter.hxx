#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONSC_LIBVIRTUALPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter so that we can call protected methods
class VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter final : public TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter {

  public:
    // Virtual class boolean flag
    bool isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter = true;

    // Virtual class public types (including callbacks)
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, KSyntaxHighlighting__Definition*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, const char*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, KSyntaxHighlighting__Format*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback = QMetaObject* (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, const char*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback = int (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, void**);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback = bool (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QTimerEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QChildEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QEvent*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QMetaMethod*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QMetaMethod*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, KSyntaxHighlighting__Theme*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, KSyntaxHighlighting__FoldingRegion*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback = bool (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, bool);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int, int, QTextCharFormat*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback = QTextCharFormat* (*)(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback = int (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback = int (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, int);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback = void (*)(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QTextBlockUserData*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback = QTextBlockUserData* (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback = QTextBlock* (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback = QObject* (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback = int (*)();
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback = int (*)(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, const char*);
    using TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback = bool (*)(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*, QMetaMethod*);

  protected:
    // Instance callback storage
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_callback = nullptr;
    TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_isbase = false;
    mutable bool textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_isbase = false;

  public:
    VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(TextCustomEditor::PlainTextEditor* plainText) : TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter(plainText) {};
    VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(TextCustomEditor::PlainTextEditor* plainText, const QColor& misspelledColor) : TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter(plainText, misspelledColor) {};

    // Callback setters
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_callback = cb; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback cb) { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_isbase = value; }
    inline void setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_IsBase(bool value) const { textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void setDefinition(const KSyntaxHighlighting::Definition& def) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setDefinition(def);
            return;
        }
        auto setdefinition_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback;
        if (setdefinition_cb) {
            const KSyntaxHighlighting::Definition& def_ret = def;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Definition* cbval1 = const_cast<KSyntaxHighlighting::Definition*>(&def_ret);
            setdefinition_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setDefinition(def);
    }

    // Virtual method for C ABI access and custom callback
    virtual void highlightBlock(const QString& text) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::highlightBlock(text);
            return;
        }
        auto highlightblock_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback;
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
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::highlightBlock(text);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unsetMisspelled(int start, int count) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled(start, count);
            return;
        }
        auto unsetmisspelled_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback;
        if (unsetmisspelled_cb) {
            int cbval1 = start;
            int cbval2 = count;
            unsetmisspelled_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMisspelled(int start, int count) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setMisspelled(start, count);
            return;
        }
        auto setmisspelled_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback;
        if (setmisspelled_cb) {
            int cbval1 = start;
            int cbval2 = count;
            setmisspelled_cb(this, cbval1, cbval2);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setMisspelled(start, count);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFormat(int offset, int length, const KSyntaxHighlighting::Format& format) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFormat(offset, length, format);
            return;
        }
        auto applyformat_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback;
        if (applyformat_cb) {
            int cbval1 = offset;
            int cbval2 = length;
            const KSyntaxHighlighting::Format& format_ret = format;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Format* cbval3 = const_cast<KSyntaxHighlighting::Format*>(&format_ret);
            applyformat_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFormat(offset, length, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::metaObject();
        }
        auto metaobject_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
        }
        auto metacast_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* o, QEvent* e) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::eventFilter(o, e);
        }
        auto eventfilter_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = o;
            QEvent* cbval2 = e;
            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::eventFilter(o, e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::event(event);
        }
        auto event_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;
            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::timerEvent(event);
            return;
        }
        auto timerevent_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;
            timerevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::childEvent(event);
            return;
        }
        auto childevent_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;
            childevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::customEvent(event);
            return;
        }
        auto customevent_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;
            customevent_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            connectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            disconnectnotify_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTheme(const KSyntaxHighlighting::Theme& theme) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setTheme(theme);
            return;
        }
        auto settheme_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback;
        if (settheme_cb) {
            const KSyntaxHighlighting::Theme& theme_ret = theme;
            // Cast returned reference into pointer
            KSyntaxHighlighting__Theme* cbval1 = const_cast<KSyntaxHighlighting::Theme*>(&theme_ret);
            settheme_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setTheme(theme);
    }

    // Virtual method for C ABI access and custom callback
    virtual void applyFolding(int offset, int length, KSyntaxHighlighting::FoldingRegion region) override {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFolding(offset, length, region);
            return;
        }
        auto applyfolding_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback;
        if (applyfolding_cb) {
            int cbval1 = offset;
            int cbval2 = length;
            KSyntaxHighlighting__FoldingRegion* cbval3 = new KSyntaxHighlighting::FoldingRegion(region);
            applyfolding_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::applyFolding(offset, length, region);
    }

    // Virtual method for C ABI access and custom callback
    bool intraWordEditing() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::intraWordEditing();
        }
        auto intrawordediting_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intrawordediting_callback;
        if (intrawordediting_cb) {
            bool callback_ret = intrawordediting_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::intraWordEditing();
    }

    // Virtual method for C ABI access and custom callback
    void setIntraWordEditing(bool editing) {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setIntraWordEditing(editing);
            return;
        }
        auto setintrawordediting_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setintrawordediting_callback;
        if (setintrawordediting_cb) {
            bool cbval1 = editing;
            setintrawordediting_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setIntraWordEditing(editing);
    }

    // Virtual method for C ABI access and custom callback
    void setFormat(int start, int count, const QTextCharFormat& format) {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setFormat(start, count, format);
            return;
        }
        auto setformat_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setformat_callback;
        if (setformat_cb) {
            int cbval1 = start;
            int cbval2 = count;
            const QTextCharFormat& format_ret = format;
            // Cast returned reference into pointer
            QTextCharFormat* cbval3 = const_cast<QTextCharFormat*>(&format_ret);
            setformat_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setFormat(start, count, format);
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::format(pos);
        }
        auto format_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format_callback;
        if (format_cb) {
            int cbval1 = pos;
            QTextCharFormat* callback_ret = format_cb(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::format(pos);
    }

    // Virtual method for C ABI access and custom callback
    int previousBlockState() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::previousBlockState();
        }
        auto previousblockstate_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previousblockstate_callback;
        if (previousblockstate_cb) {
            int callback_ret = previousblockstate_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::previousBlockState();
    }

    // Virtual method for C ABI access and custom callback
    int currentBlockState() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlockState();
        }
        auto currentblockstate_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockstate_callback;
        if (currentblockstate_cb) {
            int callback_ret = currentblockstate_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlockState();
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockState(int newState) {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockState(newState);
            return;
        }
        auto setcurrentblockstate_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockstate_callback;
        if (setcurrentblockstate_cb) {
            int cbval1 = newState;
            setcurrentblockstate_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockState(newState);
    }

    // Virtual method for C ABI access and custom callback
    void setCurrentBlockUserData(QTextBlockUserData* data) {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_isbase = false;
            TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockUserData(data);
            return;
        }
        auto setcurrentblockuserdata_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setcurrentblockuserdata_callback;
        if (setcurrentblockuserdata_cb) {
            QTextBlockUserData* cbval1 = data;
            setcurrentblockuserdata_cb(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockUserData(data);
    }

    // Virtual method for C ABI access and custom callback
    QTextBlockUserData* currentBlockUserData() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlockUserData();
        }
        auto currentblockuserdata_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblockuserdata_callback;
        if (currentblockuserdata_cb) {
            QTextBlockUserData* callback_ret = currentblockuserdata_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlockUserData();
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock currentBlock() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlock();
        }
        auto currentblock_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_currentblock_callback;
        if (currentblock_cb) {
            QTextBlock* callback_ret = currentblock_cb();
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::currentBlock();
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::sender();
        }
        auto sender_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::senderSignalIndex();
        }
        auto sendersignalindex_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::receivers(signal);
        }
        auto receivers_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;
            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_isbase) {
            textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_isbase = false;
            return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::isSignalConnected(signal);
        }
        auto issignalconnected_cb = textcustomeditor__plaintextsyntaxspellcheckinghighlighter_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter::isSignalConnected(signal);
    }

    // Friend functions
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIntraWordEditing(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, bool editing);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetIntraWordEditing(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, bool editing);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetFormat(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, const QTextCharFormat* format);
    friend QTextCharFormat* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int pos);
    friend QTextCharFormat* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperFormat(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int pos);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperPreviousBlockState(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockState(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int newState);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockState(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, int newState);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data);
    friend void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockUserData(TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data);
    friend QTextBlockUserData* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend QTextBlockUserData* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockUserData(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend QTextBlock* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend QTextBlock* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlock(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend QObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend QObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSender(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSenderSignalIndex(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal);
    friend int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperReceivers(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
    friend bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIsSignalConnected(const TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal);
};

#endif
