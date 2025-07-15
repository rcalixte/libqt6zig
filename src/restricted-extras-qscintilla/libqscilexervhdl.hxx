#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVHDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVHDL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVHDL so that we can call protected methods
class VirtualQsciLexerVHDL final : public QsciLexerVHDL {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerVHDL = true;

    // Virtual class public types (including callbacks)
    using QsciLexerVHDL_Metacall_Callback = int (*)(QsciLexerVHDL*, int, int, void**);
    using QsciLexerVHDL_SetFoldComments_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldCompact_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtElse_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtBegin_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtParenthesis_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_Language_Callback = const char* (*)();
    using QsciLexerVHDL_Lexer_Callback = const char* (*)();
    using QsciLexerVHDL_LexerId_Callback = int (*)();
    using QsciLexerVHDL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerVHDL_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerVHDL_BlockEnd_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockLookback_Callback = int (*)();
    using QsciLexerVHDL_BlockStart_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BraceStyle_Callback = int (*)();
    using QsciLexerVHDL_CaseSensitive_Callback = bool (*)();
    using QsciLexerVHDL_Color_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_EolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Font_Callback = QFont* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_IndentationGuideView_Callback = int (*)();
    using QsciLexerVHDL_Keywords_Callback = const char* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultStyle_Callback = int (*)();
    using QsciLexerVHDL_Description_Callback = libqt_string (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Paper_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultColor2_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultEolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultFont2_Callback = QFont* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetEditor_Callback = void (*)(QsciLexerVHDL*, QsciScintilla*);
    using QsciLexerVHDL_RefreshProperties_Callback = void (*)();
    using QsciLexerVHDL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerVHDL_WordCharacters_Callback = const char* (*)();
    using QsciLexerVHDL_SetAutoIndentStyle_Callback = void (*)(QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetColor_Callback = void (*)(QsciLexerVHDL*, QColor*, int);
    using QsciLexerVHDL_SetEolFill_Callback = void (*)(QsciLexerVHDL*, bool, int);
    using QsciLexerVHDL_SetFont_Callback = void (*)(QsciLexerVHDL*, QFont*, int);
    using QsciLexerVHDL_SetPaper_Callback = void (*)(QsciLexerVHDL*, QColor*, int);
    using QsciLexerVHDL_ReadProperties_Callback = bool (*)(QsciLexerVHDL*, QSettings*, libqt_string);
    using QsciLexerVHDL_WriteProperties_Callback = bool (*)(const QsciLexerVHDL*, QSettings*, libqt_string);
    using QsciLexerVHDL_Event_Callback = bool (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_EventFilter_Callback = bool (*)(QsciLexerVHDL*, QObject*, QEvent*);
    using QsciLexerVHDL_TimerEvent_Callback = void (*)(QsciLexerVHDL*, QTimerEvent*);
    using QsciLexerVHDL_ChildEvent_Callback = void (*)(QsciLexerVHDL*, QChildEvent*);
    using QsciLexerVHDL_CustomEvent_Callback = void (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_ConnectNotify_Callback = void (*)(QsciLexerVHDL*, QMetaMethod*);
    using QsciLexerVHDL_DisconnectNotify_Callback = void (*)(QsciLexerVHDL*, QMetaMethod*);
    using QsciLexerVHDL_TextAsBytes_Callback = libqt_string (*)(const QsciLexerVHDL*, libqt_string);
    using QsciLexerVHDL_BytesAsText_Callback = libqt_string (*)(const QsciLexerVHDL*, const char*, int);
    using QsciLexerVHDL_Sender_Callback = QObject* (*)();
    using QsciLexerVHDL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerVHDL_Receivers_Callback = int (*)(const QsciLexerVHDL*, const char*);
    using QsciLexerVHDL_IsSignalConnected_Callback = bool (*)(const QsciLexerVHDL*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerVHDL_Metacall_Callback qscilexervhdl_metacall_callback = nullptr;
    QsciLexerVHDL_SetFoldComments_Callback qscilexervhdl_setfoldcomments_callback = nullptr;
    QsciLexerVHDL_SetFoldCompact_Callback qscilexervhdl_setfoldcompact_callback = nullptr;
    QsciLexerVHDL_SetFoldAtElse_Callback qscilexervhdl_setfoldatelse_callback = nullptr;
    QsciLexerVHDL_SetFoldAtBegin_Callback qscilexervhdl_setfoldatbegin_callback = nullptr;
    QsciLexerVHDL_SetFoldAtParenthesis_Callback qscilexervhdl_setfoldatparenthesis_callback = nullptr;
    QsciLexerVHDL_Language_Callback qscilexervhdl_language_callback = nullptr;
    QsciLexerVHDL_Lexer_Callback qscilexervhdl_lexer_callback = nullptr;
    QsciLexerVHDL_LexerId_Callback qscilexervhdl_lexerid_callback = nullptr;
    QsciLexerVHDL_AutoCompletionFillups_Callback qscilexervhdl_autocompletionfillups_callback = nullptr;
    QsciLexerVHDL_AutoCompletionWordSeparators_Callback qscilexervhdl_autocompletionwordseparators_callback = nullptr;
    QsciLexerVHDL_BlockEnd_Callback qscilexervhdl_blockend_callback = nullptr;
    QsciLexerVHDL_BlockLookback_Callback qscilexervhdl_blocklookback_callback = nullptr;
    QsciLexerVHDL_BlockStart_Callback qscilexervhdl_blockstart_callback = nullptr;
    QsciLexerVHDL_BlockStartKeyword_Callback qscilexervhdl_blockstartkeyword_callback = nullptr;
    QsciLexerVHDL_BraceStyle_Callback qscilexervhdl_bracestyle_callback = nullptr;
    QsciLexerVHDL_CaseSensitive_Callback qscilexervhdl_casesensitive_callback = nullptr;
    QsciLexerVHDL_Color_Callback qscilexervhdl_color_callback = nullptr;
    QsciLexerVHDL_EolFill_Callback qscilexervhdl_eolfill_callback = nullptr;
    QsciLexerVHDL_Font_Callback qscilexervhdl_font_callback = nullptr;
    QsciLexerVHDL_IndentationGuideView_Callback qscilexervhdl_indentationguideview_callback = nullptr;
    QsciLexerVHDL_Keywords_Callback qscilexervhdl_keywords_callback = nullptr;
    QsciLexerVHDL_DefaultStyle_Callback qscilexervhdl_defaultstyle_callback = nullptr;
    QsciLexerVHDL_Description_Callback qscilexervhdl_description_callback = nullptr;
    QsciLexerVHDL_Paper_Callback qscilexervhdl_paper_callback = nullptr;
    QsciLexerVHDL_DefaultColor2_Callback qscilexervhdl_defaultcolor2_callback = nullptr;
    QsciLexerVHDL_DefaultEolFill_Callback qscilexervhdl_defaulteolfill_callback = nullptr;
    QsciLexerVHDL_DefaultFont2_Callback qscilexervhdl_defaultfont2_callback = nullptr;
    QsciLexerVHDL_DefaultPaper2_Callback qscilexervhdl_defaultpaper2_callback = nullptr;
    QsciLexerVHDL_SetEditor_Callback qscilexervhdl_seteditor_callback = nullptr;
    QsciLexerVHDL_RefreshProperties_Callback qscilexervhdl_refreshproperties_callback = nullptr;
    QsciLexerVHDL_StyleBitsNeeded_Callback qscilexervhdl_stylebitsneeded_callback = nullptr;
    QsciLexerVHDL_WordCharacters_Callback qscilexervhdl_wordcharacters_callback = nullptr;
    QsciLexerVHDL_SetAutoIndentStyle_Callback qscilexervhdl_setautoindentstyle_callback = nullptr;
    QsciLexerVHDL_SetColor_Callback qscilexervhdl_setcolor_callback = nullptr;
    QsciLexerVHDL_SetEolFill_Callback qscilexervhdl_seteolfill_callback = nullptr;
    QsciLexerVHDL_SetFont_Callback qscilexervhdl_setfont_callback = nullptr;
    QsciLexerVHDL_SetPaper_Callback qscilexervhdl_setpaper_callback = nullptr;
    QsciLexerVHDL_ReadProperties_Callback qscilexervhdl_readproperties_callback = nullptr;
    QsciLexerVHDL_WriteProperties_Callback qscilexervhdl_writeproperties_callback = nullptr;
    QsciLexerVHDL_Event_Callback qscilexervhdl_event_callback = nullptr;
    QsciLexerVHDL_EventFilter_Callback qscilexervhdl_eventfilter_callback = nullptr;
    QsciLexerVHDL_TimerEvent_Callback qscilexervhdl_timerevent_callback = nullptr;
    QsciLexerVHDL_ChildEvent_Callback qscilexervhdl_childevent_callback = nullptr;
    QsciLexerVHDL_CustomEvent_Callback qscilexervhdl_customevent_callback = nullptr;
    QsciLexerVHDL_ConnectNotify_Callback qscilexervhdl_connectnotify_callback = nullptr;
    QsciLexerVHDL_DisconnectNotify_Callback qscilexervhdl_disconnectnotify_callback = nullptr;
    QsciLexerVHDL_TextAsBytes_Callback qscilexervhdl_textasbytes_callback = nullptr;
    QsciLexerVHDL_BytesAsText_Callback qscilexervhdl_bytesastext_callback = nullptr;
    QsciLexerVHDL_Sender_Callback qscilexervhdl_sender_callback = nullptr;
    QsciLexerVHDL_SenderSignalIndex_Callback qscilexervhdl_sendersignalindex_callback = nullptr;
    QsciLexerVHDL_Receivers_Callback qscilexervhdl_receivers_callback = nullptr;
    QsciLexerVHDL_IsSignalConnected_Callback qscilexervhdl_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexervhdl_metacall_isbase = false;
    mutable bool qscilexervhdl_setfoldcomments_isbase = false;
    mutable bool qscilexervhdl_setfoldcompact_isbase = false;
    mutable bool qscilexervhdl_setfoldatelse_isbase = false;
    mutable bool qscilexervhdl_setfoldatbegin_isbase = false;
    mutable bool qscilexervhdl_setfoldatparenthesis_isbase = false;
    mutable bool qscilexervhdl_language_isbase = false;
    mutable bool qscilexervhdl_lexer_isbase = false;
    mutable bool qscilexervhdl_lexerid_isbase = false;
    mutable bool qscilexervhdl_autocompletionfillups_isbase = false;
    mutable bool qscilexervhdl_autocompletionwordseparators_isbase = false;
    mutable bool qscilexervhdl_blockend_isbase = false;
    mutable bool qscilexervhdl_blocklookback_isbase = false;
    mutable bool qscilexervhdl_blockstart_isbase = false;
    mutable bool qscilexervhdl_blockstartkeyword_isbase = false;
    mutable bool qscilexervhdl_bracestyle_isbase = false;
    mutable bool qscilexervhdl_casesensitive_isbase = false;
    mutable bool qscilexervhdl_color_isbase = false;
    mutable bool qscilexervhdl_eolfill_isbase = false;
    mutable bool qscilexervhdl_font_isbase = false;
    mutable bool qscilexervhdl_indentationguideview_isbase = false;
    mutable bool qscilexervhdl_keywords_isbase = false;
    mutable bool qscilexervhdl_defaultstyle_isbase = false;
    mutable bool qscilexervhdl_description_isbase = false;
    mutable bool qscilexervhdl_paper_isbase = false;
    mutable bool qscilexervhdl_defaultcolor2_isbase = false;
    mutable bool qscilexervhdl_defaulteolfill_isbase = false;
    mutable bool qscilexervhdl_defaultfont2_isbase = false;
    mutable bool qscilexervhdl_defaultpaper2_isbase = false;
    mutable bool qscilexervhdl_seteditor_isbase = false;
    mutable bool qscilexervhdl_refreshproperties_isbase = false;
    mutable bool qscilexervhdl_stylebitsneeded_isbase = false;
    mutable bool qscilexervhdl_wordcharacters_isbase = false;
    mutable bool qscilexervhdl_setautoindentstyle_isbase = false;
    mutable bool qscilexervhdl_setcolor_isbase = false;
    mutable bool qscilexervhdl_seteolfill_isbase = false;
    mutable bool qscilexervhdl_setfont_isbase = false;
    mutable bool qscilexervhdl_setpaper_isbase = false;
    mutable bool qscilexervhdl_readproperties_isbase = false;
    mutable bool qscilexervhdl_writeproperties_isbase = false;
    mutable bool qscilexervhdl_event_isbase = false;
    mutable bool qscilexervhdl_eventfilter_isbase = false;
    mutable bool qscilexervhdl_timerevent_isbase = false;
    mutable bool qscilexervhdl_childevent_isbase = false;
    mutable bool qscilexervhdl_customevent_isbase = false;
    mutable bool qscilexervhdl_connectnotify_isbase = false;
    mutable bool qscilexervhdl_disconnectnotify_isbase = false;
    mutable bool qscilexervhdl_textasbytes_isbase = false;
    mutable bool qscilexervhdl_bytesastext_isbase = false;
    mutable bool qscilexervhdl_sender_isbase = false;
    mutable bool qscilexervhdl_sendersignalindex_isbase = false;
    mutable bool qscilexervhdl_receivers_isbase = false;
    mutable bool qscilexervhdl_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerVHDL() : QsciLexerVHDL() {};
    VirtualQsciLexerVHDL(QObject* parent) : QsciLexerVHDL(parent) {};

    ~VirtualQsciLexerVHDL() {
        qscilexervhdl_metacall_callback = nullptr;
        qscilexervhdl_setfoldcomments_callback = nullptr;
        qscilexervhdl_setfoldcompact_callback = nullptr;
        qscilexervhdl_setfoldatelse_callback = nullptr;
        qscilexervhdl_setfoldatbegin_callback = nullptr;
        qscilexervhdl_setfoldatparenthesis_callback = nullptr;
        qscilexervhdl_language_callback = nullptr;
        qscilexervhdl_lexer_callback = nullptr;
        qscilexervhdl_lexerid_callback = nullptr;
        qscilexervhdl_autocompletionfillups_callback = nullptr;
        qscilexervhdl_autocompletionwordseparators_callback = nullptr;
        qscilexervhdl_blockend_callback = nullptr;
        qscilexervhdl_blocklookback_callback = nullptr;
        qscilexervhdl_blockstart_callback = nullptr;
        qscilexervhdl_blockstartkeyword_callback = nullptr;
        qscilexervhdl_bracestyle_callback = nullptr;
        qscilexervhdl_casesensitive_callback = nullptr;
        qscilexervhdl_color_callback = nullptr;
        qscilexervhdl_eolfill_callback = nullptr;
        qscilexervhdl_font_callback = nullptr;
        qscilexervhdl_indentationguideview_callback = nullptr;
        qscilexervhdl_keywords_callback = nullptr;
        qscilexervhdl_defaultstyle_callback = nullptr;
        qscilexervhdl_description_callback = nullptr;
        qscilexervhdl_paper_callback = nullptr;
        qscilexervhdl_defaultcolor2_callback = nullptr;
        qscilexervhdl_defaulteolfill_callback = nullptr;
        qscilexervhdl_defaultfont2_callback = nullptr;
        qscilexervhdl_defaultpaper2_callback = nullptr;
        qscilexervhdl_seteditor_callback = nullptr;
        qscilexervhdl_refreshproperties_callback = nullptr;
        qscilexervhdl_stylebitsneeded_callback = nullptr;
        qscilexervhdl_wordcharacters_callback = nullptr;
        qscilexervhdl_setautoindentstyle_callback = nullptr;
        qscilexervhdl_setcolor_callback = nullptr;
        qscilexervhdl_seteolfill_callback = nullptr;
        qscilexervhdl_setfont_callback = nullptr;
        qscilexervhdl_setpaper_callback = nullptr;
        qscilexervhdl_readproperties_callback = nullptr;
        qscilexervhdl_writeproperties_callback = nullptr;
        qscilexervhdl_event_callback = nullptr;
        qscilexervhdl_eventfilter_callback = nullptr;
        qscilexervhdl_timerevent_callback = nullptr;
        qscilexervhdl_childevent_callback = nullptr;
        qscilexervhdl_customevent_callback = nullptr;
        qscilexervhdl_connectnotify_callback = nullptr;
        qscilexervhdl_disconnectnotify_callback = nullptr;
        qscilexervhdl_textasbytes_callback = nullptr;
        qscilexervhdl_bytesastext_callback = nullptr;
        qscilexervhdl_sender_callback = nullptr;
        qscilexervhdl_sendersignalindex_callback = nullptr;
        qscilexervhdl_receivers_callback = nullptr;
        qscilexervhdl_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerVHDL_Metacall_Callback(QsciLexerVHDL_Metacall_Callback cb) { qscilexervhdl_metacall_callback = cb; }
    inline void setQsciLexerVHDL_SetFoldComments_Callback(QsciLexerVHDL_SetFoldComments_Callback cb) { qscilexervhdl_setfoldcomments_callback = cb; }
    inline void setQsciLexerVHDL_SetFoldCompact_Callback(QsciLexerVHDL_SetFoldCompact_Callback cb) { qscilexervhdl_setfoldcompact_callback = cb; }
    inline void setQsciLexerVHDL_SetFoldAtElse_Callback(QsciLexerVHDL_SetFoldAtElse_Callback cb) { qscilexervhdl_setfoldatelse_callback = cb; }
    inline void setQsciLexerVHDL_SetFoldAtBegin_Callback(QsciLexerVHDL_SetFoldAtBegin_Callback cb) { qscilexervhdl_setfoldatbegin_callback = cb; }
    inline void setQsciLexerVHDL_SetFoldAtParenthesis_Callback(QsciLexerVHDL_SetFoldAtParenthesis_Callback cb) { qscilexervhdl_setfoldatparenthesis_callback = cb; }
    inline void setQsciLexerVHDL_Language_Callback(QsciLexerVHDL_Language_Callback cb) { qscilexervhdl_language_callback = cb; }
    inline void setQsciLexerVHDL_Lexer_Callback(QsciLexerVHDL_Lexer_Callback cb) { qscilexervhdl_lexer_callback = cb; }
    inline void setQsciLexerVHDL_LexerId_Callback(QsciLexerVHDL_LexerId_Callback cb) { qscilexervhdl_lexerid_callback = cb; }
    inline void setQsciLexerVHDL_AutoCompletionFillups_Callback(QsciLexerVHDL_AutoCompletionFillups_Callback cb) { qscilexervhdl_autocompletionfillups_callback = cb; }
    inline void setQsciLexerVHDL_AutoCompletionWordSeparators_Callback(QsciLexerVHDL_AutoCompletionWordSeparators_Callback cb) { qscilexervhdl_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerVHDL_BlockEnd_Callback(QsciLexerVHDL_BlockEnd_Callback cb) { qscilexervhdl_blockend_callback = cb; }
    inline void setQsciLexerVHDL_BlockLookback_Callback(QsciLexerVHDL_BlockLookback_Callback cb) { qscilexervhdl_blocklookback_callback = cb; }
    inline void setQsciLexerVHDL_BlockStart_Callback(QsciLexerVHDL_BlockStart_Callback cb) { qscilexervhdl_blockstart_callback = cb; }
    inline void setQsciLexerVHDL_BlockStartKeyword_Callback(QsciLexerVHDL_BlockStartKeyword_Callback cb) { qscilexervhdl_blockstartkeyword_callback = cb; }
    inline void setQsciLexerVHDL_BraceStyle_Callback(QsciLexerVHDL_BraceStyle_Callback cb) { qscilexervhdl_bracestyle_callback = cb; }
    inline void setQsciLexerVHDL_CaseSensitive_Callback(QsciLexerVHDL_CaseSensitive_Callback cb) { qscilexervhdl_casesensitive_callback = cb; }
    inline void setQsciLexerVHDL_Color_Callback(QsciLexerVHDL_Color_Callback cb) { qscilexervhdl_color_callback = cb; }
    inline void setQsciLexerVHDL_EolFill_Callback(QsciLexerVHDL_EolFill_Callback cb) { qscilexervhdl_eolfill_callback = cb; }
    inline void setQsciLexerVHDL_Font_Callback(QsciLexerVHDL_Font_Callback cb) { qscilexervhdl_font_callback = cb; }
    inline void setQsciLexerVHDL_IndentationGuideView_Callback(QsciLexerVHDL_IndentationGuideView_Callback cb) { qscilexervhdl_indentationguideview_callback = cb; }
    inline void setQsciLexerVHDL_Keywords_Callback(QsciLexerVHDL_Keywords_Callback cb) { qscilexervhdl_keywords_callback = cb; }
    inline void setQsciLexerVHDL_DefaultStyle_Callback(QsciLexerVHDL_DefaultStyle_Callback cb) { qscilexervhdl_defaultstyle_callback = cb; }
    inline void setQsciLexerVHDL_Description_Callback(QsciLexerVHDL_Description_Callback cb) { qscilexervhdl_description_callback = cb; }
    inline void setQsciLexerVHDL_Paper_Callback(QsciLexerVHDL_Paper_Callback cb) { qscilexervhdl_paper_callback = cb; }
    inline void setQsciLexerVHDL_DefaultColor2_Callback(QsciLexerVHDL_DefaultColor2_Callback cb) { qscilexervhdl_defaultcolor2_callback = cb; }
    inline void setQsciLexerVHDL_DefaultEolFill_Callback(QsciLexerVHDL_DefaultEolFill_Callback cb) { qscilexervhdl_defaulteolfill_callback = cb; }
    inline void setQsciLexerVHDL_DefaultFont2_Callback(QsciLexerVHDL_DefaultFont2_Callback cb) { qscilexervhdl_defaultfont2_callback = cb; }
    inline void setQsciLexerVHDL_DefaultPaper2_Callback(QsciLexerVHDL_DefaultPaper2_Callback cb) { qscilexervhdl_defaultpaper2_callback = cb; }
    inline void setQsciLexerVHDL_SetEditor_Callback(QsciLexerVHDL_SetEditor_Callback cb) { qscilexervhdl_seteditor_callback = cb; }
    inline void setQsciLexerVHDL_RefreshProperties_Callback(QsciLexerVHDL_RefreshProperties_Callback cb) { qscilexervhdl_refreshproperties_callback = cb; }
    inline void setQsciLexerVHDL_StyleBitsNeeded_Callback(QsciLexerVHDL_StyleBitsNeeded_Callback cb) { qscilexervhdl_stylebitsneeded_callback = cb; }
    inline void setQsciLexerVHDL_WordCharacters_Callback(QsciLexerVHDL_WordCharacters_Callback cb) { qscilexervhdl_wordcharacters_callback = cb; }
    inline void setQsciLexerVHDL_SetAutoIndentStyle_Callback(QsciLexerVHDL_SetAutoIndentStyle_Callback cb) { qscilexervhdl_setautoindentstyle_callback = cb; }
    inline void setQsciLexerVHDL_SetColor_Callback(QsciLexerVHDL_SetColor_Callback cb) { qscilexervhdl_setcolor_callback = cb; }
    inline void setQsciLexerVHDL_SetEolFill_Callback(QsciLexerVHDL_SetEolFill_Callback cb) { qscilexervhdl_seteolfill_callback = cb; }
    inline void setQsciLexerVHDL_SetFont_Callback(QsciLexerVHDL_SetFont_Callback cb) { qscilexervhdl_setfont_callback = cb; }
    inline void setQsciLexerVHDL_SetPaper_Callback(QsciLexerVHDL_SetPaper_Callback cb) { qscilexervhdl_setpaper_callback = cb; }
    inline void setQsciLexerVHDL_ReadProperties_Callback(QsciLexerVHDL_ReadProperties_Callback cb) { qscilexervhdl_readproperties_callback = cb; }
    inline void setQsciLexerVHDL_WriteProperties_Callback(QsciLexerVHDL_WriteProperties_Callback cb) { qscilexervhdl_writeproperties_callback = cb; }
    inline void setQsciLexerVHDL_Event_Callback(QsciLexerVHDL_Event_Callback cb) { qscilexervhdl_event_callback = cb; }
    inline void setQsciLexerVHDL_EventFilter_Callback(QsciLexerVHDL_EventFilter_Callback cb) { qscilexervhdl_eventfilter_callback = cb; }
    inline void setQsciLexerVHDL_TimerEvent_Callback(QsciLexerVHDL_TimerEvent_Callback cb) { qscilexervhdl_timerevent_callback = cb; }
    inline void setQsciLexerVHDL_ChildEvent_Callback(QsciLexerVHDL_ChildEvent_Callback cb) { qscilexervhdl_childevent_callback = cb; }
    inline void setQsciLexerVHDL_CustomEvent_Callback(QsciLexerVHDL_CustomEvent_Callback cb) { qscilexervhdl_customevent_callback = cb; }
    inline void setQsciLexerVHDL_ConnectNotify_Callback(QsciLexerVHDL_ConnectNotify_Callback cb) { qscilexervhdl_connectnotify_callback = cb; }
    inline void setQsciLexerVHDL_DisconnectNotify_Callback(QsciLexerVHDL_DisconnectNotify_Callback cb) { qscilexervhdl_disconnectnotify_callback = cb; }
    inline void setQsciLexerVHDL_TextAsBytes_Callback(QsciLexerVHDL_TextAsBytes_Callback cb) { qscilexervhdl_textasbytes_callback = cb; }
    inline void setQsciLexerVHDL_BytesAsText_Callback(QsciLexerVHDL_BytesAsText_Callback cb) { qscilexervhdl_bytesastext_callback = cb; }
    inline void setQsciLexerVHDL_Sender_Callback(QsciLexerVHDL_Sender_Callback cb) { qscilexervhdl_sender_callback = cb; }
    inline void setQsciLexerVHDL_SenderSignalIndex_Callback(QsciLexerVHDL_SenderSignalIndex_Callback cb) { qscilexervhdl_sendersignalindex_callback = cb; }
    inline void setQsciLexerVHDL_Receivers_Callback(QsciLexerVHDL_Receivers_Callback cb) { qscilexervhdl_receivers_callback = cb; }
    inline void setQsciLexerVHDL_IsSignalConnected_Callback(QsciLexerVHDL_IsSignalConnected_Callback cb) { qscilexervhdl_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerVHDL_Metacall_IsBase(bool value) const { qscilexervhdl_metacall_isbase = value; }
    inline void setQsciLexerVHDL_SetFoldComments_IsBase(bool value) const { qscilexervhdl_setfoldcomments_isbase = value; }
    inline void setQsciLexerVHDL_SetFoldCompact_IsBase(bool value) const { qscilexervhdl_setfoldcompact_isbase = value; }
    inline void setQsciLexerVHDL_SetFoldAtElse_IsBase(bool value) const { qscilexervhdl_setfoldatelse_isbase = value; }
    inline void setQsciLexerVHDL_SetFoldAtBegin_IsBase(bool value) const { qscilexervhdl_setfoldatbegin_isbase = value; }
    inline void setQsciLexerVHDL_SetFoldAtParenthesis_IsBase(bool value) const { qscilexervhdl_setfoldatparenthesis_isbase = value; }
    inline void setQsciLexerVHDL_Language_IsBase(bool value) const { qscilexervhdl_language_isbase = value; }
    inline void setQsciLexerVHDL_Lexer_IsBase(bool value) const { qscilexervhdl_lexer_isbase = value; }
    inline void setQsciLexerVHDL_LexerId_IsBase(bool value) const { qscilexervhdl_lexerid_isbase = value; }
    inline void setQsciLexerVHDL_AutoCompletionFillups_IsBase(bool value) const { qscilexervhdl_autocompletionfillups_isbase = value; }
    inline void setQsciLexerVHDL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexervhdl_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerVHDL_BlockEnd_IsBase(bool value) const { qscilexervhdl_blockend_isbase = value; }
    inline void setQsciLexerVHDL_BlockLookback_IsBase(bool value) const { qscilexervhdl_blocklookback_isbase = value; }
    inline void setQsciLexerVHDL_BlockStart_IsBase(bool value) const { qscilexervhdl_blockstart_isbase = value; }
    inline void setQsciLexerVHDL_BlockStartKeyword_IsBase(bool value) const { qscilexervhdl_blockstartkeyword_isbase = value; }
    inline void setQsciLexerVHDL_BraceStyle_IsBase(bool value) const { qscilexervhdl_bracestyle_isbase = value; }
    inline void setQsciLexerVHDL_CaseSensitive_IsBase(bool value) const { qscilexervhdl_casesensitive_isbase = value; }
    inline void setQsciLexerVHDL_Color_IsBase(bool value) const { qscilexervhdl_color_isbase = value; }
    inline void setQsciLexerVHDL_EolFill_IsBase(bool value) const { qscilexervhdl_eolfill_isbase = value; }
    inline void setQsciLexerVHDL_Font_IsBase(bool value) const { qscilexervhdl_font_isbase = value; }
    inline void setQsciLexerVHDL_IndentationGuideView_IsBase(bool value) const { qscilexervhdl_indentationguideview_isbase = value; }
    inline void setQsciLexerVHDL_Keywords_IsBase(bool value) const { qscilexervhdl_keywords_isbase = value; }
    inline void setQsciLexerVHDL_DefaultStyle_IsBase(bool value) const { qscilexervhdl_defaultstyle_isbase = value; }
    inline void setQsciLexerVHDL_Description_IsBase(bool value) const { qscilexervhdl_description_isbase = value; }
    inline void setQsciLexerVHDL_Paper_IsBase(bool value) const { qscilexervhdl_paper_isbase = value; }
    inline void setQsciLexerVHDL_DefaultColor2_IsBase(bool value) const { qscilexervhdl_defaultcolor2_isbase = value; }
    inline void setQsciLexerVHDL_DefaultEolFill_IsBase(bool value) const { qscilexervhdl_defaulteolfill_isbase = value; }
    inline void setQsciLexerVHDL_DefaultFont2_IsBase(bool value) const { qscilexervhdl_defaultfont2_isbase = value; }
    inline void setQsciLexerVHDL_DefaultPaper2_IsBase(bool value) const { qscilexervhdl_defaultpaper2_isbase = value; }
    inline void setQsciLexerVHDL_SetEditor_IsBase(bool value) const { qscilexervhdl_seteditor_isbase = value; }
    inline void setQsciLexerVHDL_RefreshProperties_IsBase(bool value) const { qscilexervhdl_refreshproperties_isbase = value; }
    inline void setQsciLexerVHDL_StyleBitsNeeded_IsBase(bool value) const { qscilexervhdl_stylebitsneeded_isbase = value; }
    inline void setQsciLexerVHDL_WordCharacters_IsBase(bool value) const { qscilexervhdl_wordcharacters_isbase = value; }
    inline void setQsciLexerVHDL_SetAutoIndentStyle_IsBase(bool value) const { qscilexervhdl_setautoindentstyle_isbase = value; }
    inline void setQsciLexerVHDL_SetColor_IsBase(bool value) const { qscilexervhdl_setcolor_isbase = value; }
    inline void setQsciLexerVHDL_SetEolFill_IsBase(bool value) const { qscilexervhdl_seteolfill_isbase = value; }
    inline void setQsciLexerVHDL_SetFont_IsBase(bool value) const { qscilexervhdl_setfont_isbase = value; }
    inline void setQsciLexerVHDL_SetPaper_IsBase(bool value) const { qscilexervhdl_setpaper_isbase = value; }
    inline void setQsciLexerVHDL_ReadProperties_IsBase(bool value) const { qscilexervhdl_readproperties_isbase = value; }
    inline void setQsciLexerVHDL_WriteProperties_IsBase(bool value) const { qscilexervhdl_writeproperties_isbase = value; }
    inline void setQsciLexerVHDL_Event_IsBase(bool value) const { qscilexervhdl_event_isbase = value; }
    inline void setQsciLexerVHDL_EventFilter_IsBase(bool value) const { qscilexervhdl_eventfilter_isbase = value; }
    inline void setQsciLexerVHDL_TimerEvent_IsBase(bool value) const { qscilexervhdl_timerevent_isbase = value; }
    inline void setQsciLexerVHDL_ChildEvent_IsBase(bool value) const { qscilexervhdl_childevent_isbase = value; }
    inline void setQsciLexerVHDL_CustomEvent_IsBase(bool value) const { qscilexervhdl_customevent_isbase = value; }
    inline void setQsciLexerVHDL_ConnectNotify_IsBase(bool value) const { qscilexervhdl_connectnotify_isbase = value; }
    inline void setQsciLexerVHDL_DisconnectNotify_IsBase(bool value) const { qscilexervhdl_disconnectnotify_isbase = value; }
    inline void setQsciLexerVHDL_TextAsBytes_IsBase(bool value) const { qscilexervhdl_textasbytes_isbase = value; }
    inline void setQsciLexerVHDL_BytesAsText_IsBase(bool value) const { qscilexervhdl_bytesastext_isbase = value; }
    inline void setQsciLexerVHDL_Sender_IsBase(bool value) const { qscilexervhdl_sender_isbase = value; }
    inline void setQsciLexerVHDL_SenderSignalIndex_IsBase(bool value) const { qscilexervhdl_sendersignalindex_isbase = value; }
    inline void setQsciLexerVHDL_Receivers_IsBase(bool value) const { qscilexervhdl_receivers_isbase = value; }
    inline void setQsciLexerVHDL_IsSignalConnected_IsBase(bool value) const { qscilexervhdl_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexervhdl_metacall_isbase) {
            qscilexervhdl_metacall_isbase = false;
            return QsciLexerVHDL::qt_metacall(param1, param2, param3);
        } else if (qscilexervhdl_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexervhdl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexervhdl_setfoldcomments_isbase) {
            qscilexervhdl_setfoldcomments_isbase = false;
            QsciLexerVHDL::setFoldComments(fold);
        } else if (qscilexervhdl_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexervhdl_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexervhdl_setfoldcompact_isbase) {
            qscilexervhdl_setfoldcompact_isbase = false;
            QsciLexerVHDL::setFoldCompact(fold);
        } else if (qscilexervhdl_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexervhdl_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexervhdl_setfoldatelse_isbase) {
            qscilexervhdl_setfoldatelse_isbase = false;
            QsciLexerVHDL::setFoldAtElse(fold);
        } else if (qscilexervhdl_setfoldatelse_callback != nullptr) {
            bool cbval1 = fold;

            qscilexervhdl_setfoldatelse_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtBegin(bool fold) override {
        if (qscilexervhdl_setfoldatbegin_isbase) {
            qscilexervhdl_setfoldatbegin_isbase = false;
            QsciLexerVHDL::setFoldAtBegin(fold);
        } else if (qscilexervhdl_setfoldatbegin_callback != nullptr) {
            bool cbval1 = fold;

            qscilexervhdl_setfoldatbegin_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setFoldAtBegin(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtParenthesis(bool fold) override {
        if (qscilexervhdl_setfoldatparenthesis_isbase) {
            qscilexervhdl_setfoldatparenthesis_isbase = false;
            QsciLexerVHDL::setFoldAtParenthesis(fold);
        } else if (qscilexervhdl_setfoldatparenthesis_callback != nullptr) {
            bool cbval1 = fold;

            qscilexervhdl_setfoldatparenthesis_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setFoldAtParenthesis(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexervhdl_language_callback != nullptr) {
            const char* callback_ret = qscilexervhdl_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexervhdl_lexer_isbase) {
            qscilexervhdl_lexer_isbase = false;
            return QsciLexerVHDL::lexer();
        } else if (qscilexervhdl_lexer_callback != nullptr) {
            const char* callback_ret = qscilexervhdl_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerVHDL::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexervhdl_lexerid_isbase) {
            qscilexervhdl_lexerid_isbase = false;
            return QsciLexerVHDL::lexerId();
        } else if (qscilexervhdl_lexerid_callback != nullptr) {
            int callback_ret = qscilexervhdl_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexervhdl_autocompletionfillups_isbase) {
            qscilexervhdl_autocompletionfillups_isbase = false;
            return QsciLexerVHDL::autoCompletionFillups();
        } else if (qscilexervhdl_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexervhdl_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerVHDL::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexervhdl_autocompletionwordseparators_isbase) {
            qscilexervhdl_autocompletionwordseparators_isbase = false;
            return QsciLexerVHDL::autoCompletionWordSeparators();
        } else if (qscilexervhdl_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexervhdl_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerVHDL::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexervhdl_blockend_isbase) {
            qscilexervhdl_blockend_isbase = false;
            return QsciLexerVHDL::blockEnd(style);
        } else if (qscilexervhdl_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexervhdl_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexervhdl_blocklookback_isbase) {
            qscilexervhdl_blocklookback_isbase = false;
            return QsciLexerVHDL::blockLookback();
        } else if (qscilexervhdl_blocklookback_callback != nullptr) {
            int callback_ret = qscilexervhdl_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexervhdl_blockstart_isbase) {
            qscilexervhdl_blockstart_isbase = false;
            return QsciLexerVHDL::blockStart(style);
        } else if (qscilexervhdl_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexervhdl_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexervhdl_blockstartkeyword_isbase) {
            qscilexervhdl_blockstartkeyword_isbase = false;
            return QsciLexerVHDL::blockStartKeyword(style);
        } else if (qscilexervhdl_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexervhdl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexervhdl_bracestyle_isbase) {
            qscilexervhdl_bracestyle_isbase = false;
            return QsciLexerVHDL::braceStyle();
        } else if (qscilexervhdl_bracestyle_callback != nullptr) {
            int callback_ret = qscilexervhdl_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexervhdl_casesensitive_isbase) {
            qscilexervhdl_casesensitive_isbase = false;
            return QsciLexerVHDL::caseSensitive();
        } else if (qscilexervhdl_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexervhdl_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerVHDL::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexervhdl_color_isbase) {
            qscilexervhdl_color_isbase = false;
            return QsciLexerVHDL::color(style);
        } else if (qscilexervhdl_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexervhdl_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexervhdl_eolfill_isbase) {
            qscilexervhdl_eolfill_isbase = false;
            return QsciLexerVHDL::eolFill(style);
        } else if (qscilexervhdl_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexervhdl_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexervhdl_font_isbase) {
            qscilexervhdl_font_isbase = false;
            return QsciLexerVHDL::font(style);
        } else if (qscilexervhdl_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexervhdl_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexervhdl_indentationguideview_isbase) {
            qscilexervhdl_indentationguideview_isbase = false;
            return QsciLexerVHDL::indentationGuideView();
        } else if (qscilexervhdl_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexervhdl_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexervhdl_keywords_isbase) {
            qscilexervhdl_keywords_isbase = false;
            return QsciLexerVHDL::keywords(set);
        } else if (qscilexervhdl_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexervhdl_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexervhdl_defaultstyle_isbase) {
            qscilexervhdl_defaultstyle_isbase = false;
            return QsciLexerVHDL::defaultStyle();
        } else if (qscilexervhdl_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexervhdl_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexervhdl_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexervhdl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexervhdl_paper_isbase) {
            qscilexervhdl_paper_isbase = false;
            return QsciLexerVHDL::paper(style);
        } else if (qscilexervhdl_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexervhdl_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexervhdl_defaultcolor2_isbase) {
            qscilexervhdl_defaultcolor2_isbase = false;
            return QsciLexerVHDL::defaultColor(style);
        } else if (qscilexervhdl_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexervhdl_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexervhdl_defaulteolfill_isbase) {
            qscilexervhdl_defaulteolfill_isbase = false;
            return QsciLexerVHDL::defaultEolFill(style);
        } else if (qscilexervhdl_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexervhdl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexervhdl_defaultfont2_isbase) {
            qscilexervhdl_defaultfont2_isbase = false;
            return QsciLexerVHDL::defaultFont(style);
        } else if (qscilexervhdl_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexervhdl_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexervhdl_defaultpaper2_isbase) {
            qscilexervhdl_defaultpaper2_isbase = false;
            return QsciLexerVHDL::defaultPaper(style);
        } else if (qscilexervhdl_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexervhdl_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerVHDL::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexervhdl_seteditor_isbase) {
            qscilexervhdl_seteditor_isbase = false;
            QsciLexerVHDL::setEditor(editor);
        } else if (qscilexervhdl_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexervhdl_seteditor_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexervhdl_refreshproperties_isbase) {
            qscilexervhdl_refreshproperties_isbase = false;
            QsciLexerVHDL::refreshProperties();
        } else if (qscilexervhdl_refreshproperties_callback != nullptr) {
            qscilexervhdl_refreshproperties_callback();
        } else {
            QsciLexerVHDL::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexervhdl_stylebitsneeded_isbase) {
            qscilexervhdl_stylebitsneeded_isbase = false;
            return QsciLexerVHDL::styleBitsNeeded();
        } else if (qscilexervhdl_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexervhdl_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexervhdl_wordcharacters_isbase) {
            qscilexervhdl_wordcharacters_isbase = false;
            return QsciLexerVHDL::wordCharacters();
        } else if (qscilexervhdl_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexervhdl_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerVHDL::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexervhdl_setautoindentstyle_isbase) {
            qscilexervhdl_setautoindentstyle_isbase = false;
            QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexervhdl_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexervhdl_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexervhdl_setcolor_isbase) {
            qscilexervhdl_setcolor_isbase = false;
            QsciLexerVHDL::setColor(c, style);
        } else if (qscilexervhdl_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexervhdl_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVHDL::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexervhdl_seteolfill_isbase) {
            qscilexervhdl_seteolfill_isbase = false;
            QsciLexerVHDL::setEolFill(eoffill, style);
        } else if (qscilexervhdl_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexervhdl_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVHDL::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexervhdl_setfont_isbase) {
            qscilexervhdl_setfont_isbase = false;
            QsciLexerVHDL::setFont(f, style);
        } else if (qscilexervhdl_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexervhdl_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVHDL::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexervhdl_setpaper_isbase) {
            qscilexervhdl_setpaper_isbase = false;
            QsciLexerVHDL::setPaper(c, style);
        } else if (qscilexervhdl_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexervhdl_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerVHDL::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexervhdl_readproperties_isbase) {
            qscilexervhdl_readproperties_isbase = false;
            return QsciLexerVHDL::readProperties(qs, prefix);
        } else if (qscilexervhdl_readproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexervhdl_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVHDL::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexervhdl_writeproperties_isbase) {
            qscilexervhdl_writeproperties_isbase = false;
            return QsciLexerVHDL::writeProperties(qs, prefix);
        } else if (qscilexervhdl_writeproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexervhdl_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVHDL::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexervhdl_event_isbase) {
            qscilexervhdl_event_isbase = false;
            return QsciLexerVHDL::event(event);
        } else if (qscilexervhdl_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexervhdl_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexervhdl_eventfilter_isbase) {
            qscilexervhdl_eventfilter_isbase = false;
            return QsciLexerVHDL::eventFilter(watched, event);
        } else if (qscilexervhdl_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexervhdl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerVHDL::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexervhdl_timerevent_isbase) {
            qscilexervhdl_timerevent_isbase = false;
            QsciLexerVHDL::timerEvent(event);
        } else if (qscilexervhdl_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexervhdl_timerevent_callback(this, cbval1);
        } else {
            QsciLexerVHDL::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexervhdl_childevent_isbase) {
            qscilexervhdl_childevent_isbase = false;
            QsciLexerVHDL::childEvent(event);
        } else if (qscilexervhdl_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexervhdl_childevent_callback(this, cbval1);
        } else {
            QsciLexerVHDL::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexervhdl_customevent_isbase) {
            qscilexervhdl_customevent_isbase = false;
            QsciLexerVHDL::customEvent(event);
        } else if (qscilexervhdl_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexervhdl_customevent_callback(this, cbval1);
        } else {
            QsciLexerVHDL::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_connectnotify_isbase) {
            qscilexervhdl_connectnotify_isbase = false;
            QsciLexerVHDL::connectNotify(signal);
        } else if (qscilexervhdl_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexervhdl_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerVHDL::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_disconnectnotify_isbase) {
            qscilexervhdl_disconnectnotify_isbase = false;
            QsciLexerVHDL::disconnectNotify(signal);
        } else if (qscilexervhdl_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexervhdl_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerVHDL::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexervhdl_textasbytes_isbase) {
            qscilexervhdl_textasbytes_isbase = false;
            return QsciLexerVHDL::textAsBytes(text);
        } else if (qscilexervhdl_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexervhdl_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerVHDL::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexervhdl_bytesastext_isbase) {
            qscilexervhdl_bytesastext_isbase = false;
            return QsciLexerVHDL::bytesAsText(bytes, size);
        } else if (qscilexervhdl_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexervhdl_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerVHDL::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexervhdl_sender_isbase) {
            qscilexervhdl_sender_isbase = false;
            return QsciLexerVHDL::sender();
        } else if (qscilexervhdl_sender_callback != nullptr) {
            QObject* callback_ret = qscilexervhdl_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerVHDL::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexervhdl_sendersignalindex_isbase) {
            qscilexervhdl_sendersignalindex_isbase = false;
            return QsciLexerVHDL::senderSignalIndex();
        } else if (qscilexervhdl_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexervhdl_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexervhdl_receivers_isbase) {
            qscilexervhdl_receivers_isbase = false;
            return QsciLexerVHDL::receivers(signal);
        } else if (qscilexervhdl_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexervhdl_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerVHDL::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexervhdl_issignalconnected_isbase) {
            qscilexervhdl_issignalconnected_isbase = false;
            return QsciLexerVHDL::isSignalConnected(signal);
        } else if (qscilexervhdl_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexervhdl_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerVHDL::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerVHDL_ReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVHDL_QBaseReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVHDL_WriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVHDL_QBaseWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerVHDL_TimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
    friend void QsciLexerVHDL_QBaseTimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
    friend void QsciLexerVHDL_ChildEvent(QsciLexerVHDL* self, QChildEvent* event);
    friend void QsciLexerVHDL_QBaseChildEvent(QsciLexerVHDL* self, QChildEvent* event);
    friend void QsciLexerVHDL_CustomEvent(QsciLexerVHDL* self, QEvent* event);
    friend void QsciLexerVHDL_QBaseCustomEvent(QsciLexerVHDL* self, QEvent* event);
    friend void QsciLexerVHDL_ConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
    friend void QsciLexerVHDL_QBaseConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
    friend void QsciLexerVHDL_DisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
    friend void QsciLexerVHDL_QBaseDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerVHDL_TextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
    friend libqt_string QsciLexerVHDL_QBaseTextAsBytes(const QsciLexerVHDL* self, const libqt_string text);
    friend libqt_string QsciLexerVHDL_BytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
    friend libqt_string QsciLexerVHDL_QBaseBytesAsText(const QsciLexerVHDL* self, const char* bytes, int size);
    friend QObject* QsciLexerVHDL_Sender(const QsciLexerVHDL* self);
    friend QObject* QsciLexerVHDL_QBaseSender(const QsciLexerVHDL* self);
    friend int QsciLexerVHDL_SenderSignalIndex(const QsciLexerVHDL* self);
    friend int QsciLexerVHDL_QBaseSenderSignalIndex(const QsciLexerVHDL* self);
    friend int QsciLexerVHDL_Receivers(const QsciLexerVHDL* self, const char* signal);
    friend int QsciLexerVHDL_QBaseReceivers(const QsciLexerVHDL* self, const char* signal);
    friend bool QsciLexerVHDL_IsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
    friend bool QsciLexerVHDL_QBaseIsSignalConnected(const QsciLexerVHDL* self, const QMetaMethod* signal);
};

#endif
