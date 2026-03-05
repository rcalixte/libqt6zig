#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerDiff so that we can call protected methods
class VirtualQsciLexerDiff final : public QsciLexerDiff {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerDiff = true;

    // Virtual class public types (including callbacks)
    using QsciLexerDiff_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerDiff_Metacast_Callback = void* (*)(QsciLexerDiff*, const char*);
    using QsciLexerDiff_Metacall_Callback = int (*)(QsciLexerDiff*, int, int, void**);
    using QsciLexerDiff_Language_Callback = const char* (*)();
    using QsciLexerDiff_Lexer_Callback = const char* (*)();
    using QsciLexerDiff_LexerId_Callback = int (*)();
    using QsciLexerDiff_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerDiff_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerDiff_BlockEnd_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockLookback_Callback = int (*)();
    using QsciLexerDiff_BlockStart_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockStartKeyword_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BraceStyle_Callback = int (*)();
    using QsciLexerDiff_CaseSensitive_Callback = bool (*)();
    using QsciLexerDiff_Color_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_EolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Font_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_IndentationGuideView_Callback = int (*)();
    using QsciLexerDiff_Keywords_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultStyle_Callback = int (*)();
    using QsciLexerDiff_Description_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Paper_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultColor2_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultEolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultFont2_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultPaper2_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_SetEditor_Callback = void (*)(QsciLexerDiff*, QsciScintilla*);
    using QsciLexerDiff_RefreshProperties_Callback = void (*)();
    using QsciLexerDiff_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerDiff_WordCharacters_Callback = const char* (*)();
    using QsciLexerDiff_SetAutoIndentStyle_Callback = void (*)(QsciLexerDiff*, int);
    using QsciLexerDiff_SetColor_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_SetEolFill_Callback = void (*)(QsciLexerDiff*, bool, int);
    using QsciLexerDiff_SetFont_Callback = void (*)(QsciLexerDiff*, QFont*, int);
    using QsciLexerDiff_SetPaper_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_ReadProperties_Callback = bool (*)(QsciLexerDiff*, QSettings*, const char*);
    using QsciLexerDiff_WriteProperties_Callback = bool (*)(const QsciLexerDiff*, QSettings*, const char*);
    using QsciLexerDiff_Event_Callback = bool (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_EventFilter_Callback = bool (*)(QsciLexerDiff*, QObject*, QEvent*);
    using QsciLexerDiff_TimerEvent_Callback = void (*)(QsciLexerDiff*, QTimerEvent*);
    using QsciLexerDiff_ChildEvent_Callback = void (*)(QsciLexerDiff*, QChildEvent*);
    using QsciLexerDiff_CustomEvent_Callback = void (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_ConnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff_DisconnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff_TextAsBytes_Callback = libqt_string (*)(const QsciLexerDiff*, const char*);
    using QsciLexerDiff_BytesAsText_Callback = const char* (*)(const QsciLexerDiff*, const char*, int);
    using QsciLexerDiff_Sender_Callback = QObject* (*)();
    using QsciLexerDiff_SenderSignalIndex_Callback = int (*)();
    using QsciLexerDiff_Receivers_Callback = int (*)(const QsciLexerDiff*, const char*);
    using QsciLexerDiff_IsSignalConnected_Callback = bool (*)(const QsciLexerDiff*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerDiff_MetaObject_Callback qscilexerdiff_metaobject_callback = nullptr;
    QsciLexerDiff_Metacast_Callback qscilexerdiff_metacast_callback = nullptr;
    QsciLexerDiff_Metacall_Callback qscilexerdiff_metacall_callback = nullptr;
    QsciLexerDiff_Language_Callback qscilexerdiff_language_callback = nullptr;
    QsciLexerDiff_Lexer_Callback qscilexerdiff_lexer_callback = nullptr;
    QsciLexerDiff_LexerId_Callback qscilexerdiff_lexerid_callback = nullptr;
    QsciLexerDiff_AutoCompletionFillups_Callback qscilexerdiff_autocompletionfillups_callback = nullptr;
    QsciLexerDiff_AutoCompletionWordSeparators_Callback qscilexerdiff_autocompletionwordseparators_callback = nullptr;
    QsciLexerDiff_BlockEnd_Callback qscilexerdiff_blockend_callback = nullptr;
    QsciLexerDiff_BlockLookback_Callback qscilexerdiff_blocklookback_callback = nullptr;
    QsciLexerDiff_BlockStart_Callback qscilexerdiff_blockstart_callback = nullptr;
    QsciLexerDiff_BlockStartKeyword_Callback qscilexerdiff_blockstartkeyword_callback = nullptr;
    QsciLexerDiff_BraceStyle_Callback qscilexerdiff_bracestyle_callback = nullptr;
    QsciLexerDiff_CaseSensitive_Callback qscilexerdiff_casesensitive_callback = nullptr;
    QsciLexerDiff_Color_Callback qscilexerdiff_color_callback = nullptr;
    QsciLexerDiff_EolFill_Callback qscilexerdiff_eolfill_callback = nullptr;
    QsciLexerDiff_Font_Callback qscilexerdiff_font_callback = nullptr;
    QsciLexerDiff_IndentationGuideView_Callback qscilexerdiff_indentationguideview_callback = nullptr;
    QsciLexerDiff_Keywords_Callback qscilexerdiff_keywords_callback = nullptr;
    QsciLexerDiff_DefaultStyle_Callback qscilexerdiff_defaultstyle_callback = nullptr;
    QsciLexerDiff_Description_Callback qscilexerdiff_description_callback = nullptr;
    QsciLexerDiff_Paper_Callback qscilexerdiff_paper_callback = nullptr;
    QsciLexerDiff_DefaultColor2_Callback qscilexerdiff_defaultcolor2_callback = nullptr;
    QsciLexerDiff_DefaultEolFill_Callback qscilexerdiff_defaulteolfill_callback = nullptr;
    QsciLexerDiff_DefaultFont2_Callback qscilexerdiff_defaultfont2_callback = nullptr;
    QsciLexerDiff_DefaultPaper2_Callback qscilexerdiff_defaultpaper2_callback = nullptr;
    QsciLexerDiff_SetEditor_Callback qscilexerdiff_seteditor_callback = nullptr;
    QsciLexerDiff_RefreshProperties_Callback qscilexerdiff_refreshproperties_callback = nullptr;
    QsciLexerDiff_StyleBitsNeeded_Callback qscilexerdiff_stylebitsneeded_callback = nullptr;
    QsciLexerDiff_WordCharacters_Callback qscilexerdiff_wordcharacters_callback = nullptr;
    QsciLexerDiff_SetAutoIndentStyle_Callback qscilexerdiff_setautoindentstyle_callback = nullptr;
    QsciLexerDiff_SetColor_Callback qscilexerdiff_setcolor_callback = nullptr;
    QsciLexerDiff_SetEolFill_Callback qscilexerdiff_seteolfill_callback = nullptr;
    QsciLexerDiff_SetFont_Callback qscilexerdiff_setfont_callback = nullptr;
    QsciLexerDiff_SetPaper_Callback qscilexerdiff_setpaper_callback = nullptr;
    QsciLexerDiff_ReadProperties_Callback qscilexerdiff_readproperties_callback = nullptr;
    QsciLexerDiff_WriteProperties_Callback qscilexerdiff_writeproperties_callback = nullptr;
    QsciLexerDiff_Event_Callback qscilexerdiff_event_callback = nullptr;
    QsciLexerDiff_EventFilter_Callback qscilexerdiff_eventfilter_callback = nullptr;
    QsciLexerDiff_TimerEvent_Callback qscilexerdiff_timerevent_callback = nullptr;
    QsciLexerDiff_ChildEvent_Callback qscilexerdiff_childevent_callback = nullptr;
    QsciLexerDiff_CustomEvent_Callback qscilexerdiff_customevent_callback = nullptr;
    QsciLexerDiff_ConnectNotify_Callback qscilexerdiff_connectnotify_callback = nullptr;
    QsciLexerDiff_DisconnectNotify_Callback qscilexerdiff_disconnectnotify_callback = nullptr;
    QsciLexerDiff_TextAsBytes_Callback qscilexerdiff_textasbytes_callback = nullptr;
    QsciLexerDiff_BytesAsText_Callback qscilexerdiff_bytesastext_callback = nullptr;
    QsciLexerDiff_Sender_Callback qscilexerdiff_sender_callback = nullptr;
    QsciLexerDiff_SenderSignalIndex_Callback qscilexerdiff_sendersignalindex_callback = nullptr;
    QsciLexerDiff_Receivers_Callback qscilexerdiff_receivers_callback = nullptr;
    QsciLexerDiff_IsSignalConnected_Callback qscilexerdiff_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerdiff_metaobject_isbase = false;
    mutable bool qscilexerdiff_metacast_isbase = false;
    mutable bool qscilexerdiff_metacall_isbase = false;
    mutable bool qscilexerdiff_language_isbase = false;
    mutable bool qscilexerdiff_lexer_isbase = false;
    mutable bool qscilexerdiff_lexerid_isbase = false;
    mutable bool qscilexerdiff_autocompletionfillups_isbase = false;
    mutable bool qscilexerdiff_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerdiff_blockend_isbase = false;
    mutable bool qscilexerdiff_blocklookback_isbase = false;
    mutable bool qscilexerdiff_blockstart_isbase = false;
    mutable bool qscilexerdiff_blockstartkeyword_isbase = false;
    mutable bool qscilexerdiff_bracestyle_isbase = false;
    mutable bool qscilexerdiff_casesensitive_isbase = false;
    mutable bool qscilexerdiff_color_isbase = false;
    mutable bool qscilexerdiff_eolfill_isbase = false;
    mutable bool qscilexerdiff_font_isbase = false;
    mutable bool qscilexerdiff_indentationguideview_isbase = false;
    mutable bool qscilexerdiff_keywords_isbase = false;
    mutable bool qscilexerdiff_defaultstyle_isbase = false;
    mutable bool qscilexerdiff_description_isbase = false;
    mutable bool qscilexerdiff_paper_isbase = false;
    mutable bool qscilexerdiff_defaultcolor2_isbase = false;
    mutable bool qscilexerdiff_defaulteolfill_isbase = false;
    mutable bool qscilexerdiff_defaultfont2_isbase = false;
    mutable bool qscilexerdiff_defaultpaper2_isbase = false;
    mutable bool qscilexerdiff_seteditor_isbase = false;
    mutable bool qscilexerdiff_refreshproperties_isbase = false;
    mutable bool qscilexerdiff_stylebitsneeded_isbase = false;
    mutable bool qscilexerdiff_wordcharacters_isbase = false;
    mutable bool qscilexerdiff_setautoindentstyle_isbase = false;
    mutable bool qscilexerdiff_setcolor_isbase = false;
    mutable bool qscilexerdiff_seteolfill_isbase = false;
    mutable bool qscilexerdiff_setfont_isbase = false;
    mutable bool qscilexerdiff_setpaper_isbase = false;
    mutable bool qscilexerdiff_readproperties_isbase = false;
    mutable bool qscilexerdiff_writeproperties_isbase = false;
    mutable bool qscilexerdiff_event_isbase = false;
    mutable bool qscilexerdiff_eventfilter_isbase = false;
    mutable bool qscilexerdiff_timerevent_isbase = false;
    mutable bool qscilexerdiff_childevent_isbase = false;
    mutable bool qscilexerdiff_customevent_isbase = false;
    mutable bool qscilexerdiff_connectnotify_isbase = false;
    mutable bool qscilexerdiff_disconnectnotify_isbase = false;
    mutable bool qscilexerdiff_textasbytes_isbase = false;
    mutable bool qscilexerdiff_bytesastext_isbase = false;
    mutable bool qscilexerdiff_sender_isbase = false;
    mutable bool qscilexerdiff_sendersignalindex_isbase = false;
    mutable bool qscilexerdiff_receivers_isbase = false;
    mutable bool qscilexerdiff_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerDiff() : QsciLexerDiff() {};
    VirtualQsciLexerDiff(QObject* parent) : QsciLexerDiff(parent) {};

    // Callback setters
    inline void setQsciLexerDiff_MetaObject_Callback(QsciLexerDiff_MetaObject_Callback cb) { qscilexerdiff_metaobject_callback = cb; }
    inline void setQsciLexerDiff_Metacast_Callback(QsciLexerDiff_Metacast_Callback cb) { qscilexerdiff_metacast_callback = cb; }
    inline void setQsciLexerDiff_Metacall_Callback(QsciLexerDiff_Metacall_Callback cb) { qscilexerdiff_metacall_callback = cb; }
    inline void setQsciLexerDiff_Language_Callback(QsciLexerDiff_Language_Callback cb) { qscilexerdiff_language_callback = cb; }
    inline void setQsciLexerDiff_Lexer_Callback(QsciLexerDiff_Lexer_Callback cb) { qscilexerdiff_lexer_callback = cb; }
    inline void setQsciLexerDiff_LexerId_Callback(QsciLexerDiff_LexerId_Callback cb) { qscilexerdiff_lexerid_callback = cb; }
    inline void setQsciLexerDiff_AutoCompletionFillups_Callback(QsciLexerDiff_AutoCompletionFillups_Callback cb) { qscilexerdiff_autocompletionfillups_callback = cb; }
    inline void setQsciLexerDiff_AutoCompletionWordSeparators_Callback(QsciLexerDiff_AutoCompletionWordSeparators_Callback cb) { qscilexerdiff_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerDiff_BlockEnd_Callback(QsciLexerDiff_BlockEnd_Callback cb) { qscilexerdiff_blockend_callback = cb; }
    inline void setQsciLexerDiff_BlockLookback_Callback(QsciLexerDiff_BlockLookback_Callback cb) { qscilexerdiff_blocklookback_callback = cb; }
    inline void setQsciLexerDiff_BlockStart_Callback(QsciLexerDiff_BlockStart_Callback cb) { qscilexerdiff_blockstart_callback = cb; }
    inline void setQsciLexerDiff_BlockStartKeyword_Callback(QsciLexerDiff_BlockStartKeyword_Callback cb) { qscilexerdiff_blockstartkeyword_callback = cb; }
    inline void setQsciLexerDiff_BraceStyle_Callback(QsciLexerDiff_BraceStyle_Callback cb) { qscilexerdiff_bracestyle_callback = cb; }
    inline void setQsciLexerDiff_CaseSensitive_Callback(QsciLexerDiff_CaseSensitive_Callback cb) { qscilexerdiff_casesensitive_callback = cb; }
    inline void setQsciLexerDiff_Color_Callback(QsciLexerDiff_Color_Callback cb) { qscilexerdiff_color_callback = cb; }
    inline void setQsciLexerDiff_EolFill_Callback(QsciLexerDiff_EolFill_Callback cb) { qscilexerdiff_eolfill_callback = cb; }
    inline void setQsciLexerDiff_Font_Callback(QsciLexerDiff_Font_Callback cb) { qscilexerdiff_font_callback = cb; }
    inline void setQsciLexerDiff_IndentationGuideView_Callback(QsciLexerDiff_IndentationGuideView_Callback cb) { qscilexerdiff_indentationguideview_callback = cb; }
    inline void setQsciLexerDiff_Keywords_Callback(QsciLexerDiff_Keywords_Callback cb) { qscilexerdiff_keywords_callback = cb; }
    inline void setQsciLexerDiff_DefaultStyle_Callback(QsciLexerDiff_DefaultStyle_Callback cb) { qscilexerdiff_defaultstyle_callback = cb; }
    inline void setQsciLexerDiff_Description_Callback(QsciLexerDiff_Description_Callback cb) { qscilexerdiff_description_callback = cb; }
    inline void setQsciLexerDiff_Paper_Callback(QsciLexerDiff_Paper_Callback cb) { qscilexerdiff_paper_callback = cb; }
    inline void setQsciLexerDiff_DefaultColor2_Callback(QsciLexerDiff_DefaultColor2_Callback cb) { qscilexerdiff_defaultcolor2_callback = cb; }
    inline void setQsciLexerDiff_DefaultEolFill_Callback(QsciLexerDiff_DefaultEolFill_Callback cb) { qscilexerdiff_defaulteolfill_callback = cb; }
    inline void setQsciLexerDiff_DefaultFont2_Callback(QsciLexerDiff_DefaultFont2_Callback cb) { qscilexerdiff_defaultfont2_callback = cb; }
    inline void setQsciLexerDiff_DefaultPaper2_Callback(QsciLexerDiff_DefaultPaper2_Callback cb) { qscilexerdiff_defaultpaper2_callback = cb; }
    inline void setQsciLexerDiff_SetEditor_Callback(QsciLexerDiff_SetEditor_Callback cb) { qscilexerdiff_seteditor_callback = cb; }
    inline void setQsciLexerDiff_RefreshProperties_Callback(QsciLexerDiff_RefreshProperties_Callback cb) { qscilexerdiff_refreshproperties_callback = cb; }
    inline void setQsciLexerDiff_StyleBitsNeeded_Callback(QsciLexerDiff_StyleBitsNeeded_Callback cb) { qscilexerdiff_stylebitsneeded_callback = cb; }
    inline void setQsciLexerDiff_WordCharacters_Callback(QsciLexerDiff_WordCharacters_Callback cb) { qscilexerdiff_wordcharacters_callback = cb; }
    inline void setQsciLexerDiff_SetAutoIndentStyle_Callback(QsciLexerDiff_SetAutoIndentStyle_Callback cb) { qscilexerdiff_setautoindentstyle_callback = cb; }
    inline void setQsciLexerDiff_SetColor_Callback(QsciLexerDiff_SetColor_Callback cb) { qscilexerdiff_setcolor_callback = cb; }
    inline void setQsciLexerDiff_SetEolFill_Callback(QsciLexerDiff_SetEolFill_Callback cb) { qscilexerdiff_seteolfill_callback = cb; }
    inline void setQsciLexerDiff_SetFont_Callback(QsciLexerDiff_SetFont_Callback cb) { qscilexerdiff_setfont_callback = cb; }
    inline void setQsciLexerDiff_SetPaper_Callback(QsciLexerDiff_SetPaper_Callback cb) { qscilexerdiff_setpaper_callback = cb; }
    inline void setQsciLexerDiff_ReadProperties_Callback(QsciLexerDiff_ReadProperties_Callback cb) { qscilexerdiff_readproperties_callback = cb; }
    inline void setQsciLexerDiff_WriteProperties_Callback(QsciLexerDiff_WriteProperties_Callback cb) { qscilexerdiff_writeproperties_callback = cb; }
    inline void setQsciLexerDiff_Event_Callback(QsciLexerDiff_Event_Callback cb) { qscilexerdiff_event_callback = cb; }
    inline void setQsciLexerDiff_EventFilter_Callback(QsciLexerDiff_EventFilter_Callback cb) { qscilexerdiff_eventfilter_callback = cb; }
    inline void setQsciLexerDiff_TimerEvent_Callback(QsciLexerDiff_TimerEvent_Callback cb) { qscilexerdiff_timerevent_callback = cb; }
    inline void setQsciLexerDiff_ChildEvent_Callback(QsciLexerDiff_ChildEvent_Callback cb) { qscilexerdiff_childevent_callback = cb; }
    inline void setQsciLexerDiff_CustomEvent_Callback(QsciLexerDiff_CustomEvent_Callback cb) { qscilexerdiff_customevent_callback = cb; }
    inline void setQsciLexerDiff_ConnectNotify_Callback(QsciLexerDiff_ConnectNotify_Callback cb) { qscilexerdiff_connectnotify_callback = cb; }
    inline void setQsciLexerDiff_DisconnectNotify_Callback(QsciLexerDiff_DisconnectNotify_Callback cb) { qscilexerdiff_disconnectnotify_callback = cb; }
    inline void setQsciLexerDiff_TextAsBytes_Callback(QsciLexerDiff_TextAsBytes_Callback cb) { qscilexerdiff_textasbytes_callback = cb; }
    inline void setQsciLexerDiff_BytesAsText_Callback(QsciLexerDiff_BytesAsText_Callback cb) { qscilexerdiff_bytesastext_callback = cb; }
    inline void setQsciLexerDiff_Sender_Callback(QsciLexerDiff_Sender_Callback cb) { qscilexerdiff_sender_callback = cb; }
    inline void setQsciLexerDiff_SenderSignalIndex_Callback(QsciLexerDiff_SenderSignalIndex_Callback cb) { qscilexerdiff_sendersignalindex_callback = cb; }
    inline void setQsciLexerDiff_Receivers_Callback(QsciLexerDiff_Receivers_Callback cb) { qscilexerdiff_receivers_callback = cb; }
    inline void setQsciLexerDiff_IsSignalConnected_Callback(QsciLexerDiff_IsSignalConnected_Callback cb) { qscilexerdiff_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerDiff_MetaObject_IsBase(bool value) const { qscilexerdiff_metaobject_isbase = value; }
    inline void setQsciLexerDiff_Metacast_IsBase(bool value) const { qscilexerdiff_metacast_isbase = value; }
    inline void setQsciLexerDiff_Metacall_IsBase(bool value) const { qscilexerdiff_metacall_isbase = value; }
    inline void setQsciLexerDiff_Language_IsBase(bool value) const { qscilexerdiff_language_isbase = value; }
    inline void setQsciLexerDiff_Lexer_IsBase(bool value) const { qscilexerdiff_lexer_isbase = value; }
    inline void setQsciLexerDiff_LexerId_IsBase(bool value) const { qscilexerdiff_lexerid_isbase = value; }
    inline void setQsciLexerDiff_AutoCompletionFillups_IsBase(bool value) const { qscilexerdiff_autocompletionfillups_isbase = value; }
    inline void setQsciLexerDiff_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerdiff_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerDiff_BlockEnd_IsBase(bool value) const { qscilexerdiff_blockend_isbase = value; }
    inline void setQsciLexerDiff_BlockLookback_IsBase(bool value) const { qscilexerdiff_blocklookback_isbase = value; }
    inline void setQsciLexerDiff_BlockStart_IsBase(bool value) const { qscilexerdiff_blockstart_isbase = value; }
    inline void setQsciLexerDiff_BlockStartKeyword_IsBase(bool value) const { qscilexerdiff_blockstartkeyword_isbase = value; }
    inline void setQsciLexerDiff_BraceStyle_IsBase(bool value) const { qscilexerdiff_bracestyle_isbase = value; }
    inline void setQsciLexerDiff_CaseSensitive_IsBase(bool value) const { qscilexerdiff_casesensitive_isbase = value; }
    inline void setQsciLexerDiff_Color_IsBase(bool value) const { qscilexerdiff_color_isbase = value; }
    inline void setQsciLexerDiff_EolFill_IsBase(bool value) const { qscilexerdiff_eolfill_isbase = value; }
    inline void setQsciLexerDiff_Font_IsBase(bool value) const { qscilexerdiff_font_isbase = value; }
    inline void setQsciLexerDiff_IndentationGuideView_IsBase(bool value) const { qscilexerdiff_indentationguideview_isbase = value; }
    inline void setQsciLexerDiff_Keywords_IsBase(bool value) const { qscilexerdiff_keywords_isbase = value; }
    inline void setQsciLexerDiff_DefaultStyle_IsBase(bool value) const { qscilexerdiff_defaultstyle_isbase = value; }
    inline void setQsciLexerDiff_Description_IsBase(bool value) const { qscilexerdiff_description_isbase = value; }
    inline void setQsciLexerDiff_Paper_IsBase(bool value) const { qscilexerdiff_paper_isbase = value; }
    inline void setQsciLexerDiff_DefaultColor2_IsBase(bool value) const { qscilexerdiff_defaultcolor2_isbase = value; }
    inline void setQsciLexerDiff_DefaultEolFill_IsBase(bool value) const { qscilexerdiff_defaulteolfill_isbase = value; }
    inline void setQsciLexerDiff_DefaultFont2_IsBase(bool value) const { qscilexerdiff_defaultfont2_isbase = value; }
    inline void setQsciLexerDiff_DefaultPaper2_IsBase(bool value) const { qscilexerdiff_defaultpaper2_isbase = value; }
    inline void setQsciLexerDiff_SetEditor_IsBase(bool value) const { qscilexerdiff_seteditor_isbase = value; }
    inline void setQsciLexerDiff_RefreshProperties_IsBase(bool value) const { qscilexerdiff_refreshproperties_isbase = value; }
    inline void setQsciLexerDiff_StyleBitsNeeded_IsBase(bool value) const { qscilexerdiff_stylebitsneeded_isbase = value; }
    inline void setQsciLexerDiff_WordCharacters_IsBase(bool value) const { qscilexerdiff_wordcharacters_isbase = value; }
    inline void setQsciLexerDiff_SetAutoIndentStyle_IsBase(bool value) const { qscilexerdiff_setautoindentstyle_isbase = value; }
    inline void setQsciLexerDiff_SetColor_IsBase(bool value) const { qscilexerdiff_setcolor_isbase = value; }
    inline void setQsciLexerDiff_SetEolFill_IsBase(bool value) const { qscilexerdiff_seteolfill_isbase = value; }
    inline void setQsciLexerDiff_SetFont_IsBase(bool value) const { qscilexerdiff_setfont_isbase = value; }
    inline void setQsciLexerDiff_SetPaper_IsBase(bool value) const { qscilexerdiff_setpaper_isbase = value; }
    inline void setQsciLexerDiff_ReadProperties_IsBase(bool value) const { qscilexerdiff_readproperties_isbase = value; }
    inline void setQsciLexerDiff_WriteProperties_IsBase(bool value) const { qscilexerdiff_writeproperties_isbase = value; }
    inline void setQsciLexerDiff_Event_IsBase(bool value) const { qscilexerdiff_event_isbase = value; }
    inline void setQsciLexerDiff_EventFilter_IsBase(bool value) const { qscilexerdiff_eventfilter_isbase = value; }
    inline void setQsciLexerDiff_TimerEvent_IsBase(bool value) const { qscilexerdiff_timerevent_isbase = value; }
    inline void setQsciLexerDiff_ChildEvent_IsBase(bool value) const { qscilexerdiff_childevent_isbase = value; }
    inline void setQsciLexerDiff_CustomEvent_IsBase(bool value) const { qscilexerdiff_customevent_isbase = value; }
    inline void setQsciLexerDiff_ConnectNotify_IsBase(bool value) const { qscilexerdiff_connectnotify_isbase = value; }
    inline void setQsciLexerDiff_DisconnectNotify_IsBase(bool value) const { qscilexerdiff_disconnectnotify_isbase = value; }
    inline void setQsciLexerDiff_TextAsBytes_IsBase(bool value) const { qscilexerdiff_textasbytes_isbase = value; }
    inline void setQsciLexerDiff_BytesAsText_IsBase(bool value) const { qscilexerdiff_bytesastext_isbase = value; }
    inline void setQsciLexerDiff_Sender_IsBase(bool value) const { qscilexerdiff_sender_isbase = value; }
    inline void setQsciLexerDiff_SenderSignalIndex_IsBase(bool value) const { qscilexerdiff_sendersignalindex_isbase = value; }
    inline void setQsciLexerDiff_Receivers_IsBase(bool value) const { qscilexerdiff_receivers_isbase = value; }
    inline void setQsciLexerDiff_IsSignalConnected_IsBase(bool value) const { qscilexerdiff_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerdiff_metaobject_isbase) {
            qscilexerdiff_metaobject_isbase = false;
            return QsciLexerDiff::metaObject();
        }
        auto metaobject_cb = qscilexerdiff_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerDiff::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerdiff_metacast_isbase) {
            qscilexerdiff_metacast_isbase = false;
            return QsciLexerDiff::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerdiff_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerdiff_metacall_isbase) {
            qscilexerdiff_metacall_isbase = false;
            return QsciLexerDiff::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerdiff_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerdiff_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerdiff_lexer_isbase) {
            qscilexerdiff_lexer_isbase = false;
            return QsciLexerDiff::lexer();
        }
        auto lexer_cb = qscilexerdiff_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerDiff::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerdiff_lexerid_isbase) {
            qscilexerdiff_lexerid_isbase = false;
            return QsciLexerDiff::lexerId();
        }
        auto lexerid_cb = qscilexerdiff_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerdiff_autocompletionfillups_isbase) {
            qscilexerdiff_autocompletionfillups_isbase = false;
            return QsciLexerDiff::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerdiff_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerDiff::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerdiff_autocompletionwordseparators_isbase) {
            qscilexerdiff_autocompletionwordseparators_isbase = false;
            return QsciLexerDiff::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerdiff_autocompletionwordseparators_callback;
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
        return QsciLexerDiff::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerdiff_blockend_isbase) {
            qscilexerdiff_blockend_isbase = false;
            return QsciLexerDiff::blockEnd(style);
        }
        auto blockend_cb = qscilexerdiff_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerdiff_blocklookback_isbase) {
            qscilexerdiff_blocklookback_isbase = false;
            return QsciLexerDiff::blockLookback();
        }
        auto blocklookback_cb = qscilexerdiff_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerdiff_blockstart_isbase) {
            qscilexerdiff_blockstart_isbase = false;
            return QsciLexerDiff::blockStart(style);
        }
        auto blockstart_cb = qscilexerdiff_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerdiff_blockstartkeyword_isbase) {
            qscilexerdiff_blockstartkeyword_isbase = false;
            return QsciLexerDiff::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerdiff_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerdiff_bracestyle_isbase) {
            qscilexerdiff_bracestyle_isbase = false;
            return QsciLexerDiff::braceStyle();
        }
        auto bracestyle_cb = qscilexerdiff_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerdiff_casesensitive_isbase) {
            qscilexerdiff_casesensitive_isbase = false;
            return QsciLexerDiff::caseSensitive();
        }
        auto casesensitive_cb = qscilexerdiff_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerDiff::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerdiff_color_isbase) {
            qscilexerdiff_color_isbase = false;
            return QsciLexerDiff::color(style);
        }
        auto color_cb = qscilexerdiff_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerdiff_eolfill_isbase) {
            qscilexerdiff_eolfill_isbase = false;
            return QsciLexerDiff::eolFill(style);
        }
        auto eolfill_cb = qscilexerdiff_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerdiff_font_isbase) {
            qscilexerdiff_font_isbase = false;
            return QsciLexerDiff::font(style);
        }
        auto font_cb = qscilexerdiff_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerdiff_indentationguideview_isbase) {
            qscilexerdiff_indentationguideview_isbase = false;
            return QsciLexerDiff::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerdiff_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerdiff_keywords_isbase) {
            qscilexerdiff_keywords_isbase = false;
            return QsciLexerDiff::keywords(set);
        }
        auto keywords_cb = qscilexerdiff_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerdiff_defaultstyle_isbase) {
            qscilexerdiff_defaultstyle_isbase = false;
            return QsciLexerDiff::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerdiff_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerdiff_description_callback;
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
        if (qscilexerdiff_paper_isbase) {
            qscilexerdiff_paper_isbase = false;
            return QsciLexerDiff::paper(style);
        }
        auto paper_cb = qscilexerdiff_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerdiff_defaultcolor2_isbase) {
            qscilexerdiff_defaultcolor2_isbase = false;
            return QsciLexerDiff::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerdiff_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerdiff_defaulteolfill_isbase) {
            qscilexerdiff_defaulteolfill_isbase = false;
            return QsciLexerDiff::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerdiff_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerdiff_defaultfont2_isbase) {
            qscilexerdiff_defaultfont2_isbase = false;
            return QsciLexerDiff::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerdiff_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerdiff_defaultpaper2_isbase) {
            qscilexerdiff_defaultpaper2_isbase = false;
            return QsciLexerDiff::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerdiff_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerDiff::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerdiff_seteditor_isbase) {
            qscilexerdiff_seteditor_isbase = false;
            QsciLexerDiff::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerdiff_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerdiff_refreshproperties_isbase) {
            qscilexerdiff_refreshproperties_isbase = false;
            QsciLexerDiff::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerdiff_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerDiff::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerdiff_stylebitsneeded_isbase) {
            qscilexerdiff_stylebitsneeded_isbase = false;
            return QsciLexerDiff::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerdiff_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerdiff_wordcharacters_isbase) {
            qscilexerdiff_wordcharacters_isbase = false;
            return QsciLexerDiff::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerdiff_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerDiff::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerdiff_setautoindentstyle_isbase) {
            qscilexerdiff_setautoindentstyle_isbase = false;
            QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerdiff_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerdiff_setcolor_isbase) {
            qscilexerdiff_setcolor_isbase = false;
            QsciLexerDiff::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerdiff_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerdiff_seteolfill_isbase) {
            qscilexerdiff_seteolfill_isbase = false;
            QsciLexerDiff::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerdiff_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerdiff_setfont_isbase) {
            qscilexerdiff_setfont_isbase = false;
            QsciLexerDiff::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerdiff_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerdiff_setpaper_isbase) {
            qscilexerdiff_setpaper_isbase = false;
            QsciLexerDiff::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerdiff_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerdiff_readproperties_isbase) {
            qscilexerdiff_readproperties_isbase = false;
            return QsciLexerDiff::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerdiff_readproperties_callback;
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
        return QsciLexerDiff::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerdiff_writeproperties_isbase) {
            qscilexerdiff_writeproperties_isbase = false;
            return QsciLexerDiff::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerdiff_writeproperties_callback;
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
        return QsciLexerDiff::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerdiff_event_isbase) {
            qscilexerdiff_event_isbase = false;
            return QsciLexerDiff::event(event);
        }
        auto event_cb = qscilexerdiff_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerdiff_eventfilter_isbase) {
            qscilexerdiff_eventfilter_isbase = false;
            return QsciLexerDiff::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerdiff_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerDiff::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerdiff_timerevent_isbase) {
            qscilexerdiff_timerevent_isbase = false;
            QsciLexerDiff::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerdiff_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerdiff_childevent_isbase) {
            qscilexerdiff_childevent_isbase = false;
            QsciLexerDiff::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerdiff_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerdiff_customevent_isbase) {
            qscilexerdiff_customevent_isbase = false;
            QsciLexerDiff::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerdiff_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_connectnotify_isbase) {
            qscilexerdiff_connectnotify_isbase = false;
            QsciLexerDiff::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerdiff_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_disconnectnotify_isbase) {
            qscilexerdiff_disconnectnotify_isbase = false;
            QsciLexerDiff::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerdiff_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerDiff::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerdiff_textasbytes_isbase) {
            qscilexerdiff_textasbytes_isbase = false;
            return QsciLexerDiff::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerdiff_textasbytes_callback;
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
        return QsciLexerDiff::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerdiff_bytesastext_isbase) {
            qscilexerdiff_bytesastext_isbase = false;
            return QsciLexerDiff::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerdiff_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerDiff::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerdiff_sender_isbase) {
            qscilexerdiff_sender_isbase = false;
            return QsciLexerDiff::sender();
        }
        auto sender_cb = qscilexerdiff_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerDiff::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerdiff_sendersignalindex_isbase) {
            qscilexerdiff_sendersignalindex_isbase = false;
            return QsciLexerDiff::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerdiff_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerdiff_receivers_isbase) {
            qscilexerdiff_receivers_isbase = false;
            return QsciLexerDiff::receivers(signal);
        }
        auto receivers_cb = qscilexerdiff_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerdiff_issignalconnected_isbase) {
            qscilexerdiff_issignalconnected_isbase = false;
            return QsciLexerDiff::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerdiff_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_SuperReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_SuperWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event);
    friend void QsciLexerDiff_SuperTimerEvent(QsciLexerDiff* self, QTimerEvent* event);
    friend void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event);
    friend void QsciLexerDiff_SuperChildEvent(QsciLexerDiff* self, QChildEvent* event);
    friend void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event);
    friend void QsciLexerDiff_SuperCustomEvent(QsciLexerDiff* self, QEvent* event);
    friend void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_SuperConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_SuperDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerDiff_TextAsBytes(const QsciLexerDiff* self, const libqt_string text);
    friend libqt_string QsciLexerDiff_SuperTextAsBytes(const QsciLexerDiff* self, const libqt_string text);
    friend libqt_string QsciLexerDiff_BytesAsText(const QsciLexerDiff* self, const char* bytes, int size);
    friend libqt_string QsciLexerDiff_SuperBytesAsText(const QsciLexerDiff* self, const char* bytes, int size);
    friend QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self);
    friend QObject* QsciLexerDiff_SuperSender(const QsciLexerDiff* self);
    friend int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self);
    friend int QsciLexerDiff_SuperSenderSignalIndex(const QsciLexerDiff* self);
    friend int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal);
    friend int QsciLexerDiff_SuperReceivers(const QsciLexerDiff* self, const char* signal);
    friend bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
    friend bool QsciLexerDiff_SuperIsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
};

#endif
