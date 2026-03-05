#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERLUA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERLUA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerLua so that we can call protected methods
class VirtualQsciLexerLua final : public QsciLexerLua {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerLua = true;

    // Virtual class public types (including callbacks)
    using QsciLexerLua_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerLua_Metacast_Callback = void* (*)(QsciLexerLua*, const char*);
    using QsciLexerLua_Metacall_Callback = int (*)(QsciLexerLua*, int, int, void**);
    using QsciLexerLua_SetFoldCompact_Callback = void (*)(QsciLexerLua*, bool);
    using QsciLexerLua_Language_Callback = const char* (*)();
    using QsciLexerLua_Lexer_Callback = const char* (*)();
    using QsciLexerLua_LexerId_Callback = int (*)();
    using QsciLexerLua_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerLua_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerLua_BlockEnd_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockLookback_Callback = int (*)();
    using QsciLexerLua_BlockStart_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockStartKeyword_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BraceStyle_Callback = int (*)();
    using QsciLexerLua_CaseSensitive_Callback = bool (*)();
    using QsciLexerLua_Color_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_EolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Font_Callback = QFont* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_IndentationGuideView_Callback = int (*)();
    using QsciLexerLua_Keywords_Callback = const char* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultStyle_Callback = int (*)();
    using QsciLexerLua_Description_Callback = const char* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Paper_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultColor2_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultEolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultFont2_Callback = QFont* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultPaper2_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_SetEditor_Callback = void (*)(QsciLexerLua*, QsciScintilla*);
    using QsciLexerLua_RefreshProperties_Callback = void (*)();
    using QsciLexerLua_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerLua_WordCharacters_Callback = const char* (*)();
    using QsciLexerLua_SetAutoIndentStyle_Callback = void (*)(QsciLexerLua*, int);
    using QsciLexerLua_SetColor_Callback = void (*)(QsciLexerLua*, QColor*, int);
    using QsciLexerLua_SetEolFill_Callback = void (*)(QsciLexerLua*, bool, int);
    using QsciLexerLua_SetFont_Callback = void (*)(QsciLexerLua*, QFont*, int);
    using QsciLexerLua_SetPaper_Callback = void (*)(QsciLexerLua*, QColor*, int);
    using QsciLexerLua_ReadProperties_Callback = bool (*)(QsciLexerLua*, QSettings*, const char*);
    using QsciLexerLua_WriteProperties_Callback = bool (*)(const QsciLexerLua*, QSettings*, const char*);
    using QsciLexerLua_Event_Callback = bool (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_EventFilter_Callback = bool (*)(QsciLexerLua*, QObject*, QEvent*);
    using QsciLexerLua_TimerEvent_Callback = void (*)(QsciLexerLua*, QTimerEvent*);
    using QsciLexerLua_ChildEvent_Callback = void (*)(QsciLexerLua*, QChildEvent*);
    using QsciLexerLua_CustomEvent_Callback = void (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_ConnectNotify_Callback = void (*)(QsciLexerLua*, QMetaMethod*);
    using QsciLexerLua_DisconnectNotify_Callback = void (*)(QsciLexerLua*, QMetaMethod*);
    using QsciLexerLua_TextAsBytes_Callback = libqt_string (*)(const QsciLexerLua*, const char*);
    using QsciLexerLua_BytesAsText_Callback = const char* (*)(const QsciLexerLua*, const char*, int);
    using QsciLexerLua_Sender_Callback = QObject* (*)();
    using QsciLexerLua_SenderSignalIndex_Callback = int (*)();
    using QsciLexerLua_Receivers_Callback = int (*)(const QsciLexerLua*, const char*);
    using QsciLexerLua_IsSignalConnected_Callback = bool (*)(const QsciLexerLua*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerLua_MetaObject_Callback qscilexerlua_metaobject_callback = nullptr;
    QsciLexerLua_Metacast_Callback qscilexerlua_metacast_callback = nullptr;
    QsciLexerLua_Metacall_Callback qscilexerlua_metacall_callback = nullptr;
    QsciLexerLua_SetFoldCompact_Callback qscilexerlua_setfoldcompact_callback = nullptr;
    QsciLexerLua_Language_Callback qscilexerlua_language_callback = nullptr;
    QsciLexerLua_Lexer_Callback qscilexerlua_lexer_callback = nullptr;
    QsciLexerLua_LexerId_Callback qscilexerlua_lexerid_callback = nullptr;
    QsciLexerLua_AutoCompletionFillups_Callback qscilexerlua_autocompletionfillups_callback = nullptr;
    QsciLexerLua_AutoCompletionWordSeparators_Callback qscilexerlua_autocompletionwordseparators_callback = nullptr;
    QsciLexerLua_BlockEnd_Callback qscilexerlua_blockend_callback = nullptr;
    QsciLexerLua_BlockLookback_Callback qscilexerlua_blocklookback_callback = nullptr;
    QsciLexerLua_BlockStart_Callback qscilexerlua_blockstart_callback = nullptr;
    QsciLexerLua_BlockStartKeyword_Callback qscilexerlua_blockstartkeyword_callback = nullptr;
    QsciLexerLua_BraceStyle_Callback qscilexerlua_bracestyle_callback = nullptr;
    QsciLexerLua_CaseSensitive_Callback qscilexerlua_casesensitive_callback = nullptr;
    QsciLexerLua_Color_Callback qscilexerlua_color_callback = nullptr;
    QsciLexerLua_EolFill_Callback qscilexerlua_eolfill_callback = nullptr;
    QsciLexerLua_Font_Callback qscilexerlua_font_callback = nullptr;
    QsciLexerLua_IndentationGuideView_Callback qscilexerlua_indentationguideview_callback = nullptr;
    QsciLexerLua_Keywords_Callback qscilexerlua_keywords_callback = nullptr;
    QsciLexerLua_DefaultStyle_Callback qscilexerlua_defaultstyle_callback = nullptr;
    QsciLexerLua_Description_Callback qscilexerlua_description_callback = nullptr;
    QsciLexerLua_Paper_Callback qscilexerlua_paper_callback = nullptr;
    QsciLexerLua_DefaultColor2_Callback qscilexerlua_defaultcolor2_callback = nullptr;
    QsciLexerLua_DefaultEolFill_Callback qscilexerlua_defaulteolfill_callback = nullptr;
    QsciLexerLua_DefaultFont2_Callback qscilexerlua_defaultfont2_callback = nullptr;
    QsciLexerLua_DefaultPaper2_Callback qscilexerlua_defaultpaper2_callback = nullptr;
    QsciLexerLua_SetEditor_Callback qscilexerlua_seteditor_callback = nullptr;
    QsciLexerLua_RefreshProperties_Callback qscilexerlua_refreshproperties_callback = nullptr;
    QsciLexerLua_StyleBitsNeeded_Callback qscilexerlua_stylebitsneeded_callback = nullptr;
    QsciLexerLua_WordCharacters_Callback qscilexerlua_wordcharacters_callback = nullptr;
    QsciLexerLua_SetAutoIndentStyle_Callback qscilexerlua_setautoindentstyle_callback = nullptr;
    QsciLexerLua_SetColor_Callback qscilexerlua_setcolor_callback = nullptr;
    QsciLexerLua_SetEolFill_Callback qscilexerlua_seteolfill_callback = nullptr;
    QsciLexerLua_SetFont_Callback qscilexerlua_setfont_callback = nullptr;
    QsciLexerLua_SetPaper_Callback qscilexerlua_setpaper_callback = nullptr;
    QsciLexerLua_ReadProperties_Callback qscilexerlua_readproperties_callback = nullptr;
    QsciLexerLua_WriteProperties_Callback qscilexerlua_writeproperties_callback = nullptr;
    QsciLexerLua_Event_Callback qscilexerlua_event_callback = nullptr;
    QsciLexerLua_EventFilter_Callback qscilexerlua_eventfilter_callback = nullptr;
    QsciLexerLua_TimerEvent_Callback qscilexerlua_timerevent_callback = nullptr;
    QsciLexerLua_ChildEvent_Callback qscilexerlua_childevent_callback = nullptr;
    QsciLexerLua_CustomEvent_Callback qscilexerlua_customevent_callback = nullptr;
    QsciLexerLua_ConnectNotify_Callback qscilexerlua_connectnotify_callback = nullptr;
    QsciLexerLua_DisconnectNotify_Callback qscilexerlua_disconnectnotify_callback = nullptr;
    QsciLexerLua_TextAsBytes_Callback qscilexerlua_textasbytes_callback = nullptr;
    QsciLexerLua_BytesAsText_Callback qscilexerlua_bytesastext_callback = nullptr;
    QsciLexerLua_Sender_Callback qscilexerlua_sender_callback = nullptr;
    QsciLexerLua_SenderSignalIndex_Callback qscilexerlua_sendersignalindex_callback = nullptr;
    QsciLexerLua_Receivers_Callback qscilexerlua_receivers_callback = nullptr;
    QsciLexerLua_IsSignalConnected_Callback qscilexerlua_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerlua_metaobject_isbase = false;
    mutable bool qscilexerlua_metacast_isbase = false;
    mutable bool qscilexerlua_metacall_isbase = false;
    mutable bool qscilexerlua_setfoldcompact_isbase = false;
    mutable bool qscilexerlua_language_isbase = false;
    mutable bool qscilexerlua_lexer_isbase = false;
    mutable bool qscilexerlua_lexerid_isbase = false;
    mutable bool qscilexerlua_autocompletionfillups_isbase = false;
    mutable bool qscilexerlua_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerlua_blockend_isbase = false;
    mutable bool qscilexerlua_blocklookback_isbase = false;
    mutable bool qscilexerlua_blockstart_isbase = false;
    mutable bool qscilexerlua_blockstartkeyword_isbase = false;
    mutable bool qscilexerlua_bracestyle_isbase = false;
    mutable bool qscilexerlua_casesensitive_isbase = false;
    mutable bool qscilexerlua_color_isbase = false;
    mutable bool qscilexerlua_eolfill_isbase = false;
    mutable bool qscilexerlua_font_isbase = false;
    mutable bool qscilexerlua_indentationguideview_isbase = false;
    mutable bool qscilexerlua_keywords_isbase = false;
    mutable bool qscilexerlua_defaultstyle_isbase = false;
    mutable bool qscilexerlua_description_isbase = false;
    mutable bool qscilexerlua_paper_isbase = false;
    mutable bool qscilexerlua_defaultcolor2_isbase = false;
    mutable bool qscilexerlua_defaulteolfill_isbase = false;
    mutable bool qscilexerlua_defaultfont2_isbase = false;
    mutable bool qscilexerlua_defaultpaper2_isbase = false;
    mutable bool qscilexerlua_seteditor_isbase = false;
    mutable bool qscilexerlua_refreshproperties_isbase = false;
    mutable bool qscilexerlua_stylebitsneeded_isbase = false;
    mutable bool qscilexerlua_wordcharacters_isbase = false;
    mutable bool qscilexerlua_setautoindentstyle_isbase = false;
    mutable bool qscilexerlua_setcolor_isbase = false;
    mutable bool qscilexerlua_seteolfill_isbase = false;
    mutable bool qscilexerlua_setfont_isbase = false;
    mutable bool qscilexerlua_setpaper_isbase = false;
    mutable bool qscilexerlua_readproperties_isbase = false;
    mutable bool qscilexerlua_writeproperties_isbase = false;
    mutable bool qscilexerlua_event_isbase = false;
    mutable bool qscilexerlua_eventfilter_isbase = false;
    mutable bool qscilexerlua_timerevent_isbase = false;
    mutable bool qscilexerlua_childevent_isbase = false;
    mutable bool qscilexerlua_customevent_isbase = false;
    mutable bool qscilexerlua_connectnotify_isbase = false;
    mutable bool qscilexerlua_disconnectnotify_isbase = false;
    mutable bool qscilexerlua_textasbytes_isbase = false;
    mutable bool qscilexerlua_bytesastext_isbase = false;
    mutable bool qscilexerlua_sender_isbase = false;
    mutable bool qscilexerlua_sendersignalindex_isbase = false;
    mutable bool qscilexerlua_receivers_isbase = false;
    mutable bool qscilexerlua_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerLua() : QsciLexerLua() {};
    VirtualQsciLexerLua(QObject* parent) : QsciLexerLua(parent) {};

    // Callback setters
    inline void setQsciLexerLua_MetaObject_Callback(QsciLexerLua_MetaObject_Callback cb) { qscilexerlua_metaobject_callback = cb; }
    inline void setQsciLexerLua_Metacast_Callback(QsciLexerLua_Metacast_Callback cb) { qscilexerlua_metacast_callback = cb; }
    inline void setQsciLexerLua_Metacall_Callback(QsciLexerLua_Metacall_Callback cb) { qscilexerlua_metacall_callback = cb; }
    inline void setQsciLexerLua_SetFoldCompact_Callback(QsciLexerLua_SetFoldCompact_Callback cb) { qscilexerlua_setfoldcompact_callback = cb; }
    inline void setQsciLexerLua_Language_Callback(QsciLexerLua_Language_Callback cb) { qscilexerlua_language_callback = cb; }
    inline void setQsciLexerLua_Lexer_Callback(QsciLexerLua_Lexer_Callback cb) { qscilexerlua_lexer_callback = cb; }
    inline void setQsciLexerLua_LexerId_Callback(QsciLexerLua_LexerId_Callback cb) { qscilexerlua_lexerid_callback = cb; }
    inline void setQsciLexerLua_AutoCompletionFillups_Callback(QsciLexerLua_AutoCompletionFillups_Callback cb) { qscilexerlua_autocompletionfillups_callback = cb; }
    inline void setQsciLexerLua_AutoCompletionWordSeparators_Callback(QsciLexerLua_AutoCompletionWordSeparators_Callback cb) { qscilexerlua_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerLua_BlockEnd_Callback(QsciLexerLua_BlockEnd_Callback cb) { qscilexerlua_blockend_callback = cb; }
    inline void setQsciLexerLua_BlockLookback_Callback(QsciLexerLua_BlockLookback_Callback cb) { qscilexerlua_blocklookback_callback = cb; }
    inline void setQsciLexerLua_BlockStart_Callback(QsciLexerLua_BlockStart_Callback cb) { qscilexerlua_blockstart_callback = cb; }
    inline void setQsciLexerLua_BlockStartKeyword_Callback(QsciLexerLua_BlockStartKeyword_Callback cb) { qscilexerlua_blockstartkeyword_callback = cb; }
    inline void setQsciLexerLua_BraceStyle_Callback(QsciLexerLua_BraceStyle_Callback cb) { qscilexerlua_bracestyle_callback = cb; }
    inline void setQsciLexerLua_CaseSensitive_Callback(QsciLexerLua_CaseSensitive_Callback cb) { qscilexerlua_casesensitive_callback = cb; }
    inline void setQsciLexerLua_Color_Callback(QsciLexerLua_Color_Callback cb) { qscilexerlua_color_callback = cb; }
    inline void setQsciLexerLua_EolFill_Callback(QsciLexerLua_EolFill_Callback cb) { qscilexerlua_eolfill_callback = cb; }
    inline void setQsciLexerLua_Font_Callback(QsciLexerLua_Font_Callback cb) { qscilexerlua_font_callback = cb; }
    inline void setQsciLexerLua_IndentationGuideView_Callback(QsciLexerLua_IndentationGuideView_Callback cb) { qscilexerlua_indentationguideview_callback = cb; }
    inline void setQsciLexerLua_Keywords_Callback(QsciLexerLua_Keywords_Callback cb) { qscilexerlua_keywords_callback = cb; }
    inline void setQsciLexerLua_DefaultStyle_Callback(QsciLexerLua_DefaultStyle_Callback cb) { qscilexerlua_defaultstyle_callback = cb; }
    inline void setQsciLexerLua_Description_Callback(QsciLexerLua_Description_Callback cb) { qscilexerlua_description_callback = cb; }
    inline void setQsciLexerLua_Paper_Callback(QsciLexerLua_Paper_Callback cb) { qscilexerlua_paper_callback = cb; }
    inline void setQsciLexerLua_DefaultColor2_Callback(QsciLexerLua_DefaultColor2_Callback cb) { qscilexerlua_defaultcolor2_callback = cb; }
    inline void setQsciLexerLua_DefaultEolFill_Callback(QsciLexerLua_DefaultEolFill_Callback cb) { qscilexerlua_defaulteolfill_callback = cb; }
    inline void setQsciLexerLua_DefaultFont2_Callback(QsciLexerLua_DefaultFont2_Callback cb) { qscilexerlua_defaultfont2_callback = cb; }
    inline void setQsciLexerLua_DefaultPaper2_Callback(QsciLexerLua_DefaultPaper2_Callback cb) { qscilexerlua_defaultpaper2_callback = cb; }
    inline void setQsciLexerLua_SetEditor_Callback(QsciLexerLua_SetEditor_Callback cb) { qscilexerlua_seteditor_callback = cb; }
    inline void setQsciLexerLua_RefreshProperties_Callback(QsciLexerLua_RefreshProperties_Callback cb) { qscilexerlua_refreshproperties_callback = cb; }
    inline void setQsciLexerLua_StyleBitsNeeded_Callback(QsciLexerLua_StyleBitsNeeded_Callback cb) { qscilexerlua_stylebitsneeded_callback = cb; }
    inline void setQsciLexerLua_WordCharacters_Callback(QsciLexerLua_WordCharacters_Callback cb) { qscilexerlua_wordcharacters_callback = cb; }
    inline void setQsciLexerLua_SetAutoIndentStyle_Callback(QsciLexerLua_SetAutoIndentStyle_Callback cb) { qscilexerlua_setautoindentstyle_callback = cb; }
    inline void setQsciLexerLua_SetColor_Callback(QsciLexerLua_SetColor_Callback cb) { qscilexerlua_setcolor_callback = cb; }
    inline void setQsciLexerLua_SetEolFill_Callback(QsciLexerLua_SetEolFill_Callback cb) { qscilexerlua_seteolfill_callback = cb; }
    inline void setQsciLexerLua_SetFont_Callback(QsciLexerLua_SetFont_Callback cb) { qscilexerlua_setfont_callback = cb; }
    inline void setQsciLexerLua_SetPaper_Callback(QsciLexerLua_SetPaper_Callback cb) { qscilexerlua_setpaper_callback = cb; }
    inline void setQsciLexerLua_ReadProperties_Callback(QsciLexerLua_ReadProperties_Callback cb) { qscilexerlua_readproperties_callback = cb; }
    inline void setQsciLexerLua_WriteProperties_Callback(QsciLexerLua_WriteProperties_Callback cb) { qscilexerlua_writeproperties_callback = cb; }
    inline void setQsciLexerLua_Event_Callback(QsciLexerLua_Event_Callback cb) { qscilexerlua_event_callback = cb; }
    inline void setQsciLexerLua_EventFilter_Callback(QsciLexerLua_EventFilter_Callback cb) { qscilexerlua_eventfilter_callback = cb; }
    inline void setQsciLexerLua_TimerEvent_Callback(QsciLexerLua_TimerEvent_Callback cb) { qscilexerlua_timerevent_callback = cb; }
    inline void setQsciLexerLua_ChildEvent_Callback(QsciLexerLua_ChildEvent_Callback cb) { qscilexerlua_childevent_callback = cb; }
    inline void setQsciLexerLua_CustomEvent_Callback(QsciLexerLua_CustomEvent_Callback cb) { qscilexerlua_customevent_callback = cb; }
    inline void setQsciLexerLua_ConnectNotify_Callback(QsciLexerLua_ConnectNotify_Callback cb) { qscilexerlua_connectnotify_callback = cb; }
    inline void setQsciLexerLua_DisconnectNotify_Callback(QsciLexerLua_DisconnectNotify_Callback cb) { qscilexerlua_disconnectnotify_callback = cb; }
    inline void setQsciLexerLua_TextAsBytes_Callback(QsciLexerLua_TextAsBytes_Callback cb) { qscilexerlua_textasbytes_callback = cb; }
    inline void setQsciLexerLua_BytesAsText_Callback(QsciLexerLua_BytesAsText_Callback cb) { qscilexerlua_bytesastext_callback = cb; }
    inline void setQsciLexerLua_Sender_Callback(QsciLexerLua_Sender_Callback cb) { qscilexerlua_sender_callback = cb; }
    inline void setQsciLexerLua_SenderSignalIndex_Callback(QsciLexerLua_SenderSignalIndex_Callback cb) { qscilexerlua_sendersignalindex_callback = cb; }
    inline void setQsciLexerLua_Receivers_Callback(QsciLexerLua_Receivers_Callback cb) { qscilexerlua_receivers_callback = cb; }
    inline void setQsciLexerLua_IsSignalConnected_Callback(QsciLexerLua_IsSignalConnected_Callback cb) { qscilexerlua_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerLua_MetaObject_IsBase(bool value) const { qscilexerlua_metaobject_isbase = value; }
    inline void setQsciLexerLua_Metacast_IsBase(bool value) const { qscilexerlua_metacast_isbase = value; }
    inline void setQsciLexerLua_Metacall_IsBase(bool value) const { qscilexerlua_metacall_isbase = value; }
    inline void setQsciLexerLua_SetFoldCompact_IsBase(bool value) const { qscilexerlua_setfoldcompact_isbase = value; }
    inline void setQsciLexerLua_Language_IsBase(bool value) const { qscilexerlua_language_isbase = value; }
    inline void setQsciLexerLua_Lexer_IsBase(bool value) const { qscilexerlua_lexer_isbase = value; }
    inline void setQsciLexerLua_LexerId_IsBase(bool value) const { qscilexerlua_lexerid_isbase = value; }
    inline void setQsciLexerLua_AutoCompletionFillups_IsBase(bool value) const { qscilexerlua_autocompletionfillups_isbase = value; }
    inline void setQsciLexerLua_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerlua_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerLua_BlockEnd_IsBase(bool value) const { qscilexerlua_blockend_isbase = value; }
    inline void setQsciLexerLua_BlockLookback_IsBase(bool value) const { qscilexerlua_blocklookback_isbase = value; }
    inline void setQsciLexerLua_BlockStart_IsBase(bool value) const { qscilexerlua_blockstart_isbase = value; }
    inline void setQsciLexerLua_BlockStartKeyword_IsBase(bool value) const { qscilexerlua_blockstartkeyword_isbase = value; }
    inline void setQsciLexerLua_BraceStyle_IsBase(bool value) const { qscilexerlua_bracestyle_isbase = value; }
    inline void setQsciLexerLua_CaseSensitive_IsBase(bool value) const { qscilexerlua_casesensitive_isbase = value; }
    inline void setQsciLexerLua_Color_IsBase(bool value) const { qscilexerlua_color_isbase = value; }
    inline void setQsciLexerLua_EolFill_IsBase(bool value) const { qscilexerlua_eolfill_isbase = value; }
    inline void setQsciLexerLua_Font_IsBase(bool value) const { qscilexerlua_font_isbase = value; }
    inline void setQsciLexerLua_IndentationGuideView_IsBase(bool value) const { qscilexerlua_indentationguideview_isbase = value; }
    inline void setQsciLexerLua_Keywords_IsBase(bool value) const { qscilexerlua_keywords_isbase = value; }
    inline void setQsciLexerLua_DefaultStyle_IsBase(bool value) const { qscilexerlua_defaultstyle_isbase = value; }
    inline void setQsciLexerLua_Description_IsBase(bool value) const { qscilexerlua_description_isbase = value; }
    inline void setQsciLexerLua_Paper_IsBase(bool value) const { qscilexerlua_paper_isbase = value; }
    inline void setQsciLexerLua_DefaultColor2_IsBase(bool value) const { qscilexerlua_defaultcolor2_isbase = value; }
    inline void setQsciLexerLua_DefaultEolFill_IsBase(bool value) const { qscilexerlua_defaulteolfill_isbase = value; }
    inline void setQsciLexerLua_DefaultFont2_IsBase(bool value) const { qscilexerlua_defaultfont2_isbase = value; }
    inline void setQsciLexerLua_DefaultPaper2_IsBase(bool value) const { qscilexerlua_defaultpaper2_isbase = value; }
    inline void setQsciLexerLua_SetEditor_IsBase(bool value) const { qscilexerlua_seteditor_isbase = value; }
    inline void setQsciLexerLua_RefreshProperties_IsBase(bool value) const { qscilexerlua_refreshproperties_isbase = value; }
    inline void setQsciLexerLua_StyleBitsNeeded_IsBase(bool value) const { qscilexerlua_stylebitsneeded_isbase = value; }
    inline void setQsciLexerLua_WordCharacters_IsBase(bool value) const { qscilexerlua_wordcharacters_isbase = value; }
    inline void setQsciLexerLua_SetAutoIndentStyle_IsBase(bool value) const { qscilexerlua_setautoindentstyle_isbase = value; }
    inline void setQsciLexerLua_SetColor_IsBase(bool value) const { qscilexerlua_setcolor_isbase = value; }
    inline void setQsciLexerLua_SetEolFill_IsBase(bool value) const { qscilexerlua_seteolfill_isbase = value; }
    inline void setQsciLexerLua_SetFont_IsBase(bool value) const { qscilexerlua_setfont_isbase = value; }
    inline void setQsciLexerLua_SetPaper_IsBase(bool value) const { qscilexerlua_setpaper_isbase = value; }
    inline void setQsciLexerLua_ReadProperties_IsBase(bool value) const { qscilexerlua_readproperties_isbase = value; }
    inline void setQsciLexerLua_WriteProperties_IsBase(bool value) const { qscilexerlua_writeproperties_isbase = value; }
    inline void setQsciLexerLua_Event_IsBase(bool value) const { qscilexerlua_event_isbase = value; }
    inline void setQsciLexerLua_EventFilter_IsBase(bool value) const { qscilexerlua_eventfilter_isbase = value; }
    inline void setQsciLexerLua_TimerEvent_IsBase(bool value) const { qscilexerlua_timerevent_isbase = value; }
    inline void setQsciLexerLua_ChildEvent_IsBase(bool value) const { qscilexerlua_childevent_isbase = value; }
    inline void setQsciLexerLua_CustomEvent_IsBase(bool value) const { qscilexerlua_customevent_isbase = value; }
    inline void setQsciLexerLua_ConnectNotify_IsBase(bool value) const { qscilexerlua_connectnotify_isbase = value; }
    inline void setQsciLexerLua_DisconnectNotify_IsBase(bool value) const { qscilexerlua_disconnectnotify_isbase = value; }
    inline void setQsciLexerLua_TextAsBytes_IsBase(bool value) const { qscilexerlua_textasbytes_isbase = value; }
    inline void setQsciLexerLua_BytesAsText_IsBase(bool value) const { qscilexerlua_bytesastext_isbase = value; }
    inline void setQsciLexerLua_Sender_IsBase(bool value) const { qscilexerlua_sender_isbase = value; }
    inline void setQsciLexerLua_SenderSignalIndex_IsBase(bool value) const { qscilexerlua_sendersignalindex_isbase = value; }
    inline void setQsciLexerLua_Receivers_IsBase(bool value) const { qscilexerlua_receivers_isbase = value; }
    inline void setQsciLexerLua_IsSignalConnected_IsBase(bool value) const { qscilexerlua_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerlua_metaobject_isbase) {
            qscilexerlua_metaobject_isbase = false;
            return QsciLexerLua::metaObject();
        }
        auto metaobject_cb = qscilexerlua_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerLua::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerlua_metacast_isbase) {
            qscilexerlua_metacast_isbase = false;
            return QsciLexerLua::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerlua_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerlua_metacall_isbase) {
            qscilexerlua_metacall_isbase = false;
            return QsciLexerLua::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerlua_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerlua_setfoldcompact_isbase) {
            qscilexerlua_setfoldcompact_isbase = false;
            QsciLexerLua::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerlua_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerLua::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerlua_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerlua_lexer_isbase) {
            qscilexerlua_lexer_isbase = false;
            return QsciLexerLua::lexer();
        }
        auto lexer_cb = qscilexerlua_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerLua::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerlua_lexerid_isbase) {
            qscilexerlua_lexerid_isbase = false;
            return QsciLexerLua::lexerId();
        }
        auto lexerid_cb = qscilexerlua_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerlua_autocompletionfillups_isbase) {
            qscilexerlua_autocompletionfillups_isbase = false;
            return QsciLexerLua::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerlua_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerLua::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerlua_autocompletionwordseparators_isbase) {
            qscilexerlua_autocompletionwordseparators_isbase = false;
            return QsciLexerLua::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerlua_autocompletionwordseparators_callback;
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
        return QsciLexerLua::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerlua_blockend_isbase) {
            qscilexerlua_blockend_isbase = false;
            return QsciLexerLua::blockEnd(style);
        }
        auto blockend_cb = qscilexerlua_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerlua_blocklookback_isbase) {
            qscilexerlua_blocklookback_isbase = false;
            return QsciLexerLua::blockLookback();
        }
        auto blocklookback_cb = qscilexerlua_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerlua_blockstart_isbase) {
            qscilexerlua_blockstart_isbase = false;
            return QsciLexerLua::blockStart(style);
        }
        auto blockstart_cb = qscilexerlua_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerlua_blockstartkeyword_isbase) {
            qscilexerlua_blockstartkeyword_isbase = false;
            return QsciLexerLua::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerlua_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerlua_bracestyle_isbase) {
            qscilexerlua_bracestyle_isbase = false;
            return QsciLexerLua::braceStyle();
        }
        auto bracestyle_cb = qscilexerlua_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerlua_casesensitive_isbase) {
            qscilexerlua_casesensitive_isbase = false;
            return QsciLexerLua::caseSensitive();
        }
        auto casesensitive_cb = qscilexerlua_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerLua::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerlua_color_isbase) {
            qscilexerlua_color_isbase = false;
            return QsciLexerLua::color(style);
        }
        auto color_cb = qscilexerlua_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerlua_eolfill_isbase) {
            qscilexerlua_eolfill_isbase = false;
            return QsciLexerLua::eolFill(style);
        }
        auto eolfill_cb = qscilexerlua_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerlua_font_isbase) {
            qscilexerlua_font_isbase = false;
            return QsciLexerLua::font(style);
        }
        auto font_cb = qscilexerlua_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerlua_indentationguideview_isbase) {
            qscilexerlua_indentationguideview_isbase = false;
            return QsciLexerLua::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerlua_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerlua_keywords_isbase) {
            qscilexerlua_keywords_isbase = false;
            return QsciLexerLua::keywords(set);
        }
        auto keywords_cb = qscilexerlua_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerlua_defaultstyle_isbase) {
            qscilexerlua_defaultstyle_isbase = false;
            return QsciLexerLua::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerlua_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerlua_description_callback;
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
        if (qscilexerlua_paper_isbase) {
            qscilexerlua_paper_isbase = false;
            return QsciLexerLua::paper(style);
        }
        auto paper_cb = qscilexerlua_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerlua_defaultcolor2_isbase) {
            qscilexerlua_defaultcolor2_isbase = false;
            return QsciLexerLua::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerlua_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerlua_defaulteolfill_isbase) {
            qscilexerlua_defaulteolfill_isbase = false;
            return QsciLexerLua::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerlua_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerlua_defaultfont2_isbase) {
            qscilexerlua_defaultfont2_isbase = false;
            return QsciLexerLua::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerlua_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerlua_defaultpaper2_isbase) {
            qscilexerlua_defaultpaper2_isbase = false;
            return QsciLexerLua::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerlua_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerLua::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerlua_seteditor_isbase) {
            qscilexerlua_seteditor_isbase = false;
            QsciLexerLua::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerlua_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerLua::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerlua_refreshproperties_isbase) {
            qscilexerlua_refreshproperties_isbase = false;
            QsciLexerLua::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerlua_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerLua::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerlua_stylebitsneeded_isbase) {
            qscilexerlua_stylebitsneeded_isbase = false;
            return QsciLexerLua::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerlua_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerlua_wordcharacters_isbase) {
            qscilexerlua_wordcharacters_isbase = false;
            return QsciLexerLua::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerlua_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerLua::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerlua_setautoindentstyle_isbase) {
            qscilexerlua_setautoindentstyle_isbase = false;
            QsciLexerLua::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerlua_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerLua::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerlua_setcolor_isbase) {
            qscilexerlua_setcolor_isbase = false;
            QsciLexerLua::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerlua_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerlua_seteolfill_isbase) {
            qscilexerlua_seteolfill_isbase = false;
            QsciLexerLua::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerlua_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerlua_setfont_isbase) {
            qscilexerlua_setfont_isbase = false;
            QsciLexerLua::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerlua_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerlua_setpaper_isbase) {
            qscilexerlua_setpaper_isbase = false;
            QsciLexerLua::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerlua_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerlua_readproperties_isbase) {
            qscilexerlua_readproperties_isbase = false;
            return QsciLexerLua::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerlua_readproperties_callback;
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
        return QsciLexerLua::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerlua_writeproperties_isbase) {
            qscilexerlua_writeproperties_isbase = false;
            return QsciLexerLua::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerlua_writeproperties_callback;
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
        return QsciLexerLua::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerlua_event_isbase) {
            qscilexerlua_event_isbase = false;
            return QsciLexerLua::event(event);
        }
        auto event_cb = qscilexerlua_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerlua_eventfilter_isbase) {
            qscilexerlua_eventfilter_isbase = false;
            return QsciLexerLua::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerlua_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerLua::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerlua_timerevent_isbase) {
            qscilexerlua_timerevent_isbase = false;
            QsciLexerLua::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerlua_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerLua::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerlua_childevent_isbase) {
            qscilexerlua_childevent_isbase = false;
            QsciLexerLua::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerlua_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerLua::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerlua_customevent_isbase) {
            qscilexerlua_customevent_isbase = false;
            QsciLexerLua::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerlua_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerLua::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_connectnotify_isbase) {
            qscilexerlua_connectnotify_isbase = false;
            QsciLexerLua::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerlua_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerLua::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_disconnectnotify_isbase) {
            qscilexerlua_disconnectnotify_isbase = false;
            QsciLexerLua::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerlua_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerLua::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerlua_textasbytes_isbase) {
            qscilexerlua_textasbytes_isbase = false;
            return QsciLexerLua::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerlua_textasbytes_callback;
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
        return QsciLexerLua::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerlua_bytesastext_isbase) {
            qscilexerlua_bytesastext_isbase = false;
            return QsciLexerLua::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerlua_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerLua::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerlua_sender_isbase) {
            qscilexerlua_sender_isbase = false;
            return QsciLexerLua::sender();
        }
        auto sender_cb = qscilexerlua_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerLua::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerlua_sendersignalindex_isbase) {
            qscilexerlua_sendersignalindex_isbase = false;
            return QsciLexerLua::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerlua_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerlua_receivers_isbase) {
            qscilexerlua_receivers_isbase = false;
            return QsciLexerLua::receivers(signal);
        }
        auto receivers_cb = qscilexerlua_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerlua_issignalconnected_isbase) {
            qscilexerlua_issignalconnected_isbase = false;
            return QsciLexerLua::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerlua_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerLua_ReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerLua_SuperReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerLua_WriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerLua_SuperWriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerLua_TimerEvent(QsciLexerLua* self, QTimerEvent* event);
    friend void QsciLexerLua_SuperTimerEvent(QsciLexerLua* self, QTimerEvent* event);
    friend void QsciLexerLua_ChildEvent(QsciLexerLua* self, QChildEvent* event);
    friend void QsciLexerLua_SuperChildEvent(QsciLexerLua* self, QChildEvent* event);
    friend void QsciLexerLua_CustomEvent(QsciLexerLua* self, QEvent* event);
    friend void QsciLexerLua_SuperCustomEvent(QsciLexerLua* self, QEvent* event);
    friend void QsciLexerLua_ConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
    friend void QsciLexerLua_SuperConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
    friend void QsciLexerLua_DisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
    friend void QsciLexerLua_SuperDisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerLua_TextAsBytes(const QsciLexerLua* self, const libqt_string text);
    friend libqt_string QsciLexerLua_SuperTextAsBytes(const QsciLexerLua* self, const libqt_string text);
    friend libqt_string QsciLexerLua_BytesAsText(const QsciLexerLua* self, const char* bytes, int size);
    friend libqt_string QsciLexerLua_SuperBytesAsText(const QsciLexerLua* self, const char* bytes, int size);
    friend QObject* QsciLexerLua_Sender(const QsciLexerLua* self);
    friend QObject* QsciLexerLua_SuperSender(const QsciLexerLua* self);
    friend int QsciLexerLua_SenderSignalIndex(const QsciLexerLua* self);
    friend int QsciLexerLua_SuperSenderSignalIndex(const QsciLexerLua* self);
    friend int QsciLexerLua_Receivers(const QsciLexerLua* self, const char* signal);
    friend int QsciLexerLua_SuperReceivers(const QsciLexerLua* self, const char* signal);
    friend bool QsciLexerLua_IsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
    friend bool QsciLexerLua_SuperIsSignalConnected(const QsciLexerLua* self, const QMetaMethod* signal);
};

#endif
