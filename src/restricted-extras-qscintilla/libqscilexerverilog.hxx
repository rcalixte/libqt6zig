#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVERILOG_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVERILOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVerilog so that we can call protected methods
class VirtualQsciLexerVerilog final : public QsciLexerVerilog {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerVerilog = true;

    // Virtual class public types (including callbacks)
    using QsciLexerVerilog_Metacall_Callback = int (*)(QsciLexerVerilog*, int, int, void**);
    using QsciLexerVerilog_Language_Callback = const char* (*)();
    using QsciLexerVerilog_Lexer_Callback = const char* (*)();
    using QsciLexerVerilog_LexerId_Callback = int (*)();
    using QsciLexerVerilog_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerVerilog_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerVerilog_BlockEnd_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockLookback_Callback = int (*)();
    using QsciLexerVerilog_BlockStart_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BraceStyle_Callback = int (*)();
    using QsciLexerVerilog_CaseSensitive_Callback = bool (*)();
    using QsciLexerVerilog_Color_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_EolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Font_Callback = QFont* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_IndentationGuideView_Callback = int (*)();
    using QsciLexerVerilog_Keywords_Callback = const char* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultStyle_Callback = int (*)();
    using QsciLexerVerilog_Description_Callback = const char* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Paper_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultColor2_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultEolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultFont2_Callback = QFont* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultPaper2_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetEditor_Callback = void (*)(QsciLexerVerilog*, QsciScintilla*);
    using QsciLexerVerilog_RefreshProperties_Callback = void (*)();
    using QsciLexerVerilog_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerVerilog_WordCharacters_Callback = const char* (*)();
    using QsciLexerVerilog_SetAutoIndentStyle_Callback = void (*)(QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetColor_Callback = void (*)(QsciLexerVerilog*, QColor*, int);
    using QsciLexerVerilog_SetEolFill_Callback = void (*)(QsciLexerVerilog*, bool, int);
    using QsciLexerVerilog_SetFont_Callback = void (*)(QsciLexerVerilog*, QFont*, int);
    using QsciLexerVerilog_SetPaper_Callback = void (*)(QsciLexerVerilog*, QColor*, int);
    using QsciLexerVerilog_ReadProperties_Callback = bool (*)(QsciLexerVerilog*, QSettings*, libqt_string);
    using QsciLexerVerilog_WriteProperties_Callback = bool (*)(const QsciLexerVerilog*, QSettings*, libqt_string);
    using QsciLexerVerilog_Event_Callback = bool (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_EventFilter_Callback = bool (*)(QsciLexerVerilog*, QObject*, QEvent*);
    using QsciLexerVerilog_TimerEvent_Callback = void (*)(QsciLexerVerilog*, QTimerEvent*);
    using QsciLexerVerilog_ChildEvent_Callback = void (*)(QsciLexerVerilog*, QChildEvent*);
    using QsciLexerVerilog_CustomEvent_Callback = void (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_ConnectNotify_Callback = void (*)(QsciLexerVerilog*, QMetaMethod*);
    using QsciLexerVerilog_DisconnectNotify_Callback = void (*)(QsciLexerVerilog*, QMetaMethod*);
    using QsciLexerVerilog_TextAsBytes_Callback = const char* (*)(const QsciLexerVerilog*, libqt_string);
    using QsciLexerVerilog_BytesAsText_Callback = const char* (*)(const QsciLexerVerilog*, const char*, int);
    using QsciLexerVerilog_Sender_Callback = QObject* (*)();
    using QsciLexerVerilog_SenderSignalIndex_Callback = int (*)();
    using QsciLexerVerilog_Receivers_Callback = int (*)(const QsciLexerVerilog*, const char*);
    using QsciLexerVerilog_IsSignalConnected_Callback = bool (*)(const QsciLexerVerilog*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerVerilog_Metacall_Callback qscilexerverilog_metacall_callback = nullptr;
    QsciLexerVerilog_Language_Callback qscilexerverilog_language_callback = nullptr;
    QsciLexerVerilog_Lexer_Callback qscilexerverilog_lexer_callback = nullptr;
    QsciLexerVerilog_LexerId_Callback qscilexerverilog_lexerid_callback = nullptr;
    QsciLexerVerilog_AutoCompletionFillups_Callback qscilexerverilog_autocompletionfillups_callback = nullptr;
    QsciLexerVerilog_AutoCompletionWordSeparators_Callback qscilexerverilog_autocompletionwordseparators_callback = nullptr;
    QsciLexerVerilog_BlockEnd_Callback qscilexerverilog_blockend_callback = nullptr;
    QsciLexerVerilog_BlockLookback_Callback qscilexerverilog_blocklookback_callback = nullptr;
    QsciLexerVerilog_BlockStart_Callback qscilexerverilog_blockstart_callback = nullptr;
    QsciLexerVerilog_BlockStartKeyword_Callback qscilexerverilog_blockstartkeyword_callback = nullptr;
    QsciLexerVerilog_BraceStyle_Callback qscilexerverilog_bracestyle_callback = nullptr;
    QsciLexerVerilog_CaseSensitive_Callback qscilexerverilog_casesensitive_callback = nullptr;
    QsciLexerVerilog_Color_Callback qscilexerverilog_color_callback = nullptr;
    QsciLexerVerilog_EolFill_Callback qscilexerverilog_eolfill_callback = nullptr;
    QsciLexerVerilog_Font_Callback qscilexerverilog_font_callback = nullptr;
    QsciLexerVerilog_IndentationGuideView_Callback qscilexerverilog_indentationguideview_callback = nullptr;
    QsciLexerVerilog_Keywords_Callback qscilexerverilog_keywords_callback = nullptr;
    QsciLexerVerilog_DefaultStyle_Callback qscilexerverilog_defaultstyle_callback = nullptr;
    QsciLexerVerilog_Description_Callback qscilexerverilog_description_callback = nullptr;
    QsciLexerVerilog_Paper_Callback qscilexerverilog_paper_callback = nullptr;
    QsciLexerVerilog_DefaultColor2_Callback qscilexerverilog_defaultcolor2_callback = nullptr;
    QsciLexerVerilog_DefaultEolFill_Callback qscilexerverilog_defaulteolfill_callback = nullptr;
    QsciLexerVerilog_DefaultFont2_Callback qscilexerverilog_defaultfont2_callback = nullptr;
    QsciLexerVerilog_DefaultPaper2_Callback qscilexerverilog_defaultpaper2_callback = nullptr;
    QsciLexerVerilog_SetEditor_Callback qscilexerverilog_seteditor_callback = nullptr;
    QsciLexerVerilog_RefreshProperties_Callback qscilexerverilog_refreshproperties_callback = nullptr;
    QsciLexerVerilog_StyleBitsNeeded_Callback qscilexerverilog_stylebitsneeded_callback = nullptr;
    QsciLexerVerilog_WordCharacters_Callback qscilexerverilog_wordcharacters_callback = nullptr;
    QsciLexerVerilog_SetAutoIndentStyle_Callback qscilexerverilog_setautoindentstyle_callback = nullptr;
    QsciLexerVerilog_SetColor_Callback qscilexerverilog_setcolor_callback = nullptr;
    QsciLexerVerilog_SetEolFill_Callback qscilexerverilog_seteolfill_callback = nullptr;
    QsciLexerVerilog_SetFont_Callback qscilexerverilog_setfont_callback = nullptr;
    QsciLexerVerilog_SetPaper_Callback qscilexerverilog_setpaper_callback = nullptr;
    QsciLexerVerilog_ReadProperties_Callback qscilexerverilog_readproperties_callback = nullptr;
    QsciLexerVerilog_WriteProperties_Callback qscilexerverilog_writeproperties_callback = nullptr;
    QsciLexerVerilog_Event_Callback qscilexerverilog_event_callback = nullptr;
    QsciLexerVerilog_EventFilter_Callback qscilexerverilog_eventfilter_callback = nullptr;
    QsciLexerVerilog_TimerEvent_Callback qscilexerverilog_timerevent_callback = nullptr;
    QsciLexerVerilog_ChildEvent_Callback qscilexerverilog_childevent_callback = nullptr;
    QsciLexerVerilog_CustomEvent_Callback qscilexerverilog_customevent_callback = nullptr;
    QsciLexerVerilog_ConnectNotify_Callback qscilexerverilog_connectnotify_callback = nullptr;
    QsciLexerVerilog_DisconnectNotify_Callback qscilexerverilog_disconnectnotify_callback = nullptr;
    QsciLexerVerilog_TextAsBytes_Callback qscilexerverilog_textasbytes_callback = nullptr;
    QsciLexerVerilog_BytesAsText_Callback qscilexerverilog_bytesastext_callback = nullptr;
    QsciLexerVerilog_Sender_Callback qscilexerverilog_sender_callback = nullptr;
    QsciLexerVerilog_SenderSignalIndex_Callback qscilexerverilog_sendersignalindex_callback = nullptr;
    QsciLexerVerilog_Receivers_Callback qscilexerverilog_receivers_callback = nullptr;
    QsciLexerVerilog_IsSignalConnected_Callback qscilexerverilog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerverilog_metacall_isbase = false;
    mutable bool qscilexerverilog_language_isbase = false;
    mutable bool qscilexerverilog_lexer_isbase = false;
    mutable bool qscilexerverilog_lexerid_isbase = false;
    mutable bool qscilexerverilog_autocompletionfillups_isbase = false;
    mutable bool qscilexerverilog_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerverilog_blockend_isbase = false;
    mutable bool qscilexerverilog_blocklookback_isbase = false;
    mutable bool qscilexerverilog_blockstart_isbase = false;
    mutable bool qscilexerverilog_blockstartkeyword_isbase = false;
    mutable bool qscilexerverilog_bracestyle_isbase = false;
    mutable bool qscilexerverilog_casesensitive_isbase = false;
    mutable bool qscilexerverilog_color_isbase = false;
    mutable bool qscilexerverilog_eolfill_isbase = false;
    mutable bool qscilexerverilog_font_isbase = false;
    mutable bool qscilexerverilog_indentationguideview_isbase = false;
    mutable bool qscilexerverilog_keywords_isbase = false;
    mutable bool qscilexerverilog_defaultstyle_isbase = false;
    mutable bool qscilexerverilog_description_isbase = false;
    mutable bool qscilexerverilog_paper_isbase = false;
    mutable bool qscilexerverilog_defaultcolor2_isbase = false;
    mutable bool qscilexerverilog_defaulteolfill_isbase = false;
    mutable bool qscilexerverilog_defaultfont2_isbase = false;
    mutable bool qscilexerverilog_defaultpaper2_isbase = false;
    mutable bool qscilexerverilog_seteditor_isbase = false;
    mutable bool qscilexerverilog_refreshproperties_isbase = false;
    mutable bool qscilexerverilog_stylebitsneeded_isbase = false;
    mutable bool qscilexerverilog_wordcharacters_isbase = false;
    mutable bool qscilexerverilog_setautoindentstyle_isbase = false;
    mutable bool qscilexerverilog_setcolor_isbase = false;
    mutable bool qscilexerverilog_seteolfill_isbase = false;
    mutable bool qscilexerverilog_setfont_isbase = false;
    mutable bool qscilexerverilog_setpaper_isbase = false;
    mutable bool qscilexerverilog_readproperties_isbase = false;
    mutable bool qscilexerverilog_writeproperties_isbase = false;
    mutable bool qscilexerverilog_event_isbase = false;
    mutable bool qscilexerverilog_eventfilter_isbase = false;
    mutable bool qscilexerverilog_timerevent_isbase = false;
    mutable bool qscilexerverilog_childevent_isbase = false;
    mutable bool qscilexerverilog_customevent_isbase = false;
    mutable bool qscilexerverilog_connectnotify_isbase = false;
    mutable bool qscilexerverilog_disconnectnotify_isbase = false;
    mutable bool qscilexerverilog_textasbytes_isbase = false;
    mutable bool qscilexerverilog_bytesastext_isbase = false;
    mutable bool qscilexerverilog_sender_isbase = false;
    mutable bool qscilexerverilog_sendersignalindex_isbase = false;
    mutable bool qscilexerverilog_receivers_isbase = false;
    mutable bool qscilexerverilog_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerVerilog() : QsciLexerVerilog() {};
    VirtualQsciLexerVerilog(QObject* parent) : QsciLexerVerilog(parent) {};

    ~VirtualQsciLexerVerilog() {
        qscilexerverilog_metacall_callback = nullptr;
        qscilexerverilog_language_callback = nullptr;
        qscilexerverilog_lexer_callback = nullptr;
        qscilexerverilog_lexerid_callback = nullptr;
        qscilexerverilog_autocompletionfillups_callback = nullptr;
        qscilexerverilog_autocompletionwordseparators_callback = nullptr;
        qscilexerverilog_blockend_callback = nullptr;
        qscilexerverilog_blocklookback_callback = nullptr;
        qscilexerverilog_blockstart_callback = nullptr;
        qscilexerverilog_blockstartkeyword_callback = nullptr;
        qscilexerverilog_bracestyle_callback = nullptr;
        qscilexerverilog_casesensitive_callback = nullptr;
        qscilexerverilog_color_callback = nullptr;
        qscilexerverilog_eolfill_callback = nullptr;
        qscilexerverilog_font_callback = nullptr;
        qscilexerverilog_indentationguideview_callback = nullptr;
        qscilexerverilog_keywords_callback = nullptr;
        qscilexerverilog_defaultstyle_callback = nullptr;
        qscilexerverilog_description_callback = nullptr;
        qscilexerverilog_paper_callback = nullptr;
        qscilexerverilog_defaultcolor2_callback = nullptr;
        qscilexerverilog_defaulteolfill_callback = nullptr;
        qscilexerverilog_defaultfont2_callback = nullptr;
        qscilexerverilog_defaultpaper2_callback = nullptr;
        qscilexerverilog_seteditor_callback = nullptr;
        qscilexerverilog_refreshproperties_callback = nullptr;
        qscilexerverilog_stylebitsneeded_callback = nullptr;
        qscilexerverilog_wordcharacters_callback = nullptr;
        qscilexerverilog_setautoindentstyle_callback = nullptr;
        qscilexerverilog_setcolor_callback = nullptr;
        qscilexerverilog_seteolfill_callback = nullptr;
        qscilexerverilog_setfont_callback = nullptr;
        qscilexerverilog_setpaper_callback = nullptr;
        qscilexerverilog_readproperties_callback = nullptr;
        qscilexerverilog_writeproperties_callback = nullptr;
        qscilexerverilog_event_callback = nullptr;
        qscilexerverilog_eventfilter_callback = nullptr;
        qscilexerverilog_timerevent_callback = nullptr;
        qscilexerverilog_childevent_callback = nullptr;
        qscilexerverilog_customevent_callback = nullptr;
        qscilexerverilog_connectnotify_callback = nullptr;
        qscilexerverilog_disconnectnotify_callback = nullptr;
        qscilexerverilog_textasbytes_callback = nullptr;
        qscilexerverilog_bytesastext_callback = nullptr;
        qscilexerverilog_sender_callback = nullptr;
        qscilexerverilog_sendersignalindex_callback = nullptr;
        qscilexerverilog_receivers_callback = nullptr;
        qscilexerverilog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerVerilog_Metacall_Callback(QsciLexerVerilog_Metacall_Callback cb) { qscilexerverilog_metacall_callback = cb; }
    inline void setQsciLexerVerilog_Language_Callback(QsciLexerVerilog_Language_Callback cb) { qscilexerverilog_language_callback = cb; }
    inline void setQsciLexerVerilog_Lexer_Callback(QsciLexerVerilog_Lexer_Callback cb) { qscilexerverilog_lexer_callback = cb; }
    inline void setQsciLexerVerilog_LexerId_Callback(QsciLexerVerilog_LexerId_Callback cb) { qscilexerverilog_lexerid_callback = cb; }
    inline void setQsciLexerVerilog_AutoCompletionFillups_Callback(QsciLexerVerilog_AutoCompletionFillups_Callback cb) { qscilexerverilog_autocompletionfillups_callback = cb; }
    inline void setQsciLexerVerilog_AutoCompletionWordSeparators_Callback(QsciLexerVerilog_AutoCompletionWordSeparators_Callback cb) { qscilexerverilog_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerVerilog_BlockEnd_Callback(QsciLexerVerilog_BlockEnd_Callback cb) { qscilexerverilog_blockend_callback = cb; }
    inline void setQsciLexerVerilog_BlockLookback_Callback(QsciLexerVerilog_BlockLookback_Callback cb) { qscilexerverilog_blocklookback_callback = cb; }
    inline void setQsciLexerVerilog_BlockStart_Callback(QsciLexerVerilog_BlockStart_Callback cb) { qscilexerverilog_blockstart_callback = cb; }
    inline void setQsciLexerVerilog_BlockStartKeyword_Callback(QsciLexerVerilog_BlockStartKeyword_Callback cb) { qscilexerverilog_blockstartkeyword_callback = cb; }
    inline void setQsciLexerVerilog_BraceStyle_Callback(QsciLexerVerilog_BraceStyle_Callback cb) { qscilexerverilog_bracestyle_callback = cb; }
    inline void setQsciLexerVerilog_CaseSensitive_Callback(QsciLexerVerilog_CaseSensitive_Callback cb) { qscilexerverilog_casesensitive_callback = cb; }
    inline void setQsciLexerVerilog_Color_Callback(QsciLexerVerilog_Color_Callback cb) { qscilexerverilog_color_callback = cb; }
    inline void setQsciLexerVerilog_EolFill_Callback(QsciLexerVerilog_EolFill_Callback cb) { qscilexerverilog_eolfill_callback = cb; }
    inline void setQsciLexerVerilog_Font_Callback(QsciLexerVerilog_Font_Callback cb) { qscilexerverilog_font_callback = cb; }
    inline void setQsciLexerVerilog_IndentationGuideView_Callback(QsciLexerVerilog_IndentationGuideView_Callback cb) { qscilexerverilog_indentationguideview_callback = cb; }
    inline void setQsciLexerVerilog_Keywords_Callback(QsciLexerVerilog_Keywords_Callback cb) { qscilexerverilog_keywords_callback = cb; }
    inline void setQsciLexerVerilog_DefaultStyle_Callback(QsciLexerVerilog_DefaultStyle_Callback cb) { qscilexerverilog_defaultstyle_callback = cb; }
    inline void setQsciLexerVerilog_Description_Callback(QsciLexerVerilog_Description_Callback cb) { qscilexerverilog_description_callback = cb; }
    inline void setQsciLexerVerilog_Paper_Callback(QsciLexerVerilog_Paper_Callback cb) { qscilexerverilog_paper_callback = cb; }
    inline void setQsciLexerVerilog_DefaultColor2_Callback(QsciLexerVerilog_DefaultColor2_Callback cb) { qscilexerverilog_defaultcolor2_callback = cb; }
    inline void setQsciLexerVerilog_DefaultEolFill_Callback(QsciLexerVerilog_DefaultEolFill_Callback cb) { qscilexerverilog_defaulteolfill_callback = cb; }
    inline void setQsciLexerVerilog_DefaultFont2_Callback(QsciLexerVerilog_DefaultFont2_Callback cb) { qscilexerverilog_defaultfont2_callback = cb; }
    inline void setQsciLexerVerilog_DefaultPaper2_Callback(QsciLexerVerilog_DefaultPaper2_Callback cb) { qscilexerverilog_defaultpaper2_callback = cb; }
    inline void setQsciLexerVerilog_SetEditor_Callback(QsciLexerVerilog_SetEditor_Callback cb) { qscilexerverilog_seteditor_callback = cb; }
    inline void setQsciLexerVerilog_RefreshProperties_Callback(QsciLexerVerilog_RefreshProperties_Callback cb) { qscilexerverilog_refreshproperties_callback = cb; }
    inline void setQsciLexerVerilog_StyleBitsNeeded_Callback(QsciLexerVerilog_StyleBitsNeeded_Callback cb) { qscilexerverilog_stylebitsneeded_callback = cb; }
    inline void setQsciLexerVerilog_WordCharacters_Callback(QsciLexerVerilog_WordCharacters_Callback cb) { qscilexerverilog_wordcharacters_callback = cb; }
    inline void setQsciLexerVerilog_SetAutoIndentStyle_Callback(QsciLexerVerilog_SetAutoIndentStyle_Callback cb) { qscilexerverilog_setautoindentstyle_callback = cb; }
    inline void setQsciLexerVerilog_SetColor_Callback(QsciLexerVerilog_SetColor_Callback cb) { qscilexerverilog_setcolor_callback = cb; }
    inline void setQsciLexerVerilog_SetEolFill_Callback(QsciLexerVerilog_SetEolFill_Callback cb) { qscilexerverilog_seteolfill_callback = cb; }
    inline void setQsciLexerVerilog_SetFont_Callback(QsciLexerVerilog_SetFont_Callback cb) { qscilexerverilog_setfont_callback = cb; }
    inline void setQsciLexerVerilog_SetPaper_Callback(QsciLexerVerilog_SetPaper_Callback cb) { qscilexerverilog_setpaper_callback = cb; }
    inline void setQsciLexerVerilog_ReadProperties_Callback(QsciLexerVerilog_ReadProperties_Callback cb) { qscilexerverilog_readproperties_callback = cb; }
    inline void setQsciLexerVerilog_WriteProperties_Callback(QsciLexerVerilog_WriteProperties_Callback cb) { qscilexerverilog_writeproperties_callback = cb; }
    inline void setQsciLexerVerilog_Event_Callback(QsciLexerVerilog_Event_Callback cb) { qscilexerverilog_event_callback = cb; }
    inline void setQsciLexerVerilog_EventFilter_Callback(QsciLexerVerilog_EventFilter_Callback cb) { qscilexerverilog_eventfilter_callback = cb; }
    inline void setQsciLexerVerilog_TimerEvent_Callback(QsciLexerVerilog_TimerEvent_Callback cb) { qscilexerverilog_timerevent_callback = cb; }
    inline void setQsciLexerVerilog_ChildEvent_Callback(QsciLexerVerilog_ChildEvent_Callback cb) { qscilexerverilog_childevent_callback = cb; }
    inline void setQsciLexerVerilog_CustomEvent_Callback(QsciLexerVerilog_CustomEvent_Callback cb) { qscilexerverilog_customevent_callback = cb; }
    inline void setQsciLexerVerilog_ConnectNotify_Callback(QsciLexerVerilog_ConnectNotify_Callback cb) { qscilexerverilog_connectnotify_callback = cb; }
    inline void setQsciLexerVerilog_DisconnectNotify_Callback(QsciLexerVerilog_DisconnectNotify_Callback cb) { qscilexerverilog_disconnectnotify_callback = cb; }
    inline void setQsciLexerVerilog_TextAsBytes_Callback(QsciLexerVerilog_TextAsBytes_Callback cb) { qscilexerverilog_textasbytes_callback = cb; }
    inline void setQsciLexerVerilog_BytesAsText_Callback(QsciLexerVerilog_BytesAsText_Callback cb) { qscilexerverilog_bytesastext_callback = cb; }
    inline void setQsciLexerVerilog_Sender_Callback(QsciLexerVerilog_Sender_Callback cb) { qscilexerverilog_sender_callback = cb; }
    inline void setQsciLexerVerilog_SenderSignalIndex_Callback(QsciLexerVerilog_SenderSignalIndex_Callback cb) { qscilexerverilog_sendersignalindex_callback = cb; }
    inline void setQsciLexerVerilog_Receivers_Callback(QsciLexerVerilog_Receivers_Callback cb) { qscilexerverilog_receivers_callback = cb; }
    inline void setQsciLexerVerilog_IsSignalConnected_Callback(QsciLexerVerilog_IsSignalConnected_Callback cb) { qscilexerverilog_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerVerilog_Metacall_IsBase(bool value) const { qscilexerverilog_metacall_isbase = value; }
    inline void setQsciLexerVerilog_Language_IsBase(bool value) const { qscilexerverilog_language_isbase = value; }
    inline void setQsciLexerVerilog_Lexer_IsBase(bool value) const { qscilexerverilog_lexer_isbase = value; }
    inline void setQsciLexerVerilog_LexerId_IsBase(bool value) const { qscilexerverilog_lexerid_isbase = value; }
    inline void setQsciLexerVerilog_AutoCompletionFillups_IsBase(bool value) const { qscilexerverilog_autocompletionfillups_isbase = value; }
    inline void setQsciLexerVerilog_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerverilog_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerVerilog_BlockEnd_IsBase(bool value) const { qscilexerverilog_blockend_isbase = value; }
    inline void setQsciLexerVerilog_BlockLookback_IsBase(bool value) const { qscilexerverilog_blocklookback_isbase = value; }
    inline void setQsciLexerVerilog_BlockStart_IsBase(bool value) const { qscilexerverilog_blockstart_isbase = value; }
    inline void setQsciLexerVerilog_BlockStartKeyword_IsBase(bool value) const { qscilexerverilog_blockstartkeyword_isbase = value; }
    inline void setQsciLexerVerilog_BraceStyle_IsBase(bool value) const { qscilexerverilog_bracestyle_isbase = value; }
    inline void setQsciLexerVerilog_CaseSensitive_IsBase(bool value) const { qscilexerverilog_casesensitive_isbase = value; }
    inline void setQsciLexerVerilog_Color_IsBase(bool value) const { qscilexerverilog_color_isbase = value; }
    inline void setQsciLexerVerilog_EolFill_IsBase(bool value) const { qscilexerverilog_eolfill_isbase = value; }
    inline void setQsciLexerVerilog_Font_IsBase(bool value) const { qscilexerverilog_font_isbase = value; }
    inline void setQsciLexerVerilog_IndentationGuideView_IsBase(bool value) const { qscilexerverilog_indentationguideview_isbase = value; }
    inline void setQsciLexerVerilog_Keywords_IsBase(bool value) const { qscilexerverilog_keywords_isbase = value; }
    inline void setQsciLexerVerilog_DefaultStyle_IsBase(bool value) const { qscilexerverilog_defaultstyle_isbase = value; }
    inline void setQsciLexerVerilog_Description_IsBase(bool value) const { qscilexerverilog_description_isbase = value; }
    inline void setQsciLexerVerilog_Paper_IsBase(bool value) const { qscilexerverilog_paper_isbase = value; }
    inline void setQsciLexerVerilog_DefaultColor2_IsBase(bool value) const { qscilexerverilog_defaultcolor2_isbase = value; }
    inline void setQsciLexerVerilog_DefaultEolFill_IsBase(bool value) const { qscilexerverilog_defaulteolfill_isbase = value; }
    inline void setQsciLexerVerilog_DefaultFont2_IsBase(bool value) const { qscilexerverilog_defaultfont2_isbase = value; }
    inline void setQsciLexerVerilog_DefaultPaper2_IsBase(bool value) const { qscilexerverilog_defaultpaper2_isbase = value; }
    inline void setQsciLexerVerilog_SetEditor_IsBase(bool value) const { qscilexerverilog_seteditor_isbase = value; }
    inline void setQsciLexerVerilog_RefreshProperties_IsBase(bool value) const { qscilexerverilog_refreshproperties_isbase = value; }
    inline void setQsciLexerVerilog_StyleBitsNeeded_IsBase(bool value) const { qscilexerverilog_stylebitsneeded_isbase = value; }
    inline void setQsciLexerVerilog_WordCharacters_IsBase(bool value) const { qscilexerverilog_wordcharacters_isbase = value; }
    inline void setQsciLexerVerilog_SetAutoIndentStyle_IsBase(bool value) const { qscilexerverilog_setautoindentstyle_isbase = value; }
    inline void setQsciLexerVerilog_SetColor_IsBase(bool value) const { qscilexerverilog_setcolor_isbase = value; }
    inline void setQsciLexerVerilog_SetEolFill_IsBase(bool value) const { qscilexerverilog_seteolfill_isbase = value; }
    inline void setQsciLexerVerilog_SetFont_IsBase(bool value) const { qscilexerverilog_setfont_isbase = value; }
    inline void setQsciLexerVerilog_SetPaper_IsBase(bool value) const { qscilexerverilog_setpaper_isbase = value; }
    inline void setQsciLexerVerilog_ReadProperties_IsBase(bool value) const { qscilexerverilog_readproperties_isbase = value; }
    inline void setQsciLexerVerilog_WriteProperties_IsBase(bool value) const { qscilexerverilog_writeproperties_isbase = value; }
    inline void setQsciLexerVerilog_Event_IsBase(bool value) const { qscilexerverilog_event_isbase = value; }
    inline void setQsciLexerVerilog_EventFilter_IsBase(bool value) const { qscilexerverilog_eventfilter_isbase = value; }
    inline void setQsciLexerVerilog_TimerEvent_IsBase(bool value) const { qscilexerverilog_timerevent_isbase = value; }
    inline void setQsciLexerVerilog_ChildEvent_IsBase(bool value) const { qscilexerverilog_childevent_isbase = value; }
    inline void setQsciLexerVerilog_CustomEvent_IsBase(bool value) const { qscilexerverilog_customevent_isbase = value; }
    inline void setQsciLexerVerilog_ConnectNotify_IsBase(bool value) const { qscilexerverilog_connectnotify_isbase = value; }
    inline void setQsciLexerVerilog_DisconnectNotify_IsBase(bool value) const { qscilexerverilog_disconnectnotify_isbase = value; }
    inline void setQsciLexerVerilog_TextAsBytes_IsBase(bool value) const { qscilexerverilog_textasbytes_isbase = value; }
    inline void setQsciLexerVerilog_BytesAsText_IsBase(bool value) const { qscilexerverilog_bytesastext_isbase = value; }
    inline void setQsciLexerVerilog_Sender_IsBase(bool value) const { qscilexerverilog_sender_isbase = value; }
    inline void setQsciLexerVerilog_SenderSignalIndex_IsBase(bool value) const { qscilexerverilog_sendersignalindex_isbase = value; }
    inline void setQsciLexerVerilog_Receivers_IsBase(bool value) const { qscilexerverilog_receivers_isbase = value; }
    inline void setQsciLexerVerilog_IsSignalConnected_IsBase(bool value) const { qscilexerverilog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerverilog_metacall_isbase) {
            qscilexerverilog_metacall_isbase = false;
            return QsciLexerVerilog::qt_metacall(param1, param2, param3);
        } else if (qscilexerverilog_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerverilog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerverilog_language_callback != nullptr) {
            const char* callback_ret = qscilexerverilog_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerverilog_lexer_isbase) {
            qscilexerverilog_lexer_isbase = false;
            return QsciLexerVerilog::lexer();
        } else if (qscilexerverilog_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerverilog_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerVerilog::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerverilog_lexerid_isbase) {
            qscilexerverilog_lexerid_isbase = false;
            return QsciLexerVerilog::lexerId();
        } else if (qscilexerverilog_lexerid_callback != nullptr) {
            int callback_ret = qscilexerverilog_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerverilog_autocompletionfillups_isbase) {
            qscilexerverilog_autocompletionfillups_isbase = false;
            return QsciLexerVerilog::autoCompletionFillups();
        } else if (qscilexerverilog_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerverilog_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerVerilog::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerverilog_autocompletionwordseparators_isbase) {
            qscilexerverilog_autocompletionwordseparators_isbase = false;
            return QsciLexerVerilog::autoCompletionWordSeparators();
        } else if (qscilexerverilog_autocompletionwordseparators_callback != nullptr) {
            const char** callback_ret = qscilexerverilog_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerVerilog::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerverilog_blockend_isbase) {
            qscilexerverilog_blockend_isbase = false;
            return QsciLexerVerilog::blockEnd(style);
        } else if (qscilexerverilog_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerverilog_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerverilog_blocklookback_isbase) {
            qscilexerverilog_blocklookback_isbase = false;
            return QsciLexerVerilog::blockLookback();
        } else if (qscilexerverilog_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerverilog_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerverilog_blockstart_isbase) {
            qscilexerverilog_blockstart_isbase = false;
            return QsciLexerVerilog::blockStart(style);
        } else if (qscilexerverilog_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerverilog_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerverilog_blockstartkeyword_isbase) {
            qscilexerverilog_blockstartkeyword_isbase = false;
            return QsciLexerVerilog::blockStartKeyword(style);
        } else if (qscilexerverilog_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerverilog_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerverilog_bracestyle_isbase) {
            qscilexerverilog_bracestyle_isbase = false;
            return QsciLexerVerilog::braceStyle();
        } else if (qscilexerverilog_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerverilog_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerverilog_casesensitive_isbase) {
            qscilexerverilog_casesensitive_isbase = false;
            return QsciLexerVerilog::caseSensitive();
        } else if (qscilexerverilog_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerverilog_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerVerilog::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerverilog_color_isbase) {
            qscilexerverilog_color_isbase = false;
            return QsciLexerVerilog::color(style);
        } else if (qscilexerverilog_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerverilog_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerverilog_eolfill_isbase) {
            qscilexerverilog_eolfill_isbase = false;
            return QsciLexerVerilog::eolFill(style);
        } else if (qscilexerverilog_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerverilog_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerverilog_font_isbase) {
            qscilexerverilog_font_isbase = false;
            return QsciLexerVerilog::font(style);
        } else if (qscilexerverilog_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerverilog_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerverilog_indentationguideview_isbase) {
            qscilexerverilog_indentationguideview_isbase = false;
            return QsciLexerVerilog::indentationGuideView();
        } else if (qscilexerverilog_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerverilog_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerverilog_keywords_isbase) {
            qscilexerverilog_keywords_isbase = false;
            return QsciLexerVerilog::keywords(set);
        } else if (qscilexerverilog_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerverilog_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerverilog_defaultstyle_isbase) {
            qscilexerverilog_defaultstyle_isbase = false;
            return QsciLexerVerilog::defaultStyle();
        } else if (qscilexerverilog_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerverilog_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerverilog_description_callback != nullptr) {
            int cbval1 = style;

            const char* callback_ret = qscilexerverilog_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerverilog_paper_isbase) {
            qscilexerverilog_paper_isbase = false;
            return QsciLexerVerilog::paper(style);
        } else if (qscilexerverilog_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerverilog_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerverilog_defaultcolor2_isbase) {
            qscilexerverilog_defaultcolor2_isbase = false;
            return QsciLexerVerilog::defaultColor(style);
        } else if (qscilexerverilog_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerverilog_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerverilog_defaulteolfill_isbase) {
            qscilexerverilog_defaulteolfill_isbase = false;
            return QsciLexerVerilog::defaultEolFill(style);
        } else if (qscilexerverilog_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerverilog_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerverilog_defaultfont2_isbase) {
            qscilexerverilog_defaultfont2_isbase = false;
            return QsciLexerVerilog::defaultFont(style);
        } else if (qscilexerverilog_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerverilog_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerverilog_defaultpaper2_isbase) {
            qscilexerverilog_defaultpaper2_isbase = false;
            return QsciLexerVerilog::defaultPaper(style);
        } else if (qscilexerverilog_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerverilog_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVerilog::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerverilog_seteditor_isbase) {
            qscilexerverilog_seteditor_isbase = false;
            QsciLexerVerilog::setEditor(editor);
        } else if (qscilexerverilog_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerverilog_seteditor_callback(this, cbval1);
        } else {
            QsciLexerVerilog::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerverilog_refreshproperties_isbase) {
            qscilexerverilog_refreshproperties_isbase = false;
            QsciLexerVerilog::refreshProperties();
        } else if (qscilexerverilog_refreshproperties_callback != nullptr) {
            qscilexerverilog_refreshproperties_callback();
        } else {
            QsciLexerVerilog::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerverilog_stylebitsneeded_isbase) {
            qscilexerverilog_stylebitsneeded_isbase = false;
            return QsciLexerVerilog::styleBitsNeeded();
        } else if (qscilexerverilog_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerverilog_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerverilog_wordcharacters_isbase) {
            qscilexerverilog_wordcharacters_isbase = false;
            return QsciLexerVerilog::wordCharacters();
        } else if (qscilexerverilog_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerverilog_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerVerilog::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerverilog_setautoindentstyle_isbase) {
            qscilexerverilog_setautoindentstyle_isbase = false;
            QsciLexerVerilog::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerverilog_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerverilog_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerVerilog::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerverilog_setcolor_isbase) {
            qscilexerverilog_setcolor_isbase = false;
            QsciLexerVerilog::setColor(c, style);
        } else if (qscilexerverilog_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerverilog_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVerilog::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerverilog_seteolfill_isbase) {
            qscilexerverilog_seteolfill_isbase = false;
            QsciLexerVerilog::setEolFill(eoffill, style);
        } else if (qscilexerverilog_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerverilog_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVerilog::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerverilog_setfont_isbase) {
            qscilexerverilog_setfont_isbase = false;
            QsciLexerVerilog::setFont(f, style);
        } else if (qscilexerverilog_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerverilog_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVerilog::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerverilog_setpaper_isbase) {
            qscilexerverilog_setpaper_isbase = false;
            QsciLexerVerilog::setPaper(c, style);
        } else if (qscilexerverilog_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerverilog_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVerilog::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerverilog_readproperties_isbase) {
            qscilexerverilog_readproperties_isbase = false;
            return QsciLexerVerilog::readProperties(qs, prefix);
        } else if (qscilexerverilog_readproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc(prefix_str.len + 1));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexerverilog_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVerilog::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerverilog_writeproperties_isbase) {
            qscilexerverilog_writeproperties_isbase = false;
            return QsciLexerVerilog::writeProperties(qs, prefix);
        } else if (qscilexerverilog_writeproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc(prefix_str.len + 1));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexerverilog_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVerilog::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerverilog_event_isbase) {
            qscilexerverilog_event_isbase = false;
            return QsciLexerVerilog::event(event);
        } else if (qscilexerverilog_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerverilog_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerverilog_eventfilter_isbase) {
            qscilexerverilog_eventfilter_isbase = false;
            return QsciLexerVerilog::eventFilter(watched, event);
        } else if (qscilexerverilog_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerverilog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVerilog::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerverilog_timerevent_isbase) {
            qscilexerverilog_timerevent_isbase = false;
            QsciLexerVerilog::timerEvent(event);
        } else if (qscilexerverilog_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerverilog_timerevent_callback(this, cbval1);
        } else {
            QsciLexerVerilog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerverilog_childevent_isbase) {
            qscilexerverilog_childevent_isbase = false;
            QsciLexerVerilog::childEvent(event);
        } else if (qscilexerverilog_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerverilog_childevent_callback(this, cbval1);
        } else {
            QsciLexerVerilog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerverilog_customevent_isbase) {
            qscilexerverilog_customevent_isbase = false;
            QsciLexerVerilog::customEvent(event);
        } else if (qscilexerverilog_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerverilog_customevent_callback(this, cbval1);
        } else {
            QsciLexerVerilog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_connectnotify_isbase) {
            qscilexerverilog_connectnotify_isbase = false;
            QsciLexerVerilog::connectNotify(signal);
        } else if (qscilexerverilog_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerverilog_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerVerilog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_disconnectnotify_isbase) {
            qscilexerverilog_disconnectnotify_isbase = false;
            QsciLexerVerilog::disconnectNotify(signal);
        } else if (qscilexerverilog_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerverilog_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerVerilog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerverilog_textasbytes_isbase) {
            qscilexerverilog_textasbytes_isbase = false;
            return QsciLexerVerilog::textAsBytes(text);
        } else if (qscilexerverilog_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            const char* callback_ret = qscilexerverilog_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerVerilog::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerverilog_bytesastext_isbase) {
            qscilexerverilog_bytesastext_isbase = false;
            return QsciLexerVerilog::bytesAsText(bytes, size);
        } else if (qscilexerverilog_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = qscilexerverilog_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QsciLexerVerilog::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerverilog_sender_isbase) {
            qscilexerverilog_sender_isbase = false;
            return QsciLexerVerilog::sender();
        } else if (qscilexerverilog_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerverilog_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerVerilog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerverilog_sendersignalindex_isbase) {
            qscilexerverilog_sendersignalindex_isbase = false;
            return QsciLexerVerilog::senderSignalIndex();
        } else if (qscilexerverilog_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerverilog_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerverilog_receivers_isbase) {
            qscilexerverilog_receivers_isbase = false;
            return QsciLexerVerilog::receivers(signal);
        } else if (qscilexerverilog_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerverilog_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVerilog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerverilog_issignalconnected_isbase) {
            qscilexerverilog_issignalconnected_isbase = false;
            return QsciLexerVerilog::isSignalConnected(signal);
        } else if (qscilexerverilog_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerverilog_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVerilog::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerVerilog_ReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVerilog_QBaseReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVerilog_WriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVerilog_QBaseWriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerVerilog_TimerEvent(QsciLexerVerilog* self, QTimerEvent* event);
    friend void QsciLexerVerilog_QBaseTimerEvent(QsciLexerVerilog* self, QTimerEvent* event);
    friend void QsciLexerVerilog_ChildEvent(QsciLexerVerilog* self, QChildEvent* event);
    friend void QsciLexerVerilog_QBaseChildEvent(QsciLexerVerilog* self, QChildEvent* event);
    friend void QsciLexerVerilog_CustomEvent(QsciLexerVerilog* self, QEvent* event);
    friend void QsciLexerVerilog_QBaseCustomEvent(QsciLexerVerilog* self, QEvent* event);
    friend void QsciLexerVerilog_ConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
    friend void QsciLexerVerilog_QBaseConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
    friend void QsciLexerVerilog_DisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
    friend void QsciLexerVerilog_QBaseDisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerVerilog_TextAsBytes(const QsciLexerVerilog* self, const libqt_string text);
    friend libqt_string QsciLexerVerilog_QBaseTextAsBytes(const QsciLexerVerilog* self, const libqt_string text);
    friend libqt_string QsciLexerVerilog_BytesAsText(const QsciLexerVerilog* self, const char* bytes, int size);
    friend libqt_string QsciLexerVerilog_QBaseBytesAsText(const QsciLexerVerilog* self, const char* bytes, int size);
    friend QObject* QsciLexerVerilog_Sender(const QsciLexerVerilog* self);
    friend QObject* QsciLexerVerilog_QBaseSender(const QsciLexerVerilog* self);
    friend int QsciLexerVerilog_SenderSignalIndex(const QsciLexerVerilog* self);
    friend int QsciLexerVerilog_QBaseSenderSignalIndex(const QsciLexerVerilog* self);
    friend int QsciLexerVerilog_Receivers(const QsciLexerVerilog* self, const char* signal);
    friend int QsciLexerVerilog_QBaseReceivers(const QsciLexerVerilog* self, const char* signal);
    friend bool QsciLexerVerilog_IsSignalConnected(const QsciLexerVerilog* self, const QMetaMethod* signal);
    friend bool QsciLexerVerilog_QBaseIsSignalConnected(const QsciLexerVerilog* self, const QMetaMethod* signal);
};

#endif
