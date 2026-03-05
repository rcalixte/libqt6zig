#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOSTSCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOSTSCRIPT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPostScript so that we can call protected methods
class VirtualQsciLexerPostScript final : public QsciLexerPostScript {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerPostScript = true;

    // Virtual class public types (including callbacks)
    using QsciLexerPostScript_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerPostScript_Metacast_Callback = void* (*)(QsciLexerPostScript*, const char*);
    using QsciLexerPostScript_Metacall_Callback = int (*)(QsciLexerPostScript*, int, int, void**);
    using QsciLexerPostScript_SetTokenize_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetLevel_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetFoldCompact_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetFoldAtElse_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_Language_Callback = const char* (*)();
    using QsciLexerPostScript_Lexer_Callback = const char* (*)();
    using QsciLexerPostScript_LexerId_Callback = int (*)();
    using QsciLexerPostScript_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPostScript_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerPostScript_BlockEnd_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockLookback_Callback = int (*)();
    using QsciLexerPostScript_BlockStart_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BraceStyle_Callback = int (*)();
    using QsciLexerPostScript_CaseSensitive_Callback = bool (*)();
    using QsciLexerPostScript_Color_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_EolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Font_Callback = QFont* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_IndentationGuideView_Callback = int (*)();
    using QsciLexerPostScript_Keywords_Callback = const char* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultStyle_Callback = int (*)();
    using QsciLexerPostScript_Description_Callback = const char* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Paper_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultEolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetEditor_Callback = void (*)(QsciLexerPostScript*, QsciScintilla*);
    using QsciLexerPostScript_RefreshProperties_Callback = void (*)();
    using QsciLexerPostScript_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPostScript_WordCharacters_Callback = const char* (*)();
    using QsciLexerPostScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetColor_Callback = void (*)(QsciLexerPostScript*, QColor*, int);
    using QsciLexerPostScript_SetEolFill_Callback = void (*)(QsciLexerPostScript*, bool, int);
    using QsciLexerPostScript_SetFont_Callback = void (*)(QsciLexerPostScript*, QFont*, int);
    using QsciLexerPostScript_SetPaper_Callback = void (*)(QsciLexerPostScript*, QColor*, int);
    using QsciLexerPostScript_ReadProperties_Callback = bool (*)(QsciLexerPostScript*, QSettings*, const char*);
    using QsciLexerPostScript_WriteProperties_Callback = bool (*)(const QsciLexerPostScript*, QSettings*, const char*);
    using QsciLexerPostScript_Event_Callback = bool (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_EventFilter_Callback = bool (*)(QsciLexerPostScript*, QObject*, QEvent*);
    using QsciLexerPostScript_TimerEvent_Callback = void (*)(QsciLexerPostScript*, QTimerEvent*);
    using QsciLexerPostScript_ChildEvent_Callback = void (*)(QsciLexerPostScript*, QChildEvent*);
    using QsciLexerPostScript_CustomEvent_Callback = void (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_ConnectNotify_Callback = void (*)(QsciLexerPostScript*, QMetaMethod*);
    using QsciLexerPostScript_DisconnectNotify_Callback = void (*)(QsciLexerPostScript*, QMetaMethod*);
    using QsciLexerPostScript_TextAsBytes_Callback = libqt_string (*)(const QsciLexerPostScript*, const char*);
    using QsciLexerPostScript_BytesAsText_Callback = const char* (*)(const QsciLexerPostScript*, const char*, int);
    using QsciLexerPostScript_Sender_Callback = QObject* (*)();
    using QsciLexerPostScript_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPostScript_Receivers_Callback = int (*)(const QsciLexerPostScript*, const char*);
    using QsciLexerPostScript_IsSignalConnected_Callback = bool (*)(const QsciLexerPostScript*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerPostScript_MetaObject_Callback qscilexerpostscript_metaobject_callback = nullptr;
    QsciLexerPostScript_Metacast_Callback qscilexerpostscript_metacast_callback = nullptr;
    QsciLexerPostScript_Metacall_Callback qscilexerpostscript_metacall_callback = nullptr;
    QsciLexerPostScript_SetTokenize_Callback qscilexerpostscript_settokenize_callback = nullptr;
    QsciLexerPostScript_SetLevel_Callback qscilexerpostscript_setlevel_callback = nullptr;
    QsciLexerPostScript_SetFoldCompact_Callback qscilexerpostscript_setfoldcompact_callback = nullptr;
    QsciLexerPostScript_SetFoldAtElse_Callback qscilexerpostscript_setfoldatelse_callback = nullptr;
    QsciLexerPostScript_Language_Callback qscilexerpostscript_language_callback = nullptr;
    QsciLexerPostScript_Lexer_Callback qscilexerpostscript_lexer_callback = nullptr;
    QsciLexerPostScript_LexerId_Callback qscilexerpostscript_lexerid_callback = nullptr;
    QsciLexerPostScript_AutoCompletionFillups_Callback qscilexerpostscript_autocompletionfillups_callback = nullptr;
    QsciLexerPostScript_AutoCompletionWordSeparators_Callback qscilexerpostscript_autocompletionwordseparators_callback = nullptr;
    QsciLexerPostScript_BlockEnd_Callback qscilexerpostscript_blockend_callback = nullptr;
    QsciLexerPostScript_BlockLookback_Callback qscilexerpostscript_blocklookback_callback = nullptr;
    QsciLexerPostScript_BlockStart_Callback qscilexerpostscript_blockstart_callback = nullptr;
    QsciLexerPostScript_BlockStartKeyword_Callback qscilexerpostscript_blockstartkeyword_callback = nullptr;
    QsciLexerPostScript_BraceStyle_Callback qscilexerpostscript_bracestyle_callback = nullptr;
    QsciLexerPostScript_CaseSensitive_Callback qscilexerpostscript_casesensitive_callback = nullptr;
    QsciLexerPostScript_Color_Callback qscilexerpostscript_color_callback = nullptr;
    QsciLexerPostScript_EolFill_Callback qscilexerpostscript_eolfill_callback = nullptr;
    QsciLexerPostScript_Font_Callback qscilexerpostscript_font_callback = nullptr;
    QsciLexerPostScript_IndentationGuideView_Callback qscilexerpostscript_indentationguideview_callback = nullptr;
    QsciLexerPostScript_Keywords_Callback qscilexerpostscript_keywords_callback = nullptr;
    QsciLexerPostScript_DefaultStyle_Callback qscilexerpostscript_defaultstyle_callback = nullptr;
    QsciLexerPostScript_Description_Callback qscilexerpostscript_description_callback = nullptr;
    QsciLexerPostScript_Paper_Callback qscilexerpostscript_paper_callback = nullptr;
    QsciLexerPostScript_DefaultColor2_Callback qscilexerpostscript_defaultcolor2_callback = nullptr;
    QsciLexerPostScript_DefaultEolFill_Callback qscilexerpostscript_defaulteolfill_callback = nullptr;
    QsciLexerPostScript_DefaultFont2_Callback qscilexerpostscript_defaultfont2_callback = nullptr;
    QsciLexerPostScript_DefaultPaper2_Callback qscilexerpostscript_defaultpaper2_callback = nullptr;
    QsciLexerPostScript_SetEditor_Callback qscilexerpostscript_seteditor_callback = nullptr;
    QsciLexerPostScript_RefreshProperties_Callback qscilexerpostscript_refreshproperties_callback = nullptr;
    QsciLexerPostScript_StyleBitsNeeded_Callback qscilexerpostscript_stylebitsneeded_callback = nullptr;
    QsciLexerPostScript_WordCharacters_Callback qscilexerpostscript_wordcharacters_callback = nullptr;
    QsciLexerPostScript_SetAutoIndentStyle_Callback qscilexerpostscript_setautoindentstyle_callback = nullptr;
    QsciLexerPostScript_SetColor_Callback qscilexerpostscript_setcolor_callback = nullptr;
    QsciLexerPostScript_SetEolFill_Callback qscilexerpostscript_seteolfill_callback = nullptr;
    QsciLexerPostScript_SetFont_Callback qscilexerpostscript_setfont_callback = nullptr;
    QsciLexerPostScript_SetPaper_Callback qscilexerpostscript_setpaper_callback = nullptr;
    QsciLexerPostScript_ReadProperties_Callback qscilexerpostscript_readproperties_callback = nullptr;
    QsciLexerPostScript_WriteProperties_Callback qscilexerpostscript_writeproperties_callback = nullptr;
    QsciLexerPostScript_Event_Callback qscilexerpostscript_event_callback = nullptr;
    QsciLexerPostScript_EventFilter_Callback qscilexerpostscript_eventfilter_callback = nullptr;
    QsciLexerPostScript_TimerEvent_Callback qscilexerpostscript_timerevent_callback = nullptr;
    QsciLexerPostScript_ChildEvent_Callback qscilexerpostscript_childevent_callback = nullptr;
    QsciLexerPostScript_CustomEvent_Callback qscilexerpostscript_customevent_callback = nullptr;
    QsciLexerPostScript_ConnectNotify_Callback qscilexerpostscript_connectnotify_callback = nullptr;
    QsciLexerPostScript_DisconnectNotify_Callback qscilexerpostscript_disconnectnotify_callback = nullptr;
    QsciLexerPostScript_TextAsBytes_Callback qscilexerpostscript_textasbytes_callback = nullptr;
    QsciLexerPostScript_BytesAsText_Callback qscilexerpostscript_bytesastext_callback = nullptr;
    QsciLexerPostScript_Sender_Callback qscilexerpostscript_sender_callback = nullptr;
    QsciLexerPostScript_SenderSignalIndex_Callback qscilexerpostscript_sendersignalindex_callback = nullptr;
    QsciLexerPostScript_Receivers_Callback qscilexerpostscript_receivers_callback = nullptr;
    QsciLexerPostScript_IsSignalConnected_Callback qscilexerpostscript_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpostscript_metaobject_isbase = false;
    mutable bool qscilexerpostscript_metacast_isbase = false;
    mutable bool qscilexerpostscript_metacall_isbase = false;
    mutable bool qscilexerpostscript_settokenize_isbase = false;
    mutable bool qscilexerpostscript_setlevel_isbase = false;
    mutable bool qscilexerpostscript_setfoldcompact_isbase = false;
    mutable bool qscilexerpostscript_setfoldatelse_isbase = false;
    mutable bool qscilexerpostscript_language_isbase = false;
    mutable bool qscilexerpostscript_lexer_isbase = false;
    mutable bool qscilexerpostscript_lexerid_isbase = false;
    mutable bool qscilexerpostscript_autocompletionfillups_isbase = false;
    mutable bool qscilexerpostscript_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpostscript_blockend_isbase = false;
    mutable bool qscilexerpostscript_blocklookback_isbase = false;
    mutable bool qscilexerpostscript_blockstart_isbase = false;
    mutable bool qscilexerpostscript_blockstartkeyword_isbase = false;
    mutable bool qscilexerpostscript_bracestyle_isbase = false;
    mutable bool qscilexerpostscript_casesensitive_isbase = false;
    mutable bool qscilexerpostscript_color_isbase = false;
    mutable bool qscilexerpostscript_eolfill_isbase = false;
    mutable bool qscilexerpostscript_font_isbase = false;
    mutable bool qscilexerpostscript_indentationguideview_isbase = false;
    mutable bool qscilexerpostscript_keywords_isbase = false;
    mutable bool qscilexerpostscript_defaultstyle_isbase = false;
    mutable bool qscilexerpostscript_description_isbase = false;
    mutable bool qscilexerpostscript_paper_isbase = false;
    mutable bool qscilexerpostscript_defaultcolor2_isbase = false;
    mutable bool qscilexerpostscript_defaulteolfill_isbase = false;
    mutable bool qscilexerpostscript_defaultfont2_isbase = false;
    mutable bool qscilexerpostscript_defaultpaper2_isbase = false;
    mutable bool qscilexerpostscript_seteditor_isbase = false;
    mutable bool qscilexerpostscript_refreshproperties_isbase = false;
    mutable bool qscilexerpostscript_stylebitsneeded_isbase = false;
    mutable bool qscilexerpostscript_wordcharacters_isbase = false;
    mutable bool qscilexerpostscript_setautoindentstyle_isbase = false;
    mutable bool qscilexerpostscript_setcolor_isbase = false;
    mutable bool qscilexerpostscript_seteolfill_isbase = false;
    mutable bool qscilexerpostscript_setfont_isbase = false;
    mutable bool qscilexerpostscript_setpaper_isbase = false;
    mutable bool qscilexerpostscript_readproperties_isbase = false;
    mutable bool qscilexerpostscript_writeproperties_isbase = false;
    mutable bool qscilexerpostscript_event_isbase = false;
    mutable bool qscilexerpostscript_eventfilter_isbase = false;
    mutable bool qscilexerpostscript_timerevent_isbase = false;
    mutable bool qscilexerpostscript_childevent_isbase = false;
    mutable bool qscilexerpostscript_customevent_isbase = false;
    mutable bool qscilexerpostscript_connectnotify_isbase = false;
    mutable bool qscilexerpostscript_disconnectnotify_isbase = false;
    mutable bool qscilexerpostscript_textasbytes_isbase = false;
    mutable bool qscilexerpostscript_bytesastext_isbase = false;
    mutable bool qscilexerpostscript_sender_isbase = false;
    mutable bool qscilexerpostscript_sendersignalindex_isbase = false;
    mutable bool qscilexerpostscript_receivers_isbase = false;
    mutable bool qscilexerpostscript_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPostScript() : QsciLexerPostScript() {};
    VirtualQsciLexerPostScript(QObject* parent) : QsciLexerPostScript(parent) {};

    // Callback setters
    inline void setQsciLexerPostScript_MetaObject_Callback(QsciLexerPostScript_MetaObject_Callback cb) { qscilexerpostscript_metaobject_callback = cb; }
    inline void setQsciLexerPostScript_Metacast_Callback(QsciLexerPostScript_Metacast_Callback cb) { qscilexerpostscript_metacast_callback = cb; }
    inline void setQsciLexerPostScript_Metacall_Callback(QsciLexerPostScript_Metacall_Callback cb) { qscilexerpostscript_metacall_callback = cb; }
    inline void setQsciLexerPostScript_SetTokenize_Callback(QsciLexerPostScript_SetTokenize_Callback cb) { qscilexerpostscript_settokenize_callback = cb; }
    inline void setQsciLexerPostScript_SetLevel_Callback(QsciLexerPostScript_SetLevel_Callback cb) { qscilexerpostscript_setlevel_callback = cb; }
    inline void setQsciLexerPostScript_SetFoldCompact_Callback(QsciLexerPostScript_SetFoldCompact_Callback cb) { qscilexerpostscript_setfoldcompact_callback = cb; }
    inline void setQsciLexerPostScript_SetFoldAtElse_Callback(QsciLexerPostScript_SetFoldAtElse_Callback cb) { qscilexerpostscript_setfoldatelse_callback = cb; }
    inline void setQsciLexerPostScript_Language_Callback(QsciLexerPostScript_Language_Callback cb) { qscilexerpostscript_language_callback = cb; }
    inline void setQsciLexerPostScript_Lexer_Callback(QsciLexerPostScript_Lexer_Callback cb) { qscilexerpostscript_lexer_callback = cb; }
    inline void setQsciLexerPostScript_LexerId_Callback(QsciLexerPostScript_LexerId_Callback cb) { qscilexerpostscript_lexerid_callback = cb; }
    inline void setQsciLexerPostScript_AutoCompletionFillups_Callback(QsciLexerPostScript_AutoCompletionFillups_Callback cb) { qscilexerpostscript_autocompletionfillups_callback = cb; }
    inline void setQsciLexerPostScript_AutoCompletionWordSeparators_Callback(QsciLexerPostScript_AutoCompletionWordSeparators_Callback cb) { qscilexerpostscript_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerPostScript_BlockEnd_Callback(QsciLexerPostScript_BlockEnd_Callback cb) { qscilexerpostscript_blockend_callback = cb; }
    inline void setQsciLexerPostScript_BlockLookback_Callback(QsciLexerPostScript_BlockLookback_Callback cb) { qscilexerpostscript_blocklookback_callback = cb; }
    inline void setQsciLexerPostScript_BlockStart_Callback(QsciLexerPostScript_BlockStart_Callback cb) { qscilexerpostscript_blockstart_callback = cb; }
    inline void setQsciLexerPostScript_BlockStartKeyword_Callback(QsciLexerPostScript_BlockStartKeyword_Callback cb) { qscilexerpostscript_blockstartkeyword_callback = cb; }
    inline void setQsciLexerPostScript_BraceStyle_Callback(QsciLexerPostScript_BraceStyle_Callback cb) { qscilexerpostscript_bracestyle_callback = cb; }
    inline void setQsciLexerPostScript_CaseSensitive_Callback(QsciLexerPostScript_CaseSensitive_Callback cb) { qscilexerpostscript_casesensitive_callback = cb; }
    inline void setQsciLexerPostScript_Color_Callback(QsciLexerPostScript_Color_Callback cb) { qscilexerpostscript_color_callback = cb; }
    inline void setQsciLexerPostScript_EolFill_Callback(QsciLexerPostScript_EolFill_Callback cb) { qscilexerpostscript_eolfill_callback = cb; }
    inline void setQsciLexerPostScript_Font_Callback(QsciLexerPostScript_Font_Callback cb) { qscilexerpostscript_font_callback = cb; }
    inline void setQsciLexerPostScript_IndentationGuideView_Callback(QsciLexerPostScript_IndentationGuideView_Callback cb) { qscilexerpostscript_indentationguideview_callback = cb; }
    inline void setQsciLexerPostScript_Keywords_Callback(QsciLexerPostScript_Keywords_Callback cb) { qscilexerpostscript_keywords_callback = cb; }
    inline void setQsciLexerPostScript_DefaultStyle_Callback(QsciLexerPostScript_DefaultStyle_Callback cb) { qscilexerpostscript_defaultstyle_callback = cb; }
    inline void setQsciLexerPostScript_Description_Callback(QsciLexerPostScript_Description_Callback cb) { qscilexerpostscript_description_callback = cb; }
    inline void setQsciLexerPostScript_Paper_Callback(QsciLexerPostScript_Paper_Callback cb) { qscilexerpostscript_paper_callback = cb; }
    inline void setQsciLexerPostScript_DefaultColor2_Callback(QsciLexerPostScript_DefaultColor2_Callback cb) { qscilexerpostscript_defaultcolor2_callback = cb; }
    inline void setQsciLexerPostScript_DefaultEolFill_Callback(QsciLexerPostScript_DefaultEolFill_Callback cb) { qscilexerpostscript_defaulteolfill_callback = cb; }
    inline void setQsciLexerPostScript_DefaultFont2_Callback(QsciLexerPostScript_DefaultFont2_Callback cb) { qscilexerpostscript_defaultfont2_callback = cb; }
    inline void setQsciLexerPostScript_DefaultPaper2_Callback(QsciLexerPostScript_DefaultPaper2_Callback cb) { qscilexerpostscript_defaultpaper2_callback = cb; }
    inline void setQsciLexerPostScript_SetEditor_Callback(QsciLexerPostScript_SetEditor_Callback cb) { qscilexerpostscript_seteditor_callback = cb; }
    inline void setQsciLexerPostScript_RefreshProperties_Callback(QsciLexerPostScript_RefreshProperties_Callback cb) { qscilexerpostscript_refreshproperties_callback = cb; }
    inline void setQsciLexerPostScript_StyleBitsNeeded_Callback(QsciLexerPostScript_StyleBitsNeeded_Callback cb) { qscilexerpostscript_stylebitsneeded_callback = cb; }
    inline void setQsciLexerPostScript_WordCharacters_Callback(QsciLexerPostScript_WordCharacters_Callback cb) { qscilexerpostscript_wordcharacters_callback = cb; }
    inline void setQsciLexerPostScript_SetAutoIndentStyle_Callback(QsciLexerPostScript_SetAutoIndentStyle_Callback cb) { qscilexerpostscript_setautoindentstyle_callback = cb; }
    inline void setQsciLexerPostScript_SetColor_Callback(QsciLexerPostScript_SetColor_Callback cb) { qscilexerpostscript_setcolor_callback = cb; }
    inline void setQsciLexerPostScript_SetEolFill_Callback(QsciLexerPostScript_SetEolFill_Callback cb) { qscilexerpostscript_seteolfill_callback = cb; }
    inline void setQsciLexerPostScript_SetFont_Callback(QsciLexerPostScript_SetFont_Callback cb) { qscilexerpostscript_setfont_callback = cb; }
    inline void setQsciLexerPostScript_SetPaper_Callback(QsciLexerPostScript_SetPaper_Callback cb) { qscilexerpostscript_setpaper_callback = cb; }
    inline void setQsciLexerPostScript_ReadProperties_Callback(QsciLexerPostScript_ReadProperties_Callback cb) { qscilexerpostscript_readproperties_callback = cb; }
    inline void setQsciLexerPostScript_WriteProperties_Callback(QsciLexerPostScript_WriteProperties_Callback cb) { qscilexerpostscript_writeproperties_callback = cb; }
    inline void setQsciLexerPostScript_Event_Callback(QsciLexerPostScript_Event_Callback cb) { qscilexerpostscript_event_callback = cb; }
    inline void setQsciLexerPostScript_EventFilter_Callback(QsciLexerPostScript_EventFilter_Callback cb) { qscilexerpostscript_eventfilter_callback = cb; }
    inline void setQsciLexerPostScript_TimerEvent_Callback(QsciLexerPostScript_TimerEvent_Callback cb) { qscilexerpostscript_timerevent_callback = cb; }
    inline void setQsciLexerPostScript_ChildEvent_Callback(QsciLexerPostScript_ChildEvent_Callback cb) { qscilexerpostscript_childevent_callback = cb; }
    inline void setQsciLexerPostScript_CustomEvent_Callback(QsciLexerPostScript_CustomEvent_Callback cb) { qscilexerpostscript_customevent_callback = cb; }
    inline void setQsciLexerPostScript_ConnectNotify_Callback(QsciLexerPostScript_ConnectNotify_Callback cb) { qscilexerpostscript_connectnotify_callback = cb; }
    inline void setQsciLexerPostScript_DisconnectNotify_Callback(QsciLexerPostScript_DisconnectNotify_Callback cb) { qscilexerpostscript_disconnectnotify_callback = cb; }
    inline void setQsciLexerPostScript_TextAsBytes_Callback(QsciLexerPostScript_TextAsBytes_Callback cb) { qscilexerpostscript_textasbytes_callback = cb; }
    inline void setQsciLexerPostScript_BytesAsText_Callback(QsciLexerPostScript_BytesAsText_Callback cb) { qscilexerpostscript_bytesastext_callback = cb; }
    inline void setQsciLexerPostScript_Sender_Callback(QsciLexerPostScript_Sender_Callback cb) { qscilexerpostscript_sender_callback = cb; }
    inline void setQsciLexerPostScript_SenderSignalIndex_Callback(QsciLexerPostScript_SenderSignalIndex_Callback cb) { qscilexerpostscript_sendersignalindex_callback = cb; }
    inline void setQsciLexerPostScript_Receivers_Callback(QsciLexerPostScript_Receivers_Callback cb) { qscilexerpostscript_receivers_callback = cb; }
    inline void setQsciLexerPostScript_IsSignalConnected_Callback(QsciLexerPostScript_IsSignalConnected_Callback cb) { qscilexerpostscript_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerPostScript_MetaObject_IsBase(bool value) const { qscilexerpostscript_metaobject_isbase = value; }
    inline void setQsciLexerPostScript_Metacast_IsBase(bool value) const { qscilexerpostscript_metacast_isbase = value; }
    inline void setQsciLexerPostScript_Metacall_IsBase(bool value) const { qscilexerpostscript_metacall_isbase = value; }
    inline void setQsciLexerPostScript_SetTokenize_IsBase(bool value) const { qscilexerpostscript_settokenize_isbase = value; }
    inline void setQsciLexerPostScript_SetLevel_IsBase(bool value) const { qscilexerpostscript_setlevel_isbase = value; }
    inline void setQsciLexerPostScript_SetFoldCompact_IsBase(bool value) const { qscilexerpostscript_setfoldcompact_isbase = value; }
    inline void setQsciLexerPostScript_SetFoldAtElse_IsBase(bool value) const { qscilexerpostscript_setfoldatelse_isbase = value; }
    inline void setQsciLexerPostScript_Language_IsBase(bool value) const { qscilexerpostscript_language_isbase = value; }
    inline void setQsciLexerPostScript_Lexer_IsBase(bool value) const { qscilexerpostscript_lexer_isbase = value; }
    inline void setQsciLexerPostScript_LexerId_IsBase(bool value) const { qscilexerpostscript_lexerid_isbase = value; }
    inline void setQsciLexerPostScript_AutoCompletionFillups_IsBase(bool value) const { qscilexerpostscript_autocompletionfillups_isbase = value; }
    inline void setQsciLexerPostScript_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpostscript_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerPostScript_BlockEnd_IsBase(bool value) const { qscilexerpostscript_blockend_isbase = value; }
    inline void setQsciLexerPostScript_BlockLookback_IsBase(bool value) const { qscilexerpostscript_blocklookback_isbase = value; }
    inline void setQsciLexerPostScript_BlockStart_IsBase(bool value) const { qscilexerpostscript_blockstart_isbase = value; }
    inline void setQsciLexerPostScript_BlockStartKeyword_IsBase(bool value) const { qscilexerpostscript_blockstartkeyword_isbase = value; }
    inline void setQsciLexerPostScript_BraceStyle_IsBase(bool value) const { qscilexerpostscript_bracestyle_isbase = value; }
    inline void setQsciLexerPostScript_CaseSensitive_IsBase(bool value) const { qscilexerpostscript_casesensitive_isbase = value; }
    inline void setQsciLexerPostScript_Color_IsBase(bool value) const { qscilexerpostscript_color_isbase = value; }
    inline void setQsciLexerPostScript_EolFill_IsBase(bool value) const { qscilexerpostscript_eolfill_isbase = value; }
    inline void setQsciLexerPostScript_Font_IsBase(bool value) const { qscilexerpostscript_font_isbase = value; }
    inline void setQsciLexerPostScript_IndentationGuideView_IsBase(bool value) const { qscilexerpostscript_indentationguideview_isbase = value; }
    inline void setQsciLexerPostScript_Keywords_IsBase(bool value) const { qscilexerpostscript_keywords_isbase = value; }
    inline void setQsciLexerPostScript_DefaultStyle_IsBase(bool value) const { qscilexerpostscript_defaultstyle_isbase = value; }
    inline void setQsciLexerPostScript_Description_IsBase(bool value) const { qscilexerpostscript_description_isbase = value; }
    inline void setQsciLexerPostScript_Paper_IsBase(bool value) const { qscilexerpostscript_paper_isbase = value; }
    inline void setQsciLexerPostScript_DefaultColor2_IsBase(bool value) const { qscilexerpostscript_defaultcolor2_isbase = value; }
    inline void setQsciLexerPostScript_DefaultEolFill_IsBase(bool value) const { qscilexerpostscript_defaulteolfill_isbase = value; }
    inline void setQsciLexerPostScript_DefaultFont2_IsBase(bool value) const { qscilexerpostscript_defaultfont2_isbase = value; }
    inline void setQsciLexerPostScript_DefaultPaper2_IsBase(bool value) const { qscilexerpostscript_defaultpaper2_isbase = value; }
    inline void setQsciLexerPostScript_SetEditor_IsBase(bool value) const { qscilexerpostscript_seteditor_isbase = value; }
    inline void setQsciLexerPostScript_RefreshProperties_IsBase(bool value) const { qscilexerpostscript_refreshproperties_isbase = value; }
    inline void setQsciLexerPostScript_StyleBitsNeeded_IsBase(bool value) const { qscilexerpostscript_stylebitsneeded_isbase = value; }
    inline void setQsciLexerPostScript_WordCharacters_IsBase(bool value) const { qscilexerpostscript_wordcharacters_isbase = value; }
    inline void setQsciLexerPostScript_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpostscript_setautoindentstyle_isbase = value; }
    inline void setQsciLexerPostScript_SetColor_IsBase(bool value) const { qscilexerpostscript_setcolor_isbase = value; }
    inline void setQsciLexerPostScript_SetEolFill_IsBase(bool value) const { qscilexerpostscript_seteolfill_isbase = value; }
    inline void setQsciLexerPostScript_SetFont_IsBase(bool value) const { qscilexerpostscript_setfont_isbase = value; }
    inline void setQsciLexerPostScript_SetPaper_IsBase(bool value) const { qscilexerpostscript_setpaper_isbase = value; }
    inline void setQsciLexerPostScript_ReadProperties_IsBase(bool value) const { qscilexerpostscript_readproperties_isbase = value; }
    inline void setQsciLexerPostScript_WriteProperties_IsBase(bool value) const { qscilexerpostscript_writeproperties_isbase = value; }
    inline void setQsciLexerPostScript_Event_IsBase(bool value) const { qscilexerpostscript_event_isbase = value; }
    inline void setQsciLexerPostScript_EventFilter_IsBase(bool value) const { qscilexerpostscript_eventfilter_isbase = value; }
    inline void setQsciLexerPostScript_TimerEvent_IsBase(bool value) const { qscilexerpostscript_timerevent_isbase = value; }
    inline void setQsciLexerPostScript_ChildEvent_IsBase(bool value) const { qscilexerpostscript_childevent_isbase = value; }
    inline void setQsciLexerPostScript_CustomEvent_IsBase(bool value) const { qscilexerpostscript_customevent_isbase = value; }
    inline void setQsciLexerPostScript_ConnectNotify_IsBase(bool value) const { qscilexerpostscript_connectnotify_isbase = value; }
    inline void setQsciLexerPostScript_DisconnectNotify_IsBase(bool value) const { qscilexerpostscript_disconnectnotify_isbase = value; }
    inline void setQsciLexerPostScript_TextAsBytes_IsBase(bool value) const { qscilexerpostscript_textasbytes_isbase = value; }
    inline void setQsciLexerPostScript_BytesAsText_IsBase(bool value) const { qscilexerpostscript_bytesastext_isbase = value; }
    inline void setQsciLexerPostScript_Sender_IsBase(bool value) const { qscilexerpostscript_sender_isbase = value; }
    inline void setQsciLexerPostScript_SenderSignalIndex_IsBase(bool value) const { qscilexerpostscript_sendersignalindex_isbase = value; }
    inline void setQsciLexerPostScript_Receivers_IsBase(bool value) const { qscilexerpostscript_receivers_isbase = value; }
    inline void setQsciLexerPostScript_IsSignalConnected_IsBase(bool value) const { qscilexerpostscript_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpostscript_metaobject_isbase) {
            qscilexerpostscript_metaobject_isbase = false;
            return QsciLexerPostScript::metaObject();
        }
        auto metaobject_cb = qscilexerpostscript_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpostscript_metacast_isbase) {
            qscilexerpostscript_metacast_isbase = false;
            return QsciLexerPostScript::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerpostscript_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpostscript_metacall_isbase) {
            qscilexerpostscript_metacall_isbase = false;
            return QsciLexerPostScript::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerpostscript_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTokenize(bool tokenize) override {
        if (qscilexerpostscript_settokenize_isbase) {
            qscilexerpostscript_settokenize_isbase = false;
            QsciLexerPostScript::setTokenize(tokenize);
            return;
        }
        auto settokenize_cb = qscilexerpostscript_settokenize_callback;
        if (settokenize_cb) {
            bool cbval1 = tokenize;

            settokenize_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setTokenize(tokenize);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLevel(int level) override {
        if (qscilexerpostscript_setlevel_isbase) {
            qscilexerpostscript_setlevel_isbase = false;
            QsciLexerPostScript::setLevel(level);
            return;
        }
        auto setlevel_cb = qscilexerpostscript_setlevel_callback;
        if (setlevel_cb) {
            int cbval1 = level;

            setlevel_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setLevel(level);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpostscript_setfoldcompact_isbase) {
            qscilexerpostscript_setfoldcompact_isbase = false;
            QsciLexerPostScript::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerpostscript_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerpostscript_setfoldatelse_isbase) {
            qscilexerpostscript_setfoldatelse_isbase = false;
            QsciLexerPostScript::setFoldAtElse(fold);
            return;
        }
        auto setfoldatelse_cb = qscilexerpostscript_setfoldatelse_callback;
        if (setfoldatelse_cb) {
            bool cbval1 = fold;

            setfoldatelse_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerpostscript_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpostscript_lexer_isbase) {
            qscilexerpostscript_lexer_isbase = false;
            return QsciLexerPostScript::lexer();
        }
        auto lexer_cb = qscilexerpostscript_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpostscript_lexerid_isbase) {
            qscilexerpostscript_lexerid_isbase = false;
            return QsciLexerPostScript::lexerId();
        }
        auto lexerid_cb = qscilexerpostscript_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpostscript_autocompletionfillups_isbase) {
            qscilexerpostscript_autocompletionfillups_isbase = false;
            return QsciLexerPostScript::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerpostscript_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpostscript_autocompletionwordseparators_isbase) {
            qscilexerpostscript_autocompletionwordseparators_isbase = false;
            return QsciLexerPostScript::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerpostscript_autocompletionwordseparators_callback;
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
        return QsciLexerPostScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpostscript_blockend_isbase) {
            qscilexerpostscript_blockend_isbase = false;
            return QsciLexerPostScript::blockEnd(style);
        }
        auto blockend_cb = qscilexerpostscript_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpostscript_blocklookback_isbase) {
            qscilexerpostscript_blocklookback_isbase = false;
            return QsciLexerPostScript::blockLookback();
        }
        auto blocklookback_cb = qscilexerpostscript_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpostscript_blockstart_isbase) {
            qscilexerpostscript_blockstart_isbase = false;
            return QsciLexerPostScript::blockStart(style);
        }
        auto blockstart_cb = qscilexerpostscript_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpostscript_blockstartkeyword_isbase) {
            qscilexerpostscript_blockstartkeyword_isbase = false;
            return QsciLexerPostScript::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerpostscript_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpostscript_bracestyle_isbase) {
            qscilexerpostscript_bracestyle_isbase = false;
            return QsciLexerPostScript::braceStyle();
        }
        auto bracestyle_cb = qscilexerpostscript_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpostscript_casesensitive_isbase) {
            qscilexerpostscript_casesensitive_isbase = false;
            return QsciLexerPostScript::caseSensitive();
        }
        auto casesensitive_cb = qscilexerpostscript_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpostscript_color_isbase) {
            qscilexerpostscript_color_isbase = false;
            return QsciLexerPostScript::color(style);
        }
        auto color_cb = qscilexerpostscript_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpostscript_eolfill_isbase) {
            qscilexerpostscript_eolfill_isbase = false;
            return QsciLexerPostScript::eolFill(style);
        }
        auto eolfill_cb = qscilexerpostscript_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpostscript_font_isbase) {
            qscilexerpostscript_font_isbase = false;
            return QsciLexerPostScript::font(style);
        }
        auto font_cb = qscilexerpostscript_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpostscript_indentationguideview_isbase) {
            qscilexerpostscript_indentationguideview_isbase = false;
            return QsciLexerPostScript::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerpostscript_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpostscript_keywords_isbase) {
            qscilexerpostscript_keywords_isbase = false;
            return QsciLexerPostScript::keywords(set);
        }
        auto keywords_cb = qscilexerpostscript_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpostscript_defaultstyle_isbase) {
            qscilexerpostscript_defaultstyle_isbase = false;
            return QsciLexerPostScript::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerpostscript_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerpostscript_description_callback;
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
        if (qscilexerpostscript_paper_isbase) {
            qscilexerpostscript_paper_isbase = false;
            return QsciLexerPostScript::paper(style);
        }
        auto paper_cb = qscilexerpostscript_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpostscript_defaultcolor2_isbase) {
            qscilexerpostscript_defaultcolor2_isbase = false;
            return QsciLexerPostScript::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerpostscript_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpostscript_defaulteolfill_isbase) {
            qscilexerpostscript_defaulteolfill_isbase = false;
            return QsciLexerPostScript::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerpostscript_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpostscript_defaultfont2_isbase) {
            qscilexerpostscript_defaultfont2_isbase = false;
            return QsciLexerPostScript::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerpostscript_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpostscript_defaultpaper2_isbase) {
            qscilexerpostscript_defaultpaper2_isbase = false;
            return QsciLexerPostScript::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerpostscript_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPostScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpostscript_seteditor_isbase) {
            qscilexerpostscript_seteditor_isbase = false;
            QsciLexerPostScript::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerpostscript_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpostscript_refreshproperties_isbase) {
            qscilexerpostscript_refreshproperties_isbase = false;
            QsciLexerPostScript::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerpostscript_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerPostScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpostscript_stylebitsneeded_isbase) {
            qscilexerpostscript_stylebitsneeded_isbase = false;
            return QsciLexerPostScript::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerpostscript_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpostscript_wordcharacters_isbase) {
            qscilexerpostscript_wordcharacters_isbase = false;
            return QsciLexerPostScript::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerpostscript_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpostscript_setautoindentstyle_isbase) {
            qscilexerpostscript_setautoindentstyle_isbase = false;
            QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerpostscript_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpostscript_setcolor_isbase) {
            qscilexerpostscript_setcolor_isbase = false;
            QsciLexerPostScript::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerpostscript_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpostscript_seteolfill_isbase) {
            qscilexerpostscript_seteolfill_isbase = false;
            QsciLexerPostScript::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerpostscript_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpostscript_setfont_isbase) {
            qscilexerpostscript_setfont_isbase = false;
            QsciLexerPostScript::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerpostscript_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpostscript_setpaper_isbase) {
            qscilexerpostscript_setpaper_isbase = false;
            QsciLexerPostScript::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerpostscript_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpostscript_readproperties_isbase) {
            qscilexerpostscript_readproperties_isbase = false;
            return QsciLexerPostScript::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerpostscript_readproperties_callback;
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
        return QsciLexerPostScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpostscript_writeproperties_isbase) {
            qscilexerpostscript_writeproperties_isbase = false;
            return QsciLexerPostScript::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerpostscript_writeproperties_callback;
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
        return QsciLexerPostScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpostscript_event_isbase) {
            qscilexerpostscript_event_isbase = false;
            return QsciLexerPostScript::event(event);
        }
        auto event_cb = qscilexerpostscript_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpostscript_eventfilter_isbase) {
            qscilexerpostscript_eventfilter_isbase = false;
            return QsciLexerPostScript::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerpostscript_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPostScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpostscript_timerevent_isbase) {
            qscilexerpostscript_timerevent_isbase = false;
            QsciLexerPostScript::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerpostscript_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpostscript_childevent_isbase) {
            qscilexerpostscript_childevent_isbase = false;
            QsciLexerPostScript::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerpostscript_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpostscript_customevent_isbase) {
            qscilexerpostscript_customevent_isbase = false;
            QsciLexerPostScript::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerpostscript_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_connectnotify_isbase) {
            qscilexerpostscript_connectnotify_isbase = false;
            QsciLexerPostScript::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerpostscript_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_disconnectnotify_isbase) {
            qscilexerpostscript_disconnectnotify_isbase = false;
            QsciLexerPostScript::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerpostscript_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPostScript::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerpostscript_textasbytes_isbase) {
            qscilexerpostscript_textasbytes_isbase = false;
            return QsciLexerPostScript::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerpostscript_textasbytes_callback;
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
        return QsciLexerPostScript::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerpostscript_bytesastext_isbase) {
            qscilexerpostscript_bytesastext_isbase = false;
            return QsciLexerPostScript::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerpostscript_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerPostScript::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpostscript_sender_isbase) {
            qscilexerpostscript_sender_isbase = false;
            return QsciLexerPostScript::sender();
        }
        auto sender_cb = qscilexerpostscript_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerPostScript::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpostscript_sendersignalindex_isbase) {
            qscilexerpostscript_sendersignalindex_isbase = false;
            return QsciLexerPostScript::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerpostscript_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpostscript_receivers_isbase) {
            qscilexerpostscript_receivers_isbase = false;
            return QsciLexerPostScript::receivers(signal);
        }
        auto receivers_cb = qscilexerpostscript_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpostscript_issignalconnected_isbase) {
            qscilexerpostscript_issignalconnected_isbase = false;
            return QsciLexerPostScript::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerpostscript_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPostScript_SuperReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPostScript_SuperWriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
    friend void QsciLexerPostScript_SuperTimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
    friend void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event);
    friend void QsciLexerPostScript_SuperChildEvent(QsciLexerPostScript* self, QChildEvent* event);
    friend void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event);
    friend void QsciLexerPostScript_SuperCustomEvent(QsciLexerPostScript* self, QEvent* event);
    friend void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
    friend void QsciLexerPostScript_SuperConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
    friend void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
    friend void QsciLexerPostScript_SuperDisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerPostScript_TextAsBytes(const QsciLexerPostScript* self, const libqt_string text);
    friend libqt_string QsciLexerPostScript_SuperTextAsBytes(const QsciLexerPostScript* self, const libqt_string text);
    friend libqt_string QsciLexerPostScript_BytesAsText(const QsciLexerPostScript* self, const char* bytes, int size);
    friend libqt_string QsciLexerPostScript_SuperBytesAsText(const QsciLexerPostScript* self, const char* bytes, int size);
    friend QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self);
    friend QObject* QsciLexerPostScript_SuperSender(const QsciLexerPostScript* self);
    friend int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self);
    friend int QsciLexerPostScript_SuperSenderSignalIndex(const QsciLexerPostScript* self);
    friend int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal);
    friend int QsciLexerPostScript_SuperReceivers(const QsciLexerPostScript* self, const char* signal);
    friend bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal);
    friend bool QsciLexerPostScript_SuperIsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal);
};

#endif
