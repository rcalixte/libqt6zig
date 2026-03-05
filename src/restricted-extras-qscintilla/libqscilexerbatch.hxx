#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBATCH_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERBATCH_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerBatch so that we can call protected methods
class VirtualQsciLexerBatch final : public QsciLexerBatch {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerBatch = true;

    // Virtual class public types (including callbacks)
    using QsciLexerBatch_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerBatch_Metacast_Callback = void* (*)(QsciLexerBatch*, const char*);
    using QsciLexerBatch_Metacall_Callback = int (*)(QsciLexerBatch*, int, int, void**);
    using QsciLexerBatch_Language_Callback = const char* (*)();
    using QsciLexerBatch_Lexer_Callback = const char* (*)();
    using QsciLexerBatch_LexerId_Callback = int (*)();
    using QsciLexerBatch_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerBatch_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerBatch_BlockEnd_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockLookback_Callback = int (*)();
    using QsciLexerBatch_BlockStart_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockStartKeyword_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BraceStyle_Callback = int (*)();
    using QsciLexerBatch_CaseSensitive_Callback = bool (*)();
    using QsciLexerBatch_Color_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_EolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Font_Callback = QFont* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_IndentationGuideView_Callback = int (*)();
    using QsciLexerBatch_Keywords_Callback = const char* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultStyle_Callback = int (*)();
    using QsciLexerBatch_Description_Callback = const char* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Paper_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultColor2_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultEolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultFont2_Callback = QFont* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultPaper2_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_SetEditor_Callback = void (*)(QsciLexerBatch*, QsciScintilla*);
    using QsciLexerBatch_RefreshProperties_Callback = void (*)();
    using QsciLexerBatch_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerBatch_WordCharacters_Callback = const char* (*)();
    using QsciLexerBatch_SetAutoIndentStyle_Callback = void (*)(QsciLexerBatch*, int);
    using QsciLexerBatch_SetColor_Callback = void (*)(QsciLexerBatch*, QColor*, int);
    using QsciLexerBatch_SetEolFill_Callback = void (*)(QsciLexerBatch*, bool, int);
    using QsciLexerBatch_SetFont_Callback = void (*)(QsciLexerBatch*, QFont*, int);
    using QsciLexerBatch_SetPaper_Callback = void (*)(QsciLexerBatch*, QColor*, int);
    using QsciLexerBatch_ReadProperties_Callback = bool (*)(QsciLexerBatch*, QSettings*, const char*);
    using QsciLexerBatch_WriteProperties_Callback = bool (*)(const QsciLexerBatch*, QSettings*, const char*);
    using QsciLexerBatch_Event_Callback = bool (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_EventFilter_Callback = bool (*)(QsciLexerBatch*, QObject*, QEvent*);
    using QsciLexerBatch_TimerEvent_Callback = void (*)(QsciLexerBatch*, QTimerEvent*);
    using QsciLexerBatch_ChildEvent_Callback = void (*)(QsciLexerBatch*, QChildEvent*);
    using QsciLexerBatch_CustomEvent_Callback = void (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_ConnectNotify_Callback = void (*)(QsciLexerBatch*, QMetaMethod*);
    using QsciLexerBatch_DisconnectNotify_Callback = void (*)(QsciLexerBatch*, QMetaMethod*);
    using QsciLexerBatch_TextAsBytes_Callback = libqt_string (*)(const QsciLexerBatch*, const char*);
    using QsciLexerBatch_BytesAsText_Callback = const char* (*)(const QsciLexerBatch*, const char*, int);
    using QsciLexerBatch_Sender_Callback = QObject* (*)();
    using QsciLexerBatch_SenderSignalIndex_Callback = int (*)();
    using QsciLexerBatch_Receivers_Callback = int (*)(const QsciLexerBatch*, const char*);
    using QsciLexerBatch_IsSignalConnected_Callback = bool (*)(const QsciLexerBatch*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerBatch_MetaObject_Callback qscilexerbatch_metaobject_callback = nullptr;
    QsciLexerBatch_Metacast_Callback qscilexerbatch_metacast_callback = nullptr;
    QsciLexerBatch_Metacall_Callback qscilexerbatch_metacall_callback = nullptr;
    QsciLexerBatch_Language_Callback qscilexerbatch_language_callback = nullptr;
    QsciLexerBatch_Lexer_Callback qscilexerbatch_lexer_callback = nullptr;
    QsciLexerBatch_LexerId_Callback qscilexerbatch_lexerid_callback = nullptr;
    QsciLexerBatch_AutoCompletionFillups_Callback qscilexerbatch_autocompletionfillups_callback = nullptr;
    QsciLexerBatch_AutoCompletionWordSeparators_Callback qscilexerbatch_autocompletionwordseparators_callback = nullptr;
    QsciLexerBatch_BlockEnd_Callback qscilexerbatch_blockend_callback = nullptr;
    QsciLexerBatch_BlockLookback_Callback qscilexerbatch_blocklookback_callback = nullptr;
    QsciLexerBatch_BlockStart_Callback qscilexerbatch_blockstart_callback = nullptr;
    QsciLexerBatch_BlockStartKeyword_Callback qscilexerbatch_blockstartkeyword_callback = nullptr;
    QsciLexerBatch_BraceStyle_Callback qscilexerbatch_bracestyle_callback = nullptr;
    QsciLexerBatch_CaseSensitive_Callback qscilexerbatch_casesensitive_callback = nullptr;
    QsciLexerBatch_Color_Callback qscilexerbatch_color_callback = nullptr;
    QsciLexerBatch_EolFill_Callback qscilexerbatch_eolfill_callback = nullptr;
    QsciLexerBatch_Font_Callback qscilexerbatch_font_callback = nullptr;
    QsciLexerBatch_IndentationGuideView_Callback qscilexerbatch_indentationguideview_callback = nullptr;
    QsciLexerBatch_Keywords_Callback qscilexerbatch_keywords_callback = nullptr;
    QsciLexerBatch_DefaultStyle_Callback qscilexerbatch_defaultstyle_callback = nullptr;
    QsciLexerBatch_Description_Callback qscilexerbatch_description_callback = nullptr;
    QsciLexerBatch_Paper_Callback qscilexerbatch_paper_callback = nullptr;
    QsciLexerBatch_DefaultColor2_Callback qscilexerbatch_defaultcolor2_callback = nullptr;
    QsciLexerBatch_DefaultEolFill_Callback qscilexerbatch_defaulteolfill_callback = nullptr;
    QsciLexerBatch_DefaultFont2_Callback qscilexerbatch_defaultfont2_callback = nullptr;
    QsciLexerBatch_DefaultPaper2_Callback qscilexerbatch_defaultpaper2_callback = nullptr;
    QsciLexerBatch_SetEditor_Callback qscilexerbatch_seteditor_callback = nullptr;
    QsciLexerBatch_RefreshProperties_Callback qscilexerbatch_refreshproperties_callback = nullptr;
    QsciLexerBatch_StyleBitsNeeded_Callback qscilexerbatch_stylebitsneeded_callback = nullptr;
    QsciLexerBatch_WordCharacters_Callback qscilexerbatch_wordcharacters_callback = nullptr;
    QsciLexerBatch_SetAutoIndentStyle_Callback qscilexerbatch_setautoindentstyle_callback = nullptr;
    QsciLexerBatch_SetColor_Callback qscilexerbatch_setcolor_callback = nullptr;
    QsciLexerBatch_SetEolFill_Callback qscilexerbatch_seteolfill_callback = nullptr;
    QsciLexerBatch_SetFont_Callback qscilexerbatch_setfont_callback = nullptr;
    QsciLexerBatch_SetPaper_Callback qscilexerbatch_setpaper_callback = nullptr;
    QsciLexerBatch_ReadProperties_Callback qscilexerbatch_readproperties_callback = nullptr;
    QsciLexerBatch_WriteProperties_Callback qscilexerbatch_writeproperties_callback = nullptr;
    QsciLexerBatch_Event_Callback qscilexerbatch_event_callback = nullptr;
    QsciLexerBatch_EventFilter_Callback qscilexerbatch_eventfilter_callback = nullptr;
    QsciLexerBatch_TimerEvent_Callback qscilexerbatch_timerevent_callback = nullptr;
    QsciLexerBatch_ChildEvent_Callback qscilexerbatch_childevent_callback = nullptr;
    QsciLexerBatch_CustomEvent_Callback qscilexerbatch_customevent_callback = nullptr;
    QsciLexerBatch_ConnectNotify_Callback qscilexerbatch_connectnotify_callback = nullptr;
    QsciLexerBatch_DisconnectNotify_Callback qscilexerbatch_disconnectnotify_callback = nullptr;
    QsciLexerBatch_TextAsBytes_Callback qscilexerbatch_textasbytes_callback = nullptr;
    QsciLexerBatch_BytesAsText_Callback qscilexerbatch_bytesastext_callback = nullptr;
    QsciLexerBatch_Sender_Callback qscilexerbatch_sender_callback = nullptr;
    QsciLexerBatch_SenderSignalIndex_Callback qscilexerbatch_sendersignalindex_callback = nullptr;
    QsciLexerBatch_Receivers_Callback qscilexerbatch_receivers_callback = nullptr;
    QsciLexerBatch_IsSignalConnected_Callback qscilexerbatch_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerbatch_metaobject_isbase = false;
    mutable bool qscilexerbatch_metacast_isbase = false;
    mutable bool qscilexerbatch_metacall_isbase = false;
    mutable bool qscilexerbatch_language_isbase = false;
    mutable bool qscilexerbatch_lexer_isbase = false;
    mutable bool qscilexerbatch_lexerid_isbase = false;
    mutable bool qscilexerbatch_autocompletionfillups_isbase = false;
    mutable bool qscilexerbatch_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerbatch_blockend_isbase = false;
    mutable bool qscilexerbatch_blocklookback_isbase = false;
    mutable bool qscilexerbatch_blockstart_isbase = false;
    mutable bool qscilexerbatch_blockstartkeyword_isbase = false;
    mutable bool qscilexerbatch_bracestyle_isbase = false;
    mutable bool qscilexerbatch_casesensitive_isbase = false;
    mutable bool qscilexerbatch_color_isbase = false;
    mutable bool qscilexerbatch_eolfill_isbase = false;
    mutable bool qscilexerbatch_font_isbase = false;
    mutable bool qscilexerbatch_indentationguideview_isbase = false;
    mutable bool qscilexerbatch_keywords_isbase = false;
    mutable bool qscilexerbatch_defaultstyle_isbase = false;
    mutable bool qscilexerbatch_description_isbase = false;
    mutable bool qscilexerbatch_paper_isbase = false;
    mutable bool qscilexerbatch_defaultcolor2_isbase = false;
    mutable bool qscilexerbatch_defaulteolfill_isbase = false;
    mutable bool qscilexerbatch_defaultfont2_isbase = false;
    mutable bool qscilexerbatch_defaultpaper2_isbase = false;
    mutable bool qscilexerbatch_seteditor_isbase = false;
    mutable bool qscilexerbatch_refreshproperties_isbase = false;
    mutable bool qscilexerbatch_stylebitsneeded_isbase = false;
    mutable bool qscilexerbatch_wordcharacters_isbase = false;
    mutable bool qscilexerbatch_setautoindentstyle_isbase = false;
    mutable bool qscilexerbatch_setcolor_isbase = false;
    mutable bool qscilexerbatch_seteolfill_isbase = false;
    mutable bool qscilexerbatch_setfont_isbase = false;
    mutable bool qscilexerbatch_setpaper_isbase = false;
    mutable bool qscilexerbatch_readproperties_isbase = false;
    mutable bool qscilexerbatch_writeproperties_isbase = false;
    mutable bool qscilexerbatch_event_isbase = false;
    mutable bool qscilexerbatch_eventfilter_isbase = false;
    mutable bool qscilexerbatch_timerevent_isbase = false;
    mutable bool qscilexerbatch_childevent_isbase = false;
    mutable bool qscilexerbatch_customevent_isbase = false;
    mutable bool qscilexerbatch_connectnotify_isbase = false;
    mutable bool qscilexerbatch_disconnectnotify_isbase = false;
    mutable bool qscilexerbatch_textasbytes_isbase = false;
    mutable bool qscilexerbatch_bytesastext_isbase = false;
    mutable bool qscilexerbatch_sender_isbase = false;
    mutable bool qscilexerbatch_sendersignalindex_isbase = false;
    mutable bool qscilexerbatch_receivers_isbase = false;
    mutable bool qscilexerbatch_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerBatch() : QsciLexerBatch() {};
    VirtualQsciLexerBatch(QObject* parent) : QsciLexerBatch(parent) {};

    // Callback setters
    inline void setQsciLexerBatch_MetaObject_Callback(QsciLexerBatch_MetaObject_Callback cb) { qscilexerbatch_metaobject_callback = cb; }
    inline void setQsciLexerBatch_Metacast_Callback(QsciLexerBatch_Metacast_Callback cb) { qscilexerbatch_metacast_callback = cb; }
    inline void setQsciLexerBatch_Metacall_Callback(QsciLexerBatch_Metacall_Callback cb) { qscilexerbatch_metacall_callback = cb; }
    inline void setQsciLexerBatch_Language_Callback(QsciLexerBatch_Language_Callback cb) { qscilexerbatch_language_callback = cb; }
    inline void setQsciLexerBatch_Lexer_Callback(QsciLexerBatch_Lexer_Callback cb) { qscilexerbatch_lexer_callback = cb; }
    inline void setQsciLexerBatch_LexerId_Callback(QsciLexerBatch_LexerId_Callback cb) { qscilexerbatch_lexerid_callback = cb; }
    inline void setQsciLexerBatch_AutoCompletionFillups_Callback(QsciLexerBatch_AutoCompletionFillups_Callback cb) { qscilexerbatch_autocompletionfillups_callback = cb; }
    inline void setQsciLexerBatch_AutoCompletionWordSeparators_Callback(QsciLexerBatch_AutoCompletionWordSeparators_Callback cb) { qscilexerbatch_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerBatch_BlockEnd_Callback(QsciLexerBatch_BlockEnd_Callback cb) { qscilexerbatch_blockend_callback = cb; }
    inline void setQsciLexerBatch_BlockLookback_Callback(QsciLexerBatch_BlockLookback_Callback cb) { qscilexerbatch_blocklookback_callback = cb; }
    inline void setQsciLexerBatch_BlockStart_Callback(QsciLexerBatch_BlockStart_Callback cb) { qscilexerbatch_blockstart_callback = cb; }
    inline void setQsciLexerBatch_BlockStartKeyword_Callback(QsciLexerBatch_BlockStartKeyword_Callback cb) { qscilexerbatch_blockstartkeyword_callback = cb; }
    inline void setQsciLexerBatch_BraceStyle_Callback(QsciLexerBatch_BraceStyle_Callback cb) { qscilexerbatch_bracestyle_callback = cb; }
    inline void setQsciLexerBatch_CaseSensitive_Callback(QsciLexerBatch_CaseSensitive_Callback cb) { qscilexerbatch_casesensitive_callback = cb; }
    inline void setQsciLexerBatch_Color_Callback(QsciLexerBatch_Color_Callback cb) { qscilexerbatch_color_callback = cb; }
    inline void setQsciLexerBatch_EolFill_Callback(QsciLexerBatch_EolFill_Callback cb) { qscilexerbatch_eolfill_callback = cb; }
    inline void setQsciLexerBatch_Font_Callback(QsciLexerBatch_Font_Callback cb) { qscilexerbatch_font_callback = cb; }
    inline void setQsciLexerBatch_IndentationGuideView_Callback(QsciLexerBatch_IndentationGuideView_Callback cb) { qscilexerbatch_indentationguideview_callback = cb; }
    inline void setQsciLexerBatch_Keywords_Callback(QsciLexerBatch_Keywords_Callback cb) { qscilexerbatch_keywords_callback = cb; }
    inline void setQsciLexerBatch_DefaultStyle_Callback(QsciLexerBatch_DefaultStyle_Callback cb) { qscilexerbatch_defaultstyle_callback = cb; }
    inline void setQsciLexerBatch_Description_Callback(QsciLexerBatch_Description_Callback cb) { qscilexerbatch_description_callback = cb; }
    inline void setQsciLexerBatch_Paper_Callback(QsciLexerBatch_Paper_Callback cb) { qscilexerbatch_paper_callback = cb; }
    inline void setQsciLexerBatch_DefaultColor2_Callback(QsciLexerBatch_DefaultColor2_Callback cb) { qscilexerbatch_defaultcolor2_callback = cb; }
    inline void setQsciLexerBatch_DefaultEolFill_Callback(QsciLexerBatch_DefaultEolFill_Callback cb) { qscilexerbatch_defaulteolfill_callback = cb; }
    inline void setQsciLexerBatch_DefaultFont2_Callback(QsciLexerBatch_DefaultFont2_Callback cb) { qscilexerbatch_defaultfont2_callback = cb; }
    inline void setQsciLexerBatch_DefaultPaper2_Callback(QsciLexerBatch_DefaultPaper2_Callback cb) { qscilexerbatch_defaultpaper2_callback = cb; }
    inline void setQsciLexerBatch_SetEditor_Callback(QsciLexerBatch_SetEditor_Callback cb) { qscilexerbatch_seteditor_callback = cb; }
    inline void setQsciLexerBatch_RefreshProperties_Callback(QsciLexerBatch_RefreshProperties_Callback cb) { qscilexerbatch_refreshproperties_callback = cb; }
    inline void setQsciLexerBatch_StyleBitsNeeded_Callback(QsciLexerBatch_StyleBitsNeeded_Callback cb) { qscilexerbatch_stylebitsneeded_callback = cb; }
    inline void setQsciLexerBatch_WordCharacters_Callback(QsciLexerBatch_WordCharacters_Callback cb) { qscilexerbatch_wordcharacters_callback = cb; }
    inline void setQsciLexerBatch_SetAutoIndentStyle_Callback(QsciLexerBatch_SetAutoIndentStyle_Callback cb) { qscilexerbatch_setautoindentstyle_callback = cb; }
    inline void setQsciLexerBatch_SetColor_Callback(QsciLexerBatch_SetColor_Callback cb) { qscilexerbatch_setcolor_callback = cb; }
    inline void setQsciLexerBatch_SetEolFill_Callback(QsciLexerBatch_SetEolFill_Callback cb) { qscilexerbatch_seteolfill_callback = cb; }
    inline void setQsciLexerBatch_SetFont_Callback(QsciLexerBatch_SetFont_Callback cb) { qscilexerbatch_setfont_callback = cb; }
    inline void setQsciLexerBatch_SetPaper_Callback(QsciLexerBatch_SetPaper_Callback cb) { qscilexerbatch_setpaper_callback = cb; }
    inline void setQsciLexerBatch_ReadProperties_Callback(QsciLexerBatch_ReadProperties_Callback cb) { qscilexerbatch_readproperties_callback = cb; }
    inline void setQsciLexerBatch_WriteProperties_Callback(QsciLexerBatch_WriteProperties_Callback cb) { qscilexerbatch_writeproperties_callback = cb; }
    inline void setQsciLexerBatch_Event_Callback(QsciLexerBatch_Event_Callback cb) { qscilexerbatch_event_callback = cb; }
    inline void setQsciLexerBatch_EventFilter_Callback(QsciLexerBatch_EventFilter_Callback cb) { qscilexerbatch_eventfilter_callback = cb; }
    inline void setQsciLexerBatch_TimerEvent_Callback(QsciLexerBatch_TimerEvent_Callback cb) { qscilexerbatch_timerevent_callback = cb; }
    inline void setQsciLexerBatch_ChildEvent_Callback(QsciLexerBatch_ChildEvent_Callback cb) { qscilexerbatch_childevent_callback = cb; }
    inline void setQsciLexerBatch_CustomEvent_Callback(QsciLexerBatch_CustomEvent_Callback cb) { qscilexerbatch_customevent_callback = cb; }
    inline void setQsciLexerBatch_ConnectNotify_Callback(QsciLexerBatch_ConnectNotify_Callback cb) { qscilexerbatch_connectnotify_callback = cb; }
    inline void setQsciLexerBatch_DisconnectNotify_Callback(QsciLexerBatch_DisconnectNotify_Callback cb) { qscilexerbatch_disconnectnotify_callback = cb; }
    inline void setQsciLexerBatch_TextAsBytes_Callback(QsciLexerBatch_TextAsBytes_Callback cb) { qscilexerbatch_textasbytes_callback = cb; }
    inline void setQsciLexerBatch_BytesAsText_Callback(QsciLexerBatch_BytesAsText_Callback cb) { qscilexerbatch_bytesastext_callback = cb; }
    inline void setQsciLexerBatch_Sender_Callback(QsciLexerBatch_Sender_Callback cb) { qscilexerbatch_sender_callback = cb; }
    inline void setQsciLexerBatch_SenderSignalIndex_Callback(QsciLexerBatch_SenderSignalIndex_Callback cb) { qscilexerbatch_sendersignalindex_callback = cb; }
    inline void setQsciLexerBatch_Receivers_Callback(QsciLexerBatch_Receivers_Callback cb) { qscilexerbatch_receivers_callback = cb; }
    inline void setQsciLexerBatch_IsSignalConnected_Callback(QsciLexerBatch_IsSignalConnected_Callback cb) { qscilexerbatch_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerBatch_MetaObject_IsBase(bool value) const { qscilexerbatch_metaobject_isbase = value; }
    inline void setQsciLexerBatch_Metacast_IsBase(bool value) const { qscilexerbatch_metacast_isbase = value; }
    inline void setQsciLexerBatch_Metacall_IsBase(bool value) const { qscilexerbatch_metacall_isbase = value; }
    inline void setQsciLexerBatch_Language_IsBase(bool value) const { qscilexerbatch_language_isbase = value; }
    inline void setQsciLexerBatch_Lexer_IsBase(bool value) const { qscilexerbatch_lexer_isbase = value; }
    inline void setQsciLexerBatch_LexerId_IsBase(bool value) const { qscilexerbatch_lexerid_isbase = value; }
    inline void setQsciLexerBatch_AutoCompletionFillups_IsBase(bool value) const { qscilexerbatch_autocompletionfillups_isbase = value; }
    inline void setQsciLexerBatch_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerbatch_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerBatch_BlockEnd_IsBase(bool value) const { qscilexerbatch_blockend_isbase = value; }
    inline void setQsciLexerBatch_BlockLookback_IsBase(bool value) const { qscilexerbatch_blocklookback_isbase = value; }
    inline void setQsciLexerBatch_BlockStart_IsBase(bool value) const { qscilexerbatch_blockstart_isbase = value; }
    inline void setQsciLexerBatch_BlockStartKeyword_IsBase(bool value) const { qscilexerbatch_blockstartkeyword_isbase = value; }
    inline void setQsciLexerBatch_BraceStyle_IsBase(bool value) const { qscilexerbatch_bracestyle_isbase = value; }
    inline void setQsciLexerBatch_CaseSensitive_IsBase(bool value) const { qscilexerbatch_casesensitive_isbase = value; }
    inline void setQsciLexerBatch_Color_IsBase(bool value) const { qscilexerbatch_color_isbase = value; }
    inline void setQsciLexerBatch_EolFill_IsBase(bool value) const { qscilexerbatch_eolfill_isbase = value; }
    inline void setQsciLexerBatch_Font_IsBase(bool value) const { qscilexerbatch_font_isbase = value; }
    inline void setQsciLexerBatch_IndentationGuideView_IsBase(bool value) const { qscilexerbatch_indentationguideview_isbase = value; }
    inline void setQsciLexerBatch_Keywords_IsBase(bool value) const { qscilexerbatch_keywords_isbase = value; }
    inline void setQsciLexerBatch_DefaultStyle_IsBase(bool value) const { qscilexerbatch_defaultstyle_isbase = value; }
    inline void setQsciLexerBatch_Description_IsBase(bool value) const { qscilexerbatch_description_isbase = value; }
    inline void setQsciLexerBatch_Paper_IsBase(bool value) const { qscilexerbatch_paper_isbase = value; }
    inline void setQsciLexerBatch_DefaultColor2_IsBase(bool value) const { qscilexerbatch_defaultcolor2_isbase = value; }
    inline void setQsciLexerBatch_DefaultEolFill_IsBase(bool value) const { qscilexerbatch_defaulteolfill_isbase = value; }
    inline void setQsciLexerBatch_DefaultFont2_IsBase(bool value) const { qscilexerbatch_defaultfont2_isbase = value; }
    inline void setQsciLexerBatch_DefaultPaper2_IsBase(bool value) const { qscilexerbatch_defaultpaper2_isbase = value; }
    inline void setQsciLexerBatch_SetEditor_IsBase(bool value) const { qscilexerbatch_seteditor_isbase = value; }
    inline void setQsciLexerBatch_RefreshProperties_IsBase(bool value) const { qscilexerbatch_refreshproperties_isbase = value; }
    inline void setQsciLexerBatch_StyleBitsNeeded_IsBase(bool value) const { qscilexerbatch_stylebitsneeded_isbase = value; }
    inline void setQsciLexerBatch_WordCharacters_IsBase(bool value) const { qscilexerbatch_wordcharacters_isbase = value; }
    inline void setQsciLexerBatch_SetAutoIndentStyle_IsBase(bool value) const { qscilexerbatch_setautoindentstyle_isbase = value; }
    inline void setQsciLexerBatch_SetColor_IsBase(bool value) const { qscilexerbatch_setcolor_isbase = value; }
    inline void setQsciLexerBatch_SetEolFill_IsBase(bool value) const { qscilexerbatch_seteolfill_isbase = value; }
    inline void setQsciLexerBatch_SetFont_IsBase(bool value) const { qscilexerbatch_setfont_isbase = value; }
    inline void setQsciLexerBatch_SetPaper_IsBase(bool value) const { qscilexerbatch_setpaper_isbase = value; }
    inline void setQsciLexerBatch_ReadProperties_IsBase(bool value) const { qscilexerbatch_readproperties_isbase = value; }
    inline void setQsciLexerBatch_WriteProperties_IsBase(bool value) const { qscilexerbatch_writeproperties_isbase = value; }
    inline void setQsciLexerBatch_Event_IsBase(bool value) const { qscilexerbatch_event_isbase = value; }
    inline void setQsciLexerBatch_EventFilter_IsBase(bool value) const { qscilexerbatch_eventfilter_isbase = value; }
    inline void setQsciLexerBatch_TimerEvent_IsBase(bool value) const { qscilexerbatch_timerevent_isbase = value; }
    inline void setQsciLexerBatch_ChildEvent_IsBase(bool value) const { qscilexerbatch_childevent_isbase = value; }
    inline void setQsciLexerBatch_CustomEvent_IsBase(bool value) const { qscilexerbatch_customevent_isbase = value; }
    inline void setQsciLexerBatch_ConnectNotify_IsBase(bool value) const { qscilexerbatch_connectnotify_isbase = value; }
    inline void setQsciLexerBatch_DisconnectNotify_IsBase(bool value) const { qscilexerbatch_disconnectnotify_isbase = value; }
    inline void setQsciLexerBatch_TextAsBytes_IsBase(bool value) const { qscilexerbatch_textasbytes_isbase = value; }
    inline void setQsciLexerBatch_BytesAsText_IsBase(bool value) const { qscilexerbatch_bytesastext_isbase = value; }
    inline void setQsciLexerBatch_Sender_IsBase(bool value) const { qscilexerbatch_sender_isbase = value; }
    inline void setQsciLexerBatch_SenderSignalIndex_IsBase(bool value) const { qscilexerbatch_sendersignalindex_isbase = value; }
    inline void setQsciLexerBatch_Receivers_IsBase(bool value) const { qscilexerbatch_receivers_isbase = value; }
    inline void setQsciLexerBatch_IsSignalConnected_IsBase(bool value) const { qscilexerbatch_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerbatch_metaobject_isbase) {
            qscilexerbatch_metaobject_isbase = false;
            return QsciLexerBatch::metaObject();
        }
        auto metaobject_cb = qscilexerbatch_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerBatch::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerbatch_metacast_isbase) {
            qscilexerbatch_metacast_isbase = false;
            return QsciLexerBatch::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerbatch_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerbatch_metacall_isbase) {
            qscilexerbatch_metacall_isbase = false;
            return QsciLexerBatch::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerbatch_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerbatch_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerbatch_lexer_isbase) {
            qscilexerbatch_lexer_isbase = false;
            return QsciLexerBatch::lexer();
        }
        auto lexer_cb = qscilexerbatch_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerBatch::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerbatch_lexerid_isbase) {
            qscilexerbatch_lexerid_isbase = false;
            return QsciLexerBatch::lexerId();
        }
        auto lexerid_cb = qscilexerbatch_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerbatch_autocompletionfillups_isbase) {
            qscilexerbatch_autocompletionfillups_isbase = false;
            return QsciLexerBatch::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerbatch_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerBatch::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerbatch_autocompletionwordseparators_isbase) {
            qscilexerbatch_autocompletionwordseparators_isbase = false;
            return QsciLexerBatch::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerbatch_autocompletionwordseparators_callback;
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
        return QsciLexerBatch::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerbatch_blockend_isbase) {
            qscilexerbatch_blockend_isbase = false;
            return QsciLexerBatch::blockEnd(style);
        }
        auto blockend_cb = qscilexerbatch_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerbatch_blocklookback_isbase) {
            qscilexerbatch_blocklookback_isbase = false;
            return QsciLexerBatch::blockLookback();
        }
        auto blocklookback_cb = qscilexerbatch_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerbatch_blockstart_isbase) {
            qscilexerbatch_blockstart_isbase = false;
            return QsciLexerBatch::blockStart(style);
        }
        auto blockstart_cb = qscilexerbatch_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerbatch_blockstartkeyword_isbase) {
            qscilexerbatch_blockstartkeyword_isbase = false;
            return QsciLexerBatch::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerbatch_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerbatch_bracestyle_isbase) {
            qscilexerbatch_bracestyle_isbase = false;
            return QsciLexerBatch::braceStyle();
        }
        auto bracestyle_cb = qscilexerbatch_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerbatch_casesensitive_isbase) {
            qscilexerbatch_casesensitive_isbase = false;
            return QsciLexerBatch::caseSensitive();
        }
        auto casesensitive_cb = qscilexerbatch_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerBatch::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerbatch_color_isbase) {
            qscilexerbatch_color_isbase = false;
            return QsciLexerBatch::color(style);
        }
        auto color_cb = qscilexerbatch_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerbatch_eolfill_isbase) {
            qscilexerbatch_eolfill_isbase = false;
            return QsciLexerBatch::eolFill(style);
        }
        auto eolfill_cb = qscilexerbatch_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerbatch_font_isbase) {
            qscilexerbatch_font_isbase = false;
            return QsciLexerBatch::font(style);
        }
        auto font_cb = qscilexerbatch_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerbatch_indentationguideview_isbase) {
            qscilexerbatch_indentationguideview_isbase = false;
            return QsciLexerBatch::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerbatch_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerbatch_keywords_isbase) {
            qscilexerbatch_keywords_isbase = false;
            return QsciLexerBatch::keywords(set);
        }
        auto keywords_cb = qscilexerbatch_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerbatch_defaultstyle_isbase) {
            qscilexerbatch_defaultstyle_isbase = false;
            return QsciLexerBatch::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerbatch_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerbatch_description_callback;
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
        if (qscilexerbatch_paper_isbase) {
            qscilexerbatch_paper_isbase = false;
            return QsciLexerBatch::paper(style);
        }
        auto paper_cb = qscilexerbatch_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerbatch_defaultcolor2_isbase) {
            qscilexerbatch_defaultcolor2_isbase = false;
            return QsciLexerBatch::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerbatch_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerbatch_defaulteolfill_isbase) {
            qscilexerbatch_defaulteolfill_isbase = false;
            return QsciLexerBatch::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerbatch_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerbatch_defaultfont2_isbase) {
            qscilexerbatch_defaultfont2_isbase = false;
            return QsciLexerBatch::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerbatch_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerbatch_defaultpaper2_isbase) {
            qscilexerbatch_defaultpaper2_isbase = false;
            return QsciLexerBatch::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerbatch_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerBatch::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerbatch_seteditor_isbase) {
            qscilexerbatch_seteditor_isbase = false;
            QsciLexerBatch::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerbatch_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerbatch_refreshproperties_isbase) {
            qscilexerbatch_refreshproperties_isbase = false;
            QsciLexerBatch::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerbatch_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerBatch::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerbatch_stylebitsneeded_isbase) {
            qscilexerbatch_stylebitsneeded_isbase = false;
            return QsciLexerBatch::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerbatch_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerbatch_wordcharacters_isbase) {
            qscilexerbatch_wordcharacters_isbase = false;
            return QsciLexerBatch::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerbatch_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerBatch::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerbatch_setautoindentstyle_isbase) {
            qscilexerbatch_setautoindentstyle_isbase = false;
            QsciLexerBatch::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerbatch_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerbatch_setcolor_isbase) {
            qscilexerbatch_setcolor_isbase = false;
            QsciLexerBatch::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerbatch_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerbatch_seteolfill_isbase) {
            qscilexerbatch_seteolfill_isbase = false;
            QsciLexerBatch::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerbatch_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerbatch_setfont_isbase) {
            qscilexerbatch_setfont_isbase = false;
            QsciLexerBatch::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerbatch_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerbatch_setpaper_isbase) {
            qscilexerbatch_setpaper_isbase = false;
            QsciLexerBatch::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerbatch_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerbatch_readproperties_isbase) {
            qscilexerbatch_readproperties_isbase = false;
            return QsciLexerBatch::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerbatch_readproperties_callback;
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
        return QsciLexerBatch::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerbatch_writeproperties_isbase) {
            qscilexerbatch_writeproperties_isbase = false;
            return QsciLexerBatch::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerbatch_writeproperties_callback;
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
        return QsciLexerBatch::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerbatch_event_isbase) {
            qscilexerbatch_event_isbase = false;
            return QsciLexerBatch::event(event);
        }
        auto event_cb = qscilexerbatch_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerbatch_eventfilter_isbase) {
            qscilexerbatch_eventfilter_isbase = false;
            return QsciLexerBatch::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerbatch_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerBatch::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerbatch_timerevent_isbase) {
            qscilexerbatch_timerevent_isbase = false;
            QsciLexerBatch::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerbatch_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerbatch_childevent_isbase) {
            qscilexerbatch_childevent_isbase = false;
            QsciLexerBatch::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerbatch_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerbatch_customevent_isbase) {
            qscilexerbatch_customevent_isbase = false;
            QsciLexerBatch::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerbatch_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_connectnotify_isbase) {
            qscilexerbatch_connectnotify_isbase = false;
            QsciLexerBatch::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerbatch_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_disconnectnotify_isbase) {
            qscilexerbatch_disconnectnotify_isbase = false;
            QsciLexerBatch::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerbatch_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerBatch::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerbatch_textasbytes_isbase) {
            qscilexerbatch_textasbytes_isbase = false;
            return QsciLexerBatch::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerbatch_textasbytes_callback;
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
        return QsciLexerBatch::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerbatch_bytesastext_isbase) {
            qscilexerbatch_bytesastext_isbase = false;
            return QsciLexerBatch::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerbatch_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerBatch::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerbatch_sender_isbase) {
            qscilexerbatch_sender_isbase = false;
            return QsciLexerBatch::sender();
        }
        auto sender_cb = qscilexerbatch_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerBatch::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerbatch_sendersignalindex_isbase) {
            qscilexerbatch_sendersignalindex_isbase = false;
            return QsciLexerBatch::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerbatch_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerbatch_receivers_isbase) {
            qscilexerbatch_receivers_isbase = false;
            return QsciLexerBatch::receivers(signal);
        }
        auto receivers_cb = qscilexerbatch_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerbatch_issignalconnected_isbase) {
            qscilexerbatch_issignalconnected_isbase = false;
            return QsciLexerBatch::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerbatch_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerBatch_ReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerBatch_SuperReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerBatch_WriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerBatch_SuperWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerBatch_TimerEvent(QsciLexerBatch* self, QTimerEvent* event);
    friend void QsciLexerBatch_SuperTimerEvent(QsciLexerBatch* self, QTimerEvent* event);
    friend void QsciLexerBatch_ChildEvent(QsciLexerBatch* self, QChildEvent* event);
    friend void QsciLexerBatch_SuperChildEvent(QsciLexerBatch* self, QChildEvent* event);
    friend void QsciLexerBatch_CustomEvent(QsciLexerBatch* self, QEvent* event);
    friend void QsciLexerBatch_SuperCustomEvent(QsciLexerBatch* self, QEvent* event);
    friend void QsciLexerBatch_ConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
    friend void QsciLexerBatch_SuperConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
    friend void QsciLexerBatch_DisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
    friend void QsciLexerBatch_SuperDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerBatch_TextAsBytes(const QsciLexerBatch* self, const libqt_string text);
    friend libqt_string QsciLexerBatch_SuperTextAsBytes(const QsciLexerBatch* self, const libqt_string text);
    friend libqt_string QsciLexerBatch_BytesAsText(const QsciLexerBatch* self, const char* bytes, int size);
    friend libqt_string QsciLexerBatch_SuperBytesAsText(const QsciLexerBatch* self, const char* bytes, int size);
    friend QObject* QsciLexerBatch_Sender(const QsciLexerBatch* self);
    friend QObject* QsciLexerBatch_SuperSender(const QsciLexerBatch* self);
    friend int QsciLexerBatch_SenderSignalIndex(const QsciLexerBatch* self);
    friend int QsciLexerBatch_SuperSenderSignalIndex(const QsciLexerBatch* self);
    friend int QsciLexerBatch_Receivers(const QsciLexerBatch* self, const char* signal);
    friend int QsciLexerBatch_SuperReceivers(const QsciLexerBatch* self, const char* signal);
    friend bool QsciLexerBatch_IsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
    friend bool QsciLexerBatch_SuperIsSignalConnected(const QsciLexerBatch* self, const QMetaMethod* signal);
};

#endif
