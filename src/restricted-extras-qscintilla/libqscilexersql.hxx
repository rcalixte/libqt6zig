#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSQL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSQL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSQL so that we can call protected methods
class VirtualQsciLexerSQL final : public QsciLexerSQL {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerSQL = true;

    // Virtual class public types (including callbacks)
    using QsciLexerSQL_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerSQL_Metacast_Callback = void* (*)(QsciLexerSQL*, const char*);
    using QsciLexerSQL_Metacall_Callback = int (*)(QsciLexerSQL*, int, int, void**);
    using QsciLexerSQL_SetBackslashEscapes_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldComments_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldCompact_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_Language_Callback = const char* (*)();
    using QsciLexerSQL_Lexer_Callback = const char* (*)();
    using QsciLexerSQL_LexerId_Callback = int (*)();
    using QsciLexerSQL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerSQL_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerSQL_BlockEnd_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockLookback_Callback = int (*)();
    using QsciLexerSQL_BlockStart_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BraceStyle_Callback = int (*)();
    using QsciLexerSQL_CaseSensitive_Callback = bool (*)();
    using QsciLexerSQL_Color_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_EolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Font_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_IndentationGuideView_Callback = int (*)();
    using QsciLexerSQL_Keywords_Callback = const char* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultStyle_Callback = int (*)();
    using QsciLexerSQL_Description_Callback = const char* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Paper_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultColor2_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultEolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultFont2_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_SetEditor_Callback = void (*)(QsciLexerSQL*, QsciScintilla*);
    using QsciLexerSQL_RefreshProperties_Callback = void (*)();
    using QsciLexerSQL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerSQL_WordCharacters_Callback = const char* (*)();
    using QsciLexerSQL_SetAutoIndentStyle_Callback = void (*)(QsciLexerSQL*, int);
    using QsciLexerSQL_SetColor_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_SetEolFill_Callback = void (*)(QsciLexerSQL*, bool, int);
    using QsciLexerSQL_SetFont_Callback = void (*)(QsciLexerSQL*, QFont*, int);
    using QsciLexerSQL_SetPaper_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_ReadProperties_Callback = bool (*)(QsciLexerSQL*, QSettings*, const char*);
    using QsciLexerSQL_WriteProperties_Callback = bool (*)(const QsciLexerSQL*, QSettings*, const char*);
    using QsciLexerSQL_Event_Callback = bool (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_EventFilter_Callback = bool (*)(QsciLexerSQL*, QObject*, QEvent*);
    using QsciLexerSQL_TimerEvent_Callback = void (*)(QsciLexerSQL*, QTimerEvent*);
    using QsciLexerSQL_ChildEvent_Callback = void (*)(QsciLexerSQL*, QChildEvent*);
    using QsciLexerSQL_CustomEvent_Callback = void (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_ConnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL_DisconnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL_TextAsBytes_Callback = libqt_string (*)(const QsciLexerSQL*, const char*);
    using QsciLexerSQL_BytesAsText_Callback = const char* (*)(const QsciLexerSQL*, const char*, int);
    using QsciLexerSQL_Sender_Callback = QObject* (*)();
    using QsciLexerSQL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerSQL_Receivers_Callback = int (*)(const QsciLexerSQL*, const char*);
    using QsciLexerSQL_IsSignalConnected_Callback = bool (*)(const QsciLexerSQL*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerSQL_MetaObject_Callback qscilexersql_metaobject_callback = nullptr;
    QsciLexerSQL_Metacast_Callback qscilexersql_metacast_callback = nullptr;
    QsciLexerSQL_Metacall_Callback qscilexersql_metacall_callback = nullptr;
    QsciLexerSQL_SetBackslashEscapes_Callback qscilexersql_setbackslashescapes_callback = nullptr;
    QsciLexerSQL_SetFoldComments_Callback qscilexersql_setfoldcomments_callback = nullptr;
    QsciLexerSQL_SetFoldCompact_Callback qscilexersql_setfoldcompact_callback = nullptr;
    QsciLexerSQL_Language_Callback qscilexersql_language_callback = nullptr;
    QsciLexerSQL_Lexer_Callback qscilexersql_lexer_callback = nullptr;
    QsciLexerSQL_LexerId_Callback qscilexersql_lexerid_callback = nullptr;
    QsciLexerSQL_AutoCompletionFillups_Callback qscilexersql_autocompletionfillups_callback = nullptr;
    QsciLexerSQL_AutoCompletionWordSeparators_Callback qscilexersql_autocompletionwordseparators_callback = nullptr;
    QsciLexerSQL_BlockEnd_Callback qscilexersql_blockend_callback = nullptr;
    QsciLexerSQL_BlockLookback_Callback qscilexersql_blocklookback_callback = nullptr;
    QsciLexerSQL_BlockStart_Callback qscilexersql_blockstart_callback = nullptr;
    QsciLexerSQL_BlockStartKeyword_Callback qscilexersql_blockstartkeyword_callback = nullptr;
    QsciLexerSQL_BraceStyle_Callback qscilexersql_bracestyle_callback = nullptr;
    QsciLexerSQL_CaseSensitive_Callback qscilexersql_casesensitive_callback = nullptr;
    QsciLexerSQL_Color_Callback qscilexersql_color_callback = nullptr;
    QsciLexerSQL_EolFill_Callback qscilexersql_eolfill_callback = nullptr;
    QsciLexerSQL_Font_Callback qscilexersql_font_callback = nullptr;
    QsciLexerSQL_IndentationGuideView_Callback qscilexersql_indentationguideview_callback = nullptr;
    QsciLexerSQL_Keywords_Callback qscilexersql_keywords_callback = nullptr;
    QsciLexerSQL_DefaultStyle_Callback qscilexersql_defaultstyle_callback = nullptr;
    QsciLexerSQL_Description_Callback qscilexersql_description_callback = nullptr;
    QsciLexerSQL_Paper_Callback qscilexersql_paper_callback = nullptr;
    QsciLexerSQL_DefaultColor2_Callback qscilexersql_defaultcolor2_callback = nullptr;
    QsciLexerSQL_DefaultEolFill_Callback qscilexersql_defaulteolfill_callback = nullptr;
    QsciLexerSQL_DefaultFont2_Callback qscilexersql_defaultfont2_callback = nullptr;
    QsciLexerSQL_DefaultPaper2_Callback qscilexersql_defaultpaper2_callback = nullptr;
    QsciLexerSQL_SetEditor_Callback qscilexersql_seteditor_callback = nullptr;
    QsciLexerSQL_RefreshProperties_Callback qscilexersql_refreshproperties_callback = nullptr;
    QsciLexerSQL_StyleBitsNeeded_Callback qscilexersql_stylebitsneeded_callback = nullptr;
    QsciLexerSQL_WordCharacters_Callback qscilexersql_wordcharacters_callback = nullptr;
    QsciLexerSQL_SetAutoIndentStyle_Callback qscilexersql_setautoindentstyle_callback = nullptr;
    QsciLexerSQL_SetColor_Callback qscilexersql_setcolor_callback = nullptr;
    QsciLexerSQL_SetEolFill_Callback qscilexersql_seteolfill_callback = nullptr;
    QsciLexerSQL_SetFont_Callback qscilexersql_setfont_callback = nullptr;
    QsciLexerSQL_SetPaper_Callback qscilexersql_setpaper_callback = nullptr;
    QsciLexerSQL_ReadProperties_Callback qscilexersql_readproperties_callback = nullptr;
    QsciLexerSQL_WriteProperties_Callback qscilexersql_writeproperties_callback = nullptr;
    QsciLexerSQL_Event_Callback qscilexersql_event_callback = nullptr;
    QsciLexerSQL_EventFilter_Callback qscilexersql_eventfilter_callback = nullptr;
    QsciLexerSQL_TimerEvent_Callback qscilexersql_timerevent_callback = nullptr;
    QsciLexerSQL_ChildEvent_Callback qscilexersql_childevent_callback = nullptr;
    QsciLexerSQL_CustomEvent_Callback qscilexersql_customevent_callback = nullptr;
    QsciLexerSQL_ConnectNotify_Callback qscilexersql_connectnotify_callback = nullptr;
    QsciLexerSQL_DisconnectNotify_Callback qscilexersql_disconnectnotify_callback = nullptr;
    QsciLexerSQL_TextAsBytes_Callback qscilexersql_textasbytes_callback = nullptr;
    QsciLexerSQL_BytesAsText_Callback qscilexersql_bytesastext_callback = nullptr;
    QsciLexerSQL_Sender_Callback qscilexersql_sender_callback = nullptr;
    QsciLexerSQL_SenderSignalIndex_Callback qscilexersql_sendersignalindex_callback = nullptr;
    QsciLexerSQL_Receivers_Callback qscilexersql_receivers_callback = nullptr;
    QsciLexerSQL_IsSignalConnected_Callback qscilexersql_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexersql_metaobject_isbase = false;
    mutable bool qscilexersql_metacast_isbase = false;
    mutable bool qscilexersql_metacall_isbase = false;
    mutable bool qscilexersql_setbackslashescapes_isbase = false;
    mutable bool qscilexersql_setfoldcomments_isbase = false;
    mutable bool qscilexersql_setfoldcompact_isbase = false;
    mutable bool qscilexersql_language_isbase = false;
    mutable bool qscilexersql_lexer_isbase = false;
    mutable bool qscilexersql_lexerid_isbase = false;
    mutable bool qscilexersql_autocompletionfillups_isbase = false;
    mutable bool qscilexersql_autocompletionwordseparators_isbase = false;
    mutable bool qscilexersql_blockend_isbase = false;
    mutable bool qscilexersql_blocklookback_isbase = false;
    mutable bool qscilexersql_blockstart_isbase = false;
    mutable bool qscilexersql_blockstartkeyword_isbase = false;
    mutable bool qscilexersql_bracestyle_isbase = false;
    mutable bool qscilexersql_casesensitive_isbase = false;
    mutable bool qscilexersql_color_isbase = false;
    mutable bool qscilexersql_eolfill_isbase = false;
    mutable bool qscilexersql_font_isbase = false;
    mutable bool qscilexersql_indentationguideview_isbase = false;
    mutable bool qscilexersql_keywords_isbase = false;
    mutable bool qscilexersql_defaultstyle_isbase = false;
    mutable bool qscilexersql_description_isbase = false;
    mutable bool qscilexersql_paper_isbase = false;
    mutable bool qscilexersql_defaultcolor2_isbase = false;
    mutable bool qscilexersql_defaulteolfill_isbase = false;
    mutable bool qscilexersql_defaultfont2_isbase = false;
    mutable bool qscilexersql_defaultpaper2_isbase = false;
    mutable bool qscilexersql_seteditor_isbase = false;
    mutable bool qscilexersql_refreshproperties_isbase = false;
    mutable bool qscilexersql_stylebitsneeded_isbase = false;
    mutable bool qscilexersql_wordcharacters_isbase = false;
    mutable bool qscilexersql_setautoindentstyle_isbase = false;
    mutable bool qscilexersql_setcolor_isbase = false;
    mutable bool qscilexersql_seteolfill_isbase = false;
    mutable bool qscilexersql_setfont_isbase = false;
    mutable bool qscilexersql_setpaper_isbase = false;
    mutable bool qscilexersql_readproperties_isbase = false;
    mutable bool qscilexersql_writeproperties_isbase = false;
    mutable bool qscilexersql_event_isbase = false;
    mutable bool qscilexersql_eventfilter_isbase = false;
    mutable bool qscilexersql_timerevent_isbase = false;
    mutable bool qscilexersql_childevent_isbase = false;
    mutable bool qscilexersql_customevent_isbase = false;
    mutable bool qscilexersql_connectnotify_isbase = false;
    mutable bool qscilexersql_disconnectnotify_isbase = false;
    mutable bool qscilexersql_textasbytes_isbase = false;
    mutable bool qscilexersql_bytesastext_isbase = false;
    mutable bool qscilexersql_sender_isbase = false;
    mutable bool qscilexersql_sendersignalindex_isbase = false;
    mutable bool qscilexersql_receivers_isbase = false;
    mutable bool qscilexersql_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerSQL() : QsciLexerSQL() {};
    VirtualQsciLexerSQL(QObject* parent) : QsciLexerSQL(parent) {};

    // Callback setters
    inline void setQsciLexerSQL_MetaObject_Callback(QsciLexerSQL_MetaObject_Callback cb) { qscilexersql_metaobject_callback = cb; }
    inline void setQsciLexerSQL_Metacast_Callback(QsciLexerSQL_Metacast_Callback cb) { qscilexersql_metacast_callback = cb; }
    inline void setQsciLexerSQL_Metacall_Callback(QsciLexerSQL_Metacall_Callback cb) { qscilexersql_metacall_callback = cb; }
    inline void setQsciLexerSQL_SetBackslashEscapes_Callback(QsciLexerSQL_SetBackslashEscapes_Callback cb) { qscilexersql_setbackslashescapes_callback = cb; }
    inline void setQsciLexerSQL_SetFoldComments_Callback(QsciLexerSQL_SetFoldComments_Callback cb) { qscilexersql_setfoldcomments_callback = cb; }
    inline void setQsciLexerSQL_SetFoldCompact_Callback(QsciLexerSQL_SetFoldCompact_Callback cb) { qscilexersql_setfoldcompact_callback = cb; }
    inline void setQsciLexerSQL_Language_Callback(QsciLexerSQL_Language_Callback cb) { qscilexersql_language_callback = cb; }
    inline void setQsciLexerSQL_Lexer_Callback(QsciLexerSQL_Lexer_Callback cb) { qscilexersql_lexer_callback = cb; }
    inline void setQsciLexerSQL_LexerId_Callback(QsciLexerSQL_LexerId_Callback cb) { qscilexersql_lexerid_callback = cb; }
    inline void setQsciLexerSQL_AutoCompletionFillups_Callback(QsciLexerSQL_AutoCompletionFillups_Callback cb) { qscilexersql_autocompletionfillups_callback = cb; }
    inline void setQsciLexerSQL_AutoCompletionWordSeparators_Callback(QsciLexerSQL_AutoCompletionWordSeparators_Callback cb) { qscilexersql_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerSQL_BlockEnd_Callback(QsciLexerSQL_BlockEnd_Callback cb) { qscilexersql_blockend_callback = cb; }
    inline void setQsciLexerSQL_BlockLookback_Callback(QsciLexerSQL_BlockLookback_Callback cb) { qscilexersql_blocklookback_callback = cb; }
    inline void setQsciLexerSQL_BlockStart_Callback(QsciLexerSQL_BlockStart_Callback cb) { qscilexersql_blockstart_callback = cb; }
    inline void setQsciLexerSQL_BlockStartKeyword_Callback(QsciLexerSQL_BlockStartKeyword_Callback cb) { qscilexersql_blockstartkeyword_callback = cb; }
    inline void setQsciLexerSQL_BraceStyle_Callback(QsciLexerSQL_BraceStyle_Callback cb) { qscilexersql_bracestyle_callback = cb; }
    inline void setQsciLexerSQL_CaseSensitive_Callback(QsciLexerSQL_CaseSensitive_Callback cb) { qscilexersql_casesensitive_callback = cb; }
    inline void setQsciLexerSQL_Color_Callback(QsciLexerSQL_Color_Callback cb) { qscilexersql_color_callback = cb; }
    inline void setQsciLexerSQL_EolFill_Callback(QsciLexerSQL_EolFill_Callback cb) { qscilexersql_eolfill_callback = cb; }
    inline void setQsciLexerSQL_Font_Callback(QsciLexerSQL_Font_Callback cb) { qscilexersql_font_callback = cb; }
    inline void setQsciLexerSQL_IndentationGuideView_Callback(QsciLexerSQL_IndentationGuideView_Callback cb) { qscilexersql_indentationguideview_callback = cb; }
    inline void setQsciLexerSQL_Keywords_Callback(QsciLexerSQL_Keywords_Callback cb) { qscilexersql_keywords_callback = cb; }
    inline void setQsciLexerSQL_DefaultStyle_Callback(QsciLexerSQL_DefaultStyle_Callback cb) { qscilexersql_defaultstyle_callback = cb; }
    inline void setQsciLexerSQL_Description_Callback(QsciLexerSQL_Description_Callback cb) { qscilexersql_description_callback = cb; }
    inline void setQsciLexerSQL_Paper_Callback(QsciLexerSQL_Paper_Callback cb) { qscilexersql_paper_callback = cb; }
    inline void setQsciLexerSQL_DefaultColor2_Callback(QsciLexerSQL_DefaultColor2_Callback cb) { qscilexersql_defaultcolor2_callback = cb; }
    inline void setQsciLexerSQL_DefaultEolFill_Callback(QsciLexerSQL_DefaultEolFill_Callback cb) { qscilexersql_defaulteolfill_callback = cb; }
    inline void setQsciLexerSQL_DefaultFont2_Callback(QsciLexerSQL_DefaultFont2_Callback cb) { qscilexersql_defaultfont2_callback = cb; }
    inline void setQsciLexerSQL_DefaultPaper2_Callback(QsciLexerSQL_DefaultPaper2_Callback cb) { qscilexersql_defaultpaper2_callback = cb; }
    inline void setQsciLexerSQL_SetEditor_Callback(QsciLexerSQL_SetEditor_Callback cb) { qscilexersql_seteditor_callback = cb; }
    inline void setQsciLexerSQL_RefreshProperties_Callback(QsciLexerSQL_RefreshProperties_Callback cb) { qscilexersql_refreshproperties_callback = cb; }
    inline void setQsciLexerSQL_StyleBitsNeeded_Callback(QsciLexerSQL_StyleBitsNeeded_Callback cb) { qscilexersql_stylebitsneeded_callback = cb; }
    inline void setQsciLexerSQL_WordCharacters_Callback(QsciLexerSQL_WordCharacters_Callback cb) { qscilexersql_wordcharacters_callback = cb; }
    inline void setQsciLexerSQL_SetAutoIndentStyle_Callback(QsciLexerSQL_SetAutoIndentStyle_Callback cb) { qscilexersql_setautoindentstyle_callback = cb; }
    inline void setQsciLexerSQL_SetColor_Callback(QsciLexerSQL_SetColor_Callback cb) { qscilexersql_setcolor_callback = cb; }
    inline void setQsciLexerSQL_SetEolFill_Callback(QsciLexerSQL_SetEolFill_Callback cb) { qscilexersql_seteolfill_callback = cb; }
    inline void setQsciLexerSQL_SetFont_Callback(QsciLexerSQL_SetFont_Callback cb) { qscilexersql_setfont_callback = cb; }
    inline void setQsciLexerSQL_SetPaper_Callback(QsciLexerSQL_SetPaper_Callback cb) { qscilexersql_setpaper_callback = cb; }
    inline void setQsciLexerSQL_ReadProperties_Callback(QsciLexerSQL_ReadProperties_Callback cb) { qscilexersql_readproperties_callback = cb; }
    inline void setQsciLexerSQL_WriteProperties_Callback(QsciLexerSQL_WriteProperties_Callback cb) { qscilexersql_writeproperties_callback = cb; }
    inline void setQsciLexerSQL_Event_Callback(QsciLexerSQL_Event_Callback cb) { qscilexersql_event_callback = cb; }
    inline void setQsciLexerSQL_EventFilter_Callback(QsciLexerSQL_EventFilter_Callback cb) { qscilexersql_eventfilter_callback = cb; }
    inline void setQsciLexerSQL_TimerEvent_Callback(QsciLexerSQL_TimerEvent_Callback cb) { qscilexersql_timerevent_callback = cb; }
    inline void setQsciLexerSQL_ChildEvent_Callback(QsciLexerSQL_ChildEvent_Callback cb) { qscilexersql_childevent_callback = cb; }
    inline void setQsciLexerSQL_CustomEvent_Callback(QsciLexerSQL_CustomEvent_Callback cb) { qscilexersql_customevent_callback = cb; }
    inline void setQsciLexerSQL_ConnectNotify_Callback(QsciLexerSQL_ConnectNotify_Callback cb) { qscilexersql_connectnotify_callback = cb; }
    inline void setQsciLexerSQL_DisconnectNotify_Callback(QsciLexerSQL_DisconnectNotify_Callback cb) { qscilexersql_disconnectnotify_callback = cb; }
    inline void setQsciLexerSQL_TextAsBytes_Callback(QsciLexerSQL_TextAsBytes_Callback cb) { qscilexersql_textasbytes_callback = cb; }
    inline void setQsciLexerSQL_BytesAsText_Callback(QsciLexerSQL_BytesAsText_Callback cb) { qscilexersql_bytesastext_callback = cb; }
    inline void setQsciLexerSQL_Sender_Callback(QsciLexerSQL_Sender_Callback cb) { qscilexersql_sender_callback = cb; }
    inline void setQsciLexerSQL_SenderSignalIndex_Callback(QsciLexerSQL_SenderSignalIndex_Callback cb) { qscilexersql_sendersignalindex_callback = cb; }
    inline void setQsciLexerSQL_Receivers_Callback(QsciLexerSQL_Receivers_Callback cb) { qscilexersql_receivers_callback = cb; }
    inline void setQsciLexerSQL_IsSignalConnected_Callback(QsciLexerSQL_IsSignalConnected_Callback cb) { qscilexersql_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerSQL_MetaObject_IsBase(bool value) const { qscilexersql_metaobject_isbase = value; }
    inline void setQsciLexerSQL_Metacast_IsBase(bool value) const { qscilexersql_metacast_isbase = value; }
    inline void setQsciLexerSQL_Metacall_IsBase(bool value) const { qscilexersql_metacall_isbase = value; }
    inline void setQsciLexerSQL_SetBackslashEscapes_IsBase(bool value) const { qscilexersql_setbackslashescapes_isbase = value; }
    inline void setQsciLexerSQL_SetFoldComments_IsBase(bool value) const { qscilexersql_setfoldcomments_isbase = value; }
    inline void setQsciLexerSQL_SetFoldCompact_IsBase(bool value) const { qscilexersql_setfoldcompact_isbase = value; }
    inline void setQsciLexerSQL_Language_IsBase(bool value) const { qscilexersql_language_isbase = value; }
    inline void setQsciLexerSQL_Lexer_IsBase(bool value) const { qscilexersql_lexer_isbase = value; }
    inline void setQsciLexerSQL_LexerId_IsBase(bool value) const { qscilexersql_lexerid_isbase = value; }
    inline void setQsciLexerSQL_AutoCompletionFillups_IsBase(bool value) const { qscilexersql_autocompletionfillups_isbase = value; }
    inline void setQsciLexerSQL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexersql_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerSQL_BlockEnd_IsBase(bool value) const { qscilexersql_blockend_isbase = value; }
    inline void setQsciLexerSQL_BlockLookback_IsBase(bool value) const { qscilexersql_blocklookback_isbase = value; }
    inline void setQsciLexerSQL_BlockStart_IsBase(bool value) const { qscilexersql_blockstart_isbase = value; }
    inline void setQsciLexerSQL_BlockStartKeyword_IsBase(bool value) const { qscilexersql_blockstartkeyword_isbase = value; }
    inline void setQsciLexerSQL_BraceStyle_IsBase(bool value) const { qscilexersql_bracestyle_isbase = value; }
    inline void setQsciLexerSQL_CaseSensitive_IsBase(bool value) const { qscilexersql_casesensitive_isbase = value; }
    inline void setQsciLexerSQL_Color_IsBase(bool value) const { qscilexersql_color_isbase = value; }
    inline void setQsciLexerSQL_EolFill_IsBase(bool value) const { qscilexersql_eolfill_isbase = value; }
    inline void setQsciLexerSQL_Font_IsBase(bool value) const { qscilexersql_font_isbase = value; }
    inline void setQsciLexerSQL_IndentationGuideView_IsBase(bool value) const { qscilexersql_indentationguideview_isbase = value; }
    inline void setQsciLexerSQL_Keywords_IsBase(bool value) const { qscilexersql_keywords_isbase = value; }
    inline void setQsciLexerSQL_DefaultStyle_IsBase(bool value) const { qscilexersql_defaultstyle_isbase = value; }
    inline void setQsciLexerSQL_Description_IsBase(bool value) const { qscilexersql_description_isbase = value; }
    inline void setQsciLexerSQL_Paper_IsBase(bool value) const { qscilexersql_paper_isbase = value; }
    inline void setQsciLexerSQL_DefaultColor2_IsBase(bool value) const { qscilexersql_defaultcolor2_isbase = value; }
    inline void setQsciLexerSQL_DefaultEolFill_IsBase(bool value) const { qscilexersql_defaulteolfill_isbase = value; }
    inline void setQsciLexerSQL_DefaultFont2_IsBase(bool value) const { qscilexersql_defaultfont2_isbase = value; }
    inline void setQsciLexerSQL_DefaultPaper2_IsBase(bool value) const { qscilexersql_defaultpaper2_isbase = value; }
    inline void setQsciLexerSQL_SetEditor_IsBase(bool value) const { qscilexersql_seteditor_isbase = value; }
    inline void setQsciLexerSQL_RefreshProperties_IsBase(bool value) const { qscilexersql_refreshproperties_isbase = value; }
    inline void setQsciLexerSQL_StyleBitsNeeded_IsBase(bool value) const { qscilexersql_stylebitsneeded_isbase = value; }
    inline void setQsciLexerSQL_WordCharacters_IsBase(bool value) const { qscilexersql_wordcharacters_isbase = value; }
    inline void setQsciLexerSQL_SetAutoIndentStyle_IsBase(bool value) const { qscilexersql_setautoindentstyle_isbase = value; }
    inline void setQsciLexerSQL_SetColor_IsBase(bool value) const { qscilexersql_setcolor_isbase = value; }
    inline void setQsciLexerSQL_SetEolFill_IsBase(bool value) const { qscilexersql_seteolfill_isbase = value; }
    inline void setQsciLexerSQL_SetFont_IsBase(bool value) const { qscilexersql_setfont_isbase = value; }
    inline void setQsciLexerSQL_SetPaper_IsBase(bool value) const { qscilexersql_setpaper_isbase = value; }
    inline void setQsciLexerSQL_ReadProperties_IsBase(bool value) const { qscilexersql_readproperties_isbase = value; }
    inline void setQsciLexerSQL_WriteProperties_IsBase(bool value) const { qscilexersql_writeproperties_isbase = value; }
    inline void setQsciLexerSQL_Event_IsBase(bool value) const { qscilexersql_event_isbase = value; }
    inline void setQsciLexerSQL_EventFilter_IsBase(bool value) const { qscilexersql_eventfilter_isbase = value; }
    inline void setQsciLexerSQL_TimerEvent_IsBase(bool value) const { qscilexersql_timerevent_isbase = value; }
    inline void setQsciLexerSQL_ChildEvent_IsBase(bool value) const { qscilexersql_childevent_isbase = value; }
    inline void setQsciLexerSQL_CustomEvent_IsBase(bool value) const { qscilexersql_customevent_isbase = value; }
    inline void setQsciLexerSQL_ConnectNotify_IsBase(bool value) const { qscilexersql_connectnotify_isbase = value; }
    inline void setQsciLexerSQL_DisconnectNotify_IsBase(bool value) const { qscilexersql_disconnectnotify_isbase = value; }
    inline void setQsciLexerSQL_TextAsBytes_IsBase(bool value) const { qscilexersql_textasbytes_isbase = value; }
    inline void setQsciLexerSQL_BytesAsText_IsBase(bool value) const { qscilexersql_bytesastext_isbase = value; }
    inline void setQsciLexerSQL_Sender_IsBase(bool value) const { qscilexersql_sender_isbase = value; }
    inline void setQsciLexerSQL_SenderSignalIndex_IsBase(bool value) const { qscilexersql_sendersignalindex_isbase = value; }
    inline void setQsciLexerSQL_Receivers_IsBase(bool value) const { qscilexersql_receivers_isbase = value; }
    inline void setQsciLexerSQL_IsSignalConnected_IsBase(bool value) const { qscilexersql_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexersql_metaobject_isbase) {
            qscilexersql_metaobject_isbase = false;
            return QsciLexerSQL::metaObject();
        }
        auto metaobject_cb = qscilexersql_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerSQL::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexersql_metacast_isbase) {
            qscilexersql_metacast_isbase = false;
            return QsciLexerSQL::qt_metacast(param1);
        }
        auto metacast_cb = qscilexersql_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexersql_metacall_isbase) {
            qscilexersql_metacall_isbase = false;
            return QsciLexerSQL::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexersql_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBackslashEscapes(bool enable) override {
        if (qscilexersql_setbackslashescapes_isbase) {
            qscilexersql_setbackslashescapes_isbase = false;
            QsciLexerSQL::setBackslashEscapes(enable);
            return;
        }
        auto setbackslashescapes_cb = qscilexersql_setbackslashescapes_callback;
        if (setbackslashescapes_cb) {
            bool cbval1 = enable;

            setbackslashescapes_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::setBackslashEscapes(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexersql_setfoldcomments_isbase) {
            qscilexersql_setfoldcomments_isbase = false;
            QsciLexerSQL::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexersql_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexersql_setfoldcompact_isbase) {
            qscilexersql_setfoldcompact_isbase = false;
            QsciLexerSQL::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexersql_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexersql_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexersql_lexer_isbase) {
            qscilexersql_lexer_isbase = false;
            return QsciLexerSQL::lexer();
        }
        auto lexer_cb = qscilexersql_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerSQL::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexersql_lexerid_isbase) {
            qscilexersql_lexerid_isbase = false;
            return QsciLexerSQL::lexerId();
        }
        auto lexerid_cb = qscilexersql_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexersql_autocompletionfillups_isbase) {
            qscilexersql_autocompletionfillups_isbase = false;
            return QsciLexerSQL::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexersql_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerSQL::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexersql_autocompletionwordseparators_isbase) {
            qscilexersql_autocompletionwordseparators_isbase = false;
            return QsciLexerSQL::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexersql_autocompletionwordseparators_callback;
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
        return QsciLexerSQL::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexersql_blockend_isbase) {
            qscilexersql_blockend_isbase = false;
            return QsciLexerSQL::blockEnd(style);
        }
        auto blockend_cb = qscilexersql_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexersql_blocklookback_isbase) {
            qscilexersql_blocklookback_isbase = false;
            return QsciLexerSQL::blockLookback();
        }
        auto blocklookback_cb = qscilexersql_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexersql_blockstart_isbase) {
            qscilexersql_blockstart_isbase = false;
            return QsciLexerSQL::blockStart(style);
        }
        auto blockstart_cb = qscilexersql_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexersql_blockstartkeyword_isbase) {
            qscilexersql_blockstartkeyword_isbase = false;
            return QsciLexerSQL::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexersql_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexersql_bracestyle_isbase) {
            qscilexersql_bracestyle_isbase = false;
            return QsciLexerSQL::braceStyle();
        }
        auto bracestyle_cb = qscilexersql_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexersql_casesensitive_isbase) {
            qscilexersql_casesensitive_isbase = false;
            return QsciLexerSQL::caseSensitive();
        }
        auto casesensitive_cb = qscilexersql_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerSQL::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexersql_color_isbase) {
            qscilexersql_color_isbase = false;
            return QsciLexerSQL::color(style);
        }
        auto color_cb = qscilexersql_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexersql_eolfill_isbase) {
            qscilexersql_eolfill_isbase = false;
            return QsciLexerSQL::eolFill(style);
        }
        auto eolfill_cb = qscilexersql_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexersql_font_isbase) {
            qscilexersql_font_isbase = false;
            return QsciLexerSQL::font(style);
        }
        auto font_cb = qscilexersql_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexersql_indentationguideview_isbase) {
            qscilexersql_indentationguideview_isbase = false;
            return QsciLexerSQL::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexersql_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexersql_keywords_isbase) {
            qscilexersql_keywords_isbase = false;
            return QsciLexerSQL::keywords(set);
        }
        auto keywords_cb = qscilexersql_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexersql_defaultstyle_isbase) {
            qscilexersql_defaultstyle_isbase = false;
            return QsciLexerSQL::defaultStyle();
        }
        auto defaultstyle_cb = qscilexersql_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexersql_description_callback;
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
        if (qscilexersql_paper_isbase) {
            qscilexersql_paper_isbase = false;
            return QsciLexerSQL::paper(style);
        }
        auto paper_cb = qscilexersql_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexersql_defaultcolor2_isbase) {
            qscilexersql_defaultcolor2_isbase = false;
            return QsciLexerSQL::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexersql_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexersql_defaulteolfill_isbase) {
            qscilexersql_defaulteolfill_isbase = false;
            return QsciLexerSQL::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexersql_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexersql_defaultfont2_isbase) {
            qscilexersql_defaultfont2_isbase = false;
            return QsciLexerSQL::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexersql_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexersql_defaultpaper2_isbase) {
            qscilexersql_defaultpaper2_isbase = false;
            return QsciLexerSQL::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexersql_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerSQL::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexersql_seteditor_isbase) {
            qscilexersql_seteditor_isbase = false;
            QsciLexerSQL::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexersql_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexersql_refreshproperties_isbase) {
            qscilexersql_refreshproperties_isbase = false;
            QsciLexerSQL::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexersql_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerSQL::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexersql_stylebitsneeded_isbase) {
            qscilexersql_stylebitsneeded_isbase = false;
            return QsciLexerSQL::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexersql_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexersql_wordcharacters_isbase) {
            qscilexersql_wordcharacters_isbase = false;
            return QsciLexerSQL::wordCharacters();
        }
        auto wordcharacters_cb = qscilexersql_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerSQL::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexersql_setautoindentstyle_isbase) {
            qscilexersql_setautoindentstyle_isbase = false;
            QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexersql_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexersql_setcolor_isbase) {
            qscilexersql_setcolor_isbase = false;
            QsciLexerSQL::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexersql_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexersql_seteolfill_isbase) {
            qscilexersql_seteolfill_isbase = false;
            QsciLexerSQL::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexersql_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexersql_setfont_isbase) {
            qscilexersql_setfont_isbase = false;
            QsciLexerSQL::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexersql_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexersql_setpaper_isbase) {
            qscilexersql_setpaper_isbase = false;
            QsciLexerSQL::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexersql_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexersql_readproperties_isbase) {
            qscilexersql_readproperties_isbase = false;
            return QsciLexerSQL::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexersql_readproperties_callback;
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
        return QsciLexerSQL::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexersql_writeproperties_isbase) {
            qscilexersql_writeproperties_isbase = false;
            return QsciLexerSQL::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexersql_writeproperties_callback;
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
        return QsciLexerSQL::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexersql_event_isbase) {
            qscilexersql_event_isbase = false;
            return QsciLexerSQL::event(event);
        }
        auto event_cb = qscilexersql_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexersql_eventfilter_isbase) {
            qscilexersql_eventfilter_isbase = false;
            return QsciLexerSQL::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexersql_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerSQL::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexersql_timerevent_isbase) {
            qscilexersql_timerevent_isbase = false;
            QsciLexerSQL::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexersql_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexersql_childevent_isbase) {
            qscilexersql_childevent_isbase = false;
            QsciLexerSQL::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexersql_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexersql_customevent_isbase) {
            qscilexersql_customevent_isbase = false;
            QsciLexerSQL::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexersql_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_connectnotify_isbase) {
            qscilexersql_connectnotify_isbase = false;
            QsciLexerSQL::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexersql_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_disconnectnotify_isbase) {
            qscilexersql_disconnectnotify_isbase = false;
            QsciLexerSQL::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexersql_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerSQL::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexersql_textasbytes_isbase) {
            qscilexersql_textasbytes_isbase = false;
            return QsciLexerSQL::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexersql_textasbytes_callback;
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
        return QsciLexerSQL::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexersql_bytesastext_isbase) {
            qscilexersql_bytesastext_isbase = false;
            return QsciLexerSQL::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexersql_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerSQL::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexersql_sender_isbase) {
            qscilexersql_sender_isbase = false;
            return QsciLexerSQL::sender();
        }
        auto sender_cb = qscilexersql_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerSQL::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexersql_sendersignalindex_isbase) {
            qscilexersql_sendersignalindex_isbase = false;
            return QsciLexerSQL::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexersql_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexersql_receivers_isbase) {
            qscilexersql_receivers_isbase = false;
            return QsciLexerSQL::receivers(signal);
        }
        auto receivers_cb = qscilexersql_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexersql_issignalconnected_isbase) {
            qscilexersql_issignalconnected_isbase = false;
            return QsciLexerSQL::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexersql_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_SuperReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_SuperWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event);
    friend void QsciLexerSQL_SuperTimerEvent(QsciLexerSQL* self, QTimerEvent* event);
    friend void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event);
    friend void QsciLexerSQL_SuperChildEvent(QsciLexerSQL* self, QChildEvent* event);
    friend void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event);
    friend void QsciLexerSQL_SuperCustomEvent(QsciLexerSQL* self, QEvent* event);
    friend void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_SuperConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_SuperDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text);
    friend libqt_string QsciLexerSQL_SuperTextAsBytes(const QsciLexerSQL* self, const libqt_string text);
    friend libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
    friend libqt_string QsciLexerSQL_SuperBytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
    friend QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self);
    friend QObject* QsciLexerSQL_SuperSender(const QsciLexerSQL* self);
    friend int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self);
    friend int QsciLexerSQL_SuperSenderSignalIndex(const QsciLexerSQL* self);
    friend int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal);
    friend int QsciLexerSQL_SuperReceivers(const QsciLexerSQL* self, const char* signal);
    friend bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
    friend bool QsciLexerSQL_SuperIsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
};

#endif
