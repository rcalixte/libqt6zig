#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERDIFF_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerDiff so that we can call protected methods
class VirtualQsciLexerDiff final : public QsciLexerDiff {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerDiff = true;

    // Virtual class public types (including callbacks)
    using QsciLexerDiff_Metacall_Callback = int (*)(QsciLexerDiff*, int, int, void**);
    using QsciLexerDiff_Language_Callback = const char* (*)();
    using QsciLexerDiff_Lexer_Callback = const char* (*)();
    using QsciLexerDiff_LexerId_Callback = int (*)();
    using QsciLexerDiff_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerDiff_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerDiff_BlockEnd_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockLookback_Callback = int (*)();
    using QsciLexerDiff_BlockStart_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockStartKeyword_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BraceStyle_Callback = int (*)();
    using QsciLexerDiff_CaseSensitive_Callback = bool (*)();
    using QsciLexerDiff_Color_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_EolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Font_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_IndentationGuideView_Callback = int (*)();
    using QsciLexerDiff_Keywords_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultStyle_Callback = int (*)();
    using QsciLexerDiff_Description_Callback = libqt_string (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Paper_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultEolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_SetEditor_Callback = void (*)(QsciLexerDiff*, QsciScintilla*);
    using QsciLexerDiff_RefreshProperties_Callback = void (*)();
    using QsciLexerDiff_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerDiff_WordCharacters_Callback = const char* (*)();
    using QsciLexerDiff_SetAutoIndentStyle_Callback = void (*)(QsciLexerDiff*, int);
    using QsciLexerDiff_SetColor_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_SetEolFill_Callback = void (*)(QsciLexerDiff*, bool, int);
    using QsciLexerDiff_SetFont_Callback = void (*)(QsciLexerDiff*, QFont*, int);
    using QsciLexerDiff_SetPaper_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_ReadProperties_Callback = bool (*)(QsciLexerDiff*, QSettings*, libqt_string);
    using QsciLexerDiff_WriteProperties_Callback = bool (*)(const QsciLexerDiff*, QSettings*, libqt_string);
    using QsciLexerDiff_Event_Callback = bool (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_EventFilter_Callback = bool (*)(QsciLexerDiff*, QObject*, QEvent*);
    using QsciLexerDiff_TimerEvent_Callback = void (*)(QsciLexerDiff*, QTimerEvent*);
    using QsciLexerDiff_ChildEvent_Callback = void (*)(QsciLexerDiff*, QChildEvent*);
    using QsciLexerDiff_CustomEvent_Callback = void (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_ConnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff_DisconnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff_Sender_Callback = QObject* (*)();
    using QsciLexerDiff_SenderSignalIndex_Callback = int (*)();
    using QsciLexerDiff_Receivers_Callback = int (*)(const QsciLexerDiff*, const char*);
    using QsciLexerDiff_IsSignalConnected_Callback = bool (*)(const QsciLexerDiff*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerDiff_Metacall_Callback qscilexerdiff_metacall_callback = nullptr;
    QsciLexerDiff_Language_Callback qscilexerdiff_language_callback = nullptr;
    QsciLexerDiff_Lexer_Callback qscilexerdiff_lexer_callback = nullptr;
    QsciLexerDiff_LexerId_Callback qscilexerdiff_lexerid_callback = nullptr;
    QsciLexerDiff_AutoCompletionFillups_Callback qscilexerdiff_autocompletionfillups_callback = nullptr;
    QsciLexerDiff_AutoCompletionWordSeparators_Callback qscilexerdiff_autocompletionwordseparators_callback = nullptr;
    QsciLexerDiff_BlockEnd_Callback qscilexerdiff_blockend_callback = nullptr;
    QsciLexerDiff_BlockLookback_Callback qscilexerdiff_blocklookback_callback = nullptr;
    QsciLexerDiff_BlockStart_Callback qscilexerdiff_blockstart_callback = nullptr;
    QsciLexerDiff_BlockStartKeyword_Callback qscilexerdiff_blockstartkeyword_callback = nullptr;
    QsciLexerDiff_BraceStyle_Callback qscilexerdiff_bracestyle_callback = nullptr;
    QsciLexerDiff_CaseSensitive_Callback qscilexerdiff_casesensitive_callback = nullptr;
    QsciLexerDiff_Color_Callback qscilexerdiff_color_callback = nullptr;
    QsciLexerDiff_EolFill_Callback qscilexerdiff_eolfill_callback = nullptr;
    QsciLexerDiff_Font_Callback qscilexerdiff_font_callback = nullptr;
    QsciLexerDiff_IndentationGuideView_Callback qscilexerdiff_indentationguideview_callback = nullptr;
    QsciLexerDiff_Keywords_Callback qscilexerdiff_keywords_callback = nullptr;
    QsciLexerDiff_DefaultStyle_Callback qscilexerdiff_defaultstyle_callback = nullptr;
    QsciLexerDiff_Description_Callback qscilexerdiff_description_callback = nullptr;
    QsciLexerDiff_Paper_Callback qscilexerdiff_paper_callback = nullptr;
    QsciLexerDiff_DefaultColorWithStyle_Callback qscilexerdiff_defaultcolorwithstyle_callback = nullptr;
    QsciLexerDiff_DefaultEolFill_Callback qscilexerdiff_defaulteolfill_callback = nullptr;
    QsciLexerDiff_DefaultFontWithStyle_Callback qscilexerdiff_defaultfontwithstyle_callback = nullptr;
    QsciLexerDiff_DefaultPaperWithStyle_Callback qscilexerdiff_defaultpaperwithstyle_callback = nullptr;
    QsciLexerDiff_SetEditor_Callback qscilexerdiff_seteditor_callback = nullptr;
    QsciLexerDiff_RefreshProperties_Callback qscilexerdiff_refreshproperties_callback = nullptr;
    QsciLexerDiff_StyleBitsNeeded_Callback qscilexerdiff_stylebitsneeded_callback = nullptr;
    QsciLexerDiff_WordCharacters_Callback qscilexerdiff_wordcharacters_callback = nullptr;
    QsciLexerDiff_SetAutoIndentStyle_Callback qscilexerdiff_setautoindentstyle_callback = nullptr;
    QsciLexerDiff_SetColor_Callback qscilexerdiff_setcolor_callback = nullptr;
    QsciLexerDiff_SetEolFill_Callback qscilexerdiff_seteolfill_callback = nullptr;
    QsciLexerDiff_SetFont_Callback qscilexerdiff_setfont_callback = nullptr;
    QsciLexerDiff_SetPaper_Callback qscilexerdiff_setpaper_callback = nullptr;
    QsciLexerDiff_ReadProperties_Callback qscilexerdiff_readproperties_callback = nullptr;
    QsciLexerDiff_WriteProperties_Callback qscilexerdiff_writeproperties_callback = nullptr;
    QsciLexerDiff_Event_Callback qscilexerdiff_event_callback = nullptr;
    QsciLexerDiff_EventFilter_Callback qscilexerdiff_eventfilter_callback = nullptr;
    QsciLexerDiff_TimerEvent_Callback qscilexerdiff_timerevent_callback = nullptr;
    QsciLexerDiff_ChildEvent_Callback qscilexerdiff_childevent_callback = nullptr;
    QsciLexerDiff_CustomEvent_Callback qscilexerdiff_customevent_callback = nullptr;
    QsciLexerDiff_ConnectNotify_Callback qscilexerdiff_connectnotify_callback = nullptr;
    QsciLexerDiff_DisconnectNotify_Callback qscilexerdiff_disconnectnotify_callback = nullptr;
    QsciLexerDiff_Sender_Callback qscilexerdiff_sender_callback = nullptr;
    QsciLexerDiff_SenderSignalIndex_Callback qscilexerdiff_sendersignalindex_callback = nullptr;
    QsciLexerDiff_Receivers_Callback qscilexerdiff_receivers_callback = nullptr;
    QsciLexerDiff_IsSignalConnected_Callback qscilexerdiff_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerdiff_metacall_isbase = false;
    mutable bool qscilexerdiff_language_isbase = false;
    mutable bool qscilexerdiff_lexer_isbase = false;
    mutable bool qscilexerdiff_lexerid_isbase = false;
    mutable bool qscilexerdiff_autocompletionfillups_isbase = false;
    mutable bool qscilexerdiff_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerdiff_blockend_isbase = false;
    mutable bool qscilexerdiff_blocklookback_isbase = false;
    mutable bool qscilexerdiff_blockstart_isbase = false;
    mutable bool qscilexerdiff_blockstartkeyword_isbase = false;
    mutable bool qscilexerdiff_bracestyle_isbase = false;
    mutable bool qscilexerdiff_casesensitive_isbase = false;
    mutable bool qscilexerdiff_color_isbase = false;
    mutable bool qscilexerdiff_eolfill_isbase = false;
    mutable bool qscilexerdiff_font_isbase = false;
    mutable bool qscilexerdiff_indentationguideview_isbase = false;
    mutable bool qscilexerdiff_keywords_isbase = false;
    mutable bool qscilexerdiff_defaultstyle_isbase = false;
    mutable bool qscilexerdiff_description_isbase = false;
    mutable bool qscilexerdiff_paper_isbase = false;
    mutable bool qscilexerdiff_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerdiff_defaulteolfill_isbase = false;
    mutable bool qscilexerdiff_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerdiff_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerdiff_seteditor_isbase = false;
    mutable bool qscilexerdiff_refreshproperties_isbase = false;
    mutable bool qscilexerdiff_stylebitsneeded_isbase = false;
    mutable bool qscilexerdiff_wordcharacters_isbase = false;
    mutable bool qscilexerdiff_setautoindentstyle_isbase = false;
    mutable bool qscilexerdiff_setcolor_isbase = false;
    mutable bool qscilexerdiff_seteolfill_isbase = false;
    mutable bool qscilexerdiff_setfont_isbase = false;
    mutable bool qscilexerdiff_setpaper_isbase = false;
    mutable bool qscilexerdiff_readproperties_isbase = false;
    mutable bool qscilexerdiff_writeproperties_isbase = false;
    mutable bool qscilexerdiff_event_isbase = false;
    mutable bool qscilexerdiff_eventfilter_isbase = false;
    mutable bool qscilexerdiff_timerevent_isbase = false;
    mutable bool qscilexerdiff_childevent_isbase = false;
    mutable bool qscilexerdiff_customevent_isbase = false;
    mutable bool qscilexerdiff_connectnotify_isbase = false;
    mutable bool qscilexerdiff_disconnectnotify_isbase = false;
    mutable bool qscilexerdiff_sender_isbase = false;
    mutable bool qscilexerdiff_sendersignalindex_isbase = false;
    mutable bool qscilexerdiff_receivers_isbase = false;
    mutable bool qscilexerdiff_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerDiff() : QsciLexerDiff(){};
    VirtualQsciLexerDiff(QObject* parent) : QsciLexerDiff(parent){};

    ~VirtualQsciLexerDiff() {
        qscilexerdiff_metacall_callback = nullptr;
        qscilexerdiff_language_callback = nullptr;
        qscilexerdiff_lexer_callback = nullptr;
        qscilexerdiff_lexerid_callback = nullptr;
        qscilexerdiff_autocompletionfillups_callback = nullptr;
        qscilexerdiff_autocompletionwordseparators_callback = nullptr;
        qscilexerdiff_blockend_callback = nullptr;
        qscilexerdiff_blocklookback_callback = nullptr;
        qscilexerdiff_blockstart_callback = nullptr;
        qscilexerdiff_blockstartkeyword_callback = nullptr;
        qscilexerdiff_bracestyle_callback = nullptr;
        qscilexerdiff_casesensitive_callback = nullptr;
        qscilexerdiff_color_callback = nullptr;
        qscilexerdiff_eolfill_callback = nullptr;
        qscilexerdiff_font_callback = nullptr;
        qscilexerdiff_indentationguideview_callback = nullptr;
        qscilexerdiff_keywords_callback = nullptr;
        qscilexerdiff_defaultstyle_callback = nullptr;
        qscilexerdiff_description_callback = nullptr;
        qscilexerdiff_paper_callback = nullptr;
        qscilexerdiff_defaultcolorwithstyle_callback = nullptr;
        qscilexerdiff_defaulteolfill_callback = nullptr;
        qscilexerdiff_defaultfontwithstyle_callback = nullptr;
        qscilexerdiff_defaultpaperwithstyle_callback = nullptr;
        qscilexerdiff_seteditor_callback = nullptr;
        qscilexerdiff_refreshproperties_callback = nullptr;
        qscilexerdiff_stylebitsneeded_callback = nullptr;
        qscilexerdiff_wordcharacters_callback = nullptr;
        qscilexerdiff_setautoindentstyle_callback = nullptr;
        qscilexerdiff_setcolor_callback = nullptr;
        qscilexerdiff_seteolfill_callback = nullptr;
        qscilexerdiff_setfont_callback = nullptr;
        qscilexerdiff_setpaper_callback = nullptr;
        qscilexerdiff_readproperties_callback = nullptr;
        qscilexerdiff_writeproperties_callback = nullptr;
        qscilexerdiff_event_callback = nullptr;
        qscilexerdiff_eventfilter_callback = nullptr;
        qscilexerdiff_timerevent_callback = nullptr;
        qscilexerdiff_childevent_callback = nullptr;
        qscilexerdiff_customevent_callback = nullptr;
        qscilexerdiff_connectnotify_callback = nullptr;
        qscilexerdiff_disconnectnotify_callback = nullptr;
        qscilexerdiff_sender_callback = nullptr;
        qscilexerdiff_sendersignalindex_callback = nullptr;
        qscilexerdiff_receivers_callback = nullptr;
        qscilexerdiff_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerDiff_Metacall_Callback(QsciLexerDiff_Metacall_Callback cb) { qscilexerdiff_metacall_callback = cb; }
    inline void setQsciLexerDiff_Language_Callback(QsciLexerDiff_Language_Callback cb) { qscilexerdiff_language_callback = cb; }
    inline void setQsciLexerDiff_Lexer_Callback(QsciLexerDiff_Lexer_Callback cb) { qscilexerdiff_lexer_callback = cb; }
    inline void setQsciLexerDiff_LexerId_Callback(QsciLexerDiff_LexerId_Callback cb) { qscilexerdiff_lexerid_callback = cb; }
    inline void setQsciLexerDiff_AutoCompletionFillups_Callback(QsciLexerDiff_AutoCompletionFillups_Callback cb) { qscilexerdiff_autocompletionfillups_callback = cb; }
    inline void setQsciLexerDiff_AutoCompletionWordSeparators_Callback(QsciLexerDiff_AutoCompletionWordSeparators_Callback cb) { qscilexerdiff_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerDiff_BlockEnd_Callback(QsciLexerDiff_BlockEnd_Callback cb) { qscilexerdiff_blockend_callback = cb; }
    inline void setQsciLexerDiff_BlockLookback_Callback(QsciLexerDiff_BlockLookback_Callback cb) { qscilexerdiff_blocklookback_callback = cb; }
    inline void setQsciLexerDiff_BlockStart_Callback(QsciLexerDiff_BlockStart_Callback cb) { qscilexerdiff_blockstart_callback = cb; }
    inline void setQsciLexerDiff_BlockStartKeyword_Callback(QsciLexerDiff_BlockStartKeyword_Callback cb) { qscilexerdiff_blockstartkeyword_callback = cb; }
    inline void setQsciLexerDiff_BraceStyle_Callback(QsciLexerDiff_BraceStyle_Callback cb) { qscilexerdiff_bracestyle_callback = cb; }
    inline void setQsciLexerDiff_CaseSensitive_Callback(QsciLexerDiff_CaseSensitive_Callback cb) { qscilexerdiff_casesensitive_callback = cb; }
    inline void setQsciLexerDiff_Color_Callback(QsciLexerDiff_Color_Callback cb) { qscilexerdiff_color_callback = cb; }
    inline void setQsciLexerDiff_EolFill_Callback(QsciLexerDiff_EolFill_Callback cb) { qscilexerdiff_eolfill_callback = cb; }
    inline void setQsciLexerDiff_Font_Callback(QsciLexerDiff_Font_Callback cb) { qscilexerdiff_font_callback = cb; }
    inline void setQsciLexerDiff_IndentationGuideView_Callback(QsciLexerDiff_IndentationGuideView_Callback cb) { qscilexerdiff_indentationguideview_callback = cb; }
    inline void setQsciLexerDiff_Keywords_Callback(QsciLexerDiff_Keywords_Callback cb) { qscilexerdiff_keywords_callback = cb; }
    inline void setQsciLexerDiff_DefaultStyle_Callback(QsciLexerDiff_DefaultStyle_Callback cb) { qscilexerdiff_defaultstyle_callback = cb; }
    inline void setQsciLexerDiff_Description_Callback(QsciLexerDiff_Description_Callback cb) { qscilexerdiff_description_callback = cb; }
    inline void setQsciLexerDiff_Paper_Callback(QsciLexerDiff_Paper_Callback cb) { qscilexerdiff_paper_callback = cb; }
    inline void setQsciLexerDiff_DefaultColorWithStyle_Callback(QsciLexerDiff_DefaultColorWithStyle_Callback cb) { qscilexerdiff_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerDiff_DefaultEolFill_Callback(QsciLexerDiff_DefaultEolFill_Callback cb) { qscilexerdiff_defaulteolfill_callback = cb; }
    inline void setQsciLexerDiff_DefaultFontWithStyle_Callback(QsciLexerDiff_DefaultFontWithStyle_Callback cb) { qscilexerdiff_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerDiff_DefaultPaperWithStyle_Callback(QsciLexerDiff_DefaultPaperWithStyle_Callback cb) { qscilexerdiff_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerDiff_SetEditor_Callback(QsciLexerDiff_SetEditor_Callback cb) { qscilexerdiff_seteditor_callback = cb; }
    inline void setQsciLexerDiff_RefreshProperties_Callback(QsciLexerDiff_RefreshProperties_Callback cb) { qscilexerdiff_refreshproperties_callback = cb; }
    inline void setQsciLexerDiff_StyleBitsNeeded_Callback(QsciLexerDiff_StyleBitsNeeded_Callback cb) { qscilexerdiff_stylebitsneeded_callback = cb; }
    inline void setQsciLexerDiff_WordCharacters_Callback(QsciLexerDiff_WordCharacters_Callback cb) { qscilexerdiff_wordcharacters_callback = cb; }
    inline void setQsciLexerDiff_SetAutoIndentStyle_Callback(QsciLexerDiff_SetAutoIndentStyle_Callback cb) { qscilexerdiff_setautoindentstyle_callback = cb; }
    inline void setQsciLexerDiff_SetColor_Callback(QsciLexerDiff_SetColor_Callback cb) { qscilexerdiff_setcolor_callback = cb; }
    inline void setQsciLexerDiff_SetEolFill_Callback(QsciLexerDiff_SetEolFill_Callback cb) { qscilexerdiff_seteolfill_callback = cb; }
    inline void setQsciLexerDiff_SetFont_Callback(QsciLexerDiff_SetFont_Callback cb) { qscilexerdiff_setfont_callback = cb; }
    inline void setQsciLexerDiff_SetPaper_Callback(QsciLexerDiff_SetPaper_Callback cb) { qscilexerdiff_setpaper_callback = cb; }
    inline void setQsciLexerDiff_ReadProperties_Callback(QsciLexerDiff_ReadProperties_Callback cb) { qscilexerdiff_readproperties_callback = cb; }
    inline void setQsciLexerDiff_WriteProperties_Callback(QsciLexerDiff_WriteProperties_Callback cb) { qscilexerdiff_writeproperties_callback = cb; }
    inline void setQsciLexerDiff_Event_Callback(QsciLexerDiff_Event_Callback cb) { qscilexerdiff_event_callback = cb; }
    inline void setQsciLexerDiff_EventFilter_Callback(QsciLexerDiff_EventFilter_Callback cb) { qscilexerdiff_eventfilter_callback = cb; }
    inline void setQsciLexerDiff_TimerEvent_Callback(QsciLexerDiff_TimerEvent_Callback cb) { qscilexerdiff_timerevent_callback = cb; }
    inline void setQsciLexerDiff_ChildEvent_Callback(QsciLexerDiff_ChildEvent_Callback cb) { qscilexerdiff_childevent_callback = cb; }
    inline void setQsciLexerDiff_CustomEvent_Callback(QsciLexerDiff_CustomEvent_Callback cb) { qscilexerdiff_customevent_callback = cb; }
    inline void setQsciLexerDiff_ConnectNotify_Callback(QsciLexerDiff_ConnectNotify_Callback cb) { qscilexerdiff_connectnotify_callback = cb; }
    inline void setQsciLexerDiff_DisconnectNotify_Callback(QsciLexerDiff_DisconnectNotify_Callback cb) { qscilexerdiff_disconnectnotify_callback = cb; }
    inline void setQsciLexerDiff_Sender_Callback(QsciLexerDiff_Sender_Callback cb) { qscilexerdiff_sender_callback = cb; }
    inline void setQsciLexerDiff_SenderSignalIndex_Callback(QsciLexerDiff_SenderSignalIndex_Callback cb) { qscilexerdiff_sendersignalindex_callback = cb; }
    inline void setQsciLexerDiff_Receivers_Callback(QsciLexerDiff_Receivers_Callback cb) { qscilexerdiff_receivers_callback = cb; }
    inline void setQsciLexerDiff_IsSignalConnected_Callback(QsciLexerDiff_IsSignalConnected_Callback cb) { qscilexerdiff_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerDiff_Metacall_IsBase(bool value) const { qscilexerdiff_metacall_isbase = value; }
    inline void setQsciLexerDiff_Language_IsBase(bool value) const { qscilexerdiff_language_isbase = value; }
    inline void setQsciLexerDiff_Lexer_IsBase(bool value) const { qscilexerdiff_lexer_isbase = value; }
    inline void setQsciLexerDiff_LexerId_IsBase(bool value) const { qscilexerdiff_lexerid_isbase = value; }
    inline void setQsciLexerDiff_AutoCompletionFillups_IsBase(bool value) const { qscilexerdiff_autocompletionfillups_isbase = value; }
    inline void setQsciLexerDiff_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerdiff_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerDiff_BlockEnd_IsBase(bool value) const { qscilexerdiff_blockend_isbase = value; }
    inline void setQsciLexerDiff_BlockLookback_IsBase(bool value) const { qscilexerdiff_blocklookback_isbase = value; }
    inline void setQsciLexerDiff_BlockStart_IsBase(bool value) const { qscilexerdiff_blockstart_isbase = value; }
    inline void setQsciLexerDiff_BlockStartKeyword_IsBase(bool value) const { qscilexerdiff_blockstartkeyword_isbase = value; }
    inline void setQsciLexerDiff_BraceStyle_IsBase(bool value) const { qscilexerdiff_bracestyle_isbase = value; }
    inline void setQsciLexerDiff_CaseSensitive_IsBase(bool value) const { qscilexerdiff_casesensitive_isbase = value; }
    inline void setQsciLexerDiff_Color_IsBase(bool value) const { qscilexerdiff_color_isbase = value; }
    inline void setQsciLexerDiff_EolFill_IsBase(bool value) const { qscilexerdiff_eolfill_isbase = value; }
    inline void setQsciLexerDiff_Font_IsBase(bool value) const { qscilexerdiff_font_isbase = value; }
    inline void setQsciLexerDiff_IndentationGuideView_IsBase(bool value) const { qscilexerdiff_indentationguideview_isbase = value; }
    inline void setQsciLexerDiff_Keywords_IsBase(bool value) const { qscilexerdiff_keywords_isbase = value; }
    inline void setQsciLexerDiff_DefaultStyle_IsBase(bool value) const { qscilexerdiff_defaultstyle_isbase = value; }
    inline void setQsciLexerDiff_Description_IsBase(bool value) const { qscilexerdiff_description_isbase = value; }
    inline void setQsciLexerDiff_Paper_IsBase(bool value) const { qscilexerdiff_paper_isbase = value; }
    inline void setQsciLexerDiff_DefaultColorWithStyle_IsBase(bool value) const { qscilexerdiff_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerDiff_DefaultEolFill_IsBase(bool value) const { qscilexerdiff_defaulteolfill_isbase = value; }
    inline void setQsciLexerDiff_DefaultFontWithStyle_IsBase(bool value) const { qscilexerdiff_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerDiff_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerdiff_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerDiff_SetEditor_IsBase(bool value) const { qscilexerdiff_seteditor_isbase = value; }
    inline void setQsciLexerDiff_RefreshProperties_IsBase(bool value) const { qscilexerdiff_refreshproperties_isbase = value; }
    inline void setQsciLexerDiff_StyleBitsNeeded_IsBase(bool value) const { qscilexerdiff_stylebitsneeded_isbase = value; }
    inline void setQsciLexerDiff_WordCharacters_IsBase(bool value) const { qscilexerdiff_wordcharacters_isbase = value; }
    inline void setQsciLexerDiff_SetAutoIndentStyle_IsBase(bool value) const { qscilexerdiff_setautoindentstyle_isbase = value; }
    inline void setQsciLexerDiff_SetColor_IsBase(bool value) const { qscilexerdiff_setcolor_isbase = value; }
    inline void setQsciLexerDiff_SetEolFill_IsBase(bool value) const { qscilexerdiff_seteolfill_isbase = value; }
    inline void setQsciLexerDiff_SetFont_IsBase(bool value) const { qscilexerdiff_setfont_isbase = value; }
    inline void setQsciLexerDiff_SetPaper_IsBase(bool value) const { qscilexerdiff_setpaper_isbase = value; }
    inline void setQsciLexerDiff_ReadProperties_IsBase(bool value) const { qscilexerdiff_readproperties_isbase = value; }
    inline void setQsciLexerDiff_WriteProperties_IsBase(bool value) const { qscilexerdiff_writeproperties_isbase = value; }
    inline void setQsciLexerDiff_Event_IsBase(bool value) const { qscilexerdiff_event_isbase = value; }
    inline void setQsciLexerDiff_EventFilter_IsBase(bool value) const { qscilexerdiff_eventfilter_isbase = value; }
    inline void setQsciLexerDiff_TimerEvent_IsBase(bool value) const { qscilexerdiff_timerevent_isbase = value; }
    inline void setQsciLexerDiff_ChildEvent_IsBase(bool value) const { qscilexerdiff_childevent_isbase = value; }
    inline void setQsciLexerDiff_CustomEvent_IsBase(bool value) const { qscilexerdiff_customevent_isbase = value; }
    inline void setQsciLexerDiff_ConnectNotify_IsBase(bool value) const { qscilexerdiff_connectnotify_isbase = value; }
    inline void setQsciLexerDiff_DisconnectNotify_IsBase(bool value) const { qscilexerdiff_disconnectnotify_isbase = value; }
    inline void setQsciLexerDiff_Sender_IsBase(bool value) const { qscilexerdiff_sender_isbase = value; }
    inline void setQsciLexerDiff_SenderSignalIndex_IsBase(bool value) const { qscilexerdiff_sendersignalindex_isbase = value; }
    inline void setQsciLexerDiff_Receivers_IsBase(bool value) const { qscilexerdiff_receivers_isbase = value; }
    inline void setQsciLexerDiff_IsSignalConnected_IsBase(bool value) const { qscilexerdiff_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerdiff_metacall_isbase) {
            qscilexerdiff_metacall_isbase = false;
            return QsciLexerDiff::qt_metacall(param1, param2, param3);
        } else if (qscilexerdiff_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerdiff_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerdiff_language_callback != nullptr) {
            const char* callback_ret = qscilexerdiff_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerdiff_lexer_isbase) {
            qscilexerdiff_lexer_isbase = false;
            return QsciLexerDiff::lexer();
        } else if (qscilexerdiff_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerdiff_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerDiff::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerdiff_lexerid_isbase) {
            qscilexerdiff_lexerid_isbase = false;
            return QsciLexerDiff::lexerId();
        } else if (qscilexerdiff_lexerid_callback != nullptr) {
            int callback_ret = qscilexerdiff_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerdiff_autocompletionfillups_isbase) {
            qscilexerdiff_autocompletionfillups_isbase = false;
            return QsciLexerDiff::autoCompletionFillups();
        } else if (qscilexerdiff_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerdiff_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerDiff::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerdiff_autocompletionwordseparators_isbase) {
            qscilexerdiff_autocompletionwordseparators_isbase = false;
            return QsciLexerDiff::autoCompletionWordSeparators();
        } else if (qscilexerdiff_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerdiff_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerDiff::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerdiff_blockend_isbase) {
            qscilexerdiff_blockend_isbase = false;
            return QsciLexerDiff::blockEnd(style);
        } else if (qscilexerdiff_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerdiff_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerdiff_blocklookback_isbase) {
            qscilexerdiff_blocklookback_isbase = false;
            return QsciLexerDiff::blockLookback();
        } else if (qscilexerdiff_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerdiff_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerdiff_blockstart_isbase) {
            qscilexerdiff_blockstart_isbase = false;
            return QsciLexerDiff::blockStart(style);
        } else if (qscilexerdiff_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerdiff_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerdiff_blockstartkeyword_isbase) {
            qscilexerdiff_blockstartkeyword_isbase = false;
            return QsciLexerDiff::blockStartKeyword(style);
        } else if (qscilexerdiff_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerdiff_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerdiff_bracestyle_isbase) {
            qscilexerdiff_bracestyle_isbase = false;
            return QsciLexerDiff::braceStyle();
        } else if (qscilexerdiff_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerdiff_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerdiff_casesensitive_isbase) {
            qscilexerdiff_casesensitive_isbase = false;
            return QsciLexerDiff::caseSensitive();
        } else if (qscilexerdiff_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerdiff_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerDiff::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerdiff_color_isbase) {
            qscilexerdiff_color_isbase = false;
            return QsciLexerDiff::color(style);
        } else if (qscilexerdiff_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerdiff_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerdiff_eolfill_isbase) {
            qscilexerdiff_eolfill_isbase = false;
            return QsciLexerDiff::eolFill(style);
        } else if (qscilexerdiff_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerdiff_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerdiff_font_isbase) {
            qscilexerdiff_font_isbase = false;
            return QsciLexerDiff::font(style);
        } else if (qscilexerdiff_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerdiff_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerdiff_indentationguideview_isbase) {
            qscilexerdiff_indentationguideview_isbase = false;
            return QsciLexerDiff::indentationGuideView();
        } else if (qscilexerdiff_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerdiff_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerdiff_keywords_isbase) {
            qscilexerdiff_keywords_isbase = false;
            return QsciLexerDiff::keywords(set);
        } else if (qscilexerdiff_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerdiff_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerdiff_defaultstyle_isbase) {
            qscilexerdiff_defaultstyle_isbase = false;
            return QsciLexerDiff::defaultStyle();
        } else if (qscilexerdiff_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerdiff_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerdiff_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerdiff_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerdiff_paper_isbase) {
            qscilexerdiff_paper_isbase = false;
            return QsciLexerDiff::paper(style);
        } else if (qscilexerdiff_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerdiff_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerdiff_defaultcolorwithstyle_isbase) {
            qscilexerdiff_defaultcolorwithstyle_isbase = false;
            return QsciLexerDiff::defaultColor(style);
        } else if (qscilexerdiff_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerdiff_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerdiff_defaulteolfill_isbase) {
            qscilexerdiff_defaulteolfill_isbase = false;
            return QsciLexerDiff::defaultEolFill(style);
        } else if (qscilexerdiff_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerdiff_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerdiff_defaultfontwithstyle_isbase) {
            qscilexerdiff_defaultfontwithstyle_isbase = false;
            return QsciLexerDiff::defaultFont(style);
        } else if (qscilexerdiff_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerdiff_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerdiff_defaultpaperwithstyle_isbase) {
            qscilexerdiff_defaultpaperwithstyle_isbase = false;
            return QsciLexerDiff::defaultPaper(style);
        } else if (qscilexerdiff_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerdiff_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerDiff::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerdiff_seteditor_isbase) {
            qscilexerdiff_seteditor_isbase = false;
            QsciLexerDiff::setEditor(editor);
        } else if (qscilexerdiff_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerdiff_seteditor_callback(this, cbval1);
        } else {
            QsciLexerDiff::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerdiff_refreshproperties_isbase) {
            qscilexerdiff_refreshproperties_isbase = false;
            QsciLexerDiff::refreshProperties();
        } else if (qscilexerdiff_refreshproperties_callback != nullptr) {
            qscilexerdiff_refreshproperties_callback();
        } else {
            QsciLexerDiff::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerdiff_stylebitsneeded_isbase) {
            qscilexerdiff_stylebitsneeded_isbase = false;
            return QsciLexerDiff::styleBitsNeeded();
        } else if (qscilexerdiff_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerdiff_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerdiff_wordcharacters_isbase) {
            qscilexerdiff_wordcharacters_isbase = false;
            return QsciLexerDiff::wordCharacters();
        } else if (qscilexerdiff_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerdiff_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerDiff::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerdiff_setautoindentstyle_isbase) {
            qscilexerdiff_setautoindentstyle_isbase = false;
            QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerdiff_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerdiff_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerdiff_setcolor_isbase) {
            qscilexerdiff_setcolor_isbase = false;
            QsciLexerDiff::setColor(c, style);
        } else if (qscilexerdiff_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerdiff_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerDiff::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerdiff_seteolfill_isbase) {
            qscilexerdiff_seteolfill_isbase = false;
            QsciLexerDiff::setEolFill(eoffill, style);
        } else if (qscilexerdiff_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerdiff_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerDiff::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerdiff_setfont_isbase) {
            qscilexerdiff_setfont_isbase = false;
            QsciLexerDiff::setFont(f, style);
        } else if (qscilexerdiff_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerdiff_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerDiff::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerdiff_setpaper_isbase) {
            qscilexerdiff_setpaper_isbase = false;
            QsciLexerDiff::setPaper(c, style);
        } else if (qscilexerdiff_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerdiff_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerDiff::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerdiff_readproperties_isbase) {
            qscilexerdiff_readproperties_isbase = false;
            return QsciLexerDiff::readProperties(qs, prefix);
        } else if (qscilexerdiff_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerdiff_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerDiff::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerdiff_writeproperties_isbase) {
            qscilexerdiff_writeproperties_isbase = false;
            return QsciLexerDiff::writeProperties(qs, prefix);
        } else if (qscilexerdiff_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerdiff_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerDiff::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerdiff_event_isbase) {
            qscilexerdiff_event_isbase = false;
            return QsciLexerDiff::event(event);
        } else if (qscilexerdiff_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerdiff_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerdiff_eventfilter_isbase) {
            qscilexerdiff_eventfilter_isbase = false;
            return QsciLexerDiff::eventFilter(watched, event);
        } else if (qscilexerdiff_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerdiff_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerDiff::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerdiff_timerevent_isbase) {
            qscilexerdiff_timerevent_isbase = false;
            QsciLexerDiff::timerEvent(event);
        } else if (qscilexerdiff_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerdiff_timerevent_callback(this, cbval1);
        } else {
            QsciLexerDiff::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerdiff_childevent_isbase) {
            qscilexerdiff_childevent_isbase = false;
            QsciLexerDiff::childEvent(event);
        } else if (qscilexerdiff_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerdiff_childevent_callback(this, cbval1);
        } else {
            QsciLexerDiff::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerdiff_customevent_isbase) {
            qscilexerdiff_customevent_isbase = false;
            QsciLexerDiff::customEvent(event);
        } else if (qscilexerdiff_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerdiff_customevent_callback(this, cbval1);
        } else {
            QsciLexerDiff::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_connectnotify_isbase) {
            qscilexerdiff_connectnotify_isbase = false;
            QsciLexerDiff::connectNotify(signal);
        } else if (qscilexerdiff_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerdiff_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerDiff::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_disconnectnotify_isbase) {
            qscilexerdiff_disconnectnotify_isbase = false;
            QsciLexerDiff::disconnectNotify(signal);
        } else if (qscilexerdiff_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerdiff_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerDiff::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerdiff_sender_isbase) {
            qscilexerdiff_sender_isbase = false;
            return QsciLexerDiff::sender();
        } else if (qscilexerdiff_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerdiff_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerDiff::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerdiff_sendersignalindex_isbase) {
            qscilexerdiff_sendersignalindex_isbase = false;
            return QsciLexerDiff::senderSignalIndex();
        } else if (qscilexerdiff_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerdiff_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerdiff_receivers_isbase) {
            qscilexerdiff_receivers_isbase = false;
            return QsciLexerDiff::receivers(signal);
        } else if (qscilexerdiff_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerdiff_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerDiff::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerdiff_issignalconnected_isbase) {
            qscilexerdiff_issignalconnected_isbase = false;
            return QsciLexerDiff::isSignalConnected(signal);
        } else if (qscilexerdiff_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerdiff_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerDiff::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_QBaseReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_QBaseWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event);
    friend void QsciLexerDiff_QBaseTimerEvent(QsciLexerDiff* self, QTimerEvent* event);
    friend void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event);
    friend void QsciLexerDiff_QBaseChildEvent(QsciLexerDiff* self, QChildEvent* event);
    friend void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event);
    friend void QsciLexerDiff_QBaseCustomEvent(QsciLexerDiff* self, QEvent* event);
    friend void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_QBaseConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_QBaseDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self);
    friend QObject* QsciLexerDiff_QBaseSender(const QsciLexerDiff* self);
    friend int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self);
    friend int QsciLexerDiff_QBaseSenderSignalIndex(const QsciLexerDiff* self);
    friend int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal);
    friend int QsciLexerDiff_QBaseReceivers(const QsciLexerDiff* self, const char* signal);
    friend bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
    friend bool QsciLexerDiff_QBaseIsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal);
};

#endif
