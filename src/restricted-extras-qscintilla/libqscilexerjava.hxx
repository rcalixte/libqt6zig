#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVA_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJAVA_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJava so that we can call protected methods
class VirtualQsciLexerJava final : public QsciLexerJava {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerJava = true;

    // Virtual class public types (including callbacks)
    using QsciLexerJava_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerJava_Metacast_Callback = void* (*)(QsciLexerJava*, const char*);
    using QsciLexerJava_Metacall_Callback = int (*)(QsciLexerJava*, int, int, void**);
    using QsciLexerJava_SetFoldAtElse_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldComments_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldCompact_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldPreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetStylePreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_Language_Callback = const char* (*)();
    using QsciLexerJava_Lexer_Callback = const char* (*)();
    using QsciLexerJava_LexerId_Callback = int (*)();
    using QsciLexerJava_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerJava_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerJava_BlockEnd_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockLookback_Callback = int (*)();
    using QsciLexerJava_BlockStart_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BraceStyle_Callback = int (*)();
    using QsciLexerJava_CaseSensitive_Callback = bool (*)();
    using QsciLexerJava_Color_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_EolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Font_Callback = QFont* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_IndentationGuideView_Callback = int (*)();
    using QsciLexerJava_Keywords_Callback = const char* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultStyle_Callback = int (*)();
    using QsciLexerJava_Description_Callback = const char* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Paper_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultColor2_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultEolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultFont2_Callback = QFont* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultPaper2_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_SetEditor_Callback = void (*)(QsciLexerJava*, QsciScintilla*);
    using QsciLexerJava_RefreshProperties_Callback = void (*)();
    using QsciLexerJava_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerJava_WordCharacters_Callback = const char* (*)();
    using QsciLexerJava_SetAutoIndentStyle_Callback = void (*)(QsciLexerJava*, int);
    using QsciLexerJava_SetColor_Callback = void (*)(QsciLexerJava*, QColor*, int);
    using QsciLexerJava_SetEolFill_Callback = void (*)(QsciLexerJava*, bool, int);
    using QsciLexerJava_SetFont_Callback = void (*)(QsciLexerJava*, QFont*, int);
    using QsciLexerJava_SetPaper_Callback = void (*)(QsciLexerJava*, QColor*, int);
    using QsciLexerJava_ReadProperties_Callback = bool (*)(QsciLexerJava*, QSettings*, const char*);
    using QsciLexerJava_WriteProperties_Callback = bool (*)(const QsciLexerJava*, QSettings*, const char*);
    using QsciLexerJava_Event_Callback = bool (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_EventFilter_Callback = bool (*)(QsciLexerJava*, QObject*, QEvent*);
    using QsciLexerJava_TimerEvent_Callback = void (*)(QsciLexerJava*, QTimerEvent*);
    using QsciLexerJava_ChildEvent_Callback = void (*)(QsciLexerJava*, QChildEvent*);
    using QsciLexerJava_CustomEvent_Callback = void (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_ConnectNotify_Callback = void (*)(QsciLexerJava*, QMetaMethod*);
    using QsciLexerJava_DisconnectNotify_Callback = void (*)(QsciLexerJava*, QMetaMethod*);
    using QsciLexerJava_TextAsBytes_Callback = libqt_string (*)(const QsciLexerJava*, const char*);
    using QsciLexerJava_BytesAsText_Callback = const char* (*)(const QsciLexerJava*, const char*, int);
    using QsciLexerJava_Sender_Callback = QObject* (*)();
    using QsciLexerJava_SenderSignalIndex_Callback = int (*)();
    using QsciLexerJava_Receivers_Callback = int (*)(const QsciLexerJava*, const char*);
    using QsciLexerJava_IsSignalConnected_Callback = bool (*)(const QsciLexerJava*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerJava_MetaObject_Callback qscilexerjava_metaobject_callback = nullptr;
    QsciLexerJava_Metacast_Callback qscilexerjava_metacast_callback = nullptr;
    QsciLexerJava_Metacall_Callback qscilexerjava_metacall_callback = nullptr;
    QsciLexerJava_SetFoldAtElse_Callback qscilexerjava_setfoldatelse_callback = nullptr;
    QsciLexerJava_SetFoldComments_Callback qscilexerjava_setfoldcomments_callback = nullptr;
    QsciLexerJava_SetFoldCompact_Callback qscilexerjava_setfoldcompact_callback = nullptr;
    QsciLexerJava_SetFoldPreprocessor_Callback qscilexerjava_setfoldpreprocessor_callback = nullptr;
    QsciLexerJava_SetStylePreprocessor_Callback qscilexerjava_setstylepreprocessor_callback = nullptr;
    QsciLexerJava_Language_Callback qscilexerjava_language_callback = nullptr;
    QsciLexerJava_Lexer_Callback qscilexerjava_lexer_callback = nullptr;
    QsciLexerJava_LexerId_Callback qscilexerjava_lexerid_callback = nullptr;
    QsciLexerJava_AutoCompletionFillups_Callback qscilexerjava_autocompletionfillups_callback = nullptr;
    QsciLexerJava_AutoCompletionWordSeparators_Callback qscilexerjava_autocompletionwordseparators_callback = nullptr;
    QsciLexerJava_BlockEnd_Callback qscilexerjava_blockend_callback = nullptr;
    QsciLexerJava_BlockLookback_Callback qscilexerjava_blocklookback_callback = nullptr;
    QsciLexerJava_BlockStart_Callback qscilexerjava_blockstart_callback = nullptr;
    QsciLexerJava_BlockStartKeyword_Callback qscilexerjava_blockstartkeyword_callback = nullptr;
    QsciLexerJava_BraceStyle_Callback qscilexerjava_bracestyle_callback = nullptr;
    QsciLexerJava_CaseSensitive_Callback qscilexerjava_casesensitive_callback = nullptr;
    QsciLexerJava_Color_Callback qscilexerjava_color_callback = nullptr;
    QsciLexerJava_EolFill_Callback qscilexerjava_eolfill_callback = nullptr;
    QsciLexerJava_Font_Callback qscilexerjava_font_callback = nullptr;
    QsciLexerJava_IndentationGuideView_Callback qscilexerjava_indentationguideview_callback = nullptr;
    QsciLexerJava_Keywords_Callback qscilexerjava_keywords_callback = nullptr;
    QsciLexerJava_DefaultStyle_Callback qscilexerjava_defaultstyle_callback = nullptr;
    QsciLexerJava_Description_Callback qscilexerjava_description_callback = nullptr;
    QsciLexerJava_Paper_Callback qscilexerjava_paper_callback = nullptr;
    QsciLexerJava_DefaultColor2_Callback qscilexerjava_defaultcolor2_callback = nullptr;
    QsciLexerJava_DefaultEolFill_Callback qscilexerjava_defaulteolfill_callback = nullptr;
    QsciLexerJava_DefaultFont2_Callback qscilexerjava_defaultfont2_callback = nullptr;
    QsciLexerJava_DefaultPaper2_Callback qscilexerjava_defaultpaper2_callback = nullptr;
    QsciLexerJava_SetEditor_Callback qscilexerjava_seteditor_callback = nullptr;
    QsciLexerJava_RefreshProperties_Callback qscilexerjava_refreshproperties_callback = nullptr;
    QsciLexerJava_StyleBitsNeeded_Callback qscilexerjava_stylebitsneeded_callback = nullptr;
    QsciLexerJava_WordCharacters_Callback qscilexerjava_wordcharacters_callback = nullptr;
    QsciLexerJava_SetAutoIndentStyle_Callback qscilexerjava_setautoindentstyle_callback = nullptr;
    QsciLexerJava_SetColor_Callback qscilexerjava_setcolor_callback = nullptr;
    QsciLexerJava_SetEolFill_Callback qscilexerjava_seteolfill_callback = nullptr;
    QsciLexerJava_SetFont_Callback qscilexerjava_setfont_callback = nullptr;
    QsciLexerJava_SetPaper_Callback qscilexerjava_setpaper_callback = nullptr;
    QsciLexerJava_ReadProperties_Callback qscilexerjava_readproperties_callback = nullptr;
    QsciLexerJava_WriteProperties_Callback qscilexerjava_writeproperties_callback = nullptr;
    QsciLexerJava_Event_Callback qscilexerjava_event_callback = nullptr;
    QsciLexerJava_EventFilter_Callback qscilexerjava_eventfilter_callback = nullptr;
    QsciLexerJava_TimerEvent_Callback qscilexerjava_timerevent_callback = nullptr;
    QsciLexerJava_ChildEvent_Callback qscilexerjava_childevent_callback = nullptr;
    QsciLexerJava_CustomEvent_Callback qscilexerjava_customevent_callback = nullptr;
    QsciLexerJava_ConnectNotify_Callback qscilexerjava_connectnotify_callback = nullptr;
    QsciLexerJava_DisconnectNotify_Callback qscilexerjava_disconnectnotify_callback = nullptr;
    QsciLexerJava_TextAsBytes_Callback qscilexerjava_textasbytes_callback = nullptr;
    QsciLexerJava_BytesAsText_Callback qscilexerjava_bytesastext_callback = nullptr;
    QsciLexerJava_Sender_Callback qscilexerjava_sender_callback = nullptr;
    QsciLexerJava_SenderSignalIndex_Callback qscilexerjava_sendersignalindex_callback = nullptr;
    QsciLexerJava_Receivers_Callback qscilexerjava_receivers_callback = nullptr;
    QsciLexerJava_IsSignalConnected_Callback qscilexerjava_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerjava_metaobject_isbase = false;
    mutable bool qscilexerjava_metacast_isbase = false;
    mutable bool qscilexerjava_metacall_isbase = false;
    mutable bool qscilexerjava_setfoldatelse_isbase = false;
    mutable bool qscilexerjava_setfoldcomments_isbase = false;
    mutable bool qscilexerjava_setfoldcompact_isbase = false;
    mutable bool qscilexerjava_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerjava_setstylepreprocessor_isbase = false;
    mutable bool qscilexerjava_language_isbase = false;
    mutable bool qscilexerjava_lexer_isbase = false;
    mutable bool qscilexerjava_lexerid_isbase = false;
    mutable bool qscilexerjava_autocompletionfillups_isbase = false;
    mutable bool qscilexerjava_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerjava_blockend_isbase = false;
    mutable bool qscilexerjava_blocklookback_isbase = false;
    mutable bool qscilexerjava_blockstart_isbase = false;
    mutable bool qscilexerjava_blockstartkeyword_isbase = false;
    mutable bool qscilexerjava_bracestyle_isbase = false;
    mutable bool qscilexerjava_casesensitive_isbase = false;
    mutable bool qscilexerjava_color_isbase = false;
    mutable bool qscilexerjava_eolfill_isbase = false;
    mutable bool qscilexerjava_font_isbase = false;
    mutable bool qscilexerjava_indentationguideview_isbase = false;
    mutable bool qscilexerjava_keywords_isbase = false;
    mutable bool qscilexerjava_defaultstyle_isbase = false;
    mutable bool qscilexerjava_description_isbase = false;
    mutable bool qscilexerjava_paper_isbase = false;
    mutable bool qscilexerjava_defaultcolor2_isbase = false;
    mutable bool qscilexerjava_defaulteolfill_isbase = false;
    mutable bool qscilexerjava_defaultfont2_isbase = false;
    mutable bool qscilexerjava_defaultpaper2_isbase = false;
    mutable bool qscilexerjava_seteditor_isbase = false;
    mutable bool qscilexerjava_refreshproperties_isbase = false;
    mutable bool qscilexerjava_stylebitsneeded_isbase = false;
    mutable bool qscilexerjava_wordcharacters_isbase = false;
    mutable bool qscilexerjava_setautoindentstyle_isbase = false;
    mutable bool qscilexerjava_setcolor_isbase = false;
    mutable bool qscilexerjava_seteolfill_isbase = false;
    mutable bool qscilexerjava_setfont_isbase = false;
    mutable bool qscilexerjava_setpaper_isbase = false;
    mutable bool qscilexerjava_readproperties_isbase = false;
    mutable bool qscilexerjava_writeproperties_isbase = false;
    mutable bool qscilexerjava_event_isbase = false;
    mutable bool qscilexerjava_eventfilter_isbase = false;
    mutable bool qscilexerjava_timerevent_isbase = false;
    mutable bool qscilexerjava_childevent_isbase = false;
    mutable bool qscilexerjava_customevent_isbase = false;
    mutable bool qscilexerjava_connectnotify_isbase = false;
    mutable bool qscilexerjava_disconnectnotify_isbase = false;
    mutable bool qscilexerjava_textasbytes_isbase = false;
    mutable bool qscilexerjava_bytesastext_isbase = false;
    mutable bool qscilexerjava_sender_isbase = false;
    mutable bool qscilexerjava_sendersignalindex_isbase = false;
    mutable bool qscilexerjava_receivers_isbase = false;
    mutable bool qscilexerjava_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerJava() : QsciLexerJava() {};
    VirtualQsciLexerJava(QObject* parent) : QsciLexerJava(parent) {};

    // Callback setters
    inline void setQsciLexerJava_MetaObject_Callback(QsciLexerJava_MetaObject_Callback cb) { qscilexerjava_metaobject_callback = cb; }
    inline void setQsciLexerJava_Metacast_Callback(QsciLexerJava_Metacast_Callback cb) { qscilexerjava_metacast_callback = cb; }
    inline void setQsciLexerJava_Metacall_Callback(QsciLexerJava_Metacall_Callback cb) { qscilexerjava_metacall_callback = cb; }
    inline void setQsciLexerJava_SetFoldAtElse_Callback(QsciLexerJava_SetFoldAtElse_Callback cb) { qscilexerjava_setfoldatelse_callback = cb; }
    inline void setQsciLexerJava_SetFoldComments_Callback(QsciLexerJava_SetFoldComments_Callback cb) { qscilexerjava_setfoldcomments_callback = cb; }
    inline void setQsciLexerJava_SetFoldCompact_Callback(QsciLexerJava_SetFoldCompact_Callback cb) { qscilexerjava_setfoldcompact_callback = cb; }
    inline void setQsciLexerJava_SetFoldPreprocessor_Callback(QsciLexerJava_SetFoldPreprocessor_Callback cb) { qscilexerjava_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerJava_SetStylePreprocessor_Callback(QsciLexerJava_SetStylePreprocessor_Callback cb) { qscilexerjava_setstylepreprocessor_callback = cb; }
    inline void setQsciLexerJava_Language_Callback(QsciLexerJava_Language_Callback cb) { qscilexerjava_language_callback = cb; }
    inline void setQsciLexerJava_Lexer_Callback(QsciLexerJava_Lexer_Callback cb) { qscilexerjava_lexer_callback = cb; }
    inline void setQsciLexerJava_LexerId_Callback(QsciLexerJava_LexerId_Callback cb) { qscilexerjava_lexerid_callback = cb; }
    inline void setQsciLexerJava_AutoCompletionFillups_Callback(QsciLexerJava_AutoCompletionFillups_Callback cb) { qscilexerjava_autocompletionfillups_callback = cb; }
    inline void setQsciLexerJava_AutoCompletionWordSeparators_Callback(QsciLexerJava_AutoCompletionWordSeparators_Callback cb) { qscilexerjava_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerJava_BlockEnd_Callback(QsciLexerJava_BlockEnd_Callback cb) { qscilexerjava_blockend_callback = cb; }
    inline void setQsciLexerJava_BlockLookback_Callback(QsciLexerJava_BlockLookback_Callback cb) { qscilexerjava_blocklookback_callback = cb; }
    inline void setQsciLexerJava_BlockStart_Callback(QsciLexerJava_BlockStart_Callback cb) { qscilexerjava_blockstart_callback = cb; }
    inline void setQsciLexerJava_BlockStartKeyword_Callback(QsciLexerJava_BlockStartKeyword_Callback cb) { qscilexerjava_blockstartkeyword_callback = cb; }
    inline void setQsciLexerJava_BraceStyle_Callback(QsciLexerJava_BraceStyle_Callback cb) { qscilexerjava_bracestyle_callback = cb; }
    inline void setQsciLexerJava_CaseSensitive_Callback(QsciLexerJava_CaseSensitive_Callback cb) { qscilexerjava_casesensitive_callback = cb; }
    inline void setQsciLexerJava_Color_Callback(QsciLexerJava_Color_Callback cb) { qscilexerjava_color_callback = cb; }
    inline void setQsciLexerJava_EolFill_Callback(QsciLexerJava_EolFill_Callback cb) { qscilexerjava_eolfill_callback = cb; }
    inline void setQsciLexerJava_Font_Callback(QsciLexerJava_Font_Callback cb) { qscilexerjava_font_callback = cb; }
    inline void setQsciLexerJava_IndentationGuideView_Callback(QsciLexerJava_IndentationGuideView_Callback cb) { qscilexerjava_indentationguideview_callback = cb; }
    inline void setQsciLexerJava_Keywords_Callback(QsciLexerJava_Keywords_Callback cb) { qscilexerjava_keywords_callback = cb; }
    inline void setQsciLexerJava_DefaultStyle_Callback(QsciLexerJava_DefaultStyle_Callback cb) { qscilexerjava_defaultstyle_callback = cb; }
    inline void setQsciLexerJava_Description_Callback(QsciLexerJava_Description_Callback cb) { qscilexerjava_description_callback = cb; }
    inline void setQsciLexerJava_Paper_Callback(QsciLexerJava_Paper_Callback cb) { qscilexerjava_paper_callback = cb; }
    inline void setQsciLexerJava_DefaultColor2_Callback(QsciLexerJava_DefaultColor2_Callback cb) { qscilexerjava_defaultcolor2_callback = cb; }
    inline void setQsciLexerJava_DefaultEolFill_Callback(QsciLexerJava_DefaultEolFill_Callback cb) { qscilexerjava_defaulteolfill_callback = cb; }
    inline void setQsciLexerJava_DefaultFont2_Callback(QsciLexerJava_DefaultFont2_Callback cb) { qscilexerjava_defaultfont2_callback = cb; }
    inline void setQsciLexerJava_DefaultPaper2_Callback(QsciLexerJava_DefaultPaper2_Callback cb) { qscilexerjava_defaultpaper2_callback = cb; }
    inline void setQsciLexerJava_SetEditor_Callback(QsciLexerJava_SetEditor_Callback cb) { qscilexerjava_seteditor_callback = cb; }
    inline void setQsciLexerJava_RefreshProperties_Callback(QsciLexerJava_RefreshProperties_Callback cb) { qscilexerjava_refreshproperties_callback = cb; }
    inline void setQsciLexerJava_StyleBitsNeeded_Callback(QsciLexerJava_StyleBitsNeeded_Callback cb) { qscilexerjava_stylebitsneeded_callback = cb; }
    inline void setQsciLexerJava_WordCharacters_Callback(QsciLexerJava_WordCharacters_Callback cb) { qscilexerjava_wordcharacters_callback = cb; }
    inline void setQsciLexerJava_SetAutoIndentStyle_Callback(QsciLexerJava_SetAutoIndentStyle_Callback cb) { qscilexerjava_setautoindentstyle_callback = cb; }
    inline void setQsciLexerJava_SetColor_Callback(QsciLexerJava_SetColor_Callback cb) { qscilexerjava_setcolor_callback = cb; }
    inline void setQsciLexerJava_SetEolFill_Callback(QsciLexerJava_SetEolFill_Callback cb) { qscilexerjava_seteolfill_callback = cb; }
    inline void setQsciLexerJava_SetFont_Callback(QsciLexerJava_SetFont_Callback cb) { qscilexerjava_setfont_callback = cb; }
    inline void setQsciLexerJava_SetPaper_Callback(QsciLexerJava_SetPaper_Callback cb) { qscilexerjava_setpaper_callback = cb; }
    inline void setQsciLexerJava_ReadProperties_Callback(QsciLexerJava_ReadProperties_Callback cb) { qscilexerjava_readproperties_callback = cb; }
    inline void setQsciLexerJava_WriteProperties_Callback(QsciLexerJava_WriteProperties_Callback cb) { qscilexerjava_writeproperties_callback = cb; }
    inline void setQsciLexerJava_Event_Callback(QsciLexerJava_Event_Callback cb) { qscilexerjava_event_callback = cb; }
    inline void setQsciLexerJava_EventFilter_Callback(QsciLexerJava_EventFilter_Callback cb) { qscilexerjava_eventfilter_callback = cb; }
    inline void setQsciLexerJava_TimerEvent_Callback(QsciLexerJava_TimerEvent_Callback cb) { qscilexerjava_timerevent_callback = cb; }
    inline void setQsciLexerJava_ChildEvent_Callback(QsciLexerJava_ChildEvent_Callback cb) { qscilexerjava_childevent_callback = cb; }
    inline void setQsciLexerJava_CustomEvent_Callback(QsciLexerJava_CustomEvent_Callback cb) { qscilexerjava_customevent_callback = cb; }
    inline void setQsciLexerJava_ConnectNotify_Callback(QsciLexerJava_ConnectNotify_Callback cb) { qscilexerjava_connectnotify_callback = cb; }
    inline void setQsciLexerJava_DisconnectNotify_Callback(QsciLexerJava_DisconnectNotify_Callback cb) { qscilexerjava_disconnectnotify_callback = cb; }
    inline void setQsciLexerJava_TextAsBytes_Callback(QsciLexerJava_TextAsBytes_Callback cb) { qscilexerjava_textasbytes_callback = cb; }
    inline void setQsciLexerJava_BytesAsText_Callback(QsciLexerJava_BytesAsText_Callback cb) { qscilexerjava_bytesastext_callback = cb; }
    inline void setQsciLexerJava_Sender_Callback(QsciLexerJava_Sender_Callback cb) { qscilexerjava_sender_callback = cb; }
    inline void setQsciLexerJava_SenderSignalIndex_Callback(QsciLexerJava_SenderSignalIndex_Callback cb) { qscilexerjava_sendersignalindex_callback = cb; }
    inline void setQsciLexerJava_Receivers_Callback(QsciLexerJava_Receivers_Callback cb) { qscilexerjava_receivers_callback = cb; }
    inline void setQsciLexerJava_IsSignalConnected_Callback(QsciLexerJava_IsSignalConnected_Callback cb) { qscilexerjava_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerJava_MetaObject_IsBase(bool value) const { qscilexerjava_metaobject_isbase = value; }
    inline void setQsciLexerJava_Metacast_IsBase(bool value) const { qscilexerjava_metacast_isbase = value; }
    inline void setQsciLexerJava_Metacall_IsBase(bool value) const { qscilexerjava_metacall_isbase = value; }
    inline void setQsciLexerJava_SetFoldAtElse_IsBase(bool value) const { qscilexerjava_setfoldatelse_isbase = value; }
    inline void setQsciLexerJava_SetFoldComments_IsBase(bool value) const { qscilexerjava_setfoldcomments_isbase = value; }
    inline void setQsciLexerJava_SetFoldCompact_IsBase(bool value) const { qscilexerjava_setfoldcompact_isbase = value; }
    inline void setQsciLexerJava_SetFoldPreprocessor_IsBase(bool value) const { qscilexerjava_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerJava_SetStylePreprocessor_IsBase(bool value) const { qscilexerjava_setstylepreprocessor_isbase = value; }
    inline void setQsciLexerJava_Language_IsBase(bool value) const { qscilexerjava_language_isbase = value; }
    inline void setQsciLexerJava_Lexer_IsBase(bool value) const { qscilexerjava_lexer_isbase = value; }
    inline void setQsciLexerJava_LexerId_IsBase(bool value) const { qscilexerjava_lexerid_isbase = value; }
    inline void setQsciLexerJava_AutoCompletionFillups_IsBase(bool value) const { qscilexerjava_autocompletionfillups_isbase = value; }
    inline void setQsciLexerJava_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerjava_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerJava_BlockEnd_IsBase(bool value) const { qscilexerjava_blockend_isbase = value; }
    inline void setQsciLexerJava_BlockLookback_IsBase(bool value) const { qscilexerjava_blocklookback_isbase = value; }
    inline void setQsciLexerJava_BlockStart_IsBase(bool value) const { qscilexerjava_blockstart_isbase = value; }
    inline void setQsciLexerJava_BlockStartKeyword_IsBase(bool value) const { qscilexerjava_blockstartkeyword_isbase = value; }
    inline void setQsciLexerJava_BraceStyle_IsBase(bool value) const { qscilexerjava_bracestyle_isbase = value; }
    inline void setQsciLexerJava_CaseSensitive_IsBase(bool value) const { qscilexerjava_casesensitive_isbase = value; }
    inline void setQsciLexerJava_Color_IsBase(bool value) const { qscilexerjava_color_isbase = value; }
    inline void setQsciLexerJava_EolFill_IsBase(bool value) const { qscilexerjava_eolfill_isbase = value; }
    inline void setQsciLexerJava_Font_IsBase(bool value) const { qscilexerjava_font_isbase = value; }
    inline void setQsciLexerJava_IndentationGuideView_IsBase(bool value) const { qscilexerjava_indentationguideview_isbase = value; }
    inline void setQsciLexerJava_Keywords_IsBase(bool value) const { qscilexerjava_keywords_isbase = value; }
    inline void setQsciLexerJava_DefaultStyle_IsBase(bool value) const { qscilexerjava_defaultstyle_isbase = value; }
    inline void setQsciLexerJava_Description_IsBase(bool value) const { qscilexerjava_description_isbase = value; }
    inline void setQsciLexerJava_Paper_IsBase(bool value) const { qscilexerjava_paper_isbase = value; }
    inline void setQsciLexerJava_DefaultColor2_IsBase(bool value) const { qscilexerjava_defaultcolor2_isbase = value; }
    inline void setQsciLexerJava_DefaultEolFill_IsBase(bool value) const { qscilexerjava_defaulteolfill_isbase = value; }
    inline void setQsciLexerJava_DefaultFont2_IsBase(bool value) const { qscilexerjava_defaultfont2_isbase = value; }
    inline void setQsciLexerJava_DefaultPaper2_IsBase(bool value) const { qscilexerjava_defaultpaper2_isbase = value; }
    inline void setQsciLexerJava_SetEditor_IsBase(bool value) const { qscilexerjava_seteditor_isbase = value; }
    inline void setQsciLexerJava_RefreshProperties_IsBase(bool value) const { qscilexerjava_refreshproperties_isbase = value; }
    inline void setQsciLexerJava_StyleBitsNeeded_IsBase(bool value) const { qscilexerjava_stylebitsneeded_isbase = value; }
    inline void setQsciLexerJava_WordCharacters_IsBase(bool value) const { qscilexerjava_wordcharacters_isbase = value; }
    inline void setQsciLexerJava_SetAutoIndentStyle_IsBase(bool value) const { qscilexerjava_setautoindentstyle_isbase = value; }
    inline void setQsciLexerJava_SetColor_IsBase(bool value) const { qscilexerjava_setcolor_isbase = value; }
    inline void setQsciLexerJava_SetEolFill_IsBase(bool value) const { qscilexerjava_seteolfill_isbase = value; }
    inline void setQsciLexerJava_SetFont_IsBase(bool value) const { qscilexerjava_setfont_isbase = value; }
    inline void setQsciLexerJava_SetPaper_IsBase(bool value) const { qscilexerjava_setpaper_isbase = value; }
    inline void setQsciLexerJava_ReadProperties_IsBase(bool value) const { qscilexerjava_readproperties_isbase = value; }
    inline void setQsciLexerJava_WriteProperties_IsBase(bool value) const { qscilexerjava_writeproperties_isbase = value; }
    inline void setQsciLexerJava_Event_IsBase(bool value) const { qscilexerjava_event_isbase = value; }
    inline void setQsciLexerJava_EventFilter_IsBase(bool value) const { qscilexerjava_eventfilter_isbase = value; }
    inline void setQsciLexerJava_TimerEvent_IsBase(bool value) const { qscilexerjava_timerevent_isbase = value; }
    inline void setQsciLexerJava_ChildEvent_IsBase(bool value) const { qscilexerjava_childevent_isbase = value; }
    inline void setQsciLexerJava_CustomEvent_IsBase(bool value) const { qscilexerjava_customevent_isbase = value; }
    inline void setQsciLexerJava_ConnectNotify_IsBase(bool value) const { qscilexerjava_connectnotify_isbase = value; }
    inline void setQsciLexerJava_DisconnectNotify_IsBase(bool value) const { qscilexerjava_disconnectnotify_isbase = value; }
    inline void setQsciLexerJava_TextAsBytes_IsBase(bool value) const { qscilexerjava_textasbytes_isbase = value; }
    inline void setQsciLexerJava_BytesAsText_IsBase(bool value) const { qscilexerjava_bytesastext_isbase = value; }
    inline void setQsciLexerJava_Sender_IsBase(bool value) const { qscilexerjava_sender_isbase = value; }
    inline void setQsciLexerJava_SenderSignalIndex_IsBase(bool value) const { qscilexerjava_sendersignalindex_isbase = value; }
    inline void setQsciLexerJava_Receivers_IsBase(bool value) const { qscilexerjava_receivers_isbase = value; }
    inline void setQsciLexerJava_IsSignalConnected_IsBase(bool value) const { qscilexerjava_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerjava_metaobject_isbase) {
            qscilexerjava_metaobject_isbase = false;
            return QsciLexerJava::metaObject();
        }
        auto metaobject_cb = qscilexerjava_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerJava::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerjava_metacast_isbase) {
            qscilexerjava_metacast_isbase = false;
            return QsciLexerJava::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerjava_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjava_metacall_isbase) {
            qscilexerjava_metacall_isbase = false;
            return QsciLexerJava::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerjava_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerjava_setfoldatelse_isbase) {
            qscilexerjava_setfoldatelse_isbase = false;
            QsciLexerJava::setFoldAtElse(fold);
            return;
        }
        auto setfoldatelse_cb = qscilexerjava_setfoldatelse_callback;
        if (setfoldatelse_cb) {
            bool cbval1 = fold;

            setfoldatelse_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerjava_setfoldcomments_isbase) {
            qscilexerjava_setfoldcomments_isbase = false;
            QsciLexerJava::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexerjava_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerjava_setfoldcompact_isbase) {
            qscilexerjava_setfoldcompact_isbase = false;
            QsciLexerJava::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerjava_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerjava_setfoldpreprocessor_isbase) {
            qscilexerjava_setfoldpreprocessor_isbase = false;
            QsciLexerJava::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexerjava_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexerjava_setstylepreprocessor_isbase) {
            qscilexerjava_setstylepreprocessor_isbase = false;
            QsciLexerJava::setStylePreprocessor(style);
            return;
        }
        auto setstylepreprocessor_cb = qscilexerjava_setstylepreprocessor_callback;
        if (setstylepreprocessor_cb) {
            bool cbval1 = style;

            setstylepreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerjava_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjava_lexer_isbase) {
            qscilexerjava_lexer_isbase = false;
            return QsciLexerJava::lexer();
        }
        auto lexer_cb = qscilexerjava_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerJava::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjava_lexerid_isbase) {
            qscilexerjava_lexerid_isbase = false;
            return QsciLexerJava::lexerId();
        }
        auto lexerid_cb = qscilexerjava_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjava_autocompletionfillups_isbase) {
            qscilexerjava_autocompletionfillups_isbase = false;
            return QsciLexerJava::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerjava_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerJava::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerjava_autocompletionwordseparators_isbase) {
            qscilexerjava_autocompletionwordseparators_isbase = false;
            return QsciLexerJava::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerjava_autocompletionwordseparators_callback;
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
        return QsciLexerJava::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjava_blockend_isbase) {
            qscilexerjava_blockend_isbase = false;
            return QsciLexerJava::blockEnd(style);
        }
        auto blockend_cb = qscilexerjava_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjava_blocklookback_isbase) {
            qscilexerjava_blocklookback_isbase = false;
            return QsciLexerJava::blockLookback();
        }
        auto blocklookback_cb = qscilexerjava_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjava_blockstart_isbase) {
            qscilexerjava_blockstart_isbase = false;
            return QsciLexerJava::blockStart(style);
        }
        auto blockstart_cb = qscilexerjava_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjava_blockstartkeyword_isbase) {
            qscilexerjava_blockstartkeyword_isbase = false;
            return QsciLexerJava::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerjava_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjava_bracestyle_isbase) {
            qscilexerjava_bracestyle_isbase = false;
            return QsciLexerJava::braceStyle();
        }
        auto bracestyle_cb = qscilexerjava_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjava_casesensitive_isbase) {
            qscilexerjava_casesensitive_isbase = false;
            return QsciLexerJava::caseSensitive();
        }
        auto casesensitive_cb = qscilexerjava_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerJava::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjava_color_isbase) {
            qscilexerjava_color_isbase = false;
            return QsciLexerJava::color(style);
        }
        auto color_cb = qscilexerjava_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjava_eolfill_isbase) {
            qscilexerjava_eolfill_isbase = false;
            return QsciLexerJava::eolFill(style);
        }
        auto eolfill_cb = qscilexerjava_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjava_font_isbase) {
            qscilexerjava_font_isbase = false;
            return QsciLexerJava::font(style);
        }
        auto font_cb = qscilexerjava_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjava_indentationguideview_isbase) {
            qscilexerjava_indentationguideview_isbase = false;
            return QsciLexerJava::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerjava_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjava_keywords_isbase) {
            qscilexerjava_keywords_isbase = false;
            return QsciLexerJava::keywords(set);
        }
        auto keywords_cb = qscilexerjava_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjava_defaultstyle_isbase) {
            qscilexerjava_defaultstyle_isbase = false;
            return QsciLexerJava::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerjava_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerjava_description_callback;
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
        if (qscilexerjava_paper_isbase) {
            qscilexerjava_paper_isbase = false;
            return QsciLexerJava::paper(style);
        }
        auto paper_cb = qscilexerjava_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjava_defaultcolor2_isbase) {
            qscilexerjava_defaultcolor2_isbase = false;
            return QsciLexerJava::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerjava_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjava_defaulteolfill_isbase) {
            qscilexerjava_defaulteolfill_isbase = false;
            return QsciLexerJava::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerjava_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjava_defaultfont2_isbase) {
            qscilexerjava_defaultfont2_isbase = false;
            return QsciLexerJava::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerjava_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjava_defaultpaper2_isbase) {
            qscilexerjava_defaultpaper2_isbase = false;
            return QsciLexerJava::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerjava_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerJava::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjava_seteditor_isbase) {
            qscilexerjava_seteditor_isbase = false;
            QsciLexerJava::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerjava_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjava_refreshproperties_isbase) {
            qscilexerjava_refreshproperties_isbase = false;
            QsciLexerJava::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerjava_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerJava::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjava_stylebitsneeded_isbase) {
            qscilexerjava_stylebitsneeded_isbase = false;
            return QsciLexerJava::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerjava_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjava_wordcharacters_isbase) {
            qscilexerjava_wordcharacters_isbase = false;
            return QsciLexerJava::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerjava_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerJava::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjava_setautoindentstyle_isbase) {
            qscilexerjava_setautoindentstyle_isbase = false;
            QsciLexerJava::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerjava_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerJava::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjava_setcolor_isbase) {
            qscilexerjava_setcolor_isbase = false;
            QsciLexerJava::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerjava_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjava_seteolfill_isbase) {
            qscilexerjava_seteolfill_isbase = false;
            QsciLexerJava::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerjava_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjava_setfont_isbase) {
            qscilexerjava_setfont_isbase = false;
            QsciLexerJava::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerjava_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjava_setpaper_isbase) {
            qscilexerjava_setpaper_isbase = false;
            QsciLexerJava::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerjava_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjava_readproperties_isbase) {
            qscilexerjava_readproperties_isbase = false;
            return QsciLexerJava::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerjava_readproperties_callback;
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
        return QsciLexerJava::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjava_writeproperties_isbase) {
            qscilexerjava_writeproperties_isbase = false;
            return QsciLexerJava::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerjava_writeproperties_callback;
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
        return QsciLexerJava::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjava_event_isbase) {
            qscilexerjava_event_isbase = false;
            return QsciLexerJava::event(event);
        }
        auto event_cb = qscilexerjava_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjava_eventfilter_isbase) {
            qscilexerjava_eventfilter_isbase = false;
            return QsciLexerJava::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerjava_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerJava::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjava_timerevent_isbase) {
            qscilexerjava_timerevent_isbase = false;
            QsciLexerJava::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerjava_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerJava::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjava_childevent_isbase) {
            qscilexerjava_childevent_isbase = false;
            QsciLexerJava::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerjava_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerJava::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjava_customevent_isbase) {
            qscilexerjava_customevent_isbase = false;
            QsciLexerJava::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerjava_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerJava::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_connectnotify_isbase) {
            qscilexerjava_connectnotify_isbase = false;
            QsciLexerJava::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerjava_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerJava::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_disconnectnotify_isbase) {
            qscilexerjava_disconnectnotify_isbase = false;
            QsciLexerJava::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerjava_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerJava::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerjava_textasbytes_isbase) {
            qscilexerjava_textasbytes_isbase = false;
            return QsciLexerJava::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerjava_textasbytes_callback;
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
        return QsciLexerJava::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerjava_bytesastext_isbase) {
            qscilexerjava_bytesastext_isbase = false;
            return QsciLexerJava::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerjava_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerJava::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerjava_sender_isbase) {
            qscilexerjava_sender_isbase = false;
            return QsciLexerJava::sender();
        }
        auto sender_cb = qscilexerjava_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerJava::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerjava_sendersignalindex_isbase) {
            qscilexerjava_sendersignalindex_isbase = false;
            return QsciLexerJava::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerjava_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerjava_receivers_isbase) {
            qscilexerjava_receivers_isbase = false;
            return QsciLexerJava::receivers(signal);
        }
        auto receivers_cb = qscilexerjava_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerjava_issignalconnected_isbase) {
            qscilexerjava_issignalconnected_isbase = false;
            return QsciLexerJava::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerjava_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerJava_ReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJava_SuperReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJava_WriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJava_SuperWriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJava_TimerEvent(QsciLexerJava* self, QTimerEvent* event);
    friend void QsciLexerJava_SuperTimerEvent(QsciLexerJava* self, QTimerEvent* event);
    friend void QsciLexerJava_ChildEvent(QsciLexerJava* self, QChildEvent* event);
    friend void QsciLexerJava_SuperChildEvent(QsciLexerJava* self, QChildEvent* event);
    friend void QsciLexerJava_CustomEvent(QsciLexerJava* self, QEvent* event);
    friend void QsciLexerJava_SuperCustomEvent(QsciLexerJava* self, QEvent* event);
    friend void QsciLexerJava_ConnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
    friend void QsciLexerJava_SuperConnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
    friend void QsciLexerJava_DisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
    friend void QsciLexerJava_SuperDisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerJava_TextAsBytes(const QsciLexerJava* self, const libqt_string text);
    friend libqt_string QsciLexerJava_SuperTextAsBytes(const QsciLexerJava* self, const libqt_string text);
    friend libqt_string QsciLexerJava_BytesAsText(const QsciLexerJava* self, const char* bytes, int size);
    friend libqt_string QsciLexerJava_SuperBytesAsText(const QsciLexerJava* self, const char* bytes, int size);
    friend QObject* QsciLexerJava_Sender(const QsciLexerJava* self);
    friend QObject* QsciLexerJava_SuperSender(const QsciLexerJava* self);
    friend int QsciLexerJava_SenderSignalIndex(const QsciLexerJava* self);
    friend int QsciLexerJava_SuperSenderSignalIndex(const QsciLexerJava* self);
    friend int QsciLexerJava_Receivers(const QsciLexerJava* self, const char* signal);
    friend int QsciLexerJava_SuperReceivers(const QsciLexerJava* self, const char* signal);
    friend bool QsciLexerJava_IsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal);
    friend bool QsciLexerJava_SuperIsSignalConnected(const QsciLexerJava* self, const QMetaMethod* signal);
};

#endif
