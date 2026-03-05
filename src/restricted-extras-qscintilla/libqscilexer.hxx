#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexer so that we can call protected methods
class VirtualQsciLexer : public QsciLexer {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexer = true;

    // Virtual class public types (including callbacks)
    using QsciLexer_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexer_Metacast_Callback = void* (*)(QsciLexer*, const char*);
    using QsciLexer_Metacall_Callback = int (*)(QsciLexer*, int, int, void**);
    using QsciLexer_Language_Callback = const char* (*)();
    using QsciLexer_Lexer_Callback = const char* (*)();
    using QsciLexer_LexerId_Callback = int (*)();
    using QsciLexer_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexer_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexer_BlockEnd_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockLookback_Callback = int (*)();
    using QsciLexer_BlockStart_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockStartKeyword_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BraceStyle_Callback = int (*)();
    using QsciLexer_CaseSensitive_Callback = bool (*)();
    using QsciLexer_Color_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_EolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_Font_Callback = QFont* (*)(const QsciLexer*, int);
    using QsciLexer_IndentationGuideView_Callback = int (*)();
    using QsciLexer_Keywords_Callback = const char* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultStyle_Callback = int (*)();
    using QsciLexer_Description_Callback = const char* (*)(const QsciLexer*, int);
    using QsciLexer_Paper_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultColor2_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultEolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_DefaultFont2_Callback = QFont* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultPaper2_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_SetEditor_Callback = void (*)(QsciLexer*, QsciScintilla*);
    using QsciLexer_RefreshProperties_Callback = void (*)();
    using QsciLexer_StyleBitsNeeded_Callback = int (*)();
    using QsciLexer_WordCharacters_Callback = const char* (*)();
    using QsciLexer_SetAutoIndentStyle_Callback = void (*)(QsciLexer*, int);
    using QsciLexer_SetColor_Callback = void (*)(QsciLexer*, QColor*, int);
    using QsciLexer_SetEolFill_Callback = void (*)(QsciLexer*, bool, int);
    using QsciLexer_SetFont_Callback = void (*)(QsciLexer*, QFont*, int);
    using QsciLexer_SetPaper_Callback = void (*)(QsciLexer*, QColor*, int);
    using QsciLexer_ReadProperties_Callback = bool (*)(QsciLexer*, QSettings*, const char*);
    using QsciLexer_WriteProperties_Callback = bool (*)(const QsciLexer*, QSettings*, const char*);
    using QsciLexer_Event_Callback = bool (*)(QsciLexer*, QEvent*);
    using QsciLexer_EventFilter_Callback = bool (*)(QsciLexer*, QObject*, QEvent*);
    using QsciLexer_TimerEvent_Callback = void (*)(QsciLexer*, QTimerEvent*);
    using QsciLexer_ChildEvent_Callback = void (*)(QsciLexer*, QChildEvent*);
    using QsciLexer_CustomEvent_Callback = void (*)(QsciLexer*, QEvent*);
    using QsciLexer_ConnectNotify_Callback = void (*)(QsciLexer*, QMetaMethod*);
    using QsciLexer_DisconnectNotify_Callback = void (*)(QsciLexer*, QMetaMethod*);
    using QsciLexer_TextAsBytes_Callback = libqt_string (*)(const QsciLexer*, const char*);
    using QsciLexer_BytesAsText_Callback = const char* (*)(const QsciLexer*, const char*, int);
    using QsciLexer_Sender_Callback = QObject* (*)();
    using QsciLexer_SenderSignalIndex_Callback = int (*)();
    using QsciLexer_Receivers_Callback = int (*)(const QsciLexer*, const char*);
    using QsciLexer_IsSignalConnected_Callback = bool (*)(const QsciLexer*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexer_MetaObject_Callback qscilexer_metaobject_callback = nullptr;
    QsciLexer_Metacast_Callback qscilexer_metacast_callback = nullptr;
    QsciLexer_Metacall_Callback qscilexer_metacall_callback = nullptr;
    QsciLexer_Language_Callback qscilexer_language_callback = nullptr;
    QsciLexer_Lexer_Callback qscilexer_lexer_callback = nullptr;
    QsciLexer_LexerId_Callback qscilexer_lexerid_callback = nullptr;
    QsciLexer_AutoCompletionFillups_Callback qscilexer_autocompletionfillups_callback = nullptr;
    QsciLexer_AutoCompletionWordSeparators_Callback qscilexer_autocompletionwordseparators_callback = nullptr;
    QsciLexer_BlockEnd_Callback qscilexer_blockend_callback = nullptr;
    QsciLexer_BlockLookback_Callback qscilexer_blocklookback_callback = nullptr;
    QsciLexer_BlockStart_Callback qscilexer_blockstart_callback = nullptr;
    QsciLexer_BlockStartKeyword_Callback qscilexer_blockstartkeyword_callback = nullptr;
    QsciLexer_BraceStyle_Callback qscilexer_bracestyle_callback = nullptr;
    QsciLexer_CaseSensitive_Callback qscilexer_casesensitive_callback = nullptr;
    QsciLexer_Color_Callback qscilexer_color_callback = nullptr;
    QsciLexer_EolFill_Callback qscilexer_eolfill_callback = nullptr;
    QsciLexer_Font_Callback qscilexer_font_callback = nullptr;
    QsciLexer_IndentationGuideView_Callback qscilexer_indentationguideview_callback = nullptr;
    QsciLexer_Keywords_Callback qscilexer_keywords_callback = nullptr;
    QsciLexer_DefaultStyle_Callback qscilexer_defaultstyle_callback = nullptr;
    QsciLexer_Description_Callback qscilexer_description_callback = nullptr;
    QsciLexer_Paper_Callback qscilexer_paper_callback = nullptr;
    QsciLexer_DefaultColor2_Callback qscilexer_defaultcolor2_callback = nullptr;
    QsciLexer_DefaultEolFill_Callback qscilexer_defaulteolfill_callback = nullptr;
    QsciLexer_DefaultFont2_Callback qscilexer_defaultfont2_callback = nullptr;
    QsciLexer_DefaultPaper2_Callback qscilexer_defaultpaper2_callback = nullptr;
    QsciLexer_SetEditor_Callback qscilexer_seteditor_callback = nullptr;
    QsciLexer_RefreshProperties_Callback qscilexer_refreshproperties_callback = nullptr;
    QsciLexer_StyleBitsNeeded_Callback qscilexer_stylebitsneeded_callback = nullptr;
    QsciLexer_WordCharacters_Callback qscilexer_wordcharacters_callback = nullptr;
    QsciLexer_SetAutoIndentStyle_Callback qscilexer_setautoindentstyle_callback = nullptr;
    QsciLexer_SetColor_Callback qscilexer_setcolor_callback = nullptr;
    QsciLexer_SetEolFill_Callback qscilexer_seteolfill_callback = nullptr;
    QsciLexer_SetFont_Callback qscilexer_setfont_callback = nullptr;
    QsciLexer_SetPaper_Callback qscilexer_setpaper_callback = nullptr;
    QsciLexer_ReadProperties_Callback qscilexer_readproperties_callback = nullptr;
    QsciLexer_WriteProperties_Callback qscilexer_writeproperties_callback = nullptr;
    QsciLexer_Event_Callback qscilexer_event_callback = nullptr;
    QsciLexer_EventFilter_Callback qscilexer_eventfilter_callback = nullptr;
    QsciLexer_TimerEvent_Callback qscilexer_timerevent_callback = nullptr;
    QsciLexer_ChildEvent_Callback qscilexer_childevent_callback = nullptr;
    QsciLexer_CustomEvent_Callback qscilexer_customevent_callback = nullptr;
    QsciLexer_ConnectNotify_Callback qscilexer_connectnotify_callback = nullptr;
    QsciLexer_DisconnectNotify_Callback qscilexer_disconnectnotify_callback = nullptr;
    QsciLexer_TextAsBytes_Callback qscilexer_textasbytes_callback = nullptr;
    QsciLexer_BytesAsText_Callback qscilexer_bytesastext_callback = nullptr;
    QsciLexer_Sender_Callback qscilexer_sender_callback = nullptr;
    QsciLexer_SenderSignalIndex_Callback qscilexer_sendersignalindex_callback = nullptr;
    QsciLexer_Receivers_Callback qscilexer_receivers_callback = nullptr;
    QsciLexer_IsSignalConnected_Callback qscilexer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexer_metaobject_isbase = false;
    mutable bool qscilexer_metacast_isbase = false;
    mutable bool qscilexer_metacall_isbase = false;
    mutable bool qscilexer_language_isbase = false;
    mutable bool qscilexer_lexer_isbase = false;
    mutable bool qscilexer_lexerid_isbase = false;
    mutable bool qscilexer_autocompletionfillups_isbase = false;
    mutable bool qscilexer_autocompletionwordseparators_isbase = false;
    mutable bool qscilexer_blockend_isbase = false;
    mutable bool qscilexer_blocklookback_isbase = false;
    mutable bool qscilexer_blockstart_isbase = false;
    mutable bool qscilexer_blockstartkeyword_isbase = false;
    mutable bool qscilexer_bracestyle_isbase = false;
    mutable bool qscilexer_casesensitive_isbase = false;
    mutable bool qscilexer_color_isbase = false;
    mutable bool qscilexer_eolfill_isbase = false;
    mutable bool qscilexer_font_isbase = false;
    mutable bool qscilexer_indentationguideview_isbase = false;
    mutable bool qscilexer_keywords_isbase = false;
    mutable bool qscilexer_defaultstyle_isbase = false;
    mutable bool qscilexer_description_isbase = false;
    mutable bool qscilexer_paper_isbase = false;
    mutable bool qscilexer_defaultcolor2_isbase = false;
    mutable bool qscilexer_defaulteolfill_isbase = false;
    mutable bool qscilexer_defaultfont2_isbase = false;
    mutable bool qscilexer_defaultpaper2_isbase = false;
    mutable bool qscilexer_seteditor_isbase = false;
    mutable bool qscilexer_refreshproperties_isbase = false;
    mutable bool qscilexer_stylebitsneeded_isbase = false;
    mutable bool qscilexer_wordcharacters_isbase = false;
    mutable bool qscilexer_setautoindentstyle_isbase = false;
    mutable bool qscilexer_setcolor_isbase = false;
    mutable bool qscilexer_seteolfill_isbase = false;
    mutable bool qscilexer_setfont_isbase = false;
    mutable bool qscilexer_setpaper_isbase = false;
    mutable bool qscilexer_readproperties_isbase = false;
    mutable bool qscilexer_writeproperties_isbase = false;
    mutable bool qscilexer_event_isbase = false;
    mutable bool qscilexer_eventfilter_isbase = false;
    mutable bool qscilexer_timerevent_isbase = false;
    mutable bool qscilexer_childevent_isbase = false;
    mutable bool qscilexer_customevent_isbase = false;
    mutable bool qscilexer_connectnotify_isbase = false;
    mutable bool qscilexer_disconnectnotify_isbase = false;
    mutable bool qscilexer_textasbytes_isbase = false;
    mutable bool qscilexer_bytesastext_isbase = false;
    mutable bool qscilexer_sender_isbase = false;
    mutable bool qscilexer_sendersignalindex_isbase = false;
    mutable bool qscilexer_receivers_isbase = false;
    mutable bool qscilexer_issignalconnected_isbase = false;

  public:
    VirtualQsciLexer() : QsciLexer() {};
    VirtualQsciLexer(QObject* parent) : QsciLexer(parent) {};

    // Callback setters
    inline void setQsciLexer_MetaObject_Callback(QsciLexer_MetaObject_Callback cb) { qscilexer_metaobject_callback = cb; }
    inline void setQsciLexer_Metacast_Callback(QsciLexer_Metacast_Callback cb) { qscilexer_metacast_callback = cb; }
    inline void setQsciLexer_Metacall_Callback(QsciLexer_Metacall_Callback cb) { qscilexer_metacall_callback = cb; }
    inline void setQsciLexer_Language_Callback(QsciLexer_Language_Callback cb) { qscilexer_language_callback = cb; }
    inline void setQsciLexer_Lexer_Callback(QsciLexer_Lexer_Callback cb) { qscilexer_lexer_callback = cb; }
    inline void setQsciLexer_LexerId_Callback(QsciLexer_LexerId_Callback cb) { qscilexer_lexerid_callback = cb; }
    inline void setQsciLexer_AutoCompletionFillups_Callback(QsciLexer_AutoCompletionFillups_Callback cb) { qscilexer_autocompletionfillups_callback = cb; }
    inline void setQsciLexer_AutoCompletionWordSeparators_Callback(QsciLexer_AutoCompletionWordSeparators_Callback cb) { qscilexer_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexer_BlockEnd_Callback(QsciLexer_BlockEnd_Callback cb) { qscilexer_blockend_callback = cb; }
    inline void setQsciLexer_BlockLookback_Callback(QsciLexer_BlockLookback_Callback cb) { qscilexer_blocklookback_callback = cb; }
    inline void setQsciLexer_BlockStart_Callback(QsciLexer_BlockStart_Callback cb) { qscilexer_blockstart_callback = cb; }
    inline void setQsciLexer_BlockStartKeyword_Callback(QsciLexer_BlockStartKeyword_Callback cb) { qscilexer_blockstartkeyword_callback = cb; }
    inline void setQsciLexer_BraceStyle_Callback(QsciLexer_BraceStyle_Callback cb) { qscilexer_bracestyle_callback = cb; }
    inline void setQsciLexer_CaseSensitive_Callback(QsciLexer_CaseSensitive_Callback cb) { qscilexer_casesensitive_callback = cb; }
    inline void setQsciLexer_Color_Callback(QsciLexer_Color_Callback cb) { qscilexer_color_callback = cb; }
    inline void setQsciLexer_EolFill_Callback(QsciLexer_EolFill_Callback cb) { qscilexer_eolfill_callback = cb; }
    inline void setQsciLexer_Font_Callback(QsciLexer_Font_Callback cb) { qscilexer_font_callback = cb; }
    inline void setQsciLexer_IndentationGuideView_Callback(QsciLexer_IndentationGuideView_Callback cb) { qscilexer_indentationguideview_callback = cb; }
    inline void setQsciLexer_Keywords_Callback(QsciLexer_Keywords_Callback cb) { qscilexer_keywords_callback = cb; }
    inline void setQsciLexer_DefaultStyle_Callback(QsciLexer_DefaultStyle_Callback cb) { qscilexer_defaultstyle_callback = cb; }
    inline void setQsciLexer_Description_Callback(QsciLexer_Description_Callback cb) { qscilexer_description_callback = cb; }
    inline void setQsciLexer_Paper_Callback(QsciLexer_Paper_Callback cb) { qscilexer_paper_callback = cb; }
    inline void setQsciLexer_DefaultColor2_Callback(QsciLexer_DefaultColor2_Callback cb) { qscilexer_defaultcolor2_callback = cb; }
    inline void setQsciLexer_DefaultEolFill_Callback(QsciLexer_DefaultEolFill_Callback cb) { qscilexer_defaulteolfill_callback = cb; }
    inline void setQsciLexer_DefaultFont2_Callback(QsciLexer_DefaultFont2_Callback cb) { qscilexer_defaultfont2_callback = cb; }
    inline void setQsciLexer_DefaultPaper2_Callback(QsciLexer_DefaultPaper2_Callback cb) { qscilexer_defaultpaper2_callback = cb; }
    inline void setQsciLexer_SetEditor_Callback(QsciLexer_SetEditor_Callback cb) { qscilexer_seteditor_callback = cb; }
    inline void setQsciLexer_RefreshProperties_Callback(QsciLexer_RefreshProperties_Callback cb) { qscilexer_refreshproperties_callback = cb; }
    inline void setQsciLexer_StyleBitsNeeded_Callback(QsciLexer_StyleBitsNeeded_Callback cb) { qscilexer_stylebitsneeded_callback = cb; }
    inline void setQsciLexer_WordCharacters_Callback(QsciLexer_WordCharacters_Callback cb) { qscilexer_wordcharacters_callback = cb; }
    inline void setQsciLexer_SetAutoIndentStyle_Callback(QsciLexer_SetAutoIndentStyle_Callback cb) { qscilexer_setautoindentstyle_callback = cb; }
    inline void setQsciLexer_SetColor_Callback(QsciLexer_SetColor_Callback cb) { qscilexer_setcolor_callback = cb; }
    inline void setQsciLexer_SetEolFill_Callback(QsciLexer_SetEolFill_Callback cb) { qscilexer_seteolfill_callback = cb; }
    inline void setQsciLexer_SetFont_Callback(QsciLexer_SetFont_Callback cb) { qscilexer_setfont_callback = cb; }
    inline void setQsciLexer_SetPaper_Callback(QsciLexer_SetPaper_Callback cb) { qscilexer_setpaper_callback = cb; }
    inline void setQsciLexer_ReadProperties_Callback(QsciLexer_ReadProperties_Callback cb) { qscilexer_readproperties_callback = cb; }
    inline void setQsciLexer_WriteProperties_Callback(QsciLexer_WriteProperties_Callback cb) { qscilexer_writeproperties_callback = cb; }
    inline void setQsciLexer_Event_Callback(QsciLexer_Event_Callback cb) { qscilexer_event_callback = cb; }
    inline void setQsciLexer_EventFilter_Callback(QsciLexer_EventFilter_Callback cb) { qscilexer_eventfilter_callback = cb; }
    inline void setQsciLexer_TimerEvent_Callback(QsciLexer_TimerEvent_Callback cb) { qscilexer_timerevent_callback = cb; }
    inline void setQsciLexer_ChildEvent_Callback(QsciLexer_ChildEvent_Callback cb) { qscilexer_childevent_callback = cb; }
    inline void setQsciLexer_CustomEvent_Callback(QsciLexer_CustomEvent_Callback cb) { qscilexer_customevent_callback = cb; }
    inline void setQsciLexer_ConnectNotify_Callback(QsciLexer_ConnectNotify_Callback cb) { qscilexer_connectnotify_callback = cb; }
    inline void setQsciLexer_DisconnectNotify_Callback(QsciLexer_DisconnectNotify_Callback cb) { qscilexer_disconnectnotify_callback = cb; }
    inline void setQsciLexer_TextAsBytes_Callback(QsciLexer_TextAsBytes_Callback cb) { qscilexer_textasbytes_callback = cb; }
    inline void setQsciLexer_BytesAsText_Callback(QsciLexer_BytesAsText_Callback cb) { qscilexer_bytesastext_callback = cb; }
    inline void setQsciLexer_Sender_Callback(QsciLexer_Sender_Callback cb) { qscilexer_sender_callback = cb; }
    inline void setQsciLexer_SenderSignalIndex_Callback(QsciLexer_SenderSignalIndex_Callback cb) { qscilexer_sendersignalindex_callback = cb; }
    inline void setQsciLexer_Receivers_Callback(QsciLexer_Receivers_Callback cb) { qscilexer_receivers_callback = cb; }
    inline void setQsciLexer_IsSignalConnected_Callback(QsciLexer_IsSignalConnected_Callback cb) { qscilexer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexer_MetaObject_IsBase(bool value) const { qscilexer_metaobject_isbase = value; }
    inline void setQsciLexer_Metacast_IsBase(bool value) const { qscilexer_metacast_isbase = value; }
    inline void setQsciLexer_Metacall_IsBase(bool value) const { qscilexer_metacall_isbase = value; }
    inline void setQsciLexer_Language_IsBase(bool value) const { qscilexer_language_isbase = value; }
    inline void setQsciLexer_Lexer_IsBase(bool value) const { qscilexer_lexer_isbase = value; }
    inline void setQsciLexer_LexerId_IsBase(bool value) const { qscilexer_lexerid_isbase = value; }
    inline void setQsciLexer_AutoCompletionFillups_IsBase(bool value) const { qscilexer_autocompletionfillups_isbase = value; }
    inline void setQsciLexer_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexer_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexer_BlockEnd_IsBase(bool value) const { qscilexer_blockend_isbase = value; }
    inline void setQsciLexer_BlockLookback_IsBase(bool value) const { qscilexer_blocklookback_isbase = value; }
    inline void setQsciLexer_BlockStart_IsBase(bool value) const { qscilexer_blockstart_isbase = value; }
    inline void setQsciLexer_BlockStartKeyword_IsBase(bool value) const { qscilexer_blockstartkeyword_isbase = value; }
    inline void setQsciLexer_BraceStyle_IsBase(bool value) const { qscilexer_bracestyle_isbase = value; }
    inline void setQsciLexer_CaseSensitive_IsBase(bool value) const { qscilexer_casesensitive_isbase = value; }
    inline void setQsciLexer_Color_IsBase(bool value) const { qscilexer_color_isbase = value; }
    inline void setQsciLexer_EolFill_IsBase(bool value) const { qscilexer_eolfill_isbase = value; }
    inline void setQsciLexer_Font_IsBase(bool value) const { qscilexer_font_isbase = value; }
    inline void setQsciLexer_IndentationGuideView_IsBase(bool value) const { qscilexer_indentationguideview_isbase = value; }
    inline void setQsciLexer_Keywords_IsBase(bool value) const { qscilexer_keywords_isbase = value; }
    inline void setQsciLexer_DefaultStyle_IsBase(bool value) const { qscilexer_defaultstyle_isbase = value; }
    inline void setQsciLexer_Description_IsBase(bool value) const { qscilexer_description_isbase = value; }
    inline void setQsciLexer_Paper_IsBase(bool value) const { qscilexer_paper_isbase = value; }
    inline void setQsciLexer_DefaultColor2_IsBase(bool value) const { qscilexer_defaultcolor2_isbase = value; }
    inline void setQsciLexer_DefaultEolFill_IsBase(bool value) const { qscilexer_defaulteolfill_isbase = value; }
    inline void setQsciLexer_DefaultFont2_IsBase(bool value) const { qscilexer_defaultfont2_isbase = value; }
    inline void setQsciLexer_DefaultPaper2_IsBase(bool value) const { qscilexer_defaultpaper2_isbase = value; }
    inline void setQsciLexer_SetEditor_IsBase(bool value) const { qscilexer_seteditor_isbase = value; }
    inline void setQsciLexer_RefreshProperties_IsBase(bool value) const { qscilexer_refreshproperties_isbase = value; }
    inline void setQsciLexer_StyleBitsNeeded_IsBase(bool value) const { qscilexer_stylebitsneeded_isbase = value; }
    inline void setQsciLexer_WordCharacters_IsBase(bool value) const { qscilexer_wordcharacters_isbase = value; }
    inline void setQsciLexer_SetAutoIndentStyle_IsBase(bool value) const { qscilexer_setautoindentstyle_isbase = value; }
    inline void setQsciLexer_SetColor_IsBase(bool value) const { qscilexer_setcolor_isbase = value; }
    inline void setQsciLexer_SetEolFill_IsBase(bool value) const { qscilexer_seteolfill_isbase = value; }
    inline void setQsciLexer_SetFont_IsBase(bool value) const { qscilexer_setfont_isbase = value; }
    inline void setQsciLexer_SetPaper_IsBase(bool value) const { qscilexer_setpaper_isbase = value; }
    inline void setQsciLexer_ReadProperties_IsBase(bool value) const { qscilexer_readproperties_isbase = value; }
    inline void setQsciLexer_WriteProperties_IsBase(bool value) const { qscilexer_writeproperties_isbase = value; }
    inline void setQsciLexer_Event_IsBase(bool value) const { qscilexer_event_isbase = value; }
    inline void setQsciLexer_EventFilter_IsBase(bool value) const { qscilexer_eventfilter_isbase = value; }
    inline void setQsciLexer_TimerEvent_IsBase(bool value) const { qscilexer_timerevent_isbase = value; }
    inline void setQsciLexer_ChildEvent_IsBase(bool value) const { qscilexer_childevent_isbase = value; }
    inline void setQsciLexer_CustomEvent_IsBase(bool value) const { qscilexer_customevent_isbase = value; }
    inline void setQsciLexer_ConnectNotify_IsBase(bool value) const { qscilexer_connectnotify_isbase = value; }
    inline void setQsciLexer_DisconnectNotify_IsBase(bool value) const { qscilexer_disconnectnotify_isbase = value; }
    inline void setQsciLexer_TextAsBytes_IsBase(bool value) const { qscilexer_textasbytes_isbase = value; }
    inline void setQsciLexer_BytesAsText_IsBase(bool value) const { qscilexer_bytesastext_isbase = value; }
    inline void setQsciLexer_Sender_IsBase(bool value) const { qscilexer_sender_isbase = value; }
    inline void setQsciLexer_SenderSignalIndex_IsBase(bool value) const { qscilexer_sendersignalindex_isbase = value; }
    inline void setQsciLexer_Receivers_IsBase(bool value) const { qscilexer_receivers_isbase = value; }
    inline void setQsciLexer_IsSignalConnected_IsBase(bool value) const { qscilexer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexer_metaobject_isbase) {
            qscilexer_metaobject_isbase = false;
            return QsciLexer::metaObject();
        }
        auto metaobject_cb = qscilexer_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexer_metacast_isbase) {
            qscilexer_metacast_isbase = false;
            return QsciLexer::qt_metacast(param1);
        }
        auto metacast_cb = qscilexer_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexer_metacall_isbase) {
            qscilexer_metacall_isbase = false;
            return QsciLexer::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexer_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexer_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexer_lexer_isbase) {
            qscilexer_lexer_isbase = false;
            return QsciLexer::lexer();
        }
        auto lexer_cb = qscilexer_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexer::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexer_lexerid_isbase) {
            qscilexer_lexerid_isbase = false;
            return QsciLexer::lexerId();
        }
        auto lexerid_cb = qscilexer_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexer_autocompletionfillups_isbase) {
            qscilexer_autocompletionfillups_isbase = false;
            return QsciLexer::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexer_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexer::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexer_autocompletionwordseparators_isbase) {
            qscilexer_autocompletionwordseparators_isbase = false;
            return QsciLexer::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexer_autocompletionwordseparators_callback;
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
        return QsciLexer::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexer_blockend_isbase) {
            qscilexer_blockend_isbase = false;
            return QsciLexer::blockEnd(style);
        }
        auto blockend_cb = qscilexer_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexer_blocklookback_isbase) {
            qscilexer_blocklookback_isbase = false;
            return QsciLexer::blockLookback();
        }
        auto blocklookback_cb = qscilexer_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexer_blockstart_isbase) {
            qscilexer_blockstart_isbase = false;
            return QsciLexer::blockStart(style);
        }
        auto blockstart_cb = qscilexer_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexer_blockstartkeyword_isbase) {
            qscilexer_blockstartkeyword_isbase = false;
            return QsciLexer::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexer_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexer_bracestyle_isbase) {
            qscilexer_bracestyle_isbase = false;
            return QsciLexer::braceStyle();
        }
        auto bracestyle_cb = qscilexer_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexer_casesensitive_isbase) {
            qscilexer_casesensitive_isbase = false;
            return QsciLexer::caseSensitive();
        }
        auto casesensitive_cb = qscilexer_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexer::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexer_color_isbase) {
            qscilexer_color_isbase = false;
            return QsciLexer::color(style);
        }
        auto color_cb = qscilexer_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexer_eolfill_isbase) {
            qscilexer_eolfill_isbase = false;
            return QsciLexer::eolFill(style);
        }
        auto eolfill_cb = qscilexer_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexer_font_isbase) {
            qscilexer_font_isbase = false;
            return QsciLexer::font(style);
        }
        auto font_cb = qscilexer_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexer_indentationguideview_isbase) {
            qscilexer_indentationguideview_isbase = false;
            return QsciLexer::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexer_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexer_keywords_isbase) {
            qscilexer_keywords_isbase = false;
            return QsciLexer::keywords(set);
        }
        auto keywords_cb = qscilexer_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexer_defaultstyle_isbase) {
            qscilexer_defaultstyle_isbase = false;
            return QsciLexer::defaultStyle();
        }
        auto defaultstyle_cb = qscilexer_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexer_description_callback;
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
        if (qscilexer_paper_isbase) {
            qscilexer_paper_isbase = false;
            return QsciLexer::paper(style);
        }
        auto paper_cb = qscilexer_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexer_defaultcolor2_isbase) {
            qscilexer_defaultcolor2_isbase = false;
            return QsciLexer::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexer_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexer_defaulteolfill_isbase) {
            qscilexer_defaulteolfill_isbase = false;
            return QsciLexer::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexer_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexer_defaultfont2_isbase) {
            qscilexer_defaultfont2_isbase = false;
            return QsciLexer::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexer_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexer_defaultpaper2_isbase) {
            qscilexer_defaultpaper2_isbase = false;
            return QsciLexer::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexer_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexer::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexer_seteditor_isbase) {
            qscilexer_seteditor_isbase = false;
            QsciLexer::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexer_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexer::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexer_refreshproperties_isbase) {
            qscilexer_refreshproperties_isbase = false;
            QsciLexer::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexer_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexer::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexer_stylebitsneeded_isbase) {
            qscilexer_stylebitsneeded_isbase = false;
            return QsciLexer::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexer_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexer_wordcharacters_isbase) {
            qscilexer_wordcharacters_isbase = false;
            return QsciLexer::wordCharacters();
        }
        auto wordcharacters_cb = qscilexer_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexer::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexer_setautoindentstyle_isbase) {
            qscilexer_setautoindentstyle_isbase = false;
            QsciLexer::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexer_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexer::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexer_setcolor_isbase) {
            qscilexer_setcolor_isbase = false;
            QsciLexer::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexer_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexer_seteolfill_isbase) {
            qscilexer_seteolfill_isbase = false;
            QsciLexer::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexer_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexer_setfont_isbase) {
            qscilexer_setfont_isbase = false;
            QsciLexer::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexer_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexer_setpaper_isbase) {
            qscilexer_setpaper_isbase = false;
            QsciLexer::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexer_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexer_readproperties_isbase) {
            qscilexer_readproperties_isbase = false;
            return QsciLexer::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexer_readproperties_callback;
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
        return QsciLexer::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexer_writeproperties_isbase) {
            qscilexer_writeproperties_isbase = false;
            return QsciLexer::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexer_writeproperties_callback;
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
        return QsciLexer::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexer_event_isbase) {
            qscilexer_event_isbase = false;
            return QsciLexer::event(event);
        }
        auto event_cb = qscilexer_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexer_eventfilter_isbase) {
            qscilexer_eventfilter_isbase = false;
            return QsciLexer::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexer_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexer_timerevent_isbase) {
            qscilexer_timerevent_isbase = false;
            QsciLexer::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexer_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexer_childevent_isbase) {
            qscilexer_childevent_isbase = false;
            QsciLexer::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexer_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexer_customevent_isbase) {
            qscilexer_customevent_isbase = false;
            QsciLexer::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexer_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexer_connectnotify_isbase) {
            qscilexer_connectnotify_isbase = false;
            QsciLexer::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexer_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexer_disconnectnotify_isbase) {
            qscilexer_disconnectnotify_isbase = false;
            QsciLexer::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexer_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexer::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexer_textasbytes_isbase) {
            qscilexer_textasbytes_isbase = false;
            return QsciLexer::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexer_textasbytes_callback;
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
        return QsciLexer::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexer_bytesastext_isbase) {
            qscilexer_bytesastext_isbase = false;
            return QsciLexer::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexer_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexer::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexer_sender_isbase) {
            qscilexer_sender_isbase = false;
            return QsciLexer::sender();
        }
        auto sender_cb = qscilexer_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexer::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexer_sendersignalindex_isbase) {
            qscilexer_sendersignalindex_isbase = false;
            return QsciLexer::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexer_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexer_receivers_isbase) {
            qscilexer_receivers_isbase = false;
            return QsciLexer::receivers(signal);
        }
        auto receivers_cb = qscilexer_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexer_issignalconnected_isbase) {
            qscilexer_issignalconnected_isbase = false;
            return QsciLexer::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexer_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexer_ReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexer_SuperReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexer_WriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexer_SuperWriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexer_TimerEvent(QsciLexer* self, QTimerEvent* event);
    friend void QsciLexer_SuperTimerEvent(QsciLexer* self, QTimerEvent* event);
    friend void QsciLexer_ChildEvent(QsciLexer* self, QChildEvent* event);
    friend void QsciLexer_SuperChildEvent(QsciLexer* self, QChildEvent* event);
    friend void QsciLexer_CustomEvent(QsciLexer* self, QEvent* event);
    friend void QsciLexer_SuperCustomEvent(QsciLexer* self, QEvent* event);
    friend void QsciLexer_ConnectNotify(QsciLexer* self, const QMetaMethod* signal);
    friend void QsciLexer_SuperConnectNotify(QsciLexer* self, const QMetaMethod* signal);
    friend void QsciLexer_DisconnectNotify(QsciLexer* self, const QMetaMethod* signal);
    friend void QsciLexer_SuperDisconnectNotify(QsciLexer* self, const QMetaMethod* signal);
    friend libqt_string QsciLexer_TextAsBytes(const QsciLexer* self, const libqt_string text);
    friend libqt_string QsciLexer_SuperTextAsBytes(const QsciLexer* self, const libqt_string text);
    friend libqt_string QsciLexer_BytesAsText(const QsciLexer* self, const char* bytes, int size);
    friend libqt_string QsciLexer_SuperBytesAsText(const QsciLexer* self, const char* bytes, int size);
    friend QObject* QsciLexer_Sender(const QsciLexer* self);
    friend QObject* QsciLexer_SuperSender(const QsciLexer* self);
    friend int QsciLexer_SenderSignalIndex(const QsciLexer* self);
    friend int QsciLexer_SuperSenderSignalIndex(const QsciLexer* self);
    friend int QsciLexer_Receivers(const QsciLexer* self, const char* signal);
    friend int QsciLexer_SuperReceivers(const QsciLexer* self, const char* signal);
    friend bool QsciLexer_IsSignalConnected(const QsciLexer* self, const QMetaMethod* signal);
    friend bool QsciLexer_SuperIsSignalConnected(const QsciLexer* self, const QMetaMethod* signal);
};

#endif
