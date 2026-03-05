#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSHARP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSHARP_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCSharp so that we can call protected methods
class VirtualQsciLexerCSharp final : public QsciLexerCSharp {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCSharp = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCSharp_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerCSharp_Metacast_Callback = void* (*)(QsciLexerCSharp*, const char*);
    using QsciLexerCSharp_Metacall_Callback = int (*)(QsciLexerCSharp*, int, int, void**);
    using QsciLexerCSharp_SetFoldAtElse_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldComments_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldCompact_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldPreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetStylePreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_Language_Callback = const char* (*)();
    using QsciLexerCSharp_Lexer_Callback = const char* (*)();
    using QsciLexerCSharp_LexerId_Callback = int (*)();
    using QsciLexerCSharp_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCSharp_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerCSharp_BlockEnd_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockLookback_Callback = int (*)();
    using QsciLexerCSharp_BlockStart_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BraceStyle_Callback = int (*)();
    using QsciLexerCSharp_CaseSensitive_Callback = bool (*)();
    using QsciLexerCSharp_Color_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_EolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Font_Callback = QFont* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_IndentationGuideView_Callback = int (*)();
    using QsciLexerCSharp_Keywords_Callback = const char* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultStyle_Callback = int (*)();
    using QsciLexerCSharp_Description_Callback = const char* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Paper_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultColor2_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultEolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultFont2_Callback = QFont* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetEditor_Callback = void (*)(QsciLexerCSharp*, QsciScintilla*);
    using QsciLexerCSharp_RefreshProperties_Callback = void (*)();
    using QsciLexerCSharp_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCSharp_WordCharacters_Callback = const char* (*)();
    using QsciLexerCSharp_SetAutoIndentStyle_Callback = void (*)(QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetColor_Callback = void (*)(QsciLexerCSharp*, QColor*, int);
    using QsciLexerCSharp_SetEolFill_Callback = void (*)(QsciLexerCSharp*, bool, int);
    using QsciLexerCSharp_SetFont_Callback = void (*)(QsciLexerCSharp*, QFont*, int);
    using QsciLexerCSharp_SetPaper_Callback = void (*)(QsciLexerCSharp*, QColor*, int);
    using QsciLexerCSharp_ReadProperties_Callback = bool (*)(QsciLexerCSharp*, QSettings*, const char*);
    using QsciLexerCSharp_WriteProperties_Callback = bool (*)(const QsciLexerCSharp*, QSettings*, const char*);
    using QsciLexerCSharp_Event_Callback = bool (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_EventFilter_Callback = bool (*)(QsciLexerCSharp*, QObject*, QEvent*);
    using QsciLexerCSharp_TimerEvent_Callback = void (*)(QsciLexerCSharp*, QTimerEvent*);
    using QsciLexerCSharp_ChildEvent_Callback = void (*)(QsciLexerCSharp*, QChildEvent*);
    using QsciLexerCSharp_CustomEvent_Callback = void (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_ConnectNotify_Callback = void (*)(QsciLexerCSharp*, QMetaMethod*);
    using QsciLexerCSharp_DisconnectNotify_Callback = void (*)(QsciLexerCSharp*, QMetaMethod*);
    using QsciLexerCSharp_TextAsBytes_Callback = libqt_string (*)(const QsciLexerCSharp*, const char*);
    using QsciLexerCSharp_BytesAsText_Callback = const char* (*)(const QsciLexerCSharp*, const char*, int);
    using QsciLexerCSharp_Sender_Callback = QObject* (*)();
    using QsciLexerCSharp_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCSharp_Receivers_Callback = int (*)(const QsciLexerCSharp*, const char*);
    using QsciLexerCSharp_IsSignalConnected_Callback = bool (*)(const QsciLexerCSharp*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCSharp_MetaObject_Callback qscilexercsharp_metaobject_callback = nullptr;
    QsciLexerCSharp_Metacast_Callback qscilexercsharp_metacast_callback = nullptr;
    QsciLexerCSharp_Metacall_Callback qscilexercsharp_metacall_callback = nullptr;
    QsciLexerCSharp_SetFoldAtElse_Callback qscilexercsharp_setfoldatelse_callback = nullptr;
    QsciLexerCSharp_SetFoldComments_Callback qscilexercsharp_setfoldcomments_callback = nullptr;
    QsciLexerCSharp_SetFoldCompact_Callback qscilexercsharp_setfoldcompact_callback = nullptr;
    QsciLexerCSharp_SetFoldPreprocessor_Callback qscilexercsharp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCSharp_SetStylePreprocessor_Callback qscilexercsharp_setstylepreprocessor_callback = nullptr;
    QsciLexerCSharp_Language_Callback qscilexercsharp_language_callback = nullptr;
    QsciLexerCSharp_Lexer_Callback qscilexercsharp_lexer_callback = nullptr;
    QsciLexerCSharp_LexerId_Callback qscilexercsharp_lexerid_callback = nullptr;
    QsciLexerCSharp_AutoCompletionFillups_Callback qscilexercsharp_autocompletionfillups_callback = nullptr;
    QsciLexerCSharp_AutoCompletionWordSeparators_Callback qscilexercsharp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCSharp_BlockEnd_Callback qscilexercsharp_blockend_callback = nullptr;
    QsciLexerCSharp_BlockLookback_Callback qscilexercsharp_blocklookback_callback = nullptr;
    QsciLexerCSharp_BlockStart_Callback qscilexercsharp_blockstart_callback = nullptr;
    QsciLexerCSharp_BlockStartKeyword_Callback qscilexercsharp_blockstartkeyword_callback = nullptr;
    QsciLexerCSharp_BraceStyle_Callback qscilexercsharp_bracestyle_callback = nullptr;
    QsciLexerCSharp_CaseSensitive_Callback qscilexercsharp_casesensitive_callback = nullptr;
    QsciLexerCSharp_Color_Callback qscilexercsharp_color_callback = nullptr;
    QsciLexerCSharp_EolFill_Callback qscilexercsharp_eolfill_callback = nullptr;
    QsciLexerCSharp_Font_Callback qscilexercsharp_font_callback = nullptr;
    QsciLexerCSharp_IndentationGuideView_Callback qscilexercsharp_indentationguideview_callback = nullptr;
    QsciLexerCSharp_Keywords_Callback qscilexercsharp_keywords_callback = nullptr;
    QsciLexerCSharp_DefaultStyle_Callback qscilexercsharp_defaultstyle_callback = nullptr;
    QsciLexerCSharp_Description_Callback qscilexercsharp_description_callback = nullptr;
    QsciLexerCSharp_Paper_Callback qscilexercsharp_paper_callback = nullptr;
    QsciLexerCSharp_DefaultColor2_Callback qscilexercsharp_defaultcolor2_callback = nullptr;
    QsciLexerCSharp_DefaultEolFill_Callback qscilexercsharp_defaulteolfill_callback = nullptr;
    QsciLexerCSharp_DefaultFont2_Callback qscilexercsharp_defaultfont2_callback = nullptr;
    QsciLexerCSharp_DefaultPaper2_Callback qscilexercsharp_defaultpaper2_callback = nullptr;
    QsciLexerCSharp_SetEditor_Callback qscilexercsharp_seteditor_callback = nullptr;
    QsciLexerCSharp_RefreshProperties_Callback qscilexercsharp_refreshproperties_callback = nullptr;
    QsciLexerCSharp_StyleBitsNeeded_Callback qscilexercsharp_stylebitsneeded_callback = nullptr;
    QsciLexerCSharp_WordCharacters_Callback qscilexercsharp_wordcharacters_callback = nullptr;
    QsciLexerCSharp_SetAutoIndentStyle_Callback qscilexercsharp_setautoindentstyle_callback = nullptr;
    QsciLexerCSharp_SetColor_Callback qscilexercsharp_setcolor_callback = nullptr;
    QsciLexerCSharp_SetEolFill_Callback qscilexercsharp_seteolfill_callback = nullptr;
    QsciLexerCSharp_SetFont_Callback qscilexercsharp_setfont_callback = nullptr;
    QsciLexerCSharp_SetPaper_Callback qscilexercsharp_setpaper_callback = nullptr;
    QsciLexerCSharp_ReadProperties_Callback qscilexercsharp_readproperties_callback = nullptr;
    QsciLexerCSharp_WriteProperties_Callback qscilexercsharp_writeproperties_callback = nullptr;
    QsciLexerCSharp_Event_Callback qscilexercsharp_event_callback = nullptr;
    QsciLexerCSharp_EventFilter_Callback qscilexercsharp_eventfilter_callback = nullptr;
    QsciLexerCSharp_TimerEvent_Callback qscilexercsharp_timerevent_callback = nullptr;
    QsciLexerCSharp_ChildEvent_Callback qscilexercsharp_childevent_callback = nullptr;
    QsciLexerCSharp_CustomEvent_Callback qscilexercsharp_customevent_callback = nullptr;
    QsciLexerCSharp_ConnectNotify_Callback qscilexercsharp_connectnotify_callback = nullptr;
    QsciLexerCSharp_DisconnectNotify_Callback qscilexercsharp_disconnectnotify_callback = nullptr;
    QsciLexerCSharp_TextAsBytes_Callback qscilexercsharp_textasbytes_callback = nullptr;
    QsciLexerCSharp_BytesAsText_Callback qscilexercsharp_bytesastext_callback = nullptr;
    QsciLexerCSharp_Sender_Callback qscilexercsharp_sender_callback = nullptr;
    QsciLexerCSharp_SenderSignalIndex_Callback qscilexercsharp_sendersignalindex_callback = nullptr;
    QsciLexerCSharp_Receivers_Callback qscilexercsharp_receivers_callback = nullptr;
    QsciLexerCSharp_IsSignalConnected_Callback qscilexercsharp_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercsharp_metaobject_isbase = false;
    mutable bool qscilexercsharp_metacast_isbase = false;
    mutable bool qscilexercsharp_metacall_isbase = false;
    mutable bool qscilexercsharp_setfoldatelse_isbase = false;
    mutable bool qscilexercsharp_setfoldcomments_isbase = false;
    mutable bool qscilexercsharp_setfoldcompact_isbase = false;
    mutable bool qscilexercsharp_setfoldpreprocessor_isbase = false;
    mutable bool qscilexercsharp_setstylepreprocessor_isbase = false;
    mutable bool qscilexercsharp_language_isbase = false;
    mutable bool qscilexercsharp_lexer_isbase = false;
    mutable bool qscilexercsharp_lexerid_isbase = false;
    mutable bool qscilexercsharp_autocompletionfillups_isbase = false;
    mutable bool qscilexercsharp_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercsharp_blockend_isbase = false;
    mutable bool qscilexercsharp_blocklookback_isbase = false;
    mutable bool qscilexercsharp_blockstart_isbase = false;
    mutable bool qscilexercsharp_blockstartkeyword_isbase = false;
    mutable bool qscilexercsharp_bracestyle_isbase = false;
    mutable bool qscilexercsharp_casesensitive_isbase = false;
    mutable bool qscilexercsharp_color_isbase = false;
    mutable bool qscilexercsharp_eolfill_isbase = false;
    mutable bool qscilexercsharp_font_isbase = false;
    mutable bool qscilexercsharp_indentationguideview_isbase = false;
    mutable bool qscilexercsharp_keywords_isbase = false;
    mutable bool qscilexercsharp_defaultstyle_isbase = false;
    mutable bool qscilexercsharp_description_isbase = false;
    mutable bool qscilexercsharp_paper_isbase = false;
    mutable bool qscilexercsharp_defaultcolor2_isbase = false;
    mutable bool qscilexercsharp_defaulteolfill_isbase = false;
    mutable bool qscilexercsharp_defaultfont2_isbase = false;
    mutable bool qscilexercsharp_defaultpaper2_isbase = false;
    mutable bool qscilexercsharp_seteditor_isbase = false;
    mutable bool qscilexercsharp_refreshproperties_isbase = false;
    mutable bool qscilexercsharp_stylebitsneeded_isbase = false;
    mutable bool qscilexercsharp_wordcharacters_isbase = false;
    mutable bool qscilexercsharp_setautoindentstyle_isbase = false;
    mutable bool qscilexercsharp_setcolor_isbase = false;
    mutable bool qscilexercsharp_seteolfill_isbase = false;
    mutable bool qscilexercsharp_setfont_isbase = false;
    mutable bool qscilexercsharp_setpaper_isbase = false;
    mutable bool qscilexercsharp_readproperties_isbase = false;
    mutable bool qscilexercsharp_writeproperties_isbase = false;
    mutable bool qscilexercsharp_event_isbase = false;
    mutable bool qscilexercsharp_eventfilter_isbase = false;
    mutable bool qscilexercsharp_timerevent_isbase = false;
    mutable bool qscilexercsharp_childevent_isbase = false;
    mutable bool qscilexercsharp_customevent_isbase = false;
    mutable bool qscilexercsharp_connectnotify_isbase = false;
    mutable bool qscilexercsharp_disconnectnotify_isbase = false;
    mutable bool qscilexercsharp_textasbytes_isbase = false;
    mutable bool qscilexercsharp_bytesastext_isbase = false;
    mutable bool qscilexercsharp_sender_isbase = false;
    mutable bool qscilexercsharp_sendersignalindex_isbase = false;
    mutable bool qscilexercsharp_receivers_isbase = false;
    mutable bool qscilexercsharp_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCSharp() : QsciLexerCSharp() {};
    VirtualQsciLexerCSharp(QObject* parent) : QsciLexerCSharp(parent) {};

    // Callback setters
    inline void setQsciLexerCSharp_MetaObject_Callback(QsciLexerCSharp_MetaObject_Callback cb) { qscilexercsharp_metaobject_callback = cb; }
    inline void setQsciLexerCSharp_Metacast_Callback(QsciLexerCSharp_Metacast_Callback cb) { qscilexercsharp_metacast_callback = cb; }
    inline void setQsciLexerCSharp_Metacall_Callback(QsciLexerCSharp_Metacall_Callback cb) { qscilexercsharp_metacall_callback = cb; }
    inline void setQsciLexerCSharp_SetFoldAtElse_Callback(QsciLexerCSharp_SetFoldAtElse_Callback cb) { qscilexercsharp_setfoldatelse_callback = cb; }
    inline void setQsciLexerCSharp_SetFoldComments_Callback(QsciLexerCSharp_SetFoldComments_Callback cb) { qscilexercsharp_setfoldcomments_callback = cb; }
    inline void setQsciLexerCSharp_SetFoldCompact_Callback(QsciLexerCSharp_SetFoldCompact_Callback cb) { qscilexercsharp_setfoldcompact_callback = cb; }
    inline void setQsciLexerCSharp_SetFoldPreprocessor_Callback(QsciLexerCSharp_SetFoldPreprocessor_Callback cb) { qscilexercsharp_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerCSharp_SetStylePreprocessor_Callback(QsciLexerCSharp_SetStylePreprocessor_Callback cb) { qscilexercsharp_setstylepreprocessor_callback = cb; }
    inline void setQsciLexerCSharp_Language_Callback(QsciLexerCSharp_Language_Callback cb) { qscilexercsharp_language_callback = cb; }
    inline void setQsciLexerCSharp_Lexer_Callback(QsciLexerCSharp_Lexer_Callback cb) { qscilexercsharp_lexer_callback = cb; }
    inline void setQsciLexerCSharp_LexerId_Callback(QsciLexerCSharp_LexerId_Callback cb) { qscilexercsharp_lexerid_callback = cb; }
    inline void setQsciLexerCSharp_AutoCompletionFillups_Callback(QsciLexerCSharp_AutoCompletionFillups_Callback cb) { qscilexercsharp_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCSharp_AutoCompletionWordSeparators_Callback(QsciLexerCSharp_AutoCompletionWordSeparators_Callback cb) { qscilexercsharp_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCSharp_BlockEnd_Callback(QsciLexerCSharp_BlockEnd_Callback cb) { qscilexercsharp_blockend_callback = cb; }
    inline void setQsciLexerCSharp_BlockLookback_Callback(QsciLexerCSharp_BlockLookback_Callback cb) { qscilexercsharp_blocklookback_callback = cb; }
    inline void setQsciLexerCSharp_BlockStart_Callback(QsciLexerCSharp_BlockStart_Callback cb) { qscilexercsharp_blockstart_callback = cb; }
    inline void setQsciLexerCSharp_BlockStartKeyword_Callback(QsciLexerCSharp_BlockStartKeyword_Callback cb) { qscilexercsharp_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCSharp_BraceStyle_Callback(QsciLexerCSharp_BraceStyle_Callback cb) { qscilexercsharp_bracestyle_callback = cb; }
    inline void setQsciLexerCSharp_CaseSensitive_Callback(QsciLexerCSharp_CaseSensitive_Callback cb) { qscilexercsharp_casesensitive_callback = cb; }
    inline void setQsciLexerCSharp_Color_Callback(QsciLexerCSharp_Color_Callback cb) { qscilexercsharp_color_callback = cb; }
    inline void setQsciLexerCSharp_EolFill_Callback(QsciLexerCSharp_EolFill_Callback cb) { qscilexercsharp_eolfill_callback = cb; }
    inline void setQsciLexerCSharp_Font_Callback(QsciLexerCSharp_Font_Callback cb) { qscilexercsharp_font_callback = cb; }
    inline void setQsciLexerCSharp_IndentationGuideView_Callback(QsciLexerCSharp_IndentationGuideView_Callback cb) { qscilexercsharp_indentationguideview_callback = cb; }
    inline void setQsciLexerCSharp_Keywords_Callback(QsciLexerCSharp_Keywords_Callback cb) { qscilexercsharp_keywords_callback = cb; }
    inline void setQsciLexerCSharp_DefaultStyle_Callback(QsciLexerCSharp_DefaultStyle_Callback cb) { qscilexercsharp_defaultstyle_callback = cb; }
    inline void setQsciLexerCSharp_Description_Callback(QsciLexerCSharp_Description_Callback cb) { qscilexercsharp_description_callback = cb; }
    inline void setQsciLexerCSharp_Paper_Callback(QsciLexerCSharp_Paper_Callback cb) { qscilexercsharp_paper_callback = cb; }
    inline void setQsciLexerCSharp_DefaultColor2_Callback(QsciLexerCSharp_DefaultColor2_Callback cb) { qscilexercsharp_defaultcolor2_callback = cb; }
    inline void setQsciLexerCSharp_DefaultEolFill_Callback(QsciLexerCSharp_DefaultEolFill_Callback cb) { qscilexercsharp_defaulteolfill_callback = cb; }
    inline void setQsciLexerCSharp_DefaultFont2_Callback(QsciLexerCSharp_DefaultFont2_Callback cb) { qscilexercsharp_defaultfont2_callback = cb; }
    inline void setQsciLexerCSharp_DefaultPaper2_Callback(QsciLexerCSharp_DefaultPaper2_Callback cb) { qscilexercsharp_defaultpaper2_callback = cb; }
    inline void setQsciLexerCSharp_SetEditor_Callback(QsciLexerCSharp_SetEditor_Callback cb) { qscilexercsharp_seteditor_callback = cb; }
    inline void setQsciLexerCSharp_RefreshProperties_Callback(QsciLexerCSharp_RefreshProperties_Callback cb) { qscilexercsharp_refreshproperties_callback = cb; }
    inline void setQsciLexerCSharp_StyleBitsNeeded_Callback(QsciLexerCSharp_StyleBitsNeeded_Callback cb) { qscilexercsharp_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCSharp_WordCharacters_Callback(QsciLexerCSharp_WordCharacters_Callback cb) { qscilexercsharp_wordcharacters_callback = cb; }
    inline void setQsciLexerCSharp_SetAutoIndentStyle_Callback(QsciLexerCSharp_SetAutoIndentStyle_Callback cb) { qscilexercsharp_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCSharp_SetColor_Callback(QsciLexerCSharp_SetColor_Callback cb) { qscilexercsharp_setcolor_callback = cb; }
    inline void setQsciLexerCSharp_SetEolFill_Callback(QsciLexerCSharp_SetEolFill_Callback cb) { qscilexercsharp_seteolfill_callback = cb; }
    inline void setQsciLexerCSharp_SetFont_Callback(QsciLexerCSharp_SetFont_Callback cb) { qscilexercsharp_setfont_callback = cb; }
    inline void setQsciLexerCSharp_SetPaper_Callback(QsciLexerCSharp_SetPaper_Callback cb) { qscilexercsharp_setpaper_callback = cb; }
    inline void setQsciLexerCSharp_ReadProperties_Callback(QsciLexerCSharp_ReadProperties_Callback cb) { qscilexercsharp_readproperties_callback = cb; }
    inline void setQsciLexerCSharp_WriteProperties_Callback(QsciLexerCSharp_WriteProperties_Callback cb) { qscilexercsharp_writeproperties_callback = cb; }
    inline void setQsciLexerCSharp_Event_Callback(QsciLexerCSharp_Event_Callback cb) { qscilexercsharp_event_callback = cb; }
    inline void setQsciLexerCSharp_EventFilter_Callback(QsciLexerCSharp_EventFilter_Callback cb) { qscilexercsharp_eventfilter_callback = cb; }
    inline void setQsciLexerCSharp_TimerEvent_Callback(QsciLexerCSharp_TimerEvent_Callback cb) { qscilexercsharp_timerevent_callback = cb; }
    inline void setQsciLexerCSharp_ChildEvent_Callback(QsciLexerCSharp_ChildEvent_Callback cb) { qscilexercsharp_childevent_callback = cb; }
    inline void setQsciLexerCSharp_CustomEvent_Callback(QsciLexerCSharp_CustomEvent_Callback cb) { qscilexercsharp_customevent_callback = cb; }
    inline void setQsciLexerCSharp_ConnectNotify_Callback(QsciLexerCSharp_ConnectNotify_Callback cb) { qscilexercsharp_connectnotify_callback = cb; }
    inline void setQsciLexerCSharp_DisconnectNotify_Callback(QsciLexerCSharp_DisconnectNotify_Callback cb) { qscilexercsharp_disconnectnotify_callback = cb; }
    inline void setQsciLexerCSharp_TextAsBytes_Callback(QsciLexerCSharp_TextAsBytes_Callback cb) { qscilexercsharp_textasbytes_callback = cb; }
    inline void setQsciLexerCSharp_BytesAsText_Callback(QsciLexerCSharp_BytesAsText_Callback cb) { qscilexercsharp_bytesastext_callback = cb; }
    inline void setQsciLexerCSharp_Sender_Callback(QsciLexerCSharp_Sender_Callback cb) { qscilexercsharp_sender_callback = cb; }
    inline void setQsciLexerCSharp_SenderSignalIndex_Callback(QsciLexerCSharp_SenderSignalIndex_Callback cb) { qscilexercsharp_sendersignalindex_callback = cb; }
    inline void setQsciLexerCSharp_Receivers_Callback(QsciLexerCSharp_Receivers_Callback cb) { qscilexercsharp_receivers_callback = cb; }
    inline void setQsciLexerCSharp_IsSignalConnected_Callback(QsciLexerCSharp_IsSignalConnected_Callback cb) { qscilexercsharp_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCSharp_MetaObject_IsBase(bool value) const { qscilexercsharp_metaobject_isbase = value; }
    inline void setQsciLexerCSharp_Metacast_IsBase(bool value) const { qscilexercsharp_metacast_isbase = value; }
    inline void setQsciLexerCSharp_Metacall_IsBase(bool value) const { qscilexercsharp_metacall_isbase = value; }
    inline void setQsciLexerCSharp_SetFoldAtElse_IsBase(bool value) const { qscilexercsharp_setfoldatelse_isbase = value; }
    inline void setQsciLexerCSharp_SetFoldComments_IsBase(bool value) const { qscilexercsharp_setfoldcomments_isbase = value; }
    inline void setQsciLexerCSharp_SetFoldCompact_IsBase(bool value) const { qscilexercsharp_setfoldcompact_isbase = value; }
    inline void setQsciLexerCSharp_SetFoldPreprocessor_IsBase(bool value) const { qscilexercsharp_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerCSharp_SetStylePreprocessor_IsBase(bool value) const { qscilexercsharp_setstylepreprocessor_isbase = value; }
    inline void setQsciLexerCSharp_Language_IsBase(bool value) const { qscilexercsharp_language_isbase = value; }
    inline void setQsciLexerCSharp_Lexer_IsBase(bool value) const { qscilexercsharp_lexer_isbase = value; }
    inline void setQsciLexerCSharp_LexerId_IsBase(bool value) const { qscilexercsharp_lexerid_isbase = value; }
    inline void setQsciLexerCSharp_AutoCompletionFillups_IsBase(bool value) const { qscilexercsharp_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCSharp_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercsharp_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCSharp_BlockEnd_IsBase(bool value) const { qscilexercsharp_blockend_isbase = value; }
    inline void setQsciLexerCSharp_BlockLookback_IsBase(bool value) const { qscilexercsharp_blocklookback_isbase = value; }
    inline void setQsciLexerCSharp_BlockStart_IsBase(bool value) const { qscilexercsharp_blockstart_isbase = value; }
    inline void setQsciLexerCSharp_BlockStartKeyword_IsBase(bool value) const { qscilexercsharp_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCSharp_BraceStyle_IsBase(bool value) const { qscilexercsharp_bracestyle_isbase = value; }
    inline void setQsciLexerCSharp_CaseSensitive_IsBase(bool value) const { qscilexercsharp_casesensitive_isbase = value; }
    inline void setQsciLexerCSharp_Color_IsBase(bool value) const { qscilexercsharp_color_isbase = value; }
    inline void setQsciLexerCSharp_EolFill_IsBase(bool value) const { qscilexercsharp_eolfill_isbase = value; }
    inline void setQsciLexerCSharp_Font_IsBase(bool value) const { qscilexercsharp_font_isbase = value; }
    inline void setQsciLexerCSharp_IndentationGuideView_IsBase(bool value) const { qscilexercsharp_indentationguideview_isbase = value; }
    inline void setQsciLexerCSharp_Keywords_IsBase(bool value) const { qscilexercsharp_keywords_isbase = value; }
    inline void setQsciLexerCSharp_DefaultStyle_IsBase(bool value) const { qscilexercsharp_defaultstyle_isbase = value; }
    inline void setQsciLexerCSharp_Description_IsBase(bool value) const { qscilexercsharp_description_isbase = value; }
    inline void setQsciLexerCSharp_Paper_IsBase(bool value) const { qscilexercsharp_paper_isbase = value; }
    inline void setQsciLexerCSharp_DefaultColor2_IsBase(bool value) const { qscilexercsharp_defaultcolor2_isbase = value; }
    inline void setQsciLexerCSharp_DefaultEolFill_IsBase(bool value) const { qscilexercsharp_defaulteolfill_isbase = value; }
    inline void setQsciLexerCSharp_DefaultFont2_IsBase(bool value) const { qscilexercsharp_defaultfont2_isbase = value; }
    inline void setQsciLexerCSharp_DefaultPaper2_IsBase(bool value) const { qscilexercsharp_defaultpaper2_isbase = value; }
    inline void setQsciLexerCSharp_SetEditor_IsBase(bool value) const { qscilexercsharp_seteditor_isbase = value; }
    inline void setQsciLexerCSharp_RefreshProperties_IsBase(bool value) const { qscilexercsharp_refreshproperties_isbase = value; }
    inline void setQsciLexerCSharp_StyleBitsNeeded_IsBase(bool value) const { qscilexercsharp_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCSharp_WordCharacters_IsBase(bool value) const { qscilexercsharp_wordcharacters_isbase = value; }
    inline void setQsciLexerCSharp_SetAutoIndentStyle_IsBase(bool value) const { qscilexercsharp_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCSharp_SetColor_IsBase(bool value) const { qscilexercsharp_setcolor_isbase = value; }
    inline void setQsciLexerCSharp_SetEolFill_IsBase(bool value) const { qscilexercsharp_seteolfill_isbase = value; }
    inline void setQsciLexerCSharp_SetFont_IsBase(bool value) const { qscilexercsharp_setfont_isbase = value; }
    inline void setQsciLexerCSharp_SetPaper_IsBase(bool value) const { qscilexercsharp_setpaper_isbase = value; }
    inline void setQsciLexerCSharp_ReadProperties_IsBase(bool value) const { qscilexercsharp_readproperties_isbase = value; }
    inline void setQsciLexerCSharp_WriteProperties_IsBase(bool value) const { qscilexercsharp_writeproperties_isbase = value; }
    inline void setQsciLexerCSharp_Event_IsBase(bool value) const { qscilexercsharp_event_isbase = value; }
    inline void setQsciLexerCSharp_EventFilter_IsBase(bool value) const { qscilexercsharp_eventfilter_isbase = value; }
    inline void setQsciLexerCSharp_TimerEvent_IsBase(bool value) const { qscilexercsharp_timerevent_isbase = value; }
    inline void setQsciLexerCSharp_ChildEvent_IsBase(bool value) const { qscilexercsharp_childevent_isbase = value; }
    inline void setQsciLexerCSharp_CustomEvent_IsBase(bool value) const { qscilexercsharp_customevent_isbase = value; }
    inline void setQsciLexerCSharp_ConnectNotify_IsBase(bool value) const { qscilexercsharp_connectnotify_isbase = value; }
    inline void setQsciLexerCSharp_DisconnectNotify_IsBase(bool value) const { qscilexercsharp_disconnectnotify_isbase = value; }
    inline void setQsciLexerCSharp_TextAsBytes_IsBase(bool value) const { qscilexercsharp_textasbytes_isbase = value; }
    inline void setQsciLexerCSharp_BytesAsText_IsBase(bool value) const { qscilexercsharp_bytesastext_isbase = value; }
    inline void setQsciLexerCSharp_Sender_IsBase(bool value) const { qscilexercsharp_sender_isbase = value; }
    inline void setQsciLexerCSharp_SenderSignalIndex_IsBase(bool value) const { qscilexercsharp_sendersignalindex_isbase = value; }
    inline void setQsciLexerCSharp_Receivers_IsBase(bool value) const { qscilexercsharp_receivers_isbase = value; }
    inline void setQsciLexerCSharp_IsSignalConnected_IsBase(bool value) const { qscilexercsharp_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercsharp_metaobject_isbase) {
            qscilexercsharp_metaobject_isbase = false;
            return QsciLexerCSharp::metaObject();
        }
        auto metaobject_cb = qscilexercsharp_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercsharp_metacast_isbase) {
            qscilexercsharp_metacast_isbase = false;
            return QsciLexerCSharp::qt_metacast(param1);
        }
        auto metacast_cb = qscilexercsharp_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercsharp_metacall_isbase) {
            qscilexercsharp_metacall_isbase = false;
            return QsciLexerCSharp::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexercsharp_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercsharp_setfoldatelse_isbase) {
            qscilexercsharp_setfoldatelse_isbase = false;
            QsciLexerCSharp::setFoldAtElse(fold);
            return;
        }
        auto setfoldatelse_cb = qscilexercsharp_setfoldatelse_callback;
        if (setfoldatelse_cb) {
            bool cbval1 = fold;

            setfoldatelse_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercsharp_setfoldcomments_isbase) {
            qscilexercsharp_setfoldcomments_isbase = false;
            QsciLexerCSharp::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexercsharp_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercsharp_setfoldcompact_isbase) {
            qscilexercsharp_setfoldcompact_isbase = false;
            QsciLexerCSharp::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexercsharp_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercsharp_setfoldpreprocessor_isbase) {
            qscilexercsharp_setfoldpreprocessor_isbase = false;
            QsciLexerCSharp::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexercsharp_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercsharp_setstylepreprocessor_isbase) {
            qscilexercsharp_setstylepreprocessor_isbase = false;
            QsciLexerCSharp::setStylePreprocessor(style);
            return;
        }
        auto setstylepreprocessor_cb = qscilexercsharp_setstylepreprocessor_callback;
        if (setstylepreprocessor_cb) {
            bool cbval1 = style;

            setstylepreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexercsharp_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercsharp_lexer_isbase) {
            qscilexercsharp_lexer_isbase = false;
            return QsciLexerCSharp::lexer();
        }
        auto lexer_cb = qscilexercsharp_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercsharp_lexerid_isbase) {
            qscilexercsharp_lexerid_isbase = false;
            return QsciLexerCSharp::lexerId();
        }
        auto lexerid_cb = qscilexercsharp_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercsharp_autocompletionfillups_isbase) {
            qscilexercsharp_autocompletionfillups_isbase = false;
            return QsciLexerCSharp::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexercsharp_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercsharp_autocompletionwordseparators_isbase) {
            qscilexercsharp_autocompletionwordseparators_isbase = false;
            return QsciLexerCSharp::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexercsharp_autocompletionwordseparators_callback;
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
        return QsciLexerCSharp::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercsharp_blockend_isbase) {
            qscilexercsharp_blockend_isbase = false;
            return QsciLexerCSharp::blockEnd(style);
        }
        auto blockend_cb = qscilexercsharp_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercsharp_blocklookback_isbase) {
            qscilexercsharp_blocklookback_isbase = false;
            return QsciLexerCSharp::blockLookback();
        }
        auto blocklookback_cb = qscilexercsharp_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercsharp_blockstart_isbase) {
            qscilexercsharp_blockstart_isbase = false;
            return QsciLexerCSharp::blockStart(style);
        }
        auto blockstart_cb = qscilexercsharp_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercsharp_blockstartkeyword_isbase) {
            qscilexercsharp_blockstartkeyword_isbase = false;
            return QsciLexerCSharp::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexercsharp_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercsharp_bracestyle_isbase) {
            qscilexercsharp_bracestyle_isbase = false;
            return QsciLexerCSharp::braceStyle();
        }
        auto bracestyle_cb = qscilexercsharp_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercsharp_casesensitive_isbase) {
            qscilexercsharp_casesensitive_isbase = false;
            return QsciLexerCSharp::caseSensitive();
        }
        auto casesensitive_cb = qscilexercsharp_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercsharp_color_isbase) {
            qscilexercsharp_color_isbase = false;
            return QsciLexerCSharp::color(style);
        }
        auto color_cb = qscilexercsharp_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercsharp_eolfill_isbase) {
            qscilexercsharp_eolfill_isbase = false;
            return QsciLexerCSharp::eolFill(style);
        }
        auto eolfill_cb = qscilexercsharp_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercsharp_font_isbase) {
            qscilexercsharp_font_isbase = false;
            return QsciLexerCSharp::font(style);
        }
        auto font_cb = qscilexercsharp_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercsharp_indentationguideview_isbase) {
            qscilexercsharp_indentationguideview_isbase = false;
            return QsciLexerCSharp::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexercsharp_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercsharp_keywords_isbase) {
            qscilexercsharp_keywords_isbase = false;
            return QsciLexerCSharp::keywords(set);
        }
        auto keywords_cb = qscilexercsharp_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercsharp_defaultstyle_isbase) {
            qscilexercsharp_defaultstyle_isbase = false;
            return QsciLexerCSharp::defaultStyle();
        }
        auto defaultstyle_cb = qscilexercsharp_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexercsharp_description_callback;
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
        if (qscilexercsharp_paper_isbase) {
            qscilexercsharp_paper_isbase = false;
            return QsciLexerCSharp::paper(style);
        }
        auto paper_cb = qscilexercsharp_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercsharp_defaultcolor2_isbase) {
            qscilexercsharp_defaultcolor2_isbase = false;
            return QsciLexerCSharp::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexercsharp_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercsharp_defaulteolfill_isbase) {
            qscilexercsharp_defaulteolfill_isbase = false;
            return QsciLexerCSharp::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexercsharp_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercsharp_defaultfont2_isbase) {
            qscilexercsharp_defaultfont2_isbase = false;
            return QsciLexerCSharp::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexercsharp_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercsharp_defaultpaper2_isbase) {
            qscilexercsharp_defaultpaper2_isbase = false;
            return QsciLexerCSharp::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexercsharp_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCSharp::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercsharp_seteditor_isbase) {
            qscilexercsharp_seteditor_isbase = false;
            QsciLexerCSharp::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexercsharp_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercsharp_refreshproperties_isbase) {
            qscilexercsharp_refreshproperties_isbase = false;
            QsciLexerCSharp::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexercsharp_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerCSharp::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercsharp_stylebitsneeded_isbase) {
            qscilexercsharp_stylebitsneeded_isbase = false;
            return QsciLexerCSharp::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexercsharp_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercsharp_wordcharacters_isbase) {
            qscilexercsharp_wordcharacters_isbase = false;
            return QsciLexerCSharp::wordCharacters();
        }
        auto wordcharacters_cb = qscilexercsharp_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercsharp_setautoindentstyle_isbase) {
            qscilexercsharp_setautoindentstyle_isbase = false;
            QsciLexerCSharp::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexercsharp_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercsharp_setcolor_isbase) {
            qscilexercsharp_setcolor_isbase = false;
            QsciLexerCSharp::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexercsharp_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercsharp_seteolfill_isbase) {
            qscilexercsharp_seteolfill_isbase = false;
            QsciLexerCSharp::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexercsharp_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercsharp_setfont_isbase) {
            qscilexercsharp_setfont_isbase = false;
            QsciLexerCSharp::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexercsharp_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercsharp_setpaper_isbase) {
            qscilexercsharp_setpaper_isbase = false;
            QsciLexerCSharp::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexercsharp_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercsharp_readproperties_isbase) {
            qscilexercsharp_readproperties_isbase = false;
            return QsciLexerCSharp::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexercsharp_readproperties_callback;
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
        return QsciLexerCSharp::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercsharp_writeproperties_isbase) {
            qscilexercsharp_writeproperties_isbase = false;
            return QsciLexerCSharp::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexercsharp_writeproperties_callback;
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
        return QsciLexerCSharp::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercsharp_event_isbase) {
            qscilexercsharp_event_isbase = false;
            return QsciLexerCSharp::event(event);
        }
        auto event_cb = qscilexercsharp_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercsharp_eventfilter_isbase) {
            qscilexercsharp_eventfilter_isbase = false;
            return QsciLexerCSharp::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexercsharp_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCSharp::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercsharp_timerevent_isbase) {
            qscilexercsharp_timerevent_isbase = false;
            QsciLexerCSharp::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexercsharp_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercsharp_childevent_isbase) {
            qscilexercsharp_childevent_isbase = false;
            QsciLexerCSharp::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexercsharp_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercsharp_customevent_isbase) {
            qscilexercsharp_customevent_isbase = false;
            QsciLexerCSharp::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexercsharp_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_connectnotify_isbase) {
            qscilexercsharp_connectnotify_isbase = false;
            QsciLexerCSharp::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexercsharp_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_disconnectnotify_isbase) {
            qscilexercsharp_disconnectnotify_isbase = false;
            QsciLexerCSharp::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexercsharp_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCSharp::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexercsharp_textasbytes_isbase) {
            qscilexercsharp_textasbytes_isbase = false;
            return QsciLexerCSharp::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexercsharp_textasbytes_callback;
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
        return QsciLexerCSharp::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexercsharp_bytesastext_isbase) {
            qscilexercsharp_bytesastext_isbase = false;
            return QsciLexerCSharp::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexercsharp_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerCSharp::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercsharp_sender_isbase) {
            qscilexercsharp_sender_isbase = false;
            return QsciLexerCSharp::sender();
        }
        auto sender_cb = qscilexercsharp_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerCSharp::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercsharp_sendersignalindex_isbase) {
            qscilexercsharp_sendersignalindex_isbase = false;
            return QsciLexerCSharp::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexercsharp_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercsharp_receivers_isbase) {
            qscilexercsharp_receivers_isbase = false;
            return QsciLexerCSharp::receivers(signal);
        }
        auto receivers_cb = qscilexercsharp_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercsharp_issignalconnected_isbase) {
            qscilexercsharp_issignalconnected_isbase = false;
            return QsciLexerCSharp::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexercsharp_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerCSharp_ReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSharp_SuperReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSharp_WriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSharp_SuperWriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCSharp_TimerEvent(QsciLexerCSharp* self, QTimerEvent* event);
    friend void QsciLexerCSharp_SuperTimerEvent(QsciLexerCSharp* self, QTimerEvent* event);
    friend void QsciLexerCSharp_ChildEvent(QsciLexerCSharp* self, QChildEvent* event);
    friend void QsciLexerCSharp_SuperChildEvent(QsciLexerCSharp* self, QChildEvent* event);
    friend void QsciLexerCSharp_CustomEvent(QsciLexerCSharp* self, QEvent* event);
    friend void QsciLexerCSharp_SuperCustomEvent(QsciLexerCSharp* self, QEvent* event);
    friend void QsciLexerCSharp_ConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
    friend void QsciLexerCSharp_SuperConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
    friend void QsciLexerCSharp_DisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
    friend void QsciLexerCSharp_SuperDisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerCSharp_TextAsBytes(const QsciLexerCSharp* self, const libqt_string text);
    friend libqt_string QsciLexerCSharp_SuperTextAsBytes(const QsciLexerCSharp* self, const libqt_string text);
    friend libqt_string QsciLexerCSharp_BytesAsText(const QsciLexerCSharp* self, const char* bytes, int size);
    friend libqt_string QsciLexerCSharp_SuperBytesAsText(const QsciLexerCSharp* self, const char* bytes, int size);
    friend QObject* QsciLexerCSharp_Sender(const QsciLexerCSharp* self);
    friend QObject* QsciLexerCSharp_SuperSender(const QsciLexerCSharp* self);
    friend int QsciLexerCSharp_SenderSignalIndex(const QsciLexerCSharp* self);
    friend int QsciLexerCSharp_SuperSenderSignalIndex(const QsciLexerCSharp* self);
    friend int QsciLexerCSharp_Receivers(const QsciLexerCSharp* self, const char* signal);
    friend int QsciLexerCSharp_SuperReceivers(const QsciLexerCSharp* self, const char* signal);
    friend bool QsciLexerCSharp_IsSignalConnected(const QsciLexerCSharp* self, const QMetaMethod* signal);
    friend bool QsciLexerCSharp_SuperIsSignalConnected(const QsciLexerCSharp* self, const QMetaMethod* signal);
};

#endif
