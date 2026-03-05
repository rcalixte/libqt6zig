#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERRUBY_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERRUBY_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerRuby so that we can call protected methods
class VirtualQsciLexerRuby final : public QsciLexerRuby {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerRuby = true;

    // Virtual class public types (including callbacks)
    using QsciLexerRuby_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerRuby_Metacast_Callback = void* (*)(QsciLexerRuby*, const char*);
    using QsciLexerRuby_Metacall_Callback = int (*)(QsciLexerRuby*, int, int, void**);
    using QsciLexerRuby_Language_Callback = const char* (*)();
    using QsciLexerRuby_Lexer_Callback = const char* (*)();
    using QsciLexerRuby_LexerId_Callback = int (*)();
    using QsciLexerRuby_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerRuby_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerRuby_BlockEnd_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockLookback_Callback = int (*)();
    using QsciLexerRuby_BlockStart_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockStartKeyword_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BraceStyle_Callback = int (*)();
    using QsciLexerRuby_CaseSensitive_Callback = bool (*)();
    using QsciLexerRuby_Color_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_EolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Font_Callback = QFont* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_IndentationGuideView_Callback = int (*)();
    using QsciLexerRuby_Keywords_Callback = const char* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultStyle_Callback = int (*)();
    using QsciLexerRuby_Description_Callback = const char* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Paper_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultColor2_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultEolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultFont2_Callback = QFont* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultPaper2_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_SetEditor_Callback = void (*)(QsciLexerRuby*, QsciScintilla*);
    using QsciLexerRuby_RefreshProperties_Callback = void (*)();
    using QsciLexerRuby_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerRuby_WordCharacters_Callback = const char* (*)();
    using QsciLexerRuby_SetAutoIndentStyle_Callback = void (*)(QsciLexerRuby*, int);
    using QsciLexerRuby_SetColor_Callback = void (*)(QsciLexerRuby*, QColor*, int);
    using QsciLexerRuby_SetEolFill_Callback = void (*)(QsciLexerRuby*, bool, int);
    using QsciLexerRuby_SetFont_Callback = void (*)(QsciLexerRuby*, QFont*, int);
    using QsciLexerRuby_SetPaper_Callback = void (*)(QsciLexerRuby*, QColor*, int);
    using QsciLexerRuby_ReadProperties_Callback = bool (*)(QsciLexerRuby*, QSettings*, const char*);
    using QsciLexerRuby_WriteProperties_Callback = bool (*)(const QsciLexerRuby*, QSettings*, const char*);
    using QsciLexerRuby_Event_Callback = bool (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_EventFilter_Callback = bool (*)(QsciLexerRuby*, QObject*, QEvent*);
    using QsciLexerRuby_TimerEvent_Callback = void (*)(QsciLexerRuby*, QTimerEvent*);
    using QsciLexerRuby_ChildEvent_Callback = void (*)(QsciLexerRuby*, QChildEvent*);
    using QsciLexerRuby_CustomEvent_Callback = void (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_ConnectNotify_Callback = void (*)(QsciLexerRuby*, QMetaMethod*);
    using QsciLexerRuby_DisconnectNotify_Callback = void (*)(QsciLexerRuby*, QMetaMethod*);
    using QsciLexerRuby_TextAsBytes_Callback = libqt_string (*)(const QsciLexerRuby*, const char*);
    using QsciLexerRuby_BytesAsText_Callback = const char* (*)(const QsciLexerRuby*, const char*, int);
    using QsciLexerRuby_Sender_Callback = QObject* (*)();
    using QsciLexerRuby_SenderSignalIndex_Callback = int (*)();
    using QsciLexerRuby_Receivers_Callback = int (*)(const QsciLexerRuby*, const char*);
    using QsciLexerRuby_IsSignalConnected_Callback = bool (*)(const QsciLexerRuby*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerRuby_MetaObject_Callback qscilexerruby_metaobject_callback = nullptr;
    QsciLexerRuby_Metacast_Callback qscilexerruby_metacast_callback = nullptr;
    QsciLexerRuby_Metacall_Callback qscilexerruby_metacall_callback = nullptr;
    QsciLexerRuby_Language_Callback qscilexerruby_language_callback = nullptr;
    QsciLexerRuby_Lexer_Callback qscilexerruby_lexer_callback = nullptr;
    QsciLexerRuby_LexerId_Callback qscilexerruby_lexerid_callback = nullptr;
    QsciLexerRuby_AutoCompletionFillups_Callback qscilexerruby_autocompletionfillups_callback = nullptr;
    QsciLexerRuby_AutoCompletionWordSeparators_Callback qscilexerruby_autocompletionwordseparators_callback = nullptr;
    QsciLexerRuby_BlockEnd_Callback qscilexerruby_blockend_callback = nullptr;
    QsciLexerRuby_BlockLookback_Callback qscilexerruby_blocklookback_callback = nullptr;
    QsciLexerRuby_BlockStart_Callback qscilexerruby_blockstart_callback = nullptr;
    QsciLexerRuby_BlockStartKeyword_Callback qscilexerruby_blockstartkeyword_callback = nullptr;
    QsciLexerRuby_BraceStyle_Callback qscilexerruby_bracestyle_callback = nullptr;
    QsciLexerRuby_CaseSensitive_Callback qscilexerruby_casesensitive_callback = nullptr;
    QsciLexerRuby_Color_Callback qscilexerruby_color_callback = nullptr;
    QsciLexerRuby_EolFill_Callback qscilexerruby_eolfill_callback = nullptr;
    QsciLexerRuby_Font_Callback qscilexerruby_font_callback = nullptr;
    QsciLexerRuby_IndentationGuideView_Callback qscilexerruby_indentationguideview_callback = nullptr;
    QsciLexerRuby_Keywords_Callback qscilexerruby_keywords_callback = nullptr;
    QsciLexerRuby_DefaultStyle_Callback qscilexerruby_defaultstyle_callback = nullptr;
    QsciLexerRuby_Description_Callback qscilexerruby_description_callback = nullptr;
    QsciLexerRuby_Paper_Callback qscilexerruby_paper_callback = nullptr;
    QsciLexerRuby_DefaultColor2_Callback qscilexerruby_defaultcolor2_callback = nullptr;
    QsciLexerRuby_DefaultEolFill_Callback qscilexerruby_defaulteolfill_callback = nullptr;
    QsciLexerRuby_DefaultFont2_Callback qscilexerruby_defaultfont2_callback = nullptr;
    QsciLexerRuby_DefaultPaper2_Callback qscilexerruby_defaultpaper2_callback = nullptr;
    QsciLexerRuby_SetEditor_Callback qscilexerruby_seteditor_callback = nullptr;
    QsciLexerRuby_RefreshProperties_Callback qscilexerruby_refreshproperties_callback = nullptr;
    QsciLexerRuby_StyleBitsNeeded_Callback qscilexerruby_stylebitsneeded_callback = nullptr;
    QsciLexerRuby_WordCharacters_Callback qscilexerruby_wordcharacters_callback = nullptr;
    QsciLexerRuby_SetAutoIndentStyle_Callback qscilexerruby_setautoindentstyle_callback = nullptr;
    QsciLexerRuby_SetColor_Callback qscilexerruby_setcolor_callback = nullptr;
    QsciLexerRuby_SetEolFill_Callback qscilexerruby_seteolfill_callback = nullptr;
    QsciLexerRuby_SetFont_Callback qscilexerruby_setfont_callback = nullptr;
    QsciLexerRuby_SetPaper_Callback qscilexerruby_setpaper_callback = nullptr;
    QsciLexerRuby_ReadProperties_Callback qscilexerruby_readproperties_callback = nullptr;
    QsciLexerRuby_WriteProperties_Callback qscilexerruby_writeproperties_callback = nullptr;
    QsciLexerRuby_Event_Callback qscilexerruby_event_callback = nullptr;
    QsciLexerRuby_EventFilter_Callback qscilexerruby_eventfilter_callback = nullptr;
    QsciLexerRuby_TimerEvent_Callback qscilexerruby_timerevent_callback = nullptr;
    QsciLexerRuby_ChildEvent_Callback qscilexerruby_childevent_callback = nullptr;
    QsciLexerRuby_CustomEvent_Callback qscilexerruby_customevent_callback = nullptr;
    QsciLexerRuby_ConnectNotify_Callback qscilexerruby_connectnotify_callback = nullptr;
    QsciLexerRuby_DisconnectNotify_Callback qscilexerruby_disconnectnotify_callback = nullptr;
    QsciLexerRuby_TextAsBytes_Callback qscilexerruby_textasbytes_callback = nullptr;
    QsciLexerRuby_BytesAsText_Callback qscilexerruby_bytesastext_callback = nullptr;
    QsciLexerRuby_Sender_Callback qscilexerruby_sender_callback = nullptr;
    QsciLexerRuby_SenderSignalIndex_Callback qscilexerruby_sendersignalindex_callback = nullptr;
    QsciLexerRuby_Receivers_Callback qscilexerruby_receivers_callback = nullptr;
    QsciLexerRuby_IsSignalConnected_Callback qscilexerruby_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerruby_metaobject_isbase = false;
    mutable bool qscilexerruby_metacast_isbase = false;
    mutable bool qscilexerruby_metacall_isbase = false;
    mutable bool qscilexerruby_language_isbase = false;
    mutable bool qscilexerruby_lexer_isbase = false;
    mutable bool qscilexerruby_lexerid_isbase = false;
    mutable bool qscilexerruby_autocompletionfillups_isbase = false;
    mutable bool qscilexerruby_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerruby_blockend_isbase = false;
    mutable bool qscilexerruby_blocklookback_isbase = false;
    mutable bool qscilexerruby_blockstart_isbase = false;
    mutable bool qscilexerruby_blockstartkeyword_isbase = false;
    mutable bool qscilexerruby_bracestyle_isbase = false;
    mutable bool qscilexerruby_casesensitive_isbase = false;
    mutable bool qscilexerruby_color_isbase = false;
    mutable bool qscilexerruby_eolfill_isbase = false;
    mutable bool qscilexerruby_font_isbase = false;
    mutable bool qscilexerruby_indentationguideview_isbase = false;
    mutable bool qscilexerruby_keywords_isbase = false;
    mutable bool qscilexerruby_defaultstyle_isbase = false;
    mutable bool qscilexerruby_description_isbase = false;
    mutable bool qscilexerruby_paper_isbase = false;
    mutable bool qscilexerruby_defaultcolor2_isbase = false;
    mutable bool qscilexerruby_defaulteolfill_isbase = false;
    mutable bool qscilexerruby_defaultfont2_isbase = false;
    mutable bool qscilexerruby_defaultpaper2_isbase = false;
    mutable bool qscilexerruby_seteditor_isbase = false;
    mutable bool qscilexerruby_refreshproperties_isbase = false;
    mutable bool qscilexerruby_stylebitsneeded_isbase = false;
    mutable bool qscilexerruby_wordcharacters_isbase = false;
    mutable bool qscilexerruby_setautoindentstyle_isbase = false;
    mutable bool qscilexerruby_setcolor_isbase = false;
    mutable bool qscilexerruby_seteolfill_isbase = false;
    mutable bool qscilexerruby_setfont_isbase = false;
    mutable bool qscilexerruby_setpaper_isbase = false;
    mutable bool qscilexerruby_readproperties_isbase = false;
    mutable bool qscilexerruby_writeproperties_isbase = false;
    mutable bool qscilexerruby_event_isbase = false;
    mutable bool qscilexerruby_eventfilter_isbase = false;
    mutable bool qscilexerruby_timerevent_isbase = false;
    mutable bool qscilexerruby_childevent_isbase = false;
    mutable bool qscilexerruby_customevent_isbase = false;
    mutable bool qscilexerruby_connectnotify_isbase = false;
    mutable bool qscilexerruby_disconnectnotify_isbase = false;
    mutable bool qscilexerruby_textasbytes_isbase = false;
    mutable bool qscilexerruby_bytesastext_isbase = false;
    mutable bool qscilexerruby_sender_isbase = false;
    mutable bool qscilexerruby_sendersignalindex_isbase = false;
    mutable bool qscilexerruby_receivers_isbase = false;
    mutable bool qscilexerruby_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerRuby() : QsciLexerRuby() {};
    VirtualQsciLexerRuby(QObject* parent) : QsciLexerRuby(parent) {};

    // Callback setters
    inline void setQsciLexerRuby_MetaObject_Callback(QsciLexerRuby_MetaObject_Callback cb) { qscilexerruby_metaobject_callback = cb; }
    inline void setQsciLexerRuby_Metacast_Callback(QsciLexerRuby_Metacast_Callback cb) { qscilexerruby_metacast_callback = cb; }
    inline void setQsciLexerRuby_Metacall_Callback(QsciLexerRuby_Metacall_Callback cb) { qscilexerruby_metacall_callback = cb; }
    inline void setQsciLexerRuby_Language_Callback(QsciLexerRuby_Language_Callback cb) { qscilexerruby_language_callback = cb; }
    inline void setQsciLexerRuby_Lexer_Callback(QsciLexerRuby_Lexer_Callback cb) { qscilexerruby_lexer_callback = cb; }
    inline void setQsciLexerRuby_LexerId_Callback(QsciLexerRuby_LexerId_Callback cb) { qscilexerruby_lexerid_callback = cb; }
    inline void setQsciLexerRuby_AutoCompletionFillups_Callback(QsciLexerRuby_AutoCompletionFillups_Callback cb) { qscilexerruby_autocompletionfillups_callback = cb; }
    inline void setQsciLexerRuby_AutoCompletionWordSeparators_Callback(QsciLexerRuby_AutoCompletionWordSeparators_Callback cb) { qscilexerruby_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerRuby_BlockEnd_Callback(QsciLexerRuby_BlockEnd_Callback cb) { qscilexerruby_blockend_callback = cb; }
    inline void setQsciLexerRuby_BlockLookback_Callback(QsciLexerRuby_BlockLookback_Callback cb) { qscilexerruby_blocklookback_callback = cb; }
    inline void setQsciLexerRuby_BlockStart_Callback(QsciLexerRuby_BlockStart_Callback cb) { qscilexerruby_blockstart_callback = cb; }
    inline void setQsciLexerRuby_BlockStartKeyword_Callback(QsciLexerRuby_BlockStartKeyword_Callback cb) { qscilexerruby_blockstartkeyword_callback = cb; }
    inline void setQsciLexerRuby_BraceStyle_Callback(QsciLexerRuby_BraceStyle_Callback cb) { qscilexerruby_bracestyle_callback = cb; }
    inline void setQsciLexerRuby_CaseSensitive_Callback(QsciLexerRuby_CaseSensitive_Callback cb) { qscilexerruby_casesensitive_callback = cb; }
    inline void setQsciLexerRuby_Color_Callback(QsciLexerRuby_Color_Callback cb) { qscilexerruby_color_callback = cb; }
    inline void setQsciLexerRuby_EolFill_Callback(QsciLexerRuby_EolFill_Callback cb) { qscilexerruby_eolfill_callback = cb; }
    inline void setQsciLexerRuby_Font_Callback(QsciLexerRuby_Font_Callback cb) { qscilexerruby_font_callback = cb; }
    inline void setQsciLexerRuby_IndentationGuideView_Callback(QsciLexerRuby_IndentationGuideView_Callback cb) { qscilexerruby_indentationguideview_callback = cb; }
    inline void setQsciLexerRuby_Keywords_Callback(QsciLexerRuby_Keywords_Callback cb) { qscilexerruby_keywords_callback = cb; }
    inline void setQsciLexerRuby_DefaultStyle_Callback(QsciLexerRuby_DefaultStyle_Callback cb) { qscilexerruby_defaultstyle_callback = cb; }
    inline void setQsciLexerRuby_Description_Callback(QsciLexerRuby_Description_Callback cb) { qscilexerruby_description_callback = cb; }
    inline void setQsciLexerRuby_Paper_Callback(QsciLexerRuby_Paper_Callback cb) { qscilexerruby_paper_callback = cb; }
    inline void setQsciLexerRuby_DefaultColor2_Callback(QsciLexerRuby_DefaultColor2_Callback cb) { qscilexerruby_defaultcolor2_callback = cb; }
    inline void setQsciLexerRuby_DefaultEolFill_Callback(QsciLexerRuby_DefaultEolFill_Callback cb) { qscilexerruby_defaulteolfill_callback = cb; }
    inline void setQsciLexerRuby_DefaultFont2_Callback(QsciLexerRuby_DefaultFont2_Callback cb) { qscilexerruby_defaultfont2_callback = cb; }
    inline void setQsciLexerRuby_DefaultPaper2_Callback(QsciLexerRuby_DefaultPaper2_Callback cb) { qscilexerruby_defaultpaper2_callback = cb; }
    inline void setQsciLexerRuby_SetEditor_Callback(QsciLexerRuby_SetEditor_Callback cb) { qscilexerruby_seteditor_callback = cb; }
    inline void setQsciLexerRuby_RefreshProperties_Callback(QsciLexerRuby_RefreshProperties_Callback cb) { qscilexerruby_refreshproperties_callback = cb; }
    inline void setQsciLexerRuby_StyleBitsNeeded_Callback(QsciLexerRuby_StyleBitsNeeded_Callback cb) { qscilexerruby_stylebitsneeded_callback = cb; }
    inline void setQsciLexerRuby_WordCharacters_Callback(QsciLexerRuby_WordCharacters_Callback cb) { qscilexerruby_wordcharacters_callback = cb; }
    inline void setQsciLexerRuby_SetAutoIndentStyle_Callback(QsciLexerRuby_SetAutoIndentStyle_Callback cb) { qscilexerruby_setautoindentstyle_callback = cb; }
    inline void setQsciLexerRuby_SetColor_Callback(QsciLexerRuby_SetColor_Callback cb) { qscilexerruby_setcolor_callback = cb; }
    inline void setQsciLexerRuby_SetEolFill_Callback(QsciLexerRuby_SetEolFill_Callback cb) { qscilexerruby_seteolfill_callback = cb; }
    inline void setQsciLexerRuby_SetFont_Callback(QsciLexerRuby_SetFont_Callback cb) { qscilexerruby_setfont_callback = cb; }
    inline void setQsciLexerRuby_SetPaper_Callback(QsciLexerRuby_SetPaper_Callback cb) { qscilexerruby_setpaper_callback = cb; }
    inline void setQsciLexerRuby_ReadProperties_Callback(QsciLexerRuby_ReadProperties_Callback cb) { qscilexerruby_readproperties_callback = cb; }
    inline void setQsciLexerRuby_WriteProperties_Callback(QsciLexerRuby_WriteProperties_Callback cb) { qscilexerruby_writeproperties_callback = cb; }
    inline void setQsciLexerRuby_Event_Callback(QsciLexerRuby_Event_Callback cb) { qscilexerruby_event_callback = cb; }
    inline void setQsciLexerRuby_EventFilter_Callback(QsciLexerRuby_EventFilter_Callback cb) { qscilexerruby_eventfilter_callback = cb; }
    inline void setQsciLexerRuby_TimerEvent_Callback(QsciLexerRuby_TimerEvent_Callback cb) { qscilexerruby_timerevent_callback = cb; }
    inline void setQsciLexerRuby_ChildEvent_Callback(QsciLexerRuby_ChildEvent_Callback cb) { qscilexerruby_childevent_callback = cb; }
    inline void setQsciLexerRuby_CustomEvent_Callback(QsciLexerRuby_CustomEvent_Callback cb) { qscilexerruby_customevent_callback = cb; }
    inline void setQsciLexerRuby_ConnectNotify_Callback(QsciLexerRuby_ConnectNotify_Callback cb) { qscilexerruby_connectnotify_callback = cb; }
    inline void setQsciLexerRuby_DisconnectNotify_Callback(QsciLexerRuby_DisconnectNotify_Callback cb) { qscilexerruby_disconnectnotify_callback = cb; }
    inline void setQsciLexerRuby_TextAsBytes_Callback(QsciLexerRuby_TextAsBytes_Callback cb) { qscilexerruby_textasbytes_callback = cb; }
    inline void setQsciLexerRuby_BytesAsText_Callback(QsciLexerRuby_BytesAsText_Callback cb) { qscilexerruby_bytesastext_callback = cb; }
    inline void setQsciLexerRuby_Sender_Callback(QsciLexerRuby_Sender_Callback cb) { qscilexerruby_sender_callback = cb; }
    inline void setQsciLexerRuby_SenderSignalIndex_Callback(QsciLexerRuby_SenderSignalIndex_Callback cb) { qscilexerruby_sendersignalindex_callback = cb; }
    inline void setQsciLexerRuby_Receivers_Callback(QsciLexerRuby_Receivers_Callback cb) { qscilexerruby_receivers_callback = cb; }
    inline void setQsciLexerRuby_IsSignalConnected_Callback(QsciLexerRuby_IsSignalConnected_Callback cb) { qscilexerruby_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerRuby_MetaObject_IsBase(bool value) const { qscilexerruby_metaobject_isbase = value; }
    inline void setQsciLexerRuby_Metacast_IsBase(bool value) const { qscilexerruby_metacast_isbase = value; }
    inline void setQsciLexerRuby_Metacall_IsBase(bool value) const { qscilexerruby_metacall_isbase = value; }
    inline void setQsciLexerRuby_Language_IsBase(bool value) const { qscilexerruby_language_isbase = value; }
    inline void setQsciLexerRuby_Lexer_IsBase(bool value) const { qscilexerruby_lexer_isbase = value; }
    inline void setQsciLexerRuby_LexerId_IsBase(bool value) const { qscilexerruby_lexerid_isbase = value; }
    inline void setQsciLexerRuby_AutoCompletionFillups_IsBase(bool value) const { qscilexerruby_autocompletionfillups_isbase = value; }
    inline void setQsciLexerRuby_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerruby_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerRuby_BlockEnd_IsBase(bool value) const { qscilexerruby_blockend_isbase = value; }
    inline void setQsciLexerRuby_BlockLookback_IsBase(bool value) const { qscilexerruby_blocklookback_isbase = value; }
    inline void setQsciLexerRuby_BlockStart_IsBase(bool value) const { qscilexerruby_blockstart_isbase = value; }
    inline void setQsciLexerRuby_BlockStartKeyword_IsBase(bool value) const { qscilexerruby_blockstartkeyword_isbase = value; }
    inline void setQsciLexerRuby_BraceStyle_IsBase(bool value) const { qscilexerruby_bracestyle_isbase = value; }
    inline void setQsciLexerRuby_CaseSensitive_IsBase(bool value) const { qscilexerruby_casesensitive_isbase = value; }
    inline void setQsciLexerRuby_Color_IsBase(bool value) const { qscilexerruby_color_isbase = value; }
    inline void setQsciLexerRuby_EolFill_IsBase(bool value) const { qscilexerruby_eolfill_isbase = value; }
    inline void setQsciLexerRuby_Font_IsBase(bool value) const { qscilexerruby_font_isbase = value; }
    inline void setQsciLexerRuby_IndentationGuideView_IsBase(bool value) const { qscilexerruby_indentationguideview_isbase = value; }
    inline void setQsciLexerRuby_Keywords_IsBase(bool value) const { qscilexerruby_keywords_isbase = value; }
    inline void setQsciLexerRuby_DefaultStyle_IsBase(bool value) const { qscilexerruby_defaultstyle_isbase = value; }
    inline void setQsciLexerRuby_Description_IsBase(bool value) const { qscilexerruby_description_isbase = value; }
    inline void setQsciLexerRuby_Paper_IsBase(bool value) const { qscilexerruby_paper_isbase = value; }
    inline void setQsciLexerRuby_DefaultColor2_IsBase(bool value) const { qscilexerruby_defaultcolor2_isbase = value; }
    inline void setQsciLexerRuby_DefaultEolFill_IsBase(bool value) const { qscilexerruby_defaulteolfill_isbase = value; }
    inline void setQsciLexerRuby_DefaultFont2_IsBase(bool value) const { qscilexerruby_defaultfont2_isbase = value; }
    inline void setQsciLexerRuby_DefaultPaper2_IsBase(bool value) const { qscilexerruby_defaultpaper2_isbase = value; }
    inline void setQsciLexerRuby_SetEditor_IsBase(bool value) const { qscilexerruby_seteditor_isbase = value; }
    inline void setQsciLexerRuby_RefreshProperties_IsBase(bool value) const { qscilexerruby_refreshproperties_isbase = value; }
    inline void setQsciLexerRuby_StyleBitsNeeded_IsBase(bool value) const { qscilexerruby_stylebitsneeded_isbase = value; }
    inline void setQsciLexerRuby_WordCharacters_IsBase(bool value) const { qscilexerruby_wordcharacters_isbase = value; }
    inline void setQsciLexerRuby_SetAutoIndentStyle_IsBase(bool value) const { qscilexerruby_setautoindentstyle_isbase = value; }
    inline void setQsciLexerRuby_SetColor_IsBase(bool value) const { qscilexerruby_setcolor_isbase = value; }
    inline void setQsciLexerRuby_SetEolFill_IsBase(bool value) const { qscilexerruby_seteolfill_isbase = value; }
    inline void setQsciLexerRuby_SetFont_IsBase(bool value) const { qscilexerruby_setfont_isbase = value; }
    inline void setQsciLexerRuby_SetPaper_IsBase(bool value) const { qscilexerruby_setpaper_isbase = value; }
    inline void setQsciLexerRuby_ReadProperties_IsBase(bool value) const { qscilexerruby_readproperties_isbase = value; }
    inline void setQsciLexerRuby_WriteProperties_IsBase(bool value) const { qscilexerruby_writeproperties_isbase = value; }
    inline void setQsciLexerRuby_Event_IsBase(bool value) const { qscilexerruby_event_isbase = value; }
    inline void setQsciLexerRuby_EventFilter_IsBase(bool value) const { qscilexerruby_eventfilter_isbase = value; }
    inline void setQsciLexerRuby_TimerEvent_IsBase(bool value) const { qscilexerruby_timerevent_isbase = value; }
    inline void setQsciLexerRuby_ChildEvent_IsBase(bool value) const { qscilexerruby_childevent_isbase = value; }
    inline void setQsciLexerRuby_CustomEvent_IsBase(bool value) const { qscilexerruby_customevent_isbase = value; }
    inline void setQsciLexerRuby_ConnectNotify_IsBase(bool value) const { qscilexerruby_connectnotify_isbase = value; }
    inline void setQsciLexerRuby_DisconnectNotify_IsBase(bool value) const { qscilexerruby_disconnectnotify_isbase = value; }
    inline void setQsciLexerRuby_TextAsBytes_IsBase(bool value) const { qscilexerruby_textasbytes_isbase = value; }
    inline void setQsciLexerRuby_BytesAsText_IsBase(bool value) const { qscilexerruby_bytesastext_isbase = value; }
    inline void setQsciLexerRuby_Sender_IsBase(bool value) const { qscilexerruby_sender_isbase = value; }
    inline void setQsciLexerRuby_SenderSignalIndex_IsBase(bool value) const { qscilexerruby_sendersignalindex_isbase = value; }
    inline void setQsciLexerRuby_Receivers_IsBase(bool value) const { qscilexerruby_receivers_isbase = value; }
    inline void setQsciLexerRuby_IsSignalConnected_IsBase(bool value) const { qscilexerruby_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerruby_metaobject_isbase) {
            qscilexerruby_metaobject_isbase = false;
            return QsciLexerRuby::metaObject();
        }
        auto metaobject_cb = qscilexerruby_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerRuby::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerruby_metacast_isbase) {
            qscilexerruby_metacast_isbase = false;
            return QsciLexerRuby::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerruby_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerruby_metacall_isbase) {
            qscilexerruby_metacall_isbase = false;
            return QsciLexerRuby::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerruby_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerruby_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerruby_lexer_isbase) {
            qscilexerruby_lexer_isbase = false;
            return QsciLexerRuby::lexer();
        }
        auto lexer_cb = qscilexerruby_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerRuby::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerruby_lexerid_isbase) {
            qscilexerruby_lexerid_isbase = false;
            return QsciLexerRuby::lexerId();
        }
        auto lexerid_cb = qscilexerruby_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerruby_autocompletionfillups_isbase) {
            qscilexerruby_autocompletionfillups_isbase = false;
            return QsciLexerRuby::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerruby_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerRuby::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerruby_autocompletionwordseparators_isbase) {
            qscilexerruby_autocompletionwordseparators_isbase = false;
            return QsciLexerRuby::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerruby_autocompletionwordseparators_callback;
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
        return QsciLexerRuby::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerruby_blockend_isbase) {
            qscilexerruby_blockend_isbase = false;
            return QsciLexerRuby::blockEnd(style);
        }
        auto blockend_cb = qscilexerruby_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerruby_blocklookback_isbase) {
            qscilexerruby_blocklookback_isbase = false;
            return QsciLexerRuby::blockLookback();
        }
        auto blocklookback_cb = qscilexerruby_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerruby_blockstart_isbase) {
            qscilexerruby_blockstart_isbase = false;
            return QsciLexerRuby::blockStart(style);
        }
        auto blockstart_cb = qscilexerruby_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerruby_blockstartkeyword_isbase) {
            qscilexerruby_blockstartkeyword_isbase = false;
            return QsciLexerRuby::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerruby_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerruby_bracestyle_isbase) {
            qscilexerruby_bracestyle_isbase = false;
            return QsciLexerRuby::braceStyle();
        }
        auto bracestyle_cb = qscilexerruby_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerruby_casesensitive_isbase) {
            qscilexerruby_casesensitive_isbase = false;
            return QsciLexerRuby::caseSensitive();
        }
        auto casesensitive_cb = qscilexerruby_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerRuby::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerruby_color_isbase) {
            qscilexerruby_color_isbase = false;
            return QsciLexerRuby::color(style);
        }
        auto color_cb = qscilexerruby_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerruby_eolfill_isbase) {
            qscilexerruby_eolfill_isbase = false;
            return QsciLexerRuby::eolFill(style);
        }
        auto eolfill_cb = qscilexerruby_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerruby_font_isbase) {
            qscilexerruby_font_isbase = false;
            return QsciLexerRuby::font(style);
        }
        auto font_cb = qscilexerruby_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerruby_indentationguideview_isbase) {
            qscilexerruby_indentationguideview_isbase = false;
            return QsciLexerRuby::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerruby_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerruby_keywords_isbase) {
            qscilexerruby_keywords_isbase = false;
            return QsciLexerRuby::keywords(set);
        }
        auto keywords_cb = qscilexerruby_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerruby_defaultstyle_isbase) {
            qscilexerruby_defaultstyle_isbase = false;
            return QsciLexerRuby::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerruby_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerruby_description_callback;
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
        if (qscilexerruby_paper_isbase) {
            qscilexerruby_paper_isbase = false;
            return QsciLexerRuby::paper(style);
        }
        auto paper_cb = qscilexerruby_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerruby_defaultcolor2_isbase) {
            qscilexerruby_defaultcolor2_isbase = false;
            return QsciLexerRuby::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerruby_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerruby_defaulteolfill_isbase) {
            qscilexerruby_defaulteolfill_isbase = false;
            return QsciLexerRuby::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerruby_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerruby_defaultfont2_isbase) {
            qscilexerruby_defaultfont2_isbase = false;
            return QsciLexerRuby::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerruby_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerruby_defaultpaper2_isbase) {
            qscilexerruby_defaultpaper2_isbase = false;
            return QsciLexerRuby::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerruby_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerRuby::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerruby_seteditor_isbase) {
            qscilexerruby_seteditor_isbase = false;
            QsciLexerRuby::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerruby_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerruby_refreshproperties_isbase) {
            qscilexerruby_refreshproperties_isbase = false;
            QsciLexerRuby::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerruby_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerRuby::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerruby_stylebitsneeded_isbase) {
            qscilexerruby_stylebitsneeded_isbase = false;
            return QsciLexerRuby::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerruby_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerruby_wordcharacters_isbase) {
            qscilexerruby_wordcharacters_isbase = false;
            return QsciLexerRuby::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerruby_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerRuby::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerruby_setautoindentstyle_isbase) {
            qscilexerruby_setautoindentstyle_isbase = false;
            QsciLexerRuby::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerruby_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerruby_setcolor_isbase) {
            qscilexerruby_setcolor_isbase = false;
            QsciLexerRuby::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerruby_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerruby_seteolfill_isbase) {
            qscilexerruby_seteolfill_isbase = false;
            QsciLexerRuby::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerruby_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerruby_setfont_isbase) {
            qscilexerruby_setfont_isbase = false;
            QsciLexerRuby::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerruby_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerruby_setpaper_isbase) {
            qscilexerruby_setpaper_isbase = false;
            QsciLexerRuby::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerruby_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerruby_readproperties_isbase) {
            qscilexerruby_readproperties_isbase = false;
            return QsciLexerRuby::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerruby_readproperties_callback;
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
        return QsciLexerRuby::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerruby_writeproperties_isbase) {
            qscilexerruby_writeproperties_isbase = false;
            return QsciLexerRuby::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerruby_writeproperties_callback;
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
        return QsciLexerRuby::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerruby_event_isbase) {
            qscilexerruby_event_isbase = false;
            return QsciLexerRuby::event(event);
        }
        auto event_cb = qscilexerruby_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerruby_eventfilter_isbase) {
            qscilexerruby_eventfilter_isbase = false;
            return QsciLexerRuby::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerruby_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerRuby::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerruby_timerevent_isbase) {
            qscilexerruby_timerevent_isbase = false;
            QsciLexerRuby::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerruby_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerruby_childevent_isbase) {
            qscilexerruby_childevent_isbase = false;
            QsciLexerRuby::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerruby_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerruby_customevent_isbase) {
            qscilexerruby_customevent_isbase = false;
            QsciLexerRuby::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerruby_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_connectnotify_isbase) {
            qscilexerruby_connectnotify_isbase = false;
            QsciLexerRuby::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerruby_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_disconnectnotify_isbase) {
            qscilexerruby_disconnectnotify_isbase = false;
            QsciLexerRuby::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerruby_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerRuby::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerruby_textasbytes_isbase) {
            qscilexerruby_textasbytes_isbase = false;
            return QsciLexerRuby::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerruby_textasbytes_callback;
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
        return QsciLexerRuby::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerruby_bytesastext_isbase) {
            qscilexerruby_bytesastext_isbase = false;
            return QsciLexerRuby::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerruby_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerRuby::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerruby_sender_isbase) {
            qscilexerruby_sender_isbase = false;
            return QsciLexerRuby::sender();
        }
        auto sender_cb = qscilexerruby_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerRuby::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerruby_sendersignalindex_isbase) {
            qscilexerruby_sendersignalindex_isbase = false;
            return QsciLexerRuby::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerruby_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerruby_receivers_isbase) {
            qscilexerruby_receivers_isbase = false;
            return QsciLexerRuby::receivers(signal);
        }
        auto receivers_cb = qscilexerruby_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerruby_issignalconnected_isbase) {
            qscilexerruby_issignalconnected_isbase = false;
            return QsciLexerRuby::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerruby_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerRuby_ReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerRuby_SuperReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerRuby_WriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerRuby_SuperWriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerRuby_TimerEvent(QsciLexerRuby* self, QTimerEvent* event);
    friend void QsciLexerRuby_SuperTimerEvent(QsciLexerRuby* self, QTimerEvent* event);
    friend void QsciLexerRuby_ChildEvent(QsciLexerRuby* self, QChildEvent* event);
    friend void QsciLexerRuby_SuperChildEvent(QsciLexerRuby* self, QChildEvent* event);
    friend void QsciLexerRuby_CustomEvent(QsciLexerRuby* self, QEvent* event);
    friend void QsciLexerRuby_SuperCustomEvent(QsciLexerRuby* self, QEvent* event);
    friend void QsciLexerRuby_ConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
    friend void QsciLexerRuby_SuperConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
    friend void QsciLexerRuby_DisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
    friend void QsciLexerRuby_SuperDisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerRuby_TextAsBytes(const QsciLexerRuby* self, const libqt_string text);
    friend libqt_string QsciLexerRuby_SuperTextAsBytes(const QsciLexerRuby* self, const libqt_string text);
    friend libqt_string QsciLexerRuby_BytesAsText(const QsciLexerRuby* self, const char* bytes, int size);
    friend libqt_string QsciLexerRuby_SuperBytesAsText(const QsciLexerRuby* self, const char* bytes, int size);
    friend QObject* QsciLexerRuby_Sender(const QsciLexerRuby* self);
    friend QObject* QsciLexerRuby_SuperSender(const QsciLexerRuby* self);
    friend int QsciLexerRuby_SenderSignalIndex(const QsciLexerRuby* self);
    friend int QsciLexerRuby_SuperSenderSignalIndex(const QsciLexerRuby* self);
    friend int QsciLexerRuby_Receivers(const QsciLexerRuby* self, const char* signal);
    friend int QsciLexerRuby_SuperReceivers(const QsciLexerRuby* self, const char* signal);
    friend bool QsciLexerRuby_IsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal);
    friend bool QsciLexerRuby_SuperIsSignalConnected(const QsciLexerRuby* self, const QMetaMethod* signal);
};

#endif
