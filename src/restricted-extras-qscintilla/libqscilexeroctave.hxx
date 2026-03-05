#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEROCTAVE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEROCTAVE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerOctave so that we can call protected methods
class VirtualQsciLexerOctave final : public QsciLexerOctave {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerOctave = true;

    // Virtual class public types (including callbacks)
    using QsciLexerOctave_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerOctave_Metacast_Callback = void* (*)(QsciLexerOctave*, const char*);
    using QsciLexerOctave_Metacall_Callback = int (*)(QsciLexerOctave*, int, int, void**);
    using QsciLexerOctave_Language_Callback = const char* (*)();
    using QsciLexerOctave_Lexer_Callback = const char* (*)();
    using QsciLexerOctave_LexerId_Callback = int (*)();
    using QsciLexerOctave_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerOctave_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerOctave_BlockEnd_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BlockLookback_Callback = int (*)();
    using QsciLexerOctave_BlockStart_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BlockStartKeyword_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BraceStyle_Callback = int (*)();
    using QsciLexerOctave_CaseSensitive_Callback = bool (*)();
    using QsciLexerOctave_Color_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_EolFill_Callback = bool (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_Font_Callback = QFont* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_IndentationGuideView_Callback = int (*)();
    using QsciLexerOctave_Keywords_Callback = const char* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultStyle_Callback = int (*)();
    using QsciLexerOctave_Description_Callback = const char* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_Paper_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultColor2_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultEolFill_Callback = bool (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultFont2_Callback = QFont* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultPaper2_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_SetEditor_Callback = void (*)(QsciLexerOctave*, QsciScintilla*);
    using QsciLexerOctave_RefreshProperties_Callback = void (*)();
    using QsciLexerOctave_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerOctave_WordCharacters_Callback = const char* (*)();
    using QsciLexerOctave_SetAutoIndentStyle_Callback = void (*)(QsciLexerOctave*, int);
    using QsciLexerOctave_SetColor_Callback = void (*)(QsciLexerOctave*, QColor*, int);
    using QsciLexerOctave_SetEolFill_Callback = void (*)(QsciLexerOctave*, bool, int);
    using QsciLexerOctave_SetFont_Callback = void (*)(QsciLexerOctave*, QFont*, int);
    using QsciLexerOctave_SetPaper_Callback = void (*)(QsciLexerOctave*, QColor*, int);
    using QsciLexerOctave_ReadProperties_Callback = bool (*)(QsciLexerOctave*, QSettings*, const char*);
    using QsciLexerOctave_WriteProperties_Callback = bool (*)(const QsciLexerOctave*, QSettings*, const char*);
    using QsciLexerOctave_Event_Callback = bool (*)(QsciLexerOctave*, QEvent*);
    using QsciLexerOctave_EventFilter_Callback = bool (*)(QsciLexerOctave*, QObject*, QEvent*);
    using QsciLexerOctave_TimerEvent_Callback = void (*)(QsciLexerOctave*, QTimerEvent*);
    using QsciLexerOctave_ChildEvent_Callback = void (*)(QsciLexerOctave*, QChildEvent*);
    using QsciLexerOctave_CustomEvent_Callback = void (*)(QsciLexerOctave*, QEvent*);
    using QsciLexerOctave_ConnectNotify_Callback = void (*)(QsciLexerOctave*, QMetaMethod*);
    using QsciLexerOctave_DisconnectNotify_Callback = void (*)(QsciLexerOctave*, QMetaMethod*);
    using QsciLexerOctave_TextAsBytes_Callback = libqt_string (*)(const QsciLexerOctave*, const char*);
    using QsciLexerOctave_BytesAsText_Callback = const char* (*)(const QsciLexerOctave*, const char*, int);
    using QsciLexerOctave_Sender_Callback = QObject* (*)();
    using QsciLexerOctave_SenderSignalIndex_Callback = int (*)();
    using QsciLexerOctave_Receivers_Callback = int (*)(const QsciLexerOctave*, const char*);
    using QsciLexerOctave_IsSignalConnected_Callback = bool (*)(const QsciLexerOctave*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerOctave_MetaObject_Callback qscilexeroctave_metaobject_callback = nullptr;
    QsciLexerOctave_Metacast_Callback qscilexeroctave_metacast_callback = nullptr;
    QsciLexerOctave_Metacall_Callback qscilexeroctave_metacall_callback = nullptr;
    QsciLexerOctave_Language_Callback qscilexeroctave_language_callback = nullptr;
    QsciLexerOctave_Lexer_Callback qscilexeroctave_lexer_callback = nullptr;
    QsciLexerOctave_LexerId_Callback qscilexeroctave_lexerid_callback = nullptr;
    QsciLexerOctave_AutoCompletionFillups_Callback qscilexeroctave_autocompletionfillups_callback = nullptr;
    QsciLexerOctave_AutoCompletionWordSeparators_Callback qscilexeroctave_autocompletionwordseparators_callback = nullptr;
    QsciLexerOctave_BlockEnd_Callback qscilexeroctave_blockend_callback = nullptr;
    QsciLexerOctave_BlockLookback_Callback qscilexeroctave_blocklookback_callback = nullptr;
    QsciLexerOctave_BlockStart_Callback qscilexeroctave_blockstart_callback = nullptr;
    QsciLexerOctave_BlockStartKeyword_Callback qscilexeroctave_blockstartkeyword_callback = nullptr;
    QsciLexerOctave_BraceStyle_Callback qscilexeroctave_bracestyle_callback = nullptr;
    QsciLexerOctave_CaseSensitive_Callback qscilexeroctave_casesensitive_callback = nullptr;
    QsciLexerOctave_Color_Callback qscilexeroctave_color_callback = nullptr;
    QsciLexerOctave_EolFill_Callback qscilexeroctave_eolfill_callback = nullptr;
    QsciLexerOctave_Font_Callback qscilexeroctave_font_callback = nullptr;
    QsciLexerOctave_IndentationGuideView_Callback qscilexeroctave_indentationguideview_callback = nullptr;
    QsciLexerOctave_Keywords_Callback qscilexeroctave_keywords_callback = nullptr;
    QsciLexerOctave_DefaultStyle_Callback qscilexeroctave_defaultstyle_callback = nullptr;
    QsciLexerOctave_Description_Callback qscilexeroctave_description_callback = nullptr;
    QsciLexerOctave_Paper_Callback qscilexeroctave_paper_callback = nullptr;
    QsciLexerOctave_DefaultColor2_Callback qscilexeroctave_defaultcolor2_callback = nullptr;
    QsciLexerOctave_DefaultEolFill_Callback qscilexeroctave_defaulteolfill_callback = nullptr;
    QsciLexerOctave_DefaultFont2_Callback qscilexeroctave_defaultfont2_callback = nullptr;
    QsciLexerOctave_DefaultPaper2_Callback qscilexeroctave_defaultpaper2_callback = nullptr;
    QsciLexerOctave_SetEditor_Callback qscilexeroctave_seteditor_callback = nullptr;
    QsciLexerOctave_RefreshProperties_Callback qscilexeroctave_refreshproperties_callback = nullptr;
    QsciLexerOctave_StyleBitsNeeded_Callback qscilexeroctave_stylebitsneeded_callback = nullptr;
    QsciLexerOctave_WordCharacters_Callback qscilexeroctave_wordcharacters_callback = nullptr;
    QsciLexerOctave_SetAutoIndentStyle_Callback qscilexeroctave_setautoindentstyle_callback = nullptr;
    QsciLexerOctave_SetColor_Callback qscilexeroctave_setcolor_callback = nullptr;
    QsciLexerOctave_SetEolFill_Callback qscilexeroctave_seteolfill_callback = nullptr;
    QsciLexerOctave_SetFont_Callback qscilexeroctave_setfont_callback = nullptr;
    QsciLexerOctave_SetPaper_Callback qscilexeroctave_setpaper_callback = nullptr;
    QsciLexerOctave_ReadProperties_Callback qscilexeroctave_readproperties_callback = nullptr;
    QsciLexerOctave_WriteProperties_Callback qscilexeroctave_writeproperties_callback = nullptr;
    QsciLexerOctave_Event_Callback qscilexeroctave_event_callback = nullptr;
    QsciLexerOctave_EventFilter_Callback qscilexeroctave_eventfilter_callback = nullptr;
    QsciLexerOctave_TimerEvent_Callback qscilexeroctave_timerevent_callback = nullptr;
    QsciLexerOctave_ChildEvent_Callback qscilexeroctave_childevent_callback = nullptr;
    QsciLexerOctave_CustomEvent_Callback qscilexeroctave_customevent_callback = nullptr;
    QsciLexerOctave_ConnectNotify_Callback qscilexeroctave_connectnotify_callback = nullptr;
    QsciLexerOctave_DisconnectNotify_Callback qscilexeroctave_disconnectnotify_callback = nullptr;
    QsciLexerOctave_TextAsBytes_Callback qscilexeroctave_textasbytes_callback = nullptr;
    QsciLexerOctave_BytesAsText_Callback qscilexeroctave_bytesastext_callback = nullptr;
    QsciLexerOctave_Sender_Callback qscilexeroctave_sender_callback = nullptr;
    QsciLexerOctave_SenderSignalIndex_Callback qscilexeroctave_sendersignalindex_callback = nullptr;
    QsciLexerOctave_Receivers_Callback qscilexeroctave_receivers_callback = nullptr;
    QsciLexerOctave_IsSignalConnected_Callback qscilexeroctave_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeroctave_metaobject_isbase = false;
    mutable bool qscilexeroctave_metacast_isbase = false;
    mutable bool qscilexeroctave_metacall_isbase = false;
    mutable bool qscilexeroctave_language_isbase = false;
    mutable bool qscilexeroctave_lexer_isbase = false;
    mutable bool qscilexeroctave_lexerid_isbase = false;
    mutable bool qscilexeroctave_autocompletionfillups_isbase = false;
    mutable bool qscilexeroctave_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeroctave_blockend_isbase = false;
    mutable bool qscilexeroctave_blocklookback_isbase = false;
    mutable bool qscilexeroctave_blockstart_isbase = false;
    mutable bool qscilexeroctave_blockstartkeyword_isbase = false;
    mutable bool qscilexeroctave_bracestyle_isbase = false;
    mutable bool qscilexeroctave_casesensitive_isbase = false;
    mutable bool qscilexeroctave_color_isbase = false;
    mutable bool qscilexeroctave_eolfill_isbase = false;
    mutable bool qscilexeroctave_font_isbase = false;
    mutable bool qscilexeroctave_indentationguideview_isbase = false;
    mutable bool qscilexeroctave_keywords_isbase = false;
    mutable bool qscilexeroctave_defaultstyle_isbase = false;
    mutable bool qscilexeroctave_description_isbase = false;
    mutable bool qscilexeroctave_paper_isbase = false;
    mutable bool qscilexeroctave_defaultcolor2_isbase = false;
    mutable bool qscilexeroctave_defaulteolfill_isbase = false;
    mutable bool qscilexeroctave_defaultfont2_isbase = false;
    mutable bool qscilexeroctave_defaultpaper2_isbase = false;
    mutable bool qscilexeroctave_seteditor_isbase = false;
    mutable bool qscilexeroctave_refreshproperties_isbase = false;
    mutable bool qscilexeroctave_stylebitsneeded_isbase = false;
    mutable bool qscilexeroctave_wordcharacters_isbase = false;
    mutable bool qscilexeroctave_setautoindentstyle_isbase = false;
    mutable bool qscilexeroctave_setcolor_isbase = false;
    mutable bool qscilexeroctave_seteolfill_isbase = false;
    mutable bool qscilexeroctave_setfont_isbase = false;
    mutable bool qscilexeroctave_setpaper_isbase = false;
    mutable bool qscilexeroctave_readproperties_isbase = false;
    mutable bool qscilexeroctave_writeproperties_isbase = false;
    mutable bool qscilexeroctave_event_isbase = false;
    mutable bool qscilexeroctave_eventfilter_isbase = false;
    mutable bool qscilexeroctave_timerevent_isbase = false;
    mutable bool qscilexeroctave_childevent_isbase = false;
    mutable bool qscilexeroctave_customevent_isbase = false;
    mutable bool qscilexeroctave_connectnotify_isbase = false;
    mutable bool qscilexeroctave_disconnectnotify_isbase = false;
    mutable bool qscilexeroctave_textasbytes_isbase = false;
    mutable bool qscilexeroctave_bytesastext_isbase = false;
    mutable bool qscilexeroctave_sender_isbase = false;
    mutable bool qscilexeroctave_sendersignalindex_isbase = false;
    mutable bool qscilexeroctave_receivers_isbase = false;
    mutable bool qscilexeroctave_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerOctave() : QsciLexerOctave() {};
    VirtualQsciLexerOctave(QObject* parent) : QsciLexerOctave(parent) {};

    // Callback setters
    inline void setQsciLexerOctave_MetaObject_Callback(QsciLexerOctave_MetaObject_Callback cb) { qscilexeroctave_metaobject_callback = cb; }
    inline void setQsciLexerOctave_Metacast_Callback(QsciLexerOctave_Metacast_Callback cb) { qscilexeroctave_metacast_callback = cb; }
    inline void setQsciLexerOctave_Metacall_Callback(QsciLexerOctave_Metacall_Callback cb) { qscilexeroctave_metacall_callback = cb; }
    inline void setQsciLexerOctave_Language_Callback(QsciLexerOctave_Language_Callback cb) { qscilexeroctave_language_callback = cb; }
    inline void setQsciLexerOctave_Lexer_Callback(QsciLexerOctave_Lexer_Callback cb) { qscilexeroctave_lexer_callback = cb; }
    inline void setQsciLexerOctave_LexerId_Callback(QsciLexerOctave_LexerId_Callback cb) { qscilexeroctave_lexerid_callback = cb; }
    inline void setQsciLexerOctave_AutoCompletionFillups_Callback(QsciLexerOctave_AutoCompletionFillups_Callback cb) { qscilexeroctave_autocompletionfillups_callback = cb; }
    inline void setQsciLexerOctave_AutoCompletionWordSeparators_Callback(QsciLexerOctave_AutoCompletionWordSeparators_Callback cb) { qscilexeroctave_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerOctave_BlockEnd_Callback(QsciLexerOctave_BlockEnd_Callback cb) { qscilexeroctave_blockend_callback = cb; }
    inline void setQsciLexerOctave_BlockLookback_Callback(QsciLexerOctave_BlockLookback_Callback cb) { qscilexeroctave_blocklookback_callback = cb; }
    inline void setQsciLexerOctave_BlockStart_Callback(QsciLexerOctave_BlockStart_Callback cb) { qscilexeroctave_blockstart_callback = cb; }
    inline void setQsciLexerOctave_BlockStartKeyword_Callback(QsciLexerOctave_BlockStartKeyword_Callback cb) { qscilexeroctave_blockstartkeyword_callback = cb; }
    inline void setQsciLexerOctave_BraceStyle_Callback(QsciLexerOctave_BraceStyle_Callback cb) { qscilexeroctave_bracestyle_callback = cb; }
    inline void setQsciLexerOctave_CaseSensitive_Callback(QsciLexerOctave_CaseSensitive_Callback cb) { qscilexeroctave_casesensitive_callback = cb; }
    inline void setQsciLexerOctave_Color_Callback(QsciLexerOctave_Color_Callback cb) { qscilexeroctave_color_callback = cb; }
    inline void setQsciLexerOctave_EolFill_Callback(QsciLexerOctave_EolFill_Callback cb) { qscilexeroctave_eolfill_callback = cb; }
    inline void setQsciLexerOctave_Font_Callback(QsciLexerOctave_Font_Callback cb) { qscilexeroctave_font_callback = cb; }
    inline void setQsciLexerOctave_IndentationGuideView_Callback(QsciLexerOctave_IndentationGuideView_Callback cb) { qscilexeroctave_indentationguideview_callback = cb; }
    inline void setQsciLexerOctave_Keywords_Callback(QsciLexerOctave_Keywords_Callback cb) { qscilexeroctave_keywords_callback = cb; }
    inline void setQsciLexerOctave_DefaultStyle_Callback(QsciLexerOctave_DefaultStyle_Callback cb) { qscilexeroctave_defaultstyle_callback = cb; }
    inline void setQsciLexerOctave_Description_Callback(QsciLexerOctave_Description_Callback cb) { qscilexeroctave_description_callback = cb; }
    inline void setQsciLexerOctave_Paper_Callback(QsciLexerOctave_Paper_Callback cb) { qscilexeroctave_paper_callback = cb; }
    inline void setQsciLexerOctave_DefaultColor2_Callback(QsciLexerOctave_DefaultColor2_Callback cb) { qscilexeroctave_defaultcolor2_callback = cb; }
    inline void setQsciLexerOctave_DefaultEolFill_Callback(QsciLexerOctave_DefaultEolFill_Callback cb) { qscilexeroctave_defaulteolfill_callback = cb; }
    inline void setQsciLexerOctave_DefaultFont2_Callback(QsciLexerOctave_DefaultFont2_Callback cb) { qscilexeroctave_defaultfont2_callback = cb; }
    inline void setQsciLexerOctave_DefaultPaper2_Callback(QsciLexerOctave_DefaultPaper2_Callback cb) { qscilexeroctave_defaultpaper2_callback = cb; }
    inline void setQsciLexerOctave_SetEditor_Callback(QsciLexerOctave_SetEditor_Callback cb) { qscilexeroctave_seteditor_callback = cb; }
    inline void setQsciLexerOctave_RefreshProperties_Callback(QsciLexerOctave_RefreshProperties_Callback cb) { qscilexeroctave_refreshproperties_callback = cb; }
    inline void setQsciLexerOctave_StyleBitsNeeded_Callback(QsciLexerOctave_StyleBitsNeeded_Callback cb) { qscilexeroctave_stylebitsneeded_callback = cb; }
    inline void setQsciLexerOctave_WordCharacters_Callback(QsciLexerOctave_WordCharacters_Callback cb) { qscilexeroctave_wordcharacters_callback = cb; }
    inline void setQsciLexerOctave_SetAutoIndentStyle_Callback(QsciLexerOctave_SetAutoIndentStyle_Callback cb) { qscilexeroctave_setautoindentstyle_callback = cb; }
    inline void setQsciLexerOctave_SetColor_Callback(QsciLexerOctave_SetColor_Callback cb) { qscilexeroctave_setcolor_callback = cb; }
    inline void setQsciLexerOctave_SetEolFill_Callback(QsciLexerOctave_SetEolFill_Callback cb) { qscilexeroctave_seteolfill_callback = cb; }
    inline void setQsciLexerOctave_SetFont_Callback(QsciLexerOctave_SetFont_Callback cb) { qscilexeroctave_setfont_callback = cb; }
    inline void setQsciLexerOctave_SetPaper_Callback(QsciLexerOctave_SetPaper_Callback cb) { qscilexeroctave_setpaper_callback = cb; }
    inline void setQsciLexerOctave_ReadProperties_Callback(QsciLexerOctave_ReadProperties_Callback cb) { qscilexeroctave_readproperties_callback = cb; }
    inline void setQsciLexerOctave_WriteProperties_Callback(QsciLexerOctave_WriteProperties_Callback cb) { qscilexeroctave_writeproperties_callback = cb; }
    inline void setQsciLexerOctave_Event_Callback(QsciLexerOctave_Event_Callback cb) { qscilexeroctave_event_callback = cb; }
    inline void setQsciLexerOctave_EventFilter_Callback(QsciLexerOctave_EventFilter_Callback cb) { qscilexeroctave_eventfilter_callback = cb; }
    inline void setQsciLexerOctave_TimerEvent_Callback(QsciLexerOctave_TimerEvent_Callback cb) { qscilexeroctave_timerevent_callback = cb; }
    inline void setQsciLexerOctave_ChildEvent_Callback(QsciLexerOctave_ChildEvent_Callback cb) { qscilexeroctave_childevent_callback = cb; }
    inline void setQsciLexerOctave_CustomEvent_Callback(QsciLexerOctave_CustomEvent_Callback cb) { qscilexeroctave_customevent_callback = cb; }
    inline void setQsciLexerOctave_ConnectNotify_Callback(QsciLexerOctave_ConnectNotify_Callback cb) { qscilexeroctave_connectnotify_callback = cb; }
    inline void setQsciLexerOctave_DisconnectNotify_Callback(QsciLexerOctave_DisconnectNotify_Callback cb) { qscilexeroctave_disconnectnotify_callback = cb; }
    inline void setQsciLexerOctave_TextAsBytes_Callback(QsciLexerOctave_TextAsBytes_Callback cb) { qscilexeroctave_textasbytes_callback = cb; }
    inline void setQsciLexerOctave_BytesAsText_Callback(QsciLexerOctave_BytesAsText_Callback cb) { qscilexeroctave_bytesastext_callback = cb; }
    inline void setQsciLexerOctave_Sender_Callback(QsciLexerOctave_Sender_Callback cb) { qscilexeroctave_sender_callback = cb; }
    inline void setQsciLexerOctave_SenderSignalIndex_Callback(QsciLexerOctave_SenderSignalIndex_Callback cb) { qscilexeroctave_sendersignalindex_callback = cb; }
    inline void setQsciLexerOctave_Receivers_Callback(QsciLexerOctave_Receivers_Callback cb) { qscilexeroctave_receivers_callback = cb; }
    inline void setQsciLexerOctave_IsSignalConnected_Callback(QsciLexerOctave_IsSignalConnected_Callback cb) { qscilexeroctave_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerOctave_MetaObject_IsBase(bool value) const { qscilexeroctave_metaobject_isbase = value; }
    inline void setQsciLexerOctave_Metacast_IsBase(bool value) const { qscilexeroctave_metacast_isbase = value; }
    inline void setQsciLexerOctave_Metacall_IsBase(bool value) const { qscilexeroctave_metacall_isbase = value; }
    inline void setQsciLexerOctave_Language_IsBase(bool value) const { qscilexeroctave_language_isbase = value; }
    inline void setQsciLexerOctave_Lexer_IsBase(bool value) const { qscilexeroctave_lexer_isbase = value; }
    inline void setQsciLexerOctave_LexerId_IsBase(bool value) const { qscilexeroctave_lexerid_isbase = value; }
    inline void setQsciLexerOctave_AutoCompletionFillups_IsBase(bool value) const { qscilexeroctave_autocompletionfillups_isbase = value; }
    inline void setQsciLexerOctave_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeroctave_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerOctave_BlockEnd_IsBase(bool value) const { qscilexeroctave_blockend_isbase = value; }
    inline void setQsciLexerOctave_BlockLookback_IsBase(bool value) const { qscilexeroctave_blocklookback_isbase = value; }
    inline void setQsciLexerOctave_BlockStart_IsBase(bool value) const { qscilexeroctave_blockstart_isbase = value; }
    inline void setQsciLexerOctave_BlockStartKeyword_IsBase(bool value) const { qscilexeroctave_blockstartkeyword_isbase = value; }
    inline void setQsciLexerOctave_BraceStyle_IsBase(bool value) const { qscilexeroctave_bracestyle_isbase = value; }
    inline void setQsciLexerOctave_CaseSensitive_IsBase(bool value) const { qscilexeroctave_casesensitive_isbase = value; }
    inline void setQsciLexerOctave_Color_IsBase(bool value) const { qscilexeroctave_color_isbase = value; }
    inline void setQsciLexerOctave_EolFill_IsBase(bool value) const { qscilexeroctave_eolfill_isbase = value; }
    inline void setQsciLexerOctave_Font_IsBase(bool value) const { qscilexeroctave_font_isbase = value; }
    inline void setQsciLexerOctave_IndentationGuideView_IsBase(bool value) const { qscilexeroctave_indentationguideview_isbase = value; }
    inline void setQsciLexerOctave_Keywords_IsBase(bool value) const { qscilexeroctave_keywords_isbase = value; }
    inline void setQsciLexerOctave_DefaultStyle_IsBase(bool value) const { qscilexeroctave_defaultstyle_isbase = value; }
    inline void setQsciLexerOctave_Description_IsBase(bool value) const { qscilexeroctave_description_isbase = value; }
    inline void setQsciLexerOctave_Paper_IsBase(bool value) const { qscilexeroctave_paper_isbase = value; }
    inline void setQsciLexerOctave_DefaultColor2_IsBase(bool value) const { qscilexeroctave_defaultcolor2_isbase = value; }
    inline void setQsciLexerOctave_DefaultEolFill_IsBase(bool value) const { qscilexeroctave_defaulteolfill_isbase = value; }
    inline void setQsciLexerOctave_DefaultFont2_IsBase(bool value) const { qscilexeroctave_defaultfont2_isbase = value; }
    inline void setQsciLexerOctave_DefaultPaper2_IsBase(bool value) const { qscilexeroctave_defaultpaper2_isbase = value; }
    inline void setQsciLexerOctave_SetEditor_IsBase(bool value) const { qscilexeroctave_seteditor_isbase = value; }
    inline void setQsciLexerOctave_RefreshProperties_IsBase(bool value) const { qscilexeroctave_refreshproperties_isbase = value; }
    inline void setQsciLexerOctave_StyleBitsNeeded_IsBase(bool value) const { qscilexeroctave_stylebitsneeded_isbase = value; }
    inline void setQsciLexerOctave_WordCharacters_IsBase(bool value) const { qscilexeroctave_wordcharacters_isbase = value; }
    inline void setQsciLexerOctave_SetAutoIndentStyle_IsBase(bool value) const { qscilexeroctave_setautoindentstyle_isbase = value; }
    inline void setQsciLexerOctave_SetColor_IsBase(bool value) const { qscilexeroctave_setcolor_isbase = value; }
    inline void setQsciLexerOctave_SetEolFill_IsBase(bool value) const { qscilexeroctave_seteolfill_isbase = value; }
    inline void setQsciLexerOctave_SetFont_IsBase(bool value) const { qscilexeroctave_setfont_isbase = value; }
    inline void setQsciLexerOctave_SetPaper_IsBase(bool value) const { qscilexeroctave_setpaper_isbase = value; }
    inline void setQsciLexerOctave_ReadProperties_IsBase(bool value) const { qscilexeroctave_readproperties_isbase = value; }
    inline void setQsciLexerOctave_WriteProperties_IsBase(bool value) const { qscilexeroctave_writeproperties_isbase = value; }
    inline void setQsciLexerOctave_Event_IsBase(bool value) const { qscilexeroctave_event_isbase = value; }
    inline void setQsciLexerOctave_EventFilter_IsBase(bool value) const { qscilexeroctave_eventfilter_isbase = value; }
    inline void setQsciLexerOctave_TimerEvent_IsBase(bool value) const { qscilexeroctave_timerevent_isbase = value; }
    inline void setQsciLexerOctave_ChildEvent_IsBase(bool value) const { qscilexeroctave_childevent_isbase = value; }
    inline void setQsciLexerOctave_CustomEvent_IsBase(bool value) const { qscilexeroctave_customevent_isbase = value; }
    inline void setQsciLexerOctave_ConnectNotify_IsBase(bool value) const { qscilexeroctave_connectnotify_isbase = value; }
    inline void setQsciLexerOctave_DisconnectNotify_IsBase(bool value) const { qscilexeroctave_disconnectnotify_isbase = value; }
    inline void setQsciLexerOctave_TextAsBytes_IsBase(bool value) const { qscilexeroctave_textasbytes_isbase = value; }
    inline void setQsciLexerOctave_BytesAsText_IsBase(bool value) const { qscilexeroctave_bytesastext_isbase = value; }
    inline void setQsciLexerOctave_Sender_IsBase(bool value) const { qscilexeroctave_sender_isbase = value; }
    inline void setQsciLexerOctave_SenderSignalIndex_IsBase(bool value) const { qscilexeroctave_sendersignalindex_isbase = value; }
    inline void setQsciLexerOctave_Receivers_IsBase(bool value) const { qscilexeroctave_receivers_isbase = value; }
    inline void setQsciLexerOctave_IsSignalConnected_IsBase(bool value) const { qscilexeroctave_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeroctave_metaobject_isbase) {
            qscilexeroctave_metaobject_isbase = false;
            return QsciLexerOctave::metaObject();
        }
        auto metaobject_cb = qscilexeroctave_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerOctave::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeroctave_metacast_isbase) {
            qscilexeroctave_metacast_isbase = false;
            return QsciLexerOctave::qt_metacast(param1);
        }
        auto metacast_cb = qscilexeroctave_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeroctave_metacall_isbase) {
            qscilexeroctave_metacall_isbase = false;
            return QsciLexerOctave::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexeroctave_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexeroctave_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeroctave_lexer_isbase) {
            qscilexeroctave_lexer_isbase = false;
            return QsciLexerOctave::lexer();
        }
        auto lexer_cb = qscilexeroctave_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerOctave::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeroctave_lexerid_isbase) {
            qscilexeroctave_lexerid_isbase = false;
            return QsciLexerOctave::lexerId();
        }
        auto lexerid_cb = qscilexeroctave_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeroctave_autocompletionfillups_isbase) {
            qscilexeroctave_autocompletionfillups_isbase = false;
            return QsciLexerOctave::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexeroctave_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerOctave::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeroctave_autocompletionwordseparators_isbase) {
            qscilexeroctave_autocompletionwordseparators_isbase = false;
            return QsciLexerOctave::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexeroctave_autocompletionwordseparators_callback;
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
        return QsciLexerOctave::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeroctave_blockend_isbase) {
            qscilexeroctave_blockend_isbase = false;
            return QsciLexerOctave::blockEnd(style);
        }
        auto blockend_cb = qscilexeroctave_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeroctave_blocklookback_isbase) {
            qscilexeroctave_blocklookback_isbase = false;
            return QsciLexerOctave::blockLookback();
        }
        auto blocklookback_cb = qscilexeroctave_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeroctave_blockstart_isbase) {
            qscilexeroctave_blockstart_isbase = false;
            return QsciLexerOctave::blockStart(style);
        }
        auto blockstart_cb = qscilexeroctave_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeroctave_blockstartkeyword_isbase) {
            qscilexeroctave_blockstartkeyword_isbase = false;
            return QsciLexerOctave::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexeroctave_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeroctave_bracestyle_isbase) {
            qscilexeroctave_bracestyle_isbase = false;
            return QsciLexerOctave::braceStyle();
        }
        auto bracestyle_cb = qscilexeroctave_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeroctave_casesensitive_isbase) {
            qscilexeroctave_casesensitive_isbase = false;
            return QsciLexerOctave::caseSensitive();
        }
        auto casesensitive_cb = qscilexeroctave_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerOctave::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeroctave_color_isbase) {
            qscilexeroctave_color_isbase = false;
            return QsciLexerOctave::color(style);
        }
        auto color_cb = qscilexeroctave_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeroctave_eolfill_isbase) {
            qscilexeroctave_eolfill_isbase = false;
            return QsciLexerOctave::eolFill(style);
        }
        auto eolfill_cb = qscilexeroctave_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeroctave_font_isbase) {
            qscilexeroctave_font_isbase = false;
            return QsciLexerOctave::font(style);
        }
        auto font_cb = qscilexeroctave_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeroctave_indentationguideview_isbase) {
            qscilexeroctave_indentationguideview_isbase = false;
            return QsciLexerOctave::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexeroctave_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeroctave_keywords_isbase) {
            qscilexeroctave_keywords_isbase = false;
            return QsciLexerOctave::keywords(set);
        }
        auto keywords_cb = qscilexeroctave_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeroctave_defaultstyle_isbase) {
            qscilexeroctave_defaultstyle_isbase = false;
            return QsciLexerOctave::defaultStyle();
        }
        auto defaultstyle_cb = qscilexeroctave_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexeroctave_description_callback;
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
        if (qscilexeroctave_paper_isbase) {
            qscilexeroctave_paper_isbase = false;
            return QsciLexerOctave::paper(style);
        }
        auto paper_cb = qscilexeroctave_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeroctave_defaultcolor2_isbase) {
            qscilexeroctave_defaultcolor2_isbase = false;
            return QsciLexerOctave::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexeroctave_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeroctave_defaulteolfill_isbase) {
            qscilexeroctave_defaulteolfill_isbase = false;
            return QsciLexerOctave::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexeroctave_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeroctave_defaultfont2_isbase) {
            qscilexeroctave_defaultfont2_isbase = false;
            return QsciLexerOctave::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexeroctave_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeroctave_defaultpaper2_isbase) {
            qscilexeroctave_defaultpaper2_isbase = false;
            return QsciLexerOctave::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexeroctave_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerOctave::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeroctave_seteditor_isbase) {
            qscilexeroctave_seteditor_isbase = false;
            QsciLexerOctave::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexeroctave_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeroctave_refreshproperties_isbase) {
            qscilexeroctave_refreshproperties_isbase = false;
            QsciLexerOctave::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexeroctave_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerOctave::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeroctave_stylebitsneeded_isbase) {
            qscilexeroctave_stylebitsneeded_isbase = false;
            return QsciLexerOctave::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexeroctave_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeroctave_wordcharacters_isbase) {
            qscilexeroctave_wordcharacters_isbase = false;
            return QsciLexerOctave::wordCharacters();
        }
        auto wordcharacters_cb = qscilexeroctave_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerOctave::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeroctave_setautoindentstyle_isbase) {
            qscilexeroctave_setautoindentstyle_isbase = false;
            QsciLexerOctave::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexeroctave_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeroctave_setcolor_isbase) {
            qscilexeroctave_setcolor_isbase = false;
            QsciLexerOctave::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexeroctave_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeroctave_seteolfill_isbase) {
            qscilexeroctave_seteolfill_isbase = false;
            QsciLexerOctave::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexeroctave_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeroctave_setfont_isbase) {
            qscilexeroctave_setfont_isbase = false;
            QsciLexerOctave::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexeroctave_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeroctave_setpaper_isbase) {
            qscilexeroctave_setpaper_isbase = false;
            QsciLexerOctave::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexeroctave_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeroctave_readproperties_isbase) {
            qscilexeroctave_readproperties_isbase = false;
            return QsciLexerOctave::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexeroctave_readproperties_callback;
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
        return QsciLexerOctave::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeroctave_writeproperties_isbase) {
            qscilexeroctave_writeproperties_isbase = false;
            return QsciLexerOctave::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexeroctave_writeproperties_callback;
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
        return QsciLexerOctave::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeroctave_event_isbase) {
            qscilexeroctave_event_isbase = false;
            return QsciLexerOctave::event(event);
        }
        auto event_cb = qscilexeroctave_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeroctave_eventfilter_isbase) {
            qscilexeroctave_eventfilter_isbase = false;
            return QsciLexerOctave::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexeroctave_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerOctave::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeroctave_timerevent_isbase) {
            qscilexeroctave_timerevent_isbase = false;
            QsciLexerOctave::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexeroctave_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeroctave_childevent_isbase) {
            qscilexeroctave_childevent_isbase = false;
            QsciLexerOctave::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexeroctave_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeroctave_customevent_isbase) {
            qscilexeroctave_customevent_isbase = false;
            QsciLexerOctave::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexeroctave_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeroctave_connectnotify_isbase) {
            qscilexeroctave_connectnotify_isbase = false;
            QsciLexerOctave::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexeroctave_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeroctave_disconnectnotify_isbase) {
            qscilexeroctave_disconnectnotify_isbase = false;
            QsciLexerOctave::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexeroctave_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerOctave::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexeroctave_textasbytes_isbase) {
            qscilexeroctave_textasbytes_isbase = false;
            return QsciLexerOctave::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexeroctave_textasbytes_callback;
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
        return QsciLexerOctave::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexeroctave_bytesastext_isbase) {
            qscilexeroctave_bytesastext_isbase = false;
            return QsciLexerOctave::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexeroctave_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerOctave::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeroctave_sender_isbase) {
            qscilexeroctave_sender_isbase = false;
            return QsciLexerOctave::sender();
        }
        auto sender_cb = qscilexeroctave_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerOctave::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeroctave_sendersignalindex_isbase) {
            qscilexeroctave_sendersignalindex_isbase = false;
            return QsciLexerOctave::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexeroctave_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeroctave_receivers_isbase) {
            qscilexeroctave_receivers_isbase = false;
            return QsciLexerOctave::receivers(signal);
        }
        auto receivers_cb = qscilexeroctave_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeroctave_issignalconnected_isbase) {
            qscilexeroctave_issignalconnected_isbase = false;
            return QsciLexerOctave::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexeroctave_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerOctave_SuperReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerOctave_SuperWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event);
    friend void QsciLexerOctave_SuperTimerEvent(QsciLexerOctave* self, QTimerEvent* event);
    friend void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event);
    friend void QsciLexerOctave_SuperChildEvent(QsciLexerOctave* self, QChildEvent* event);
    friend void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event);
    friend void QsciLexerOctave_SuperCustomEvent(QsciLexerOctave* self, QEvent* event);
    friend void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
    friend void QsciLexerOctave_SuperConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
    friend void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
    friend void QsciLexerOctave_SuperDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerOctave_TextAsBytes(const QsciLexerOctave* self, const libqt_string text);
    friend libqt_string QsciLexerOctave_SuperTextAsBytes(const QsciLexerOctave* self, const libqt_string text);
    friend libqt_string QsciLexerOctave_BytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
    friend libqt_string QsciLexerOctave_SuperBytesAsText(const QsciLexerOctave* self, const char* bytes, int size);
    friend QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self);
    friend QObject* QsciLexerOctave_SuperSender(const QsciLexerOctave* self);
    friend int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self);
    friend int QsciLexerOctave_SuperSenderSignalIndex(const QsciLexerOctave* self);
    friend int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal);
    friend int QsciLexerOctave_SuperReceivers(const QsciLexerOctave* self, const char* signal);
    friend bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
    friend bool QsciLexerOctave_SuperIsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal);
};

#endif
