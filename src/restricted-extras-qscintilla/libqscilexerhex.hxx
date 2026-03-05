#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerHex so that we can call protected methods
class VirtualQsciLexerHex : public QsciLexerHex {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerHex = true;

    // Virtual class public types (including callbacks)
    using QsciLexerHex_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerHex_Metacast_Callback = void* (*)(QsciLexerHex*, const char*);
    using QsciLexerHex_Metacall_Callback = int (*)(QsciLexerHex*, int, int, void**);
    using QsciLexerHex_Language_Callback = const char* (*)();
    using QsciLexerHex_Lexer_Callback = const char* (*)();
    using QsciLexerHex_LexerId_Callback = int (*)();
    using QsciLexerHex_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerHex_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerHex_BlockEnd_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockLookback_Callback = int (*)();
    using QsciLexerHex_BlockStart_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BraceStyle_Callback = int (*)();
    using QsciLexerHex_CaseSensitive_Callback = bool (*)();
    using QsciLexerHex_Color_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_EolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Font_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_IndentationGuideView_Callback = int (*)();
    using QsciLexerHex_Keywords_Callback = const char* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultStyle_Callback = int (*)();
    using QsciLexerHex_Description_Callback = const char* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Paper_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultEolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_SetEditor_Callback = void (*)(QsciLexerHex*, QsciScintilla*);
    using QsciLexerHex_RefreshProperties_Callback = void (*)();
    using QsciLexerHex_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerHex_WordCharacters_Callback = const char* (*)();
    using QsciLexerHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerHex*, int);
    using QsciLexerHex_SetColor_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_SetEolFill_Callback = void (*)(QsciLexerHex*, bool, int);
    using QsciLexerHex_SetFont_Callback = void (*)(QsciLexerHex*, QFont*, int);
    using QsciLexerHex_SetPaper_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_ReadProperties_Callback = bool (*)(QsciLexerHex*, QSettings*, const char*);
    using QsciLexerHex_WriteProperties_Callback = bool (*)(const QsciLexerHex*, QSettings*, const char*);
    using QsciLexerHex_Event_Callback = bool (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_EventFilter_Callback = bool (*)(QsciLexerHex*, QObject*, QEvent*);
    using QsciLexerHex_TimerEvent_Callback = void (*)(QsciLexerHex*, QTimerEvent*);
    using QsciLexerHex_ChildEvent_Callback = void (*)(QsciLexerHex*, QChildEvent*);
    using QsciLexerHex_CustomEvent_Callback = void (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_ConnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex_DisconnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex_TextAsBytes_Callback = libqt_string (*)(const QsciLexerHex*, const char*);
    using QsciLexerHex_BytesAsText_Callback = const char* (*)(const QsciLexerHex*, const char*, int);
    using QsciLexerHex_Sender_Callback = QObject* (*)();
    using QsciLexerHex_SenderSignalIndex_Callback = int (*)();
    using QsciLexerHex_Receivers_Callback = int (*)(const QsciLexerHex*, const char*);
    using QsciLexerHex_IsSignalConnected_Callback = bool (*)(const QsciLexerHex*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerHex_MetaObject_Callback qscilexerhex_metaobject_callback = nullptr;
    QsciLexerHex_Metacast_Callback qscilexerhex_metacast_callback = nullptr;
    QsciLexerHex_Metacall_Callback qscilexerhex_metacall_callback = nullptr;
    QsciLexerHex_Language_Callback qscilexerhex_language_callback = nullptr;
    QsciLexerHex_Lexer_Callback qscilexerhex_lexer_callback = nullptr;
    QsciLexerHex_LexerId_Callback qscilexerhex_lexerid_callback = nullptr;
    QsciLexerHex_AutoCompletionFillups_Callback qscilexerhex_autocompletionfillups_callback = nullptr;
    QsciLexerHex_AutoCompletionWordSeparators_Callback qscilexerhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerHex_BlockEnd_Callback qscilexerhex_blockend_callback = nullptr;
    QsciLexerHex_BlockLookback_Callback qscilexerhex_blocklookback_callback = nullptr;
    QsciLexerHex_BlockStart_Callback qscilexerhex_blockstart_callback = nullptr;
    QsciLexerHex_BlockStartKeyword_Callback qscilexerhex_blockstartkeyword_callback = nullptr;
    QsciLexerHex_BraceStyle_Callback qscilexerhex_bracestyle_callback = nullptr;
    QsciLexerHex_CaseSensitive_Callback qscilexerhex_casesensitive_callback = nullptr;
    QsciLexerHex_Color_Callback qscilexerhex_color_callback = nullptr;
    QsciLexerHex_EolFill_Callback qscilexerhex_eolfill_callback = nullptr;
    QsciLexerHex_Font_Callback qscilexerhex_font_callback = nullptr;
    QsciLexerHex_IndentationGuideView_Callback qscilexerhex_indentationguideview_callback = nullptr;
    QsciLexerHex_Keywords_Callback qscilexerhex_keywords_callback = nullptr;
    QsciLexerHex_DefaultStyle_Callback qscilexerhex_defaultstyle_callback = nullptr;
    QsciLexerHex_Description_Callback qscilexerhex_description_callback = nullptr;
    QsciLexerHex_Paper_Callback qscilexerhex_paper_callback = nullptr;
    QsciLexerHex_DefaultColor2_Callback qscilexerhex_defaultcolor2_callback = nullptr;
    QsciLexerHex_DefaultEolFill_Callback qscilexerhex_defaulteolfill_callback = nullptr;
    QsciLexerHex_DefaultFont2_Callback qscilexerhex_defaultfont2_callback = nullptr;
    QsciLexerHex_DefaultPaper2_Callback qscilexerhex_defaultpaper2_callback = nullptr;
    QsciLexerHex_SetEditor_Callback qscilexerhex_seteditor_callback = nullptr;
    QsciLexerHex_RefreshProperties_Callback qscilexerhex_refreshproperties_callback = nullptr;
    QsciLexerHex_StyleBitsNeeded_Callback qscilexerhex_stylebitsneeded_callback = nullptr;
    QsciLexerHex_WordCharacters_Callback qscilexerhex_wordcharacters_callback = nullptr;
    QsciLexerHex_SetAutoIndentStyle_Callback qscilexerhex_setautoindentstyle_callback = nullptr;
    QsciLexerHex_SetColor_Callback qscilexerhex_setcolor_callback = nullptr;
    QsciLexerHex_SetEolFill_Callback qscilexerhex_seteolfill_callback = nullptr;
    QsciLexerHex_SetFont_Callback qscilexerhex_setfont_callback = nullptr;
    QsciLexerHex_SetPaper_Callback qscilexerhex_setpaper_callback = nullptr;
    QsciLexerHex_ReadProperties_Callback qscilexerhex_readproperties_callback = nullptr;
    QsciLexerHex_WriteProperties_Callback qscilexerhex_writeproperties_callback = nullptr;
    QsciLexerHex_Event_Callback qscilexerhex_event_callback = nullptr;
    QsciLexerHex_EventFilter_Callback qscilexerhex_eventfilter_callback = nullptr;
    QsciLexerHex_TimerEvent_Callback qscilexerhex_timerevent_callback = nullptr;
    QsciLexerHex_ChildEvent_Callback qscilexerhex_childevent_callback = nullptr;
    QsciLexerHex_CustomEvent_Callback qscilexerhex_customevent_callback = nullptr;
    QsciLexerHex_ConnectNotify_Callback qscilexerhex_connectnotify_callback = nullptr;
    QsciLexerHex_DisconnectNotify_Callback qscilexerhex_disconnectnotify_callback = nullptr;
    QsciLexerHex_TextAsBytes_Callback qscilexerhex_textasbytes_callback = nullptr;
    QsciLexerHex_BytesAsText_Callback qscilexerhex_bytesastext_callback = nullptr;
    QsciLexerHex_Sender_Callback qscilexerhex_sender_callback = nullptr;
    QsciLexerHex_SenderSignalIndex_Callback qscilexerhex_sendersignalindex_callback = nullptr;
    QsciLexerHex_Receivers_Callback qscilexerhex_receivers_callback = nullptr;
    QsciLexerHex_IsSignalConnected_Callback qscilexerhex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerhex_metaobject_isbase = false;
    mutable bool qscilexerhex_metacast_isbase = false;
    mutable bool qscilexerhex_metacall_isbase = false;
    mutable bool qscilexerhex_language_isbase = false;
    mutable bool qscilexerhex_lexer_isbase = false;
    mutable bool qscilexerhex_lexerid_isbase = false;
    mutable bool qscilexerhex_autocompletionfillups_isbase = false;
    mutable bool qscilexerhex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerhex_blockend_isbase = false;
    mutable bool qscilexerhex_blocklookback_isbase = false;
    mutable bool qscilexerhex_blockstart_isbase = false;
    mutable bool qscilexerhex_blockstartkeyword_isbase = false;
    mutable bool qscilexerhex_bracestyle_isbase = false;
    mutable bool qscilexerhex_casesensitive_isbase = false;
    mutable bool qscilexerhex_color_isbase = false;
    mutable bool qscilexerhex_eolfill_isbase = false;
    mutable bool qscilexerhex_font_isbase = false;
    mutable bool qscilexerhex_indentationguideview_isbase = false;
    mutable bool qscilexerhex_keywords_isbase = false;
    mutable bool qscilexerhex_defaultstyle_isbase = false;
    mutable bool qscilexerhex_description_isbase = false;
    mutable bool qscilexerhex_paper_isbase = false;
    mutable bool qscilexerhex_defaultcolor2_isbase = false;
    mutable bool qscilexerhex_defaulteolfill_isbase = false;
    mutable bool qscilexerhex_defaultfont2_isbase = false;
    mutable bool qscilexerhex_defaultpaper2_isbase = false;
    mutable bool qscilexerhex_seteditor_isbase = false;
    mutable bool qscilexerhex_refreshproperties_isbase = false;
    mutable bool qscilexerhex_stylebitsneeded_isbase = false;
    mutable bool qscilexerhex_wordcharacters_isbase = false;
    mutable bool qscilexerhex_setautoindentstyle_isbase = false;
    mutable bool qscilexerhex_setcolor_isbase = false;
    mutable bool qscilexerhex_seteolfill_isbase = false;
    mutable bool qscilexerhex_setfont_isbase = false;
    mutable bool qscilexerhex_setpaper_isbase = false;
    mutable bool qscilexerhex_readproperties_isbase = false;
    mutable bool qscilexerhex_writeproperties_isbase = false;
    mutable bool qscilexerhex_event_isbase = false;
    mutable bool qscilexerhex_eventfilter_isbase = false;
    mutable bool qscilexerhex_timerevent_isbase = false;
    mutable bool qscilexerhex_childevent_isbase = false;
    mutable bool qscilexerhex_customevent_isbase = false;
    mutable bool qscilexerhex_connectnotify_isbase = false;
    mutable bool qscilexerhex_disconnectnotify_isbase = false;
    mutable bool qscilexerhex_textasbytes_isbase = false;
    mutable bool qscilexerhex_bytesastext_isbase = false;
    mutable bool qscilexerhex_sender_isbase = false;
    mutable bool qscilexerhex_sendersignalindex_isbase = false;
    mutable bool qscilexerhex_receivers_isbase = false;
    mutable bool qscilexerhex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerHex() : QsciLexerHex() {};
    VirtualQsciLexerHex(QObject* parent) : QsciLexerHex(parent) {};

    // Callback setters
    inline void setQsciLexerHex_MetaObject_Callback(QsciLexerHex_MetaObject_Callback cb) { qscilexerhex_metaobject_callback = cb; }
    inline void setQsciLexerHex_Metacast_Callback(QsciLexerHex_Metacast_Callback cb) { qscilexerhex_metacast_callback = cb; }
    inline void setQsciLexerHex_Metacall_Callback(QsciLexerHex_Metacall_Callback cb) { qscilexerhex_metacall_callback = cb; }
    inline void setQsciLexerHex_Language_Callback(QsciLexerHex_Language_Callback cb) { qscilexerhex_language_callback = cb; }
    inline void setQsciLexerHex_Lexer_Callback(QsciLexerHex_Lexer_Callback cb) { qscilexerhex_lexer_callback = cb; }
    inline void setQsciLexerHex_LexerId_Callback(QsciLexerHex_LexerId_Callback cb) { qscilexerhex_lexerid_callback = cb; }
    inline void setQsciLexerHex_AutoCompletionFillups_Callback(QsciLexerHex_AutoCompletionFillups_Callback cb) { qscilexerhex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerHex_AutoCompletionWordSeparators_Callback(QsciLexerHex_AutoCompletionWordSeparators_Callback cb) { qscilexerhex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerHex_BlockEnd_Callback(QsciLexerHex_BlockEnd_Callback cb) { qscilexerhex_blockend_callback = cb; }
    inline void setQsciLexerHex_BlockLookback_Callback(QsciLexerHex_BlockLookback_Callback cb) { qscilexerhex_blocklookback_callback = cb; }
    inline void setQsciLexerHex_BlockStart_Callback(QsciLexerHex_BlockStart_Callback cb) { qscilexerhex_blockstart_callback = cb; }
    inline void setQsciLexerHex_BlockStartKeyword_Callback(QsciLexerHex_BlockStartKeyword_Callback cb) { qscilexerhex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerHex_BraceStyle_Callback(QsciLexerHex_BraceStyle_Callback cb) { qscilexerhex_bracestyle_callback = cb; }
    inline void setQsciLexerHex_CaseSensitive_Callback(QsciLexerHex_CaseSensitive_Callback cb) { qscilexerhex_casesensitive_callback = cb; }
    inline void setQsciLexerHex_Color_Callback(QsciLexerHex_Color_Callback cb) { qscilexerhex_color_callback = cb; }
    inline void setQsciLexerHex_EolFill_Callback(QsciLexerHex_EolFill_Callback cb) { qscilexerhex_eolfill_callback = cb; }
    inline void setQsciLexerHex_Font_Callback(QsciLexerHex_Font_Callback cb) { qscilexerhex_font_callback = cb; }
    inline void setQsciLexerHex_IndentationGuideView_Callback(QsciLexerHex_IndentationGuideView_Callback cb) { qscilexerhex_indentationguideview_callback = cb; }
    inline void setQsciLexerHex_Keywords_Callback(QsciLexerHex_Keywords_Callback cb) { qscilexerhex_keywords_callback = cb; }
    inline void setQsciLexerHex_DefaultStyle_Callback(QsciLexerHex_DefaultStyle_Callback cb) { qscilexerhex_defaultstyle_callback = cb; }
    inline void setQsciLexerHex_Description_Callback(QsciLexerHex_Description_Callback cb) { qscilexerhex_description_callback = cb; }
    inline void setQsciLexerHex_Paper_Callback(QsciLexerHex_Paper_Callback cb) { qscilexerhex_paper_callback = cb; }
    inline void setQsciLexerHex_DefaultColor2_Callback(QsciLexerHex_DefaultColor2_Callback cb) { qscilexerhex_defaultcolor2_callback = cb; }
    inline void setQsciLexerHex_DefaultEolFill_Callback(QsciLexerHex_DefaultEolFill_Callback cb) { qscilexerhex_defaulteolfill_callback = cb; }
    inline void setQsciLexerHex_DefaultFont2_Callback(QsciLexerHex_DefaultFont2_Callback cb) { qscilexerhex_defaultfont2_callback = cb; }
    inline void setQsciLexerHex_DefaultPaper2_Callback(QsciLexerHex_DefaultPaper2_Callback cb) { qscilexerhex_defaultpaper2_callback = cb; }
    inline void setQsciLexerHex_SetEditor_Callback(QsciLexerHex_SetEditor_Callback cb) { qscilexerhex_seteditor_callback = cb; }
    inline void setQsciLexerHex_RefreshProperties_Callback(QsciLexerHex_RefreshProperties_Callback cb) { qscilexerhex_refreshproperties_callback = cb; }
    inline void setQsciLexerHex_StyleBitsNeeded_Callback(QsciLexerHex_StyleBitsNeeded_Callback cb) { qscilexerhex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerHex_WordCharacters_Callback(QsciLexerHex_WordCharacters_Callback cb) { qscilexerhex_wordcharacters_callback = cb; }
    inline void setQsciLexerHex_SetAutoIndentStyle_Callback(QsciLexerHex_SetAutoIndentStyle_Callback cb) { qscilexerhex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerHex_SetColor_Callback(QsciLexerHex_SetColor_Callback cb) { qscilexerhex_setcolor_callback = cb; }
    inline void setQsciLexerHex_SetEolFill_Callback(QsciLexerHex_SetEolFill_Callback cb) { qscilexerhex_seteolfill_callback = cb; }
    inline void setQsciLexerHex_SetFont_Callback(QsciLexerHex_SetFont_Callback cb) { qscilexerhex_setfont_callback = cb; }
    inline void setQsciLexerHex_SetPaper_Callback(QsciLexerHex_SetPaper_Callback cb) { qscilexerhex_setpaper_callback = cb; }
    inline void setQsciLexerHex_ReadProperties_Callback(QsciLexerHex_ReadProperties_Callback cb) { qscilexerhex_readproperties_callback = cb; }
    inline void setQsciLexerHex_WriteProperties_Callback(QsciLexerHex_WriteProperties_Callback cb) { qscilexerhex_writeproperties_callback = cb; }
    inline void setQsciLexerHex_Event_Callback(QsciLexerHex_Event_Callback cb) { qscilexerhex_event_callback = cb; }
    inline void setQsciLexerHex_EventFilter_Callback(QsciLexerHex_EventFilter_Callback cb) { qscilexerhex_eventfilter_callback = cb; }
    inline void setQsciLexerHex_TimerEvent_Callback(QsciLexerHex_TimerEvent_Callback cb) { qscilexerhex_timerevent_callback = cb; }
    inline void setQsciLexerHex_ChildEvent_Callback(QsciLexerHex_ChildEvent_Callback cb) { qscilexerhex_childevent_callback = cb; }
    inline void setQsciLexerHex_CustomEvent_Callback(QsciLexerHex_CustomEvent_Callback cb) { qscilexerhex_customevent_callback = cb; }
    inline void setQsciLexerHex_ConnectNotify_Callback(QsciLexerHex_ConnectNotify_Callback cb) { qscilexerhex_connectnotify_callback = cb; }
    inline void setQsciLexerHex_DisconnectNotify_Callback(QsciLexerHex_DisconnectNotify_Callback cb) { qscilexerhex_disconnectnotify_callback = cb; }
    inline void setQsciLexerHex_TextAsBytes_Callback(QsciLexerHex_TextAsBytes_Callback cb) { qscilexerhex_textasbytes_callback = cb; }
    inline void setQsciLexerHex_BytesAsText_Callback(QsciLexerHex_BytesAsText_Callback cb) { qscilexerhex_bytesastext_callback = cb; }
    inline void setQsciLexerHex_Sender_Callback(QsciLexerHex_Sender_Callback cb) { qscilexerhex_sender_callback = cb; }
    inline void setQsciLexerHex_SenderSignalIndex_Callback(QsciLexerHex_SenderSignalIndex_Callback cb) { qscilexerhex_sendersignalindex_callback = cb; }
    inline void setQsciLexerHex_Receivers_Callback(QsciLexerHex_Receivers_Callback cb) { qscilexerhex_receivers_callback = cb; }
    inline void setQsciLexerHex_IsSignalConnected_Callback(QsciLexerHex_IsSignalConnected_Callback cb) { qscilexerhex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerHex_MetaObject_IsBase(bool value) const { qscilexerhex_metaobject_isbase = value; }
    inline void setQsciLexerHex_Metacast_IsBase(bool value) const { qscilexerhex_metacast_isbase = value; }
    inline void setQsciLexerHex_Metacall_IsBase(bool value) const { qscilexerhex_metacall_isbase = value; }
    inline void setQsciLexerHex_Language_IsBase(bool value) const { qscilexerhex_language_isbase = value; }
    inline void setQsciLexerHex_Lexer_IsBase(bool value) const { qscilexerhex_lexer_isbase = value; }
    inline void setQsciLexerHex_LexerId_IsBase(bool value) const { qscilexerhex_lexerid_isbase = value; }
    inline void setQsciLexerHex_AutoCompletionFillups_IsBase(bool value) const { qscilexerhex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerHex_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerhex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerHex_BlockEnd_IsBase(bool value) const { qscilexerhex_blockend_isbase = value; }
    inline void setQsciLexerHex_BlockLookback_IsBase(bool value) const { qscilexerhex_blocklookback_isbase = value; }
    inline void setQsciLexerHex_BlockStart_IsBase(bool value) const { qscilexerhex_blockstart_isbase = value; }
    inline void setQsciLexerHex_BlockStartKeyword_IsBase(bool value) const { qscilexerhex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerHex_BraceStyle_IsBase(bool value) const { qscilexerhex_bracestyle_isbase = value; }
    inline void setQsciLexerHex_CaseSensitive_IsBase(bool value) const { qscilexerhex_casesensitive_isbase = value; }
    inline void setQsciLexerHex_Color_IsBase(bool value) const { qscilexerhex_color_isbase = value; }
    inline void setQsciLexerHex_EolFill_IsBase(bool value) const { qscilexerhex_eolfill_isbase = value; }
    inline void setQsciLexerHex_Font_IsBase(bool value) const { qscilexerhex_font_isbase = value; }
    inline void setQsciLexerHex_IndentationGuideView_IsBase(bool value) const { qscilexerhex_indentationguideview_isbase = value; }
    inline void setQsciLexerHex_Keywords_IsBase(bool value) const { qscilexerhex_keywords_isbase = value; }
    inline void setQsciLexerHex_DefaultStyle_IsBase(bool value) const { qscilexerhex_defaultstyle_isbase = value; }
    inline void setQsciLexerHex_Description_IsBase(bool value) const { qscilexerhex_description_isbase = value; }
    inline void setQsciLexerHex_Paper_IsBase(bool value) const { qscilexerhex_paper_isbase = value; }
    inline void setQsciLexerHex_DefaultColor2_IsBase(bool value) const { qscilexerhex_defaultcolor2_isbase = value; }
    inline void setQsciLexerHex_DefaultEolFill_IsBase(bool value) const { qscilexerhex_defaulteolfill_isbase = value; }
    inline void setQsciLexerHex_DefaultFont2_IsBase(bool value) const { qscilexerhex_defaultfont2_isbase = value; }
    inline void setQsciLexerHex_DefaultPaper2_IsBase(bool value) const { qscilexerhex_defaultpaper2_isbase = value; }
    inline void setQsciLexerHex_SetEditor_IsBase(bool value) const { qscilexerhex_seteditor_isbase = value; }
    inline void setQsciLexerHex_RefreshProperties_IsBase(bool value) const { qscilexerhex_refreshproperties_isbase = value; }
    inline void setQsciLexerHex_StyleBitsNeeded_IsBase(bool value) const { qscilexerhex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerHex_WordCharacters_IsBase(bool value) const { qscilexerhex_wordcharacters_isbase = value; }
    inline void setQsciLexerHex_SetAutoIndentStyle_IsBase(bool value) const { qscilexerhex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerHex_SetColor_IsBase(bool value) const { qscilexerhex_setcolor_isbase = value; }
    inline void setQsciLexerHex_SetEolFill_IsBase(bool value) const { qscilexerhex_seteolfill_isbase = value; }
    inline void setQsciLexerHex_SetFont_IsBase(bool value) const { qscilexerhex_setfont_isbase = value; }
    inline void setQsciLexerHex_SetPaper_IsBase(bool value) const { qscilexerhex_setpaper_isbase = value; }
    inline void setQsciLexerHex_ReadProperties_IsBase(bool value) const { qscilexerhex_readproperties_isbase = value; }
    inline void setQsciLexerHex_WriteProperties_IsBase(bool value) const { qscilexerhex_writeproperties_isbase = value; }
    inline void setQsciLexerHex_Event_IsBase(bool value) const { qscilexerhex_event_isbase = value; }
    inline void setQsciLexerHex_EventFilter_IsBase(bool value) const { qscilexerhex_eventfilter_isbase = value; }
    inline void setQsciLexerHex_TimerEvent_IsBase(bool value) const { qscilexerhex_timerevent_isbase = value; }
    inline void setQsciLexerHex_ChildEvent_IsBase(bool value) const { qscilexerhex_childevent_isbase = value; }
    inline void setQsciLexerHex_CustomEvent_IsBase(bool value) const { qscilexerhex_customevent_isbase = value; }
    inline void setQsciLexerHex_ConnectNotify_IsBase(bool value) const { qscilexerhex_connectnotify_isbase = value; }
    inline void setQsciLexerHex_DisconnectNotify_IsBase(bool value) const { qscilexerhex_disconnectnotify_isbase = value; }
    inline void setQsciLexerHex_TextAsBytes_IsBase(bool value) const { qscilexerhex_textasbytes_isbase = value; }
    inline void setQsciLexerHex_BytesAsText_IsBase(bool value) const { qscilexerhex_bytesastext_isbase = value; }
    inline void setQsciLexerHex_Sender_IsBase(bool value) const { qscilexerhex_sender_isbase = value; }
    inline void setQsciLexerHex_SenderSignalIndex_IsBase(bool value) const { qscilexerhex_sendersignalindex_isbase = value; }
    inline void setQsciLexerHex_Receivers_IsBase(bool value) const { qscilexerhex_receivers_isbase = value; }
    inline void setQsciLexerHex_IsSignalConnected_IsBase(bool value) const { qscilexerhex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerhex_metaobject_isbase) {
            qscilexerhex_metaobject_isbase = false;
            return QsciLexerHex::metaObject();
        }
        auto metaobject_cb = qscilexerhex_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerHex::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerhex_metacast_isbase) {
            qscilexerhex_metacast_isbase = false;
            return QsciLexerHex::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerhex_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerhex_metacall_isbase) {
            qscilexerhex_metacall_isbase = false;
            return QsciLexerHex::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerhex_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerhex_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerhex_lexer_isbase) {
            qscilexerhex_lexer_isbase = false;
            return QsciLexerHex::lexer();
        }
        auto lexer_cb = qscilexerhex_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerHex::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerhex_lexerid_isbase) {
            qscilexerhex_lexerid_isbase = false;
            return QsciLexerHex::lexerId();
        }
        auto lexerid_cb = qscilexerhex_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerhex_autocompletionfillups_isbase) {
            qscilexerhex_autocompletionfillups_isbase = false;
            return QsciLexerHex::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerhex_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerHex::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerhex_autocompletionwordseparators_isbase) {
            qscilexerhex_autocompletionwordseparators_isbase = false;
            return QsciLexerHex::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerhex_autocompletionwordseparators_callback;
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
        return QsciLexerHex::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerhex_blockend_isbase) {
            qscilexerhex_blockend_isbase = false;
            return QsciLexerHex::blockEnd(style);
        }
        auto blockend_cb = qscilexerhex_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerhex_blocklookback_isbase) {
            qscilexerhex_blocklookback_isbase = false;
            return QsciLexerHex::blockLookback();
        }
        auto blocklookback_cb = qscilexerhex_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerhex_blockstart_isbase) {
            qscilexerhex_blockstart_isbase = false;
            return QsciLexerHex::blockStart(style);
        }
        auto blockstart_cb = qscilexerhex_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerhex_blockstartkeyword_isbase) {
            qscilexerhex_blockstartkeyword_isbase = false;
            return QsciLexerHex::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerhex_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerhex_bracestyle_isbase) {
            qscilexerhex_bracestyle_isbase = false;
            return QsciLexerHex::braceStyle();
        }
        auto bracestyle_cb = qscilexerhex_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerhex_casesensitive_isbase) {
            qscilexerhex_casesensitive_isbase = false;
            return QsciLexerHex::caseSensitive();
        }
        auto casesensitive_cb = qscilexerhex_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerHex::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerhex_color_isbase) {
            qscilexerhex_color_isbase = false;
            return QsciLexerHex::color(style);
        }
        auto color_cb = qscilexerhex_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerhex_eolfill_isbase) {
            qscilexerhex_eolfill_isbase = false;
            return QsciLexerHex::eolFill(style);
        }
        auto eolfill_cb = qscilexerhex_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerhex_font_isbase) {
            qscilexerhex_font_isbase = false;
            return QsciLexerHex::font(style);
        }
        auto font_cb = qscilexerhex_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerhex_indentationguideview_isbase) {
            qscilexerhex_indentationguideview_isbase = false;
            return QsciLexerHex::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerhex_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerhex_keywords_isbase) {
            qscilexerhex_keywords_isbase = false;
            return QsciLexerHex::keywords(set);
        }
        auto keywords_cb = qscilexerhex_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerhex_defaultstyle_isbase) {
            qscilexerhex_defaultstyle_isbase = false;
            return QsciLexerHex::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerhex_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerhex_description_callback;
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
        if (qscilexerhex_paper_isbase) {
            qscilexerhex_paper_isbase = false;
            return QsciLexerHex::paper(style);
        }
        auto paper_cb = qscilexerhex_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerhex_defaultcolor2_isbase) {
            qscilexerhex_defaultcolor2_isbase = false;
            return QsciLexerHex::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerhex_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerhex_defaulteolfill_isbase) {
            qscilexerhex_defaulteolfill_isbase = false;
            return QsciLexerHex::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerhex_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerhex_defaultfont2_isbase) {
            qscilexerhex_defaultfont2_isbase = false;
            return QsciLexerHex::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerhex_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerhex_defaultpaper2_isbase) {
            qscilexerhex_defaultpaper2_isbase = false;
            return QsciLexerHex::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerhex_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerHex::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerhex_seteditor_isbase) {
            qscilexerhex_seteditor_isbase = false;
            QsciLexerHex::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerhex_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerHex::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerhex_refreshproperties_isbase) {
            qscilexerhex_refreshproperties_isbase = false;
            QsciLexerHex::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerhex_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerHex::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerhex_stylebitsneeded_isbase) {
            qscilexerhex_stylebitsneeded_isbase = false;
            return QsciLexerHex::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerhex_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerhex_wordcharacters_isbase) {
            qscilexerhex_wordcharacters_isbase = false;
            return QsciLexerHex::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerhex_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerHex::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerhex_setautoindentstyle_isbase) {
            qscilexerhex_setautoindentstyle_isbase = false;
            QsciLexerHex::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerhex_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerHex::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerhex_setcolor_isbase) {
            qscilexerhex_setcolor_isbase = false;
            QsciLexerHex::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerhex_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerhex_seteolfill_isbase) {
            qscilexerhex_seteolfill_isbase = false;
            QsciLexerHex::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerhex_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerhex_setfont_isbase) {
            qscilexerhex_setfont_isbase = false;
            QsciLexerHex::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerhex_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerhex_setpaper_isbase) {
            qscilexerhex_setpaper_isbase = false;
            QsciLexerHex::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerhex_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerhex_readproperties_isbase) {
            qscilexerhex_readproperties_isbase = false;
            return QsciLexerHex::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerhex_readproperties_callback;
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
        return QsciLexerHex::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerhex_writeproperties_isbase) {
            qscilexerhex_writeproperties_isbase = false;
            return QsciLexerHex::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerhex_writeproperties_callback;
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
        return QsciLexerHex::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerhex_event_isbase) {
            qscilexerhex_event_isbase = false;
            return QsciLexerHex::event(event);
        }
        auto event_cb = qscilexerhex_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerhex_eventfilter_isbase) {
            qscilexerhex_eventfilter_isbase = false;
            return QsciLexerHex::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerhex_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerHex::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerhex_timerevent_isbase) {
            qscilexerhex_timerevent_isbase = false;
            QsciLexerHex::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerhex_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerHex::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerhex_childevent_isbase) {
            qscilexerhex_childevent_isbase = false;
            QsciLexerHex::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerhex_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerHex::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerhex_customevent_isbase) {
            qscilexerhex_customevent_isbase = false;
            QsciLexerHex::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerhex_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerHex::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_connectnotify_isbase) {
            qscilexerhex_connectnotify_isbase = false;
            QsciLexerHex::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerhex_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerHex::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_disconnectnotify_isbase) {
            qscilexerhex_disconnectnotify_isbase = false;
            QsciLexerHex::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerhex_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerHex::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerhex_textasbytes_isbase) {
            qscilexerhex_textasbytes_isbase = false;
            return QsciLexerHex::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerhex_textasbytes_callback;
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
        return QsciLexerHex::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerhex_bytesastext_isbase) {
            qscilexerhex_bytesastext_isbase = false;
            return QsciLexerHex::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerhex_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerHex::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerhex_sender_isbase) {
            qscilexerhex_sender_isbase = false;
            return QsciLexerHex::sender();
        }
        auto sender_cb = qscilexerhex_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerHex::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerhex_sendersignalindex_isbase) {
            qscilexerhex_sendersignalindex_isbase = false;
            return QsciLexerHex::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerhex_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerhex_receivers_isbase) {
            qscilexerhex_receivers_isbase = false;
            return QsciLexerHex::receivers(signal);
        }
        auto receivers_cb = qscilexerhex_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerhex_issignalconnected_isbase) {
            qscilexerhex_issignalconnected_isbase = false;
            return QsciLexerHex::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerhex_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerHex_ReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_SuperReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_WriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_SuperWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerHex_TimerEvent(QsciLexerHex* self, QTimerEvent* event);
    friend void QsciLexerHex_SuperTimerEvent(QsciLexerHex* self, QTimerEvent* event);
    friend void QsciLexerHex_ChildEvent(QsciLexerHex* self, QChildEvent* event);
    friend void QsciLexerHex_SuperChildEvent(QsciLexerHex* self, QChildEvent* event);
    friend void QsciLexerHex_CustomEvent(QsciLexerHex* self, QEvent* event);
    friend void QsciLexerHex_SuperCustomEvent(QsciLexerHex* self, QEvent* event);
    friend void QsciLexerHex_ConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_SuperConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_DisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_SuperDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerHex_TextAsBytes(const QsciLexerHex* self, const libqt_string text);
    friend libqt_string QsciLexerHex_SuperTextAsBytes(const QsciLexerHex* self, const libqt_string text);
    friend libqt_string QsciLexerHex_BytesAsText(const QsciLexerHex* self, const char* bytes, int size);
    friend libqt_string QsciLexerHex_SuperBytesAsText(const QsciLexerHex* self, const char* bytes, int size);
    friend QObject* QsciLexerHex_Sender(const QsciLexerHex* self);
    friend QObject* QsciLexerHex_SuperSender(const QsciLexerHex* self);
    friend int QsciLexerHex_SenderSignalIndex(const QsciLexerHex* self);
    friend int QsciLexerHex_SuperSenderSignalIndex(const QsciLexerHex* self);
    friend int QsciLexerHex_Receivers(const QsciLexerHex* self, const char* signal);
    friend int QsciLexerHex_SuperReceivers(const QsciLexerHex* self, const char* signal);
    friend bool QsciLexerHex_IsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
    friend bool QsciLexerHex_SuperIsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
};

#endif
