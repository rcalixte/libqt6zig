#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEREDIFACT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEREDIFACT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerEDIFACT so that we can call protected methods
class VirtualQsciLexerEDIFACT final : public QsciLexerEDIFACT {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerEDIFACT = true;

    // Virtual class public types (including callbacks)
    using QsciLexerEDIFACT_Metacall_Callback = int (*)(QsciLexerEDIFACT*, int, int, void**);
    using QsciLexerEDIFACT_Language_Callback = const char* (*)();
    using QsciLexerEDIFACT_Lexer_Callback = const char* (*)();
    using QsciLexerEDIFACT_LexerId_Callback = int (*)();
    using QsciLexerEDIFACT_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerEDIFACT_BlockEnd_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockLookback_Callback = int (*)();
    using QsciLexerEDIFACT_BlockStart_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockStartKeyword_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BraceStyle_Callback = int (*)();
    using QsciLexerEDIFACT_CaseSensitive_Callback = bool (*)();
    using QsciLexerEDIFACT_Color_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_EolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Font_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_IndentationGuideView_Callback = int (*)();
    using QsciLexerEDIFACT_Keywords_Callback = const char* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultStyle_Callback = int (*)();
    using QsciLexerEDIFACT_Description_Callback = libqt_string (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Paper_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultColor2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultEolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultFont2_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultPaper2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetEditor_Callback = void (*)(QsciLexerEDIFACT*, QsciScintilla*);
    using QsciLexerEDIFACT_RefreshProperties_Callback = void (*)();
    using QsciLexerEDIFACT_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerEDIFACT_WordCharacters_Callback = const char* (*)();
    using QsciLexerEDIFACT_SetAutoIndentStyle_Callback = void (*)(QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetColor_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_SetEolFill_Callback = void (*)(QsciLexerEDIFACT*, bool, int);
    using QsciLexerEDIFACT_SetFont_Callback = void (*)(QsciLexerEDIFACT*, QFont*, int);
    using QsciLexerEDIFACT_SetPaper_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_ReadProperties_Callback = bool (*)(QsciLexerEDIFACT*, QSettings*, libqt_string);
    using QsciLexerEDIFACT_WriteProperties_Callback = bool (*)(const QsciLexerEDIFACT*, QSettings*, libqt_string);
    using QsciLexerEDIFACT_Event_Callback = bool (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_EventFilter_Callback = bool (*)(QsciLexerEDIFACT*, QObject*, QEvent*);
    using QsciLexerEDIFACT_TimerEvent_Callback = void (*)(QsciLexerEDIFACT*, QTimerEvent*);
    using QsciLexerEDIFACT_ChildEvent_Callback = void (*)(QsciLexerEDIFACT*, QChildEvent*);
    using QsciLexerEDIFACT_CustomEvent_Callback = void (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_ConnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT_DisconnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT_TextAsBytes_Callback = libqt_string (*)(const QsciLexerEDIFACT*, libqt_string);
    using QsciLexerEDIFACT_BytesAsText_Callback = libqt_string (*)(const QsciLexerEDIFACT*, const char*, int);
    using QsciLexerEDIFACT_Sender_Callback = QObject* (*)();
    using QsciLexerEDIFACT_SenderSignalIndex_Callback = int (*)();
    using QsciLexerEDIFACT_Receivers_Callback = int (*)(const QsciLexerEDIFACT*, const char*);
    using QsciLexerEDIFACT_IsSignalConnected_Callback = bool (*)(const QsciLexerEDIFACT*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerEDIFACT_Metacall_Callback qscilexeredifact_metacall_callback = nullptr;
    QsciLexerEDIFACT_Language_Callback qscilexeredifact_language_callback = nullptr;
    QsciLexerEDIFACT_Lexer_Callback qscilexeredifact_lexer_callback = nullptr;
    QsciLexerEDIFACT_LexerId_Callback qscilexeredifact_lexerid_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionFillups_Callback qscilexeredifact_autocompletionfillups_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback qscilexeredifact_autocompletionwordseparators_callback = nullptr;
    QsciLexerEDIFACT_BlockEnd_Callback qscilexeredifact_blockend_callback = nullptr;
    QsciLexerEDIFACT_BlockLookback_Callback qscilexeredifact_blocklookback_callback = nullptr;
    QsciLexerEDIFACT_BlockStart_Callback qscilexeredifact_blockstart_callback = nullptr;
    QsciLexerEDIFACT_BlockStartKeyword_Callback qscilexeredifact_blockstartkeyword_callback = nullptr;
    QsciLexerEDIFACT_BraceStyle_Callback qscilexeredifact_bracestyle_callback = nullptr;
    QsciLexerEDIFACT_CaseSensitive_Callback qscilexeredifact_casesensitive_callback = nullptr;
    QsciLexerEDIFACT_Color_Callback qscilexeredifact_color_callback = nullptr;
    QsciLexerEDIFACT_EolFill_Callback qscilexeredifact_eolfill_callback = nullptr;
    QsciLexerEDIFACT_Font_Callback qscilexeredifact_font_callback = nullptr;
    QsciLexerEDIFACT_IndentationGuideView_Callback qscilexeredifact_indentationguideview_callback = nullptr;
    QsciLexerEDIFACT_Keywords_Callback qscilexeredifact_keywords_callback = nullptr;
    QsciLexerEDIFACT_DefaultStyle_Callback qscilexeredifact_defaultstyle_callback = nullptr;
    QsciLexerEDIFACT_Description_Callback qscilexeredifact_description_callback = nullptr;
    QsciLexerEDIFACT_Paper_Callback qscilexeredifact_paper_callback = nullptr;
    QsciLexerEDIFACT_DefaultColor2_Callback qscilexeredifact_defaultcolor2_callback = nullptr;
    QsciLexerEDIFACT_DefaultEolFill_Callback qscilexeredifact_defaulteolfill_callback = nullptr;
    QsciLexerEDIFACT_DefaultFont2_Callback qscilexeredifact_defaultfont2_callback = nullptr;
    QsciLexerEDIFACT_DefaultPaper2_Callback qscilexeredifact_defaultpaper2_callback = nullptr;
    QsciLexerEDIFACT_SetEditor_Callback qscilexeredifact_seteditor_callback = nullptr;
    QsciLexerEDIFACT_RefreshProperties_Callback qscilexeredifact_refreshproperties_callback = nullptr;
    QsciLexerEDIFACT_StyleBitsNeeded_Callback qscilexeredifact_stylebitsneeded_callback = nullptr;
    QsciLexerEDIFACT_WordCharacters_Callback qscilexeredifact_wordcharacters_callback = nullptr;
    QsciLexerEDIFACT_SetAutoIndentStyle_Callback qscilexeredifact_setautoindentstyle_callback = nullptr;
    QsciLexerEDIFACT_SetColor_Callback qscilexeredifact_setcolor_callback = nullptr;
    QsciLexerEDIFACT_SetEolFill_Callback qscilexeredifact_seteolfill_callback = nullptr;
    QsciLexerEDIFACT_SetFont_Callback qscilexeredifact_setfont_callback = nullptr;
    QsciLexerEDIFACT_SetPaper_Callback qscilexeredifact_setpaper_callback = nullptr;
    QsciLexerEDIFACT_ReadProperties_Callback qscilexeredifact_readproperties_callback = nullptr;
    QsciLexerEDIFACT_WriteProperties_Callback qscilexeredifact_writeproperties_callback = nullptr;
    QsciLexerEDIFACT_Event_Callback qscilexeredifact_event_callback = nullptr;
    QsciLexerEDIFACT_EventFilter_Callback qscilexeredifact_eventfilter_callback = nullptr;
    QsciLexerEDIFACT_TimerEvent_Callback qscilexeredifact_timerevent_callback = nullptr;
    QsciLexerEDIFACT_ChildEvent_Callback qscilexeredifact_childevent_callback = nullptr;
    QsciLexerEDIFACT_CustomEvent_Callback qscilexeredifact_customevent_callback = nullptr;
    QsciLexerEDIFACT_ConnectNotify_Callback qscilexeredifact_connectnotify_callback = nullptr;
    QsciLexerEDIFACT_DisconnectNotify_Callback qscilexeredifact_disconnectnotify_callback = nullptr;
    QsciLexerEDIFACT_TextAsBytes_Callback qscilexeredifact_textasbytes_callback = nullptr;
    QsciLexerEDIFACT_BytesAsText_Callback qscilexeredifact_bytesastext_callback = nullptr;
    QsciLexerEDIFACT_Sender_Callback qscilexeredifact_sender_callback = nullptr;
    QsciLexerEDIFACT_SenderSignalIndex_Callback qscilexeredifact_sendersignalindex_callback = nullptr;
    QsciLexerEDIFACT_Receivers_Callback qscilexeredifact_receivers_callback = nullptr;
    QsciLexerEDIFACT_IsSignalConnected_Callback qscilexeredifact_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeredifact_metacall_isbase = false;
    mutable bool qscilexeredifact_language_isbase = false;
    mutable bool qscilexeredifact_lexer_isbase = false;
    mutable bool qscilexeredifact_lexerid_isbase = false;
    mutable bool qscilexeredifact_autocompletionfillups_isbase = false;
    mutable bool qscilexeredifact_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeredifact_blockend_isbase = false;
    mutable bool qscilexeredifact_blocklookback_isbase = false;
    mutable bool qscilexeredifact_blockstart_isbase = false;
    mutable bool qscilexeredifact_blockstartkeyword_isbase = false;
    mutable bool qscilexeredifact_bracestyle_isbase = false;
    mutable bool qscilexeredifact_casesensitive_isbase = false;
    mutable bool qscilexeredifact_color_isbase = false;
    mutable bool qscilexeredifact_eolfill_isbase = false;
    mutable bool qscilexeredifact_font_isbase = false;
    mutable bool qscilexeredifact_indentationguideview_isbase = false;
    mutable bool qscilexeredifact_keywords_isbase = false;
    mutable bool qscilexeredifact_defaultstyle_isbase = false;
    mutable bool qscilexeredifact_description_isbase = false;
    mutable bool qscilexeredifact_paper_isbase = false;
    mutable bool qscilexeredifact_defaultcolor2_isbase = false;
    mutable bool qscilexeredifact_defaulteolfill_isbase = false;
    mutable bool qscilexeredifact_defaultfont2_isbase = false;
    mutable bool qscilexeredifact_defaultpaper2_isbase = false;
    mutable bool qscilexeredifact_seteditor_isbase = false;
    mutable bool qscilexeredifact_refreshproperties_isbase = false;
    mutable bool qscilexeredifact_stylebitsneeded_isbase = false;
    mutable bool qscilexeredifact_wordcharacters_isbase = false;
    mutable bool qscilexeredifact_setautoindentstyle_isbase = false;
    mutable bool qscilexeredifact_setcolor_isbase = false;
    mutable bool qscilexeredifact_seteolfill_isbase = false;
    mutable bool qscilexeredifact_setfont_isbase = false;
    mutable bool qscilexeredifact_setpaper_isbase = false;
    mutable bool qscilexeredifact_readproperties_isbase = false;
    mutable bool qscilexeredifact_writeproperties_isbase = false;
    mutable bool qscilexeredifact_event_isbase = false;
    mutable bool qscilexeredifact_eventfilter_isbase = false;
    mutable bool qscilexeredifact_timerevent_isbase = false;
    mutable bool qscilexeredifact_childevent_isbase = false;
    mutable bool qscilexeredifact_customevent_isbase = false;
    mutable bool qscilexeredifact_connectnotify_isbase = false;
    mutable bool qscilexeredifact_disconnectnotify_isbase = false;
    mutable bool qscilexeredifact_textasbytes_isbase = false;
    mutable bool qscilexeredifact_bytesastext_isbase = false;
    mutable bool qscilexeredifact_sender_isbase = false;
    mutable bool qscilexeredifact_sendersignalindex_isbase = false;
    mutable bool qscilexeredifact_receivers_isbase = false;
    mutable bool qscilexeredifact_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerEDIFACT() : QsciLexerEDIFACT() {};
    VirtualQsciLexerEDIFACT(QObject* parent) : QsciLexerEDIFACT(parent) {};

    ~VirtualQsciLexerEDIFACT() {
        qscilexeredifact_metacall_callback = nullptr;
        qscilexeredifact_language_callback = nullptr;
        qscilexeredifact_lexer_callback = nullptr;
        qscilexeredifact_lexerid_callback = nullptr;
        qscilexeredifact_autocompletionfillups_callback = nullptr;
        qscilexeredifact_autocompletionwordseparators_callback = nullptr;
        qscilexeredifact_blockend_callback = nullptr;
        qscilexeredifact_blocklookback_callback = nullptr;
        qscilexeredifact_blockstart_callback = nullptr;
        qscilexeredifact_blockstartkeyword_callback = nullptr;
        qscilexeredifact_bracestyle_callback = nullptr;
        qscilexeredifact_casesensitive_callback = nullptr;
        qscilexeredifact_color_callback = nullptr;
        qscilexeredifact_eolfill_callback = nullptr;
        qscilexeredifact_font_callback = nullptr;
        qscilexeredifact_indentationguideview_callback = nullptr;
        qscilexeredifact_keywords_callback = nullptr;
        qscilexeredifact_defaultstyle_callback = nullptr;
        qscilexeredifact_description_callback = nullptr;
        qscilexeredifact_paper_callback = nullptr;
        qscilexeredifact_defaultcolor2_callback = nullptr;
        qscilexeredifact_defaulteolfill_callback = nullptr;
        qscilexeredifact_defaultfont2_callback = nullptr;
        qscilexeredifact_defaultpaper2_callback = nullptr;
        qscilexeredifact_seteditor_callback = nullptr;
        qscilexeredifact_refreshproperties_callback = nullptr;
        qscilexeredifact_stylebitsneeded_callback = nullptr;
        qscilexeredifact_wordcharacters_callback = nullptr;
        qscilexeredifact_setautoindentstyle_callback = nullptr;
        qscilexeredifact_setcolor_callback = nullptr;
        qscilexeredifact_seteolfill_callback = nullptr;
        qscilexeredifact_setfont_callback = nullptr;
        qscilexeredifact_setpaper_callback = nullptr;
        qscilexeredifact_readproperties_callback = nullptr;
        qscilexeredifact_writeproperties_callback = nullptr;
        qscilexeredifact_event_callback = nullptr;
        qscilexeredifact_eventfilter_callback = nullptr;
        qscilexeredifact_timerevent_callback = nullptr;
        qscilexeredifact_childevent_callback = nullptr;
        qscilexeredifact_customevent_callback = nullptr;
        qscilexeredifact_connectnotify_callback = nullptr;
        qscilexeredifact_disconnectnotify_callback = nullptr;
        qscilexeredifact_textasbytes_callback = nullptr;
        qscilexeredifact_bytesastext_callback = nullptr;
        qscilexeredifact_sender_callback = nullptr;
        qscilexeredifact_sendersignalindex_callback = nullptr;
        qscilexeredifact_receivers_callback = nullptr;
        qscilexeredifact_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerEDIFACT_Metacall_Callback(QsciLexerEDIFACT_Metacall_Callback cb) { qscilexeredifact_metacall_callback = cb; }
    inline void setQsciLexerEDIFACT_Language_Callback(QsciLexerEDIFACT_Language_Callback cb) { qscilexeredifact_language_callback = cb; }
    inline void setQsciLexerEDIFACT_Lexer_Callback(QsciLexerEDIFACT_Lexer_Callback cb) { qscilexeredifact_lexer_callback = cb; }
    inline void setQsciLexerEDIFACT_LexerId_Callback(QsciLexerEDIFACT_LexerId_Callback cb) { qscilexeredifact_lexerid_callback = cb; }
    inline void setQsciLexerEDIFACT_AutoCompletionFillups_Callback(QsciLexerEDIFACT_AutoCompletionFillups_Callback cb) { qscilexeredifact_autocompletionfillups_callback = cb; }
    inline void setQsciLexerEDIFACT_AutoCompletionWordSeparators_Callback(QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback cb) { qscilexeredifact_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockEnd_Callback(QsciLexerEDIFACT_BlockEnd_Callback cb) { qscilexeredifact_blockend_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockLookback_Callback(QsciLexerEDIFACT_BlockLookback_Callback cb) { qscilexeredifact_blocklookback_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockStart_Callback(QsciLexerEDIFACT_BlockStart_Callback cb) { qscilexeredifact_blockstart_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockStartKeyword_Callback(QsciLexerEDIFACT_BlockStartKeyword_Callback cb) { qscilexeredifact_blockstartkeyword_callback = cb; }
    inline void setQsciLexerEDIFACT_BraceStyle_Callback(QsciLexerEDIFACT_BraceStyle_Callback cb) { qscilexeredifact_bracestyle_callback = cb; }
    inline void setQsciLexerEDIFACT_CaseSensitive_Callback(QsciLexerEDIFACT_CaseSensitive_Callback cb) { qscilexeredifact_casesensitive_callback = cb; }
    inline void setQsciLexerEDIFACT_Color_Callback(QsciLexerEDIFACT_Color_Callback cb) { qscilexeredifact_color_callback = cb; }
    inline void setQsciLexerEDIFACT_EolFill_Callback(QsciLexerEDIFACT_EolFill_Callback cb) { qscilexeredifact_eolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_Font_Callback(QsciLexerEDIFACT_Font_Callback cb) { qscilexeredifact_font_callback = cb; }
    inline void setQsciLexerEDIFACT_IndentationGuideView_Callback(QsciLexerEDIFACT_IndentationGuideView_Callback cb) { qscilexeredifact_indentationguideview_callback = cb; }
    inline void setQsciLexerEDIFACT_Keywords_Callback(QsciLexerEDIFACT_Keywords_Callback cb) { qscilexeredifact_keywords_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultStyle_Callback(QsciLexerEDIFACT_DefaultStyle_Callback cb) { qscilexeredifact_defaultstyle_callback = cb; }
    inline void setQsciLexerEDIFACT_Description_Callback(QsciLexerEDIFACT_Description_Callback cb) { qscilexeredifact_description_callback = cb; }
    inline void setQsciLexerEDIFACT_Paper_Callback(QsciLexerEDIFACT_Paper_Callback cb) { qscilexeredifact_paper_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultColor2_Callback(QsciLexerEDIFACT_DefaultColor2_Callback cb) { qscilexeredifact_defaultcolor2_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultEolFill_Callback(QsciLexerEDIFACT_DefaultEolFill_Callback cb) { qscilexeredifact_defaulteolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultFont2_Callback(QsciLexerEDIFACT_DefaultFont2_Callback cb) { qscilexeredifact_defaultfont2_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultPaper2_Callback(QsciLexerEDIFACT_DefaultPaper2_Callback cb) { qscilexeredifact_defaultpaper2_callback = cb; }
    inline void setQsciLexerEDIFACT_SetEditor_Callback(QsciLexerEDIFACT_SetEditor_Callback cb) { qscilexeredifact_seteditor_callback = cb; }
    inline void setQsciLexerEDIFACT_RefreshProperties_Callback(QsciLexerEDIFACT_RefreshProperties_Callback cb) { qscilexeredifact_refreshproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_StyleBitsNeeded_Callback(QsciLexerEDIFACT_StyleBitsNeeded_Callback cb) { qscilexeredifact_stylebitsneeded_callback = cb; }
    inline void setQsciLexerEDIFACT_WordCharacters_Callback(QsciLexerEDIFACT_WordCharacters_Callback cb) { qscilexeredifact_wordcharacters_callback = cb; }
    inline void setQsciLexerEDIFACT_SetAutoIndentStyle_Callback(QsciLexerEDIFACT_SetAutoIndentStyle_Callback cb) { qscilexeredifact_setautoindentstyle_callback = cb; }
    inline void setQsciLexerEDIFACT_SetColor_Callback(QsciLexerEDIFACT_SetColor_Callback cb) { qscilexeredifact_setcolor_callback = cb; }
    inline void setQsciLexerEDIFACT_SetEolFill_Callback(QsciLexerEDIFACT_SetEolFill_Callback cb) { qscilexeredifact_seteolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_SetFont_Callback(QsciLexerEDIFACT_SetFont_Callback cb) { qscilexeredifact_setfont_callback = cb; }
    inline void setQsciLexerEDIFACT_SetPaper_Callback(QsciLexerEDIFACT_SetPaper_Callback cb) { qscilexeredifact_setpaper_callback = cb; }
    inline void setQsciLexerEDIFACT_ReadProperties_Callback(QsciLexerEDIFACT_ReadProperties_Callback cb) { qscilexeredifact_readproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_WriteProperties_Callback(QsciLexerEDIFACT_WriteProperties_Callback cb) { qscilexeredifact_writeproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_Event_Callback(QsciLexerEDIFACT_Event_Callback cb) { qscilexeredifact_event_callback = cb; }
    inline void setQsciLexerEDIFACT_EventFilter_Callback(QsciLexerEDIFACT_EventFilter_Callback cb) { qscilexeredifact_eventfilter_callback = cb; }
    inline void setQsciLexerEDIFACT_TimerEvent_Callback(QsciLexerEDIFACT_TimerEvent_Callback cb) { qscilexeredifact_timerevent_callback = cb; }
    inline void setQsciLexerEDIFACT_ChildEvent_Callback(QsciLexerEDIFACT_ChildEvent_Callback cb) { qscilexeredifact_childevent_callback = cb; }
    inline void setQsciLexerEDIFACT_CustomEvent_Callback(QsciLexerEDIFACT_CustomEvent_Callback cb) { qscilexeredifact_customevent_callback = cb; }
    inline void setQsciLexerEDIFACT_ConnectNotify_Callback(QsciLexerEDIFACT_ConnectNotify_Callback cb) { qscilexeredifact_connectnotify_callback = cb; }
    inline void setQsciLexerEDIFACT_DisconnectNotify_Callback(QsciLexerEDIFACT_DisconnectNotify_Callback cb) { qscilexeredifact_disconnectnotify_callback = cb; }
    inline void setQsciLexerEDIFACT_TextAsBytes_Callback(QsciLexerEDIFACT_TextAsBytes_Callback cb) { qscilexeredifact_textasbytes_callback = cb; }
    inline void setQsciLexerEDIFACT_BytesAsText_Callback(QsciLexerEDIFACT_BytesAsText_Callback cb) { qscilexeredifact_bytesastext_callback = cb; }
    inline void setQsciLexerEDIFACT_Sender_Callback(QsciLexerEDIFACT_Sender_Callback cb) { qscilexeredifact_sender_callback = cb; }
    inline void setQsciLexerEDIFACT_SenderSignalIndex_Callback(QsciLexerEDIFACT_SenderSignalIndex_Callback cb) { qscilexeredifact_sendersignalindex_callback = cb; }
    inline void setQsciLexerEDIFACT_Receivers_Callback(QsciLexerEDIFACT_Receivers_Callback cb) { qscilexeredifact_receivers_callback = cb; }
    inline void setQsciLexerEDIFACT_IsSignalConnected_Callback(QsciLexerEDIFACT_IsSignalConnected_Callback cb) { qscilexeredifact_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerEDIFACT_Metacall_IsBase(bool value) const { qscilexeredifact_metacall_isbase = value; }
    inline void setQsciLexerEDIFACT_Language_IsBase(bool value) const { qscilexeredifact_language_isbase = value; }
    inline void setQsciLexerEDIFACT_Lexer_IsBase(bool value) const { qscilexeredifact_lexer_isbase = value; }
    inline void setQsciLexerEDIFACT_LexerId_IsBase(bool value) const { qscilexeredifact_lexerid_isbase = value; }
    inline void setQsciLexerEDIFACT_AutoCompletionFillups_IsBase(bool value) const { qscilexeredifact_autocompletionfillups_isbase = value; }
    inline void setQsciLexerEDIFACT_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeredifact_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockEnd_IsBase(bool value) const { qscilexeredifact_blockend_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockLookback_IsBase(bool value) const { qscilexeredifact_blocklookback_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockStart_IsBase(bool value) const { qscilexeredifact_blockstart_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockStartKeyword_IsBase(bool value) const { qscilexeredifact_blockstartkeyword_isbase = value; }
    inline void setQsciLexerEDIFACT_BraceStyle_IsBase(bool value) const { qscilexeredifact_bracestyle_isbase = value; }
    inline void setQsciLexerEDIFACT_CaseSensitive_IsBase(bool value) const { qscilexeredifact_casesensitive_isbase = value; }
    inline void setQsciLexerEDIFACT_Color_IsBase(bool value) const { qscilexeredifact_color_isbase = value; }
    inline void setQsciLexerEDIFACT_EolFill_IsBase(bool value) const { qscilexeredifact_eolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_Font_IsBase(bool value) const { qscilexeredifact_font_isbase = value; }
    inline void setQsciLexerEDIFACT_IndentationGuideView_IsBase(bool value) const { qscilexeredifact_indentationguideview_isbase = value; }
    inline void setQsciLexerEDIFACT_Keywords_IsBase(bool value) const { qscilexeredifact_keywords_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultStyle_IsBase(bool value) const { qscilexeredifact_defaultstyle_isbase = value; }
    inline void setQsciLexerEDIFACT_Description_IsBase(bool value) const { qscilexeredifact_description_isbase = value; }
    inline void setQsciLexerEDIFACT_Paper_IsBase(bool value) const { qscilexeredifact_paper_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultColor2_IsBase(bool value) const { qscilexeredifact_defaultcolor2_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultEolFill_IsBase(bool value) const { qscilexeredifact_defaulteolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultFont2_IsBase(bool value) const { qscilexeredifact_defaultfont2_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultPaper2_IsBase(bool value) const { qscilexeredifact_defaultpaper2_isbase = value; }
    inline void setQsciLexerEDIFACT_SetEditor_IsBase(bool value) const { qscilexeredifact_seteditor_isbase = value; }
    inline void setQsciLexerEDIFACT_RefreshProperties_IsBase(bool value) const { qscilexeredifact_refreshproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_StyleBitsNeeded_IsBase(bool value) const { qscilexeredifact_stylebitsneeded_isbase = value; }
    inline void setQsciLexerEDIFACT_WordCharacters_IsBase(bool value) const { qscilexeredifact_wordcharacters_isbase = value; }
    inline void setQsciLexerEDIFACT_SetAutoIndentStyle_IsBase(bool value) const { qscilexeredifact_setautoindentstyle_isbase = value; }
    inline void setQsciLexerEDIFACT_SetColor_IsBase(bool value) const { qscilexeredifact_setcolor_isbase = value; }
    inline void setQsciLexerEDIFACT_SetEolFill_IsBase(bool value) const { qscilexeredifact_seteolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_SetFont_IsBase(bool value) const { qscilexeredifact_setfont_isbase = value; }
    inline void setQsciLexerEDIFACT_SetPaper_IsBase(bool value) const { qscilexeredifact_setpaper_isbase = value; }
    inline void setQsciLexerEDIFACT_ReadProperties_IsBase(bool value) const { qscilexeredifact_readproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_WriteProperties_IsBase(bool value) const { qscilexeredifact_writeproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_Event_IsBase(bool value) const { qscilexeredifact_event_isbase = value; }
    inline void setQsciLexerEDIFACT_EventFilter_IsBase(bool value) const { qscilexeredifact_eventfilter_isbase = value; }
    inline void setQsciLexerEDIFACT_TimerEvent_IsBase(bool value) const { qscilexeredifact_timerevent_isbase = value; }
    inline void setQsciLexerEDIFACT_ChildEvent_IsBase(bool value) const { qscilexeredifact_childevent_isbase = value; }
    inline void setQsciLexerEDIFACT_CustomEvent_IsBase(bool value) const { qscilexeredifact_customevent_isbase = value; }
    inline void setQsciLexerEDIFACT_ConnectNotify_IsBase(bool value) const { qscilexeredifact_connectnotify_isbase = value; }
    inline void setQsciLexerEDIFACT_DisconnectNotify_IsBase(bool value) const { qscilexeredifact_disconnectnotify_isbase = value; }
    inline void setQsciLexerEDIFACT_TextAsBytes_IsBase(bool value) const { qscilexeredifact_textasbytes_isbase = value; }
    inline void setQsciLexerEDIFACT_BytesAsText_IsBase(bool value) const { qscilexeredifact_bytesastext_isbase = value; }
    inline void setQsciLexerEDIFACT_Sender_IsBase(bool value) const { qscilexeredifact_sender_isbase = value; }
    inline void setQsciLexerEDIFACT_SenderSignalIndex_IsBase(bool value) const { qscilexeredifact_sendersignalindex_isbase = value; }
    inline void setQsciLexerEDIFACT_Receivers_IsBase(bool value) const { qscilexeredifact_receivers_isbase = value; }
    inline void setQsciLexerEDIFACT_IsSignalConnected_IsBase(bool value) const { qscilexeredifact_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeredifact_metacall_isbase) {
            qscilexeredifact_metacall_isbase = false;
            return QsciLexerEDIFACT::qt_metacall(param1, param2, param3);
        } else if (qscilexeredifact_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexeredifact_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeredifact_language_callback != nullptr) {
            const char* callback_ret = qscilexeredifact_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeredifact_lexer_isbase) {
            qscilexeredifact_lexer_isbase = false;
            return QsciLexerEDIFACT::lexer();
        } else if (qscilexeredifact_lexer_callback != nullptr) {
            const char* callback_ret = qscilexeredifact_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeredifact_lexerid_isbase) {
            qscilexeredifact_lexerid_isbase = false;
            return QsciLexerEDIFACT::lexerId();
        } else if (qscilexeredifact_lexerid_callback != nullptr) {
            int callback_ret = qscilexeredifact_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeredifact_autocompletionfillups_isbase) {
            qscilexeredifact_autocompletionfillups_isbase = false;
            return QsciLexerEDIFACT::autoCompletionFillups();
        } else if (qscilexeredifact_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexeredifact_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeredifact_autocompletionwordseparators_isbase) {
            qscilexeredifact_autocompletionwordseparators_isbase = false;
            return QsciLexerEDIFACT::autoCompletionWordSeparators();
        } else if (qscilexeredifact_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexeredifact_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerEDIFACT::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeredifact_blockend_isbase) {
            qscilexeredifact_blockend_isbase = false;
            return QsciLexerEDIFACT::blockEnd(style);
        } else if (qscilexeredifact_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeredifact_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeredifact_blocklookback_isbase) {
            qscilexeredifact_blocklookback_isbase = false;
            return QsciLexerEDIFACT::blockLookback();
        } else if (qscilexeredifact_blocklookback_callback != nullptr) {
            int callback_ret = qscilexeredifact_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeredifact_blockstart_isbase) {
            qscilexeredifact_blockstart_isbase = false;
            return QsciLexerEDIFACT::blockStart(style);
        } else if (qscilexeredifact_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeredifact_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeredifact_blockstartkeyword_isbase) {
            qscilexeredifact_blockstartkeyword_isbase = false;
            return QsciLexerEDIFACT::blockStartKeyword(style);
        } else if (qscilexeredifact_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeredifact_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeredifact_bracestyle_isbase) {
            qscilexeredifact_bracestyle_isbase = false;
            return QsciLexerEDIFACT::braceStyle();
        } else if (qscilexeredifact_bracestyle_callback != nullptr) {
            int callback_ret = qscilexeredifact_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeredifact_casesensitive_isbase) {
            qscilexeredifact_casesensitive_isbase = false;
            return QsciLexerEDIFACT::caseSensitive();
        } else if (qscilexeredifact_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexeredifact_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeredifact_color_isbase) {
            qscilexeredifact_color_isbase = false;
            return QsciLexerEDIFACT::color(style);
        } else if (qscilexeredifact_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeredifact_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeredifact_eolfill_isbase) {
            qscilexeredifact_eolfill_isbase = false;
            return QsciLexerEDIFACT::eolFill(style);
        } else if (qscilexeredifact_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeredifact_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeredifact_font_isbase) {
            qscilexeredifact_font_isbase = false;
            return QsciLexerEDIFACT::font(style);
        } else if (qscilexeredifact_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeredifact_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeredifact_indentationguideview_isbase) {
            qscilexeredifact_indentationguideview_isbase = false;
            return QsciLexerEDIFACT::indentationGuideView();
        } else if (qscilexeredifact_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexeredifact_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeredifact_keywords_isbase) {
            qscilexeredifact_keywords_isbase = false;
            return QsciLexerEDIFACT::keywords(set);
        } else if (qscilexeredifact_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexeredifact_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeredifact_defaultstyle_isbase) {
            qscilexeredifact_defaultstyle_isbase = false;
            return QsciLexerEDIFACT::defaultStyle();
        } else if (qscilexeredifact_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexeredifact_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeredifact_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexeredifact_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeredifact_paper_isbase) {
            qscilexeredifact_paper_isbase = false;
            return QsciLexerEDIFACT::paper(style);
        } else if (qscilexeredifact_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeredifact_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeredifact_defaultcolor2_isbase) {
            qscilexeredifact_defaultcolor2_isbase = false;
            return QsciLexerEDIFACT::defaultColor(style);
        } else if (qscilexeredifact_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeredifact_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeredifact_defaulteolfill_isbase) {
            qscilexeredifact_defaulteolfill_isbase = false;
            return QsciLexerEDIFACT::defaultEolFill(style);
        } else if (qscilexeredifact_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeredifact_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeredifact_defaultfont2_isbase) {
            qscilexeredifact_defaultfont2_isbase = false;
            return QsciLexerEDIFACT::defaultFont(style);
        } else if (qscilexeredifact_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeredifact_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeredifact_defaultpaper2_isbase) {
            qscilexeredifact_defaultpaper2_isbase = false;
            return QsciLexerEDIFACT::defaultPaper(style);
        } else if (qscilexeredifact_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeredifact_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerEDIFACT::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeredifact_seteditor_isbase) {
            qscilexeredifact_seteditor_isbase = false;
            QsciLexerEDIFACT::setEditor(editor);
        } else if (qscilexeredifact_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexeredifact_seteditor_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeredifact_refreshproperties_isbase) {
            qscilexeredifact_refreshproperties_isbase = false;
            QsciLexerEDIFACT::refreshProperties();
        } else if (qscilexeredifact_refreshproperties_callback != nullptr) {
            qscilexeredifact_refreshproperties_callback();
        } else {
            QsciLexerEDIFACT::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeredifact_stylebitsneeded_isbase) {
            qscilexeredifact_stylebitsneeded_isbase = false;
            return QsciLexerEDIFACT::styleBitsNeeded();
        } else if (qscilexeredifact_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexeredifact_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeredifact_wordcharacters_isbase) {
            qscilexeredifact_wordcharacters_isbase = false;
            return QsciLexerEDIFACT::wordCharacters();
        } else if (qscilexeredifact_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexeredifact_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeredifact_setautoindentstyle_isbase) {
            qscilexeredifact_setautoindentstyle_isbase = false;
            QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexeredifact_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexeredifact_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeredifact_setcolor_isbase) {
            qscilexeredifact_setcolor_isbase = false;
            QsciLexerEDIFACT::setColor(c, style);
        } else if (qscilexeredifact_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeredifact_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerEDIFACT::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeredifact_seteolfill_isbase) {
            qscilexeredifact_seteolfill_isbase = false;
            QsciLexerEDIFACT::setEolFill(eoffill, style);
        } else if (qscilexeredifact_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexeredifact_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerEDIFACT::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeredifact_setfont_isbase) {
            qscilexeredifact_setfont_isbase = false;
            QsciLexerEDIFACT::setFont(f, style);
        } else if (qscilexeredifact_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexeredifact_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerEDIFACT::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeredifact_setpaper_isbase) {
            qscilexeredifact_setpaper_isbase = false;
            QsciLexerEDIFACT::setPaper(c, style);
        } else if (qscilexeredifact_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeredifact_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerEDIFACT::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeredifact_readproperties_isbase) {
            qscilexeredifact_readproperties_isbase = false;
            return QsciLexerEDIFACT::readProperties(qs, prefix);
        } else if (qscilexeredifact_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexeredifact_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeredifact_writeproperties_isbase) {
            qscilexeredifact_writeproperties_isbase = false;
            return QsciLexerEDIFACT::writeProperties(qs, prefix);
        } else if (qscilexeredifact_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexeredifact_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeredifact_event_isbase) {
            qscilexeredifact_event_isbase = false;
            return QsciLexerEDIFACT::event(event);
        } else if (qscilexeredifact_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexeredifact_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeredifact_eventfilter_isbase) {
            qscilexeredifact_eventfilter_isbase = false;
            return QsciLexerEDIFACT::eventFilter(watched, event);
        } else if (qscilexeredifact_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexeredifact_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeredifact_timerevent_isbase) {
            qscilexeredifact_timerevent_isbase = false;
            QsciLexerEDIFACT::timerEvent(event);
        } else if (qscilexeredifact_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexeredifact_timerevent_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeredifact_childevent_isbase) {
            qscilexeredifact_childevent_isbase = false;
            QsciLexerEDIFACT::childEvent(event);
        } else if (qscilexeredifact_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexeredifact_childevent_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeredifact_customevent_isbase) {
            qscilexeredifact_customevent_isbase = false;
            QsciLexerEDIFACT::customEvent(event);
        } else if (qscilexeredifact_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexeredifact_customevent_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_connectnotify_isbase) {
            qscilexeredifact_connectnotify_isbase = false;
            QsciLexerEDIFACT::connectNotify(signal);
        } else if (qscilexeredifact_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeredifact_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_disconnectnotify_isbase) {
            qscilexeredifact_disconnectnotify_isbase = false;
            QsciLexerEDIFACT::disconnectNotify(signal);
        } else if (qscilexeredifact_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeredifact_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerEDIFACT::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexeredifact_textasbytes_isbase) {
            qscilexeredifact_textasbytes_isbase = false;
            return QsciLexerEDIFACT::textAsBytes(text);
        } else if (qscilexeredifact_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexeredifact_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerEDIFACT::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexeredifact_bytesastext_isbase) {
            qscilexeredifact_bytesastext_isbase = false;
            return QsciLexerEDIFACT::bytesAsText(bytes, size);
        } else if (qscilexeredifact_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexeredifact_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerEDIFACT::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeredifact_sender_isbase) {
            qscilexeredifact_sender_isbase = false;
            return QsciLexerEDIFACT::sender();
        } else if (qscilexeredifact_sender_callback != nullptr) {
            QObject* callback_ret = qscilexeredifact_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeredifact_sendersignalindex_isbase) {
            qscilexeredifact_sendersignalindex_isbase = false;
            return QsciLexerEDIFACT::senderSignalIndex();
        } else if (qscilexeredifact_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexeredifact_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeredifact_receivers_isbase) {
            qscilexeredifact_receivers_isbase = false;
            return QsciLexerEDIFACT::receivers(signal);
        } else if (qscilexeredifact_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexeredifact_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerEDIFACT::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeredifact_issignalconnected_isbase) {
            qscilexeredifact_issignalconnected_isbase = false;
            return QsciLexerEDIFACT::isSignalConnected(signal);
        } else if (qscilexeredifact_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexeredifact_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerEDIFACT::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_QBaseReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_QBaseWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
    friend void QsciLexerEDIFACT_QBaseTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
    friend void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
    friend void QsciLexerEDIFACT_QBaseChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
    friend void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event);
    friend void QsciLexerEDIFACT_QBaseCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
    friend void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_QBaseConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_QBaseDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerEDIFACT_TextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
    friend libqt_string QsciLexerEDIFACT_QBaseTextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
    friend libqt_string QsciLexerEDIFACT_BytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
    friend libqt_string QsciLexerEDIFACT_QBaseBytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
    friend QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self);
    friend QObject* QsciLexerEDIFACT_QBaseSender(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_QBaseSenderSignalIndex(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal);
    friend int QsciLexerEDIFACT_QBaseReceivers(const QsciLexerEDIFACT* self, const char* signal);
    friend bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend bool QsciLexerEDIFACT_QBaseIsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
};

#endif
