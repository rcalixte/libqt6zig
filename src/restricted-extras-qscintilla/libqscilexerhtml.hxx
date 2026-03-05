#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHTML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHTML_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerHTML so that we can call protected methods
class VirtualQsciLexerHTML final : public QsciLexerHTML {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerHTML = true;

    // Virtual class public types (including callbacks)
    using QsciLexerHTML_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerHTML_Metacast_Callback = void* (*)(QsciLexerHTML*, const char*);
    using QsciLexerHTML_Metacall_Callback = int (*)(QsciLexerHTML*, int, int, void**);
    using QsciLexerHTML_SetFoldCompact_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_SetFoldPreprocessor_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_SetCaseSensitiveTags_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_Language_Callback = const char* (*)();
    using QsciLexerHTML_Lexer_Callback = const char* (*)();
    using QsciLexerHTML_LexerId_Callback = int (*)();
    using QsciLexerHTML_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerHTML_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerHTML_BlockEnd_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BlockLookback_Callback = int (*)();
    using QsciLexerHTML_BlockStart_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BraceStyle_Callback = int (*)();
    using QsciLexerHTML_CaseSensitive_Callback = bool (*)();
    using QsciLexerHTML_Color_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_EolFill_Callback = bool (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_Font_Callback = QFont* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_IndentationGuideView_Callback = int (*)();
    using QsciLexerHTML_Keywords_Callback = const char* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultStyle_Callback = int (*)();
    using QsciLexerHTML_Description_Callback = const char* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_Paper_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultColor2_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultEolFill_Callback = bool (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultFont2_Callback = QFont* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultPaper2_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_SetEditor_Callback = void (*)(QsciLexerHTML*, QsciScintilla*);
    using QsciLexerHTML_RefreshProperties_Callback = void (*)();
    using QsciLexerHTML_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerHTML_WordCharacters_Callback = const char* (*)();
    using QsciLexerHTML_SetAutoIndentStyle_Callback = void (*)(QsciLexerHTML*, int);
    using QsciLexerHTML_SetColor_Callback = void (*)(QsciLexerHTML*, QColor*, int);
    using QsciLexerHTML_SetEolFill_Callback = void (*)(QsciLexerHTML*, bool, int);
    using QsciLexerHTML_SetFont_Callback = void (*)(QsciLexerHTML*, QFont*, int);
    using QsciLexerHTML_SetPaper_Callback = void (*)(QsciLexerHTML*, QColor*, int);
    using QsciLexerHTML_ReadProperties_Callback = bool (*)(QsciLexerHTML*, QSettings*, const char*);
    using QsciLexerHTML_WriteProperties_Callback = bool (*)(const QsciLexerHTML*, QSettings*, const char*);
    using QsciLexerHTML_Event_Callback = bool (*)(QsciLexerHTML*, QEvent*);
    using QsciLexerHTML_EventFilter_Callback = bool (*)(QsciLexerHTML*, QObject*, QEvent*);
    using QsciLexerHTML_TimerEvent_Callback = void (*)(QsciLexerHTML*, QTimerEvent*);
    using QsciLexerHTML_ChildEvent_Callback = void (*)(QsciLexerHTML*, QChildEvent*);
    using QsciLexerHTML_CustomEvent_Callback = void (*)(QsciLexerHTML*, QEvent*);
    using QsciLexerHTML_ConnectNotify_Callback = void (*)(QsciLexerHTML*, QMetaMethod*);
    using QsciLexerHTML_DisconnectNotify_Callback = void (*)(QsciLexerHTML*, QMetaMethod*);
    using QsciLexerHTML_TextAsBytes_Callback = libqt_string (*)(const QsciLexerHTML*, const char*);
    using QsciLexerHTML_BytesAsText_Callback = const char* (*)(const QsciLexerHTML*, const char*, int);
    using QsciLexerHTML_Sender_Callback = QObject* (*)();
    using QsciLexerHTML_SenderSignalIndex_Callback = int (*)();
    using QsciLexerHTML_Receivers_Callback = int (*)(const QsciLexerHTML*, const char*);
    using QsciLexerHTML_IsSignalConnected_Callback = bool (*)(const QsciLexerHTML*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerHTML_MetaObject_Callback qscilexerhtml_metaobject_callback = nullptr;
    QsciLexerHTML_Metacast_Callback qscilexerhtml_metacast_callback = nullptr;
    QsciLexerHTML_Metacall_Callback qscilexerhtml_metacall_callback = nullptr;
    QsciLexerHTML_SetFoldCompact_Callback qscilexerhtml_setfoldcompact_callback = nullptr;
    QsciLexerHTML_SetFoldPreprocessor_Callback qscilexerhtml_setfoldpreprocessor_callback = nullptr;
    QsciLexerHTML_SetCaseSensitiveTags_Callback qscilexerhtml_setcasesensitivetags_callback = nullptr;
    QsciLexerHTML_Language_Callback qscilexerhtml_language_callback = nullptr;
    QsciLexerHTML_Lexer_Callback qscilexerhtml_lexer_callback = nullptr;
    QsciLexerHTML_LexerId_Callback qscilexerhtml_lexerid_callback = nullptr;
    QsciLexerHTML_AutoCompletionFillups_Callback qscilexerhtml_autocompletionfillups_callback = nullptr;
    QsciLexerHTML_AutoCompletionWordSeparators_Callback qscilexerhtml_autocompletionwordseparators_callback = nullptr;
    QsciLexerHTML_BlockEnd_Callback qscilexerhtml_blockend_callback = nullptr;
    QsciLexerHTML_BlockLookback_Callback qscilexerhtml_blocklookback_callback = nullptr;
    QsciLexerHTML_BlockStart_Callback qscilexerhtml_blockstart_callback = nullptr;
    QsciLexerHTML_BlockStartKeyword_Callback qscilexerhtml_blockstartkeyword_callback = nullptr;
    QsciLexerHTML_BraceStyle_Callback qscilexerhtml_bracestyle_callback = nullptr;
    QsciLexerHTML_CaseSensitive_Callback qscilexerhtml_casesensitive_callback = nullptr;
    QsciLexerHTML_Color_Callback qscilexerhtml_color_callback = nullptr;
    QsciLexerHTML_EolFill_Callback qscilexerhtml_eolfill_callback = nullptr;
    QsciLexerHTML_Font_Callback qscilexerhtml_font_callback = nullptr;
    QsciLexerHTML_IndentationGuideView_Callback qscilexerhtml_indentationguideview_callback = nullptr;
    QsciLexerHTML_Keywords_Callback qscilexerhtml_keywords_callback = nullptr;
    QsciLexerHTML_DefaultStyle_Callback qscilexerhtml_defaultstyle_callback = nullptr;
    QsciLexerHTML_Description_Callback qscilexerhtml_description_callback = nullptr;
    QsciLexerHTML_Paper_Callback qscilexerhtml_paper_callback = nullptr;
    QsciLexerHTML_DefaultColor2_Callback qscilexerhtml_defaultcolor2_callback = nullptr;
    QsciLexerHTML_DefaultEolFill_Callback qscilexerhtml_defaulteolfill_callback = nullptr;
    QsciLexerHTML_DefaultFont2_Callback qscilexerhtml_defaultfont2_callback = nullptr;
    QsciLexerHTML_DefaultPaper2_Callback qscilexerhtml_defaultpaper2_callback = nullptr;
    QsciLexerHTML_SetEditor_Callback qscilexerhtml_seteditor_callback = nullptr;
    QsciLexerHTML_RefreshProperties_Callback qscilexerhtml_refreshproperties_callback = nullptr;
    QsciLexerHTML_StyleBitsNeeded_Callback qscilexerhtml_stylebitsneeded_callback = nullptr;
    QsciLexerHTML_WordCharacters_Callback qscilexerhtml_wordcharacters_callback = nullptr;
    QsciLexerHTML_SetAutoIndentStyle_Callback qscilexerhtml_setautoindentstyle_callback = nullptr;
    QsciLexerHTML_SetColor_Callback qscilexerhtml_setcolor_callback = nullptr;
    QsciLexerHTML_SetEolFill_Callback qscilexerhtml_seteolfill_callback = nullptr;
    QsciLexerHTML_SetFont_Callback qscilexerhtml_setfont_callback = nullptr;
    QsciLexerHTML_SetPaper_Callback qscilexerhtml_setpaper_callback = nullptr;
    QsciLexerHTML_ReadProperties_Callback qscilexerhtml_readproperties_callback = nullptr;
    QsciLexerHTML_WriteProperties_Callback qscilexerhtml_writeproperties_callback = nullptr;
    QsciLexerHTML_Event_Callback qscilexerhtml_event_callback = nullptr;
    QsciLexerHTML_EventFilter_Callback qscilexerhtml_eventfilter_callback = nullptr;
    QsciLexerHTML_TimerEvent_Callback qscilexerhtml_timerevent_callback = nullptr;
    QsciLexerHTML_ChildEvent_Callback qscilexerhtml_childevent_callback = nullptr;
    QsciLexerHTML_CustomEvent_Callback qscilexerhtml_customevent_callback = nullptr;
    QsciLexerHTML_ConnectNotify_Callback qscilexerhtml_connectnotify_callback = nullptr;
    QsciLexerHTML_DisconnectNotify_Callback qscilexerhtml_disconnectnotify_callback = nullptr;
    QsciLexerHTML_TextAsBytes_Callback qscilexerhtml_textasbytes_callback = nullptr;
    QsciLexerHTML_BytesAsText_Callback qscilexerhtml_bytesastext_callback = nullptr;
    QsciLexerHTML_Sender_Callback qscilexerhtml_sender_callback = nullptr;
    QsciLexerHTML_SenderSignalIndex_Callback qscilexerhtml_sendersignalindex_callback = nullptr;
    QsciLexerHTML_Receivers_Callback qscilexerhtml_receivers_callback = nullptr;
    QsciLexerHTML_IsSignalConnected_Callback qscilexerhtml_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerhtml_metaobject_isbase = false;
    mutable bool qscilexerhtml_metacast_isbase = false;
    mutable bool qscilexerhtml_metacall_isbase = false;
    mutable bool qscilexerhtml_setfoldcompact_isbase = false;
    mutable bool qscilexerhtml_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerhtml_setcasesensitivetags_isbase = false;
    mutable bool qscilexerhtml_language_isbase = false;
    mutable bool qscilexerhtml_lexer_isbase = false;
    mutable bool qscilexerhtml_lexerid_isbase = false;
    mutable bool qscilexerhtml_autocompletionfillups_isbase = false;
    mutable bool qscilexerhtml_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerhtml_blockend_isbase = false;
    mutable bool qscilexerhtml_blocklookback_isbase = false;
    mutable bool qscilexerhtml_blockstart_isbase = false;
    mutable bool qscilexerhtml_blockstartkeyword_isbase = false;
    mutable bool qscilexerhtml_bracestyle_isbase = false;
    mutable bool qscilexerhtml_casesensitive_isbase = false;
    mutable bool qscilexerhtml_color_isbase = false;
    mutable bool qscilexerhtml_eolfill_isbase = false;
    mutable bool qscilexerhtml_font_isbase = false;
    mutable bool qscilexerhtml_indentationguideview_isbase = false;
    mutable bool qscilexerhtml_keywords_isbase = false;
    mutable bool qscilexerhtml_defaultstyle_isbase = false;
    mutable bool qscilexerhtml_description_isbase = false;
    mutable bool qscilexerhtml_paper_isbase = false;
    mutable bool qscilexerhtml_defaultcolor2_isbase = false;
    mutable bool qscilexerhtml_defaulteolfill_isbase = false;
    mutable bool qscilexerhtml_defaultfont2_isbase = false;
    mutable bool qscilexerhtml_defaultpaper2_isbase = false;
    mutable bool qscilexerhtml_seteditor_isbase = false;
    mutable bool qscilexerhtml_refreshproperties_isbase = false;
    mutable bool qscilexerhtml_stylebitsneeded_isbase = false;
    mutable bool qscilexerhtml_wordcharacters_isbase = false;
    mutable bool qscilexerhtml_setautoindentstyle_isbase = false;
    mutable bool qscilexerhtml_setcolor_isbase = false;
    mutable bool qscilexerhtml_seteolfill_isbase = false;
    mutable bool qscilexerhtml_setfont_isbase = false;
    mutable bool qscilexerhtml_setpaper_isbase = false;
    mutable bool qscilexerhtml_readproperties_isbase = false;
    mutable bool qscilexerhtml_writeproperties_isbase = false;
    mutable bool qscilexerhtml_event_isbase = false;
    mutable bool qscilexerhtml_eventfilter_isbase = false;
    mutable bool qscilexerhtml_timerevent_isbase = false;
    mutable bool qscilexerhtml_childevent_isbase = false;
    mutable bool qscilexerhtml_customevent_isbase = false;
    mutable bool qscilexerhtml_connectnotify_isbase = false;
    mutable bool qscilexerhtml_disconnectnotify_isbase = false;
    mutable bool qscilexerhtml_textasbytes_isbase = false;
    mutable bool qscilexerhtml_bytesastext_isbase = false;
    mutable bool qscilexerhtml_sender_isbase = false;
    mutable bool qscilexerhtml_sendersignalindex_isbase = false;
    mutable bool qscilexerhtml_receivers_isbase = false;
    mutable bool qscilexerhtml_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerHTML() : QsciLexerHTML() {};
    VirtualQsciLexerHTML(QObject* parent) : QsciLexerHTML(parent) {};

    // Callback setters
    inline void setQsciLexerHTML_MetaObject_Callback(QsciLexerHTML_MetaObject_Callback cb) { qscilexerhtml_metaobject_callback = cb; }
    inline void setQsciLexerHTML_Metacast_Callback(QsciLexerHTML_Metacast_Callback cb) { qscilexerhtml_metacast_callback = cb; }
    inline void setQsciLexerHTML_Metacall_Callback(QsciLexerHTML_Metacall_Callback cb) { qscilexerhtml_metacall_callback = cb; }
    inline void setQsciLexerHTML_SetFoldCompact_Callback(QsciLexerHTML_SetFoldCompact_Callback cb) { qscilexerhtml_setfoldcompact_callback = cb; }
    inline void setQsciLexerHTML_SetFoldPreprocessor_Callback(QsciLexerHTML_SetFoldPreprocessor_Callback cb) { qscilexerhtml_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerHTML_SetCaseSensitiveTags_Callback(QsciLexerHTML_SetCaseSensitiveTags_Callback cb) { qscilexerhtml_setcasesensitivetags_callback = cb; }
    inline void setQsciLexerHTML_Language_Callback(QsciLexerHTML_Language_Callback cb) { qscilexerhtml_language_callback = cb; }
    inline void setQsciLexerHTML_Lexer_Callback(QsciLexerHTML_Lexer_Callback cb) { qscilexerhtml_lexer_callback = cb; }
    inline void setQsciLexerHTML_LexerId_Callback(QsciLexerHTML_LexerId_Callback cb) { qscilexerhtml_lexerid_callback = cb; }
    inline void setQsciLexerHTML_AutoCompletionFillups_Callback(QsciLexerHTML_AutoCompletionFillups_Callback cb) { qscilexerhtml_autocompletionfillups_callback = cb; }
    inline void setQsciLexerHTML_AutoCompletionWordSeparators_Callback(QsciLexerHTML_AutoCompletionWordSeparators_Callback cb) { qscilexerhtml_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerHTML_BlockEnd_Callback(QsciLexerHTML_BlockEnd_Callback cb) { qscilexerhtml_blockend_callback = cb; }
    inline void setQsciLexerHTML_BlockLookback_Callback(QsciLexerHTML_BlockLookback_Callback cb) { qscilexerhtml_blocklookback_callback = cb; }
    inline void setQsciLexerHTML_BlockStart_Callback(QsciLexerHTML_BlockStart_Callback cb) { qscilexerhtml_blockstart_callback = cb; }
    inline void setQsciLexerHTML_BlockStartKeyword_Callback(QsciLexerHTML_BlockStartKeyword_Callback cb) { qscilexerhtml_blockstartkeyword_callback = cb; }
    inline void setQsciLexerHTML_BraceStyle_Callback(QsciLexerHTML_BraceStyle_Callback cb) { qscilexerhtml_bracestyle_callback = cb; }
    inline void setQsciLexerHTML_CaseSensitive_Callback(QsciLexerHTML_CaseSensitive_Callback cb) { qscilexerhtml_casesensitive_callback = cb; }
    inline void setQsciLexerHTML_Color_Callback(QsciLexerHTML_Color_Callback cb) { qscilexerhtml_color_callback = cb; }
    inline void setQsciLexerHTML_EolFill_Callback(QsciLexerHTML_EolFill_Callback cb) { qscilexerhtml_eolfill_callback = cb; }
    inline void setQsciLexerHTML_Font_Callback(QsciLexerHTML_Font_Callback cb) { qscilexerhtml_font_callback = cb; }
    inline void setQsciLexerHTML_IndentationGuideView_Callback(QsciLexerHTML_IndentationGuideView_Callback cb) { qscilexerhtml_indentationguideview_callback = cb; }
    inline void setQsciLexerHTML_Keywords_Callback(QsciLexerHTML_Keywords_Callback cb) { qscilexerhtml_keywords_callback = cb; }
    inline void setQsciLexerHTML_DefaultStyle_Callback(QsciLexerHTML_DefaultStyle_Callback cb) { qscilexerhtml_defaultstyle_callback = cb; }
    inline void setQsciLexerHTML_Description_Callback(QsciLexerHTML_Description_Callback cb) { qscilexerhtml_description_callback = cb; }
    inline void setQsciLexerHTML_Paper_Callback(QsciLexerHTML_Paper_Callback cb) { qscilexerhtml_paper_callback = cb; }
    inline void setQsciLexerHTML_DefaultColor2_Callback(QsciLexerHTML_DefaultColor2_Callback cb) { qscilexerhtml_defaultcolor2_callback = cb; }
    inline void setQsciLexerHTML_DefaultEolFill_Callback(QsciLexerHTML_DefaultEolFill_Callback cb) { qscilexerhtml_defaulteolfill_callback = cb; }
    inline void setQsciLexerHTML_DefaultFont2_Callback(QsciLexerHTML_DefaultFont2_Callback cb) { qscilexerhtml_defaultfont2_callback = cb; }
    inline void setQsciLexerHTML_DefaultPaper2_Callback(QsciLexerHTML_DefaultPaper2_Callback cb) { qscilexerhtml_defaultpaper2_callback = cb; }
    inline void setQsciLexerHTML_SetEditor_Callback(QsciLexerHTML_SetEditor_Callback cb) { qscilexerhtml_seteditor_callback = cb; }
    inline void setQsciLexerHTML_RefreshProperties_Callback(QsciLexerHTML_RefreshProperties_Callback cb) { qscilexerhtml_refreshproperties_callback = cb; }
    inline void setQsciLexerHTML_StyleBitsNeeded_Callback(QsciLexerHTML_StyleBitsNeeded_Callback cb) { qscilexerhtml_stylebitsneeded_callback = cb; }
    inline void setQsciLexerHTML_WordCharacters_Callback(QsciLexerHTML_WordCharacters_Callback cb) { qscilexerhtml_wordcharacters_callback = cb; }
    inline void setQsciLexerHTML_SetAutoIndentStyle_Callback(QsciLexerHTML_SetAutoIndentStyle_Callback cb) { qscilexerhtml_setautoindentstyle_callback = cb; }
    inline void setQsciLexerHTML_SetColor_Callback(QsciLexerHTML_SetColor_Callback cb) { qscilexerhtml_setcolor_callback = cb; }
    inline void setQsciLexerHTML_SetEolFill_Callback(QsciLexerHTML_SetEolFill_Callback cb) { qscilexerhtml_seteolfill_callback = cb; }
    inline void setQsciLexerHTML_SetFont_Callback(QsciLexerHTML_SetFont_Callback cb) { qscilexerhtml_setfont_callback = cb; }
    inline void setQsciLexerHTML_SetPaper_Callback(QsciLexerHTML_SetPaper_Callback cb) { qscilexerhtml_setpaper_callback = cb; }
    inline void setQsciLexerHTML_ReadProperties_Callback(QsciLexerHTML_ReadProperties_Callback cb) { qscilexerhtml_readproperties_callback = cb; }
    inline void setQsciLexerHTML_WriteProperties_Callback(QsciLexerHTML_WriteProperties_Callback cb) { qscilexerhtml_writeproperties_callback = cb; }
    inline void setQsciLexerHTML_Event_Callback(QsciLexerHTML_Event_Callback cb) { qscilexerhtml_event_callback = cb; }
    inline void setQsciLexerHTML_EventFilter_Callback(QsciLexerHTML_EventFilter_Callback cb) { qscilexerhtml_eventfilter_callback = cb; }
    inline void setQsciLexerHTML_TimerEvent_Callback(QsciLexerHTML_TimerEvent_Callback cb) { qscilexerhtml_timerevent_callback = cb; }
    inline void setQsciLexerHTML_ChildEvent_Callback(QsciLexerHTML_ChildEvent_Callback cb) { qscilexerhtml_childevent_callback = cb; }
    inline void setQsciLexerHTML_CustomEvent_Callback(QsciLexerHTML_CustomEvent_Callback cb) { qscilexerhtml_customevent_callback = cb; }
    inline void setQsciLexerHTML_ConnectNotify_Callback(QsciLexerHTML_ConnectNotify_Callback cb) { qscilexerhtml_connectnotify_callback = cb; }
    inline void setQsciLexerHTML_DisconnectNotify_Callback(QsciLexerHTML_DisconnectNotify_Callback cb) { qscilexerhtml_disconnectnotify_callback = cb; }
    inline void setQsciLexerHTML_TextAsBytes_Callback(QsciLexerHTML_TextAsBytes_Callback cb) { qscilexerhtml_textasbytes_callback = cb; }
    inline void setQsciLexerHTML_BytesAsText_Callback(QsciLexerHTML_BytesAsText_Callback cb) { qscilexerhtml_bytesastext_callback = cb; }
    inline void setQsciLexerHTML_Sender_Callback(QsciLexerHTML_Sender_Callback cb) { qscilexerhtml_sender_callback = cb; }
    inline void setQsciLexerHTML_SenderSignalIndex_Callback(QsciLexerHTML_SenderSignalIndex_Callback cb) { qscilexerhtml_sendersignalindex_callback = cb; }
    inline void setQsciLexerHTML_Receivers_Callback(QsciLexerHTML_Receivers_Callback cb) { qscilexerhtml_receivers_callback = cb; }
    inline void setQsciLexerHTML_IsSignalConnected_Callback(QsciLexerHTML_IsSignalConnected_Callback cb) { qscilexerhtml_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerHTML_MetaObject_IsBase(bool value) const { qscilexerhtml_metaobject_isbase = value; }
    inline void setQsciLexerHTML_Metacast_IsBase(bool value) const { qscilexerhtml_metacast_isbase = value; }
    inline void setQsciLexerHTML_Metacall_IsBase(bool value) const { qscilexerhtml_metacall_isbase = value; }
    inline void setQsciLexerHTML_SetFoldCompact_IsBase(bool value) const { qscilexerhtml_setfoldcompact_isbase = value; }
    inline void setQsciLexerHTML_SetFoldPreprocessor_IsBase(bool value) const { qscilexerhtml_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerHTML_SetCaseSensitiveTags_IsBase(bool value) const { qscilexerhtml_setcasesensitivetags_isbase = value; }
    inline void setQsciLexerHTML_Language_IsBase(bool value) const { qscilexerhtml_language_isbase = value; }
    inline void setQsciLexerHTML_Lexer_IsBase(bool value) const { qscilexerhtml_lexer_isbase = value; }
    inline void setQsciLexerHTML_LexerId_IsBase(bool value) const { qscilexerhtml_lexerid_isbase = value; }
    inline void setQsciLexerHTML_AutoCompletionFillups_IsBase(bool value) const { qscilexerhtml_autocompletionfillups_isbase = value; }
    inline void setQsciLexerHTML_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerhtml_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerHTML_BlockEnd_IsBase(bool value) const { qscilexerhtml_blockend_isbase = value; }
    inline void setQsciLexerHTML_BlockLookback_IsBase(bool value) const { qscilexerhtml_blocklookback_isbase = value; }
    inline void setQsciLexerHTML_BlockStart_IsBase(bool value) const { qscilexerhtml_blockstart_isbase = value; }
    inline void setQsciLexerHTML_BlockStartKeyword_IsBase(bool value) const { qscilexerhtml_blockstartkeyword_isbase = value; }
    inline void setQsciLexerHTML_BraceStyle_IsBase(bool value) const { qscilexerhtml_bracestyle_isbase = value; }
    inline void setQsciLexerHTML_CaseSensitive_IsBase(bool value) const { qscilexerhtml_casesensitive_isbase = value; }
    inline void setQsciLexerHTML_Color_IsBase(bool value) const { qscilexerhtml_color_isbase = value; }
    inline void setQsciLexerHTML_EolFill_IsBase(bool value) const { qscilexerhtml_eolfill_isbase = value; }
    inline void setQsciLexerHTML_Font_IsBase(bool value) const { qscilexerhtml_font_isbase = value; }
    inline void setQsciLexerHTML_IndentationGuideView_IsBase(bool value) const { qscilexerhtml_indentationguideview_isbase = value; }
    inline void setQsciLexerHTML_Keywords_IsBase(bool value) const { qscilexerhtml_keywords_isbase = value; }
    inline void setQsciLexerHTML_DefaultStyle_IsBase(bool value) const { qscilexerhtml_defaultstyle_isbase = value; }
    inline void setQsciLexerHTML_Description_IsBase(bool value) const { qscilexerhtml_description_isbase = value; }
    inline void setQsciLexerHTML_Paper_IsBase(bool value) const { qscilexerhtml_paper_isbase = value; }
    inline void setQsciLexerHTML_DefaultColor2_IsBase(bool value) const { qscilexerhtml_defaultcolor2_isbase = value; }
    inline void setQsciLexerHTML_DefaultEolFill_IsBase(bool value) const { qscilexerhtml_defaulteolfill_isbase = value; }
    inline void setQsciLexerHTML_DefaultFont2_IsBase(bool value) const { qscilexerhtml_defaultfont2_isbase = value; }
    inline void setQsciLexerHTML_DefaultPaper2_IsBase(bool value) const { qscilexerhtml_defaultpaper2_isbase = value; }
    inline void setQsciLexerHTML_SetEditor_IsBase(bool value) const { qscilexerhtml_seteditor_isbase = value; }
    inline void setQsciLexerHTML_RefreshProperties_IsBase(bool value) const { qscilexerhtml_refreshproperties_isbase = value; }
    inline void setQsciLexerHTML_StyleBitsNeeded_IsBase(bool value) const { qscilexerhtml_stylebitsneeded_isbase = value; }
    inline void setQsciLexerHTML_WordCharacters_IsBase(bool value) const { qscilexerhtml_wordcharacters_isbase = value; }
    inline void setQsciLexerHTML_SetAutoIndentStyle_IsBase(bool value) const { qscilexerhtml_setautoindentstyle_isbase = value; }
    inline void setQsciLexerHTML_SetColor_IsBase(bool value) const { qscilexerhtml_setcolor_isbase = value; }
    inline void setQsciLexerHTML_SetEolFill_IsBase(bool value) const { qscilexerhtml_seteolfill_isbase = value; }
    inline void setQsciLexerHTML_SetFont_IsBase(bool value) const { qscilexerhtml_setfont_isbase = value; }
    inline void setQsciLexerHTML_SetPaper_IsBase(bool value) const { qscilexerhtml_setpaper_isbase = value; }
    inline void setQsciLexerHTML_ReadProperties_IsBase(bool value) const { qscilexerhtml_readproperties_isbase = value; }
    inline void setQsciLexerHTML_WriteProperties_IsBase(bool value) const { qscilexerhtml_writeproperties_isbase = value; }
    inline void setQsciLexerHTML_Event_IsBase(bool value) const { qscilexerhtml_event_isbase = value; }
    inline void setQsciLexerHTML_EventFilter_IsBase(bool value) const { qscilexerhtml_eventfilter_isbase = value; }
    inline void setQsciLexerHTML_TimerEvent_IsBase(bool value) const { qscilexerhtml_timerevent_isbase = value; }
    inline void setQsciLexerHTML_ChildEvent_IsBase(bool value) const { qscilexerhtml_childevent_isbase = value; }
    inline void setQsciLexerHTML_CustomEvent_IsBase(bool value) const { qscilexerhtml_customevent_isbase = value; }
    inline void setQsciLexerHTML_ConnectNotify_IsBase(bool value) const { qscilexerhtml_connectnotify_isbase = value; }
    inline void setQsciLexerHTML_DisconnectNotify_IsBase(bool value) const { qscilexerhtml_disconnectnotify_isbase = value; }
    inline void setQsciLexerHTML_TextAsBytes_IsBase(bool value) const { qscilexerhtml_textasbytes_isbase = value; }
    inline void setQsciLexerHTML_BytesAsText_IsBase(bool value) const { qscilexerhtml_bytesastext_isbase = value; }
    inline void setQsciLexerHTML_Sender_IsBase(bool value) const { qscilexerhtml_sender_isbase = value; }
    inline void setQsciLexerHTML_SenderSignalIndex_IsBase(bool value) const { qscilexerhtml_sendersignalindex_isbase = value; }
    inline void setQsciLexerHTML_Receivers_IsBase(bool value) const { qscilexerhtml_receivers_isbase = value; }
    inline void setQsciLexerHTML_IsSignalConnected_IsBase(bool value) const { qscilexerhtml_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerhtml_metaobject_isbase) {
            qscilexerhtml_metaobject_isbase = false;
            return QsciLexerHTML::metaObject();
        }
        auto metaobject_cb = qscilexerhtml_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerHTML::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerhtml_metacast_isbase) {
            qscilexerhtml_metacast_isbase = false;
            return QsciLexerHTML::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerhtml_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerhtml_metacall_isbase) {
            qscilexerhtml_metacall_isbase = false;
            return QsciLexerHTML::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerhtml_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerhtml_setfoldcompact_isbase) {
            qscilexerhtml_setfoldcompact_isbase = false;
            QsciLexerHTML::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerhtml_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerhtml_setfoldpreprocessor_isbase) {
            qscilexerhtml_setfoldpreprocessor_isbase = false;
            QsciLexerHTML::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexerhtml_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaseSensitiveTags(bool sens) override {
        if (qscilexerhtml_setcasesensitivetags_isbase) {
            qscilexerhtml_setcasesensitivetags_isbase = false;
            QsciLexerHTML::setCaseSensitiveTags(sens);
            return;
        }
        auto setcasesensitivetags_cb = qscilexerhtml_setcasesensitivetags_callback;
        if (setcasesensitivetags_cb) {
            bool cbval1 = sens;

            setcasesensitivetags_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::setCaseSensitiveTags(sens);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerhtml_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerhtml_lexer_isbase) {
            qscilexerhtml_lexer_isbase = false;
            return QsciLexerHTML::lexer();
        }
        auto lexer_cb = qscilexerhtml_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerHTML::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerhtml_lexerid_isbase) {
            qscilexerhtml_lexerid_isbase = false;
            return QsciLexerHTML::lexerId();
        }
        auto lexerid_cb = qscilexerhtml_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerhtml_autocompletionfillups_isbase) {
            qscilexerhtml_autocompletionfillups_isbase = false;
            return QsciLexerHTML::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerhtml_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerHTML::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerhtml_autocompletionwordseparators_isbase) {
            qscilexerhtml_autocompletionwordseparators_isbase = false;
            return QsciLexerHTML::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerhtml_autocompletionwordseparators_callback;
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
        return QsciLexerHTML::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerhtml_blockend_isbase) {
            qscilexerhtml_blockend_isbase = false;
            return QsciLexerHTML::blockEnd(style);
        }
        auto blockend_cb = qscilexerhtml_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerhtml_blocklookback_isbase) {
            qscilexerhtml_blocklookback_isbase = false;
            return QsciLexerHTML::blockLookback();
        }
        auto blocklookback_cb = qscilexerhtml_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerhtml_blockstart_isbase) {
            qscilexerhtml_blockstart_isbase = false;
            return QsciLexerHTML::blockStart(style);
        }
        auto blockstart_cb = qscilexerhtml_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerhtml_blockstartkeyword_isbase) {
            qscilexerhtml_blockstartkeyword_isbase = false;
            return QsciLexerHTML::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerhtml_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerhtml_bracestyle_isbase) {
            qscilexerhtml_bracestyle_isbase = false;
            return QsciLexerHTML::braceStyle();
        }
        auto bracestyle_cb = qscilexerhtml_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerhtml_casesensitive_isbase) {
            qscilexerhtml_casesensitive_isbase = false;
            return QsciLexerHTML::caseSensitive();
        }
        auto casesensitive_cb = qscilexerhtml_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerHTML::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerhtml_color_isbase) {
            qscilexerhtml_color_isbase = false;
            return QsciLexerHTML::color(style);
        }
        auto color_cb = qscilexerhtml_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerhtml_eolfill_isbase) {
            qscilexerhtml_eolfill_isbase = false;
            return QsciLexerHTML::eolFill(style);
        }
        auto eolfill_cb = qscilexerhtml_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerhtml_font_isbase) {
            qscilexerhtml_font_isbase = false;
            return QsciLexerHTML::font(style);
        }
        auto font_cb = qscilexerhtml_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerhtml_indentationguideview_isbase) {
            qscilexerhtml_indentationguideview_isbase = false;
            return QsciLexerHTML::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerhtml_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerhtml_keywords_isbase) {
            qscilexerhtml_keywords_isbase = false;
            return QsciLexerHTML::keywords(set);
        }
        auto keywords_cb = qscilexerhtml_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerhtml_defaultstyle_isbase) {
            qscilexerhtml_defaultstyle_isbase = false;
            return QsciLexerHTML::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerhtml_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerhtml_description_callback;
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
        if (qscilexerhtml_paper_isbase) {
            qscilexerhtml_paper_isbase = false;
            return QsciLexerHTML::paper(style);
        }
        auto paper_cb = qscilexerhtml_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerhtml_defaultcolor2_isbase) {
            qscilexerhtml_defaultcolor2_isbase = false;
            return QsciLexerHTML::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerhtml_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerhtml_defaulteolfill_isbase) {
            qscilexerhtml_defaulteolfill_isbase = false;
            return QsciLexerHTML::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerhtml_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerhtml_defaultfont2_isbase) {
            qscilexerhtml_defaultfont2_isbase = false;
            return QsciLexerHTML::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerhtml_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerhtml_defaultpaper2_isbase) {
            qscilexerhtml_defaultpaper2_isbase = false;
            return QsciLexerHTML::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerhtml_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHTML::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerhtml_seteditor_isbase) {
            qscilexerhtml_seteditor_isbase = false;
            QsciLexerHTML::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerhtml_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerhtml_refreshproperties_isbase) {
            qscilexerhtml_refreshproperties_isbase = false;
            QsciLexerHTML::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerhtml_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerHTML::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerhtml_stylebitsneeded_isbase) {
            qscilexerhtml_stylebitsneeded_isbase = false;
            return QsciLexerHTML::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerhtml_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerhtml_wordcharacters_isbase) {
            qscilexerhtml_wordcharacters_isbase = false;
            return QsciLexerHTML::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerhtml_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerHTML::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerhtml_setautoindentstyle_isbase) {
            qscilexerhtml_setautoindentstyle_isbase = false;
            QsciLexerHTML::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerhtml_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerhtml_setcolor_isbase) {
            qscilexerhtml_setcolor_isbase = false;
            QsciLexerHTML::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerhtml_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerhtml_seteolfill_isbase) {
            qscilexerhtml_seteolfill_isbase = false;
            QsciLexerHTML::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerhtml_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerhtml_setfont_isbase) {
            qscilexerhtml_setfont_isbase = false;
            QsciLexerHTML::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerhtml_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerhtml_setpaper_isbase) {
            qscilexerhtml_setpaper_isbase = false;
            QsciLexerHTML::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerhtml_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerhtml_readproperties_isbase) {
            qscilexerhtml_readproperties_isbase = false;
            return QsciLexerHTML::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerhtml_readproperties_callback;
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
        return QsciLexerHTML::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerhtml_writeproperties_isbase) {
            qscilexerhtml_writeproperties_isbase = false;
            return QsciLexerHTML::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerhtml_writeproperties_callback;
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
        return QsciLexerHTML::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerhtml_event_isbase) {
            qscilexerhtml_event_isbase = false;
            return QsciLexerHTML::event(event);
        }
        auto event_cb = qscilexerhtml_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerhtml_eventfilter_isbase) {
            qscilexerhtml_eventfilter_isbase = false;
            return QsciLexerHTML::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerhtml_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerHTML::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerhtml_timerevent_isbase) {
            qscilexerhtml_timerevent_isbase = false;
            QsciLexerHTML::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerhtml_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerhtml_childevent_isbase) {
            qscilexerhtml_childevent_isbase = false;
            QsciLexerHTML::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerhtml_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerhtml_customevent_isbase) {
            qscilexerhtml_customevent_isbase = false;
            QsciLexerHTML::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerhtml_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerhtml_connectnotify_isbase) {
            qscilexerhtml_connectnotify_isbase = false;
            QsciLexerHTML::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerhtml_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerhtml_disconnectnotify_isbase) {
            qscilexerhtml_disconnectnotify_isbase = false;
            QsciLexerHTML::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerhtml_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerHTML::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerhtml_textasbytes_isbase) {
            qscilexerhtml_textasbytes_isbase = false;
            return QsciLexerHTML::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerhtml_textasbytes_callback;
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
        return QsciLexerHTML::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerhtml_bytesastext_isbase) {
            qscilexerhtml_bytesastext_isbase = false;
            return QsciLexerHTML::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerhtml_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerHTML::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerhtml_sender_isbase) {
            qscilexerhtml_sender_isbase = false;
            return QsciLexerHTML::sender();
        }
        auto sender_cb = qscilexerhtml_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerHTML::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerhtml_sendersignalindex_isbase) {
            qscilexerhtml_sendersignalindex_isbase = false;
            return QsciLexerHTML::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerhtml_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerhtml_receivers_isbase) {
            qscilexerhtml_receivers_isbase = false;
            return QsciLexerHTML::receivers(signal);
        }
        auto receivers_cb = qscilexerhtml_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerhtml_issignalconnected_isbase) {
            qscilexerhtml_issignalconnected_isbase = false;
            return QsciLexerHTML::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerhtml_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerHTML_ReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHTML_SuperReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHTML_WriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHTML_SuperWriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerHTML_TimerEvent(QsciLexerHTML* self, QTimerEvent* event);
    friend void QsciLexerHTML_SuperTimerEvent(QsciLexerHTML* self, QTimerEvent* event);
    friend void QsciLexerHTML_ChildEvent(QsciLexerHTML* self, QChildEvent* event);
    friend void QsciLexerHTML_SuperChildEvent(QsciLexerHTML* self, QChildEvent* event);
    friend void QsciLexerHTML_CustomEvent(QsciLexerHTML* self, QEvent* event);
    friend void QsciLexerHTML_SuperCustomEvent(QsciLexerHTML* self, QEvent* event);
    friend void QsciLexerHTML_ConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
    friend void QsciLexerHTML_SuperConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
    friend void QsciLexerHTML_DisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
    friend void QsciLexerHTML_SuperDisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerHTML_TextAsBytes(const QsciLexerHTML* self, const libqt_string text);
    friend libqt_string QsciLexerHTML_SuperTextAsBytes(const QsciLexerHTML* self, const libqt_string text);
    friend libqt_string QsciLexerHTML_BytesAsText(const QsciLexerHTML* self, const char* bytes, int size);
    friend libqt_string QsciLexerHTML_SuperBytesAsText(const QsciLexerHTML* self, const char* bytes, int size);
    friend QObject* QsciLexerHTML_Sender(const QsciLexerHTML* self);
    friend QObject* QsciLexerHTML_SuperSender(const QsciLexerHTML* self);
    friend int QsciLexerHTML_SenderSignalIndex(const QsciLexerHTML* self);
    friend int QsciLexerHTML_SuperSenderSignalIndex(const QsciLexerHTML* self);
    friend int QsciLexerHTML_Receivers(const QsciLexerHTML* self, const char* signal);
    friend int QsciLexerHTML_SuperReceivers(const QsciLexerHTML* self, const char* signal);
    friend bool QsciLexerHTML_IsSignalConnected(const QsciLexerHTML* self, const QMetaMethod* signal);
    friend bool QsciLexerHTML_SuperIsSignalConnected(const QsciLexerHTML* self, const QMetaMethod* signal);
};

#endif
