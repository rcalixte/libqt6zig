#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCSS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCSS so that we can call protected methods
class VirtualQsciLexerCSS final : public QsciLexerCSS {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCSS = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCSS_Metacall_Callback = int (*)(QsciLexerCSS*, int, int, void**);
    using QsciLexerCSS_SetFoldComments_Callback = void (*)(QsciLexerCSS*, bool);
    using QsciLexerCSS_SetFoldCompact_Callback = void (*)(QsciLexerCSS*, bool);
    using QsciLexerCSS_Language_Callback = const char* (*)();
    using QsciLexerCSS_Lexer_Callback = const char* (*)();
    using QsciLexerCSS_LexerId_Callback = int (*)();
    using QsciLexerCSS_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCSS_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerCSS_BlockEnd_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BlockLookback_Callback = int (*)();
    using QsciLexerCSS_BlockStart_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BraceStyle_Callback = int (*)();
    using QsciLexerCSS_CaseSensitive_Callback = bool (*)();
    using QsciLexerCSS_Color_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_EolFill_Callback = bool (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_Font_Callback = QFont* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_IndentationGuideView_Callback = int (*)();
    using QsciLexerCSS_Keywords_Callback = const char* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultStyle_Callback = int (*)();
    using QsciLexerCSS_Description_Callback = libqt_string (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_Paper_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultColor2_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultEolFill_Callback = bool (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultFont2_Callback = QFont* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_SetEditor_Callback = void (*)(QsciLexerCSS*, QsciScintilla*);
    using QsciLexerCSS_RefreshProperties_Callback = void (*)();
    using QsciLexerCSS_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCSS_WordCharacters_Callback = const char* (*)();
    using QsciLexerCSS_SetAutoIndentStyle_Callback = void (*)(QsciLexerCSS*, int);
    using QsciLexerCSS_SetColor_Callback = void (*)(QsciLexerCSS*, QColor*, int);
    using QsciLexerCSS_SetEolFill_Callback = void (*)(QsciLexerCSS*, bool, int);
    using QsciLexerCSS_SetFont_Callback = void (*)(QsciLexerCSS*, QFont*, int);
    using QsciLexerCSS_SetPaper_Callback = void (*)(QsciLexerCSS*, QColor*, int);
    using QsciLexerCSS_ReadProperties_Callback = bool (*)(QsciLexerCSS*, QSettings*, libqt_string);
    using QsciLexerCSS_WriteProperties_Callback = bool (*)(const QsciLexerCSS*, QSettings*, libqt_string);
    using QsciLexerCSS_Event_Callback = bool (*)(QsciLexerCSS*, QEvent*);
    using QsciLexerCSS_EventFilter_Callback = bool (*)(QsciLexerCSS*, QObject*, QEvent*);
    using QsciLexerCSS_TimerEvent_Callback = void (*)(QsciLexerCSS*, QTimerEvent*);
    using QsciLexerCSS_ChildEvent_Callback = void (*)(QsciLexerCSS*, QChildEvent*);
    using QsciLexerCSS_CustomEvent_Callback = void (*)(QsciLexerCSS*, QEvent*);
    using QsciLexerCSS_ConnectNotify_Callback = void (*)(QsciLexerCSS*, QMetaMethod*);
    using QsciLexerCSS_DisconnectNotify_Callback = void (*)(QsciLexerCSS*, QMetaMethod*);
    using QsciLexerCSS_TextAsBytes_Callback = libqt_string (*)(const QsciLexerCSS*, libqt_string);
    using QsciLexerCSS_BytesAsText_Callback = libqt_string (*)(const QsciLexerCSS*, const char*, int);
    using QsciLexerCSS_Sender_Callback = QObject* (*)();
    using QsciLexerCSS_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCSS_Receivers_Callback = int (*)(const QsciLexerCSS*, const char*);
    using QsciLexerCSS_IsSignalConnected_Callback = bool (*)(const QsciLexerCSS*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCSS_Metacall_Callback qscilexercss_metacall_callback = nullptr;
    QsciLexerCSS_SetFoldComments_Callback qscilexercss_setfoldcomments_callback = nullptr;
    QsciLexerCSS_SetFoldCompact_Callback qscilexercss_setfoldcompact_callback = nullptr;
    QsciLexerCSS_Language_Callback qscilexercss_language_callback = nullptr;
    QsciLexerCSS_Lexer_Callback qscilexercss_lexer_callback = nullptr;
    QsciLexerCSS_LexerId_Callback qscilexercss_lexerid_callback = nullptr;
    QsciLexerCSS_AutoCompletionFillups_Callback qscilexercss_autocompletionfillups_callback = nullptr;
    QsciLexerCSS_AutoCompletionWordSeparators_Callback qscilexercss_autocompletionwordseparators_callback = nullptr;
    QsciLexerCSS_BlockEnd_Callback qscilexercss_blockend_callback = nullptr;
    QsciLexerCSS_BlockLookback_Callback qscilexercss_blocklookback_callback = nullptr;
    QsciLexerCSS_BlockStart_Callback qscilexercss_blockstart_callback = nullptr;
    QsciLexerCSS_BlockStartKeyword_Callback qscilexercss_blockstartkeyword_callback = nullptr;
    QsciLexerCSS_BraceStyle_Callback qscilexercss_bracestyle_callback = nullptr;
    QsciLexerCSS_CaseSensitive_Callback qscilexercss_casesensitive_callback = nullptr;
    QsciLexerCSS_Color_Callback qscilexercss_color_callback = nullptr;
    QsciLexerCSS_EolFill_Callback qscilexercss_eolfill_callback = nullptr;
    QsciLexerCSS_Font_Callback qscilexercss_font_callback = nullptr;
    QsciLexerCSS_IndentationGuideView_Callback qscilexercss_indentationguideview_callback = nullptr;
    QsciLexerCSS_Keywords_Callback qscilexercss_keywords_callback = nullptr;
    QsciLexerCSS_DefaultStyle_Callback qscilexercss_defaultstyle_callback = nullptr;
    QsciLexerCSS_Description_Callback qscilexercss_description_callback = nullptr;
    QsciLexerCSS_Paper_Callback qscilexercss_paper_callback = nullptr;
    QsciLexerCSS_DefaultColor2_Callback qscilexercss_defaultcolor2_callback = nullptr;
    QsciLexerCSS_DefaultEolFill_Callback qscilexercss_defaulteolfill_callback = nullptr;
    QsciLexerCSS_DefaultFont2_Callback qscilexercss_defaultfont2_callback = nullptr;
    QsciLexerCSS_DefaultPaper2_Callback qscilexercss_defaultpaper2_callback = nullptr;
    QsciLexerCSS_SetEditor_Callback qscilexercss_seteditor_callback = nullptr;
    QsciLexerCSS_RefreshProperties_Callback qscilexercss_refreshproperties_callback = nullptr;
    QsciLexerCSS_StyleBitsNeeded_Callback qscilexercss_stylebitsneeded_callback = nullptr;
    QsciLexerCSS_WordCharacters_Callback qscilexercss_wordcharacters_callback = nullptr;
    QsciLexerCSS_SetAutoIndentStyle_Callback qscilexercss_setautoindentstyle_callback = nullptr;
    QsciLexerCSS_SetColor_Callback qscilexercss_setcolor_callback = nullptr;
    QsciLexerCSS_SetEolFill_Callback qscilexercss_seteolfill_callback = nullptr;
    QsciLexerCSS_SetFont_Callback qscilexercss_setfont_callback = nullptr;
    QsciLexerCSS_SetPaper_Callback qscilexercss_setpaper_callback = nullptr;
    QsciLexerCSS_ReadProperties_Callback qscilexercss_readproperties_callback = nullptr;
    QsciLexerCSS_WriteProperties_Callback qscilexercss_writeproperties_callback = nullptr;
    QsciLexerCSS_Event_Callback qscilexercss_event_callback = nullptr;
    QsciLexerCSS_EventFilter_Callback qscilexercss_eventfilter_callback = nullptr;
    QsciLexerCSS_TimerEvent_Callback qscilexercss_timerevent_callback = nullptr;
    QsciLexerCSS_ChildEvent_Callback qscilexercss_childevent_callback = nullptr;
    QsciLexerCSS_CustomEvent_Callback qscilexercss_customevent_callback = nullptr;
    QsciLexerCSS_ConnectNotify_Callback qscilexercss_connectnotify_callback = nullptr;
    QsciLexerCSS_DisconnectNotify_Callback qscilexercss_disconnectnotify_callback = nullptr;
    QsciLexerCSS_TextAsBytes_Callback qscilexercss_textasbytes_callback = nullptr;
    QsciLexerCSS_BytesAsText_Callback qscilexercss_bytesastext_callback = nullptr;
    QsciLexerCSS_Sender_Callback qscilexercss_sender_callback = nullptr;
    QsciLexerCSS_SenderSignalIndex_Callback qscilexercss_sendersignalindex_callback = nullptr;
    QsciLexerCSS_Receivers_Callback qscilexercss_receivers_callback = nullptr;
    QsciLexerCSS_IsSignalConnected_Callback qscilexercss_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercss_metacall_isbase = false;
    mutable bool qscilexercss_setfoldcomments_isbase = false;
    mutable bool qscilexercss_setfoldcompact_isbase = false;
    mutable bool qscilexercss_language_isbase = false;
    mutable bool qscilexercss_lexer_isbase = false;
    mutable bool qscilexercss_lexerid_isbase = false;
    mutable bool qscilexercss_autocompletionfillups_isbase = false;
    mutable bool qscilexercss_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercss_blockend_isbase = false;
    mutable bool qscilexercss_blocklookback_isbase = false;
    mutable bool qscilexercss_blockstart_isbase = false;
    mutable bool qscilexercss_blockstartkeyword_isbase = false;
    mutable bool qscilexercss_bracestyle_isbase = false;
    mutable bool qscilexercss_casesensitive_isbase = false;
    mutable bool qscilexercss_color_isbase = false;
    mutable bool qscilexercss_eolfill_isbase = false;
    mutable bool qscilexercss_font_isbase = false;
    mutable bool qscilexercss_indentationguideview_isbase = false;
    mutable bool qscilexercss_keywords_isbase = false;
    mutable bool qscilexercss_defaultstyle_isbase = false;
    mutable bool qscilexercss_description_isbase = false;
    mutable bool qscilexercss_paper_isbase = false;
    mutable bool qscilexercss_defaultcolor2_isbase = false;
    mutable bool qscilexercss_defaulteolfill_isbase = false;
    mutable bool qscilexercss_defaultfont2_isbase = false;
    mutable bool qscilexercss_defaultpaper2_isbase = false;
    mutable bool qscilexercss_seteditor_isbase = false;
    mutable bool qscilexercss_refreshproperties_isbase = false;
    mutable bool qscilexercss_stylebitsneeded_isbase = false;
    mutable bool qscilexercss_wordcharacters_isbase = false;
    mutable bool qscilexercss_setautoindentstyle_isbase = false;
    mutable bool qscilexercss_setcolor_isbase = false;
    mutable bool qscilexercss_seteolfill_isbase = false;
    mutable bool qscilexercss_setfont_isbase = false;
    mutable bool qscilexercss_setpaper_isbase = false;
    mutable bool qscilexercss_readproperties_isbase = false;
    mutable bool qscilexercss_writeproperties_isbase = false;
    mutable bool qscilexercss_event_isbase = false;
    mutable bool qscilexercss_eventfilter_isbase = false;
    mutable bool qscilexercss_timerevent_isbase = false;
    mutable bool qscilexercss_childevent_isbase = false;
    mutable bool qscilexercss_customevent_isbase = false;
    mutable bool qscilexercss_connectnotify_isbase = false;
    mutable bool qscilexercss_disconnectnotify_isbase = false;
    mutable bool qscilexercss_textasbytes_isbase = false;
    mutable bool qscilexercss_bytesastext_isbase = false;
    mutable bool qscilexercss_sender_isbase = false;
    mutable bool qscilexercss_sendersignalindex_isbase = false;
    mutable bool qscilexercss_receivers_isbase = false;
    mutable bool qscilexercss_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCSS() : QsciLexerCSS() {};
    VirtualQsciLexerCSS(QObject* parent) : QsciLexerCSS(parent) {};

    ~VirtualQsciLexerCSS() {
        qscilexercss_metacall_callback = nullptr;
        qscilexercss_setfoldcomments_callback = nullptr;
        qscilexercss_setfoldcompact_callback = nullptr;
        qscilexercss_language_callback = nullptr;
        qscilexercss_lexer_callback = nullptr;
        qscilexercss_lexerid_callback = nullptr;
        qscilexercss_autocompletionfillups_callback = nullptr;
        qscilexercss_autocompletionwordseparators_callback = nullptr;
        qscilexercss_blockend_callback = nullptr;
        qscilexercss_blocklookback_callback = nullptr;
        qscilexercss_blockstart_callback = nullptr;
        qscilexercss_blockstartkeyword_callback = nullptr;
        qscilexercss_bracestyle_callback = nullptr;
        qscilexercss_casesensitive_callback = nullptr;
        qscilexercss_color_callback = nullptr;
        qscilexercss_eolfill_callback = nullptr;
        qscilexercss_font_callback = nullptr;
        qscilexercss_indentationguideview_callback = nullptr;
        qscilexercss_keywords_callback = nullptr;
        qscilexercss_defaultstyle_callback = nullptr;
        qscilexercss_description_callback = nullptr;
        qscilexercss_paper_callback = nullptr;
        qscilexercss_defaultcolor2_callback = nullptr;
        qscilexercss_defaulteolfill_callback = nullptr;
        qscilexercss_defaultfont2_callback = nullptr;
        qscilexercss_defaultpaper2_callback = nullptr;
        qscilexercss_seteditor_callback = nullptr;
        qscilexercss_refreshproperties_callback = nullptr;
        qscilexercss_stylebitsneeded_callback = nullptr;
        qscilexercss_wordcharacters_callback = nullptr;
        qscilexercss_setautoindentstyle_callback = nullptr;
        qscilexercss_setcolor_callback = nullptr;
        qscilexercss_seteolfill_callback = nullptr;
        qscilexercss_setfont_callback = nullptr;
        qscilexercss_setpaper_callback = nullptr;
        qscilexercss_readproperties_callback = nullptr;
        qscilexercss_writeproperties_callback = nullptr;
        qscilexercss_event_callback = nullptr;
        qscilexercss_eventfilter_callback = nullptr;
        qscilexercss_timerevent_callback = nullptr;
        qscilexercss_childevent_callback = nullptr;
        qscilexercss_customevent_callback = nullptr;
        qscilexercss_connectnotify_callback = nullptr;
        qscilexercss_disconnectnotify_callback = nullptr;
        qscilexercss_textasbytes_callback = nullptr;
        qscilexercss_bytesastext_callback = nullptr;
        qscilexercss_sender_callback = nullptr;
        qscilexercss_sendersignalindex_callback = nullptr;
        qscilexercss_receivers_callback = nullptr;
        qscilexercss_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerCSS_Metacall_Callback(QsciLexerCSS_Metacall_Callback cb) { qscilexercss_metacall_callback = cb; }
    inline void setQsciLexerCSS_SetFoldComments_Callback(QsciLexerCSS_SetFoldComments_Callback cb) { qscilexercss_setfoldcomments_callback = cb; }
    inline void setQsciLexerCSS_SetFoldCompact_Callback(QsciLexerCSS_SetFoldCompact_Callback cb) { qscilexercss_setfoldcompact_callback = cb; }
    inline void setQsciLexerCSS_Language_Callback(QsciLexerCSS_Language_Callback cb) { qscilexercss_language_callback = cb; }
    inline void setQsciLexerCSS_Lexer_Callback(QsciLexerCSS_Lexer_Callback cb) { qscilexercss_lexer_callback = cb; }
    inline void setQsciLexerCSS_LexerId_Callback(QsciLexerCSS_LexerId_Callback cb) { qscilexercss_lexerid_callback = cb; }
    inline void setQsciLexerCSS_AutoCompletionFillups_Callback(QsciLexerCSS_AutoCompletionFillups_Callback cb) { qscilexercss_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCSS_AutoCompletionWordSeparators_Callback(QsciLexerCSS_AutoCompletionWordSeparators_Callback cb) { qscilexercss_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCSS_BlockEnd_Callback(QsciLexerCSS_BlockEnd_Callback cb) { qscilexercss_blockend_callback = cb; }
    inline void setQsciLexerCSS_BlockLookback_Callback(QsciLexerCSS_BlockLookback_Callback cb) { qscilexercss_blocklookback_callback = cb; }
    inline void setQsciLexerCSS_BlockStart_Callback(QsciLexerCSS_BlockStart_Callback cb) { qscilexercss_blockstart_callback = cb; }
    inline void setQsciLexerCSS_BlockStartKeyword_Callback(QsciLexerCSS_BlockStartKeyword_Callback cb) { qscilexercss_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCSS_BraceStyle_Callback(QsciLexerCSS_BraceStyle_Callback cb) { qscilexercss_bracestyle_callback = cb; }
    inline void setQsciLexerCSS_CaseSensitive_Callback(QsciLexerCSS_CaseSensitive_Callback cb) { qscilexercss_casesensitive_callback = cb; }
    inline void setQsciLexerCSS_Color_Callback(QsciLexerCSS_Color_Callback cb) { qscilexercss_color_callback = cb; }
    inline void setQsciLexerCSS_EolFill_Callback(QsciLexerCSS_EolFill_Callback cb) { qscilexercss_eolfill_callback = cb; }
    inline void setQsciLexerCSS_Font_Callback(QsciLexerCSS_Font_Callback cb) { qscilexercss_font_callback = cb; }
    inline void setQsciLexerCSS_IndentationGuideView_Callback(QsciLexerCSS_IndentationGuideView_Callback cb) { qscilexercss_indentationguideview_callback = cb; }
    inline void setQsciLexerCSS_Keywords_Callback(QsciLexerCSS_Keywords_Callback cb) { qscilexercss_keywords_callback = cb; }
    inline void setQsciLexerCSS_DefaultStyle_Callback(QsciLexerCSS_DefaultStyle_Callback cb) { qscilexercss_defaultstyle_callback = cb; }
    inline void setQsciLexerCSS_Description_Callback(QsciLexerCSS_Description_Callback cb) { qscilexercss_description_callback = cb; }
    inline void setQsciLexerCSS_Paper_Callback(QsciLexerCSS_Paper_Callback cb) { qscilexercss_paper_callback = cb; }
    inline void setQsciLexerCSS_DefaultColor2_Callback(QsciLexerCSS_DefaultColor2_Callback cb) { qscilexercss_defaultcolor2_callback = cb; }
    inline void setQsciLexerCSS_DefaultEolFill_Callback(QsciLexerCSS_DefaultEolFill_Callback cb) { qscilexercss_defaulteolfill_callback = cb; }
    inline void setQsciLexerCSS_DefaultFont2_Callback(QsciLexerCSS_DefaultFont2_Callback cb) { qscilexercss_defaultfont2_callback = cb; }
    inline void setQsciLexerCSS_DefaultPaper2_Callback(QsciLexerCSS_DefaultPaper2_Callback cb) { qscilexercss_defaultpaper2_callback = cb; }
    inline void setQsciLexerCSS_SetEditor_Callback(QsciLexerCSS_SetEditor_Callback cb) { qscilexercss_seteditor_callback = cb; }
    inline void setQsciLexerCSS_RefreshProperties_Callback(QsciLexerCSS_RefreshProperties_Callback cb) { qscilexercss_refreshproperties_callback = cb; }
    inline void setQsciLexerCSS_StyleBitsNeeded_Callback(QsciLexerCSS_StyleBitsNeeded_Callback cb) { qscilexercss_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCSS_WordCharacters_Callback(QsciLexerCSS_WordCharacters_Callback cb) { qscilexercss_wordcharacters_callback = cb; }
    inline void setQsciLexerCSS_SetAutoIndentStyle_Callback(QsciLexerCSS_SetAutoIndentStyle_Callback cb) { qscilexercss_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCSS_SetColor_Callback(QsciLexerCSS_SetColor_Callback cb) { qscilexercss_setcolor_callback = cb; }
    inline void setQsciLexerCSS_SetEolFill_Callback(QsciLexerCSS_SetEolFill_Callback cb) { qscilexercss_seteolfill_callback = cb; }
    inline void setQsciLexerCSS_SetFont_Callback(QsciLexerCSS_SetFont_Callback cb) { qscilexercss_setfont_callback = cb; }
    inline void setQsciLexerCSS_SetPaper_Callback(QsciLexerCSS_SetPaper_Callback cb) { qscilexercss_setpaper_callback = cb; }
    inline void setQsciLexerCSS_ReadProperties_Callback(QsciLexerCSS_ReadProperties_Callback cb) { qscilexercss_readproperties_callback = cb; }
    inline void setQsciLexerCSS_WriteProperties_Callback(QsciLexerCSS_WriteProperties_Callback cb) { qscilexercss_writeproperties_callback = cb; }
    inline void setQsciLexerCSS_Event_Callback(QsciLexerCSS_Event_Callback cb) { qscilexercss_event_callback = cb; }
    inline void setQsciLexerCSS_EventFilter_Callback(QsciLexerCSS_EventFilter_Callback cb) { qscilexercss_eventfilter_callback = cb; }
    inline void setQsciLexerCSS_TimerEvent_Callback(QsciLexerCSS_TimerEvent_Callback cb) { qscilexercss_timerevent_callback = cb; }
    inline void setQsciLexerCSS_ChildEvent_Callback(QsciLexerCSS_ChildEvent_Callback cb) { qscilexercss_childevent_callback = cb; }
    inline void setQsciLexerCSS_CustomEvent_Callback(QsciLexerCSS_CustomEvent_Callback cb) { qscilexercss_customevent_callback = cb; }
    inline void setQsciLexerCSS_ConnectNotify_Callback(QsciLexerCSS_ConnectNotify_Callback cb) { qscilexercss_connectnotify_callback = cb; }
    inline void setQsciLexerCSS_DisconnectNotify_Callback(QsciLexerCSS_DisconnectNotify_Callback cb) { qscilexercss_disconnectnotify_callback = cb; }
    inline void setQsciLexerCSS_TextAsBytes_Callback(QsciLexerCSS_TextAsBytes_Callback cb) { qscilexercss_textasbytes_callback = cb; }
    inline void setQsciLexerCSS_BytesAsText_Callback(QsciLexerCSS_BytesAsText_Callback cb) { qscilexercss_bytesastext_callback = cb; }
    inline void setQsciLexerCSS_Sender_Callback(QsciLexerCSS_Sender_Callback cb) { qscilexercss_sender_callback = cb; }
    inline void setQsciLexerCSS_SenderSignalIndex_Callback(QsciLexerCSS_SenderSignalIndex_Callback cb) { qscilexercss_sendersignalindex_callback = cb; }
    inline void setQsciLexerCSS_Receivers_Callback(QsciLexerCSS_Receivers_Callback cb) { qscilexercss_receivers_callback = cb; }
    inline void setQsciLexerCSS_IsSignalConnected_Callback(QsciLexerCSS_IsSignalConnected_Callback cb) { qscilexercss_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCSS_Metacall_IsBase(bool value) const { qscilexercss_metacall_isbase = value; }
    inline void setQsciLexerCSS_SetFoldComments_IsBase(bool value) const { qscilexercss_setfoldcomments_isbase = value; }
    inline void setQsciLexerCSS_SetFoldCompact_IsBase(bool value) const { qscilexercss_setfoldcompact_isbase = value; }
    inline void setQsciLexerCSS_Language_IsBase(bool value) const { qscilexercss_language_isbase = value; }
    inline void setQsciLexerCSS_Lexer_IsBase(bool value) const { qscilexercss_lexer_isbase = value; }
    inline void setQsciLexerCSS_LexerId_IsBase(bool value) const { qscilexercss_lexerid_isbase = value; }
    inline void setQsciLexerCSS_AutoCompletionFillups_IsBase(bool value) const { qscilexercss_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCSS_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercss_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCSS_BlockEnd_IsBase(bool value) const { qscilexercss_blockend_isbase = value; }
    inline void setQsciLexerCSS_BlockLookback_IsBase(bool value) const { qscilexercss_blocklookback_isbase = value; }
    inline void setQsciLexerCSS_BlockStart_IsBase(bool value) const { qscilexercss_blockstart_isbase = value; }
    inline void setQsciLexerCSS_BlockStartKeyword_IsBase(bool value) const { qscilexercss_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCSS_BraceStyle_IsBase(bool value) const { qscilexercss_bracestyle_isbase = value; }
    inline void setQsciLexerCSS_CaseSensitive_IsBase(bool value) const { qscilexercss_casesensitive_isbase = value; }
    inline void setQsciLexerCSS_Color_IsBase(bool value) const { qscilexercss_color_isbase = value; }
    inline void setQsciLexerCSS_EolFill_IsBase(bool value) const { qscilexercss_eolfill_isbase = value; }
    inline void setQsciLexerCSS_Font_IsBase(bool value) const { qscilexercss_font_isbase = value; }
    inline void setQsciLexerCSS_IndentationGuideView_IsBase(bool value) const { qscilexercss_indentationguideview_isbase = value; }
    inline void setQsciLexerCSS_Keywords_IsBase(bool value) const { qscilexercss_keywords_isbase = value; }
    inline void setQsciLexerCSS_DefaultStyle_IsBase(bool value) const { qscilexercss_defaultstyle_isbase = value; }
    inline void setQsciLexerCSS_Description_IsBase(bool value) const { qscilexercss_description_isbase = value; }
    inline void setQsciLexerCSS_Paper_IsBase(bool value) const { qscilexercss_paper_isbase = value; }
    inline void setQsciLexerCSS_DefaultColor2_IsBase(bool value) const { qscilexercss_defaultcolor2_isbase = value; }
    inline void setQsciLexerCSS_DefaultEolFill_IsBase(bool value) const { qscilexercss_defaulteolfill_isbase = value; }
    inline void setQsciLexerCSS_DefaultFont2_IsBase(bool value) const { qscilexercss_defaultfont2_isbase = value; }
    inline void setQsciLexerCSS_DefaultPaper2_IsBase(bool value) const { qscilexercss_defaultpaper2_isbase = value; }
    inline void setQsciLexerCSS_SetEditor_IsBase(bool value) const { qscilexercss_seteditor_isbase = value; }
    inline void setQsciLexerCSS_RefreshProperties_IsBase(bool value) const { qscilexercss_refreshproperties_isbase = value; }
    inline void setQsciLexerCSS_StyleBitsNeeded_IsBase(bool value) const { qscilexercss_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCSS_WordCharacters_IsBase(bool value) const { qscilexercss_wordcharacters_isbase = value; }
    inline void setQsciLexerCSS_SetAutoIndentStyle_IsBase(bool value) const { qscilexercss_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCSS_SetColor_IsBase(bool value) const { qscilexercss_setcolor_isbase = value; }
    inline void setQsciLexerCSS_SetEolFill_IsBase(bool value) const { qscilexercss_seteolfill_isbase = value; }
    inline void setQsciLexerCSS_SetFont_IsBase(bool value) const { qscilexercss_setfont_isbase = value; }
    inline void setQsciLexerCSS_SetPaper_IsBase(bool value) const { qscilexercss_setpaper_isbase = value; }
    inline void setQsciLexerCSS_ReadProperties_IsBase(bool value) const { qscilexercss_readproperties_isbase = value; }
    inline void setQsciLexerCSS_WriteProperties_IsBase(bool value) const { qscilexercss_writeproperties_isbase = value; }
    inline void setQsciLexerCSS_Event_IsBase(bool value) const { qscilexercss_event_isbase = value; }
    inline void setQsciLexerCSS_EventFilter_IsBase(bool value) const { qscilexercss_eventfilter_isbase = value; }
    inline void setQsciLexerCSS_TimerEvent_IsBase(bool value) const { qscilexercss_timerevent_isbase = value; }
    inline void setQsciLexerCSS_ChildEvent_IsBase(bool value) const { qscilexercss_childevent_isbase = value; }
    inline void setQsciLexerCSS_CustomEvent_IsBase(bool value) const { qscilexercss_customevent_isbase = value; }
    inline void setQsciLexerCSS_ConnectNotify_IsBase(bool value) const { qscilexercss_connectnotify_isbase = value; }
    inline void setQsciLexerCSS_DisconnectNotify_IsBase(bool value) const { qscilexercss_disconnectnotify_isbase = value; }
    inline void setQsciLexerCSS_TextAsBytes_IsBase(bool value) const { qscilexercss_textasbytes_isbase = value; }
    inline void setQsciLexerCSS_BytesAsText_IsBase(bool value) const { qscilexercss_bytesastext_isbase = value; }
    inline void setQsciLexerCSS_Sender_IsBase(bool value) const { qscilexercss_sender_isbase = value; }
    inline void setQsciLexerCSS_SenderSignalIndex_IsBase(bool value) const { qscilexercss_sendersignalindex_isbase = value; }
    inline void setQsciLexerCSS_Receivers_IsBase(bool value) const { qscilexercss_receivers_isbase = value; }
    inline void setQsciLexerCSS_IsSignalConnected_IsBase(bool value) const { qscilexercss_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercss_metacall_isbase) {
            qscilexercss_metacall_isbase = false;
            return QsciLexerCSS::qt_metacall(param1, param2, param3);
        } else if (qscilexercss_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexercss_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercss_setfoldcomments_isbase) {
            qscilexercss_setfoldcomments_isbase = false;
            QsciLexerCSS::setFoldComments(fold);
        } else if (qscilexercss_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexercss_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerCSS::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercss_setfoldcompact_isbase) {
            qscilexercss_setfoldcompact_isbase = false;
            QsciLexerCSS::setFoldCompact(fold);
        } else if (qscilexercss_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexercss_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerCSS::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercss_language_callback != nullptr) {
            const char* callback_ret = qscilexercss_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercss_lexer_isbase) {
            qscilexercss_lexer_isbase = false;
            return QsciLexerCSS::lexer();
        } else if (qscilexercss_lexer_callback != nullptr) {
            const char* callback_ret = qscilexercss_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerCSS::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercss_lexerid_isbase) {
            qscilexercss_lexerid_isbase = false;
            return QsciLexerCSS::lexerId();
        } else if (qscilexercss_lexerid_callback != nullptr) {
            int callback_ret = qscilexercss_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercss_autocompletionfillups_isbase) {
            qscilexercss_autocompletionfillups_isbase = false;
            return QsciLexerCSS::autoCompletionFillups();
        } else if (qscilexercss_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexercss_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerCSS::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercss_autocompletionwordseparators_isbase) {
            qscilexercss_autocompletionwordseparators_isbase = false;
            return QsciLexerCSS::autoCompletionWordSeparators();
        } else if (qscilexercss_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexercss_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerCSS::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercss_blockend_isbase) {
            qscilexercss_blockend_isbase = false;
            return QsciLexerCSS::blockEnd(style);
        } else if (qscilexercss_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercss_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercss_blocklookback_isbase) {
            qscilexercss_blocklookback_isbase = false;
            return QsciLexerCSS::blockLookback();
        } else if (qscilexercss_blocklookback_callback != nullptr) {
            int callback_ret = qscilexercss_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercss_blockstart_isbase) {
            qscilexercss_blockstart_isbase = false;
            return QsciLexerCSS::blockStart(style);
        } else if (qscilexercss_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercss_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercss_blockstartkeyword_isbase) {
            qscilexercss_blockstartkeyword_isbase = false;
            return QsciLexerCSS::blockStartKeyword(style);
        } else if (qscilexercss_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercss_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercss_bracestyle_isbase) {
            qscilexercss_bracestyle_isbase = false;
            return QsciLexerCSS::braceStyle();
        } else if (qscilexercss_bracestyle_callback != nullptr) {
            int callback_ret = qscilexercss_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercss_casesensitive_isbase) {
            qscilexercss_casesensitive_isbase = false;
            return QsciLexerCSS::caseSensitive();
        } else if (qscilexercss_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexercss_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerCSS::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercss_color_isbase) {
            qscilexercss_color_isbase = false;
            return QsciLexerCSS::color(style);
        } else if (qscilexercss_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercss_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercss_eolfill_isbase) {
            qscilexercss_eolfill_isbase = false;
            return QsciLexerCSS::eolFill(style);
        } else if (qscilexercss_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercss_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercss_font_isbase) {
            qscilexercss_font_isbase = false;
            return QsciLexerCSS::font(style);
        } else if (qscilexercss_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercss_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercss_indentationguideview_isbase) {
            qscilexercss_indentationguideview_isbase = false;
            return QsciLexerCSS::indentationGuideView();
        } else if (qscilexercss_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexercss_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercss_keywords_isbase) {
            qscilexercss_keywords_isbase = false;
            return QsciLexerCSS::keywords(set);
        } else if (qscilexercss_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexercss_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercss_defaultstyle_isbase) {
            qscilexercss_defaultstyle_isbase = false;
            return QsciLexerCSS::defaultStyle();
        } else if (qscilexercss_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexercss_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercss_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexercss_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercss_paper_isbase) {
            qscilexercss_paper_isbase = false;
            return QsciLexerCSS::paper(style);
        } else if (qscilexercss_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercss_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercss_defaultcolor2_isbase) {
            qscilexercss_defaultcolor2_isbase = false;
            return QsciLexerCSS::defaultColor(style);
        } else if (qscilexercss_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercss_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercss_defaulteolfill_isbase) {
            qscilexercss_defaulteolfill_isbase = false;
            return QsciLexerCSS::defaultEolFill(style);
        } else if (qscilexercss_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercss_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercss_defaultfont2_isbase) {
            qscilexercss_defaultfont2_isbase = false;
            return QsciLexerCSS::defaultFont(style);
        } else if (qscilexercss_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercss_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercss_defaultpaper2_isbase) {
            qscilexercss_defaultpaper2_isbase = false;
            return QsciLexerCSS::defaultPaper(style);
        } else if (qscilexercss_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercss_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCSS::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercss_seteditor_isbase) {
            qscilexercss_seteditor_isbase = false;
            QsciLexerCSS::setEditor(editor);
        } else if (qscilexercss_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexercss_seteditor_callback(this, cbval1);
        } else {
            QsciLexerCSS::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercss_refreshproperties_isbase) {
            qscilexercss_refreshproperties_isbase = false;
            QsciLexerCSS::refreshProperties();
        } else if (qscilexercss_refreshproperties_callback != nullptr) {
            qscilexercss_refreshproperties_callback();
        } else {
            QsciLexerCSS::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercss_stylebitsneeded_isbase) {
            qscilexercss_stylebitsneeded_isbase = false;
            return QsciLexerCSS::styleBitsNeeded();
        } else if (qscilexercss_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexercss_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercss_wordcharacters_isbase) {
            qscilexercss_wordcharacters_isbase = false;
            return QsciLexerCSS::wordCharacters();
        } else if (qscilexercss_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexercss_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerCSS::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercss_setautoindentstyle_isbase) {
            qscilexercss_setautoindentstyle_isbase = false;
            QsciLexerCSS::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercss_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexercss_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerCSS::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercss_setcolor_isbase) {
            qscilexercss_setcolor_isbase = false;
            QsciLexerCSS::setColor(c, style);
        } else if (qscilexercss_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercss_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCSS::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercss_seteolfill_isbase) {
            qscilexercss_seteolfill_isbase = false;
            QsciLexerCSS::setEolFill(eoffill, style);
        } else if (qscilexercss_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexercss_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCSS::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercss_setfont_isbase) {
            qscilexercss_setfont_isbase = false;
            QsciLexerCSS::setFont(f, style);
        } else if (qscilexercss_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexercss_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCSS::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercss_setpaper_isbase) {
            qscilexercss_setpaper_isbase = false;
            QsciLexerCSS::setPaper(c, style);
        } else if (qscilexercss_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercss_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCSS::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercss_readproperties_isbase) {
            qscilexercss_readproperties_isbase = false;
            return QsciLexerCSS::readProperties(qs, prefix);
        } else if (qscilexercss_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercss_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCSS::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercss_writeproperties_isbase) {
            qscilexercss_writeproperties_isbase = false;
            return QsciLexerCSS::writeProperties(qs, prefix);
        } else if (qscilexercss_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercss_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCSS::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercss_event_isbase) {
            qscilexercss_event_isbase = false;
            return QsciLexerCSS::event(event);
        } else if (qscilexercss_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexercss_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercss_eventfilter_isbase) {
            qscilexercss_eventfilter_isbase = false;
            return QsciLexerCSS::eventFilter(watched, event);
        } else if (qscilexercss_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexercss_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCSS::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercss_timerevent_isbase) {
            qscilexercss_timerevent_isbase = false;
            QsciLexerCSS::timerEvent(event);
        } else if (qscilexercss_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexercss_timerevent_callback(this, cbval1);
        } else {
            QsciLexerCSS::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercss_childevent_isbase) {
            qscilexercss_childevent_isbase = false;
            QsciLexerCSS::childEvent(event);
        } else if (qscilexercss_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexercss_childevent_callback(this, cbval1);
        } else {
            QsciLexerCSS::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercss_customevent_isbase) {
            qscilexercss_customevent_isbase = false;
            QsciLexerCSS::customEvent(event);
        } else if (qscilexercss_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexercss_customevent_callback(this, cbval1);
        } else {
            QsciLexerCSS::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercss_connectnotify_isbase) {
            qscilexercss_connectnotify_isbase = false;
            QsciLexerCSS::connectNotify(signal);
        } else if (qscilexercss_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercss_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerCSS::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercss_disconnectnotify_isbase) {
            qscilexercss_disconnectnotify_isbase = false;
            QsciLexerCSS::disconnectNotify(signal);
        } else if (qscilexercss_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercss_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerCSS::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexercss_textasbytes_isbase) {
            qscilexercss_textasbytes_isbase = false;
            return QsciLexerCSS::textAsBytes(text);
        } else if (qscilexercss_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexercss_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerCSS::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexercss_bytesastext_isbase) {
            qscilexercss_bytesastext_isbase = false;
            return QsciLexerCSS::bytesAsText(bytes, size);
        } else if (qscilexercss_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexercss_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerCSS::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercss_sender_isbase) {
            qscilexercss_sender_isbase = false;
            return QsciLexerCSS::sender();
        } else if (qscilexercss_sender_callback != nullptr) {
            QObject* callback_ret = qscilexercss_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerCSS::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercss_sendersignalindex_isbase) {
            qscilexercss_sendersignalindex_isbase = false;
            return QsciLexerCSS::senderSignalIndex();
        } else if (qscilexercss_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexercss_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercss_receivers_isbase) {
            qscilexercss_receivers_isbase = false;
            return QsciLexerCSS::receivers(signal);
        } else if (qscilexercss_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexercss_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCSS::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercss_issignalconnected_isbase) {
            qscilexercss_issignalconnected_isbase = false;
            return QsciLexerCSS::isSignalConnected(signal);
        } else if (qscilexercss_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexercss_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCSS::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerCSS_ReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSS_QBaseReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSS_WriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSS_QBaseWriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCSS_TimerEvent(QsciLexerCSS* self, QTimerEvent* event);
    friend void QsciLexerCSS_QBaseTimerEvent(QsciLexerCSS* self, QTimerEvent* event);
    friend void QsciLexerCSS_ChildEvent(QsciLexerCSS* self, QChildEvent* event);
    friend void QsciLexerCSS_QBaseChildEvent(QsciLexerCSS* self, QChildEvent* event);
    friend void QsciLexerCSS_CustomEvent(QsciLexerCSS* self, QEvent* event);
    friend void QsciLexerCSS_QBaseCustomEvent(QsciLexerCSS* self, QEvent* event);
    friend void QsciLexerCSS_ConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
    friend void QsciLexerCSS_QBaseConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
    friend void QsciLexerCSS_DisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
    friend void QsciLexerCSS_QBaseDisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerCSS_TextAsBytes(const QsciLexerCSS* self, const libqt_string text);
    friend libqt_string QsciLexerCSS_QBaseTextAsBytes(const QsciLexerCSS* self, const libqt_string text);
    friend libqt_string QsciLexerCSS_BytesAsText(const QsciLexerCSS* self, const char* bytes, int size);
    friend libqt_string QsciLexerCSS_QBaseBytesAsText(const QsciLexerCSS* self, const char* bytes, int size);
    friend QObject* QsciLexerCSS_Sender(const QsciLexerCSS* self);
    friend QObject* QsciLexerCSS_QBaseSender(const QsciLexerCSS* self);
    friend int QsciLexerCSS_SenderSignalIndex(const QsciLexerCSS* self);
    friend int QsciLexerCSS_QBaseSenderSignalIndex(const QsciLexerCSS* self);
    friend int QsciLexerCSS_Receivers(const QsciLexerCSS* self, const char* signal);
    friend int QsciLexerCSS_QBaseReceivers(const QsciLexerCSS* self, const char* signal);
    friend bool QsciLexerCSS_IsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal);
    friend bool QsciLexerCSS_QBaseIsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal);
};

#endif
