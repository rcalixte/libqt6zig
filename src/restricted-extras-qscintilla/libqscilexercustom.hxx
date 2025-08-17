#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCUSTOM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCUSTOM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCustom so that we can call protected methods
class VirtualQsciLexerCustom final : public QsciLexerCustom {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCustom = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCustom_Metacall_Callback = int (*)(QsciLexerCustom*, int, int, void**);
    using QsciLexerCustom_StyleText_Callback = void (*)(QsciLexerCustom*, int, int);
    using QsciLexerCustom_SetEditor_Callback = void (*)(QsciLexerCustom*, QsciScintilla*);
    using QsciLexerCustom_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCustom_Language_Callback = const char* (*)();
    using QsciLexerCustom_Lexer_Callback = const char* (*)();
    using QsciLexerCustom_LexerId_Callback = int (*)();
    using QsciLexerCustom_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCustom_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerCustom_BlockEnd_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BlockLookback_Callback = int (*)();
    using QsciLexerCustom_BlockStart_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BraceStyle_Callback = int (*)();
    using QsciLexerCustom_CaseSensitive_Callback = bool (*)();
    using QsciLexerCustom_Color_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_EolFill_Callback = bool (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_Font_Callback = QFont* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_IndentationGuideView_Callback = int (*)();
    using QsciLexerCustom_Keywords_Callback = const char* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultStyle_Callback = int (*)();
    using QsciLexerCustom_Description_Callback = libqt_string (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_Paper_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultColor2_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultEolFill_Callback = bool (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultFont2_Callback = QFont* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_RefreshProperties_Callback = void (*)();
    using QsciLexerCustom_WordCharacters_Callback = const char* (*)();
    using QsciLexerCustom_SetAutoIndentStyle_Callback = void (*)(QsciLexerCustom*, int);
    using QsciLexerCustom_SetColor_Callback = void (*)(QsciLexerCustom*, QColor*, int);
    using QsciLexerCustom_SetEolFill_Callback = void (*)(QsciLexerCustom*, bool, int);
    using QsciLexerCustom_SetFont_Callback = void (*)(QsciLexerCustom*, QFont*, int);
    using QsciLexerCustom_SetPaper_Callback = void (*)(QsciLexerCustom*, QColor*, int);
    using QsciLexerCustom_ReadProperties_Callback = bool (*)(QsciLexerCustom*, QSettings*, libqt_string);
    using QsciLexerCustom_WriteProperties_Callback = bool (*)(const QsciLexerCustom*, QSettings*, libqt_string);
    using QsciLexerCustom_Event_Callback = bool (*)(QsciLexerCustom*, QEvent*);
    using QsciLexerCustom_EventFilter_Callback = bool (*)(QsciLexerCustom*, QObject*, QEvent*);
    using QsciLexerCustom_TimerEvent_Callback = void (*)(QsciLexerCustom*, QTimerEvent*);
    using QsciLexerCustom_ChildEvent_Callback = void (*)(QsciLexerCustom*, QChildEvent*);
    using QsciLexerCustom_CustomEvent_Callback = void (*)(QsciLexerCustom*, QEvent*);
    using QsciLexerCustom_ConnectNotify_Callback = void (*)(QsciLexerCustom*, QMetaMethod*);
    using QsciLexerCustom_DisconnectNotify_Callback = void (*)(QsciLexerCustom*, QMetaMethod*);
    using QsciLexerCustom_TextAsBytes_Callback = libqt_string (*)(const QsciLexerCustom*, libqt_string);
    using QsciLexerCustom_BytesAsText_Callback = libqt_string (*)(const QsciLexerCustom*, const char*, int);
    using QsciLexerCustom_Sender_Callback = QObject* (*)();
    using QsciLexerCustom_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCustom_Receivers_Callback = int (*)(const QsciLexerCustom*, const char*);
    using QsciLexerCustom_IsSignalConnected_Callback = bool (*)(const QsciLexerCustom*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCustom_Metacall_Callback qscilexercustom_metacall_callback = nullptr;
    QsciLexerCustom_StyleText_Callback qscilexercustom_styletext_callback = nullptr;
    QsciLexerCustom_SetEditor_Callback qscilexercustom_seteditor_callback = nullptr;
    QsciLexerCustom_StyleBitsNeeded_Callback qscilexercustom_stylebitsneeded_callback = nullptr;
    QsciLexerCustom_Language_Callback qscilexercustom_language_callback = nullptr;
    QsciLexerCustom_Lexer_Callback qscilexercustom_lexer_callback = nullptr;
    QsciLexerCustom_LexerId_Callback qscilexercustom_lexerid_callback = nullptr;
    QsciLexerCustom_AutoCompletionFillups_Callback qscilexercustom_autocompletionfillups_callback = nullptr;
    QsciLexerCustom_AutoCompletionWordSeparators_Callback qscilexercustom_autocompletionwordseparators_callback = nullptr;
    QsciLexerCustom_BlockEnd_Callback qscilexercustom_blockend_callback = nullptr;
    QsciLexerCustom_BlockLookback_Callback qscilexercustom_blocklookback_callback = nullptr;
    QsciLexerCustom_BlockStart_Callback qscilexercustom_blockstart_callback = nullptr;
    QsciLexerCustom_BlockStartKeyword_Callback qscilexercustom_blockstartkeyword_callback = nullptr;
    QsciLexerCustom_BraceStyle_Callback qscilexercustom_bracestyle_callback = nullptr;
    QsciLexerCustom_CaseSensitive_Callback qscilexercustom_casesensitive_callback = nullptr;
    QsciLexerCustom_Color_Callback qscilexercustom_color_callback = nullptr;
    QsciLexerCustom_EolFill_Callback qscilexercustom_eolfill_callback = nullptr;
    QsciLexerCustom_Font_Callback qscilexercustom_font_callback = nullptr;
    QsciLexerCustom_IndentationGuideView_Callback qscilexercustom_indentationguideview_callback = nullptr;
    QsciLexerCustom_Keywords_Callback qscilexercustom_keywords_callback = nullptr;
    QsciLexerCustom_DefaultStyle_Callback qscilexercustom_defaultstyle_callback = nullptr;
    QsciLexerCustom_Description_Callback qscilexercustom_description_callback = nullptr;
    QsciLexerCustom_Paper_Callback qscilexercustom_paper_callback = nullptr;
    QsciLexerCustom_DefaultColor2_Callback qscilexercustom_defaultcolor2_callback = nullptr;
    QsciLexerCustom_DefaultEolFill_Callback qscilexercustom_defaulteolfill_callback = nullptr;
    QsciLexerCustom_DefaultFont2_Callback qscilexercustom_defaultfont2_callback = nullptr;
    QsciLexerCustom_DefaultPaper2_Callback qscilexercustom_defaultpaper2_callback = nullptr;
    QsciLexerCustom_RefreshProperties_Callback qscilexercustom_refreshproperties_callback = nullptr;
    QsciLexerCustom_WordCharacters_Callback qscilexercustom_wordcharacters_callback = nullptr;
    QsciLexerCustom_SetAutoIndentStyle_Callback qscilexercustom_setautoindentstyle_callback = nullptr;
    QsciLexerCustom_SetColor_Callback qscilexercustom_setcolor_callback = nullptr;
    QsciLexerCustom_SetEolFill_Callback qscilexercustom_seteolfill_callback = nullptr;
    QsciLexerCustom_SetFont_Callback qscilexercustom_setfont_callback = nullptr;
    QsciLexerCustom_SetPaper_Callback qscilexercustom_setpaper_callback = nullptr;
    QsciLexerCustom_ReadProperties_Callback qscilexercustom_readproperties_callback = nullptr;
    QsciLexerCustom_WriteProperties_Callback qscilexercustom_writeproperties_callback = nullptr;
    QsciLexerCustom_Event_Callback qscilexercustom_event_callback = nullptr;
    QsciLexerCustom_EventFilter_Callback qscilexercustom_eventfilter_callback = nullptr;
    QsciLexerCustom_TimerEvent_Callback qscilexercustom_timerevent_callback = nullptr;
    QsciLexerCustom_ChildEvent_Callback qscilexercustom_childevent_callback = nullptr;
    QsciLexerCustom_CustomEvent_Callback qscilexercustom_customevent_callback = nullptr;
    QsciLexerCustom_ConnectNotify_Callback qscilexercustom_connectnotify_callback = nullptr;
    QsciLexerCustom_DisconnectNotify_Callback qscilexercustom_disconnectnotify_callback = nullptr;
    QsciLexerCustom_TextAsBytes_Callback qscilexercustom_textasbytes_callback = nullptr;
    QsciLexerCustom_BytesAsText_Callback qscilexercustom_bytesastext_callback = nullptr;
    QsciLexerCustom_Sender_Callback qscilexercustom_sender_callback = nullptr;
    QsciLexerCustom_SenderSignalIndex_Callback qscilexercustom_sendersignalindex_callback = nullptr;
    QsciLexerCustom_Receivers_Callback qscilexercustom_receivers_callback = nullptr;
    QsciLexerCustom_IsSignalConnected_Callback qscilexercustom_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercustom_metacall_isbase = false;
    mutable bool qscilexercustom_styletext_isbase = false;
    mutable bool qscilexercustom_seteditor_isbase = false;
    mutable bool qscilexercustom_stylebitsneeded_isbase = false;
    mutable bool qscilexercustom_language_isbase = false;
    mutable bool qscilexercustom_lexer_isbase = false;
    mutable bool qscilexercustom_lexerid_isbase = false;
    mutable bool qscilexercustom_autocompletionfillups_isbase = false;
    mutable bool qscilexercustom_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercustom_blockend_isbase = false;
    mutable bool qscilexercustom_blocklookback_isbase = false;
    mutable bool qscilexercustom_blockstart_isbase = false;
    mutable bool qscilexercustom_blockstartkeyword_isbase = false;
    mutable bool qscilexercustom_bracestyle_isbase = false;
    mutable bool qscilexercustom_casesensitive_isbase = false;
    mutable bool qscilexercustom_color_isbase = false;
    mutable bool qscilexercustom_eolfill_isbase = false;
    mutable bool qscilexercustom_font_isbase = false;
    mutable bool qscilexercustom_indentationguideview_isbase = false;
    mutable bool qscilexercustom_keywords_isbase = false;
    mutable bool qscilexercustom_defaultstyle_isbase = false;
    mutable bool qscilexercustom_description_isbase = false;
    mutable bool qscilexercustom_paper_isbase = false;
    mutable bool qscilexercustom_defaultcolor2_isbase = false;
    mutable bool qscilexercustom_defaulteolfill_isbase = false;
    mutable bool qscilexercustom_defaultfont2_isbase = false;
    mutable bool qscilexercustom_defaultpaper2_isbase = false;
    mutable bool qscilexercustom_refreshproperties_isbase = false;
    mutable bool qscilexercustom_wordcharacters_isbase = false;
    mutable bool qscilexercustom_setautoindentstyle_isbase = false;
    mutable bool qscilexercustom_setcolor_isbase = false;
    mutable bool qscilexercustom_seteolfill_isbase = false;
    mutable bool qscilexercustom_setfont_isbase = false;
    mutable bool qscilexercustom_setpaper_isbase = false;
    mutable bool qscilexercustom_readproperties_isbase = false;
    mutable bool qscilexercustom_writeproperties_isbase = false;
    mutable bool qscilexercustom_event_isbase = false;
    mutable bool qscilexercustom_eventfilter_isbase = false;
    mutable bool qscilexercustom_timerevent_isbase = false;
    mutable bool qscilexercustom_childevent_isbase = false;
    mutable bool qscilexercustom_customevent_isbase = false;
    mutable bool qscilexercustom_connectnotify_isbase = false;
    mutable bool qscilexercustom_disconnectnotify_isbase = false;
    mutable bool qscilexercustom_textasbytes_isbase = false;
    mutable bool qscilexercustom_bytesastext_isbase = false;
    mutable bool qscilexercustom_sender_isbase = false;
    mutable bool qscilexercustom_sendersignalindex_isbase = false;
    mutable bool qscilexercustom_receivers_isbase = false;
    mutable bool qscilexercustom_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCustom() : QsciLexerCustom() {};
    VirtualQsciLexerCustom(QObject* parent) : QsciLexerCustom(parent) {};

    ~VirtualQsciLexerCustom() {
        qscilexercustom_metacall_callback = nullptr;
        qscilexercustom_styletext_callback = nullptr;
        qscilexercustom_seteditor_callback = nullptr;
        qscilexercustom_stylebitsneeded_callback = nullptr;
        qscilexercustom_language_callback = nullptr;
        qscilexercustom_lexer_callback = nullptr;
        qscilexercustom_lexerid_callback = nullptr;
        qscilexercustom_autocompletionfillups_callback = nullptr;
        qscilexercustom_autocompletionwordseparators_callback = nullptr;
        qscilexercustom_blockend_callback = nullptr;
        qscilexercustom_blocklookback_callback = nullptr;
        qscilexercustom_blockstart_callback = nullptr;
        qscilexercustom_blockstartkeyword_callback = nullptr;
        qscilexercustom_bracestyle_callback = nullptr;
        qscilexercustom_casesensitive_callback = nullptr;
        qscilexercustom_color_callback = nullptr;
        qscilexercustom_eolfill_callback = nullptr;
        qscilexercustom_font_callback = nullptr;
        qscilexercustom_indentationguideview_callback = nullptr;
        qscilexercustom_keywords_callback = nullptr;
        qscilexercustom_defaultstyle_callback = nullptr;
        qscilexercustom_description_callback = nullptr;
        qscilexercustom_paper_callback = nullptr;
        qscilexercustom_defaultcolor2_callback = nullptr;
        qscilexercustom_defaulteolfill_callback = nullptr;
        qscilexercustom_defaultfont2_callback = nullptr;
        qscilexercustom_defaultpaper2_callback = nullptr;
        qscilexercustom_refreshproperties_callback = nullptr;
        qscilexercustom_wordcharacters_callback = nullptr;
        qscilexercustom_setautoindentstyle_callback = nullptr;
        qscilexercustom_setcolor_callback = nullptr;
        qscilexercustom_seteolfill_callback = nullptr;
        qscilexercustom_setfont_callback = nullptr;
        qscilexercustom_setpaper_callback = nullptr;
        qscilexercustom_readproperties_callback = nullptr;
        qscilexercustom_writeproperties_callback = nullptr;
        qscilexercustom_event_callback = nullptr;
        qscilexercustom_eventfilter_callback = nullptr;
        qscilexercustom_timerevent_callback = nullptr;
        qscilexercustom_childevent_callback = nullptr;
        qscilexercustom_customevent_callback = nullptr;
        qscilexercustom_connectnotify_callback = nullptr;
        qscilexercustom_disconnectnotify_callback = nullptr;
        qscilexercustom_textasbytes_callback = nullptr;
        qscilexercustom_bytesastext_callback = nullptr;
        qscilexercustom_sender_callback = nullptr;
        qscilexercustom_sendersignalindex_callback = nullptr;
        qscilexercustom_receivers_callback = nullptr;
        qscilexercustom_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerCustom_Metacall_Callback(QsciLexerCustom_Metacall_Callback cb) { qscilexercustom_metacall_callback = cb; }
    inline void setQsciLexerCustom_StyleText_Callback(QsciLexerCustom_StyleText_Callback cb) { qscilexercustom_styletext_callback = cb; }
    inline void setQsciLexerCustom_SetEditor_Callback(QsciLexerCustom_SetEditor_Callback cb) { qscilexercustom_seteditor_callback = cb; }
    inline void setQsciLexerCustom_StyleBitsNeeded_Callback(QsciLexerCustom_StyleBitsNeeded_Callback cb) { qscilexercustom_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCustom_Language_Callback(QsciLexerCustom_Language_Callback cb) { qscilexercustom_language_callback = cb; }
    inline void setQsciLexerCustom_Lexer_Callback(QsciLexerCustom_Lexer_Callback cb) { qscilexercustom_lexer_callback = cb; }
    inline void setQsciLexerCustom_LexerId_Callback(QsciLexerCustom_LexerId_Callback cb) { qscilexercustom_lexerid_callback = cb; }
    inline void setQsciLexerCustom_AutoCompletionFillups_Callback(QsciLexerCustom_AutoCompletionFillups_Callback cb) { qscilexercustom_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCustom_AutoCompletionWordSeparators_Callback(QsciLexerCustom_AutoCompletionWordSeparators_Callback cb) { qscilexercustom_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCustom_BlockEnd_Callback(QsciLexerCustom_BlockEnd_Callback cb) { qscilexercustom_blockend_callback = cb; }
    inline void setQsciLexerCustom_BlockLookback_Callback(QsciLexerCustom_BlockLookback_Callback cb) { qscilexercustom_blocklookback_callback = cb; }
    inline void setQsciLexerCustom_BlockStart_Callback(QsciLexerCustom_BlockStart_Callback cb) { qscilexercustom_blockstart_callback = cb; }
    inline void setQsciLexerCustom_BlockStartKeyword_Callback(QsciLexerCustom_BlockStartKeyword_Callback cb) { qscilexercustom_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCustom_BraceStyle_Callback(QsciLexerCustom_BraceStyle_Callback cb) { qscilexercustom_bracestyle_callback = cb; }
    inline void setQsciLexerCustom_CaseSensitive_Callback(QsciLexerCustom_CaseSensitive_Callback cb) { qscilexercustom_casesensitive_callback = cb; }
    inline void setQsciLexerCustom_Color_Callback(QsciLexerCustom_Color_Callback cb) { qscilexercustom_color_callback = cb; }
    inline void setQsciLexerCustom_EolFill_Callback(QsciLexerCustom_EolFill_Callback cb) { qscilexercustom_eolfill_callback = cb; }
    inline void setQsciLexerCustom_Font_Callback(QsciLexerCustom_Font_Callback cb) { qscilexercustom_font_callback = cb; }
    inline void setQsciLexerCustom_IndentationGuideView_Callback(QsciLexerCustom_IndentationGuideView_Callback cb) { qscilexercustom_indentationguideview_callback = cb; }
    inline void setQsciLexerCustom_Keywords_Callback(QsciLexerCustom_Keywords_Callback cb) { qscilexercustom_keywords_callback = cb; }
    inline void setQsciLexerCustom_DefaultStyle_Callback(QsciLexerCustom_DefaultStyle_Callback cb) { qscilexercustom_defaultstyle_callback = cb; }
    inline void setQsciLexerCustom_Description_Callback(QsciLexerCustom_Description_Callback cb) { qscilexercustom_description_callback = cb; }
    inline void setQsciLexerCustom_Paper_Callback(QsciLexerCustom_Paper_Callback cb) { qscilexercustom_paper_callback = cb; }
    inline void setQsciLexerCustom_DefaultColor2_Callback(QsciLexerCustom_DefaultColor2_Callback cb) { qscilexercustom_defaultcolor2_callback = cb; }
    inline void setQsciLexerCustom_DefaultEolFill_Callback(QsciLexerCustom_DefaultEolFill_Callback cb) { qscilexercustom_defaulteolfill_callback = cb; }
    inline void setQsciLexerCustom_DefaultFont2_Callback(QsciLexerCustom_DefaultFont2_Callback cb) { qscilexercustom_defaultfont2_callback = cb; }
    inline void setQsciLexerCustom_DefaultPaper2_Callback(QsciLexerCustom_DefaultPaper2_Callback cb) { qscilexercustom_defaultpaper2_callback = cb; }
    inline void setQsciLexerCustom_RefreshProperties_Callback(QsciLexerCustom_RefreshProperties_Callback cb) { qscilexercustom_refreshproperties_callback = cb; }
    inline void setQsciLexerCustom_WordCharacters_Callback(QsciLexerCustom_WordCharacters_Callback cb) { qscilexercustom_wordcharacters_callback = cb; }
    inline void setQsciLexerCustom_SetAutoIndentStyle_Callback(QsciLexerCustom_SetAutoIndentStyle_Callback cb) { qscilexercustom_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCustom_SetColor_Callback(QsciLexerCustom_SetColor_Callback cb) { qscilexercustom_setcolor_callback = cb; }
    inline void setQsciLexerCustom_SetEolFill_Callback(QsciLexerCustom_SetEolFill_Callback cb) { qscilexercustom_seteolfill_callback = cb; }
    inline void setQsciLexerCustom_SetFont_Callback(QsciLexerCustom_SetFont_Callback cb) { qscilexercustom_setfont_callback = cb; }
    inline void setQsciLexerCustom_SetPaper_Callback(QsciLexerCustom_SetPaper_Callback cb) { qscilexercustom_setpaper_callback = cb; }
    inline void setQsciLexerCustom_ReadProperties_Callback(QsciLexerCustom_ReadProperties_Callback cb) { qscilexercustom_readproperties_callback = cb; }
    inline void setQsciLexerCustom_WriteProperties_Callback(QsciLexerCustom_WriteProperties_Callback cb) { qscilexercustom_writeproperties_callback = cb; }
    inline void setQsciLexerCustom_Event_Callback(QsciLexerCustom_Event_Callback cb) { qscilexercustom_event_callback = cb; }
    inline void setQsciLexerCustom_EventFilter_Callback(QsciLexerCustom_EventFilter_Callback cb) { qscilexercustom_eventfilter_callback = cb; }
    inline void setQsciLexerCustom_TimerEvent_Callback(QsciLexerCustom_TimerEvent_Callback cb) { qscilexercustom_timerevent_callback = cb; }
    inline void setQsciLexerCustom_ChildEvent_Callback(QsciLexerCustom_ChildEvent_Callback cb) { qscilexercustom_childevent_callback = cb; }
    inline void setQsciLexerCustom_CustomEvent_Callback(QsciLexerCustom_CustomEvent_Callback cb) { qscilexercustom_customevent_callback = cb; }
    inline void setQsciLexerCustom_ConnectNotify_Callback(QsciLexerCustom_ConnectNotify_Callback cb) { qscilexercustom_connectnotify_callback = cb; }
    inline void setQsciLexerCustom_DisconnectNotify_Callback(QsciLexerCustom_DisconnectNotify_Callback cb) { qscilexercustom_disconnectnotify_callback = cb; }
    inline void setQsciLexerCustom_TextAsBytes_Callback(QsciLexerCustom_TextAsBytes_Callback cb) { qscilexercustom_textasbytes_callback = cb; }
    inline void setQsciLexerCustom_BytesAsText_Callback(QsciLexerCustom_BytesAsText_Callback cb) { qscilexercustom_bytesastext_callback = cb; }
    inline void setQsciLexerCustom_Sender_Callback(QsciLexerCustom_Sender_Callback cb) { qscilexercustom_sender_callback = cb; }
    inline void setQsciLexerCustom_SenderSignalIndex_Callback(QsciLexerCustom_SenderSignalIndex_Callback cb) { qscilexercustom_sendersignalindex_callback = cb; }
    inline void setQsciLexerCustom_Receivers_Callback(QsciLexerCustom_Receivers_Callback cb) { qscilexercustom_receivers_callback = cb; }
    inline void setQsciLexerCustom_IsSignalConnected_Callback(QsciLexerCustom_IsSignalConnected_Callback cb) { qscilexercustom_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCustom_Metacall_IsBase(bool value) const { qscilexercustom_metacall_isbase = value; }
    inline void setQsciLexerCustom_StyleText_IsBase(bool value) const { qscilexercustom_styletext_isbase = value; }
    inline void setQsciLexerCustom_SetEditor_IsBase(bool value) const { qscilexercustom_seteditor_isbase = value; }
    inline void setQsciLexerCustom_StyleBitsNeeded_IsBase(bool value) const { qscilexercustom_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCustom_Language_IsBase(bool value) const { qscilexercustom_language_isbase = value; }
    inline void setQsciLexerCustom_Lexer_IsBase(bool value) const { qscilexercustom_lexer_isbase = value; }
    inline void setQsciLexerCustom_LexerId_IsBase(bool value) const { qscilexercustom_lexerid_isbase = value; }
    inline void setQsciLexerCustom_AutoCompletionFillups_IsBase(bool value) const { qscilexercustom_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCustom_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercustom_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCustom_BlockEnd_IsBase(bool value) const { qscilexercustom_blockend_isbase = value; }
    inline void setQsciLexerCustom_BlockLookback_IsBase(bool value) const { qscilexercustom_blocklookback_isbase = value; }
    inline void setQsciLexerCustom_BlockStart_IsBase(bool value) const { qscilexercustom_blockstart_isbase = value; }
    inline void setQsciLexerCustom_BlockStartKeyword_IsBase(bool value) const { qscilexercustom_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCustom_BraceStyle_IsBase(bool value) const { qscilexercustom_bracestyle_isbase = value; }
    inline void setQsciLexerCustom_CaseSensitive_IsBase(bool value) const { qscilexercustom_casesensitive_isbase = value; }
    inline void setQsciLexerCustom_Color_IsBase(bool value) const { qscilexercustom_color_isbase = value; }
    inline void setQsciLexerCustom_EolFill_IsBase(bool value) const { qscilexercustom_eolfill_isbase = value; }
    inline void setQsciLexerCustom_Font_IsBase(bool value) const { qscilexercustom_font_isbase = value; }
    inline void setQsciLexerCustom_IndentationGuideView_IsBase(bool value) const { qscilexercustom_indentationguideview_isbase = value; }
    inline void setQsciLexerCustom_Keywords_IsBase(bool value) const { qscilexercustom_keywords_isbase = value; }
    inline void setQsciLexerCustom_DefaultStyle_IsBase(bool value) const { qscilexercustom_defaultstyle_isbase = value; }
    inline void setQsciLexerCustom_Description_IsBase(bool value) const { qscilexercustom_description_isbase = value; }
    inline void setQsciLexerCustom_Paper_IsBase(bool value) const { qscilexercustom_paper_isbase = value; }
    inline void setQsciLexerCustom_DefaultColor2_IsBase(bool value) const { qscilexercustom_defaultcolor2_isbase = value; }
    inline void setQsciLexerCustom_DefaultEolFill_IsBase(bool value) const { qscilexercustom_defaulteolfill_isbase = value; }
    inline void setQsciLexerCustom_DefaultFont2_IsBase(bool value) const { qscilexercustom_defaultfont2_isbase = value; }
    inline void setQsciLexerCustom_DefaultPaper2_IsBase(bool value) const { qscilexercustom_defaultpaper2_isbase = value; }
    inline void setQsciLexerCustom_RefreshProperties_IsBase(bool value) const { qscilexercustom_refreshproperties_isbase = value; }
    inline void setQsciLexerCustom_WordCharacters_IsBase(bool value) const { qscilexercustom_wordcharacters_isbase = value; }
    inline void setQsciLexerCustom_SetAutoIndentStyle_IsBase(bool value) const { qscilexercustom_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCustom_SetColor_IsBase(bool value) const { qscilexercustom_setcolor_isbase = value; }
    inline void setQsciLexerCustom_SetEolFill_IsBase(bool value) const { qscilexercustom_seteolfill_isbase = value; }
    inline void setQsciLexerCustom_SetFont_IsBase(bool value) const { qscilexercustom_setfont_isbase = value; }
    inline void setQsciLexerCustom_SetPaper_IsBase(bool value) const { qscilexercustom_setpaper_isbase = value; }
    inline void setQsciLexerCustom_ReadProperties_IsBase(bool value) const { qscilexercustom_readproperties_isbase = value; }
    inline void setQsciLexerCustom_WriteProperties_IsBase(bool value) const { qscilexercustom_writeproperties_isbase = value; }
    inline void setQsciLexerCustom_Event_IsBase(bool value) const { qscilexercustom_event_isbase = value; }
    inline void setQsciLexerCustom_EventFilter_IsBase(bool value) const { qscilexercustom_eventfilter_isbase = value; }
    inline void setQsciLexerCustom_TimerEvent_IsBase(bool value) const { qscilexercustom_timerevent_isbase = value; }
    inline void setQsciLexerCustom_ChildEvent_IsBase(bool value) const { qscilexercustom_childevent_isbase = value; }
    inline void setQsciLexerCustom_CustomEvent_IsBase(bool value) const { qscilexercustom_customevent_isbase = value; }
    inline void setQsciLexerCustom_ConnectNotify_IsBase(bool value) const { qscilexercustom_connectnotify_isbase = value; }
    inline void setQsciLexerCustom_DisconnectNotify_IsBase(bool value) const { qscilexercustom_disconnectnotify_isbase = value; }
    inline void setQsciLexerCustom_TextAsBytes_IsBase(bool value) const { qscilexercustom_textasbytes_isbase = value; }
    inline void setQsciLexerCustom_BytesAsText_IsBase(bool value) const { qscilexercustom_bytesastext_isbase = value; }
    inline void setQsciLexerCustom_Sender_IsBase(bool value) const { qscilexercustom_sender_isbase = value; }
    inline void setQsciLexerCustom_SenderSignalIndex_IsBase(bool value) const { qscilexercustom_sendersignalindex_isbase = value; }
    inline void setQsciLexerCustom_Receivers_IsBase(bool value) const { qscilexercustom_receivers_isbase = value; }
    inline void setQsciLexerCustom_IsSignalConnected_IsBase(bool value) const { qscilexercustom_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercustom_metacall_isbase) {
            qscilexercustom_metacall_isbase = false;
            return QsciLexerCustom::qt_metacall(param1, param2, param3);
        } else if (qscilexercustom_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexercustom_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void styleText(int start, int end) override {
        if (qscilexercustom_styletext_callback != nullptr) {
            int cbval1 = start;
            int cbval2 = end;

            qscilexercustom_styletext_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercustom_seteditor_isbase) {
            qscilexercustom_seteditor_isbase = false;
            QsciLexerCustom::setEditor(editor);
        } else if (qscilexercustom_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexercustom_seteditor_callback(this, cbval1);
        } else {
            QsciLexerCustom::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercustom_stylebitsneeded_isbase) {
            qscilexercustom_stylebitsneeded_isbase = false;
            return QsciLexerCustom::styleBitsNeeded();
        } else if (qscilexercustom_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexercustom_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercustom_language_callback != nullptr) {
            const char* callback_ret = qscilexercustom_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercustom_lexer_isbase) {
            qscilexercustom_lexer_isbase = false;
            return QsciLexerCustom::lexer();
        } else if (qscilexercustom_lexer_callback != nullptr) {
            const char* callback_ret = qscilexercustom_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerCustom::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercustom_lexerid_isbase) {
            qscilexercustom_lexerid_isbase = false;
            return QsciLexerCustom::lexerId();
        } else if (qscilexercustom_lexerid_callback != nullptr) {
            int callback_ret = qscilexercustom_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercustom_autocompletionfillups_isbase) {
            qscilexercustom_autocompletionfillups_isbase = false;
            return QsciLexerCustom::autoCompletionFillups();
        } else if (qscilexercustom_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexercustom_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerCustom::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercustom_autocompletionwordseparators_isbase) {
            qscilexercustom_autocompletionwordseparators_isbase = false;
            return QsciLexerCustom::autoCompletionWordSeparators();
        } else if (qscilexercustom_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexercustom_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerCustom::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercustom_blockend_isbase) {
            qscilexercustom_blockend_isbase = false;
            return QsciLexerCustom::blockEnd(style);
        } else if (qscilexercustom_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercustom_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercustom_blocklookback_isbase) {
            qscilexercustom_blocklookback_isbase = false;
            return QsciLexerCustom::blockLookback();
        } else if (qscilexercustom_blocklookback_callback != nullptr) {
            int callback_ret = qscilexercustom_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercustom_blockstart_isbase) {
            qscilexercustom_blockstart_isbase = false;
            return QsciLexerCustom::blockStart(style);
        } else if (qscilexercustom_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercustom_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercustom_blockstartkeyword_isbase) {
            qscilexercustom_blockstartkeyword_isbase = false;
            return QsciLexerCustom::blockStartKeyword(style);
        } else if (qscilexercustom_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercustom_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercustom_bracestyle_isbase) {
            qscilexercustom_bracestyle_isbase = false;
            return QsciLexerCustom::braceStyle();
        } else if (qscilexercustom_bracestyle_callback != nullptr) {
            int callback_ret = qscilexercustom_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercustom_casesensitive_isbase) {
            qscilexercustom_casesensitive_isbase = false;
            return QsciLexerCustom::caseSensitive();
        } else if (qscilexercustom_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexercustom_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerCustom::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercustom_color_isbase) {
            qscilexercustom_color_isbase = false;
            return QsciLexerCustom::color(style);
        } else if (qscilexercustom_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercustom_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercustom_eolfill_isbase) {
            qscilexercustom_eolfill_isbase = false;
            return QsciLexerCustom::eolFill(style);
        } else if (qscilexercustom_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercustom_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercustom_font_isbase) {
            qscilexercustom_font_isbase = false;
            return QsciLexerCustom::font(style);
        } else if (qscilexercustom_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercustom_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercustom_indentationguideview_isbase) {
            qscilexercustom_indentationguideview_isbase = false;
            return QsciLexerCustom::indentationGuideView();
        } else if (qscilexercustom_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexercustom_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercustom_keywords_isbase) {
            qscilexercustom_keywords_isbase = false;
            return QsciLexerCustom::keywords(set);
        } else if (qscilexercustom_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexercustom_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercustom_defaultstyle_isbase) {
            qscilexercustom_defaultstyle_isbase = false;
            return QsciLexerCustom::defaultStyle();
        } else if (qscilexercustom_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexercustom_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercustom_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexercustom_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercustom_paper_isbase) {
            qscilexercustom_paper_isbase = false;
            return QsciLexerCustom::paper(style);
        } else if (qscilexercustom_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercustom_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercustom_defaultcolor2_isbase) {
            qscilexercustom_defaultcolor2_isbase = false;
            return QsciLexerCustom::defaultColor(style);
        } else if (qscilexercustom_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercustom_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercustom_defaulteolfill_isbase) {
            qscilexercustom_defaulteolfill_isbase = false;
            return QsciLexerCustom::defaultEolFill(style);
        } else if (qscilexercustom_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercustom_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercustom_defaultfont2_isbase) {
            qscilexercustom_defaultfont2_isbase = false;
            return QsciLexerCustom::defaultFont(style);
        } else if (qscilexercustom_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercustom_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercustom_defaultpaper2_isbase) {
            qscilexercustom_defaultpaper2_isbase = false;
            return QsciLexerCustom::defaultPaper(style);
        } else if (qscilexercustom_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercustom_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCustom::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercustom_refreshproperties_isbase) {
            qscilexercustom_refreshproperties_isbase = false;
            QsciLexerCustom::refreshProperties();
        } else if (qscilexercustom_refreshproperties_callback != nullptr) {
            qscilexercustom_refreshproperties_callback();
        } else {
            QsciLexerCustom::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercustom_wordcharacters_isbase) {
            qscilexercustom_wordcharacters_isbase = false;
            return QsciLexerCustom::wordCharacters();
        } else if (qscilexercustom_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexercustom_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerCustom::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercustom_setautoindentstyle_isbase) {
            qscilexercustom_setautoindentstyle_isbase = false;
            QsciLexerCustom::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercustom_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexercustom_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerCustom::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercustom_setcolor_isbase) {
            qscilexercustom_setcolor_isbase = false;
            QsciLexerCustom::setColor(c, style);
        } else if (qscilexercustom_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercustom_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCustom::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercustom_seteolfill_isbase) {
            qscilexercustom_seteolfill_isbase = false;
            QsciLexerCustom::setEolFill(eoffill, style);
        } else if (qscilexercustom_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexercustom_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCustom::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercustom_setfont_isbase) {
            qscilexercustom_setfont_isbase = false;
            QsciLexerCustom::setFont(f, style);
        } else if (qscilexercustom_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexercustom_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCustom::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercustom_setpaper_isbase) {
            qscilexercustom_setpaper_isbase = false;
            QsciLexerCustom::setPaper(c, style);
        } else if (qscilexercustom_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercustom_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCustom::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercustom_readproperties_isbase) {
            qscilexercustom_readproperties_isbase = false;
            return QsciLexerCustom::readProperties(qs, prefix);
        } else if (qscilexercustom_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercustom_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCustom::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercustom_writeproperties_isbase) {
            qscilexercustom_writeproperties_isbase = false;
            return QsciLexerCustom::writeProperties(qs, prefix);
        } else if (qscilexercustom_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercustom_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCustom::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercustom_event_isbase) {
            qscilexercustom_event_isbase = false;
            return QsciLexerCustom::event(event);
        } else if (qscilexercustom_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexercustom_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercustom_eventfilter_isbase) {
            qscilexercustom_eventfilter_isbase = false;
            return QsciLexerCustom::eventFilter(watched, event);
        } else if (qscilexercustom_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexercustom_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCustom::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercustom_timerevent_isbase) {
            qscilexercustom_timerevent_isbase = false;
            QsciLexerCustom::timerEvent(event);
        } else if (qscilexercustom_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexercustom_timerevent_callback(this, cbval1);
        } else {
            QsciLexerCustom::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercustom_childevent_isbase) {
            qscilexercustom_childevent_isbase = false;
            QsciLexerCustom::childEvent(event);
        } else if (qscilexercustom_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexercustom_childevent_callback(this, cbval1);
        } else {
            QsciLexerCustom::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercustom_customevent_isbase) {
            qscilexercustom_customevent_isbase = false;
            QsciLexerCustom::customEvent(event);
        } else if (qscilexercustom_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexercustom_customevent_callback(this, cbval1);
        } else {
            QsciLexerCustom::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercustom_connectnotify_isbase) {
            qscilexercustom_connectnotify_isbase = false;
            QsciLexerCustom::connectNotify(signal);
        } else if (qscilexercustom_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercustom_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerCustom::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercustom_disconnectnotify_isbase) {
            qscilexercustom_disconnectnotify_isbase = false;
            QsciLexerCustom::disconnectNotify(signal);
        } else if (qscilexercustom_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercustom_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerCustom::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexercustom_textasbytes_isbase) {
            qscilexercustom_textasbytes_isbase = false;
            return QsciLexerCustom::textAsBytes(text);
        } else if (qscilexercustom_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexercustom_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerCustom::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexercustom_bytesastext_isbase) {
            qscilexercustom_bytesastext_isbase = false;
            return QsciLexerCustom::bytesAsText(bytes, size);
        } else if (qscilexercustom_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexercustom_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerCustom::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercustom_sender_isbase) {
            qscilexercustom_sender_isbase = false;
            return QsciLexerCustom::sender();
        } else if (qscilexercustom_sender_callback != nullptr) {
            QObject* callback_ret = qscilexercustom_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerCustom::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercustom_sendersignalindex_isbase) {
            qscilexercustom_sendersignalindex_isbase = false;
            return QsciLexerCustom::senderSignalIndex();
        } else if (qscilexercustom_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexercustom_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercustom_receivers_isbase) {
            qscilexercustom_receivers_isbase = false;
            return QsciLexerCustom::receivers(signal);
        } else if (qscilexercustom_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexercustom_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCustom::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercustom_issignalconnected_isbase) {
            qscilexercustom_issignalconnected_isbase = false;
            return QsciLexerCustom::isSignalConnected(signal);
        } else if (qscilexercustom_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexercustom_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCustom::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerCustom_ReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCustom_QBaseReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCustom_WriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCustom_QBaseWriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCustom_TimerEvent(QsciLexerCustom* self, QTimerEvent* event);
    friend void QsciLexerCustom_QBaseTimerEvent(QsciLexerCustom* self, QTimerEvent* event);
    friend void QsciLexerCustom_ChildEvent(QsciLexerCustom* self, QChildEvent* event);
    friend void QsciLexerCustom_QBaseChildEvent(QsciLexerCustom* self, QChildEvent* event);
    friend void QsciLexerCustom_CustomEvent(QsciLexerCustom* self, QEvent* event);
    friend void QsciLexerCustom_QBaseCustomEvent(QsciLexerCustom* self, QEvent* event);
    friend void QsciLexerCustom_ConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
    friend void QsciLexerCustom_QBaseConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
    friend void QsciLexerCustom_DisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
    friend void QsciLexerCustom_QBaseDisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerCustom_TextAsBytes(const QsciLexerCustom* self, const libqt_string text);
    friend libqt_string QsciLexerCustom_QBaseTextAsBytes(const QsciLexerCustom* self, const libqt_string text);
    friend libqt_string QsciLexerCustom_BytesAsText(const QsciLexerCustom* self, const char* bytes, int size);
    friend libqt_string QsciLexerCustom_QBaseBytesAsText(const QsciLexerCustom* self, const char* bytes, int size);
    friend QObject* QsciLexerCustom_Sender(const QsciLexerCustom* self);
    friend QObject* QsciLexerCustom_QBaseSender(const QsciLexerCustom* self);
    friend int QsciLexerCustom_SenderSignalIndex(const QsciLexerCustom* self);
    friend int QsciLexerCustom_QBaseSenderSignalIndex(const QsciLexerCustom* self);
    friend int QsciLexerCustom_Receivers(const QsciLexerCustom* self, const char* signal);
    friend int QsciLexerCustom_QBaseReceivers(const QsciLexerCustom* self, const char* signal);
    friend bool QsciLexerCustom_IsSignalConnected(const QsciLexerCustom* self, const QMetaMethod* signal);
    friend bool QsciLexerCustom_QBaseIsSignalConnected(const QsciLexerCustom* self, const QMetaMethod* signal);
};

#endif
