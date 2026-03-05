#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVASCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVASCRIPT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJavaScript so that we can call protected methods
class VirtualQsciLexerJavaScript final : public QsciLexerJavaScript {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerJavaScript = true;

    // Virtual class public types (including callbacks)
    using QsciLexerJavaScript_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerJavaScript_Metacast_Callback = void* (*)(QsciLexerJavaScript*, const char*);
    using QsciLexerJavaScript_Metacall_Callback = int (*)(QsciLexerJavaScript*, int, int, void**);
    using QsciLexerJavaScript_SetFoldAtElse_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldComments_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldCompact_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldPreprocessor_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetStylePreprocessor_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_Language_Callback = const char* (*)();
    using QsciLexerJavaScript_Lexer_Callback = const char* (*)();
    using QsciLexerJavaScript_LexerId_Callback = int (*)();
    using QsciLexerJavaScript_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerJavaScript_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerJavaScript_BlockEnd_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BlockLookback_Callback = int (*)();
    using QsciLexerJavaScript_BlockStart_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BraceStyle_Callback = int (*)();
    using QsciLexerJavaScript_CaseSensitive_Callback = bool (*)();
    using QsciLexerJavaScript_Color_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_EolFill_Callback = bool (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_Font_Callback = QFont* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_IndentationGuideView_Callback = int (*)();
    using QsciLexerJavaScript_Keywords_Callback = const char* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultStyle_Callback = int (*)();
    using QsciLexerJavaScript_Description_Callback = const char* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_Paper_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultEolFill_Callback = bool (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_SetEditor_Callback = void (*)(QsciLexerJavaScript*, QsciScintilla*);
    using QsciLexerJavaScript_RefreshProperties_Callback = void (*)();
    using QsciLexerJavaScript_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerJavaScript_WordCharacters_Callback = const char* (*)();
    using QsciLexerJavaScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_SetColor_Callback = void (*)(QsciLexerJavaScript*, QColor*, int);
    using QsciLexerJavaScript_SetEolFill_Callback = void (*)(QsciLexerJavaScript*, bool, int);
    using QsciLexerJavaScript_SetFont_Callback = void (*)(QsciLexerJavaScript*, QFont*, int);
    using QsciLexerJavaScript_SetPaper_Callback = void (*)(QsciLexerJavaScript*, QColor*, int);
    using QsciLexerJavaScript_ReadProperties_Callback = bool (*)(QsciLexerJavaScript*, QSettings*, const char*);
    using QsciLexerJavaScript_WriteProperties_Callback = bool (*)(const QsciLexerJavaScript*, QSettings*, const char*);
    using QsciLexerJavaScript_Event_Callback = bool (*)(QsciLexerJavaScript*, QEvent*);
    using QsciLexerJavaScript_EventFilter_Callback = bool (*)(QsciLexerJavaScript*, QObject*, QEvent*);
    using QsciLexerJavaScript_TimerEvent_Callback = void (*)(QsciLexerJavaScript*, QTimerEvent*);
    using QsciLexerJavaScript_ChildEvent_Callback = void (*)(QsciLexerJavaScript*, QChildEvent*);
    using QsciLexerJavaScript_CustomEvent_Callback = void (*)(QsciLexerJavaScript*, QEvent*);
    using QsciLexerJavaScript_ConnectNotify_Callback = void (*)(QsciLexerJavaScript*, QMetaMethod*);
    using QsciLexerJavaScript_DisconnectNotify_Callback = void (*)(QsciLexerJavaScript*, QMetaMethod*);
    using QsciLexerJavaScript_TextAsBytes_Callback = libqt_string (*)(const QsciLexerJavaScript*, const char*);
    using QsciLexerJavaScript_BytesAsText_Callback = const char* (*)(const QsciLexerJavaScript*, const char*, int);
    using QsciLexerJavaScript_Sender_Callback = QObject* (*)();
    using QsciLexerJavaScript_SenderSignalIndex_Callback = int (*)();
    using QsciLexerJavaScript_Receivers_Callback = int (*)(const QsciLexerJavaScript*, const char*);
    using QsciLexerJavaScript_IsSignalConnected_Callback = bool (*)(const QsciLexerJavaScript*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerJavaScript_MetaObject_Callback qscilexerjavascript_metaobject_callback = nullptr;
    QsciLexerJavaScript_Metacast_Callback qscilexerjavascript_metacast_callback = nullptr;
    QsciLexerJavaScript_Metacall_Callback qscilexerjavascript_metacall_callback = nullptr;
    QsciLexerJavaScript_SetFoldAtElse_Callback qscilexerjavascript_setfoldatelse_callback = nullptr;
    QsciLexerJavaScript_SetFoldComments_Callback qscilexerjavascript_setfoldcomments_callback = nullptr;
    QsciLexerJavaScript_SetFoldCompact_Callback qscilexerjavascript_setfoldcompact_callback = nullptr;
    QsciLexerJavaScript_SetFoldPreprocessor_Callback qscilexerjavascript_setfoldpreprocessor_callback = nullptr;
    QsciLexerJavaScript_SetStylePreprocessor_Callback qscilexerjavascript_setstylepreprocessor_callback = nullptr;
    QsciLexerJavaScript_Language_Callback qscilexerjavascript_language_callback = nullptr;
    QsciLexerJavaScript_Lexer_Callback qscilexerjavascript_lexer_callback = nullptr;
    QsciLexerJavaScript_LexerId_Callback qscilexerjavascript_lexerid_callback = nullptr;
    QsciLexerJavaScript_AutoCompletionFillups_Callback qscilexerjavascript_autocompletionfillups_callback = nullptr;
    QsciLexerJavaScript_AutoCompletionWordSeparators_Callback qscilexerjavascript_autocompletionwordseparators_callback = nullptr;
    QsciLexerJavaScript_BlockEnd_Callback qscilexerjavascript_blockend_callback = nullptr;
    QsciLexerJavaScript_BlockLookback_Callback qscilexerjavascript_blocklookback_callback = nullptr;
    QsciLexerJavaScript_BlockStart_Callback qscilexerjavascript_blockstart_callback = nullptr;
    QsciLexerJavaScript_BlockStartKeyword_Callback qscilexerjavascript_blockstartkeyword_callback = nullptr;
    QsciLexerJavaScript_BraceStyle_Callback qscilexerjavascript_bracestyle_callback = nullptr;
    QsciLexerJavaScript_CaseSensitive_Callback qscilexerjavascript_casesensitive_callback = nullptr;
    QsciLexerJavaScript_Color_Callback qscilexerjavascript_color_callback = nullptr;
    QsciLexerJavaScript_EolFill_Callback qscilexerjavascript_eolfill_callback = nullptr;
    QsciLexerJavaScript_Font_Callback qscilexerjavascript_font_callback = nullptr;
    QsciLexerJavaScript_IndentationGuideView_Callback qscilexerjavascript_indentationguideview_callback = nullptr;
    QsciLexerJavaScript_Keywords_Callback qscilexerjavascript_keywords_callback = nullptr;
    QsciLexerJavaScript_DefaultStyle_Callback qscilexerjavascript_defaultstyle_callback = nullptr;
    QsciLexerJavaScript_Description_Callback qscilexerjavascript_description_callback = nullptr;
    QsciLexerJavaScript_Paper_Callback qscilexerjavascript_paper_callback = nullptr;
    QsciLexerJavaScript_DefaultColor2_Callback qscilexerjavascript_defaultcolor2_callback = nullptr;
    QsciLexerJavaScript_DefaultEolFill_Callback qscilexerjavascript_defaulteolfill_callback = nullptr;
    QsciLexerJavaScript_DefaultFont2_Callback qscilexerjavascript_defaultfont2_callback = nullptr;
    QsciLexerJavaScript_DefaultPaper2_Callback qscilexerjavascript_defaultpaper2_callback = nullptr;
    QsciLexerJavaScript_SetEditor_Callback qscilexerjavascript_seteditor_callback = nullptr;
    QsciLexerJavaScript_RefreshProperties_Callback qscilexerjavascript_refreshproperties_callback = nullptr;
    QsciLexerJavaScript_StyleBitsNeeded_Callback qscilexerjavascript_stylebitsneeded_callback = nullptr;
    QsciLexerJavaScript_WordCharacters_Callback qscilexerjavascript_wordcharacters_callback = nullptr;
    QsciLexerJavaScript_SetAutoIndentStyle_Callback qscilexerjavascript_setautoindentstyle_callback = nullptr;
    QsciLexerJavaScript_SetColor_Callback qscilexerjavascript_setcolor_callback = nullptr;
    QsciLexerJavaScript_SetEolFill_Callback qscilexerjavascript_seteolfill_callback = nullptr;
    QsciLexerJavaScript_SetFont_Callback qscilexerjavascript_setfont_callback = nullptr;
    QsciLexerJavaScript_SetPaper_Callback qscilexerjavascript_setpaper_callback = nullptr;
    QsciLexerJavaScript_ReadProperties_Callback qscilexerjavascript_readproperties_callback = nullptr;
    QsciLexerJavaScript_WriteProperties_Callback qscilexerjavascript_writeproperties_callback = nullptr;
    QsciLexerJavaScript_Event_Callback qscilexerjavascript_event_callback = nullptr;
    QsciLexerJavaScript_EventFilter_Callback qscilexerjavascript_eventfilter_callback = nullptr;
    QsciLexerJavaScript_TimerEvent_Callback qscilexerjavascript_timerevent_callback = nullptr;
    QsciLexerJavaScript_ChildEvent_Callback qscilexerjavascript_childevent_callback = nullptr;
    QsciLexerJavaScript_CustomEvent_Callback qscilexerjavascript_customevent_callback = nullptr;
    QsciLexerJavaScript_ConnectNotify_Callback qscilexerjavascript_connectnotify_callback = nullptr;
    QsciLexerJavaScript_DisconnectNotify_Callback qscilexerjavascript_disconnectnotify_callback = nullptr;
    QsciLexerJavaScript_TextAsBytes_Callback qscilexerjavascript_textasbytes_callback = nullptr;
    QsciLexerJavaScript_BytesAsText_Callback qscilexerjavascript_bytesastext_callback = nullptr;
    QsciLexerJavaScript_Sender_Callback qscilexerjavascript_sender_callback = nullptr;
    QsciLexerJavaScript_SenderSignalIndex_Callback qscilexerjavascript_sendersignalindex_callback = nullptr;
    QsciLexerJavaScript_Receivers_Callback qscilexerjavascript_receivers_callback = nullptr;
    QsciLexerJavaScript_IsSignalConnected_Callback qscilexerjavascript_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerjavascript_metaobject_isbase = false;
    mutable bool qscilexerjavascript_metacast_isbase = false;
    mutable bool qscilexerjavascript_metacall_isbase = false;
    mutable bool qscilexerjavascript_setfoldatelse_isbase = false;
    mutable bool qscilexerjavascript_setfoldcomments_isbase = false;
    mutable bool qscilexerjavascript_setfoldcompact_isbase = false;
    mutable bool qscilexerjavascript_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerjavascript_setstylepreprocessor_isbase = false;
    mutable bool qscilexerjavascript_language_isbase = false;
    mutable bool qscilexerjavascript_lexer_isbase = false;
    mutable bool qscilexerjavascript_lexerid_isbase = false;
    mutable bool qscilexerjavascript_autocompletionfillups_isbase = false;
    mutable bool qscilexerjavascript_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerjavascript_blockend_isbase = false;
    mutable bool qscilexerjavascript_blocklookback_isbase = false;
    mutable bool qscilexerjavascript_blockstart_isbase = false;
    mutable bool qscilexerjavascript_blockstartkeyword_isbase = false;
    mutable bool qscilexerjavascript_bracestyle_isbase = false;
    mutable bool qscilexerjavascript_casesensitive_isbase = false;
    mutable bool qscilexerjavascript_color_isbase = false;
    mutable bool qscilexerjavascript_eolfill_isbase = false;
    mutable bool qscilexerjavascript_font_isbase = false;
    mutable bool qscilexerjavascript_indentationguideview_isbase = false;
    mutable bool qscilexerjavascript_keywords_isbase = false;
    mutable bool qscilexerjavascript_defaultstyle_isbase = false;
    mutable bool qscilexerjavascript_description_isbase = false;
    mutable bool qscilexerjavascript_paper_isbase = false;
    mutable bool qscilexerjavascript_defaultcolor2_isbase = false;
    mutable bool qscilexerjavascript_defaulteolfill_isbase = false;
    mutable bool qscilexerjavascript_defaultfont2_isbase = false;
    mutable bool qscilexerjavascript_defaultpaper2_isbase = false;
    mutable bool qscilexerjavascript_seteditor_isbase = false;
    mutable bool qscilexerjavascript_refreshproperties_isbase = false;
    mutable bool qscilexerjavascript_stylebitsneeded_isbase = false;
    mutable bool qscilexerjavascript_wordcharacters_isbase = false;
    mutable bool qscilexerjavascript_setautoindentstyle_isbase = false;
    mutable bool qscilexerjavascript_setcolor_isbase = false;
    mutable bool qscilexerjavascript_seteolfill_isbase = false;
    mutable bool qscilexerjavascript_setfont_isbase = false;
    mutable bool qscilexerjavascript_setpaper_isbase = false;
    mutable bool qscilexerjavascript_readproperties_isbase = false;
    mutable bool qscilexerjavascript_writeproperties_isbase = false;
    mutable bool qscilexerjavascript_event_isbase = false;
    mutable bool qscilexerjavascript_eventfilter_isbase = false;
    mutable bool qscilexerjavascript_timerevent_isbase = false;
    mutable bool qscilexerjavascript_childevent_isbase = false;
    mutable bool qscilexerjavascript_customevent_isbase = false;
    mutable bool qscilexerjavascript_connectnotify_isbase = false;
    mutable bool qscilexerjavascript_disconnectnotify_isbase = false;
    mutable bool qscilexerjavascript_textasbytes_isbase = false;
    mutable bool qscilexerjavascript_bytesastext_isbase = false;
    mutable bool qscilexerjavascript_sender_isbase = false;
    mutable bool qscilexerjavascript_sendersignalindex_isbase = false;
    mutable bool qscilexerjavascript_receivers_isbase = false;
    mutable bool qscilexerjavascript_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerJavaScript() : QsciLexerJavaScript() {};
    VirtualQsciLexerJavaScript(QObject* parent) : QsciLexerJavaScript(parent) {};

    // Callback setters
    inline void setQsciLexerJavaScript_MetaObject_Callback(QsciLexerJavaScript_MetaObject_Callback cb) { qscilexerjavascript_metaobject_callback = cb; }
    inline void setQsciLexerJavaScript_Metacast_Callback(QsciLexerJavaScript_Metacast_Callback cb) { qscilexerjavascript_metacast_callback = cb; }
    inline void setQsciLexerJavaScript_Metacall_Callback(QsciLexerJavaScript_Metacall_Callback cb) { qscilexerjavascript_metacall_callback = cb; }
    inline void setQsciLexerJavaScript_SetFoldAtElse_Callback(QsciLexerJavaScript_SetFoldAtElse_Callback cb) { qscilexerjavascript_setfoldatelse_callback = cb; }
    inline void setQsciLexerJavaScript_SetFoldComments_Callback(QsciLexerJavaScript_SetFoldComments_Callback cb) { qscilexerjavascript_setfoldcomments_callback = cb; }
    inline void setQsciLexerJavaScript_SetFoldCompact_Callback(QsciLexerJavaScript_SetFoldCompact_Callback cb) { qscilexerjavascript_setfoldcompact_callback = cb; }
    inline void setQsciLexerJavaScript_SetFoldPreprocessor_Callback(QsciLexerJavaScript_SetFoldPreprocessor_Callback cb) { qscilexerjavascript_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerJavaScript_SetStylePreprocessor_Callback(QsciLexerJavaScript_SetStylePreprocessor_Callback cb) { qscilexerjavascript_setstylepreprocessor_callback = cb; }
    inline void setQsciLexerJavaScript_Language_Callback(QsciLexerJavaScript_Language_Callback cb) { qscilexerjavascript_language_callback = cb; }
    inline void setQsciLexerJavaScript_Lexer_Callback(QsciLexerJavaScript_Lexer_Callback cb) { qscilexerjavascript_lexer_callback = cb; }
    inline void setQsciLexerJavaScript_LexerId_Callback(QsciLexerJavaScript_LexerId_Callback cb) { qscilexerjavascript_lexerid_callback = cb; }
    inline void setQsciLexerJavaScript_AutoCompletionFillups_Callback(QsciLexerJavaScript_AutoCompletionFillups_Callback cb) { qscilexerjavascript_autocompletionfillups_callback = cb; }
    inline void setQsciLexerJavaScript_AutoCompletionWordSeparators_Callback(QsciLexerJavaScript_AutoCompletionWordSeparators_Callback cb) { qscilexerjavascript_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerJavaScript_BlockEnd_Callback(QsciLexerJavaScript_BlockEnd_Callback cb) { qscilexerjavascript_blockend_callback = cb; }
    inline void setQsciLexerJavaScript_BlockLookback_Callback(QsciLexerJavaScript_BlockLookback_Callback cb) { qscilexerjavascript_blocklookback_callback = cb; }
    inline void setQsciLexerJavaScript_BlockStart_Callback(QsciLexerJavaScript_BlockStart_Callback cb) { qscilexerjavascript_blockstart_callback = cb; }
    inline void setQsciLexerJavaScript_BlockStartKeyword_Callback(QsciLexerJavaScript_BlockStartKeyword_Callback cb) { qscilexerjavascript_blockstartkeyword_callback = cb; }
    inline void setQsciLexerJavaScript_BraceStyle_Callback(QsciLexerJavaScript_BraceStyle_Callback cb) { qscilexerjavascript_bracestyle_callback = cb; }
    inline void setQsciLexerJavaScript_CaseSensitive_Callback(QsciLexerJavaScript_CaseSensitive_Callback cb) { qscilexerjavascript_casesensitive_callback = cb; }
    inline void setQsciLexerJavaScript_Color_Callback(QsciLexerJavaScript_Color_Callback cb) { qscilexerjavascript_color_callback = cb; }
    inline void setQsciLexerJavaScript_EolFill_Callback(QsciLexerJavaScript_EolFill_Callback cb) { qscilexerjavascript_eolfill_callback = cb; }
    inline void setQsciLexerJavaScript_Font_Callback(QsciLexerJavaScript_Font_Callback cb) { qscilexerjavascript_font_callback = cb; }
    inline void setQsciLexerJavaScript_IndentationGuideView_Callback(QsciLexerJavaScript_IndentationGuideView_Callback cb) { qscilexerjavascript_indentationguideview_callback = cb; }
    inline void setQsciLexerJavaScript_Keywords_Callback(QsciLexerJavaScript_Keywords_Callback cb) { qscilexerjavascript_keywords_callback = cb; }
    inline void setQsciLexerJavaScript_DefaultStyle_Callback(QsciLexerJavaScript_DefaultStyle_Callback cb) { qscilexerjavascript_defaultstyle_callback = cb; }
    inline void setQsciLexerJavaScript_Description_Callback(QsciLexerJavaScript_Description_Callback cb) { qscilexerjavascript_description_callback = cb; }
    inline void setQsciLexerJavaScript_Paper_Callback(QsciLexerJavaScript_Paper_Callback cb) { qscilexerjavascript_paper_callback = cb; }
    inline void setQsciLexerJavaScript_DefaultColor2_Callback(QsciLexerJavaScript_DefaultColor2_Callback cb) { qscilexerjavascript_defaultcolor2_callback = cb; }
    inline void setQsciLexerJavaScript_DefaultEolFill_Callback(QsciLexerJavaScript_DefaultEolFill_Callback cb) { qscilexerjavascript_defaulteolfill_callback = cb; }
    inline void setQsciLexerJavaScript_DefaultFont2_Callback(QsciLexerJavaScript_DefaultFont2_Callback cb) { qscilexerjavascript_defaultfont2_callback = cb; }
    inline void setQsciLexerJavaScript_DefaultPaper2_Callback(QsciLexerJavaScript_DefaultPaper2_Callback cb) { qscilexerjavascript_defaultpaper2_callback = cb; }
    inline void setQsciLexerJavaScript_SetEditor_Callback(QsciLexerJavaScript_SetEditor_Callback cb) { qscilexerjavascript_seteditor_callback = cb; }
    inline void setQsciLexerJavaScript_RefreshProperties_Callback(QsciLexerJavaScript_RefreshProperties_Callback cb) { qscilexerjavascript_refreshproperties_callback = cb; }
    inline void setQsciLexerJavaScript_StyleBitsNeeded_Callback(QsciLexerJavaScript_StyleBitsNeeded_Callback cb) { qscilexerjavascript_stylebitsneeded_callback = cb; }
    inline void setQsciLexerJavaScript_WordCharacters_Callback(QsciLexerJavaScript_WordCharacters_Callback cb) { qscilexerjavascript_wordcharacters_callback = cb; }
    inline void setQsciLexerJavaScript_SetAutoIndentStyle_Callback(QsciLexerJavaScript_SetAutoIndentStyle_Callback cb) { qscilexerjavascript_setautoindentstyle_callback = cb; }
    inline void setQsciLexerJavaScript_SetColor_Callback(QsciLexerJavaScript_SetColor_Callback cb) { qscilexerjavascript_setcolor_callback = cb; }
    inline void setQsciLexerJavaScript_SetEolFill_Callback(QsciLexerJavaScript_SetEolFill_Callback cb) { qscilexerjavascript_seteolfill_callback = cb; }
    inline void setQsciLexerJavaScript_SetFont_Callback(QsciLexerJavaScript_SetFont_Callback cb) { qscilexerjavascript_setfont_callback = cb; }
    inline void setQsciLexerJavaScript_SetPaper_Callback(QsciLexerJavaScript_SetPaper_Callback cb) { qscilexerjavascript_setpaper_callback = cb; }
    inline void setQsciLexerJavaScript_ReadProperties_Callback(QsciLexerJavaScript_ReadProperties_Callback cb) { qscilexerjavascript_readproperties_callback = cb; }
    inline void setQsciLexerJavaScript_WriteProperties_Callback(QsciLexerJavaScript_WriteProperties_Callback cb) { qscilexerjavascript_writeproperties_callback = cb; }
    inline void setQsciLexerJavaScript_Event_Callback(QsciLexerJavaScript_Event_Callback cb) { qscilexerjavascript_event_callback = cb; }
    inline void setQsciLexerJavaScript_EventFilter_Callback(QsciLexerJavaScript_EventFilter_Callback cb) { qscilexerjavascript_eventfilter_callback = cb; }
    inline void setQsciLexerJavaScript_TimerEvent_Callback(QsciLexerJavaScript_TimerEvent_Callback cb) { qscilexerjavascript_timerevent_callback = cb; }
    inline void setQsciLexerJavaScript_ChildEvent_Callback(QsciLexerJavaScript_ChildEvent_Callback cb) { qscilexerjavascript_childevent_callback = cb; }
    inline void setQsciLexerJavaScript_CustomEvent_Callback(QsciLexerJavaScript_CustomEvent_Callback cb) { qscilexerjavascript_customevent_callback = cb; }
    inline void setQsciLexerJavaScript_ConnectNotify_Callback(QsciLexerJavaScript_ConnectNotify_Callback cb) { qscilexerjavascript_connectnotify_callback = cb; }
    inline void setQsciLexerJavaScript_DisconnectNotify_Callback(QsciLexerJavaScript_DisconnectNotify_Callback cb) { qscilexerjavascript_disconnectnotify_callback = cb; }
    inline void setQsciLexerJavaScript_TextAsBytes_Callback(QsciLexerJavaScript_TextAsBytes_Callback cb) { qscilexerjavascript_textasbytes_callback = cb; }
    inline void setQsciLexerJavaScript_BytesAsText_Callback(QsciLexerJavaScript_BytesAsText_Callback cb) { qscilexerjavascript_bytesastext_callback = cb; }
    inline void setQsciLexerJavaScript_Sender_Callback(QsciLexerJavaScript_Sender_Callback cb) { qscilexerjavascript_sender_callback = cb; }
    inline void setQsciLexerJavaScript_SenderSignalIndex_Callback(QsciLexerJavaScript_SenderSignalIndex_Callback cb) { qscilexerjavascript_sendersignalindex_callback = cb; }
    inline void setQsciLexerJavaScript_Receivers_Callback(QsciLexerJavaScript_Receivers_Callback cb) { qscilexerjavascript_receivers_callback = cb; }
    inline void setQsciLexerJavaScript_IsSignalConnected_Callback(QsciLexerJavaScript_IsSignalConnected_Callback cb) { qscilexerjavascript_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerJavaScript_MetaObject_IsBase(bool value) const { qscilexerjavascript_metaobject_isbase = value; }
    inline void setQsciLexerJavaScript_Metacast_IsBase(bool value) const { qscilexerjavascript_metacast_isbase = value; }
    inline void setQsciLexerJavaScript_Metacall_IsBase(bool value) const { qscilexerjavascript_metacall_isbase = value; }
    inline void setQsciLexerJavaScript_SetFoldAtElse_IsBase(bool value) const { qscilexerjavascript_setfoldatelse_isbase = value; }
    inline void setQsciLexerJavaScript_SetFoldComments_IsBase(bool value) const { qscilexerjavascript_setfoldcomments_isbase = value; }
    inline void setQsciLexerJavaScript_SetFoldCompact_IsBase(bool value) const { qscilexerjavascript_setfoldcompact_isbase = value; }
    inline void setQsciLexerJavaScript_SetFoldPreprocessor_IsBase(bool value) const { qscilexerjavascript_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerJavaScript_SetStylePreprocessor_IsBase(bool value) const { qscilexerjavascript_setstylepreprocessor_isbase = value; }
    inline void setQsciLexerJavaScript_Language_IsBase(bool value) const { qscilexerjavascript_language_isbase = value; }
    inline void setQsciLexerJavaScript_Lexer_IsBase(bool value) const { qscilexerjavascript_lexer_isbase = value; }
    inline void setQsciLexerJavaScript_LexerId_IsBase(bool value) const { qscilexerjavascript_lexerid_isbase = value; }
    inline void setQsciLexerJavaScript_AutoCompletionFillups_IsBase(bool value) const { qscilexerjavascript_autocompletionfillups_isbase = value; }
    inline void setQsciLexerJavaScript_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerjavascript_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerJavaScript_BlockEnd_IsBase(bool value) const { qscilexerjavascript_blockend_isbase = value; }
    inline void setQsciLexerJavaScript_BlockLookback_IsBase(bool value) const { qscilexerjavascript_blocklookback_isbase = value; }
    inline void setQsciLexerJavaScript_BlockStart_IsBase(bool value) const { qscilexerjavascript_blockstart_isbase = value; }
    inline void setQsciLexerJavaScript_BlockStartKeyword_IsBase(bool value) const { qscilexerjavascript_blockstartkeyword_isbase = value; }
    inline void setQsciLexerJavaScript_BraceStyle_IsBase(bool value) const { qscilexerjavascript_bracestyle_isbase = value; }
    inline void setQsciLexerJavaScript_CaseSensitive_IsBase(bool value) const { qscilexerjavascript_casesensitive_isbase = value; }
    inline void setQsciLexerJavaScript_Color_IsBase(bool value) const { qscilexerjavascript_color_isbase = value; }
    inline void setQsciLexerJavaScript_EolFill_IsBase(bool value) const { qscilexerjavascript_eolfill_isbase = value; }
    inline void setQsciLexerJavaScript_Font_IsBase(bool value) const { qscilexerjavascript_font_isbase = value; }
    inline void setQsciLexerJavaScript_IndentationGuideView_IsBase(bool value) const { qscilexerjavascript_indentationguideview_isbase = value; }
    inline void setQsciLexerJavaScript_Keywords_IsBase(bool value) const { qscilexerjavascript_keywords_isbase = value; }
    inline void setQsciLexerJavaScript_DefaultStyle_IsBase(bool value) const { qscilexerjavascript_defaultstyle_isbase = value; }
    inline void setQsciLexerJavaScript_Description_IsBase(bool value) const { qscilexerjavascript_description_isbase = value; }
    inline void setQsciLexerJavaScript_Paper_IsBase(bool value) const { qscilexerjavascript_paper_isbase = value; }
    inline void setQsciLexerJavaScript_DefaultColor2_IsBase(bool value) const { qscilexerjavascript_defaultcolor2_isbase = value; }
    inline void setQsciLexerJavaScript_DefaultEolFill_IsBase(bool value) const { qscilexerjavascript_defaulteolfill_isbase = value; }
    inline void setQsciLexerJavaScript_DefaultFont2_IsBase(bool value) const { qscilexerjavascript_defaultfont2_isbase = value; }
    inline void setQsciLexerJavaScript_DefaultPaper2_IsBase(bool value) const { qscilexerjavascript_defaultpaper2_isbase = value; }
    inline void setQsciLexerJavaScript_SetEditor_IsBase(bool value) const { qscilexerjavascript_seteditor_isbase = value; }
    inline void setQsciLexerJavaScript_RefreshProperties_IsBase(bool value) const { qscilexerjavascript_refreshproperties_isbase = value; }
    inline void setQsciLexerJavaScript_StyleBitsNeeded_IsBase(bool value) const { qscilexerjavascript_stylebitsneeded_isbase = value; }
    inline void setQsciLexerJavaScript_WordCharacters_IsBase(bool value) const { qscilexerjavascript_wordcharacters_isbase = value; }
    inline void setQsciLexerJavaScript_SetAutoIndentStyle_IsBase(bool value) const { qscilexerjavascript_setautoindentstyle_isbase = value; }
    inline void setQsciLexerJavaScript_SetColor_IsBase(bool value) const { qscilexerjavascript_setcolor_isbase = value; }
    inline void setQsciLexerJavaScript_SetEolFill_IsBase(bool value) const { qscilexerjavascript_seteolfill_isbase = value; }
    inline void setQsciLexerJavaScript_SetFont_IsBase(bool value) const { qscilexerjavascript_setfont_isbase = value; }
    inline void setQsciLexerJavaScript_SetPaper_IsBase(bool value) const { qscilexerjavascript_setpaper_isbase = value; }
    inline void setQsciLexerJavaScript_ReadProperties_IsBase(bool value) const { qscilexerjavascript_readproperties_isbase = value; }
    inline void setQsciLexerJavaScript_WriteProperties_IsBase(bool value) const { qscilexerjavascript_writeproperties_isbase = value; }
    inline void setQsciLexerJavaScript_Event_IsBase(bool value) const { qscilexerjavascript_event_isbase = value; }
    inline void setQsciLexerJavaScript_EventFilter_IsBase(bool value) const { qscilexerjavascript_eventfilter_isbase = value; }
    inline void setQsciLexerJavaScript_TimerEvent_IsBase(bool value) const { qscilexerjavascript_timerevent_isbase = value; }
    inline void setQsciLexerJavaScript_ChildEvent_IsBase(bool value) const { qscilexerjavascript_childevent_isbase = value; }
    inline void setQsciLexerJavaScript_CustomEvent_IsBase(bool value) const { qscilexerjavascript_customevent_isbase = value; }
    inline void setQsciLexerJavaScript_ConnectNotify_IsBase(bool value) const { qscilexerjavascript_connectnotify_isbase = value; }
    inline void setQsciLexerJavaScript_DisconnectNotify_IsBase(bool value) const { qscilexerjavascript_disconnectnotify_isbase = value; }
    inline void setQsciLexerJavaScript_TextAsBytes_IsBase(bool value) const { qscilexerjavascript_textasbytes_isbase = value; }
    inline void setQsciLexerJavaScript_BytesAsText_IsBase(bool value) const { qscilexerjavascript_bytesastext_isbase = value; }
    inline void setQsciLexerJavaScript_Sender_IsBase(bool value) const { qscilexerjavascript_sender_isbase = value; }
    inline void setQsciLexerJavaScript_SenderSignalIndex_IsBase(bool value) const { qscilexerjavascript_sendersignalindex_isbase = value; }
    inline void setQsciLexerJavaScript_Receivers_IsBase(bool value) const { qscilexerjavascript_receivers_isbase = value; }
    inline void setQsciLexerJavaScript_IsSignalConnected_IsBase(bool value) const { qscilexerjavascript_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerjavascript_metaobject_isbase) {
            qscilexerjavascript_metaobject_isbase = false;
            return QsciLexerJavaScript::metaObject();
        }
        auto metaobject_cb = qscilexerjavascript_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerjavascript_metacast_isbase) {
            qscilexerjavascript_metacast_isbase = false;
            return QsciLexerJavaScript::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerjavascript_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjavascript_metacall_isbase) {
            qscilexerjavascript_metacall_isbase = false;
            return QsciLexerJavaScript::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerjavascript_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerjavascript_setfoldatelse_isbase) {
            qscilexerjavascript_setfoldatelse_isbase = false;
            QsciLexerJavaScript::setFoldAtElse(fold);
            return;
        }
        auto setfoldatelse_cb = qscilexerjavascript_setfoldatelse_callback;
        if (setfoldatelse_cb) {
            bool cbval1 = fold;

            setfoldatelse_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerjavascript_setfoldcomments_isbase) {
            qscilexerjavascript_setfoldcomments_isbase = false;
            QsciLexerJavaScript::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexerjavascript_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerjavascript_setfoldcompact_isbase) {
            qscilexerjavascript_setfoldcompact_isbase = false;
            QsciLexerJavaScript::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerjavascript_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerjavascript_setfoldpreprocessor_isbase) {
            qscilexerjavascript_setfoldpreprocessor_isbase = false;
            QsciLexerJavaScript::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexerjavascript_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexerjavascript_setstylepreprocessor_isbase) {
            qscilexerjavascript_setstylepreprocessor_isbase = false;
            QsciLexerJavaScript::setStylePreprocessor(style);
            return;
        }
        auto setstylepreprocessor_cb = qscilexerjavascript_setstylepreprocessor_callback;
        if (setstylepreprocessor_cb) {
            bool cbval1 = style;

            setstylepreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerjavascript_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjavascript_lexer_isbase) {
            qscilexerjavascript_lexer_isbase = false;
            return QsciLexerJavaScript::lexer();
        }
        auto lexer_cb = qscilexerjavascript_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjavascript_lexerid_isbase) {
            qscilexerjavascript_lexerid_isbase = false;
            return QsciLexerJavaScript::lexerId();
        }
        auto lexerid_cb = qscilexerjavascript_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjavascript_autocompletionfillups_isbase) {
            qscilexerjavascript_autocompletionfillups_isbase = false;
            return QsciLexerJavaScript::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerjavascript_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerjavascript_autocompletionwordseparators_isbase) {
            qscilexerjavascript_autocompletionwordseparators_isbase = false;
            return QsciLexerJavaScript::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerjavascript_autocompletionwordseparators_callback;
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
        return QsciLexerJavaScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjavascript_blockend_isbase) {
            qscilexerjavascript_blockend_isbase = false;
            return QsciLexerJavaScript::blockEnd(style);
        }
        auto blockend_cb = qscilexerjavascript_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjavascript_blocklookback_isbase) {
            qscilexerjavascript_blocklookback_isbase = false;
            return QsciLexerJavaScript::blockLookback();
        }
        auto blocklookback_cb = qscilexerjavascript_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjavascript_blockstart_isbase) {
            qscilexerjavascript_blockstart_isbase = false;
            return QsciLexerJavaScript::blockStart(style);
        }
        auto blockstart_cb = qscilexerjavascript_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjavascript_blockstartkeyword_isbase) {
            qscilexerjavascript_blockstartkeyword_isbase = false;
            return QsciLexerJavaScript::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerjavascript_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjavascript_bracestyle_isbase) {
            qscilexerjavascript_bracestyle_isbase = false;
            return QsciLexerJavaScript::braceStyle();
        }
        auto bracestyle_cb = qscilexerjavascript_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjavascript_casesensitive_isbase) {
            qscilexerjavascript_casesensitive_isbase = false;
            return QsciLexerJavaScript::caseSensitive();
        }
        auto casesensitive_cb = qscilexerjavascript_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjavascript_color_isbase) {
            qscilexerjavascript_color_isbase = false;
            return QsciLexerJavaScript::color(style);
        }
        auto color_cb = qscilexerjavascript_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjavascript_eolfill_isbase) {
            qscilexerjavascript_eolfill_isbase = false;
            return QsciLexerJavaScript::eolFill(style);
        }
        auto eolfill_cb = qscilexerjavascript_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjavascript_font_isbase) {
            qscilexerjavascript_font_isbase = false;
            return QsciLexerJavaScript::font(style);
        }
        auto font_cb = qscilexerjavascript_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjavascript_indentationguideview_isbase) {
            qscilexerjavascript_indentationguideview_isbase = false;
            return QsciLexerJavaScript::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerjavascript_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjavascript_keywords_isbase) {
            qscilexerjavascript_keywords_isbase = false;
            return QsciLexerJavaScript::keywords(set);
        }
        auto keywords_cb = qscilexerjavascript_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjavascript_defaultstyle_isbase) {
            qscilexerjavascript_defaultstyle_isbase = false;
            return QsciLexerJavaScript::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerjavascript_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerjavascript_description_callback;
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
        if (qscilexerjavascript_paper_isbase) {
            qscilexerjavascript_paper_isbase = false;
            return QsciLexerJavaScript::paper(style);
        }
        auto paper_cb = qscilexerjavascript_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjavascript_defaultcolor2_isbase) {
            qscilexerjavascript_defaultcolor2_isbase = false;
            return QsciLexerJavaScript::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerjavascript_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjavascript_defaulteolfill_isbase) {
            qscilexerjavascript_defaulteolfill_isbase = false;
            return QsciLexerJavaScript::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerjavascript_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjavascript_defaultfont2_isbase) {
            qscilexerjavascript_defaultfont2_isbase = false;
            return QsciLexerJavaScript::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerjavascript_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjavascript_defaultpaper2_isbase) {
            qscilexerjavascript_defaultpaper2_isbase = false;
            return QsciLexerJavaScript::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerjavascript_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJavaScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjavascript_seteditor_isbase) {
            qscilexerjavascript_seteditor_isbase = false;
            QsciLexerJavaScript::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerjavascript_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjavascript_refreshproperties_isbase) {
            qscilexerjavascript_refreshproperties_isbase = false;
            QsciLexerJavaScript::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerjavascript_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerJavaScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjavascript_stylebitsneeded_isbase) {
            qscilexerjavascript_stylebitsneeded_isbase = false;
            return QsciLexerJavaScript::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerjavascript_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjavascript_wordcharacters_isbase) {
            qscilexerjavascript_wordcharacters_isbase = false;
            return QsciLexerJavaScript::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerjavascript_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjavascript_setautoindentstyle_isbase) {
            qscilexerjavascript_setautoindentstyle_isbase = false;
            QsciLexerJavaScript::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerjavascript_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjavascript_setcolor_isbase) {
            qscilexerjavascript_setcolor_isbase = false;
            QsciLexerJavaScript::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerjavascript_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjavascript_seteolfill_isbase) {
            qscilexerjavascript_seteolfill_isbase = false;
            QsciLexerJavaScript::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerjavascript_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjavascript_setfont_isbase) {
            qscilexerjavascript_setfont_isbase = false;
            QsciLexerJavaScript::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerjavascript_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjavascript_setpaper_isbase) {
            qscilexerjavascript_setpaper_isbase = false;
            QsciLexerJavaScript::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerjavascript_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjavascript_readproperties_isbase) {
            qscilexerjavascript_readproperties_isbase = false;
            return QsciLexerJavaScript::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerjavascript_readproperties_callback;
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
        return QsciLexerJavaScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjavascript_writeproperties_isbase) {
            qscilexerjavascript_writeproperties_isbase = false;
            return QsciLexerJavaScript::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerjavascript_writeproperties_callback;
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
        return QsciLexerJavaScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjavascript_event_isbase) {
            qscilexerjavascript_event_isbase = false;
            return QsciLexerJavaScript::event(event);
        }
        auto event_cb = qscilexerjavascript_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjavascript_eventfilter_isbase) {
            qscilexerjavascript_eventfilter_isbase = false;
            return QsciLexerJavaScript::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerjavascript_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerJavaScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjavascript_timerevent_isbase) {
            qscilexerjavascript_timerevent_isbase = false;
            QsciLexerJavaScript::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerjavascript_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjavascript_childevent_isbase) {
            qscilexerjavascript_childevent_isbase = false;
            QsciLexerJavaScript::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerjavascript_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjavascript_customevent_isbase) {
            qscilexerjavascript_customevent_isbase = false;
            QsciLexerJavaScript::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerjavascript_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjavascript_connectnotify_isbase) {
            qscilexerjavascript_connectnotify_isbase = false;
            QsciLexerJavaScript::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerjavascript_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjavascript_disconnectnotify_isbase) {
            qscilexerjavascript_disconnectnotify_isbase = false;
            QsciLexerJavaScript::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerjavascript_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerJavaScript::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerjavascript_textasbytes_isbase) {
            qscilexerjavascript_textasbytes_isbase = false;
            return QsciLexerJavaScript::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerjavascript_textasbytes_callback;
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
        return QsciLexerJavaScript::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerjavascript_bytesastext_isbase) {
            qscilexerjavascript_bytesastext_isbase = false;
            return QsciLexerJavaScript::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerjavascript_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerJavaScript::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerjavascript_sender_isbase) {
            qscilexerjavascript_sender_isbase = false;
            return QsciLexerJavaScript::sender();
        }
        auto sender_cb = qscilexerjavascript_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerJavaScript::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerjavascript_sendersignalindex_isbase) {
            qscilexerjavascript_sendersignalindex_isbase = false;
            return QsciLexerJavaScript::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerjavascript_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerjavascript_receivers_isbase) {
            qscilexerjavascript_receivers_isbase = false;
            return QsciLexerJavaScript::receivers(signal);
        }
        auto receivers_cb = qscilexerjavascript_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerjavascript_issignalconnected_isbase) {
            qscilexerjavascript_issignalconnected_isbase = false;
            return QsciLexerJavaScript::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerjavascript_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJavaScript_SuperReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJavaScript_SuperWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
    friend void QsciLexerJavaScript_SuperTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
    friend void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
    friend void QsciLexerJavaScript_SuperChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
    friend void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event);
    friend void QsciLexerJavaScript_SuperCustomEvent(QsciLexerJavaScript* self, QEvent* event);
    friend void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend void QsciLexerJavaScript_SuperConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend void QsciLexerJavaScript_SuperDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerJavaScript_TextAsBytes(const QsciLexerJavaScript* self, const libqt_string text);
    friend libqt_string QsciLexerJavaScript_SuperTextAsBytes(const QsciLexerJavaScript* self, const libqt_string text);
    friend libqt_string QsciLexerJavaScript_BytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size);
    friend libqt_string QsciLexerJavaScript_SuperBytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size);
    friend QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self);
    friend QObject* QsciLexerJavaScript_SuperSender(const QsciLexerJavaScript* self);
    friend int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self);
    friend int QsciLexerJavaScript_SuperSenderSignalIndex(const QsciLexerJavaScript* self);
    friend int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal);
    friend int QsciLexerJavaScript_SuperReceivers(const QsciLexerJavaScript* self, const char* signal);
    friend bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend bool QsciLexerJavaScript_SuperIsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal);
};

#endif
