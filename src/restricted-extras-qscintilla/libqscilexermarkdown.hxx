#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMARKDOWN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMARKDOWN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMarkdown so that we can call protected methods
class VirtualQsciLexerMarkdown final : public QsciLexerMarkdown {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerMarkdown = true;

    // Virtual class public types (including callbacks)
    using QsciLexerMarkdown_Metacall_Callback = int (*)(QsciLexerMarkdown*, int, int, void**);
    using QsciLexerMarkdown_Language_Callback = const char* (*)();
    using QsciLexerMarkdown_Lexer_Callback = const char* (*)();
    using QsciLexerMarkdown_LexerId_Callback = int (*)();
    using QsciLexerMarkdown_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMarkdown_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerMarkdown_BlockEnd_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockLookback_Callback = int (*)();
    using QsciLexerMarkdown_BlockStart_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BraceStyle_Callback = int (*)();
    using QsciLexerMarkdown_CaseSensitive_Callback = bool (*)();
    using QsciLexerMarkdown_Color_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_EolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Font_Callback = QFont* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_IndentationGuideView_Callback = int (*)();
    using QsciLexerMarkdown_Keywords_Callback = const char* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultStyle_Callback = int (*)();
    using QsciLexerMarkdown_Description_Callback = libqt_string (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Paper_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultEolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetEditor_Callback = void (*)(QsciLexerMarkdown*, QsciScintilla*);
    using QsciLexerMarkdown_RefreshProperties_Callback = void (*)();
    using QsciLexerMarkdown_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMarkdown_WordCharacters_Callback = const char* (*)();
    using QsciLexerMarkdown_SetAutoIndentStyle_Callback = void (*)(QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetColor_Callback = void (*)(QsciLexerMarkdown*, QColor*, int);
    using QsciLexerMarkdown_SetEolFill_Callback = void (*)(QsciLexerMarkdown*, bool, int);
    using QsciLexerMarkdown_SetFont_Callback = void (*)(QsciLexerMarkdown*, QFont*, int);
    using QsciLexerMarkdown_SetPaper_Callback = void (*)(QsciLexerMarkdown*, QColor*, int);
    using QsciLexerMarkdown_ReadProperties_Callback = bool (*)(QsciLexerMarkdown*, QSettings*, libqt_string);
    using QsciLexerMarkdown_WriteProperties_Callback = bool (*)(const QsciLexerMarkdown*, QSettings*, libqt_string);
    using QsciLexerMarkdown_Event_Callback = bool (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_EventFilter_Callback = bool (*)(QsciLexerMarkdown*, QObject*, QEvent*);
    using QsciLexerMarkdown_TimerEvent_Callback = void (*)(QsciLexerMarkdown*, QTimerEvent*);
    using QsciLexerMarkdown_ChildEvent_Callback = void (*)(QsciLexerMarkdown*, QChildEvent*);
    using QsciLexerMarkdown_CustomEvent_Callback = void (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_ConnectNotify_Callback = void (*)(QsciLexerMarkdown*, QMetaMethod*);
    using QsciLexerMarkdown_DisconnectNotify_Callback = void (*)(QsciLexerMarkdown*, QMetaMethod*);
    using QsciLexerMarkdown_Sender_Callback = QObject* (*)();
    using QsciLexerMarkdown_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMarkdown_Receivers_Callback = int (*)(const QsciLexerMarkdown*, const char*);
    using QsciLexerMarkdown_IsSignalConnected_Callback = bool (*)(const QsciLexerMarkdown*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerMarkdown_Metacall_Callback qscilexermarkdown_metacall_callback = nullptr;
    QsciLexerMarkdown_Language_Callback qscilexermarkdown_language_callback = nullptr;
    QsciLexerMarkdown_Lexer_Callback qscilexermarkdown_lexer_callback = nullptr;
    QsciLexerMarkdown_LexerId_Callback qscilexermarkdown_lexerid_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionFillups_Callback qscilexermarkdown_autocompletionfillups_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionWordSeparators_Callback qscilexermarkdown_autocompletionwordseparators_callback = nullptr;
    QsciLexerMarkdown_BlockEnd_Callback qscilexermarkdown_blockend_callback = nullptr;
    QsciLexerMarkdown_BlockLookback_Callback qscilexermarkdown_blocklookback_callback = nullptr;
    QsciLexerMarkdown_BlockStart_Callback qscilexermarkdown_blockstart_callback = nullptr;
    QsciLexerMarkdown_BlockStartKeyword_Callback qscilexermarkdown_blockstartkeyword_callback = nullptr;
    QsciLexerMarkdown_BraceStyle_Callback qscilexermarkdown_bracestyle_callback = nullptr;
    QsciLexerMarkdown_CaseSensitive_Callback qscilexermarkdown_casesensitive_callback = nullptr;
    QsciLexerMarkdown_Color_Callback qscilexermarkdown_color_callback = nullptr;
    QsciLexerMarkdown_EolFill_Callback qscilexermarkdown_eolfill_callback = nullptr;
    QsciLexerMarkdown_Font_Callback qscilexermarkdown_font_callback = nullptr;
    QsciLexerMarkdown_IndentationGuideView_Callback qscilexermarkdown_indentationguideview_callback = nullptr;
    QsciLexerMarkdown_Keywords_Callback qscilexermarkdown_keywords_callback = nullptr;
    QsciLexerMarkdown_DefaultStyle_Callback qscilexermarkdown_defaultstyle_callback = nullptr;
    QsciLexerMarkdown_Description_Callback qscilexermarkdown_description_callback = nullptr;
    QsciLexerMarkdown_Paper_Callback qscilexermarkdown_paper_callback = nullptr;
    QsciLexerMarkdown_DefaultColorWithStyle_Callback qscilexermarkdown_defaultcolorwithstyle_callback = nullptr;
    QsciLexerMarkdown_DefaultEolFill_Callback qscilexermarkdown_defaulteolfill_callback = nullptr;
    QsciLexerMarkdown_DefaultFontWithStyle_Callback qscilexermarkdown_defaultfontwithstyle_callback = nullptr;
    QsciLexerMarkdown_DefaultPaperWithStyle_Callback qscilexermarkdown_defaultpaperwithstyle_callback = nullptr;
    QsciLexerMarkdown_SetEditor_Callback qscilexermarkdown_seteditor_callback = nullptr;
    QsciLexerMarkdown_RefreshProperties_Callback qscilexermarkdown_refreshproperties_callback = nullptr;
    QsciLexerMarkdown_StyleBitsNeeded_Callback qscilexermarkdown_stylebitsneeded_callback = nullptr;
    QsciLexerMarkdown_WordCharacters_Callback qscilexermarkdown_wordcharacters_callback = nullptr;
    QsciLexerMarkdown_SetAutoIndentStyle_Callback qscilexermarkdown_setautoindentstyle_callback = nullptr;
    QsciLexerMarkdown_SetColor_Callback qscilexermarkdown_setcolor_callback = nullptr;
    QsciLexerMarkdown_SetEolFill_Callback qscilexermarkdown_seteolfill_callback = nullptr;
    QsciLexerMarkdown_SetFont_Callback qscilexermarkdown_setfont_callback = nullptr;
    QsciLexerMarkdown_SetPaper_Callback qscilexermarkdown_setpaper_callback = nullptr;
    QsciLexerMarkdown_ReadProperties_Callback qscilexermarkdown_readproperties_callback = nullptr;
    QsciLexerMarkdown_WriteProperties_Callback qscilexermarkdown_writeproperties_callback = nullptr;
    QsciLexerMarkdown_Event_Callback qscilexermarkdown_event_callback = nullptr;
    QsciLexerMarkdown_EventFilter_Callback qscilexermarkdown_eventfilter_callback = nullptr;
    QsciLexerMarkdown_TimerEvent_Callback qscilexermarkdown_timerevent_callback = nullptr;
    QsciLexerMarkdown_ChildEvent_Callback qscilexermarkdown_childevent_callback = nullptr;
    QsciLexerMarkdown_CustomEvent_Callback qscilexermarkdown_customevent_callback = nullptr;
    QsciLexerMarkdown_ConnectNotify_Callback qscilexermarkdown_connectnotify_callback = nullptr;
    QsciLexerMarkdown_DisconnectNotify_Callback qscilexermarkdown_disconnectnotify_callback = nullptr;
    QsciLexerMarkdown_Sender_Callback qscilexermarkdown_sender_callback = nullptr;
    QsciLexerMarkdown_SenderSignalIndex_Callback qscilexermarkdown_sendersignalindex_callback = nullptr;
    QsciLexerMarkdown_Receivers_Callback qscilexermarkdown_receivers_callback = nullptr;
    QsciLexerMarkdown_IsSignalConnected_Callback qscilexermarkdown_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermarkdown_metacall_isbase = false;
    mutable bool qscilexermarkdown_language_isbase = false;
    mutable bool qscilexermarkdown_lexer_isbase = false;
    mutable bool qscilexermarkdown_lexerid_isbase = false;
    mutable bool qscilexermarkdown_autocompletionfillups_isbase = false;
    mutable bool qscilexermarkdown_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermarkdown_blockend_isbase = false;
    mutable bool qscilexermarkdown_blocklookback_isbase = false;
    mutable bool qscilexermarkdown_blockstart_isbase = false;
    mutable bool qscilexermarkdown_blockstartkeyword_isbase = false;
    mutable bool qscilexermarkdown_bracestyle_isbase = false;
    mutable bool qscilexermarkdown_casesensitive_isbase = false;
    mutable bool qscilexermarkdown_color_isbase = false;
    mutable bool qscilexermarkdown_eolfill_isbase = false;
    mutable bool qscilexermarkdown_font_isbase = false;
    mutable bool qscilexermarkdown_indentationguideview_isbase = false;
    mutable bool qscilexermarkdown_keywords_isbase = false;
    mutable bool qscilexermarkdown_defaultstyle_isbase = false;
    mutable bool qscilexermarkdown_description_isbase = false;
    mutable bool qscilexermarkdown_paper_isbase = false;
    mutable bool qscilexermarkdown_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexermarkdown_defaulteolfill_isbase = false;
    mutable bool qscilexermarkdown_defaultfontwithstyle_isbase = false;
    mutable bool qscilexermarkdown_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexermarkdown_seteditor_isbase = false;
    mutable bool qscilexermarkdown_refreshproperties_isbase = false;
    mutable bool qscilexermarkdown_stylebitsneeded_isbase = false;
    mutable bool qscilexermarkdown_wordcharacters_isbase = false;
    mutable bool qscilexermarkdown_setautoindentstyle_isbase = false;
    mutable bool qscilexermarkdown_setcolor_isbase = false;
    mutable bool qscilexermarkdown_seteolfill_isbase = false;
    mutable bool qscilexermarkdown_setfont_isbase = false;
    mutable bool qscilexermarkdown_setpaper_isbase = false;
    mutable bool qscilexermarkdown_readproperties_isbase = false;
    mutable bool qscilexermarkdown_writeproperties_isbase = false;
    mutable bool qscilexermarkdown_event_isbase = false;
    mutable bool qscilexermarkdown_eventfilter_isbase = false;
    mutable bool qscilexermarkdown_timerevent_isbase = false;
    mutable bool qscilexermarkdown_childevent_isbase = false;
    mutable bool qscilexermarkdown_customevent_isbase = false;
    mutable bool qscilexermarkdown_connectnotify_isbase = false;
    mutable bool qscilexermarkdown_disconnectnotify_isbase = false;
    mutable bool qscilexermarkdown_sender_isbase = false;
    mutable bool qscilexermarkdown_sendersignalindex_isbase = false;
    mutable bool qscilexermarkdown_receivers_isbase = false;
    mutable bool qscilexermarkdown_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMarkdown() : QsciLexerMarkdown(){};
    VirtualQsciLexerMarkdown(QObject* parent) : QsciLexerMarkdown(parent){};

    ~VirtualQsciLexerMarkdown() {
        qscilexermarkdown_metacall_callback = nullptr;
        qscilexermarkdown_language_callback = nullptr;
        qscilexermarkdown_lexer_callback = nullptr;
        qscilexermarkdown_lexerid_callback = nullptr;
        qscilexermarkdown_autocompletionfillups_callback = nullptr;
        qscilexermarkdown_autocompletionwordseparators_callback = nullptr;
        qscilexermarkdown_blockend_callback = nullptr;
        qscilexermarkdown_blocklookback_callback = nullptr;
        qscilexermarkdown_blockstart_callback = nullptr;
        qscilexermarkdown_blockstartkeyword_callback = nullptr;
        qscilexermarkdown_bracestyle_callback = nullptr;
        qscilexermarkdown_casesensitive_callback = nullptr;
        qscilexermarkdown_color_callback = nullptr;
        qscilexermarkdown_eolfill_callback = nullptr;
        qscilexermarkdown_font_callback = nullptr;
        qscilexermarkdown_indentationguideview_callback = nullptr;
        qscilexermarkdown_keywords_callback = nullptr;
        qscilexermarkdown_defaultstyle_callback = nullptr;
        qscilexermarkdown_description_callback = nullptr;
        qscilexermarkdown_paper_callback = nullptr;
        qscilexermarkdown_defaultcolorwithstyle_callback = nullptr;
        qscilexermarkdown_defaulteolfill_callback = nullptr;
        qscilexermarkdown_defaultfontwithstyle_callback = nullptr;
        qscilexermarkdown_defaultpaperwithstyle_callback = nullptr;
        qscilexermarkdown_seteditor_callback = nullptr;
        qscilexermarkdown_refreshproperties_callback = nullptr;
        qscilexermarkdown_stylebitsneeded_callback = nullptr;
        qscilexermarkdown_wordcharacters_callback = nullptr;
        qscilexermarkdown_setautoindentstyle_callback = nullptr;
        qscilexermarkdown_setcolor_callback = nullptr;
        qscilexermarkdown_seteolfill_callback = nullptr;
        qscilexermarkdown_setfont_callback = nullptr;
        qscilexermarkdown_setpaper_callback = nullptr;
        qscilexermarkdown_readproperties_callback = nullptr;
        qscilexermarkdown_writeproperties_callback = nullptr;
        qscilexermarkdown_event_callback = nullptr;
        qscilexermarkdown_eventfilter_callback = nullptr;
        qscilexermarkdown_timerevent_callback = nullptr;
        qscilexermarkdown_childevent_callback = nullptr;
        qscilexermarkdown_customevent_callback = nullptr;
        qscilexermarkdown_connectnotify_callback = nullptr;
        qscilexermarkdown_disconnectnotify_callback = nullptr;
        qscilexermarkdown_sender_callback = nullptr;
        qscilexermarkdown_sendersignalindex_callback = nullptr;
        qscilexermarkdown_receivers_callback = nullptr;
        qscilexermarkdown_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerMarkdown_Metacall_Callback(QsciLexerMarkdown_Metacall_Callback cb) { qscilexermarkdown_metacall_callback = cb; }
    inline void setQsciLexerMarkdown_Language_Callback(QsciLexerMarkdown_Language_Callback cb) { qscilexermarkdown_language_callback = cb; }
    inline void setQsciLexerMarkdown_Lexer_Callback(QsciLexerMarkdown_Lexer_Callback cb) { qscilexermarkdown_lexer_callback = cb; }
    inline void setQsciLexerMarkdown_LexerId_Callback(QsciLexerMarkdown_LexerId_Callback cb) { qscilexermarkdown_lexerid_callback = cb; }
    inline void setQsciLexerMarkdown_AutoCompletionFillups_Callback(QsciLexerMarkdown_AutoCompletionFillups_Callback cb) { qscilexermarkdown_autocompletionfillups_callback = cb; }
    inline void setQsciLexerMarkdown_AutoCompletionWordSeparators_Callback(QsciLexerMarkdown_AutoCompletionWordSeparators_Callback cb) { qscilexermarkdown_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerMarkdown_BlockEnd_Callback(QsciLexerMarkdown_BlockEnd_Callback cb) { qscilexermarkdown_blockend_callback = cb; }
    inline void setQsciLexerMarkdown_BlockLookback_Callback(QsciLexerMarkdown_BlockLookback_Callback cb) { qscilexermarkdown_blocklookback_callback = cb; }
    inline void setQsciLexerMarkdown_BlockStart_Callback(QsciLexerMarkdown_BlockStart_Callback cb) { qscilexermarkdown_blockstart_callback = cb; }
    inline void setQsciLexerMarkdown_BlockStartKeyword_Callback(QsciLexerMarkdown_BlockStartKeyword_Callback cb) { qscilexermarkdown_blockstartkeyword_callback = cb; }
    inline void setQsciLexerMarkdown_BraceStyle_Callback(QsciLexerMarkdown_BraceStyle_Callback cb) { qscilexermarkdown_bracestyle_callback = cb; }
    inline void setQsciLexerMarkdown_CaseSensitive_Callback(QsciLexerMarkdown_CaseSensitive_Callback cb) { qscilexermarkdown_casesensitive_callback = cb; }
    inline void setQsciLexerMarkdown_Color_Callback(QsciLexerMarkdown_Color_Callback cb) { qscilexermarkdown_color_callback = cb; }
    inline void setQsciLexerMarkdown_EolFill_Callback(QsciLexerMarkdown_EolFill_Callback cb) { qscilexermarkdown_eolfill_callback = cb; }
    inline void setQsciLexerMarkdown_Font_Callback(QsciLexerMarkdown_Font_Callback cb) { qscilexermarkdown_font_callback = cb; }
    inline void setQsciLexerMarkdown_IndentationGuideView_Callback(QsciLexerMarkdown_IndentationGuideView_Callback cb) { qscilexermarkdown_indentationguideview_callback = cb; }
    inline void setQsciLexerMarkdown_Keywords_Callback(QsciLexerMarkdown_Keywords_Callback cb) { qscilexermarkdown_keywords_callback = cb; }
    inline void setQsciLexerMarkdown_DefaultStyle_Callback(QsciLexerMarkdown_DefaultStyle_Callback cb) { qscilexermarkdown_defaultstyle_callback = cb; }
    inline void setQsciLexerMarkdown_Description_Callback(QsciLexerMarkdown_Description_Callback cb) { qscilexermarkdown_description_callback = cb; }
    inline void setQsciLexerMarkdown_Paper_Callback(QsciLexerMarkdown_Paper_Callback cb) { qscilexermarkdown_paper_callback = cb; }
    inline void setQsciLexerMarkdown_DefaultColorWithStyle_Callback(QsciLexerMarkdown_DefaultColorWithStyle_Callback cb) { qscilexermarkdown_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerMarkdown_DefaultEolFill_Callback(QsciLexerMarkdown_DefaultEolFill_Callback cb) { qscilexermarkdown_defaulteolfill_callback = cb; }
    inline void setQsciLexerMarkdown_DefaultFontWithStyle_Callback(QsciLexerMarkdown_DefaultFontWithStyle_Callback cb) { qscilexermarkdown_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerMarkdown_DefaultPaperWithStyle_Callback(QsciLexerMarkdown_DefaultPaperWithStyle_Callback cb) { qscilexermarkdown_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerMarkdown_SetEditor_Callback(QsciLexerMarkdown_SetEditor_Callback cb) { qscilexermarkdown_seteditor_callback = cb; }
    inline void setQsciLexerMarkdown_RefreshProperties_Callback(QsciLexerMarkdown_RefreshProperties_Callback cb) { qscilexermarkdown_refreshproperties_callback = cb; }
    inline void setQsciLexerMarkdown_StyleBitsNeeded_Callback(QsciLexerMarkdown_StyleBitsNeeded_Callback cb) { qscilexermarkdown_stylebitsneeded_callback = cb; }
    inline void setQsciLexerMarkdown_WordCharacters_Callback(QsciLexerMarkdown_WordCharacters_Callback cb) { qscilexermarkdown_wordcharacters_callback = cb; }
    inline void setQsciLexerMarkdown_SetAutoIndentStyle_Callback(QsciLexerMarkdown_SetAutoIndentStyle_Callback cb) { qscilexermarkdown_setautoindentstyle_callback = cb; }
    inline void setQsciLexerMarkdown_SetColor_Callback(QsciLexerMarkdown_SetColor_Callback cb) { qscilexermarkdown_setcolor_callback = cb; }
    inline void setQsciLexerMarkdown_SetEolFill_Callback(QsciLexerMarkdown_SetEolFill_Callback cb) { qscilexermarkdown_seteolfill_callback = cb; }
    inline void setQsciLexerMarkdown_SetFont_Callback(QsciLexerMarkdown_SetFont_Callback cb) { qscilexermarkdown_setfont_callback = cb; }
    inline void setQsciLexerMarkdown_SetPaper_Callback(QsciLexerMarkdown_SetPaper_Callback cb) { qscilexermarkdown_setpaper_callback = cb; }
    inline void setQsciLexerMarkdown_ReadProperties_Callback(QsciLexerMarkdown_ReadProperties_Callback cb) { qscilexermarkdown_readproperties_callback = cb; }
    inline void setQsciLexerMarkdown_WriteProperties_Callback(QsciLexerMarkdown_WriteProperties_Callback cb) { qscilexermarkdown_writeproperties_callback = cb; }
    inline void setQsciLexerMarkdown_Event_Callback(QsciLexerMarkdown_Event_Callback cb) { qscilexermarkdown_event_callback = cb; }
    inline void setQsciLexerMarkdown_EventFilter_Callback(QsciLexerMarkdown_EventFilter_Callback cb) { qscilexermarkdown_eventfilter_callback = cb; }
    inline void setQsciLexerMarkdown_TimerEvent_Callback(QsciLexerMarkdown_TimerEvent_Callback cb) { qscilexermarkdown_timerevent_callback = cb; }
    inline void setQsciLexerMarkdown_ChildEvent_Callback(QsciLexerMarkdown_ChildEvent_Callback cb) { qscilexermarkdown_childevent_callback = cb; }
    inline void setQsciLexerMarkdown_CustomEvent_Callback(QsciLexerMarkdown_CustomEvent_Callback cb) { qscilexermarkdown_customevent_callback = cb; }
    inline void setQsciLexerMarkdown_ConnectNotify_Callback(QsciLexerMarkdown_ConnectNotify_Callback cb) { qscilexermarkdown_connectnotify_callback = cb; }
    inline void setQsciLexerMarkdown_DisconnectNotify_Callback(QsciLexerMarkdown_DisconnectNotify_Callback cb) { qscilexermarkdown_disconnectnotify_callback = cb; }
    inline void setQsciLexerMarkdown_Sender_Callback(QsciLexerMarkdown_Sender_Callback cb) { qscilexermarkdown_sender_callback = cb; }
    inline void setQsciLexerMarkdown_SenderSignalIndex_Callback(QsciLexerMarkdown_SenderSignalIndex_Callback cb) { qscilexermarkdown_sendersignalindex_callback = cb; }
    inline void setQsciLexerMarkdown_Receivers_Callback(QsciLexerMarkdown_Receivers_Callback cb) { qscilexermarkdown_receivers_callback = cb; }
    inline void setQsciLexerMarkdown_IsSignalConnected_Callback(QsciLexerMarkdown_IsSignalConnected_Callback cb) { qscilexermarkdown_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerMarkdown_Metacall_IsBase(bool value) const { qscilexermarkdown_metacall_isbase = value; }
    inline void setQsciLexerMarkdown_Language_IsBase(bool value) const { qscilexermarkdown_language_isbase = value; }
    inline void setQsciLexerMarkdown_Lexer_IsBase(bool value) const { qscilexermarkdown_lexer_isbase = value; }
    inline void setQsciLexerMarkdown_LexerId_IsBase(bool value) const { qscilexermarkdown_lexerid_isbase = value; }
    inline void setQsciLexerMarkdown_AutoCompletionFillups_IsBase(bool value) const { qscilexermarkdown_autocompletionfillups_isbase = value; }
    inline void setQsciLexerMarkdown_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermarkdown_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerMarkdown_BlockEnd_IsBase(bool value) const { qscilexermarkdown_blockend_isbase = value; }
    inline void setQsciLexerMarkdown_BlockLookback_IsBase(bool value) const { qscilexermarkdown_blocklookback_isbase = value; }
    inline void setQsciLexerMarkdown_BlockStart_IsBase(bool value) const { qscilexermarkdown_blockstart_isbase = value; }
    inline void setQsciLexerMarkdown_BlockStartKeyword_IsBase(bool value) const { qscilexermarkdown_blockstartkeyword_isbase = value; }
    inline void setQsciLexerMarkdown_BraceStyle_IsBase(bool value) const { qscilexermarkdown_bracestyle_isbase = value; }
    inline void setQsciLexerMarkdown_CaseSensitive_IsBase(bool value) const { qscilexermarkdown_casesensitive_isbase = value; }
    inline void setQsciLexerMarkdown_Color_IsBase(bool value) const { qscilexermarkdown_color_isbase = value; }
    inline void setQsciLexerMarkdown_EolFill_IsBase(bool value) const { qscilexermarkdown_eolfill_isbase = value; }
    inline void setQsciLexerMarkdown_Font_IsBase(bool value) const { qscilexermarkdown_font_isbase = value; }
    inline void setQsciLexerMarkdown_IndentationGuideView_IsBase(bool value) const { qscilexermarkdown_indentationguideview_isbase = value; }
    inline void setQsciLexerMarkdown_Keywords_IsBase(bool value) const { qscilexermarkdown_keywords_isbase = value; }
    inline void setQsciLexerMarkdown_DefaultStyle_IsBase(bool value) const { qscilexermarkdown_defaultstyle_isbase = value; }
    inline void setQsciLexerMarkdown_Description_IsBase(bool value) const { qscilexermarkdown_description_isbase = value; }
    inline void setQsciLexerMarkdown_Paper_IsBase(bool value) const { qscilexermarkdown_paper_isbase = value; }
    inline void setQsciLexerMarkdown_DefaultColorWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerMarkdown_DefaultEolFill_IsBase(bool value) const { qscilexermarkdown_defaulteolfill_isbase = value; }
    inline void setQsciLexerMarkdown_DefaultFontWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerMarkdown_DefaultPaperWithStyle_IsBase(bool value) const { qscilexermarkdown_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerMarkdown_SetEditor_IsBase(bool value) const { qscilexermarkdown_seteditor_isbase = value; }
    inline void setQsciLexerMarkdown_RefreshProperties_IsBase(bool value) const { qscilexermarkdown_refreshproperties_isbase = value; }
    inline void setQsciLexerMarkdown_StyleBitsNeeded_IsBase(bool value) const { qscilexermarkdown_stylebitsneeded_isbase = value; }
    inline void setQsciLexerMarkdown_WordCharacters_IsBase(bool value) const { qscilexermarkdown_wordcharacters_isbase = value; }
    inline void setQsciLexerMarkdown_SetAutoIndentStyle_IsBase(bool value) const { qscilexermarkdown_setautoindentstyle_isbase = value; }
    inline void setQsciLexerMarkdown_SetColor_IsBase(bool value) const { qscilexermarkdown_setcolor_isbase = value; }
    inline void setQsciLexerMarkdown_SetEolFill_IsBase(bool value) const { qscilexermarkdown_seteolfill_isbase = value; }
    inline void setQsciLexerMarkdown_SetFont_IsBase(bool value) const { qscilexermarkdown_setfont_isbase = value; }
    inline void setQsciLexerMarkdown_SetPaper_IsBase(bool value) const { qscilexermarkdown_setpaper_isbase = value; }
    inline void setQsciLexerMarkdown_ReadProperties_IsBase(bool value) const { qscilexermarkdown_readproperties_isbase = value; }
    inline void setQsciLexerMarkdown_WriteProperties_IsBase(bool value) const { qscilexermarkdown_writeproperties_isbase = value; }
    inline void setQsciLexerMarkdown_Event_IsBase(bool value) const { qscilexermarkdown_event_isbase = value; }
    inline void setQsciLexerMarkdown_EventFilter_IsBase(bool value) const { qscilexermarkdown_eventfilter_isbase = value; }
    inline void setQsciLexerMarkdown_TimerEvent_IsBase(bool value) const { qscilexermarkdown_timerevent_isbase = value; }
    inline void setQsciLexerMarkdown_ChildEvent_IsBase(bool value) const { qscilexermarkdown_childevent_isbase = value; }
    inline void setQsciLexerMarkdown_CustomEvent_IsBase(bool value) const { qscilexermarkdown_customevent_isbase = value; }
    inline void setQsciLexerMarkdown_ConnectNotify_IsBase(bool value) const { qscilexermarkdown_connectnotify_isbase = value; }
    inline void setQsciLexerMarkdown_DisconnectNotify_IsBase(bool value) const { qscilexermarkdown_disconnectnotify_isbase = value; }
    inline void setQsciLexerMarkdown_Sender_IsBase(bool value) const { qscilexermarkdown_sender_isbase = value; }
    inline void setQsciLexerMarkdown_SenderSignalIndex_IsBase(bool value) const { qscilexermarkdown_sendersignalindex_isbase = value; }
    inline void setQsciLexerMarkdown_Receivers_IsBase(bool value) const { qscilexermarkdown_receivers_isbase = value; }
    inline void setQsciLexerMarkdown_IsSignalConnected_IsBase(bool value) const { qscilexermarkdown_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermarkdown_metacall_isbase) {
            qscilexermarkdown_metacall_isbase = false;
            return QsciLexerMarkdown::qt_metacall(param1, param2, param3);
        } else if (qscilexermarkdown_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexermarkdown_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermarkdown_language_callback != nullptr) {
            const char* callback_ret = qscilexermarkdown_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermarkdown_lexer_isbase) {
            qscilexermarkdown_lexer_isbase = false;
            return QsciLexerMarkdown::lexer();
        } else if (qscilexermarkdown_lexer_callback != nullptr) {
            const char* callback_ret = qscilexermarkdown_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerMarkdown::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermarkdown_lexerid_isbase) {
            qscilexermarkdown_lexerid_isbase = false;
            return QsciLexerMarkdown::lexerId();
        } else if (qscilexermarkdown_lexerid_callback != nullptr) {
            int callback_ret = qscilexermarkdown_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermarkdown_autocompletionfillups_isbase) {
            qscilexermarkdown_autocompletionfillups_isbase = false;
            return QsciLexerMarkdown::autoCompletionFillups();
        } else if (qscilexermarkdown_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexermarkdown_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerMarkdown::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexermarkdown_autocompletionwordseparators_isbase) {
            qscilexermarkdown_autocompletionwordseparators_isbase = false;
            return QsciLexerMarkdown::autoCompletionWordSeparators();
        } else if (qscilexermarkdown_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexermarkdown_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerMarkdown::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermarkdown_blockend_isbase) {
            qscilexermarkdown_blockend_isbase = false;
            return QsciLexerMarkdown::blockEnd(style);
        } else if (qscilexermarkdown_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermarkdown_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermarkdown_blocklookback_isbase) {
            qscilexermarkdown_blocklookback_isbase = false;
            return QsciLexerMarkdown::blockLookback();
        } else if (qscilexermarkdown_blocklookback_callback != nullptr) {
            int callback_ret = qscilexermarkdown_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermarkdown_blockstart_isbase) {
            qscilexermarkdown_blockstart_isbase = false;
            return QsciLexerMarkdown::blockStart(style);
        } else if (qscilexermarkdown_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermarkdown_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermarkdown_blockstartkeyword_isbase) {
            qscilexermarkdown_blockstartkeyword_isbase = false;
            return QsciLexerMarkdown::blockStartKeyword(style);
        } else if (qscilexermarkdown_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermarkdown_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermarkdown_bracestyle_isbase) {
            qscilexermarkdown_bracestyle_isbase = false;
            return QsciLexerMarkdown::braceStyle();
        } else if (qscilexermarkdown_bracestyle_callback != nullptr) {
            int callback_ret = qscilexermarkdown_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermarkdown_casesensitive_isbase) {
            qscilexermarkdown_casesensitive_isbase = false;
            return QsciLexerMarkdown::caseSensitive();
        } else if (qscilexermarkdown_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexermarkdown_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerMarkdown::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermarkdown_color_isbase) {
            qscilexermarkdown_color_isbase = false;
            return QsciLexerMarkdown::color(style);
        } else if (qscilexermarkdown_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermarkdown_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermarkdown_eolfill_isbase) {
            qscilexermarkdown_eolfill_isbase = false;
            return QsciLexerMarkdown::eolFill(style);
        } else if (qscilexermarkdown_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexermarkdown_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermarkdown_font_isbase) {
            qscilexermarkdown_font_isbase = false;
            return QsciLexerMarkdown::font(style);
        } else if (qscilexermarkdown_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexermarkdown_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermarkdown_indentationguideview_isbase) {
            qscilexermarkdown_indentationguideview_isbase = false;
            return QsciLexerMarkdown::indentationGuideView();
        } else if (qscilexermarkdown_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexermarkdown_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermarkdown_keywords_isbase) {
            qscilexermarkdown_keywords_isbase = false;
            return QsciLexerMarkdown::keywords(set);
        } else if (qscilexermarkdown_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexermarkdown_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermarkdown_defaultstyle_isbase) {
            qscilexermarkdown_defaultstyle_isbase = false;
            return QsciLexerMarkdown::defaultStyle();
        } else if (qscilexermarkdown_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexermarkdown_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermarkdown_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexermarkdown_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermarkdown_paper_isbase) {
            qscilexermarkdown_paper_isbase = false;
            return QsciLexerMarkdown::paper(style);
        } else if (qscilexermarkdown_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermarkdown_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermarkdown_defaultcolorwithstyle_isbase) {
            qscilexermarkdown_defaultcolorwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultColor(style);
        } else if (qscilexermarkdown_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermarkdown_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermarkdown_defaulteolfill_isbase) {
            qscilexermarkdown_defaulteolfill_isbase = false;
            return QsciLexerMarkdown::defaultEolFill(style);
        } else if (qscilexermarkdown_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexermarkdown_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermarkdown_defaultfontwithstyle_isbase) {
            qscilexermarkdown_defaultfontwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultFont(style);
        } else if (qscilexermarkdown_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexermarkdown_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermarkdown_defaultpaperwithstyle_isbase) {
            qscilexermarkdown_defaultpaperwithstyle_isbase = false;
            return QsciLexerMarkdown::defaultPaper(style);
        } else if (qscilexermarkdown_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermarkdown_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMarkdown::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermarkdown_seteditor_isbase) {
            qscilexermarkdown_seteditor_isbase = false;
            QsciLexerMarkdown::setEditor(editor);
        } else if (qscilexermarkdown_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexermarkdown_seteditor_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermarkdown_refreshproperties_isbase) {
            qscilexermarkdown_refreshproperties_isbase = false;
            QsciLexerMarkdown::refreshProperties();
        } else if (qscilexermarkdown_refreshproperties_callback != nullptr) {
            qscilexermarkdown_refreshproperties_callback();
        } else {
            QsciLexerMarkdown::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermarkdown_stylebitsneeded_isbase) {
            qscilexermarkdown_stylebitsneeded_isbase = false;
            return QsciLexerMarkdown::styleBitsNeeded();
        } else if (qscilexermarkdown_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexermarkdown_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermarkdown_wordcharacters_isbase) {
            qscilexermarkdown_wordcharacters_isbase = false;
            return QsciLexerMarkdown::wordCharacters();
        } else if (qscilexermarkdown_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexermarkdown_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerMarkdown::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermarkdown_setautoindentstyle_isbase) {
            qscilexermarkdown_setautoindentstyle_isbase = false;
            QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexermarkdown_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexermarkdown_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermarkdown_setcolor_isbase) {
            qscilexermarkdown_setcolor_isbase = false;
            QsciLexerMarkdown::setColor(c, style);
        } else if (qscilexermarkdown_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexermarkdown_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMarkdown::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermarkdown_seteolfill_isbase) {
            qscilexermarkdown_seteolfill_isbase = false;
            QsciLexerMarkdown::setEolFill(eoffill, style);
        } else if (qscilexermarkdown_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexermarkdown_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMarkdown::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermarkdown_setfont_isbase) {
            qscilexermarkdown_setfont_isbase = false;
            QsciLexerMarkdown::setFont(f, style);
        } else if (qscilexermarkdown_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexermarkdown_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMarkdown::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermarkdown_setpaper_isbase) {
            qscilexermarkdown_setpaper_isbase = false;
            QsciLexerMarkdown::setPaper(c, style);
        } else if (qscilexermarkdown_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexermarkdown_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMarkdown::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermarkdown_readproperties_isbase) {
            qscilexermarkdown_readproperties_isbase = false;
            return QsciLexerMarkdown::readProperties(qs, prefix);
        } else if (qscilexermarkdown_readproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy(prefix_str.data, prefix_b.data(), prefix_str.len);
            prefix_str.data[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexermarkdown_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermarkdown_writeproperties_isbase) {
            qscilexermarkdown_writeproperties_isbase = false;
            return QsciLexerMarkdown::writeProperties(qs, prefix);
        } else if (qscilexermarkdown_writeproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy(prefix_str.data, prefix_b.data(), prefix_str.len);
            prefix_str.data[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexermarkdown_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermarkdown_event_isbase) {
            qscilexermarkdown_event_isbase = false;
            return QsciLexerMarkdown::event(event);
        } else if (qscilexermarkdown_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexermarkdown_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermarkdown_eventfilter_isbase) {
            qscilexermarkdown_eventfilter_isbase = false;
            return QsciLexerMarkdown::eventFilter(watched, event);
        } else if (qscilexermarkdown_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexermarkdown_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermarkdown_timerevent_isbase) {
            qscilexermarkdown_timerevent_isbase = false;
            QsciLexerMarkdown::timerEvent(event);
        } else if (qscilexermarkdown_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexermarkdown_timerevent_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermarkdown_childevent_isbase) {
            qscilexermarkdown_childevent_isbase = false;
            QsciLexerMarkdown::childEvent(event);
        } else if (qscilexermarkdown_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexermarkdown_childevent_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermarkdown_customevent_isbase) {
            qscilexermarkdown_customevent_isbase = false;
            QsciLexerMarkdown::customEvent(event);
        } else if (qscilexermarkdown_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexermarkdown_customevent_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_connectnotify_isbase) {
            qscilexermarkdown_connectnotify_isbase = false;
            QsciLexerMarkdown::connectNotify(signal);
        } else if (qscilexermarkdown_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexermarkdown_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_disconnectnotify_isbase) {
            qscilexermarkdown_disconnectnotify_isbase = false;
            QsciLexerMarkdown::disconnectNotify(signal);
        } else if (qscilexermarkdown_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexermarkdown_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerMarkdown::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermarkdown_sender_isbase) {
            qscilexermarkdown_sender_isbase = false;
            return QsciLexerMarkdown::sender();
        } else if (qscilexermarkdown_sender_callback != nullptr) {
            QObject* callback_ret = qscilexermarkdown_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerMarkdown::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermarkdown_sendersignalindex_isbase) {
            qscilexermarkdown_sendersignalindex_isbase = false;
            return QsciLexerMarkdown::senderSignalIndex();
        } else if (qscilexermarkdown_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexermarkdown_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermarkdown_receivers_isbase) {
            qscilexermarkdown_receivers_isbase = false;
            return QsciLexerMarkdown::receivers(signal);
        } else if (qscilexermarkdown_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexermarkdown_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMarkdown::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermarkdown_issignalconnected_isbase) {
            qscilexermarkdown_issignalconnected_isbase = false;
            return QsciLexerMarkdown::isSignalConnected(signal);
        } else if (qscilexermarkdown_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexermarkdown_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMarkdown::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerMarkdown_ReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMarkdown_QBaseReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMarkdown_WriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMarkdown_QBaseWriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMarkdown_TimerEvent(QsciLexerMarkdown* self, QTimerEvent* event);
    friend void QsciLexerMarkdown_QBaseTimerEvent(QsciLexerMarkdown* self, QTimerEvent* event);
    friend void QsciLexerMarkdown_ChildEvent(QsciLexerMarkdown* self, QChildEvent* event);
    friend void QsciLexerMarkdown_QBaseChildEvent(QsciLexerMarkdown* self, QChildEvent* event);
    friend void QsciLexerMarkdown_CustomEvent(QsciLexerMarkdown* self, QEvent* event);
    friend void QsciLexerMarkdown_QBaseCustomEvent(QsciLexerMarkdown* self, QEvent* event);
    friend void QsciLexerMarkdown_ConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend void QsciLexerMarkdown_QBaseConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend void QsciLexerMarkdown_DisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend void QsciLexerMarkdown_QBaseDisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend QObject* QsciLexerMarkdown_Sender(const QsciLexerMarkdown* self);
    friend QObject* QsciLexerMarkdown_QBaseSender(const QsciLexerMarkdown* self);
    friend int QsciLexerMarkdown_SenderSignalIndex(const QsciLexerMarkdown* self);
    friend int QsciLexerMarkdown_QBaseSenderSignalIndex(const QsciLexerMarkdown* self);
    friend int QsciLexerMarkdown_Receivers(const QsciLexerMarkdown* self, const char* signal);
    friend int QsciLexerMarkdown_QBaseReceivers(const QsciLexerMarkdown* self, const char* signal);
    friend bool QsciLexerMarkdown_IsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend bool QsciLexerMarkdown_QBaseIsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal);
};

#endif
