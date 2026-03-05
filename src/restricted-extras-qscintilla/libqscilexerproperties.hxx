#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPROPERTIES_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerProperties so that we can call protected methods
class VirtualQsciLexerProperties final : public QsciLexerProperties {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerProperties = true;

    // Virtual class public types (including callbacks)
    using QsciLexerProperties_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerProperties_Metacast_Callback = void* (*)(QsciLexerProperties*, const char*);
    using QsciLexerProperties_Metacall_Callback = int (*)(QsciLexerProperties*, int, int, void**);
    using QsciLexerProperties_SetFoldCompact_Callback = void (*)(QsciLexerProperties*, bool);
    using QsciLexerProperties_Language_Callback = const char* (*)();
    using QsciLexerProperties_Lexer_Callback = const char* (*)();
    using QsciLexerProperties_LexerId_Callback = int (*)();
    using QsciLexerProperties_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerProperties_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerProperties_BlockEnd_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockLookback_Callback = int (*)();
    using QsciLexerProperties_BlockStart_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockStartKeyword_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BraceStyle_Callback = int (*)();
    using QsciLexerProperties_CaseSensitive_Callback = bool (*)();
    using QsciLexerProperties_Color_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_EolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Font_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_IndentationGuideView_Callback = int (*)();
    using QsciLexerProperties_Keywords_Callback = const char* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultStyle_Callback = int (*)();
    using QsciLexerProperties_Description_Callback = const char* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Paper_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultColor2_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultEolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultFont2_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultPaper2_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_SetEditor_Callback = void (*)(QsciLexerProperties*, QsciScintilla*);
    using QsciLexerProperties_RefreshProperties_Callback = void (*)();
    using QsciLexerProperties_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerProperties_WordCharacters_Callback = const char* (*)();
    using QsciLexerProperties_SetAutoIndentStyle_Callback = void (*)(QsciLexerProperties*, int);
    using QsciLexerProperties_SetColor_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_SetEolFill_Callback = void (*)(QsciLexerProperties*, bool, int);
    using QsciLexerProperties_SetFont_Callback = void (*)(QsciLexerProperties*, QFont*, int);
    using QsciLexerProperties_SetPaper_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_ReadProperties_Callback = bool (*)(QsciLexerProperties*, QSettings*, const char*);
    using QsciLexerProperties_WriteProperties_Callback = bool (*)(const QsciLexerProperties*, QSettings*, const char*);
    using QsciLexerProperties_Event_Callback = bool (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_EventFilter_Callback = bool (*)(QsciLexerProperties*, QObject*, QEvent*);
    using QsciLexerProperties_TimerEvent_Callback = void (*)(QsciLexerProperties*, QTimerEvent*);
    using QsciLexerProperties_ChildEvent_Callback = void (*)(QsciLexerProperties*, QChildEvent*);
    using QsciLexerProperties_CustomEvent_Callback = void (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_ConnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties_DisconnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties_TextAsBytes_Callback = libqt_string (*)(const QsciLexerProperties*, const char*);
    using QsciLexerProperties_BytesAsText_Callback = const char* (*)(const QsciLexerProperties*, const char*, int);
    using QsciLexerProperties_Sender_Callback = QObject* (*)();
    using QsciLexerProperties_SenderSignalIndex_Callback = int (*)();
    using QsciLexerProperties_Receivers_Callback = int (*)(const QsciLexerProperties*, const char*);
    using QsciLexerProperties_IsSignalConnected_Callback = bool (*)(const QsciLexerProperties*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerProperties_MetaObject_Callback qscilexerproperties_metaobject_callback = nullptr;
    QsciLexerProperties_Metacast_Callback qscilexerproperties_metacast_callback = nullptr;
    QsciLexerProperties_Metacall_Callback qscilexerproperties_metacall_callback = nullptr;
    QsciLexerProperties_SetFoldCompact_Callback qscilexerproperties_setfoldcompact_callback = nullptr;
    QsciLexerProperties_Language_Callback qscilexerproperties_language_callback = nullptr;
    QsciLexerProperties_Lexer_Callback qscilexerproperties_lexer_callback = nullptr;
    QsciLexerProperties_LexerId_Callback qscilexerproperties_lexerid_callback = nullptr;
    QsciLexerProperties_AutoCompletionFillups_Callback qscilexerproperties_autocompletionfillups_callback = nullptr;
    QsciLexerProperties_AutoCompletionWordSeparators_Callback qscilexerproperties_autocompletionwordseparators_callback = nullptr;
    QsciLexerProperties_BlockEnd_Callback qscilexerproperties_blockend_callback = nullptr;
    QsciLexerProperties_BlockLookback_Callback qscilexerproperties_blocklookback_callback = nullptr;
    QsciLexerProperties_BlockStart_Callback qscilexerproperties_blockstart_callback = nullptr;
    QsciLexerProperties_BlockStartKeyword_Callback qscilexerproperties_blockstartkeyword_callback = nullptr;
    QsciLexerProperties_BraceStyle_Callback qscilexerproperties_bracestyle_callback = nullptr;
    QsciLexerProperties_CaseSensitive_Callback qscilexerproperties_casesensitive_callback = nullptr;
    QsciLexerProperties_Color_Callback qscilexerproperties_color_callback = nullptr;
    QsciLexerProperties_EolFill_Callback qscilexerproperties_eolfill_callback = nullptr;
    QsciLexerProperties_Font_Callback qscilexerproperties_font_callback = nullptr;
    QsciLexerProperties_IndentationGuideView_Callback qscilexerproperties_indentationguideview_callback = nullptr;
    QsciLexerProperties_Keywords_Callback qscilexerproperties_keywords_callback = nullptr;
    QsciLexerProperties_DefaultStyle_Callback qscilexerproperties_defaultstyle_callback = nullptr;
    QsciLexerProperties_Description_Callback qscilexerproperties_description_callback = nullptr;
    QsciLexerProperties_Paper_Callback qscilexerproperties_paper_callback = nullptr;
    QsciLexerProperties_DefaultColor2_Callback qscilexerproperties_defaultcolor2_callback = nullptr;
    QsciLexerProperties_DefaultEolFill_Callback qscilexerproperties_defaulteolfill_callback = nullptr;
    QsciLexerProperties_DefaultFont2_Callback qscilexerproperties_defaultfont2_callback = nullptr;
    QsciLexerProperties_DefaultPaper2_Callback qscilexerproperties_defaultpaper2_callback = nullptr;
    QsciLexerProperties_SetEditor_Callback qscilexerproperties_seteditor_callback = nullptr;
    QsciLexerProperties_RefreshProperties_Callback qscilexerproperties_refreshproperties_callback = nullptr;
    QsciLexerProperties_StyleBitsNeeded_Callback qscilexerproperties_stylebitsneeded_callback = nullptr;
    QsciLexerProperties_WordCharacters_Callback qscilexerproperties_wordcharacters_callback = nullptr;
    QsciLexerProperties_SetAutoIndentStyle_Callback qscilexerproperties_setautoindentstyle_callback = nullptr;
    QsciLexerProperties_SetColor_Callback qscilexerproperties_setcolor_callback = nullptr;
    QsciLexerProperties_SetEolFill_Callback qscilexerproperties_seteolfill_callback = nullptr;
    QsciLexerProperties_SetFont_Callback qscilexerproperties_setfont_callback = nullptr;
    QsciLexerProperties_SetPaper_Callback qscilexerproperties_setpaper_callback = nullptr;
    QsciLexerProperties_ReadProperties_Callback qscilexerproperties_readproperties_callback = nullptr;
    QsciLexerProperties_WriteProperties_Callback qscilexerproperties_writeproperties_callback = nullptr;
    QsciLexerProperties_Event_Callback qscilexerproperties_event_callback = nullptr;
    QsciLexerProperties_EventFilter_Callback qscilexerproperties_eventfilter_callback = nullptr;
    QsciLexerProperties_TimerEvent_Callback qscilexerproperties_timerevent_callback = nullptr;
    QsciLexerProperties_ChildEvent_Callback qscilexerproperties_childevent_callback = nullptr;
    QsciLexerProperties_CustomEvent_Callback qscilexerproperties_customevent_callback = nullptr;
    QsciLexerProperties_ConnectNotify_Callback qscilexerproperties_connectnotify_callback = nullptr;
    QsciLexerProperties_DisconnectNotify_Callback qscilexerproperties_disconnectnotify_callback = nullptr;
    QsciLexerProperties_TextAsBytes_Callback qscilexerproperties_textasbytes_callback = nullptr;
    QsciLexerProperties_BytesAsText_Callback qscilexerproperties_bytesastext_callback = nullptr;
    QsciLexerProperties_Sender_Callback qscilexerproperties_sender_callback = nullptr;
    QsciLexerProperties_SenderSignalIndex_Callback qscilexerproperties_sendersignalindex_callback = nullptr;
    QsciLexerProperties_Receivers_Callback qscilexerproperties_receivers_callback = nullptr;
    QsciLexerProperties_IsSignalConnected_Callback qscilexerproperties_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerproperties_metaobject_isbase = false;
    mutable bool qscilexerproperties_metacast_isbase = false;
    mutable bool qscilexerproperties_metacall_isbase = false;
    mutable bool qscilexerproperties_setfoldcompact_isbase = false;
    mutable bool qscilexerproperties_language_isbase = false;
    mutable bool qscilexerproperties_lexer_isbase = false;
    mutable bool qscilexerproperties_lexerid_isbase = false;
    mutable bool qscilexerproperties_autocompletionfillups_isbase = false;
    mutable bool qscilexerproperties_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerproperties_blockend_isbase = false;
    mutable bool qscilexerproperties_blocklookback_isbase = false;
    mutable bool qscilexerproperties_blockstart_isbase = false;
    mutable bool qscilexerproperties_blockstartkeyword_isbase = false;
    mutable bool qscilexerproperties_bracestyle_isbase = false;
    mutable bool qscilexerproperties_casesensitive_isbase = false;
    mutable bool qscilexerproperties_color_isbase = false;
    mutable bool qscilexerproperties_eolfill_isbase = false;
    mutable bool qscilexerproperties_font_isbase = false;
    mutable bool qscilexerproperties_indentationguideview_isbase = false;
    mutable bool qscilexerproperties_keywords_isbase = false;
    mutable bool qscilexerproperties_defaultstyle_isbase = false;
    mutable bool qscilexerproperties_description_isbase = false;
    mutable bool qscilexerproperties_paper_isbase = false;
    mutable bool qscilexerproperties_defaultcolor2_isbase = false;
    mutable bool qscilexerproperties_defaulteolfill_isbase = false;
    mutable bool qscilexerproperties_defaultfont2_isbase = false;
    mutable bool qscilexerproperties_defaultpaper2_isbase = false;
    mutable bool qscilexerproperties_seteditor_isbase = false;
    mutable bool qscilexerproperties_refreshproperties_isbase = false;
    mutable bool qscilexerproperties_stylebitsneeded_isbase = false;
    mutable bool qscilexerproperties_wordcharacters_isbase = false;
    mutable bool qscilexerproperties_setautoindentstyle_isbase = false;
    mutable bool qscilexerproperties_setcolor_isbase = false;
    mutable bool qscilexerproperties_seteolfill_isbase = false;
    mutable bool qscilexerproperties_setfont_isbase = false;
    mutable bool qscilexerproperties_setpaper_isbase = false;
    mutable bool qscilexerproperties_readproperties_isbase = false;
    mutable bool qscilexerproperties_writeproperties_isbase = false;
    mutable bool qscilexerproperties_event_isbase = false;
    mutable bool qscilexerproperties_eventfilter_isbase = false;
    mutable bool qscilexerproperties_timerevent_isbase = false;
    mutable bool qscilexerproperties_childevent_isbase = false;
    mutable bool qscilexerproperties_customevent_isbase = false;
    mutable bool qscilexerproperties_connectnotify_isbase = false;
    mutable bool qscilexerproperties_disconnectnotify_isbase = false;
    mutable bool qscilexerproperties_textasbytes_isbase = false;
    mutable bool qscilexerproperties_bytesastext_isbase = false;
    mutable bool qscilexerproperties_sender_isbase = false;
    mutable bool qscilexerproperties_sendersignalindex_isbase = false;
    mutable bool qscilexerproperties_receivers_isbase = false;
    mutable bool qscilexerproperties_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerProperties() : QsciLexerProperties() {};
    VirtualQsciLexerProperties(QObject* parent) : QsciLexerProperties(parent) {};

    // Callback setters
    inline void setQsciLexerProperties_MetaObject_Callback(QsciLexerProperties_MetaObject_Callback cb) { qscilexerproperties_metaobject_callback = cb; }
    inline void setQsciLexerProperties_Metacast_Callback(QsciLexerProperties_Metacast_Callback cb) { qscilexerproperties_metacast_callback = cb; }
    inline void setQsciLexerProperties_Metacall_Callback(QsciLexerProperties_Metacall_Callback cb) { qscilexerproperties_metacall_callback = cb; }
    inline void setQsciLexerProperties_SetFoldCompact_Callback(QsciLexerProperties_SetFoldCompact_Callback cb) { qscilexerproperties_setfoldcompact_callback = cb; }
    inline void setQsciLexerProperties_Language_Callback(QsciLexerProperties_Language_Callback cb) { qscilexerproperties_language_callback = cb; }
    inline void setQsciLexerProperties_Lexer_Callback(QsciLexerProperties_Lexer_Callback cb) { qscilexerproperties_lexer_callback = cb; }
    inline void setQsciLexerProperties_LexerId_Callback(QsciLexerProperties_LexerId_Callback cb) { qscilexerproperties_lexerid_callback = cb; }
    inline void setQsciLexerProperties_AutoCompletionFillups_Callback(QsciLexerProperties_AutoCompletionFillups_Callback cb) { qscilexerproperties_autocompletionfillups_callback = cb; }
    inline void setQsciLexerProperties_AutoCompletionWordSeparators_Callback(QsciLexerProperties_AutoCompletionWordSeparators_Callback cb) { qscilexerproperties_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerProperties_BlockEnd_Callback(QsciLexerProperties_BlockEnd_Callback cb) { qscilexerproperties_blockend_callback = cb; }
    inline void setQsciLexerProperties_BlockLookback_Callback(QsciLexerProperties_BlockLookback_Callback cb) { qscilexerproperties_blocklookback_callback = cb; }
    inline void setQsciLexerProperties_BlockStart_Callback(QsciLexerProperties_BlockStart_Callback cb) { qscilexerproperties_blockstart_callback = cb; }
    inline void setQsciLexerProperties_BlockStartKeyword_Callback(QsciLexerProperties_BlockStartKeyword_Callback cb) { qscilexerproperties_blockstartkeyword_callback = cb; }
    inline void setQsciLexerProperties_BraceStyle_Callback(QsciLexerProperties_BraceStyle_Callback cb) { qscilexerproperties_bracestyle_callback = cb; }
    inline void setQsciLexerProperties_CaseSensitive_Callback(QsciLexerProperties_CaseSensitive_Callback cb) { qscilexerproperties_casesensitive_callback = cb; }
    inline void setQsciLexerProperties_Color_Callback(QsciLexerProperties_Color_Callback cb) { qscilexerproperties_color_callback = cb; }
    inline void setQsciLexerProperties_EolFill_Callback(QsciLexerProperties_EolFill_Callback cb) { qscilexerproperties_eolfill_callback = cb; }
    inline void setQsciLexerProperties_Font_Callback(QsciLexerProperties_Font_Callback cb) { qscilexerproperties_font_callback = cb; }
    inline void setQsciLexerProperties_IndentationGuideView_Callback(QsciLexerProperties_IndentationGuideView_Callback cb) { qscilexerproperties_indentationguideview_callback = cb; }
    inline void setQsciLexerProperties_Keywords_Callback(QsciLexerProperties_Keywords_Callback cb) { qscilexerproperties_keywords_callback = cb; }
    inline void setQsciLexerProperties_DefaultStyle_Callback(QsciLexerProperties_DefaultStyle_Callback cb) { qscilexerproperties_defaultstyle_callback = cb; }
    inline void setQsciLexerProperties_Description_Callback(QsciLexerProperties_Description_Callback cb) { qscilexerproperties_description_callback = cb; }
    inline void setQsciLexerProperties_Paper_Callback(QsciLexerProperties_Paper_Callback cb) { qscilexerproperties_paper_callback = cb; }
    inline void setQsciLexerProperties_DefaultColor2_Callback(QsciLexerProperties_DefaultColor2_Callback cb) { qscilexerproperties_defaultcolor2_callback = cb; }
    inline void setQsciLexerProperties_DefaultEolFill_Callback(QsciLexerProperties_DefaultEolFill_Callback cb) { qscilexerproperties_defaulteolfill_callback = cb; }
    inline void setQsciLexerProperties_DefaultFont2_Callback(QsciLexerProperties_DefaultFont2_Callback cb) { qscilexerproperties_defaultfont2_callback = cb; }
    inline void setQsciLexerProperties_DefaultPaper2_Callback(QsciLexerProperties_DefaultPaper2_Callback cb) { qscilexerproperties_defaultpaper2_callback = cb; }
    inline void setQsciLexerProperties_SetEditor_Callback(QsciLexerProperties_SetEditor_Callback cb) { qscilexerproperties_seteditor_callback = cb; }
    inline void setQsciLexerProperties_RefreshProperties_Callback(QsciLexerProperties_RefreshProperties_Callback cb) { qscilexerproperties_refreshproperties_callback = cb; }
    inline void setQsciLexerProperties_StyleBitsNeeded_Callback(QsciLexerProperties_StyleBitsNeeded_Callback cb) { qscilexerproperties_stylebitsneeded_callback = cb; }
    inline void setQsciLexerProperties_WordCharacters_Callback(QsciLexerProperties_WordCharacters_Callback cb) { qscilexerproperties_wordcharacters_callback = cb; }
    inline void setQsciLexerProperties_SetAutoIndentStyle_Callback(QsciLexerProperties_SetAutoIndentStyle_Callback cb) { qscilexerproperties_setautoindentstyle_callback = cb; }
    inline void setQsciLexerProperties_SetColor_Callback(QsciLexerProperties_SetColor_Callback cb) { qscilexerproperties_setcolor_callback = cb; }
    inline void setQsciLexerProperties_SetEolFill_Callback(QsciLexerProperties_SetEolFill_Callback cb) { qscilexerproperties_seteolfill_callback = cb; }
    inline void setQsciLexerProperties_SetFont_Callback(QsciLexerProperties_SetFont_Callback cb) { qscilexerproperties_setfont_callback = cb; }
    inline void setQsciLexerProperties_SetPaper_Callback(QsciLexerProperties_SetPaper_Callback cb) { qscilexerproperties_setpaper_callback = cb; }
    inline void setQsciLexerProperties_ReadProperties_Callback(QsciLexerProperties_ReadProperties_Callback cb) { qscilexerproperties_readproperties_callback = cb; }
    inline void setQsciLexerProperties_WriteProperties_Callback(QsciLexerProperties_WriteProperties_Callback cb) { qscilexerproperties_writeproperties_callback = cb; }
    inline void setQsciLexerProperties_Event_Callback(QsciLexerProperties_Event_Callback cb) { qscilexerproperties_event_callback = cb; }
    inline void setQsciLexerProperties_EventFilter_Callback(QsciLexerProperties_EventFilter_Callback cb) { qscilexerproperties_eventfilter_callback = cb; }
    inline void setQsciLexerProperties_TimerEvent_Callback(QsciLexerProperties_TimerEvent_Callback cb) { qscilexerproperties_timerevent_callback = cb; }
    inline void setQsciLexerProperties_ChildEvent_Callback(QsciLexerProperties_ChildEvent_Callback cb) { qscilexerproperties_childevent_callback = cb; }
    inline void setQsciLexerProperties_CustomEvent_Callback(QsciLexerProperties_CustomEvent_Callback cb) { qscilexerproperties_customevent_callback = cb; }
    inline void setQsciLexerProperties_ConnectNotify_Callback(QsciLexerProperties_ConnectNotify_Callback cb) { qscilexerproperties_connectnotify_callback = cb; }
    inline void setQsciLexerProperties_DisconnectNotify_Callback(QsciLexerProperties_DisconnectNotify_Callback cb) { qscilexerproperties_disconnectnotify_callback = cb; }
    inline void setQsciLexerProperties_TextAsBytes_Callback(QsciLexerProperties_TextAsBytes_Callback cb) { qscilexerproperties_textasbytes_callback = cb; }
    inline void setQsciLexerProperties_BytesAsText_Callback(QsciLexerProperties_BytesAsText_Callback cb) { qscilexerproperties_bytesastext_callback = cb; }
    inline void setQsciLexerProperties_Sender_Callback(QsciLexerProperties_Sender_Callback cb) { qscilexerproperties_sender_callback = cb; }
    inline void setQsciLexerProperties_SenderSignalIndex_Callback(QsciLexerProperties_SenderSignalIndex_Callback cb) { qscilexerproperties_sendersignalindex_callback = cb; }
    inline void setQsciLexerProperties_Receivers_Callback(QsciLexerProperties_Receivers_Callback cb) { qscilexerproperties_receivers_callback = cb; }
    inline void setQsciLexerProperties_IsSignalConnected_Callback(QsciLexerProperties_IsSignalConnected_Callback cb) { qscilexerproperties_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerProperties_MetaObject_IsBase(bool value) const { qscilexerproperties_metaobject_isbase = value; }
    inline void setQsciLexerProperties_Metacast_IsBase(bool value) const { qscilexerproperties_metacast_isbase = value; }
    inline void setQsciLexerProperties_Metacall_IsBase(bool value) const { qscilexerproperties_metacall_isbase = value; }
    inline void setQsciLexerProperties_SetFoldCompact_IsBase(bool value) const { qscilexerproperties_setfoldcompact_isbase = value; }
    inline void setQsciLexerProperties_Language_IsBase(bool value) const { qscilexerproperties_language_isbase = value; }
    inline void setQsciLexerProperties_Lexer_IsBase(bool value) const { qscilexerproperties_lexer_isbase = value; }
    inline void setQsciLexerProperties_LexerId_IsBase(bool value) const { qscilexerproperties_lexerid_isbase = value; }
    inline void setQsciLexerProperties_AutoCompletionFillups_IsBase(bool value) const { qscilexerproperties_autocompletionfillups_isbase = value; }
    inline void setQsciLexerProperties_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerproperties_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerProperties_BlockEnd_IsBase(bool value) const { qscilexerproperties_blockend_isbase = value; }
    inline void setQsciLexerProperties_BlockLookback_IsBase(bool value) const { qscilexerproperties_blocklookback_isbase = value; }
    inline void setQsciLexerProperties_BlockStart_IsBase(bool value) const { qscilexerproperties_blockstart_isbase = value; }
    inline void setQsciLexerProperties_BlockStartKeyword_IsBase(bool value) const { qscilexerproperties_blockstartkeyword_isbase = value; }
    inline void setQsciLexerProperties_BraceStyle_IsBase(bool value) const { qscilexerproperties_bracestyle_isbase = value; }
    inline void setQsciLexerProperties_CaseSensitive_IsBase(bool value) const { qscilexerproperties_casesensitive_isbase = value; }
    inline void setQsciLexerProperties_Color_IsBase(bool value) const { qscilexerproperties_color_isbase = value; }
    inline void setQsciLexerProperties_EolFill_IsBase(bool value) const { qscilexerproperties_eolfill_isbase = value; }
    inline void setQsciLexerProperties_Font_IsBase(bool value) const { qscilexerproperties_font_isbase = value; }
    inline void setQsciLexerProperties_IndentationGuideView_IsBase(bool value) const { qscilexerproperties_indentationguideview_isbase = value; }
    inline void setQsciLexerProperties_Keywords_IsBase(bool value) const { qscilexerproperties_keywords_isbase = value; }
    inline void setQsciLexerProperties_DefaultStyle_IsBase(bool value) const { qscilexerproperties_defaultstyle_isbase = value; }
    inline void setQsciLexerProperties_Description_IsBase(bool value) const { qscilexerproperties_description_isbase = value; }
    inline void setQsciLexerProperties_Paper_IsBase(bool value) const { qscilexerproperties_paper_isbase = value; }
    inline void setQsciLexerProperties_DefaultColor2_IsBase(bool value) const { qscilexerproperties_defaultcolor2_isbase = value; }
    inline void setQsciLexerProperties_DefaultEolFill_IsBase(bool value) const { qscilexerproperties_defaulteolfill_isbase = value; }
    inline void setQsciLexerProperties_DefaultFont2_IsBase(bool value) const { qscilexerproperties_defaultfont2_isbase = value; }
    inline void setQsciLexerProperties_DefaultPaper2_IsBase(bool value) const { qscilexerproperties_defaultpaper2_isbase = value; }
    inline void setQsciLexerProperties_SetEditor_IsBase(bool value) const { qscilexerproperties_seteditor_isbase = value; }
    inline void setQsciLexerProperties_RefreshProperties_IsBase(bool value) const { qscilexerproperties_refreshproperties_isbase = value; }
    inline void setQsciLexerProperties_StyleBitsNeeded_IsBase(bool value) const { qscilexerproperties_stylebitsneeded_isbase = value; }
    inline void setQsciLexerProperties_WordCharacters_IsBase(bool value) const { qscilexerproperties_wordcharacters_isbase = value; }
    inline void setQsciLexerProperties_SetAutoIndentStyle_IsBase(bool value) const { qscilexerproperties_setautoindentstyle_isbase = value; }
    inline void setQsciLexerProperties_SetColor_IsBase(bool value) const { qscilexerproperties_setcolor_isbase = value; }
    inline void setQsciLexerProperties_SetEolFill_IsBase(bool value) const { qscilexerproperties_seteolfill_isbase = value; }
    inline void setQsciLexerProperties_SetFont_IsBase(bool value) const { qscilexerproperties_setfont_isbase = value; }
    inline void setQsciLexerProperties_SetPaper_IsBase(bool value) const { qscilexerproperties_setpaper_isbase = value; }
    inline void setQsciLexerProperties_ReadProperties_IsBase(bool value) const { qscilexerproperties_readproperties_isbase = value; }
    inline void setQsciLexerProperties_WriteProperties_IsBase(bool value) const { qscilexerproperties_writeproperties_isbase = value; }
    inline void setQsciLexerProperties_Event_IsBase(bool value) const { qscilexerproperties_event_isbase = value; }
    inline void setQsciLexerProperties_EventFilter_IsBase(bool value) const { qscilexerproperties_eventfilter_isbase = value; }
    inline void setQsciLexerProperties_TimerEvent_IsBase(bool value) const { qscilexerproperties_timerevent_isbase = value; }
    inline void setQsciLexerProperties_ChildEvent_IsBase(bool value) const { qscilexerproperties_childevent_isbase = value; }
    inline void setQsciLexerProperties_CustomEvent_IsBase(bool value) const { qscilexerproperties_customevent_isbase = value; }
    inline void setQsciLexerProperties_ConnectNotify_IsBase(bool value) const { qscilexerproperties_connectnotify_isbase = value; }
    inline void setQsciLexerProperties_DisconnectNotify_IsBase(bool value) const { qscilexerproperties_disconnectnotify_isbase = value; }
    inline void setQsciLexerProperties_TextAsBytes_IsBase(bool value) const { qscilexerproperties_textasbytes_isbase = value; }
    inline void setQsciLexerProperties_BytesAsText_IsBase(bool value) const { qscilexerproperties_bytesastext_isbase = value; }
    inline void setQsciLexerProperties_Sender_IsBase(bool value) const { qscilexerproperties_sender_isbase = value; }
    inline void setQsciLexerProperties_SenderSignalIndex_IsBase(bool value) const { qscilexerproperties_sendersignalindex_isbase = value; }
    inline void setQsciLexerProperties_Receivers_IsBase(bool value) const { qscilexerproperties_receivers_isbase = value; }
    inline void setQsciLexerProperties_IsSignalConnected_IsBase(bool value) const { qscilexerproperties_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerproperties_metaobject_isbase) {
            qscilexerproperties_metaobject_isbase = false;
            return QsciLexerProperties::metaObject();
        }
        auto metaobject_cb = qscilexerproperties_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerProperties::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerproperties_metacast_isbase) {
            qscilexerproperties_metacast_isbase = false;
            return QsciLexerProperties::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerproperties_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerproperties_metacall_isbase) {
            qscilexerproperties_metacall_isbase = false;
            return QsciLexerProperties::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerproperties_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerproperties_setfoldcompact_isbase) {
            qscilexerproperties_setfoldcompact_isbase = false;
            QsciLexerProperties::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerproperties_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerproperties_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerproperties_lexer_isbase) {
            qscilexerproperties_lexer_isbase = false;
            return QsciLexerProperties::lexer();
        }
        auto lexer_cb = qscilexerproperties_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerProperties::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerproperties_lexerid_isbase) {
            qscilexerproperties_lexerid_isbase = false;
            return QsciLexerProperties::lexerId();
        }
        auto lexerid_cb = qscilexerproperties_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerproperties_autocompletionfillups_isbase) {
            qscilexerproperties_autocompletionfillups_isbase = false;
            return QsciLexerProperties::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerproperties_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerProperties::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerproperties_autocompletionwordseparators_isbase) {
            qscilexerproperties_autocompletionwordseparators_isbase = false;
            return QsciLexerProperties::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerproperties_autocompletionwordseparators_callback;
        if (autocompletionwordseparators_cb) {
            const char** callback_ret = autocompletionwordseparators_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QsciLexerProperties::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerproperties_blockend_isbase) {
            qscilexerproperties_blockend_isbase = false;
            return QsciLexerProperties::blockEnd(style);
        }
        auto blockend_cb = qscilexerproperties_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerproperties_blocklookback_isbase) {
            qscilexerproperties_blocklookback_isbase = false;
            return QsciLexerProperties::blockLookback();
        }
        auto blocklookback_cb = qscilexerproperties_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerproperties_blockstart_isbase) {
            qscilexerproperties_blockstart_isbase = false;
            return QsciLexerProperties::blockStart(style);
        }
        auto blockstart_cb = qscilexerproperties_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerproperties_blockstartkeyword_isbase) {
            qscilexerproperties_blockstartkeyword_isbase = false;
            return QsciLexerProperties::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerproperties_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerproperties_bracestyle_isbase) {
            qscilexerproperties_bracestyle_isbase = false;
            return QsciLexerProperties::braceStyle();
        }
        auto bracestyle_cb = qscilexerproperties_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerproperties_casesensitive_isbase) {
            qscilexerproperties_casesensitive_isbase = false;
            return QsciLexerProperties::caseSensitive();
        }
        auto casesensitive_cb = qscilexerproperties_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerProperties::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerproperties_color_isbase) {
            qscilexerproperties_color_isbase = false;
            return QsciLexerProperties::color(style);
        }
        auto color_cb = qscilexerproperties_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerproperties_eolfill_isbase) {
            qscilexerproperties_eolfill_isbase = false;
            return QsciLexerProperties::eolFill(style);
        }
        auto eolfill_cb = qscilexerproperties_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerproperties_font_isbase) {
            qscilexerproperties_font_isbase = false;
            return QsciLexerProperties::font(style);
        }
        auto font_cb = qscilexerproperties_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerproperties_indentationguideview_isbase) {
            qscilexerproperties_indentationguideview_isbase = false;
            return QsciLexerProperties::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerproperties_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerproperties_keywords_isbase) {
            qscilexerproperties_keywords_isbase = false;
            return QsciLexerProperties::keywords(set);
        }
        auto keywords_cb = qscilexerproperties_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerproperties_defaultstyle_isbase) {
            qscilexerproperties_defaultstyle_isbase = false;
            return QsciLexerProperties::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerproperties_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerproperties_description_callback;
        if (description_cb) {
            int cbval1 = style;

            const char* callback_ret = description_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerproperties_paper_isbase) {
            qscilexerproperties_paper_isbase = false;
            return QsciLexerProperties::paper(style);
        }
        auto paper_cb = qscilexerproperties_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerproperties_defaultcolor2_isbase) {
            qscilexerproperties_defaultcolor2_isbase = false;
            return QsciLexerProperties::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerproperties_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerproperties_defaulteolfill_isbase) {
            qscilexerproperties_defaulteolfill_isbase = false;
            return QsciLexerProperties::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerproperties_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerproperties_defaultfont2_isbase) {
            qscilexerproperties_defaultfont2_isbase = false;
            return QsciLexerProperties::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerproperties_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerproperties_defaultpaper2_isbase) {
            qscilexerproperties_defaultpaper2_isbase = false;
            return QsciLexerProperties::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerproperties_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerProperties::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerproperties_seteditor_isbase) {
            qscilexerproperties_seteditor_isbase = false;
            QsciLexerProperties::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerproperties_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerproperties_refreshproperties_isbase) {
            qscilexerproperties_refreshproperties_isbase = false;
            QsciLexerProperties::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerproperties_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerProperties::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerproperties_stylebitsneeded_isbase) {
            qscilexerproperties_stylebitsneeded_isbase = false;
            return QsciLexerProperties::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerproperties_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerproperties_wordcharacters_isbase) {
            qscilexerproperties_wordcharacters_isbase = false;
            return QsciLexerProperties::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerproperties_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerProperties::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerproperties_setautoindentstyle_isbase) {
            qscilexerproperties_setautoindentstyle_isbase = false;
            QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerproperties_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerproperties_setcolor_isbase) {
            qscilexerproperties_setcolor_isbase = false;
            QsciLexerProperties::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerproperties_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerproperties_seteolfill_isbase) {
            qscilexerproperties_seteolfill_isbase = false;
            QsciLexerProperties::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerproperties_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerproperties_setfont_isbase) {
            qscilexerproperties_setfont_isbase = false;
            QsciLexerProperties::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerproperties_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerproperties_setpaper_isbase) {
            qscilexerproperties_setpaper_isbase = false;
            QsciLexerProperties::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerproperties_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerproperties_readproperties_isbase) {
            qscilexerproperties_readproperties_isbase = false;
            return QsciLexerProperties::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerproperties_readproperties_callback;
        if (readproperties_cb) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;

            bool callback_ret = readproperties_cb(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerProperties::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerproperties_writeproperties_isbase) {
            qscilexerproperties_writeproperties_isbase = false;
            return QsciLexerProperties::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerproperties_writeproperties_callback;
        if (writeproperties_cb) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;

            bool callback_ret = writeproperties_cb(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerProperties::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerproperties_event_isbase) {
            qscilexerproperties_event_isbase = false;
            return QsciLexerProperties::event(event);
        }
        auto event_cb = qscilexerproperties_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerproperties_eventfilter_isbase) {
            qscilexerproperties_eventfilter_isbase = false;
            return QsciLexerProperties::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerproperties_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerProperties::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerproperties_timerevent_isbase) {
            qscilexerproperties_timerevent_isbase = false;
            QsciLexerProperties::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerproperties_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerproperties_childevent_isbase) {
            qscilexerproperties_childevent_isbase = false;
            QsciLexerProperties::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerproperties_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerproperties_customevent_isbase) {
            qscilexerproperties_customevent_isbase = false;
            QsciLexerProperties::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerproperties_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_connectnotify_isbase) {
            qscilexerproperties_connectnotify_isbase = false;
            QsciLexerProperties::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerproperties_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_disconnectnotify_isbase) {
            qscilexerproperties_disconnectnotify_isbase = false;
            QsciLexerProperties::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerproperties_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerProperties::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerproperties_textasbytes_isbase) {
            qscilexerproperties_textasbytes_isbase = false;
            return QsciLexerProperties::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerproperties_textasbytes_callback;
        if (textasbytes_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            libqt_string callback_ret = textasbytes_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            libqt_free(text_str);
            return callback_ret_QByteArray;
        }
        return QsciLexerProperties::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerproperties_bytesastext_isbase) {
            qscilexerproperties_bytesastext_isbase = false;
            return QsciLexerProperties::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerproperties_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerProperties::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerproperties_sender_isbase) {
            qscilexerproperties_sender_isbase = false;
            return QsciLexerProperties::sender();
        }
        auto sender_cb = qscilexerproperties_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerProperties::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerproperties_sendersignalindex_isbase) {
            qscilexerproperties_sendersignalindex_isbase = false;
            return QsciLexerProperties::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerproperties_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerproperties_receivers_isbase) {
            qscilexerproperties_receivers_isbase = false;
            return QsciLexerProperties::receivers(signal);
        }
        auto receivers_cb = qscilexerproperties_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerproperties_issignalconnected_isbase) {
            qscilexerproperties_issignalconnected_isbase = false;
            return QsciLexerProperties::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerproperties_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerProperties_ReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_SuperReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_WriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_SuperWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerProperties_TimerEvent(QsciLexerProperties* self, QTimerEvent* event);
    friend void QsciLexerProperties_SuperTimerEvent(QsciLexerProperties* self, QTimerEvent* event);
    friend void QsciLexerProperties_ChildEvent(QsciLexerProperties* self, QChildEvent* event);
    friend void QsciLexerProperties_SuperChildEvent(QsciLexerProperties* self, QChildEvent* event);
    friend void QsciLexerProperties_CustomEvent(QsciLexerProperties* self, QEvent* event);
    friend void QsciLexerProperties_SuperCustomEvent(QsciLexerProperties* self, QEvent* event);
    friend void QsciLexerProperties_ConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_SuperConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_DisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_SuperDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerProperties_TextAsBytes(const QsciLexerProperties* self, const libqt_string text);
    friend libqt_string QsciLexerProperties_SuperTextAsBytes(const QsciLexerProperties* self, const libqt_string text);
    friend libqt_string QsciLexerProperties_BytesAsText(const QsciLexerProperties* self, const char* bytes, int size);
    friend libqt_string QsciLexerProperties_SuperBytesAsText(const QsciLexerProperties* self, const char* bytes, int size);
    friend QObject* QsciLexerProperties_Sender(const QsciLexerProperties* self);
    friend QObject* QsciLexerProperties_SuperSender(const QsciLexerProperties* self);
    friend int QsciLexerProperties_SenderSignalIndex(const QsciLexerProperties* self);
    friend int QsciLexerProperties_SuperSenderSignalIndex(const QsciLexerProperties* self);
    friend int QsciLexerProperties_Receivers(const QsciLexerProperties* self, const char* signal);
    friend int QsciLexerProperties_SuperReceivers(const QsciLexerProperties* self, const char* signal);
    friend bool QsciLexerProperties_IsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
    friend bool QsciLexerProperties_SuperIsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
};

#endif
