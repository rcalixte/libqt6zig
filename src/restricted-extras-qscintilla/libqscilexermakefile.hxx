#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMAKEFILE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMAKEFILE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMakefile so that we can call protected methods
class VirtualQsciLexerMakefile final : public QsciLexerMakefile {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerMakefile = true;

    // Virtual class public types (including callbacks)
    using QsciLexerMakefile_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerMakefile_Metacast_Callback = void* (*)(QsciLexerMakefile*, const char*);
    using QsciLexerMakefile_Metacall_Callback = int (*)(QsciLexerMakefile*, int, int, void**);
    using QsciLexerMakefile_Language_Callback = const char* (*)();
    using QsciLexerMakefile_Lexer_Callback = const char* (*)();
    using QsciLexerMakefile_LexerId_Callback = int (*)();
    using QsciLexerMakefile_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMakefile_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerMakefile_BlockEnd_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockLookback_Callback = int (*)();
    using QsciLexerMakefile_BlockStart_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BraceStyle_Callback = int (*)();
    using QsciLexerMakefile_CaseSensitive_Callback = bool (*)();
    using QsciLexerMakefile_Color_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_EolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Font_Callback = QFont* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_IndentationGuideView_Callback = int (*)();
    using QsciLexerMakefile_Keywords_Callback = const char* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultStyle_Callback = int (*)();
    using QsciLexerMakefile_Description_Callback = const char* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Paper_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultColor2_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultEolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultFont2_Callback = QFont* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetEditor_Callback = void (*)(QsciLexerMakefile*, QsciScintilla*);
    using QsciLexerMakefile_RefreshProperties_Callback = void (*)();
    using QsciLexerMakefile_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMakefile_WordCharacters_Callback = const char* (*)();
    using QsciLexerMakefile_SetAutoIndentStyle_Callback = void (*)(QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetColor_Callback = void (*)(QsciLexerMakefile*, QColor*, int);
    using QsciLexerMakefile_SetEolFill_Callback = void (*)(QsciLexerMakefile*, bool, int);
    using QsciLexerMakefile_SetFont_Callback = void (*)(QsciLexerMakefile*, QFont*, int);
    using QsciLexerMakefile_SetPaper_Callback = void (*)(QsciLexerMakefile*, QColor*, int);
    using QsciLexerMakefile_ReadProperties_Callback = bool (*)(QsciLexerMakefile*, QSettings*, const char*);
    using QsciLexerMakefile_WriteProperties_Callback = bool (*)(const QsciLexerMakefile*, QSettings*, const char*);
    using QsciLexerMakefile_Event_Callback = bool (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_EventFilter_Callback = bool (*)(QsciLexerMakefile*, QObject*, QEvent*);
    using QsciLexerMakefile_TimerEvent_Callback = void (*)(QsciLexerMakefile*, QTimerEvent*);
    using QsciLexerMakefile_ChildEvent_Callback = void (*)(QsciLexerMakefile*, QChildEvent*);
    using QsciLexerMakefile_CustomEvent_Callback = void (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_ConnectNotify_Callback = void (*)(QsciLexerMakefile*, QMetaMethod*);
    using QsciLexerMakefile_DisconnectNotify_Callback = void (*)(QsciLexerMakefile*, QMetaMethod*);
    using QsciLexerMakefile_TextAsBytes_Callback = libqt_string (*)(const QsciLexerMakefile*, const char*);
    using QsciLexerMakefile_BytesAsText_Callback = const char* (*)(const QsciLexerMakefile*, const char*, int);
    using QsciLexerMakefile_Sender_Callback = QObject* (*)();
    using QsciLexerMakefile_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMakefile_Receivers_Callback = int (*)(const QsciLexerMakefile*, const char*);
    using QsciLexerMakefile_IsSignalConnected_Callback = bool (*)(const QsciLexerMakefile*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerMakefile_MetaObject_Callback qscilexermakefile_metaobject_callback = nullptr;
    QsciLexerMakefile_Metacast_Callback qscilexermakefile_metacast_callback = nullptr;
    QsciLexerMakefile_Metacall_Callback qscilexermakefile_metacall_callback = nullptr;
    QsciLexerMakefile_Language_Callback qscilexermakefile_language_callback = nullptr;
    QsciLexerMakefile_Lexer_Callback qscilexermakefile_lexer_callback = nullptr;
    QsciLexerMakefile_LexerId_Callback qscilexermakefile_lexerid_callback = nullptr;
    QsciLexerMakefile_AutoCompletionFillups_Callback qscilexermakefile_autocompletionfillups_callback = nullptr;
    QsciLexerMakefile_AutoCompletionWordSeparators_Callback qscilexermakefile_autocompletionwordseparators_callback = nullptr;
    QsciLexerMakefile_BlockEnd_Callback qscilexermakefile_blockend_callback = nullptr;
    QsciLexerMakefile_BlockLookback_Callback qscilexermakefile_blocklookback_callback = nullptr;
    QsciLexerMakefile_BlockStart_Callback qscilexermakefile_blockstart_callback = nullptr;
    QsciLexerMakefile_BlockStartKeyword_Callback qscilexermakefile_blockstartkeyword_callback = nullptr;
    QsciLexerMakefile_BraceStyle_Callback qscilexermakefile_bracestyle_callback = nullptr;
    QsciLexerMakefile_CaseSensitive_Callback qscilexermakefile_casesensitive_callback = nullptr;
    QsciLexerMakefile_Color_Callback qscilexermakefile_color_callback = nullptr;
    QsciLexerMakefile_EolFill_Callback qscilexermakefile_eolfill_callback = nullptr;
    QsciLexerMakefile_Font_Callback qscilexermakefile_font_callback = nullptr;
    QsciLexerMakefile_IndentationGuideView_Callback qscilexermakefile_indentationguideview_callback = nullptr;
    QsciLexerMakefile_Keywords_Callback qscilexermakefile_keywords_callback = nullptr;
    QsciLexerMakefile_DefaultStyle_Callback qscilexermakefile_defaultstyle_callback = nullptr;
    QsciLexerMakefile_Description_Callback qscilexermakefile_description_callback = nullptr;
    QsciLexerMakefile_Paper_Callback qscilexermakefile_paper_callback = nullptr;
    QsciLexerMakefile_DefaultColor2_Callback qscilexermakefile_defaultcolor2_callback = nullptr;
    QsciLexerMakefile_DefaultEolFill_Callback qscilexermakefile_defaulteolfill_callback = nullptr;
    QsciLexerMakefile_DefaultFont2_Callback qscilexermakefile_defaultfont2_callback = nullptr;
    QsciLexerMakefile_DefaultPaper2_Callback qscilexermakefile_defaultpaper2_callback = nullptr;
    QsciLexerMakefile_SetEditor_Callback qscilexermakefile_seteditor_callback = nullptr;
    QsciLexerMakefile_RefreshProperties_Callback qscilexermakefile_refreshproperties_callback = nullptr;
    QsciLexerMakefile_StyleBitsNeeded_Callback qscilexermakefile_stylebitsneeded_callback = nullptr;
    QsciLexerMakefile_WordCharacters_Callback qscilexermakefile_wordcharacters_callback = nullptr;
    QsciLexerMakefile_SetAutoIndentStyle_Callback qscilexermakefile_setautoindentstyle_callback = nullptr;
    QsciLexerMakefile_SetColor_Callback qscilexermakefile_setcolor_callback = nullptr;
    QsciLexerMakefile_SetEolFill_Callback qscilexermakefile_seteolfill_callback = nullptr;
    QsciLexerMakefile_SetFont_Callback qscilexermakefile_setfont_callback = nullptr;
    QsciLexerMakefile_SetPaper_Callback qscilexermakefile_setpaper_callback = nullptr;
    QsciLexerMakefile_ReadProperties_Callback qscilexermakefile_readproperties_callback = nullptr;
    QsciLexerMakefile_WriteProperties_Callback qscilexermakefile_writeproperties_callback = nullptr;
    QsciLexerMakefile_Event_Callback qscilexermakefile_event_callback = nullptr;
    QsciLexerMakefile_EventFilter_Callback qscilexermakefile_eventfilter_callback = nullptr;
    QsciLexerMakefile_TimerEvent_Callback qscilexermakefile_timerevent_callback = nullptr;
    QsciLexerMakefile_ChildEvent_Callback qscilexermakefile_childevent_callback = nullptr;
    QsciLexerMakefile_CustomEvent_Callback qscilexermakefile_customevent_callback = nullptr;
    QsciLexerMakefile_ConnectNotify_Callback qscilexermakefile_connectnotify_callback = nullptr;
    QsciLexerMakefile_DisconnectNotify_Callback qscilexermakefile_disconnectnotify_callback = nullptr;
    QsciLexerMakefile_TextAsBytes_Callback qscilexermakefile_textasbytes_callback = nullptr;
    QsciLexerMakefile_BytesAsText_Callback qscilexermakefile_bytesastext_callback = nullptr;
    QsciLexerMakefile_Sender_Callback qscilexermakefile_sender_callback = nullptr;
    QsciLexerMakefile_SenderSignalIndex_Callback qscilexermakefile_sendersignalindex_callback = nullptr;
    QsciLexerMakefile_Receivers_Callback qscilexermakefile_receivers_callback = nullptr;
    QsciLexerMakefile_IsSignalConnected_Callback qscilexermakefile_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermakefile_metaobject_isbase = false;
    mutable bool qscilexermakefile_metacast_isbase = false;
    mutable bool qscilexermakefile_metacall_isbase = false;
    mutable bool qscilexermakefile_language_isbase = false;
    mutable bool qscilexermakefile_lexer_isbase = false;
    mutable bool qscilexermakefile_lexerid_isbase = false;
    mutable bool qscilexermakefile_autocompletionfillups_isbase = false;
    mutable bool qscilexermakefile_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermakefile_blockend_isbase = false;
    mutable bool qscilexermakefile_blocklookback_isbase = false;
    mutable bool qscilexermakefile_blockstart_isbase = false;
    mutable bool qscilexermakefile_blockstartkeyword_isbase = false;
    mutable bool qscilexermakefile_bracestyle_isbase = false;
    mutable bool qscilexermakefile_casesensitive_isbase = false;
    mutable bool qscilexermakefile_color_isbase = false;
    mutable bool qscilexermakefile_eolfill_isbase = false;
    mutable bool qscilexermakefile_font_isbase = false;
    mutable bool qscilexermakefile_indentationguideview_isbase = false;
    mutable bool qscilexermakefile_keywords_isbase = false;
    mutable bool qscilexermakefile_defaultstyle_isbase = false;
    mutable bool qscilexermakefile_description_isbase = false;
    mutable bool qscilexermakefile_paper_isbase = false;
    mutable bool qscilexermakefile_defaultcolor2_isbase = false;
    mutable bool qscilexermakefile_defaulteolfill_isbase = false;
    mutable bool qscilexermakefile_defaultfont2_isbase = false;
    mutable bool qscilexermakefile_defaultpaper2_isbase = false;
    mutable bool qscilexermakefile_seteditor_isbase = false;
    mutable bool qscilexermakefile_refreshproperties_isbase = false;
    mutable bool qscilexermakefile_stylebitsneeded_isbase = false;
    mutable bool qscilexermakefile_wordcharacters_isbase = false;
    mutable bool qscilexermakefile_setautoindentstyle_isbase = false;
    mutable bool qscilexermakefile_setcolor_isbase = false;
    mutable bool qscilexermakefile_seteolfill_isbase = false;
    mutable bool qscilexermakefile_setfont_isbase = false;
    mutable bool qscilexermakefile_setpaper_isbase = false;
    mutable bool qscilexermakefile_readproperties_isbase = false;
    mutable bool qscilexermakefile_writeproperties_isbase = false;
    mutable bool qscilexermakefile_event_isbase = false;
    mutable bool qscilexermakefile_eventfilter_isbase = false;
    mutable bool qscilexermakefile_timerevent_isbase = false;
    mutable bool qscilexermakefile_childevent_isbase = false;
    mutable bool qscilexermakefile_customevent_isbase = false;
    mutable bool qscilexermakefile_connectnotify_isbase = false;
    mutable bool qscilexermakefile_disconnectnotify_isbase = false;
    mutable bool qscilexermakefile_textasbytes_isbase = false;
    mutable bool qscilexermakefile_bytesastext_isbase = false;
    mutable bool qscilexermakefile_sender_isbase = false;
    mutable bool qscilexermakefile_sendersignalindex_isbase = false;
    mutable bool qscilexermakefile_receivers_isbase = false;
    mutable bool qscilexermakefile_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMakefile() : QsciLexerMakefile() {};
    VirtualQsciLexerMakefile(QObject* parent) : QsciLexerMakefile(parent) {};

    // Callback setters
    inline void setQsciLexerMakefile_MetaObject_Callback(QsciLexerMakefile_MetaObject_Callback cb) { qscilexermakefile_metaobject_callback = cb; }
    inline void setQsciLexerMakefile_Metacast_Callback(QsciLexerMakefile_Metacast_Callback cb) { qscilexermakefile_metacast_callback = cb; }
    inline void setQsciLexerMakefile_Metacall_Callback(QsciLexerMakefile_Metacall_Callback cb) { qscilexermakefile_metacall_callback = cb; }
    inline void setQsciLexerMakefile_Language_Callback(QsciLexerMakefile_Language_Callback cb) { qscilexermakefile_language_callback = cb; }
    inline void setQsciLexerMakefile_Lexer_Callback(QsciLexerMakefile_Lexer_Callback cb) { qscilexermakefile_lexer_callback = cb; }
    inline void setQsciLexerMakefile_LexerId_Callback(QsciLexerMakefile_LexerId_Callback cb) { qscilexermakefile_lexerid_callback = cb; }
    inline void setQsciLexerMakefile_AutoCompletionFillups_Callback(QsciLexerMakefile_AutoCompletionFillups_Callback cb) { qscilexermakefile_autocompletionfillups_callback = cb; }
    inline void setQsciLexerMakefile_AutoCompletionWordSeparators_Callback(QsciLexerMakefile_AutoCompletionWordSeparators_Callback cb) { qscilexermakefile_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerMakefile_BlockEnd_Callback(QsciLexerMakefile_BlockEnd_Callback cb) { qscilexermakefile_blockend_callback = cb; }
    inline void setQsciLexerMakefile_BlockLookback_Callback(QsciLexerMakefile_BlockLookback_Callback cb) { qscilexermakefile_blocklookback_callback = cb; }
    inline void setQsciLexerMakefile_BlockStart_Callback(QsciLexerMakefile_BlockStart_Callback cb) { qscilexermakefile_blockstart_callback = cb; }
    inline void setQsciLexerMakefile_BlockStartKeyword_Callback(QsciLexerMakefile_BlockStartKeyword_Callback cb) { qscilexermakefile_blockstartkeyword_callback = cb; }
    inline void setQsciLexerMakefile_BraceStyle_Callback(QsciLexerMakefile_BraceStyle_Callback cb) { qscilexermakefile_bracestyle_callback = cb; }
    inline void setQsciLexerMakefile_CaseSensitive_Callback(QsciLexerMakefile_CaseSensitive_Callback cb) { qscilexermakefile_casesensitive_callback = cb; }
    inline void setQsciLexerMakefile_Color_Callback(QsciLexerMakefile_Color_Callback cb) { qscilexermakefile_color_callback = cb; }
    inline void setQsciLexerMakefile_EolFill_Callback(QsciLexerMakefile_EolFill_Callback cb) { qscilexermakefile_eolfill_callback = cb; }
    inline void setQsciLexerMakefile_Font_Callback(QsciLexerMakefile_Font_Callback cb) { qscilexermakefile_font_callback = cb; }
    inline void setQsciLexerMakefile_IndentationGuideView_Callback(QsciLexerMakefile_IndentationGuideView_Callback cb) { qscilexermakefile_indentationguideview_callback = cb; }
    inline void setQsciLexerMakefile_Keywords_Callback(QsciLexerMakefile_Keywords_Callback cb) { qscilexermakefile_keywords_callback = cb; }
    inline void setQsciLexerMakefile_DefaultStyle_Callback(QsciLexerMakefile_DefaultStyle_Callback cb) { qscilexermakefile_defaultstyle_callback = cb; }
    inline void setQsciLexerMakefile_Description_Callback(QsciLexerMakefile_Description_Callback cb) { qscilexermakefile_description_callback = cb; }
    inline void setQsciLexerMakefile_Paper_Callback(QsciLexerMakefile_Paper_Callback cb) { qscilexermakefile_paper_callback = cb; }
    inline void setQsciLexerMakefile_DefaultColor2_Callback(QsciLexerMakefile_DefaultColor2_Callback cb) { qscilexermakefile_defaultcolor2_callback = cb; }
    inline void setQsciLexerMakefile_DefaultEolFill_Callback(QsciLexerMakefile_DefaultEolFill_Callback cb) { qscilexermakefile_defaulteolfill_callback = cb; }
    inline void setQsciLexerMakefile_DefaultFont2_Callback(QsciLexerMakefile_DefaultFont2_Callback cb) { qscilexermakefile_defaultfont2_callback = cb; }
    inline void setQsciLexerMakefile_DefaultPaper2_Callback(QsciLexerMakefile_DefaultPaper2_Callback cb) { qscilexermakefile_defaultpaper2_callback = cb; }
    inline void setQsciLexerMakefile_SetEditor_Callback(QsciLexerMakefile_SetEditor_Callback cb) { qscilexermakefile_seteditor_callback = cb; }
    inline void setQsciLexerMakefile_RefreshProperties_Callback(QsciLexerMakefile_RefreshProperties_Callback cb) { qscilexermakefile_refreshproperties_callback = cb; }
    inline void setQsciLexerMakefile_StyleBitsNeeded_Callback(QsciLexerMakefile_StyleBitsNeeded_Callback cb) { qscilexermakefile_stylebitsneeded_callback = cb; }
    inline void setQsciLexerMakefile_WordCharacters_Callback(QsciLexerMakefile_WordCharacters_Callback cb) { qscilexermakefile_wordcharacters_callback = cb; }
    inline void setQsciLexerMakefile_SetAutoIndentStyle_Callback(QsciLexerMakefile_SetAutoIndentStyle_Callback cb) { qscilexermakefile_setautoindentstyle_callback = cb; }
    inline void setQsciLexerMakefile_SetColor_Callback(QsciLexerMakefile_SetColor_Callback cb) { qscilexermakefile_setcolor_callback = cb; }
    inline void setQsciLexerMakefile_SetEolFill_Callback(QsciLexerMakefile_SetEolFill_Callback cb) { qscilexermakefile_seteolfill_callback = cb; }
    inline void setQsciLexerMakefile_SetFont_Callback(QsciLexerMakefile_SetFont_Callback cb) { qscilexermakefile_setfont_callback = cb; }
    inline void setQsciLexerMakefile_SetPaper_Callback(QsciLexerMakefile_SetPaper_Callback cb) { qscilexermakefile_setpaper_callback = cb; }
    inline void setQsciLexerMakefile_ReadProperties_Callback(QsciLexerMakefile_ReadProperties_Callback cb) { qscilexermakefile_readproperties_callback = cb; }
    inline void setQsciLexerMakefile_WriteProperties_Callback(QsciLexerMakefile_WriteProperties_Callback cb) { qscilexermakefile_writeproperties_callback = cb; }
    inline void setQsciLexerMakefile_Event_Callback(QsciLexerMakefile_Event_Callback cb) { qscilexermakefile_event_callback = cb; }
    inline void setQsciLexerMakefile_EventFilter_Callback(QsciLexerMakefile_EventFilter_Callback cb) { qscilexermakefile_eventfilter_callback = cb; }
    inline void setQsciLexerMakefile_TimerEvent_Callback(QsciLexerMakefile_TimerEvent_Callback cb) { qscilexermakefile_timerevent_callback = cb; }
    inline void setQsciLexerMakefile_ChildEvent_Callback(QsciLexerMakefile_ChildEvent_Callback cb) { qscilexermakefile_childevent_callback = cb; }
    inline void setQsciLexerMakefile_CustomEvent_Callback(QsciLexerMakefile_CustomEvent_Callback cb) { qscilexermakefile_customevent_callback = cb; }
    inline void setQsciLexerMakefile_ConnectNotify_Callback(QsciLexerMakefile_ConnectNotify_Callback cb) { qscilexermakefile_connectnotify_callback = cb; }
    inline void setQsciLexerMakefile_DisconnectNotify_Callback(QsciLexerMakefile_DisconnectNotify_Callback cb) { qscilexermakefile_disconnectnotify_callback = cb; }
    inline void setQsciLexerMakefile_TextAsBytes_Callback(QsciLexerMakefile_TextAsBytes_Callback cb) { qscilexermakefile_textasbytes_callback = cb; }
    inline void setQsciLexerMakefile_BytesAsText_Callback(QsciLexerMakefile_BytesAsText_Callback cb) { qscilexermakefile_bytesastext_callback = cb; }
    inline void setQsciLexerMakefile_Sender_Callback(QsciLexerMakefile_Sender_Callback cb) { qscilexermakefile_sender_callback = cb; }
    inline void setQsciLexerMakefile_SenderSignalIndex_Callback(QsciLexerMakefile_SenderSignalIndex_Callback cb) { qscilexermakefile_sendersignalindex_callback = cb; }
    inline void setQsciLexerMakefile_Receivers_Callback(QsciLexerMakefile_Receivers_Callback cb) { qscilexermakefile_receivers_callback = cb; }
    inline void setQsciLexerMakefile_IsSignalConnected_Callback(QsciLexerMakefile_IsSignalConnected_Callback cb) { qscilexermakefile_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerMakefile_MetaObject_IsBase(bool value) const { qscilexermakefile_metaobject_isbase = value; }
    inline void setQsciLexerMakefile_Metacast_IsBase(bool value) const { qscilexermakefile_metacast_isbase = value; }
    inline void setQsciLexerMakefile_Metacall_IsBase(bool value) const { qscilexermakefile_metacall_isbase = value; }
    inline void setQsciLexerMakefile_Language_IsBase(bool value) const { qscilexermakefile_language_isbase = value; }
    inline void setQsciLexerMakefile_Lexer_IsBase(bool value) const { qscilexermakefile_lexer_isbase = value; }
    inline void setQsciLexerMakefile_LexerId_IsBase(bool value) const { qscilexermakefile_lexerid_isbase = value; }
    inline void setQsciLexerMakefile_AutoCompletionFillups_IsBase(bool value) const { qscilexermakefile_autocompletionfillups_isbase = value; }
    inline void setQsciLexerMakefile_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermakefile_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerMakefile_BlockEnd_IsBase(bool value) const { qscilexermakefile_blockend_isbase = value; }
    inline void setQsciLexerMakefile_BlockLookback_IsBase(bool value) const { qscilexermakefile_blocklookback_isbase = value; }
    inline void setQsciLexerMakefile_BlockStart_IsBase(bool value) const { qscilexermakefile_blockstart_isbase = value; }
    inline void setQsciLexerMakefile_BlockStartKeyword_IsBase(bool value) const { qscilexermakefile_blockstartkeyword_isbase = value; }
    inline void setQsciLexerMakefile_BraceStyle_IsBase(bool value) const { qscilexermakefile_bracestyle_isbase = value; }
    inline void setQsciLexerMakefile_CaseSensitive_IsBase(bool value) const { qscilexermakefile_casesensitive_isbase = value; }
    inline void setQsciLexerMakefile_Color_IsBase(bool value) const { qscilexermakefile_color_isbase = value; }
    inline void setQsciLexerMakefile_EolFill_IsBase(bool value) const { qscilexermakefile_eolfill_isbase = value; }
    inline void setQsciLexerMakefile_Font_IsBase(bool value) const { qscilexermakefile_font_isbase = value; }
    inline void setQsciLexerMakefile_IndentationGuideView_IsBase(bool value) const { qscilexermakefile_indentationguideview_isbase = value; }
    inline void setQsciLexerMakefile_Keywords_IsBase(bool value) const { qscilexermakefile_keywords_isbase = value; }
    inline void setQsciLexerMakefile_DefaultStyle_IsBase(bool value) const { qscilexermakefile_defaultstyle_isbase = value; }
    inline void setQsciLexerMakefile_Description_IsBase(bool value) const { qscilexermakefile_description_isbase = value; }
    inline void setQsciLexerMakefile_Paper_IsBase(bool value) const { qscilexermakefile_paper_isbase = value; }
    inline void setQsciLexerMakefile_DefaultColor2_IsBase(bool value) const { qscilexermakefile_defaultcolor2_isbase = value; }
    inline void setQsciLexerMakefile_DefaultEolFill_IsBase(bool value) const { qscilexermakefile_defaulteolfill_isbase = value; }
    inline void setQsciLexerMakefile_DefaultFont2_IsBase(bool value) const { qscilexermakefile_defaultfont2_isbase = value; }
    inline void setQsciLexerMakefile_DefaultPaper2_IsBase(bool value) const { qscilexermakefile_defaultpaper2_isbase = value; }
    inline void setQsciLexerMakefile_SetEditor_IsBase(bool value) const { qscilexermakefile_seteditor_isbase = value; }
    inline void setQsciLexerMakefile_RefreshProperties_IsBase(bool value) const { qscilexermakefile_refreshproperties_isbase = value; }
    inline void setQsciLexerMakefile_StyleBitsNeeded_IsBase(bool value) const { qscilexermakefile_stylebitsneeded_isbase = value; }
    inline void setQsciLexerMakefile_WordCharacters_IsBase(bool value) const { qscilexermakefile_wordcharacters_isbase = value; }
    inline void setQsciLexerMakefile_SetAutoIndentStyle_IsBase(bool value) const { qscilexermakefile_setautoindentstyle_isbase = value; }
    inline void setQsciLexerMakefile_SetColor_IsBase(bool value) const { qscilexermakefile_setcolor_isbase = value; }
    inline void setQsciLexerMakefile_SetEolFill_IsBase(bool value) const { qscilexermakefile_seteolfill_isbase = value; }
    inline void setQsciLexerMakefile_SetFont_IsBase(bool value) const { qscilexermakefile_setfont_isbase = value; }
    inline void setQsciLexerMakefile_SetPaper_IsBase(bool value) const { qscilexermakefile_setpaper_isbase = value; }
    inline void setQsciLexerMakefile_ReadProperties_IsBase(bool value) const { qscilexermakefile_readproperties_isbase = value; }
    inline void setQsciLexerMakefile_WriteProperties_IsBase(bool value) const { qscilexermakefile_writeproperties_isbase = value; }
    inline void setQsciLexerMakefile_Event_IsBase(bool value) const { qscilexermakefile_event_isbase = value; }
    inline void setQsciLexerMakefile_EventFilter_IsBase(bool value) const { qscilexermakefile_eventfilter_isbase = value; }
    inline void setQsciLexerMakefile_TimerEvent_IsBase(bool value) const { qscilexermakefile_timerevent_isbase = value; }
    inline void setQsciLexerMakefile_ChildEvent_IsBase(bool value) const { qscilexermakefile_childevent_isbase = value; }
    inline void setQsciLexerMakefile_CustomEvent_IsBase(bool value) const { qscilexermakefile_customevent_isbase = value; }
    inline void setQsciLexerMakefile_ConnectNotify_IsBase(bool value) const { qscilexermakefile_connectnotify_isbase = value; }
    inline void setQsciLexerMakefile_DisconnectNotify_IsBase(bool value) const { qscilexermakefile_disconnectnotify_isbase = value; }
    inline void setQsciLexerMakefile_TextAsBytes_IsBase(bool value) const { qscilexermakefile_textasbytes_isbase = value; }
    inline void setQsciLexerMakefile_BytesAsText_IsBase(bool value) const { qscilexermakefile_bytesastext_isbase = value; }
    inline void setQsciLexerMakefile_Sender_IsBase(bool value) const { qscilexermakefile_sender_isbase = value; }
    inline void setQsciLexerMakefile_SenderSignalIndex_IsBase(bool value) const { qscilexermakefile_sendersignalindex_isbase = value; }
    inline void setQsciLexerMakefile_Receivers_IsBase(bool value) const { qscilexermakefile_receivers_isbase = value; }
    inline void setQsciLexerMakefile_IsSignalConnected_IsBase(bool value) const { qscilexermakefile_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermakefile_metaobject_isbase) {
            qscilexermakefile_metaobject_isbase = false;
            return QsciLexerMakefile::metaObject();
        }
        auto metaobject_cb = qscilexermakefile_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermakefile_metacast_isbase) {
            qscilexermakefile_metacast_isbase = false;
            return QsciLexerMakefile::qt_metacast(param1);
        }
        auto metacast_cb = qscilexermakefile_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermakefile_metacall_isbase) {
            qscilexermakefile_metacall_isbase = false;
            return QsciLexerMakefile::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexermakefile_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexermakefile_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermakefile_lexer_isbase) {
            qscilexermakefile_lexer_isbase = false;
            return QsciLexerMakefile::lexer();
        }
        auto lexer_cb = qscilexermakefile_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermakefile_lexerid_isbase) {
            qscilexermakefile_lexerid_isbase = false;
            return QsciLexerMakefile::lexerId();
        }
        auto lexerid_cb = qscilexermakefile_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermakefile_autocompletionfillups_isbase) {
            qscilexermakefile_autocompletionfillups_isbase = false;
            return QsciLexerMakefile::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexermakefile_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermakefile_autocompletionwordseparators_isbase) {
            qscilexermakefile_autocompletionwordseparators_isbase = false;
            return QsciLexerMakefile::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexermakefile_autocompletionwordseparators_callback;
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
        return QsciLexerMakefile::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermakefile_blockend_isbase) {
            qscilexermakefile_blockend_isbase = false;
            return QsciLexerMakefile::blockEnd(style);
        }
        auto blockend_cb = qscilexermakefile_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermakefile_blocklookback_isbase) {
            qscilexermakefile_blocklookback_isbase = false;
            return QsciLexerMakefile::blockLookback();
        }
        auto blocklookback_cb = qscilexermakefile_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermakefile_blockstart_isbase) {
            qscilexermakefile_blockstart_isbase = false;
            return QsciLexerMakefile::blockStart(style);
        }
        auto blockstart_cb = qscilexermakefile_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermakefile_blockstartkeyword_isbase) {
            qscilexermakefile_blockstartkeyword_isbase = false;
            return QsciLexerMakefile::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexermakefile_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermakefile_bracestyle_isbase) {
            qscilexermakefile_bracestyle_isbase = false;
            return QsciLexerMakefile::braceStyle();
        }
        auto bracestyle_cb = qscilexermakefile_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermakefile_casesensitive_isbase) {
            qscilexermakefile_casesensitive_isbase = false;
            return QsciLexerMakefile::caseSensitive();
        }
        auto casesensitive_cb = qscilexermakefile_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermakefile_color_isbase) {
            qscilexermakefile_color_isbase = false;
            return QsciLexerMakefile::color(style);
        }
        auto color_cb = qscilexermakefile_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermakefile_eolfill_isbase) {
            qscilexermakefile_eolfill_isbase = false;
            return QsciLexerMakefile::eolFill(style);
        }
        auto eolfill_cb = qscilexermakefile_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermakefile_font_isbase) {
            qscilexermakefile_font_isbase = false;
            return QsciLexerMakefile::font(style);
        }
        auto font_cb = qscilexermakefile_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermakefile_indentationguideview_isbase) {
            qscilexermakefile_indentationguideview_isbase = false;
            return QsciLexerMakefile::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexermakefile_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermakefile_keywords_isbase) {
            qscilexermakefile_keywords_isbase = false;
            return QsciLexerMakefile::keywords(set);
        }
        auto keywords_cb = qscilexermakefile_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermakefile_defaultstyle_isbase) {
            qscilexermakefile_defaultstyle_isbase = false;
            return QsciLexerMakefile::defaultStyle();
        }
        auto defaultstyle_cb = qscilexermakefile_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexermakefile_description_callback;
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
        if (qscilexermakefile_paper_isbase) {
            qscilexermakefile_paper_isbase = false;
            return QsciLexerMakefile::paper(style);
        }
        auto paper_cb = qscilexermakefile_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermakefile_defaultcolor2_isbase) {
            qscilexermakefile_defaultcolor2_isbase = false;
            return QsciLexerMakefile::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexermakefile_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermakefile_defaulteolfill_isbase) {
            qscilexermakefile_defaulteolfill_isbase = false;
            return QsciLexerMakefile::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexermakefile_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermakefile_defaultfont2_isbase) {
            qscilexermakefile_defaultfont2_isbase = false;
            return QsciLexerMakefile::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexermakefile_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermakefile_defaultpaper2_isbase) {
            qscilexermakefile_defaultpaper2_isbase = false;
            return QsciLexerMakefile::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexermakefile_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMakefile::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermakefile_seteditor_isbase) {
            qscilexermakefile_seteditor_isbase = false;
            QsciLexerMakefile::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexermakefile_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermakefile_refreshproperties_isbase) {
            qscilexermakefile_refreshproperties_isbase = false;
            QsciLexerMakefile::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexermakefile_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerMakefile::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermakefile_stylebitsneeded_isbase) {
            qscilexermakefile_stylebitsneeded_isbase = false;
            return QsciLexerMakefile::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexermakefile_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermakefile_wordcharacters_isbase) {
            qscilexermakefile_wordcharacters_isbase = false;
            return QsciLexerMakefile::wordCharacters();
        }
        auto wordcharacters_cb = qscilexermakefile_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermakefile_setautoindentstyle_isbase) {
            qscilexermakefile_setautoindentstyle_isbase = false;
            QsciLexerMakefile::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexermakefile_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermakefile_setcolor_isbase) {
            qscilexermakefile_setcolor_isbase = false;
            QsciLexerMakefile::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexermakefile_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermakefile_seteolfill_isbase) {
            qscilexermakefile_seteolfill_isbase = false;
            QsciLexerMakefile::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexermakefile_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermakefile_setfont_isbase) {
            qscilexermakefile_setfont_isbase = false;
            QsciLexerMakefile::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexermakefile_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermakefile_setpaper_isbase) {
            qscilexermakefile_setpaper_isbase = false;
            QsciLexerMakefile::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexermakefile_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermakefile_readproperties_isbase) {
            qscilexermakefile_readproperties_isbase = false;
            return QsciLexerMakefile::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexermakefile_readproperties_callback;
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
        return QsciLexerMakefile::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermakefile_writeproperties_isbase) {
            qscilexermakefile_writeproperties_isbase = false;
            return QsciLexerMakefile::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexermakefile_writeproperties_callback;
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
        return QsciLexerMakefile::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermakefile_event_isbase) {
            qscilexermakefile_event_isbase = false;
            return QsciLexerMakefile::event(event);
        }
        auto event_cb = qscilexermakefile_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermakefile_eventfilter_isbase) {
            qscilexermakefile_eventfilter_isbase = false;
            return QsciLexerMakefile::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexermakefile_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMakefile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermakefile_timerevent_isbase) {
            qscilexermakefile_timerevent_isbase = false;
            QsciLexerMakefile::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexermakefile_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermakefile_childevent_isbase) {
            qscilexermakefile_childevent_isbase = false;
            QsciLexerMakefile::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexermakefile_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermakefile_customevent_isbase) {
            qscilexermakefile_customevent_isbase = false;
            QsciLexerMakefile::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexermakefile_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_connectnotify_isbase) {
            qscilexermakefile_connectnotify_isbase = false;
            QsciLexerMakefile::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexermakefile_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_disconnectnotify_isbase) {
            qscilexermakefile_disconnectnotify_isbase = false;
            QsciLexerMakefile::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexermakefile_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerMakefile::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexermakefile_textasbytes_isbase) {
            qscilexermakefile_textasbytes_isbase = false;
            return QsciLexerMakefile::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexermakefile_textasbytes_callback;
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
        return QsciLexerMakefile::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexermakefile_bytesastext_isbase) {
            qscilexermakefile_bytesastext_isbase = false;
            return QsciLexerMakefile::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexermakefile_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerMakefile::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermakefile_sender_isbase) {
            qscilexermakefile_sender_isbase = false;
            return QsciLexerMakefile::sender();
        }
        auto sender_cb = qscilexermakefile_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerMakefile::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermakefile_sendersignalindex_isbase) {
            qscilexermakefile_sendersignalindex_isbase = false;
            return QsciLexerMakefile::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexermakefile_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermakefile_receivers_isbase) {
            qscilexermakefile_receivers_isbase = false;
            return QsciLexerMakefile::receivers(signal);
        }
        auto receivers_cb = qscilexermakefile_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermakefile_issignalconnected_isbase) {
            qscilexermakefile_issignalconnected_isbase = false;
            return QsciLexerMakefile::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexermakefile_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerMakefile_ReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMakefile_SuperReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMakefile_WriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMakefile_SuperWriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMakefile_TimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
    friend void QsciLexerMakefile_SuperTimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
    friend void QsciLexerMakefile_ChildEvent(QsciLexerMakefile* self, QChildEvent* event);
    friend void QsciLexerMakefile_SuperChildEvent(QsciLexerMakefile* self, QChildEvent* event);
    friend void QsciLexerMakefile_CustomEvent(QsciLexerMakefile* self, QEvent* event);
    friend void QsciLexerMakefile_SuperCustomEvent(QsciLexerMakefile* self, QEvent* event);
    friend void QsciLexerMakefile_ConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
    friend void QsciLexerMakefile_SuperConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
    friend void QsciLexerMakefile_DisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
    friend void QsciLexerMakefile_SuperDisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerMakefile_TextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
    friend libqt_string QsciLexerMakefile_SuperTextAsBytes(const QsciLexerMakefile* self, const libqt_string text);
    friend libqt_string QsciLexerMakefile_BytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
    friend libqt_string QsciLexerMakefile_SuperBytesAsText(const QsciLexerMakefile* self, const char* bytes, int size);
    friend QObject* QsciLexerMakefile_Sender(const QsciLexerMakefile* self);
    friend QObject* QsciLexerMakefile_SuperSender(const QsciLexerMakefile* self);
    friend int QsciLexerMakefile_SenderSignalIndex(const QsciLexerMakefile* self);
    friend int QsciLexerMakefile_SuperSenderSignalIndex(const QsciLexerMakefile* self);
    friend int QsciLexerMakefile_Receivers(const QsciLexerMakefile* self, const char* signal);
    friend int QsciLexerMakefile_SuperReceivers(const QsciLexerMakefile* self, const char* signal);
    friend bool QsciLexerMakefile_IsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
    friend bool QsciLexerMakefile_SuperIsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal);
};

#endif
