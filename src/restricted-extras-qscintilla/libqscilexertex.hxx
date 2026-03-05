#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTeX so that we can call protected methods
class VirtualQsciLexerTeX final : public QsciLexerTeX {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerTeX = true;

    // Virtual class public types (including callbacks)
    using QsciLexerTeX_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerTeX_Metacast_Callback = void* (*)(QsciLexerTeX*, const char*);
    using QsciLexerTeX_Metacall_Callback = int (*)(QsciLexerTeX*, int, int, void**);
    using QsciLexerTeX_Language_Callback = const char* (*)();
    using QsciLexerTeX_Lexer_Callback = const char* (*)();
    using QsciLexerTeX_LexerId_Callback = int (*)();
    using QsciLexerTeX_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerTeX_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerTeX_BlockEnd_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockLookback_Callback = int (*)();
    using QsciLexerTeX_BlockStart_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BraceStyle_Callback = int (*)();
    using QsciLexerTeX_CaseSensitive_Callback = bool (*)();
    using QsciLexerTeX_Color_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_EolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Font_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_IndentationGuideView_Callback = int (*)();
    using QsciLexerTeX_Keywords_Callback = const char* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultStyle_Callback = int (*)();
    using QsciLexerTeX_Description_Callback = const char* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Paper_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultColor2_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultEolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultFont2_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultPaper2_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_SetEditor_Callback = void (*)(QsciLexerTeX*, QsciScintilla*);
    using QsciLexerTeX_RefreshProperties_Callback = void (*)();
    using QsciLexerTeX_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerTeX_WordCharacters_Callback = const char* (*)();
    using QsciLexerTeX_SetAutoIndentStyle_Callback = void (*)(QsciLexerTeX*, int);
    using QsciLexerTeX_SetColor_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_SetEolFill_Callback = void (*)(QsciLexerTeX*, bool, int);
    using QsciLexerTeX_SetFont_Callback = void (*)(QsciLexerTeX*, QFont*, int);
    using QsciLexerTeX_SetPaper_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_ReadProperties_Callback = bool (*)(QsciLexerTeX*, QSettings*, const char*);
    using QsciLexerTeX_WriteProperties_Callback = bool (*)(const QsciLexerTeX*, QSettings*, const char*);
    using QsciLexerTeX_Event_Callback = bool (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_EventFilter_Callback = bool (*)(QsciLexerTeX*, QObject*, QEvent*);
    using QsciLexerTeX_TimerEvent_Callback = void (*)(QsciLexerTeX*, QTimerEvent*);
    using QsciLexerTeX_ChildEvent_Callback = void (*)(QsciLexerTeX*, QChildEvent*);
    using QsciLexerTeX_CustomEvent_Callback = void (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_ConnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX_DisconnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX_TextAsBytes_Callback = libqt_string (*)(const QsciLexerTeX*, const char*);
    using QsciLexerTeX_BytesAsText_Callback = const char* (*)(const QsciLexerTeX*, const char*, int);
    using QsciLexerTeX_Sender_Callback = QObject* (*)();
    using QsciLexerTeX_SenderSignalIndex_Callback = int (*)();
    using QsciLexerTeX_Receivers_Callback = int (*)(const QsciLexerTeX*, const char*);
    using QsciLexerTeX_IsSignalConnected_Callback = bool (*)(const QsciLexerTeX*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerTeX_MetaObject_Callback qscilexertex_metaobject_callback = nullptr;
    QsciLexerTeX_Metacast_Callback qscilexertex_metacast_callback = nullptr;
    QsciLexerTeX_Metacall_Callback qscilexertex_metacall_callback = nullptr;
    QsciLexerTeX_Language_Callback qscilexertex_language_callback = nullptr;
    QsciLexerTeX_Lexer_Callback qscilexertex_lexer_callback = nullptr;
    QsciLexerTeX_LexerId_Callback qscilexertex_lexerid_callback = nullptr;
    QsciLexerTeX_AutoCompletionFillups_Callback qscilexertex_autocompletionfillups_callback = nullptr;
    QsciLexerTeX_AutoCompletionWordSeparators_Callback qscilexertex_autocompletionwordseparators_callback = nullptr;
    QsciLexerTeX_BlockEnd_Callback qscilexertex_blockend_callback = nullptr;
    QsciLexerTeX_BlockLookback_Callback qscilexertex_blocklookback_callback = nullptr;
    QsciLexerTeX_BlockStart_Callback qscilexertex_blockstart_callback = nullptr;
    QsciLexerTeX_BlockStartKeyword_Callback qscilexertex_blockstartkeyword_callback = nullptr;
    QsciLexerTeX_BraceStyle_Callback qscilexertex_bracestyle_callback = nullptr;
    QsciLexerTeX_CaseSensitive_Callback qscilexertex_casesensitive_callback = nullptr;
    QsciLexerTeX_Color_Callback qscilexertex_color_callback = nullptr;
    QsciLexerTeX_EolFill_Callback qscilexertex_eolfill_callback = nullptr;
    QsciLexerTeX_Font_Callback qscilexertex_font_callback = nullptr;
    QsciLexerTeX_IndentationGuideView_Callback qscilexertex_indentationguideview_callback = nullptr;
    QsciLexerTeX_Keywords_Callback qscilexertex_keywords_callback = nullptr;
    QsciLexerTeX_DefaultStyle_Callback qscilexertex_defaultstyle_callback = nullptr;
    QsciLexerTeX_Description_Callback qscilexertex_description_callback = nullptr;
    QsciLexerTeX_Paper_Callback qscilexertex_paper_callback = nullptr;
    QsciLexerTeX_DefaultColor2_Callback qscilexertex_defaultcolor2_callback = nullptr;
    QsciLexerTeX_DefaultEolFill_Callback qscilexertex_defaulteolfill_callback = nullptr;
    QsciLexerTeX_DefaultFont2_Callback qscilexertex_defaultfont2_callback = nullptr;
    QsciLexerTeX_DefaultPaper2_Callback qscilexertex_defaultpaper2_callback = nullptr;
    QsciLexerTeX_SetEditor_Callback qscilexertex_seteditor_callback = nullptr;
    QsciLexerTeX_RefreshProperties_Callback qscilexertex_refreshproperties_callback = nullptr;
    QsciLexerTeX_StyleBitsNeeded_Callback qscilexertex_stylebitsneeded_callback = nullptr;
    QsciLexerTeX_WordCharacters_Callback qscilexertex_wordcharacters_callback = nullptr;
    QsciLexerTeX_SetAutoIndentStyle_Callback qscilexertex_setautoindentstyle_callback = nullptr;
    QsciLexerTeX_SetColor_Callback qscilexertex_setcolor_callback = nullptr;
    QsciLexerTeX_SetEolFill_Callback qscilexertex_seteolfill_callback = nullptr;
    QsciLexerTeX_SetFont_Callback qscilexertex_setfont_callback = nullptr;
    QsciLexerTeX_SetPaper_Callback qscilexertex_setpaper_callback = nullptr;
    QsciLexerTeX_ReadProperties_Callback qscilexertex_readproperties_callback = nullptr;
    QsciLexerTeX_WriteProperties_Callback qscilexertex_writeproperties_callback = nullptr;
    QsciLexerTeX_Event_Callback qscilexertex_event_callback = nullptr;
    QsciLexerTeX_EventFilter_Callback qscilexertex_eventfilter_callback = nullptr;
    QsciLexerTeX_TimerEvent_Callback qscilexertex_timerevent_callback = nullptr;
    QsciLexerTeX_ChildEvent_Callback qscilexertex_childevent_callback = nullptr;
    QsciLexerTeX_CustomEvent_Callback qscilexertex_customevent_callback = nullptr;
    QsciLexerTeX_ConnectNotify_Callback qscilexertex_connectnotify_callback = nullptr;
    QsciLexerTeX_DisconnectNotify_Callback qscilexertex_disconnectnotify_callback = nullptr;
    QsciLexerTeX_TextAsBytes_Callback qscilexertex_textasbytes_callback = nullptr;
    QsciLexerTeX_BytesAsText_Callback qscilexertex_bytesastext_callback = nullptr;
    QsciLexerTeX_Sender_Callback qscilexertex_sender_callback = nullptr;
    QsciLexerTeX_SenderSignalIndex_Callback qscilexertex_sendersignalindex_callback = nullptr;
    QsciLexerTeX_Receivers_Callback qscilexertex_receivers_callback = nullptr;
    QsciLexerTeX_IsSignalConnected_Callback qscilexertex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexertex_metaobject_isbase = false;
    mutable bool qscilexertex_metacast_isbase = false;
    mutable bool qscilexertex_metacall_isbase = false;
    mutable bool qscilexertex_language_isbase = false;
    mutable bool qscilexertex_lexer_isbase = false;
    mutable bool qscilexertex_lexerid_isbase = false;
    mutable bool qscilexertex_autocompletionfillups_isbase = false;
    mutable bool qscilexertex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexertex_blockend_isbase = false;
    mutable bool qscilexertex_blocklookback_isbase = false;
    mutable bool qscilexertex_blockstart_isbase = false;
    mutable bool qscilexertex_blockstartkeyword_isbase = false;
    mutable bool qscilexertex_bracestyle_isbase = false;
    mutable bool qscilexertex_casesensitive_isbase = false;
    mutable bool qscilexertex_color_isbase = false;
    mutable bool qscilexertex_eolfill_isbase = false;
    mutable bool qscilexertex_font_isbase = false;
    mutable bool qscilexertex_indentationguideview_isbase = false;
    mutable bool qscilexertex_keywords_isbase = false;
    mutable bool qscilexertex_defaultstyle_isbase = false;
    mutable bool qscilexertex_description_isbase = false;
    mutable bool qscilexertex_paper_isbase = false;
    mutable bool qscilexertex_defaultcolor2_isbase = false;
    mutable bool qscilexertex_defaulteolfill_isbase = false;
    mutable bool qscilexertex_defaultfont2_isbase = false;
    mutable bool qscilexertex_defaultpaper2_isbase = false;
    mutable bool qscilexertex_seteditor_isbase = false;
    mutable bool qscilexertex_refreshproperties_isbase = false;
    mutable bool qscilexertex_stylebitsneeded_isbase = false;
    mutable bool qscilexertex_wordcharacters_isbase = false;
    mutable bool qscilexertex_setautoindentstyle_isbase = false;
    mutable bool qscilexertex_setcolor_isbase = false;
    mutable bool qscilexertex_seteolfill_isbase = false;
    mutable bool qscilexertex_setfont_isbase = false;
    mutable bool qscilexertex_setpaper_isbase = false;
    mutable bool qscilexertex_readproperties_isbase = false;
    mutable bool qscilexertex_writeproperties_isbase = false;
    mutable bool qscilexertex_event_isbase = false;
    mutable bool qscilexertex_eventfilter_isbase = false;
    mutable bool qscilexertex_timerevent_isbase = false;
    mutable bool qscilexertex_childevent_isbase = false;
    mutable bool qscilexertex_customevent_isbase = false;
    mutable bool qscilexertex_connectnotify_isbase = false;
    mutable bool qscilexertex_disconnectnotify_isbase = false;
    mutable bool qscilexertex_textasbytes_isbase = false;
    mutable bool qscilexertex_bytesastext_isbase = false;
    mutable bool qscilexertex_sender_isbase = false;
    mutable bool qscilexertex_sendersignalindex_isbase = false;
    mutable bool qscilexertex_receivers_isbase = false;
    mutable bool qscilexertex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerTeX() : QsciLexerTeX() {};
    VirtualQsciLexerTeX(QObject* parent) : QsciLexerTeX(parent) {};

    // Callback setters
    inline void setQsciLexerTeX_MetaObject_Callback(QsciLexerTeX_MetaObject_Callback cb) { qscilexertex_metaobject_callback = cb; }
    inline void setQsciLexerTeX_Metacast_Callback(QsciLexerTeX_Metacast_Callback cb) { qscilexertex_metacast_callback = cb; }
    inline void setQsciLexerTeX_Metacall_Callback(QsciLexerTeX_Metacall_Callback cb) { qscilexertex_metacall_callback = cb; }
    inline void setQsciLexerTeX_Language_Callback(QsciLexerTeX_Language_Callback cb) { qscilexertex_language_callback = cb; }
    inline void setQsciLexerTeX_Lexer_Callback(QsciLexerTeX_Lexer_Callback cb) { qscilexertex_lexer_callback = cb; }
    inline void setQsciLexerTeX_LexerId_Callback(QsciLexerTeX_LexerId_Callback cb) { qscilexertex_lexerid_callback = cb; }
    inline void setQsciLexerTeX_AutoCompletionFillups_Callback(QsciLexerTeX_AutoCompletionFillups_Callback cb) { qscilexertex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerTeX_AutoCompletionWordSeparators_Callback(QsciLexerTeX_AutoCompletionWordSeparators_Callback cb) { qscilexertex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerTeX_BlockEnd_Callback(QsciLexerTeX_BlockEnd_Callback cb) { qscilexertex_blockend_callback = cb; }
    inline void setQsciLexerTeX_BlockLookback_Callback(QsciLexerTeX_BlockLookback_Callback cb) { qscilexertex_blocklookback_callback = cb; }
    inline void setQsciLexerTeX_BlockStart_Callback(QsciLexerTeX_BlockStart_Callback cb) { qscilexertex_blockstart_callback = cb; }
    inline void setQsciLexerTeX_BlockStartKeyword_Callback(QsciLexerTeX_BlockStartKeyword_Callback cb) { qscilexertex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerTeX_BraceStyle_Callback(QsciLexerTeX_BraceStyle_Callback cb) { qscilexertex_bracestyle_callback = cb; }
    inline void setQsciLexerTeX_CaseSensitive_Callback(QsciLexerTeX_CaseSensitive_Callback cb) { qscilexertex_casesensitive_callback = cb; }
    inline void setQsciLexerTeX_Color_Callback(QsciLexerTeX_Color_Callback cb) { qscilexertex_color_callback = cb; }
    inline void setQsciLexerTeX_EolFill_Callback(QsciLexerTeX_EolFill_Callback cb) { qscilexertex_eolfill_callback = cb; }
    inline void setQsciLexerTeX_Font_Callback(QsciLexerTeX_Font_Callback cb) { qscilexertex_font_callback = cb; }
    inline void setQsciLexerTeX_IndentationGuideView_Callback(QsciLexerTeX_IndentationGuideView_Callback cb) { qscilexertex_indentationguideview_callback = cb; }
    inline void setQsciLexerTeX_Keywords_Callback(QsciLexerTeX_Keywords_Callback cb) { qscilexertex_keywords_callback = cb; }
    inline void setQsciLexerTeX_DefaultStyle_Callback(QsciLexerTeX_DefaultStyle_Callback cb) { qscilexertex_defaultstyle_callback = cb; }
    inline void setQsciLexerTeX_Description_Callback(QsciLexerTeX_Description_Callback cb) { qscilexertex_description_callback = cb; }
    inline void setQsciLexerTeX_Paper_Callback(QsciLexerTeX_Paper_Callback cb) { qscilexertex_paper_callback = cb; }
    inline void setQsciLexerTeX_DefaultColor2_Callback(QsciLexerTeX_DefaultColor2_Callback cb) { qscilexertex_defaultcolor2_callback = cb; }
    inline void setQsciLexerTeX_DefaultEolFill_Callback(QsciLexerTeX_DefaultEolFill_Callback cb) { qscilexertex_defaulteolfill_callback = cb; }
    inline void setQsciLexerTeX_DefaultFont2_Callback(QsciLexerTeX_DefaultFont2_Callback cb) { qscilexertex_defaultfont2_callback = cb; }
    inline void setQsciLexerTeX_DefaultPaper2_Callback(QsciLexerTeX_DefaultPaper2_Callback cb) { qscilexertex_defaultpaper2_callback = cb; }
    inline void setQsciLexerTeX_SetEditor_Callback(QsciLexerTeX_SetEditor_Callback cb) { qscilexertex_seteditor_callback = cb; }
    inline void setQsciLexerTeX_RefreshProperties_Callback(QsciLexerTeX_RefreshProperties_Callback cb) { qscilexertex_refreshproperties_callback = cb; }
    inline void setQsciLexerTeX_StyleBitsNeeded_Callback(QsciLexerTeX_StyleBitsNeeded_Callback cb) { qscilexertex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerTeX_WordCharacters_Callback(QsciLexerTeX_WordCharacters_Callback cb) { qscilexertex_wordcharacters_callback = cb; }
    inline void setQsciLexerTeX_SetAutoIndentStyle_Callback(QsciLexerTeX_SetAutoIndentStyle_Callback cb) { qscilexertex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerTeX_SetColor_Callback(QsciLexerTeX_SetColor_Callback cb) { qscilexertex_setcolor_callback = cb; }
    inline void setQsciLexerTeX_SetEolFill_Callback(QsciLexerTeX_SetEolFill_Callback cb) { qscilexertex_seteolfill_callback = cb; }
    inline void setQsciLexerTeX_SetFont_Callback(QsciLexerTeX_SetFont_Callback cb) { qscilexertex_setfont_callback = cb; }
    inline void setQsciLexerTeX_SetPaper_Callback(QsciLexerTeX_SetPaper_Callback cb) { qscilexertex_setpaper_callback = cb; }
    inline void setQsciLexerTeX_ReadProperties_Callback(QsciLexerTeX_ReadProperties_Callback cb) { qscilexertex_readproperties_callback = cb; }
    inline void setQsciLexerTeX_WriteProperties_Callback(QsciLexerTeX_WriteProperties_Callback cb) { qscilexertex_writeproperties_callback = cb; }
    inline void setQsciLexerTeX_Event_Callback(QsciLexerTeX_Event_Callback cb) { qscilexertex_event_callback = cb; }
    inline void setQsciLexerTeX_EventFilter_Callback(QsciLexerTeX_EventFilter_Callback cb) { qscilexertex_eventfilter_callback = cb; }
    inline void setQsciLexerTeX_TimerEvent_Callback(QsciLexerTeX_TimerEvent_Callback cb) { qscilexertex_timerevent_callback = cb; }
    inline void setQsciLexerTeX_ChildEvent_Callback(QsciLexerTeX_ChildEvent_Callback cb) { qscilexertex_childevent_callback = cb; }
    inline void setQsciLexerTeX_CustomEvent_Callback(QsciLexerTeX_CustomEvent_Callback cb) { qscilexertex_customevent_callback = cb; }
    inline void setQsciLexerTeX_ConnectNotify_Callback(QsciLexerTeX_ConnectNotify_Callback cb) { qscilexertex_connectnotify_callback = cb; }
    inline void setQsciLexerTeX_DisconnectNotify_Callback(QsciLexerTeX_DisconnectNotify_Callback cb) { qscilexertex_disconnectnotify_callback = cb; }
    inline void setQsciLexerTeX_TextAsBytes_Callback(QsciLexerTeX_TextAsBytes_Callback cb) { qscilexertex_textasbytes_callback = cb; }
    inline void setQsciLexerTeX_BytesAsText_Callback(QsciLexerTeX_BytesAsText_Callback cb) { qscilexertex_bytesastext_callback = cb; }
    inline void setQsciLexerTeX_Sender_Callback(QsciLexerTeX_Sender_Callback cb) { qscilexertex_sender_callback = cb; }
    inline void setQsciLexerTeX_SenderSignalIndex_Callback(QsciLexerTeX_SenderSignalIndex_Callback cb) { qscilexertex_sendersignalindex_callback = cb; }
    inline void setQsciLexerTeX_Receivers_Callback(QsciLexerTeX_Receivers_Callback cb) { qscilexertex_receivers_callback = cb; }
    inline void setQsciLexerTeX_IsSignalConnected_Callback(QsciLexerTeX_IsSignalConnected_Callback cb) { qscilexertex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerTeX_MetaObject_IsBase(bool value) const { qscilexertex_metaobject_isbase = value; }
    inline void setQsciLexerTeX_Metacast_IsBase(bool value) const { qscilexertex_metacast_isbase = value; }
    inline void setQsciLexerTeX_Metacall_IsBase(bool value) const { qscilexertex_metacall_isbase = value; }
    inline void setQsciLexerTeX_Language_IsBase(bool value) const { qscilexertex_language_isbase = value; }
    inline void setQsciLexerTeX_Lexer_IsBase(bool value) const { qscilexertex_lexer_isbase = value; }
    inline void setQsciLexerTeX_LexerId_IsBase(bool value) const { qscilexertex_lexerid_isbase = value; }
    inline void setQsciLexerTeX_AutoCompletionFillups_IsBase(bool value) const { qscilexertex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerTeX_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexertex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerTeX_BlockEnd_IsBase(bool value) const { qscilexertex_blockend_isbase = value; }
    inline void setQsciLexerTeX_BlockLookback_IsBase(bool value) const { qscilexertex_blocklookback_isbase = value; }
    inline void setQsciLexerTeX_BlockStart_IsBase(bool value) const { qscilexertex_blockstart_isbase = value; }
    inline void setQsciLexerTeX_BlockStartKeyword_IsBase(bool value) const { qscilexertex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerTeX_BraceStyle_IsBase(bool value) const { qscilexertex_bracestyle_isbase = value; }
    inline void setQsciLexerTeX_CaseSensitive_IsBase(bool value) const { qscilexertex_casesensitive_isbase = value; }
    inline void setQsciLexerTeX_Color_IsBase(bool value) const { qscilexertex_color_isbase = value; }
    inline void setQsciLexerTeX_EolFill_IsBase(bool value) const { qscilexertex_eolfill_isbase = value; }
    inline void setQsciLexerTeX_Font_IsBase(bool value) const { qscilexertex_font_isbase = value; }
    inline void setQsciLexerTeX_IndentationGuideView_IsBase(bool value) const { qscilexertex_indentationguideview_isbase = value; }
    inline void setQsciLexerTeX_Keywords_IsBase(bool value) const { qscilexertex_keywords_isbase = value; }
    inline void setQsciLexerTeX_DefaultStyle_IsBase(bool value) const { qscilexertex_defaultstyle_isbase = value; }
    inline void setQsciLexerTeX_Description_IsBase(bool value) const { qscilexertex_description_isbase = value; }
    inline void setQsciLexerTeX_Paper_IsBase(bool value) const { qscilexertex_paper_isbase = value; }
    inline void setQsciLexerTeX_DefaultColor2_IsBase(bool value) const { qscilexertex_defaultcolor2_isbase = value; }
    inline void setQsciLexerTeX_DefaultEolFill_IsBase(bool value) const { qscilexertex_defaulteolfill_isbase = value; }
    inline void setQsciLexerTeX_DefaultFont2_IsBase(bool value) const { qscilexertex_defaultfont2_isbase = value; }
    inline void setQsciLexerTeX_DefaultPaper2_IsBase(bool value) const { qscilexertex_defaultpaper2_isbase = value; }
    inline void setQsciLexerTeX_SetEditor_IsBase(bool value) const { qscilexertex_seteditor_isbase = value; }
    inline void setQsciLexerTeX_RefreshProperties_IsBase(bool value) const { qscilexertex_refreshproperties_isbase = value; }
    inline void setQsciLexerTeX_StyleBitsNeeded_IsBase(bool value) const { qscilexertex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerTeX_WordCharacters_IsBase(bool value) const { qscilexertex_wordcharacters_isbase = value; }
    inline void setQsciLexerTeX_SetAutoIndentStyle_IsBase(bool value) const { qscilexertex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerTeX_SetColor_IsBase(bool value) const { qscilexertex_setcolor_isbase = value; }
    inline void setQsciLexerTeX_SetEolFill_IsBase(bool value) const { qscilexertex_seteolfill_isbase = value; }
    inline void setQsciLexerTeX_SetFont_IsBase(bool value) const { qscilexertex_setfont_isbase = value; }
    inline void setQsciLexerTeX_SetPaper_IsBase(bool value) const { qscilexertex_setpaper_isbase = value; }
    inline void setQsciLexerTeX_ReadProperties_IsBase(bool value) const { qscilexertex_readproperties_isbase = value; }
    inline void setQsciLexerTeX_WriteProperties_IsBase(bool value) const { qscilexertex_writeproperties_isbase = value; }
    inline void setQsciLexerTeX_Event_IsBase(bool value) const { qscilexertex_event_isbase = value; }
    inline void setQsciLexerTeX_EventFilter_IsBase(bool value) const { qscilexertex_eventfilter_isbase = value; }
    inline void setQsciLexerTeX_TimerEvent_IsBase(bool value) const { qscilexertex_timerevent_isbase = value; }
    inline void setQsciLexerTeX_ChildEvent_IsBase(bool value) const { qscilexertex_childevent_isbase = value; }
    inline void setQsciLexerTeX_CustomEvent_IsBase(bool value) const { qscilexertex_customevent_isbase = value; }
    inline void setQsciLexerTeX_ConnectNotify_IsBase(bool value) const { qscilexertex_connectnotify_isbase = value; }
    inline void setQsciLexerTeX_DisconnectNotify_IsBase(bool value) const { qscilexertex_disconnectnotify_isbase = value; }
    inline void setQsciLexerTeX_TextAsBytes_IsBase(bool value) const { qscilexertex_textasbytes_isbase = value; }
    inline void setQsciLexerTeX_BytesAsText_IsBase(bool value) const { qscilexertex_bytesastext_isbase = value; }
    inline void setQsciLexerTeX_Sender_IsBase(bool value) const { qscilexertex_sender_isbase = value; }
    inline void setQsciLexerTeX_SenderSignalIndex_IsBase(bool value) const { qscilexertex_sendersignalindex_isbase = value; }
    inline void setQsciLexerTeX_Receivers_IsBase(bool value) const { qscilexertex_receivers_isbase = value; }
    inline void setQsciLexerTeX_IsSignalConnected_IsBase(bool value) const { qscilexertex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexertex_metaobject_isbase) {
            qscilexertex_metaobject_isbase = false;
            return QsciLexerTeX::metaObject();
        }
        auto metaobject_cb = qscilexertex_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerTeX::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexertex_metacast_isbase) {
            qscilexertex_metacast_isbase = false;
            return QsciLexerTeX::qt_metacast(param1);
        }
        auto metacast_cb = qscilexertex_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertex_metacall_isbase) {
            qscilexertex_metacall_isbase = false;
            return QsciLexerTeX::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexertex_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexertex_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertex_lexer_isbase) {
            qscilexertex_lexer_isbase = false;
            return QsciLexerTeX::lexer();
        }
        auto lexer_cb = qscilexertex_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerTeX::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertex_lexerid_isbase) {
            qscilexertex_lexerid_isbase = false;
            return QsciLexerTeX::lexerId();
        }
        auto lexerid_cb = qscilexertex_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertex_autocompletionfillups_isbase) {
            qscilexertex_autocompletionfillups_isbase = false;
            return QsciLexerTeX::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexertex_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerTeX::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertex_autocompletionwordseparators_isbase) {
            qscilexertex_autocompletionwordseparators_isbase = false;
            return QsciLexerTeX::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexertex_autocompletionwordseparators_callback;
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
        return QsciLexerTeX::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertex_blockend_isbase) {
            qscilexertex_blockend_isbase = false;
            return QsciLexerTeX::blockEnd(style);
        }
        auto blockend_cb = qscilexertex_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertex_blocklookback_isbase) {
            qscilexertex_blocklookback_isbase = false;
            return QsciLexerTeX::blockLookback();
        }
        auto blocklookback_cb = qscilexertex_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertex_blockstart_isbase) {
            qscilexertex_blockstart_isbase = false;
            return QsciLexerTeX::blockStart(style);
        }
        auto blockstart_cb = qscilexertex_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertex_blockstartkeyword_isbase) {
            qscilexertex_blockstartkeyword_isbase = false;
            return QsciLexerTeX::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexertex_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertex_bracestyle_isbase) {
            qscilexertex_bracestyle_isbase = false;
            return QsciLexerTeX::braceStyle();
        }
        auto bracestyle_cb = qscilexertex_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertex_casesensitive_isbase) {
            qscilexertex_casesensitive_isbase = false;
            return QsciLexerTeX::caseSensitive();
        }
        auto casesensitive_cb = qscilexertex_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerTeX::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertex_color_isbase) {
            qscilexertex_color_isbase = false;
            return QsciLexerTeX::color(style);
        }
        auto color_cb = qscilexertex_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertex_eolfill_isbase) {
            qscilexertex_eolfill_isbase = false;
            return QsciLexerTeX::eolFill(style);
        }
        auto eolfill_cb = qscilexertex_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertex_font_isbase) {
            qscilexertex_font_isbase = false;
            return QsciLexerTeX::font(style);
        }
        auto font_cb = qscilexertex_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertex_indentationguideview_isbase) {
            qscilexertex_indentationguideview_isbase = false;
            return QsciLexerTeX::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexertex_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertex_keywords_isbase) {
            qscilexertex_keywords_isbase = false;
            return QsciLexerTeX::keywords(set);
        }
        auto keywords_cb = qscilexertex_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertex_defaultstyle_isbase) {
            qscilexertex_defaultstyle_isbase = false;
            return QsciLexerTeX::defaultStyle();
        }
        auto defaultstyle_cb = qscilexertex_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexertex_description_callback;
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
        if (qscilexertex_paper_isbase) {
            qscilexertex_paper_isbase = false;
            return QsciLexerTeX::paper(style);
        }
        auto paper_cb = qscilexertex_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertex_defaultcolor2_isbase) {
            qscilexertex_defaultcolor2_isbase = false;
            return QsciLexerTeX::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexertex_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertex_defaulteolfill_isbase) {
            qscilexertex_defaulteolfill_isbase = false;
            return QsciLexerTeX::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexertex_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertex_defaultfont2_isbase) {
            qscilexertex_defaultfont2_isbase = false;
            return QsciLexerTeX::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexertex_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertex_defaultpaper2_isbase) {
            qscilexertex_defaultpaper2_isbase = false;
            return QsciLexerTeX::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexertex_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerTeX::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertex_seteditor_isbase) {
            qscilexertex_seteditor_isbase = false;
            QsciLexerTeX::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexertex_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertex_refreshproperties_isbase) {
            qscilexertex_refreshproperties_isbase = false;
            QsciLexerTeX::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexertex_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerTeX::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertex_stylebitsneeded_isbase) {
            qscilexertex_stylebitsneeded_isbase = false;
            return QsciLexerTeX::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexertex_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertex_wordcharacters_isbase) {
            qscilexertex_wordcharacters_isbase = false;
            return QsciLexerTeX::wordCharacters();
        }
        auto wordcharacters_cb = qscilexertex_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerTeX::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertex_setautoindentstyle_isbase) {
            qscilexertex_setautoindentstyle_isbase = false;
            QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexertex_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertex_setcolor_isbase) {
            qscilexertex_setcolor_isbase = false;
            QsciLexerTeX::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexertex_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertex_seteolfill_isbase) {
            qscilexertex_seteolfill_isbase = false;
            QsciLexerTeX::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexertex_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertex_setfont_isbase) {
            qscilexertex_setfont_isbase = false;
            QsciLexerTeX::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexertex_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertex_setpaper_isbase) {
            qscilexertex_setpaper_isbase = false;
            QsciLexerTeX::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexertex_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertex_readproperties_isbase) {
            qscilexertex_readproperties_isbase = false;
            return QsciLexerTeX::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexertex_readproperties_callback;
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
        return QsciLexerTeX::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertex_writeproperties_isbase) {
            qscilexertex_writeproperties_isbase = false;
            return QsciLexerTeX::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexertex_writeproperties_callback;
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
        return QsciLexerTeX::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertex_event_isbase) {
            qscilexertex_event_isbase = false;
            return QsciLexerTeX::event(event);
        }
        auto event_cb = qscilexertex_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertex_eventfilter_isbase) {
            qscilexertex_eventfilter_isbase = false;
            return QsciLexerTeX::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexertex_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerTeX::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertex_timerevent_isbase) {
            qscilexertex_timerevent_isbase = false;
            QsciLexerTeX::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexertex_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertex_childevent_isbase) {
            qscilexertex_childevent_isbase = false;
            QsciLexerTeX::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexertex_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertex_customevent_isbase) {
            qscilexertex_customevent_isbase = false;
            QsciLexerTeX::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexertex_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_connectnotify_isbase) {
            qscilexertex_connectnotify_isbase = false;
            QsciLexerTeX::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexertex_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_disconnectnotify_isbase) {
            qscilexertex_disconnectnotify_isbase = false;
            QsciLexerTeX::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexertex_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerTeX::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexertex_textasbytes_isbase) {
            qscilexertex_textasbytes_isbase = false;
            return QsciLexerTeX::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexertex_textasbytes_callback;
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
        return QsciLexerTeX::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexertex_bytesastext_isbase) {
            qscilexertex_bytesastext_isbase = false;
            return QsciLexerTeX::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexertex_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerTeX::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexertex_sender_isbase) {
            qscilexertex_sender_isbase = false;
            return QsciLexerTeX::sender();
        }
        auto sender_cb = qscilexertex_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerTeX::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexertex_sendersignalindex_isbase) {
            qscilexertex_sendersignalindex_isbase = false;
            return QsciLexerTeX::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexertex_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexertex_receivers_isbase) {
            qscilexertex_receivers_isbase = false;
            return QsciLexerTeX::receivers(signal);
        }
        auto receivers_cb = qscilexertex_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexertex_issignalconnected_isbase) {
            qscilexertex_issignalconnected_isbase = false;
            return QsciLexerTeX::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexertex_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_SuperReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_SuperWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event);
    friend void QsciLexerTeX_SuperTimerEvent(QsciLexerTeX* self, QTimerEvent* event);
    friend void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event);
    friend void QsciLexerTeX_SuperChildEvent(QsciLexerTeX* self, QChildEvent* event);
    friend void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event);
    friend void QsciLexerTeX_SuperCustomEvent(QsciLexerTeX* self, QEvent* event);
    friend void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_SuperConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_SuperDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerTeX_TextAsBytes(const QsciLexerTeX* self, const libqt_string text);
    friend libqt_string QsciLexerTeX_SuperTextAsBytes(const QsciLexerTeX* self, const libqt_string text);
    friend libqt_string QsciLexerTeX_BytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
    friend libqt_string QsciLexerTeX_SuperBytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
    friend QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self);
    friend QObject* QsciLexerTeX_SuperSender(const QsciLexerTeX* self);
    friend int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self);
    friend int QsciLexerTeX_SuperSenderSignalIndex(const QsciLexerTeX* self);
    friend int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal);
    friend int QsciLexerTeX_SuperReceivers(const QsciLexerTeX* self, const char* signal);
    friend bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
    friend bool QsciLexerTeX_SuperIsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
};

#endif
