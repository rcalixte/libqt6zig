#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCPP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCPP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCPP so that we can call protected methods
class VirtualQsciLexerCPP final : public QsciLexerCPP {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCPP = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCPP_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerCPP_Metacast_Callback = void* (*)(QsciLexerCPP*, const char*);
    using QsciLexerCPP_Metacall_Callback = int (*)(QsciLexerCPP*, int, int, void**);
    using QsciLexerCPP_SetFoldAtElse_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldComments_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldCompact_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldPreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetStylePreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_Language_Callback = const char* (*)();
    using QsciLexerCPP_Lexer_Callback = const char* (*)();
    using QsciLexerCPP_LexerId_Callback = int (*)();
    using QsciLexerCPP_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCPP_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerCPP_BlockEnd_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockLookback_Callback = int (*)();
    using QsciLexerCPP_BlockStart_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BraceStyle_Callback = int (*)();
    using QsciLexerCPP_CaseSensitive_Callback = bool (*)();
    using QsciLexerCPP_Color_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_EolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Font_Callback = QFont* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_IndentationGuideView_Callback = int (*)();
    using QsciLexerCPP_Keywords_Callback = const char* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultStyle_Callback = int (*)();
    using QsciLexerCPP_Description_Callback = const char* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Paper_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultColor2_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultEolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultFont2_Callback = QFont* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_SetEditor_Callback = void (*)(QsciLexerCPP*, QsciScintilla*);
    using QsciLexerCPP_RefreshProperties_Callback = void (*)();
    using QsciLexerCPP_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCPP_WordCharacters_Callback = const char* (*)();
    using QsciLexerCPP_SetAutoIndentStyle_Callback = void (*)(QsciLexerCPP*, int);
    using QsciLexerCPP_SetColor_Callback = void (*)(QsciLexerCPP*, QColor*, int);
    using QsciLexerCPP_SetEolFill_Callback = void (*)(QsciLexerCPP*, bool, int);
    using QsciLexerCPP_SetFont_Callback = void (*)(QsciLexerCPP*, QFont*, int);
    using QsciLexerCPP_SetPaper_Callback = void (*)(QsciLexerCPP*, QColor*, int);
    using QsciLexerCPP_ReadProperties_Callback = bool (*)(QsciLexerCPP*, QSettings*, const char*);
    using QsciLexerCPP_WriteProperties_Callback = bool (*)(const QsciLexerCPP*, QSettings*, const char*);
    using QsciLexerCPP_Event_Callback = bool (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_EventFilter_Callback = bool (*)(QsciLexerCPP*, QObject*, QEvent*);
    using QsciLexerCPP_TimerEvent_Callback = void (*)(QsciLexerCPP*, QTimerEvent*);
    using QsciLexerCPP_ChildEvent_Callback = void (*)(QsciLexerCPP*, QChildEvent*);
    using QsciLexerCPP_CustomEvent_Callback = void (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_ConnectNotify_Callback = void (*)(QsciLexerCPP*, QMetaMethod*);
    using QsciLexerCPP_DisconnectNotify_Callback = void (*)(QsciLexerCPP*, QMetaMethod*);
    using QsciLexerCPP_TextAsBytes_Callback = libqt_string (*)(const QsciLexerCPP*, const char*);
    using QsciLexerCPP_BytesAsText_Callback = const char* (*)(const QsciLexerCPP*, const char*, int);
    using QsciLexerCPP_Sender_Callback = QObject* (*)();
    using QsciLexerCPP_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCPP_Receivers_Callback = int (*)(const QsciLexerCPP*, const char*);
    using QsciLexerCPP_IsSignalConnected_Callback = bool (*)(const QsciLexerCPP*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCPP_MetaObject_Callback qscilexercpp_metaobject_callback = nullptr;
    QsciLexerCPP_Metacast_Callback qscilexercpp_metacast_callback = nullptr;
    QsciLexerCPP_Metacall_Callback qscilexercpp_metacall_callback = nullptr;
    QsciLexerCPP_SetFoldAtElse_Callback qscilexercpp_setfoldatelse_callback = nullptr;
    QsciLexerCPP_SetFoldComments_Callback qscilexercpp_setfoldcomments_callback = nullptr;
    QsciLexerCPP_SetFoldCompact_Callback qscilexercpp_setfoldcompact_callback = nullptr;
    QsciLexerCPP_SetFoldPreprocessor_Callback qscilexercpp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCPP_SetStylePreprocessor_Callback qscilexercpp_setstylepreprocessor_callback = nullptr;
    QsciLexerCPP_Language_Callback qscilexercpp_language_callback = nullptr;
    QsciLexerCPP_Lexer_Callback qscilexercpp_lexer_callback = nullptr;
    QsciLexerCPP_LexerId_Callback qscilexercpp_lexerid_callback = nullptr;
    QsciLexerCPP_AutoCompletionFillups_Callback qscilexercpp_autocompletionfillups_callback = nullptr;
    QsciLexerCPP_AutoCompletionWordSeparators_Callback qscilexercpp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCPP_BlockEnd_Callback qscilexercpp_blockend_callback = nullptr;
    QsciLexerCPP_BlockLookback_Callback qscilexercpp_blocklookback_callback = nullptr;
    QsciLexerCPP_BlockStart_Callback qscilexercpp_blockstart_callback = nullptr;
    QsciLexerCPP_BlockStartKeyword_Callback qscilexercpp_blockstartkeyword_callback = nullptr;
    QsciLexerCPP_BraceStyle_Callback qscilexercpp_bracestyle_callback = nullptr;
    QsciLexerCPP_CaseSensitive_Callback qscilexercpp_casesensitive_callback = nullptr;
    QsciLexerCPP_Color_Callback qscilexercpp_color_callback = nullptr;
    QsciLexerCPP_EolFill_Callback qscilexercpp_eolfill_callback = nullptr;
    QsciLexerCPP_Font_Callback qscilexercpp_font_callback = nullptr;
    QsciLexerCPP_IndentationGuideView_Callback qscilexercpp_indentationguideview_callback = nullptr;
    QsciLexerCPP_Keywords_Callback qscilexercpp_keywords_callback = nullptr;
    QsciLexerCPP_DefaultStyle_Callback qscilexercpp_defaultstyle_callback = nullptr;
    QsciLexerCPP_Description_Callback qscilexercpp_description_callback = nullptr;
    QsciLexerCPP_Paper_Callback qscilexercpp_paper_callback = nullptr;
    QsciLexerCPP_DefaultColor2_Callback qscilexercpp_defaultcolor2_callback = nullptr;
    QsciLexerCPP_DefaultEolFill_Callback qscilexercpp_defaulteolfill_callback = nullptr;
    QsciLexerCPP_DefaultFont2_Callback qscilexercpp_defaultfont2_callback = nullptr;
    QsciLexerCPP_DefaultPaper2_Callback qscilexercpp_defaultpaper2_callback = nullptr;
    QsciLexerCPP_SetEditor_Callback qscilexercpp_seteditor_callback = nullptr;
    QsciLexerCPP_RefreshProperties_Callback qscilexercpp_refreshproperties_callback = nullptr;
    QsciLexerCPP_StyleBitsNeeded_Callback qscilexercpp_stylebitsneeded_callback = nullptr;
    QsciLexerCPP_WordCharacters_Callback qscilexercpp_wordcharacters_callback = nullptr;
    QsciLexerCPP_SetAutoIndentStyle_Callback qscilexercpp_setautoindentstyle_callback = nullptr;
    QsciLexerCPP_SetColor_Callback qscilexercpp_setcolor_callback = nullptr;
    QsciLexerCPP_SetEolFill_Callback qscilexercpp_seteolfill_callback = nullptr;
    QsciLexerCPP_SetFont_Callback qscilexercpp_setfont_callback = nullptr;
    QsciLexerCPP_SetPaper_Callback qscilexercpp_setpaper_callback = nullptr;
    QsciLexerCPP_ReadProperties_Callback qscilexercpp_readproperties_callback = nullptr;
    QsciLexerCPP_WriteProperties_Callback qscilexercpp_writeproperties_callback = nullptr;
    QsciLexerCPP_Event_Callback qscilexercpp_event_callback = nullptr;
    QsciLexerCPP_EventFilter_Callback qscilexercpp_eventfilter_callback = nullptr;
    QsciLexerCPP_TimerEvent_Callback qscilexercpp_timerevent_callback = nullptr;
    QsciLexerCPP_ChildEvent_Callback qscilexercpp_childevent_callback = nullptr;
    QsciLexerCPP_CustomEvent_Callback qscilexercpp_customevent_callback = nullptr;
    QsciLexerCPP_ConnectNotify_Callback qscilexercpp_connectnotify_callback = nullptr;
    QsciLexerCPP_DisconnectNotify_Callback qscilexercpp_disconnectnotify_callback = nullptr;
    QsciLexerCPP_TextAsBytes_Callback qscilexercpp_textasbytes_callback = nullptr;
    QsciLexerCPP_BytesAsText_Callback qscilexercpp_bytesastext_callback = nullptr;
    QsciLexerCPP_Sender_Callback qscilexercpp_sender_callback = nullptr;
    QsciLexerCPP_SenderSignalIndex_Callback qscilexercpp_sendersignalindex_callback = nullptr;
    QsciLexerCPP_Receivers_Callback qscilexercpp_receivers_callback = nullptr;
    QsciLexerCPP_IsSignalConnected_Callback qscilexercpp_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercpp_metaobject_isbase = false;
    mutable bool qscilexercpp_metacast_isbase = false;
    mutable bool qscilexercpp_metacall_isbase = false;
    mutable bool qscilexercpp_setfoldatelse_isbase = false;
    mutable bool qscilexercpp_setfoldcomments_isbase = false;
    mutable bool qscilexercpp_setfoldcompact_isbase = false;
    mutable bool qscilexercpp_setfoldpreprocessor_isbase = false;
    mutable bool qscilexercpp_setstylepreprocessor_isbase = false;
    mutable bool qscilexercpp_language_isbase = false;
    mutable bool qscilexercpp_lexer_isbase = false;
    mutable bool qscilexercpp_lexerid_isbase = false;
    mutable bool qscilexercpp_autocompletionfillups_isbase = false;
    mutable bool qscilexercpp_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercpp_blockend_isbase = false;
    mutable bool qscilexercpp_blocklookback_isbase = false;
    mutable bool qscilexercpp_blockstart_isbase = false;
    mutable bool qscilexercpp_blockstartkeyword_isbase = false;
    mutable bool qscilexercpp_bracestyle_isbase = false;
    mutable bool qscilexercpp_casesensitive_isbase = false;
    mutable bool qscilexercpp_color_isbase = false;
    mutable bool qscilexercpp_eolfill_isbase = false;
    mutable bool qscilexercpp_font_isbase = false;
    mutable bool qscilexercpp_indentationguideview_isbase = false;
    mutable bool qscilexercpp_keywords_isbase = false;
    mutable bool qscilexercpp_defaultstyle_isbase = false;
    mutable bool qscilexercpp_description_isbase = false;
    mutable bool qscilexercpp_paper_isbase = false;
    mutable bool qscilexercpp_defaultcolor2_isbase = false;
    mutable bool qscilexercpp_defaulteolfill_isbase = false;
    mutable bool qscilexercpp_defaultfont2_isbase = false;
    mutable bool qscilexercpp_defaultpaper2_isbase = false;
    mutable bool qscilexercpp_seteditor_isbase = false;
    mutable bool qscilexercpp_refreshproperties_isbase = false;
    mutable bool qscilexercpp_stylebitsneeded_isbase = false;
    mutable bool qscilexercpp_wordcharacters_isbase = false;
    mutable bool qscilexercpp_setautoindentstyle_isbase = false;
    mutable bool qscilexercpp_setcolor_isbase = false;
    mutable bool qscilexercpp_seteolfill_isbase = false;
    mutable bool qscilexercpp_setfont_isbase = false;
    mutable bool qscilexercpp_setpaper_isbase = false;
    mutable bool qscilexercpp_readproperties_isbase = false;
    mutable bool qscilexercpp_writeproperties_isbase = false;
    mutable bool qscilexercpp_event_isbase = false;
    mutable bool qscilexercpp_eventfilter_isbase = false;
    mutable bool qscilexercpp_timerevent_isbase = false;
    mutable bool qscilexercpp_childevent_isbase = false;
    mutable bool qscilexercpp_customevent_isbase = false;
    mutable bool qscilexercpp_connectnotify_isbase = false;
    mutable bool qscilexercpp_disconnectnotify_isbase = false;
    mutable bool qscilexercpp_textasbytes_isbase = false;
    mutable bool qscilexercpp_bytesastext_isbase = false;
    mutable bool qscilexercpp_sender_isbase = false;
    mutable bool qscilexercpp_sendersignalindex_isbase = false;
    mutable bool qscilexercpp_receivers_isbase = false;
    mutable bool qscilexercpp_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCPP() : QsciLexerCPP() {};
    VirtualQsciLexerCPP(QObject* parent) : QsciLexerCPP(parent) {};
    VirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords) : QsciLexerCPP(parent, caseInsensitiveKeywords) {};

    // Callback setters
    inline void setQsciLexerCPP_MetaObject_Callback(QsciLexerCPP_MetaObject_Callback cb) { qscilexercpp_metaobject_callback = cb; }
    inline void setQsciLexerCPP_Metacast_Callback(QsciLexerCPP_Metacast_Callback cb) { qscilexercpp_metacast_callback = cb; }
    inline void setQsciLexerCPP_Metacall_Callback(QsciLexerCPP_Metacall_Callback cb) { qscilexercpp_metacall_callback = cb; }
    inline void setQsciLexerCPP_SetFoldAtElse_Callback(QsciLexerCPP_SetFoldAtElse_Callback cb) { qscilexercpp_setfoldatelse_callback = cb; }
    inline void setQsciLexerCPP_SetFoldComments_Callback(QsciLexerCPP_SetFoldComments_Callback cb) { qscilexercpp_setfoldcomments_callback = cb; }
    inline void setQsciLexerCPP_SetFoldCompact_Callback(QsciLexerCPP_SetFoldCompact_Callback cb) { qscilexercpp_setfoldcompact_callback = cb; }
    inline void setQsciLexerCPP_SetFoldPreprocessor_Callback(QsciLexerCPP_SetFoldPreprocessor_Callback cb) { qscilexercpp_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerCPP_SetStylePreprocessor_Callback(QsciLexerCPP_SetStylePreprocessor_Callback cb) { qscilexercpp_setstylepreprocessor_callback = cb; }
    inline void setQsciLexerCPP_Language_Callback(QsciLexerCPP_Language_Callback cb) { qscilexercpp_language_callback = cb; }
    inline void setQsciLexerCPP_Lexer_Callback(QsciLexerCPP_Lexer_Callback cb) { qscilexercpp_lexer_callback = cb; }
    inline void setQsciLexerCPP_LexerId_Callback(QsciLexerCPP_LexerId_Callback cb) { qscilexercpp_lexerid_callback = cb; }
    inline void setQsciLexerCPP_AutoCompletionFillups_Callback(QsciLexerCPP_AutoCompletionFillups_Callback cb) { qscilexercpp_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCPP_AutoCompletionWordSeparators_Callback(QsciLexerCPP_AutoCompletionWordSeparators_Callback cb) { qscilexercpp_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCPP_BlockEnd_Callback(QsciLexerCPP_BlockEnd_Callback cb) { qscilexercpp_blockend_callback = cb; }
    inline void setQsciLexerCPP_BlockLookback_Callback(QsciLexerCPP_BlockLookback_Callback cb) { qscilexercpp_blocklookback_callback = cb; }
    inline void setQsciLexerCPP_BlockStart_Callback(QsciLexerCPP_BlockStart_Callback cb) { qscilexercpp_blockstart_callback = cb; }
    inline void setQsciLexerCPP_BlockStartKeyword_Callback(QsciLexerCPP_BlockStartKeyword_Callback cb) { qscilexercpp_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCPP_BraceStyle_Callback(QsciLexerCPP_BraceStyle_Callback cb) { qscilexercpp_bracestyle_callback = cb; }
    inline void setQsciLexerCPP_CaseSensitive_Callback(QsciLexerCPP_CaseSensitive_Callback cb) { qscilexercpp_casesensitive_callback = cb; }
    inline void setQsciLexerCPP_Color_Callback(QsciLexerCPP_Color_Callback cb) { qscilexercpp_color_callback = cb; }
    inline void setQsciLexerCPP_EolFill_Callback(QsciLexerCPP_EolFill_Callback cb) { qscilexercpp_eolfill_callback = cb; }
    inline void setQsciLexerCPP_Font_Callback(QsciLexerCPP_Font_Callback cb) { qscilexercpp_font_callback = cb; }
    inline void setQsciLexerCPP_IndentationGuideView_Callback(QsciLexerCPP_IndentationGuideView_Callback cb) { qscilexercpp_indentationguideview_callback = cb; }
    inline void setQsciLexerCPP_Keywords_Callback(QsciLexerCPP_Keywords_Callback cb) { qscilexercpp_keywords_callback = cb; }
    inline void setQsciLexerCPP_DefaultStyle_Callback(QsciLexerCPP_DefaultStyle_Callback cb) { qscilexercpp_defaultstyle_callback = cb; }
    inline void setQsciLexerCPP_Description_Callback(QsciLexerCPP_Description_Callback cb) { qscilexercpp_description_callback = cb; }
    inline void setQsciLexerCPP_Paper_Callback(QsciLexerCPP_Paper_Callback cb) { qscilexercpp_paper_callback = cb; }
    inline void setQsciLexerCPP_DefaultColor2_Callback(QsciLexerCPP_DefaultColor2_Callback cb) { qscilexercpp_defaultcolor2_callback = cb; }
    inline void setQsciLexerCPP_DefaultEolFill_Callback(QsciLexerCPP_DefaultEolFill_Callback cb) { qscilexercpp_defaulteolfill_callback = cb; }
    inline void setQsciLexerCPP_DefaultFont2_Callback(QsciLexerCPP_DefaultFont2_Callback cb) { qscilexercpp_defaultfont2_callback = cb; }
    inline void setQsciLexerCPP_DefaultPaper2_Callback(QsciLexerCPP_DefaultPaper2_Callback cb) { qscilexercpp_defaultpaper2_callback = cb; }
    inline void setQsciLexerCPP_SetEditor_Callback(QsciLexerCPP_SetEditor_Callback cb) { qscilexercpp_seteditor_callback = cb; }
    inline void setQsciLexerCPP_RefreshProperties_Callback(QsciLexerCPP_RefreshProperties_Callback cb) { qscilexercpp_refreshproperties_callback = cb; }
    inline void setQsciLexerCPP_StyleBitsNeeded_Callback(QsciLexerCPP_StyleBitsNeeded_Callback cb) { qscilexercpp_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCPP_WordCharacters_Callback(QsciLexerCPP_WordCharacters_Callback cb) { qscilexercpp_wordcharacters_callback = cb; }
    inline void setQsciLexerCPP_SetAutoIndentStyle_Callback(QsciLexerCPP_SetAutoIndentStyle_Callback cb) { qscilexercpp_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCPP_SetColor_Callback(QsciLexerCPP_SetColor_Callback cb) { qscilexercpp_setcolor_callback = cb; }
    inline void setQsciLexerCPP_SetEolFill_Callback(QsciLexerCPP_SetEolFill_Callback cb) { qscilexercpp_seteolfill_callback = cb; }
    inline void setQsciLexerCPP_SetFont_Callback(QsciLexerCPP_SetFont_Callback cb) { qscilexercpp_setfont_callback = cb; }
    inline void setQsciLexerCPP_SetPaper_Callback(QsciLexerCPP_SetPaper_Callback cb) { qscilexercpp_setpaper_callback = cb; }
    inline void setQsciLexerCPP_ReadProperties_Callback(QsciLexerCPP_ReadProperties_Callback cb) { qscilexercpp_readproperties_callback = cb; }
    inline void setQsciLexerCPP_WriteProperties_Callback(QsciLexerCPP_WriteProperties_Callback cb) { qscilexercpp_writeproperties_callback = cb; }
    inline void setQsciLexerCPP_Event_Callback(QsciLexerCPP_Event_Callback cb) { qscilexercpp_event_callback = cb; }
    inline void setQsciLexerCPP_EventFilter_Callback(QsciLexerCPP_EventFilter_Callback cb) { qscilexercpp_eventfilter_callback = cb; }
    inline void setQsciLexerCPP_TimerEvent_Callback(QsciLexerCPP_TimerEvent_Callback cb) { qscilexercpp_timerevent_callback = cb; }
    inline void setQsciLexerCPP_ChildEvent_Callback(QsciLexerCPP_ChildEvent_Callback cb) { qscilexercpp_childevent_callback = cb; }
    inline void setQsciLexerCPP_CustomEvent_Callback(QsciLexerCPP_CustomEvent_Callback cb) { qscilexercpp_customevent_callback = cb; }
    inline void setQsciLexerCPP_ConnectNotify_Callback(QsciLexerCPP_ConnectNotify_Callback cb) { qscilexercpp_connectnotify_callback = cb; }
    inline void setQsciLexerCPP_DisconnectNotify_Callback(QsciLexerCPP_DisconnectNotify_Callback cb) { qscilexercpp_disconnectnotify_callback = cb; }
    inline void setQsciLexerCPP_TextAsBytes_Callback(QsciLexerCPP_TextAsBytes_Callback cb) { qscilexercpp_textasbytes_callback = cb; }
    inline void setQsciLexerCPP_BytesAsText_Callback(QsciLexerCPP_BytesAsText_Callback cb) { qscilexercpp_bytesastext_callback = cb; }
    inline void setQsciLexerCPP_Sender_Callback(QsciLexerCPP_Sender_Callback cb) { qscilexercpp_sender_callback = cb; }
    inline void setQsciLexerCPP_SenderSignalIndex_Callback(QsciLexerCPP_SenderSignalIndex_Callback cb) { qscilexercpp_sendersignalindex_callback = cb; }
    inline void setQsciLexerCPP_Receivers_Callback(QsciLexerCPP_Receivers_Callback cb) { qscilexercpp_receivers_callback = cb; }
    inline void setQsciLexerCPP_IsSignalConnected_Callback(QsciLexerCPP_IsSignalConnected_Callback cb) { qscilexercpp_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCPP_MetaObject_IsBase(bool value) const { qscilexercpp_metaobject_isbase = value; }
    inline void setQsciLexerCPP_Metacast_IsBase(bool value) const { qscilexercpp_metacast_isbase = value; }
    inline void setQsciLexerCPP_Metacall_IsBase(bool value) const { qscilexercpp_metacall_isbase = value; }
    inline void setQsciLexerCPP_SetFoldAtElse_IsBase(bool value) const { qscilexercpp_setfoldatelse_isbase = value; }
    inline void setQsciLexerCPP_SetFoldComments_IsBase(bool value) const { qscilexercpp_setfoldcomments_isbase = value; }
    inline void setQsciLexerCPP_SetFoldCompact_IsBase(bool value) const { qscilexercpp_setfoldcompact_isbase = value; }
    inline void setQsciLexerCPP_SetFoldPreprocessor_IsBase(bool value) const { qscilexercpp_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerCPP_SetStylePreprocessor_IsBase(bool value) const { qscilexercpp_setstylepreprocessor_isbase = value; }
    inline void setQsciLexerCPP_Language_IsBase(bool value) const { qscilexercpp_language_isbase = value; }
    inline void setQsciLexerCPP_Lexer_IsBase(bool value) const { qscilexercpp_lexer_isbase = value; }
    inline void setQsciLexerCPP_LexerId_IsBase(bool value) const { qscilexercpp_lexerid_isbase = value; }
    inline void setQsciLexerCPP_AutoCompletionFillups_IsBase(bool value) const { qscilexercpp_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCPP_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercpp_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCPP_BlockEnd_IsBase(bool value) const { qscilexercpp_blockend_isbase = value; }
    inline void setQsciLexerCPP_BlockLookback_IsBase(bool value) const { qscilexercpp_blocklookback_isbase = value; }
    inline void setQsciLexerCPP_BlockStart_IsBase(bool value) const { qscilexercpp_blockstart_isbase = value; }
    inline void setQsciLexerCPP_BlockStartKeyword_IsBase(bool value) const { qscilexercpp_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCPP_BraceStyle_IsBase(bool value) const { qscilexercpp_bracestyle_isbase = value; }
    inline void setQsciLexerCPP_CaseSensitive_IsBase(bool value) const { qscilexercpp_casesensitive_isbase = value; }
    inline void setQsciLexerCPP_Color_IsBase(bool value) const { qscilexercpp_color_isbase = value; }
    inline void setQsciLexerCPP_EolFill_IsBase(bool value) const { qscilexercpp_eolfill_isbase = value; }
    inline void setQsciLexerCPP_Font_IsBase(bool value) const { qscilexercpp_font_isbase = value; }
    inline void setQsciLexerCPP_IndentationGuideView_IsBase(bool value) const { qscilexercpp_indentationguideview_isbase = value; }
    inline void setQsciLexerCPP_Keywords_IsBase(bool value) const { qscilexercpp_keywords_isbase = value; }
    inline void setQsciLexerCPP_DefaultStyle_IsBase(bool value) const { qscilexercpp_defaultstyle_isbase = value; }
    inline void setQsciLexerCPP_Description_IsBase(bool value) const { qscilexercpp_description_isbase = value; }
    inline void setQsciLexerCPP_Paper_IsBase(bool value) const { qscilexercpp_paper_isbase = value; }
    inline void setQsciLexerCPP_DefaultColor2_IsBase(bool value) const { qscilexercpp_defaultcolor2_isbase = value; }
    inline void setQsciLexerCPP_DefaultEolFill_IsBase(bool value) const { qscilexercpp_defaulteolfill_isbase = value; }
    inline void setQsciLexerCPP_DefaultFont2_IsBase(bool value) const { qscilexercpp_defaultfont2_isbase = value; }
    inline void setQsciLexerCPP_DefaultPaper2_IsBase(bool value) const { qscilexercpp_defaultpaper2_isbase = value; }
    inline void setQsciLexerCPP_SetEditor_IsBase(bool value) const { qscilexercpp_seteditor_isbase = value; }
    inline void setQsciLexerCPP_RefreshProperties_IsBase(bool value) const { qscilexercpp_refreshproperties_isbase = value; }
    inline void setQsciLexerCPP_StyleBitsNeeded_IsBase(bool value) const { qscilexercpp_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCPP_WordCharacters_IsBase(bool value) const { qscilexercpp_wordcharacters_isbase = value; }
    inline void setQsciLexerCPP_SetAutoIndentStyle_IsBase(bool value) const { qscilexercpp_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCPP_SetColor_IsBase(bool value) const { qscilexercpp_setcolor_isbase = value; }
    inline void setQsciLexerCPP_SetEolFill_IsBase(bool value) const { qscilexercpp_seteolfill_isbase = value; }
    inline void setQsciLexerCPP_SetFont_IsBase(bool value) const { qscilexercpp_setfont_isbase = value; }
    inline void setQsciLexerCPP_SetPaper_IsBase(bool value) const { qscilexercpp_setpaper_isbase = value; }
    inline void setQsciLexerCPP_ReadProperties_IsBase(bool value) const { qscilexercpp_readproperties_isbase = value; }
    inline void setQsciLexerCPP_WriteProperties_IsBase(bool value) const { qscilexercpp_writeproperties_isbase = value; }
    inline void setQsciLexerCPP_Event_IsBase(bool value) const { qscilexercpp_event_isbase = value; }
    inline void setQsciLexerCPP_EventFilter_IsBase(bool value) const { qscilexercpp_eventfilter_isbase = value; }
    inline void setQsciLexerCPP_TimerEvent_IsBase(bool value) const { qscilexercpp_timerevent_isbase = value; }
    inline void setQsciLexerCPP_ChildEvent_IsBase(bool value) const { qscilexercpp_childevent_isbase = value; }
    inline void setQsciLexerCPP_CustomEvent_IsBase(bool value) const { qscilexercpp_customevent_isbase = value; }
    inline void setQsciLexerCPP_ConnectNotify_IsBase(bool value) const { qscilexercpp_connectnotify_isbase = value; }
    inline void setQsciLexerCPP_DisconnectNotify_IsBase(bool value) const { qscilexercpp_disconnectnotify_isbase = value; }
    inline void setQsciLexerCPP_TextAsBytes_IsBase(bool value) const { qscilexercpp_textasbytes_isbase = value; }
    inline void setQsciLexerCPP_BytesAsText_IsBase(bool value) const { qscilexercpp_bytesastext_isbase = value; }
    inline void setQsciLexerCPP_Sender_IsBase(bool value) const { qscilexercpp_sender_isbase = value; }
    inline void setQsciLexerCPP_SenderSignalIndex_IsBase(bool value) const { qscilexercpp_sendersignalindex_isbase = value; }
    inline void setQsciLexerCPP_Receivers_IsBase(bool value) const { qscilexercpp_receivers_isbase = value; }
    inline void setQsciLexerCPP_IsSignalConnected_IsBase(bool value) const { qscilexercpp_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercpp_metaobject_isbase) {
            qscilexercpp_metaobject_isbase = false;
            return QsciLexerCPP::metaObject();
        }
        auto metaobject_cb = qscilexercpp_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerCPP::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercpp_metacast_isbase) {
            qscilexercpp_metacast_isbase = false;
            return QsciLexerCPP::qt_metacast(param1);
        }
        auto metacast_cb = qscilexercpp_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercpp_metacall_isbase) {
            qscilexercpp_metacall_isbase = false;
            return QsciLexerCPP::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexercpp_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercpp_setfoldatelse_isbase) {
            qscilexercpp_setfoldatelse_isbase = false;
            QsciLexerCPP::setFoldAtElse(fold);
            return;
        }
        auto setfoldatelse_cb = qscilexercpp_setfoldatelse_callback;
        if (setfoldatelse_cb) {
            bool cbval1 = fold;

            setfoldatelse_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercpp_setfoldcomments_isbase) {
            qscilexercpp_setfoldcomments_isbase = false;
            QsciLexerCPP::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexercpp_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercpp_setfoldcompact_isbase) {
            qscilexercpp_setfoldcompact_isbase = false;
            QsciLexerCPP::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexercpp_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercpp_setfoldpreprocessor_isbase) {
            qscilexercpp_setfoldpreprocessor_isbase = false;
            QsciLexerCPP::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexercpp_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercpp_setstylepreprocessor_isbase) {
            qscilexercpp_setstylepreprocessor_isbase = false;
            QsciLexerCPP::setStylePreprocessor(style);
            return;
        }
        auto setstylepreprocessor_cb = qscilexercpp_setstylepreprocessor_callback;
        if (setstylepreprocessor_cb) {
            bool cbval1 = style;

            setstylepreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexercpp_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercpp_lexer_isbase) {
            qscilexercpp_lexer_isbase = false;
            return QsciLexerCPP::lexer();
        }
        auto lexer_cb = qscilexercpp_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerCPP::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercpp_lexerid_isbase) {
            qscilexercpp_lexerid_isbase = false;
            return QsciLexerCPP::lexerId();
        }
        auto lexerid_cb = qscilexercpp_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercpp_autocompletionfillups_isbase) {
            qscilexercpp_autocompletionfillups_isbase = false;
            return QsciLexerCPP::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexercpp_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerCPP::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercpp_autocompletionwordseparators_isbase) {
            qscilexercpp_autocompletionwordseparators_isbase = false;
            return QsciLexerCPP::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexercpp_autocompletionwordseparators_callback;
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
        return QsciLexerCPP::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercpp_blockend_isbase) {
            qscilexercpp_blockend_isbase = false;
            return QsciLexerCPP::blockEnd(style);
        }
        auto blockend_cb = qscilexercpp_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercpp_blocklookback_isbase) {
            qscilexercpp_blocklookback_isbase = false;
            return QsciLexerCPP::blockLookback();
        }
        auto blocklookback_cb = qscilexercpp_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercpp_blockstart_isbase) {
            qscilexercpp_blockstart_isbase = false;
            return QsciLexerCPP::blockStart(style);
        }
        auto blockstart_cb = qscilexercpp_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercpp_blockstartkeyword_isbase) {
            qscilexercpp_blockstartkeyword_isbase = false;
            return QsciLexerCPP::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexercpp_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercpp_bracestyle_isbase) {
            qscilexercpp_bracestyle_isbase = false;
            return QsciLexerCPP::braceStyle();
        }
        auto bracestyle_cb = qscilexercpp_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercpp_casesensitive_isbase) {
            qscilexercpp_casesensitive_isbase = false;
            return QsciLexerCPP::caseSensitive();
        }
        auto casesensitive_cb = qscilexercpp_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerCPP::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercpp_color_isbase) {
            qscilexercpp_color_isbase = false;
            return QsciLexerCPP::color(style);
        }
        auto color_cb = qscilexercpp_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercpp_eolfill_isbase) {
            qscilexercpp_eolfill_isbase = false;
            return QsciLexerCPP::eolFill(style);
        }
        auto eolfill_cb = qscilexercpp_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercpp_font_isbase) {
            qscilexercpp_font_isbase = false;
            return QsciLexerCPP::font(style);
        }
        auto font_cb = qscilexercpp_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercpp_indentationguideview_isbase) {
            qscilexercpp_indentationguideview_isbase = false;
            return QsciLexerCPP::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexercpp_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercpp_keywords_isbase) {
            qscilexercpp_keywords_isbase = false;
            return QsciLexerCPP::keywords(set);
        }
        auto keywords_cb = qscilexercpp_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercpp_defaultstyle_isbase) {
            qscilexercpp_defaultstyle_isbase = false;
            return QsciLexerCPP::defaultStyle();
        }
        auto defaultstyle_cb = qscilexercpp_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexercpp_description_callback;
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
        if (qscilexercpp_paper_isbase) {
            qscilexercpp_paper_isbase = false;
            return QsciLexerCPP::paper(style);
        }
        auto paper_cb = qscilexercpp_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercpp_defaultcolor2_isbase) {
            qscilexercpp_defaultcolor2_isbase = false;
            return QsciLexerCPP::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexercpp_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercpp_defaulteolfill_isbase) {
            qscilexercpp_defaulteolfill_isbase = false;
            return QsciLexerCPP::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexercpp_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercpp_defaultfont2_isbase) {
            qscilexercpp_defaultfont2_isbase = false;
            return QsciLexerCPP::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexercpp_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercpp_defaultpaper2_isbase) {
            qscilexercpp_defaultpaper2_isbase = false;
            return QsciLexerCPP::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexercpp_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCPP::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercpp_seteditor_isbase) {
            qscilexercpp_seteditor_isbase = false;
            QsciLexerCPP::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexercpp_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercpp_refreshproperties_isbase) {
            qscilexercpp_refreshproperties_isbase = false;
            QsciLexerCPP::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexercpp_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerCPP::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercpp_stylebitsneeded_isbase) {
            qscilexercpp_stylebitsneeded_isbase = false;
            return QsciLexerCPP::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexercpp_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercpp_wordcharacters_isbase) {
            qscilexercpp_wordcharacters_isbase = false;
            return QsciLexerCPP::wordCharacters();
        }
        auto wordcharacters_cb = qscilexercpp_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerCPP::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercpp_setautoindentstyle_isbase) {
            qscilexercpp_setautoindentstyle_isbase = false;
            QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexercpp_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercpp_setcolor_isbase) {
            qscilexercpp_setcolor_isbase = false;
            QsciLexerCPP::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexercpp_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercpp_seteolfill_isbase) {
            qscilexercpp_seteolfill_isbase = false;
            QsciLexerCPP::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexercpp_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercpp_setfont_isbase) {
            qscilexercpp_setfont_isbase = false;
            QsciLexerCPP::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexercpp_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercpp_setpaper_isbase) {
            qscilexercpp_setpaper_isbase = false;
            QsciLexerCPP::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexercpp_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercpp_readproperties_isbase) {
            qscilexercpp_readproperties_isbase = false;
            return QsciLexerCPP::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexercpp_readproperties_callback;
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
        return QsciLexerCPP::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercpp_writeproperties_isbase) {
            qscilexercpp_writeproperties_isbase = false;
            return QsciLexerCPP::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexercpp_writeproperties_callback;
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
        return QsciLexerCPP::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercpp_event_isbase) {
            qscilexercpp_event_isbase = false;
            return QsciLexerCPP::event(event);
        }
        auto event_cb = qscilexercpp_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercpp_eventfilter_isbase) {
            qscilexercpp_eventfilter_isbase = false;
            return QsciLexerCPP::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexercpp_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCPP::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercpp_timerevent_isbase) {
            qscilexercpp_timerevent_isbase = false;
            QsciLexerCPP::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexercpp_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercpp_childevent_isbase) {
            qscilexercpp_childevent_isbase = false;
            QsciLexerCPP::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexercpp_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercpp_customevent_isbase) {
            qscilexercpp_customevent_isbase = false;
            QsciLexerCPP::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexercpp_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_connectnotify_isbase) {
            qscilexercpp_connectnotify_isbase = false;
            QsciLexerCPP::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexercpp_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_disconnectnotify_isbase) {
            qscilexercpp_disconnectnotify_isbase = false;
            QsciLexerCPP::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexercpp_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCPP::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexercpp_textasbytes_isbase) {
            qscilexercpp_textasbytes_isbase = false;
            return QsciLexerCPP::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexercpp_textasbytes_callback;
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
        return QsciLexerCPP::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexercpp_bytesastext_isbase) {
            qscilexercpp_bytesastext_isbase = false;
            return QsciLexerCPP::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexercpp_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerCPP::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercpp_sender_isbase) {
            qscilexercpp_sender_isbase = false;
            return QsciLexerCPP::sender();
        }
        auto sender_cb = qscilexercpp_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerCPP::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercpp_sendersignalindex_isbase) {
            qscilexercpp_sendersignalindex_isbase = false;
            return QsciLexerCPP::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexercpp_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercpp_receivers_isbase) {
            qscilexercpp_receivers_isbase = false;
            return QsciLexerCPP::receivers(signal);
        }
        auto receivers_cb = qscilexercpp_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercpp_issignalconnected_isbase) {
            qscilexercpp_issignalconnected_isbase = false;
            return QsciLexerCPP::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexercpp_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerCPP_ReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCPP_SuperReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCPP_WriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCPP_SuperWriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCPP_TimerEvent(QsciLexerCPP* self, QTimerEvent* event);
    friend void QsciLexerCPP_SuperTimerEvent(QsciLexerCPP* self, QTimerEvent* event);
    friend void QsciLexerCPP_ChildEvent(QsciLexerCPP* self, QChildEvent* event);
    friend void QsciLexerCPP_SuperChildEvent(QsciLexerCPP* self, QChildEvent* event);
    friend void QsciLexerCPP_CustomEvent(QsciLexerCPP* self, QEvent* event);
    friend void QsciLexerCPP_SuperCustomEvent(QsciLexerCPP* self, QEvent* event);
    friend void QsciLexerCPP_ConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
    friend void QsciLexerCPP_SuperConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
    friend void QsciLexerCPP_DisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
    friend void QsciLexerCPP_SuperDisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerCPP_TextAsBytes(const QsciLexerCPP* self, const libqt_string text);
    friend libqt_string QsciLexerCPP_SuperTextAsBytes(const QsciLexerCPP* self, const libqt_string text);
    friend libqt_string QsciLexerCPP_BytesAsText(const QsciLexerCPP* self, const char* bytes, int size);
    friend libqt_string QsciLexerCPP_SuperBytesAsText(const QsciLexerCPP* self, const char* bytes, int size);
    friend QObject* QsciLexerCPP_Sender(const QsciLexerCPP* self);
    friend QObject* QsciLexerCPP_SuperSender(const QsciLexerCPP* self);
    friend int QsciLexerCPP_SenderSignalIndex(const QsciLexerCPP* self);
    friend int QsciLexerCPP_SuperSenderSignalIndex(const QsciLexerCPP* self);
    friend int QsciLexerCPP_Receivers(const QsciLexerCPP* self, const char* signal);
    friend int QsciLexerCPP_SuperReceivers(const QsciLexerCPP* self, const char* signal);
    friend bool QsciLexerCPP_IsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal);
    friend bool QsciLexerCPP_SuperIsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal);
};

#endif
