#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERXML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERXML_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerXML so that we can call protected methods
class VirtualQsciLexerXML final : public QsciLexerXML {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerXML = true;

    // Virtual class public types (including callbacks)
    using QsciLexerXML_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerXML_Metacast_Callback = void* (*)(QsciLexerXML*, const char*);
    using QsciLexerXML_Metacall_Callback = int (*)(QsciLexerXML*, int, int, void**);
    using QsciLexerXML_SetFoldCompact_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetFoldPreprocessor_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetCaseSensitiveTags_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_Language_Callback = const char* (*)();
    using QsciLexerXML_Lexer_Callback = const char* (*)();
    using QsciLexerXML_LexerId_Callback = int (*)();
    using QsciLexerXML_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerXML_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerXML_BlockEnd_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockLookback_Callback = int (*)();
    using QsciLexerXML_BlockStart_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BraceStyle_Callback = int (*)();
    using QsciLexerXML_CaseSensitive_Callback = bool (*)();
    using QsciLexerXML_Color_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_EolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Font_Callback = QFont* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_IndentationGuideView_Callback = int (*)();
    using QsciLexerXML_Keywords_Callback = const char* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultStyle_Callback = int (*)();
    using QsciLexerXML_Description_Callback = const char* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Paper_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultColor2_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultEolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultFont2_Callback = QFont* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultPaper2_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_SetEditor_Callback = void (*)(QsciLexerXML*, QsciScintilla*);
    using QsciLexerXML_RefreshProperties_Callback = void (*)();
    using QsciLexerXML_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerXML_WordCharacters_Callback = const char* (*)();
    using QsciLexerXML_SetAutoIndentStyle_Callback = void (*)(QsciLexerXML*, int);
    using QsciLexerXML_SetColor_Callback = void (*)(QsciLexerXML*, QColor*, int);
    using QsciLexerXML_SetEolFill_Callback = void (*)(QsciLexerXML*, bool, int);
    using QsciLexerXML_SetFont_Callback = void (*)(QsciLexerXML*, QFont*, int);
    using QsciLexerXML_SetPaper_Callback = void (*)(QsciLexerXML*, QColor*, int);
    using QsciLexerXML_ReadProperties_Callback = bool (*)(QsciLexerXML*, QSettings*, const char*);
    using QsciLexerXML_WriteProperties_Callback = bool (*)(const QsciLexerXML*, QSettings*, const char*);
    using QsciLexerXML_Event_Callback = bool (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_EventFilter_Callback = bool (*)(QsciLexerXML*, QObject*, QEvent*);
    using QsciLexerXML_TimerEvent_Callback = void (*)(QsciLexerXML*, QTimerEvent*);
    using QsciLexerXML_ChildEvent_Callback = void (*)(QsciLexerXML*, QChildEvent*);
    using QsciLexerXML_CustomEvent_Callback = void (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_ConnectNotify_Callback = void (*)(QsciLexerXML*, QMetaMethod*);
    using QsciLexerXML_DisconnectNotify_Callback = void (*)(QsciLexerXML*, QMetaMethod*);
    using QsciLexerXML_TextAsBytes_Callback = libqt_string (*)(const QsciLexerXML*, const char*);
    using QsciLexerXML_BytesAsText_Callback = const char* (*)(const QsciLexerXML*, const char*, int);
    using QsciLexerXML_Sender_Callback = QObject* (*)();
    using QsciLexerXML_SenderSignalIndex_Callback = int (*)();
    using QsciLexerXML_Receivers_Callback = int (*)(const QsciLexerXML*, const char*);
    using QsciLexerXML_IsSignalConnected_Callback = bool (*)(const QsciLexerXML*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerXML_MetaObject_Callback qscilexerxml_metaobject_callback = nullptr;
    QsciLexerXML_Metacast_Callback qscilexerxml_metacast_callback = nullptr;
    QsciLexerXML_Metacall_Callback qscilexerxml_metacall_callback = nullptr;
    QsciLexerXML_SetFoldCompact_Callback qscilexerxml_setfoldcompact_callback = nullptr;
    QsciLexerXML_SetFoldPreprocessor_Callback qscilexerxml_setfoldpreprocessor_callback = nullptr;
    QsciLexerXML_SetCaseSensitiveTags_Callback qscilexerxml_setcasesensitivetags_callback = nullptr;
    QsciLexerXML_Language_Callback qscilexerxml_language_callback = nullptr;
    QsciLexerXML_Lexer_Callback qscilexerxml_lexer_callback = nullptr;
    QsciLexerXML_LexerId_Callback qscilexerxml_lexerid_callback = nullptr;
    QsciLexerXML_AutoCompletionFillups_Callback qscilexerxml_autocompletionfillups_callback = nullptr;
    QsciLexerXML_AutoCompletionWordSeparators_Callback qscilexerxml_autocompletionwordseparators_callback = nullptr;
    QsciLexerXML_BlockEnd_Callback qscilexerxml_blockend_callback = nullptr;
    QsciLexerXML_BlockLookback_Callback qscilexerxml_blocklookback_callback = nullptr;
    QsciLexerXML_BlockStart_Callback qscilexerxml_blockstart_callback = nullptr;
    QsciLexerXML_BlockStartKeyword_Callback qscilexerxml_blockstartkeyword_callback = nullptr;
    QsciLexerXML_BraceStyle_Callback qscilexerxml_bracestyle_callback = nullptr;
    QsciLexerXML_CaseSensitive_Callback qscilexerxml_casesensitive_callback = nullptr;
    QsciLexerXML_Color_Callback qscilexerxml_color_callback = nullptr;
    QsciLexerXML_EolFill_Callback qscilexerxml_eolfill_callback = nullptr;
    QsciLexerXML_Font_Callback qscilexerxml_font_callback = nullptr;
    QsciLexerXML_IndentationGuideView_Callback qscilexerxml_indentationguideview_callback = nullptr;
    QsciLexerXML_Keywords_Callback qscilexerxml_keywords_callback = nullptr;
    QsciLexerXML_DefaultStyle_Callback qscilexerxml_defaultstyle_callback = nullptr;
    QsciLexerXML_Description_Callback qscilexerxml_description_callback = nullptr;
    QsciLexerXML_Paper_Callback qscilexerxml_paper_callback = nullptr;
    QsciLexerXML_DefaultColor2_Callback qscilexerxml_defaultcolor2_callback = nullptr;
    QsciLexerXML_DefaultEolFill_Callback qscilexerxml_defaulteolfill_callback = nullptr;
    QsciLexerXML_DefaultFont2_Callback qscilexerxml_defaultfont2_callback = nullptr;
    QsciLexerXML_DefaultPaper2_Callback qscilexerxml_defaultpaper2_callback = nullptr;
    QsciLexerXML_SetEditor_Callback qscilexerxml_seteditor_callback = nullptr;
    QsciLexerXML_RefreshProperties_Callback qscilexerxml_refreshproperties_callback = nullptr;
    QsciLexerXML_StyleBitsNeeded_Callback qscilexerxml_stylebitsneeded_callback = nullptr;
    QsciLexerXML_WordCharacters_Callback qscilexerxml_wordcharacters_callback = nullptr;
    QsciLexerXML_SetAutoIndentStyle_Callback qscilexerxml_setautoindentstyle_callback = nullptr;
    QsciLexerXML_SetColor_Callback qscilexerxml_setcolor_callback = nullptr;
    QsciLexerXML_SetEolFill_Callback qscilexerxml_seteolfill_callback = nullptr;
    QsciLexerXML_SetFont_Callback qscilexerxml_setfont_callback = nullptr;
    QsciLexerXML_SetPaper_Callback qscilexerxml_setpaper_callback = nullptr;
    QsciLexerXML_ReadProperties_Callback qscilexerxml_readproperties_callback = nullptr;
    QsciLexerXML_WriteProperties_Callback qscilexerxml_writeproperties_callback = nullptr;
    QsciLexerXML_Event_Callback qscilexerxml_event_callback = nullptr;
    QsciLexerXML_EventFilter_Callback qscilexerxml_eventfilter_callback = nullptr;
    QsciLexerXML_TimerEvent_Callback qscilexerxml_timerevent_callback = nullptr;
    QsciLexerXML_ChildEvent_Callback qscilexerxml_childevent_callback = nullptr;
    QsciLexerXML_CustomEvent_Callback qscilexerxml_customevent_callback = nullptr;
    QsciLexerXML_ConnectNotify_Callback qscilexerxml_connectnotify_callback = nullptr;
    QsciLexerXML_DisconnectNotify_Callback qscilexerxml_disconnectnotify_callback = nullptr;
    QsciLexerXML_TextAsBytes_Callback qscilexerxml_textasbytes_callback = nullptr;
    QsciLexerXML_BytesAsText_Callback qscilexerxml_bytesastext_callback = nullptr;
    QsciLexerXML_Sender_Callback qscilexerxml_sender_callback = nullptr;
    QsciLexerXML_SenderSignalIndex_Callback qscilexerxml_sendersignalindex_callback = nullptr;
    QsciLexerXML_Receivers_Callback qscilexerxml_receivers_callback = nullptr;
    QsciLexerXML_IsSignalConnected_Callback qscilexerxml_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerxml_metaobject_isbase = false;
    mutable bool qscilexerxml_metacast_isbase = false;
    mutable bool qscilexerxml_metacall_isbase = false;
    mutable bool qscilexerxml_setfoldcompact_isbase = false;
    mutable bool qscilexerxml_setfoldpreprocessor_isbase = false;
    mutable bool qscilexerxml_setcasesensitivetags_isbase = false;
    mutable bool qscilexerxml_language_isbase = false;
    mutable bool qscilexerxml_lexer_isbase = false;
    mutable bool qscilexerxml_lexerid_isbase = false;
    mutable bool qscilexerxml_autocompletionfillups_isbase = false;
    mutable bool qscilexerxml_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerxml_blockend_isbase = false;
    mutable bool qscilexerxml_blocklookback_isbase = false;
    mutable bool qscilexerxml_blockstart_isbase = false;
    mutable bool qscilexerxml_blockstartkeyword_isbase = false;
    mutable bool qscilexerxml_bracestyle_isbase = false;
    mutable bool qscilexerxml_casesensitive_isbase = false;
    mutable bool qscilexerxml_color_isbase = false;
    mutable bool qscilexerxml_eolfill_isbase = false;
    mutable bool qscilexerxml_font_isbase = false;
    mutable bool qscilexerxml_indentationguideview_isbase = false;
    mutable bool qscilexerxml_keywords_isbase = false;
    mutable bool qscilexerxml_defaultstyle_isbase = false;
    mutable bool qscilexerxml_description_isbase = false;
    mutable bool qscilexerxml_paper_isbase = false;
    mutable bool qscilexerxml_defaultcolor2_isbase = false;
    mutable bool qscilexerxml_defaulteolfill_isbase = false;
    mutable bool qscilexerxml_defaultfont2_isbase = false;
    mutable bool qscilexerxml_defaultpaper2_isbase = false;
    mutable bool qscilexerxml_seteditor_isbase = false;
    mutable bool qscilexerxml_refreshproperties_isbase = false;
    mutable bool qscilexerxml_stylebitsneeded_isbase = false;
    mutable bool qscilexerxml_wordcharacters_isbase = false;
    mutable bool qscilexerxml_setautoindentstyle_isbase = false;
    mutable bool qscilexerxml_setcolor_isbase = false;
    mutable bool qscilexerxml_seteolfill_isbase = false;
    mutable bool qscilexerxml_setfont_isbase = false;
    mutable bool qscilexerxml_setpaper_isbase = false;
    mutable bool qscilexerxml_readproperties_isbase = false;
    mutable bool qscilexerxml_writeproperties_isbase = false;
    mutable bool qscilexerxml_event_isbase = false;
    mutable bool qscilexerxml_eventfilter_isbase = false;
    mutable bool qscilexerxml_timerevent_isbase = false;
    mutable bool qscilexerxml_childevent_isbase = false;
    mutable bool qscilexerxml_customevent_isbase = false;
    mutable bool qscilexerxml_connectnotify_isbase = false;
    mutable bool qscilexerxml_disconnectnotify_isbase = false;
    mutable bool qscilexerxml_textasbytes_isbase = false;
    mutable bool qscilexerxml_bytesastext_isbase = false;
    mutable bool qscilexerxml_sender_isbase = false;
    mutable bool qscilexerxml_sendersignalindex_isbase = false;
    mutable bool qscilexerxml_receivers_isbase = false;
    mutable bool qscilexerxml_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerXML() : QsciLexerXML() {};
    VirtualQsciLexerXML(QObject* parent) : QsciLexerXML(parent) {};

    // Callback setters
    inline void setQsciLexerXML_MetaObject_Callback(QsciLexerXML_MetaObject_Callback cb) { qscilexerxml_metaobject_callback = cb; }
    inline void setQsciLexerXML_Metacast_Callback(QsciLexerXML_Metacast_Callback cb) { qscilexerxml_metacast_callback = cb; }
    inline void setQsciLexerXML_Metacall_Callback(QsciLexerXML_Metacall_Callback cb) { qscilexerxml_metacall_callback = cb; }
    inline void setQsciLexerXML_SetFoldCompact_Callback(QsciLexerXML_SetFoldCompact_Callback cb) { qscilexerxml_setfoldcompact_callback = cb; }
    inline void setQsciLexerXML_SetFoldPreprocessor_Callback(QsciLexerXML_SetFoldPreprocessor_Callback cb) { qscilexerxml_setfoldpreprocessor_callback = cb; }
    inline void setQsciLexerXML_SetCaseSensitiveTags_Callback(QsciLexerXML_SetCaseSensitiveTags_Callback cb) { qscilexerxml_setcasesensitivetags_callback = cb; }
    inline void setQsciLexerXML_Language_Callback(QsciLexerXML_Language_Callback cb) { qscilexerxml_language_callback = cb; }
    inline void setQsciLexerXML_Lexer_Callback(QsciLexerXML_Lexer_Callback cb) { qscilexerxml_lexer_callback = cb; }
    inline void setQsciLexerXML_LexerId_Callback(QsciLexerXML_LexerId_Callback cb) { qscilexerxml_lexerid_callback = cb; }
    inline void setQsciLexerXML_AutoCompletionFillups_Callback(QsciLexerXML_AutoCompletionFillups_Callback cb) { qscilexerxml_autocompletionfillups_callback = cb; }
    inline void setQsciLexerXML_AutoCompletionWordSeparators_Callback(QsciLexerXML_AutoCompletionWordSeparators_Callback cb) { qscilexerxml_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerXML_BlockEnd_Callback(QsciLexerXML_BlockEnd_Callback cb) { qscilexerxml_blockend_callback = cb; }
    inline void setQsciLexerXML_BlockLookback_Callback(QsciLexerXML_BlockLookback_Callback cb) { qscilexerxml_blocklookback_callback = cb; }
    inline void setQsciLexerXML_BlockStart_Callback(QsciLexerXML_BlockStart_Callback cb) { qscilexerxml_blockstart_callback = cb; }
    inline void setQsciLexerXML_BlockStartKeyword_Callback(QsciLexerXML_BlockStartKeyword_Callback cb) { qscilexerxml_blockstartkeyword_callback = cb; }
    inline void setQsciLexerXML_BraceStyle_Callback(QsciLexerXML_BraceStyle_Callback cb) { qscilexerxml_bracestyle_callback = cb; }
    inline void setQsciLexerXML_CaseSensitive_Callback(QsciLexerXML_CaseSensitive_Callback cb) { qscilexerxml_casesensitive_callback = cb; }
    inline void setQsciLexerXML_Color_Callback(QsciLexerXML_Color_Callback cb) { qscilexerxml_color_callback = cb; }
    inline void setQsciLexerXML_EolFill_Callback(QsciLexerXML_EolFill_Callback cb) { qscilexerxml_eolfill_callback = cb; }
    inline void setQsciLexerXML_Font_Callback(QsciLexerXML_Font_Callback cb) { qscilexerxml_font_callback = cb; }
    inline void setQsciLexerXML_IndentationGuideView_Callback(QsciLexerXML_IndentationGuideView_Callback cb) { qscilexerxml_indentationguideview_callback = cb; }
    inline void setQsciLexerXML_Keywords_Callback(QsciLexerXML_Keywords_Callback cb) { qscilexerxml_keywords_callback = cb; }
    inline void setQsciLexerXML_DefaultStyle_Callback(QsciLexerXML_DefaultStyle_Callback cb) { qscilexerxml_defaultstyle_callback = cb; }
    inline void setQsciLexerXML_Description_Callback(QsciLexerXML_Description_Callback cb) { qscilexerxml_description_callback = cb; }
    inline void setQsciLexerXML_Paper_Callback(QsciLexerXML_Paper_Callback cb) { qscilexerxml_paper_callback = cb; }
    inline void setQsciLexerXML_DefaultColor2_Callback(QsciLexerXML_DefaultColor2_Callback cb) { qscilexerxml_defaultcolor2_callback = cb; }
    inline void setQsciLexerXML_DefaultEolFill_Callback(QsciLexerXML_DefaultEolFill_Callback cb) { qscilexerxml_defaulteolfill_callback = cb; }
    inline void setQsciLexerXML_DefaultFont2_Callback(QsciLexerXML_DefaultFont2_Callback cb) { qscilexerxml_defaultfont2_callback = cb; }
    inline void setQsciLexerXML_DefaultPaper2_Callback(QsciLexerXML_DefaultPaper2_Callback cb) { qscilexerxml_defaultpaper2_callback = cb; }
    inline void setQsciLexerXML_SetEditor_Callback(QsciLexerXML_SetEditor_Callback cb) { qscilexerxml_seteditor_callback = cb; }
    inline void setQsciLexerXML_RefreshProperties_Callback(QsciLexerXML_RefreshProperties_Callback cb) { qscilexerxml_refreshproperties_callback = cb; }
    inline void setQsciLexerXML_StyleBitsNeeded_Callback(QsciLexerXML_StyleBitsNeeded_Callback cb) { qscilexerxml_stylebitsneeded_callback = cb; }
    inline void setQsciLexerXML_WordCharacters_Callback(QsciLexerXML_WordCharacters_Callback cb) { qscilexerxml_wordcharacters_callback = cb; }
    inline void setQsciLexerXML_SetAutoIndentStyle_Callback(QsciLexerXML_SetAutoIndentStyle_Callback cb) { qscilexerxml_setautoindentstyle_callback = cb; }
    inline void setQsciLexerXML_SetColor_Callback(QsciLexerXML_SetColor_Callback cb) { qscilexerxml_setcolor_callback = cb; }
    inline void setQsciLexerXML_SetEolFill_Callback(QsciLexerXML_SetEolFill_Callback cb) { qscilexerxml_seteolfill_callback = cb; }
    inline void setQsciLexerXML_SetFont_Callback(QsciLexerXML_SetFont_Callback cb) { qscilexerxml_setfont_callback = cb; }
    inline void setQsciLexerXML_SetPaper_Callback(QsciLexerXML_SetPaper_Callback cb) { qscilexerxml_setpaper_callback = cb; }
    inline void setQsciLexerXML_ReadProperties_Callback(QsciLexerXML_ReadProperties_Callback cb) { qscilexerxml_readproperties_callback = cb; }
    inline void setQsciLexerXML_WriteProperties_Callback(QsciLexerXML_WriteProperties_Callback cb) { qscilexerxml_writeproperties_callback = cb; }
    inline void setQsciLexerXML_Event_Callback(QsciLexerXML_Event_Callback cb) { qscilexerxml_event_callback = cb; }
    inline void setQsciLexerXML_EventFilter_Callback(QsciLexerXML_EventFilter_Callback cb) { qscilexerxml_eventfilter_callback = cb; }
    inline void setQsciLexerXML_TimerEvent_Callback(QsciLexerXML_TimerEvent_Callback cb) { qscilexerxml_timerevent_callback = cb; }
    inline void setQsciLexerXML_ChildEvent_Callback(QsciLexerXML_ChildEvent_Callback cb) { qscilexerxml_childevent_callback = cb; }
    inline void setQsciLexerXML_CustomEvent_Callback(QsciLexerXML_CustomEvent_Callback cb) { qscilexerxml_customevent_callback = cb; }
    inline void setQsciLexerXML_ConnectNotify_Callback(QsciLexerXML_ConnectNotify_Callback cb) { qscilexerxml_connectnotify_callback = cb; }
    inline void setQsciLexerXML_DisconnectNotify_Callback(QsciLexerXML_DisconnectNotify_Callback cb) { qscilexerxml_disconnectnotify_callback = cb; }
    inline void setQsciLexerXML_TextAsBytes_Callback(QsciLexerXML_TextAsBytes_Callback cb) { qscilexerxml_textasbytes_callback = cb; }
    inline void setQsciLexerXML_BytesAsText_Callback(QsciLexerXML_BytesAsText_Callback cb) { qscilexerxml_bytesastext_callback = cb; }
    inline void setQsciLexerXML_Sender_Callback(QsciLexerXML_Sender_Callback cb) { qscilexerxml_sender_callback = cb; }
    inline void setQsciLexerXML_SenderSignalIndex_Callback(QsciLexerXML_SenderSignalIndex_Callback cb) { qscilexerxml_sendersignalindex_callback = cb; }
    inline void setQsciLexerXML_Receivers_Callback(QsciLexerXML_Receivers_Callback cb) { qscilexerxml_receivers_callback = cb; }
    inline void setQsciLexerXML_IsSignalConnected_Callback(QsciLexerXML_IsSignalConnected_Callback cb) { qscilexerxml_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerXML_MetaObject_IsBase(bool value) const { qscilexerxml_metaobject_isbase = value; }
    inline void setQsciLexerXML_Metacast_IsBase(bool value) const { qscilexerxml_metacast_isbase = value; }
    inline void setQsciLexerXML_Metacall_IsBase(bool value) const { qscilexerxml_metacall_isbase = value; }
    inline void setQsciLexerXML_SetFoldCompact_IsBase(bool value) const { qscilexerxml_setfoldcompact_isbase = value; }
    inline void setQsciLexerXML_SetFoldPreprocessor_IsBase(bool value) const { qscilexerxml_setfoldpreprocessor_isbase = value; }
    inline void setQsciLexerXML_SetCaseSensitiveTags_IsBase(bool value) const { qscilexerxml_setcasesensitivetags_isbase = value; }
    inline void setQsciLexerXML_Language_IsBase(bool value) const { qscilexerxml_language_isbase = value; }
    inline void setQsciLexerXML_Lexer_IsBase(bool value) const { qscilexerxml_lexer_isbase = value; }
    inline void setQsciLexerXML_LexerId_IsBase(bool value) const { qscilexerxml_lexerid_isbase = value; }
    inline void setQsciLexerXML_AutoCompletionFillups_IsBase(bool value) const { qscilexerxml_autocompletionfillups_isbase = value; }
    inline void setQsciLexerXML_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerxml_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerXML_BlockEnd_IsBase(bool value) const { qscilexerxml_blockend_isbase = value; }
    inline void setQsciLexerXML_BlockLookback_IsBase(bool value) const { qscilexerxml_blocklookback_isbase = value; }
    inline void setQsciLexerXML_BlockStart_IsBase(bool value) const { qscilexerxml_blockstart_isbase = value; }
    inline void setQsciLexerXML_BlockStartKeyword_IsBase(bool value) const { qscilexerxml_blockstartkeyword_isbase = value; }
    inline void setQsciLexerXML_BraceStyle_IsBase(bool value) const { qscilexerxml_bracestyle_isbase = value; }
    inline void setQsciLexerXML_CaseSensitive_IsBase(bool value) const { qscilexerxml_casesensitive_isbase = value; }
    inline void setQsciLexerXML_Color_IsBase(bool value) const { qscilexerxml_color_isbase = value; }
    inline void setQsciLexerXML_EolFill_IsBase(bool value) const { qscilexerxml_eolfill_isbase = value; }
    inline void setQsciLexerXML_Font_IsBase(bool value) const { qscilexerxml_font_isbase = value; }
    inline void setQsciLexerXML_IndentationGuideView_IsBase(bool value) const { qscilexerxml_indentationguideview_isbase = value; }
    inline void setQsciLexerXML_Keywords_IsBase(bool value) const { qscilexerxml_keywords_isbase = value; }
    inline void setQsciLexerXML_DefaultStyle_IsBase(bool value) const { qscilexerxml_defaultstyle_isbase = value; }
    inline void setQsciLexerXML_Description_IsBase(bool value) const { qscilexerxml_description_isbase = value; }
    inline void setQsciLexerXML_Paper_IsBase(bool value) const { qscilexerxml_paper_isbase = value; }
    inline void setQsciLexerXML_DefaultColor2_IsBase(bool value) const { qscilexerxml_defaultcolor2_isbase = value; }
    inline void setQsciLexerXML_DefaultEolFill_IsBase(bool value) const { qscilexerxml_defaulteolfill_isbase = value; }
    inline void setQsciLexerXML_DefaultFont2_IsBase(bool value) const { qscilexerxml_defaultfont2_isbase = value; }
    inline void setQsciLexerXML_DefaultPaper2_IsBase(bool value) const { qscilexerxml_defaultpaper2_isbase = value; }
    inline void setQsciLexerXML_SetEditor_IsBase(bool value) const { qscilexerxml_seteditor_isbase = value; }
    inline void setQsciLexerXML_RefreshProperties_IsBase(bool value) const { qscilexerxml_refreshproperties_isbase = value; }
    inline void setQsciLexerXML_StyleBitsNeeded_IsBase(bool value) const { qscilexerxml_stylebitsneeded_isbase = value; }
    inline void setQsciLexerXML_WordCharacters_IsBase(bool value) const { qscilexerxml_wordcharacters_isbase = value; }
    inline void setQsciLexerXML_SetAutoIndentStyle_IsBase(bool value) const { qscilexerxml_setautoindentstyle_isbase = value; }
    inline void setQsciLexerXML_SetColor_IsBase(bool value) const { qscilexerxml_setcolor_isbase = value; }
    inline void setQsciLexerXML_SetEolFill_IsBase(bool value) const { qscilexerxml_seteolfill_isbase = value; }
    inline void setQsciLexerXML_SetFont_IsBase(bool value) const { qscilexerxml_setfont_isbase = value; }
    inline void setQsciLexerXML_SetPaper_IsBase(bool value) const { qscilexerxml_setpaper_isbase = value; }
    inline void setQsciLexerXML_ReadProperties_IsBase(bool value) const { qscilexerxml_readproperties_isbase = value; }
    inline void setQsciLexerXML_WriteProperties_IsBase(bool value) const { qscilexerxml_writeproperties_isbase = value; }
    inline void setQsciLexerXML_Event_IsBase(bool value) const { qscilexerxml_event_isbase = value; }
    inline void setQsciLexerXML_EventFilter_IsBase(bool value) const { qscilexerxml_eventfilter_isbase = value; }
    inline void setQsciLexerXML_TimerEvent_IsBase(bool value) const { qscilexerxml_timerevent_isbase = value; }
    inline void setQsciLexerXML_ChildEvent_IsBase(bool value) const { qscilexerxml_childevent_isbase = value; }
    inline void setQsciLexerXML_CustomEvent_IsBase(bool value) const { qscilexerxml_customevent_isbase = value; }
    inline void setQsciLexerXML_ConnectNotify_IsBase(bool value) const { qscilexerxml_connectnotify_isbase = value; }
    inline void setQsciLexerXML_DisconnectNotify_IsBase(bool value) const { qscilexerxml_disconnectnotify_isbase = value; }
    inline void setQsciLexerXML_TextAsBytes_IsBase(bool value) const { qscilexerxml_textasbytes_isbase = value; }
    inline void setQsciLexerXML_BytesAsText_IsBase(bool value) const { qscilexerxml_bytesastext_isbase = value; }
    inline void setQsciLexerXML_Sender_IsBase(bool value) const { qscilexerxml_sender_isbase = value; }
    inline void setQsciLexerXML_SenderSignalIndex_IsBase(bool value) const { qscilexerxml_sendersignalindex_isbase = value; }
    inline void setQsciLexerXML_Receivers_IsBase(bool value) const { qscilexerxml_receivers_isbase = value; }
    inline void setQsciLexerXML_IsSignalConnected_IsBase(bool value) const { qscilexerxml_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerxml_metaobject_isbase) {
            qscilexerxml_metaobject_isbase = false;
            return QsciLexerXML::metaObject();
        }
        auto metaobject_cb = qscilexerxml_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerXML::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerxml_metacast_isbase) {
            qscilexerxml_metacast_isbase = false;
            return QsciLexerXML::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerxml_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerxml_metacall_isbase) {
            qscilexerxml_metacall_isbase = false;
            return QsciLexerXML::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerxml_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerxml_setfoldcompact_isbase) {
            qscilexerxml_setfoldcompact_isbase = false;
            QsciLexerXML::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerxml_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerXML::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerxml_setfoldpreprocessor_isbase) {
            qscilexerxml_setfoldpreprocessor_isbase = false;
            QsciLexerXML::setFoldPreprocessor(fold);
            return;
        }
        auto setfoldpreprocessor_cb = qscilexerxml_setfoldpreprocessor_callback;
        if (setfoldpreprocessor_cb) {
            bool cbval1 = fold;

            setfoldpreprocessor_cb(this, cbval1);
            return;
        }
        QsciLexerXML::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaseSensitiveTags(bool sens) override {
        if (qscilexerxml_setcasesensitivetags_isbase) {
            qscilexerxml_setcasesensitivetags_isbase = false;
            QsciLexerXML::setCaseSensitiveTags(sens);
            return;
        }
        auto setcasesensitivetags_cb = qscilexerxml_setcasesensitivetags_callback;
        if (setcasesensitivetags_cb) {
            bool cbval1 = sens;

            setcasesensitivetags_cb(this, cbval1);
            return;
        }
        QsciLexerXML::setCaseSensitiveTags(sens);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerxml_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerxml_lexer_isbase) {
            qscilexerxml_lexer_isbase = false;
            return QsciLexerXML::lexer();
        }
        auto lexer_cb = qscilexerxml_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerXML::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerxml_lexerid_isbase) {
            qscilexerxml_lexerid_isbase = false;
            return QsciLexerXML::lexerId();
        }
        auto lexerid_cb = qscilexerxml_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerxml_autocompletionfillups_isbase) {
            qscilexerxml_autocompletionfillups_isbase = false;
            return QsciLexerXML::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerxml_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerXML::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerxml_autocompletionwordseparators_isbase) {
            qscilexerxml_autocompletionwordseparators_isbase = false;
            return QsciLexerXML::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerxml_autocompletionwordseparators_callback;
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
        return QsciLexerXML::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerxml_blockend_isbase) {
            qscilexerxml_blockend_isbase = false;
            return QsciLexerXML::blockEnd(style);
        }
        auto blockend_cb = qscilexerxml_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerxml_blocklookback_isbase) {
            qscilexerxml_blocklookback_isbase = false;
            return QsciLexerXML::blockLookback();
        }
        auto blocklookback_cb = qscilexerxml_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerxml_blockstart_isbase) {
            qscilexerxml_blockstart_isbase = false;
            return QsciLexerXML::blockStart(style);
        }
        auto blockstart_cb = qscilexerxml_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerxml_blockstartkeyword_isbase) {
            qscilexerxml_blockstartkeyword_isbase = false;
            return QsciLexerXML::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerxml_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerxml_bracestyle_isbase) {
            qscilexerxml_bracestyle_isbase = false;
            return QsciLexerXML::braceStyle();
        }
        auto bracestyle_cb = qscilexerxml_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerxml_casesensitive_isbase) {
            qscilexerxml_casesensitive_isbase = false;
            return QsciLexerXML::caseSensitive();
        }
        auto casesensitive_cb = qscilexerxml_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerXML::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerxml_color_isbase) {
            qscilexerxml_color_isbase = false;
            return QsciLexerXML::color(style);
        }
        auto color_cb = qscilexerxml_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerxml_eolfill_isbase) {
            qscilexerxml_eolfill_isbase = false;
            return QsciLexerXML::eolFill(style);
        }
        auto eolfill_cb = qscilexerxml_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerxml_font_isbase) {
            qscilexerxml_font_isbase = false;
            return QsciLexerXML::font(style);
        }
        auto font_cb = qscilexerxml_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerxml_indentationguideview_isbase) {
            qscilexerxml_indentationguideview_isbase = false;
            return QsciLexerXML::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerxml_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerxml_keywords_isbase) {
            qscilexerxml_keywords_isbase = false;
            return QsciLexerXML::keywords(set);
        }
        auto keywords_cb = qscilexerxml_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerxml_defaultstyle_isbase) {
            qscilexerxml_defaultstyle_isbase = false;
            return QsciLexerXML::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerxml_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerxml_description_callback;
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
        if (qscilexerxml_paper_isbase) {
            qscilexerxml_paper_isbase = false;
            return QsciLexerXML::paper(style);
        }
        auto paper_cb = qscilexerxml_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerxml_defaultcolor2_isbase) {
            qscilexerxml_defaultcolor2_isbase = false;
            return QsciLexerXML::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerxml_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerxml_defaulteolfill_isbase) {
            qscilexerxml_defaulteolfill_isbase = false;
            return QsciLexerXML::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerxml_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerxml_defaultfont2_isbase) {
            qscilexerxml_defaultfont2_isbase = false;
            return QsciLexerXML::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerxml_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerxml_defaultpaper2_isbase) {
            qscilexerxml_defaultpaper2_isbase = false;
            return QsciLexerXML::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerxml_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerXML::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerxml_seteditor_isbase) {
            qscilexerxml_seteditor_isbase = false;
            QsciLexerXML::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerxml_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerXML::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerxml_refreshproperties_isbase) {
            qscilexerxml_refreshproperties_isbase = false;
            QsciLexerXML::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerxml_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerXML::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerxml_stylebitsneeded_isbase) {
            qscilexerxml_stylebitsneeded_isbase = false;
            return QsciLexerXML::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerxml_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerxml_wordcharacters_isbase) {
            qscilexerxml_wordcharacters_isbase = false;
            return QsciLexerXML::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerxml_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerXML::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerxml_setautoindentstyle_isbase) {
            qscilexerxml_setautoindentstyle_isbase = false;
            QsciLexerXML::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerxml_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerXML::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerxml_setcolor_isbase) {
            qscilexerxml_setcolor_isbase = false;
            QsciLexerXML::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerxml_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerxml_seteolfill_isbase) {
            qscilexerxml_seteolfill_isbase = false;
            QsciLexerXML::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerxml_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerxml_setfont_isbase) {
            qscilexerxml_setfont_isbase = false;
            QsciLexerXML::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerxml_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerxml_setpaper_isbase) {
            qscilexerxml_setpaper_isbase = false;
            QsciLexerXML::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerxml_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerxml_readproperties_isbase) {
            qscilexerxml_readproperties_isbase = false;
            return QsciLexerXML::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerxml_readproperties_callback;
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
        return QsciLexerXML::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerxml_writeproperties_isbase) {
            qscilexerxml_writeproperties_isbase = false;
            return QsciLexerXML::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerxml_writeproperties_callback;
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
        return QsciLexerXML::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerxml_event_isbase) {
            qscilexerxml_event_isbase = false;
            return QsciLexerXML::event(event);
        }
        auto event_cb = qscilexerxml_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerxml_eventfilter_isbase) {
            qscilexerxml_eventfilter_isbase = false;
            return QsciLexerXML::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerxml_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerXML::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerxml_timerevent_isbase) {
            qscilexerxml_timerevent_isbase = false;
            QsciLexerXML::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerxml_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerXML::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerxml_childevent_isbase) {
            qscilexerxml_childevent_isbase = false;
            QsciLexerXML::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerxml_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerXML::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerxml_customevent_isbase) {
            qscilexerxml_customevent_isbase = false;
            QsciLexerXML::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerxml_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerXML::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_connectnotify_isbase) {
            qscilexerxml_connectnotify_isbase = false;
            QsciLexerXML::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerxml_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerXML::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_disconnectnotify_isbase) {
            qscilexerxml_disconnectnotify_isbase = false;
            QsciLexerXML::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerxml_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerXML::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerxml_textasbytes_isbase) {
            qscilexerxml_textasbytes_isbase = false;
            return QsciLexerXML::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerxml_textasbytes_callback;
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
        return QsciLexerXML::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerxml_bytesastext_isbase) {
            qscilexerxml_bytesastext_isbase = false;
            return QsciLexerXML::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerxml_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerXML::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerxml_sender_isbase) {
            qscilexerxml_sender_isbase = false;
            return QsciLexerXML::sender();
        }
        auto sender_cb = qscilexerxml_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerXML::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerxml_sendersignalindex_isbase) {
            qscilexerxml_sendersignalindex_isbase = false;
            return QsciLexerXML::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerxml_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerxml_receivers_isbase) {
            qscilexerxml_receivers_isbase = false;
            return QsciLexerXML::receivers(signal);
        }
        auto receivers_cb = qscilexerxml_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerxml_issignalconnected_isbase) {
            qscilexerxml_issignalconnected_isbase = false;
            return QsciLexerXML::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerxml_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerXML_ReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerXML_SuperReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerXML_WriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerXML_SuperWriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerXML_TimerEvent(QsciLexerXML* self, QTimerEvent* event);
    friend void QsciLexerXML_SuperTimerEvent(QsciLexerXML* self, QTimerEvent* event);
    friend void QsciLexerXML_ChildEvent(QsciLexerXML* self, QChildEvent* event);
    friend void QsciLexerXML_SuperChildEvent(QsciLexerXML* self, QChildEvent* event);
    friend void QsciLexerXML_CustomEvent(QsciLexerXML* self, QEvent* event);
    friend void QsciLexerXML_SuperCustomEvent(QsciLexerXML* self, QEvent* event);
    friend void QsciLexerXML_ConnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
    friend void QsciLexerXML_SuperConnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
    friend void QsciLexerXML_DisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
    friend void QsciLexerXML_SuperDisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerXML_TextAsBytes(const QsciLexerXML* self, const libqt_string text);
    friend libqt_string QsciLexerXML_SuperTextAsBytes(const QsciLexerXML* self, const libqt_string text);
    friend libqt_string QsciLexerXML_BytesAsText(const QsciLexerXML* self, const char* bytes, int size);
    friend libqt_string QsciLexerXML_SuperBytesAsText(const QsciLexerXML* self, const char* bytes, int size);
    friend QObject* QsciLexerXML_Sender(const QsciLexerXML* self);
    friend QObject* QsciLexerXML_SuperSender(const QsciLexerXML* self);
    friend int QsciLexerXML_SenderSignalIndex(const QsciLexerXML* self);
    friend int QsciLexerXML_SuperSenderSignalIndex(const QsciLexerXML* self);
    friend int QsciLexerXML_Receivers(const QsciLexerXML* self, const char* signal);
    friend int QsciLexerXML_SuperReceivers(const QsciLexerXML* self, const char* signal);
    friend bool QsciLexerXML_IsSignalConnected(const QsciLexerXML* self, const QMetaMethod* signal);
    friend bool QsciLexerXML_SuperIsSignalConnected(const QsciLexerXML* self, const QMetaMethod* signal);
};

#endif
