#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPROPERTIES_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerProperties so that we can call protected methods
class VirtualQsciLexerProperties final : public QsciLexerProperties {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerProperties = true;

    // Virtual class public types (including callbacks)
    using QsciLexerProperties_Metacall_Callback = int (*)(QsciLexerProperties*, int, int, void**);
    using QsciLexerProperties_SetFoldCompact_Callback = void (*)(QsciLexerProperties*, bool);
    using QsciLexerProperties_Language_Callback = const char* (*)();
    using QsciLexerProperties_Lexer_Callback = const char* (*)();
    using QsciLexerProperties_LexerId_Callback = int (*)();
    using QsciLexerProperties_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerProperties_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerProperties_BlockEnd_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockLookback_Callback = int (*)();
    using QsciLexerProperties_BlockStart_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockStartKeyword_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BraceStyle_Callback = int (*)();
    using QsciLexerProperties_CaseSensitive_Callback = bool (*)();
    using QsciLexerProperties_Color_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_EolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Font_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_IndentationGuideView_Callback = int (*)();
    using QsciLexerProperties_Keywords_Callback = const char* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultStyle_Callback = int (*)();
    using QsciLexerProperties_Description_Callback = libqt_string (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Paper_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultEolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_SetEditor_Callback = void (*)(QsciLexerProperties*, QsciScintilla*);
    using QsciLexerProperties_RefreshProperties_Callback = void (*)();
    using QsciLexerProperties_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerProperties_WordCharacters_Callback = const char* (*)();
    using QsciLexerProperties_SetAutoIndentStyle_Callback = void (*)(QsciLexerProperties*, int);
    using QsciLexerProperties_SetColor_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_SetEolFill_Callback = void (*)(QsciLexerProperties*, bool, int);
    using QsciLexerProperties_SetFont_Callback = void (*)(QsciLexerProperties*, QFont*, int);
    using QsciLexerProperties_SetPaper_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_ReadProperties_Callback = bool (*)(QsciLexerProperties*, QSettings*, libqt_string);
    using QsciLexerProperties_WriteProperties_Callback = bool (*)(const QsciLexerProperties*, QSettings*, libqt_string);
    using QsciLexerProperties_Event_Callback = bool (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_EventFilter_Callback = bool (*)(QsciLexerProperties*, QObject*, QEvent*);
    using QsciLexerProperties_TimerEvent_Callback = void (*)(QsciLexerProperties*, QTimerEvent*);
    using QsciLexerProperties_ChildEvent_Callback = void (*)(QsciLexerProperties*, QChildEvent*);
    using QsciLexerProperties_CustomEvent_Callback = void (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_ConnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties_DisconnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties_Sender_Callback = QObject* (*)();
    using QsciLexerProperties_SenderSignalIndex_Callback = int (*)();
    using QsciLexerProperties_Receivers_Callback = int (*)(const QsciLexerProperties*, const char*);
    using QsciLexerProperties_IsSignalConnected_Callback = bool (*)(const QsciLexerProperties*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerProperties_Metacall_Callback qscilexerproperties_metacall_callback = nullptr;
    QsciLexerProperties_SetFoldCompact_Callback qscilexerproperties_setfoldcompact_callback = nullptr;
    QsciLexerProperties_Language_Callback qscilexerproperties_language_callback = nullptr;
    QsciLexerProperties_Lexer_Callback qscilexerproperties_lexer_callback = nullptr;
    QsciLexerProperties_LexerId_Callback qscilexerproperties_lexerid_callback = nullptr;
    QsciLexerProperties_AutoCompletionFillups_Callback qscilexerproperties_autocompletionfillups_callback = nullptr;
    QsciLexerProperties_AutoCompletionWordSeparators_Callback qscilexerproperties_autocompletionwordseparators_callback = nullptr;
    QsciLexerProperties_BlockEnd_Callback qscilexerproperties_blockend_callback = nullptr;
    QsciLexerProperties_BlockLookback_Callback qscilexerproperties_blocklookback_callback = nullptr;
    QsciLexerProperties_BlockStart_Callback qscilexerproperties_blockstart_callback = nullptr;
    QsciLexerProperties_BlockStartKeyword_Callback qscilexerproperties_blockstartkeyword_callback = nullptr;
    QsciLexerProperties_BraceStyle_Callback qscilexerproperties_bracestyle_callback = nullptr;
    QsciLexerProperties_CaseSensitive_Callback qscilexerproperties_casesensitive_callback = nullptr;
    QsciLexerProperties_Color_Callback qscilexerproperties_color_callback = nullptr;
    QsciLexerProperties_EolFill_Callback qscilexerproperties_eolfill_callback = nullptr;
    QsciLexerProperties_Font_Callback qscilexerproperties_font_callback = nullptr;
    QsciLexerProperties_IndentationGuideView_Callback qscilexerproperties_indentationguideview_callback = nullptr;
    QsciLexerProperties_Keywords_Callback qscilexerproperties_keywords_callback = nullptr;
    QsciLexerProperties_DefaultStyle_Callback qscilexerproperties_defaultstyle_callback = nullptr;
    QsciLexerProperties_Description_Callback qscilexerproperties_description_callback = nullptr;
    QsciLexerProperties_Paper_Callback qscilexerproperties_paper_callback = nullptr;
    QsciLexerProperties_DefaultColorWithStyle_Callback qscilexerproperties_defaultcolorwithstyle_callback = nullptr;
    QsciLexerProperties_DefaultEolFill_Callback qscilexerproperties_defaulteolfill_callback = nullptr;
    QsciLexerProperties_DefaultFontWithStyle_Callback qscilexerproperties_defaultfontwithstyle_callback = nullptr;
    QsciLexerProperties_DefaultPaperWithStyle_Callback qscilexerproperties_defaultpaperwithstyle_callback = nullptr;
    QsciLexerProperties_SetEditor_Callback qscilexerproperties_seteditor_callback = nullptr;
    QsciLexerProperties_RefreshProperties_Callback qscilexerproperties_refreshproperties_callback = nullptr;
    QsciLexerProperties_StyleBitsNeeded_Callback qscilexerproperties_stylebitsneeded_callback = nullptr;
    QsciLexerProperties_WordCharacters_Callback qscilexerproperties_wordcharacters_callback = nullptr;
    QsciLexerProperties_SetAutoIndentStyle_Callback qscilexerproperties_setautoindentstyle_callback = nullptr;
    QsciLexerProperties_SetColor_Callback qscilexerproperties_setcolor_callback = nullptr;
    QsciLexerProperties_SetEolFill_Callback qscilexerproperties_seteolfill_callback = nullptr;
    QsciLexerProperties_SetFont_Callback qscilexerproperties_setfont_callback = nullptr;
    QsciLexerProperties_SetPaper_Callback qscilexerproperties_setpaper_callback = nullptr;
    QsciLexerProperties_ReadProperties_Callback qscilexerproperties_readproperties_callback = nullptr;
    QsciLexerProperties_WriteProperties_Callback qscilexerproperties_writeproperties_callback = nullptr;
    QsciLexerProperties_Event_Callback qscilexerproperties_event_callback = nullptr;
    QsciLexerProperties_EventFilter_Callback qscilexerproperties_eventfilter_callback = nullptr;
    QsciLexerProperties_TimerEvent_Callback qscilexerproperties_timerevent_callback = nullptr;
    QsciLexerProperties_ChildEvent_Callback qscilexerproperties_childevent_callback = nullptr;
    QsciLexerProperties_CustomEvent_Callback qscilexerproperties_customevent_callback = nullptr;
    QsciLexerProperties_ConnectNotify_Callback qscilexerproperties_connectnotify_callback = nullptr;
    QsciLexerProperties_DisconnectNotify_Callback qscilexerproperties_disconnectnotify_callback = nullptr;
    QsciLexerProperties_Sender_Callback qscilexerproperties_sender_callback = nullptr;
    QsciLexerProperties_SenderSignalIndex_Callback qscilexerproperties_sendersignalindex_callback = nullptr;
    QsciLexerProperties_Receivers_Callback qscilexerproperties_receivers_callback = nullptr;
    QsciLexerProperties_IsSignalConnected_Callback qscilexerproperties_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerproperties_metacall_isbase = false;
    mutable bool qscilexerproperties_setfoldcompact_isbase = false;
    mutable bool qscilexerproperties_language_isbase = false;
    mutable bool qscilexerproperties_lexer_isbase = false;
    mutable bool qscilexerproperties_lexerid_isbase = false;
    mutable bool qscilexerproperties_autocompletionfillups_isbase = false;
    mutable bool qscilexerproperties_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerproperties_blockend_isbase = false;
    mutable bool qscilexerproperties_blocklookback_isbase = false;
    mutable bool qscilexerproperties_blockstart_isbase = false;
    mutable bool qscilexerproperties_blockstartkeyword_isbase = false;
    mutable bool qscilexerproperties_bracestyle_isbase = false;
    mutable bool qscilexerproperties_casesensitive_isbase = false;
    mutable bool qscilexerproperties_color_isbase = false;
    mutable bool qscilexerproperties_eolfill_isbase = false;
    mutable bool qscilexerproperties_font_isbase = false;
    mutable bool qscilexerproperties_indentationguideview_isbase = false;
    mutable bool qscilexerproperties_keywords_isbase = false;
    mutable bool qscilexerproperties_defaultstyle_isbase = false;
    mutable bool qscilexerproperties_description_isbase = false;
    mutable bool qscilexerproperties_paper_isbase = false;
    mutable bool qscilexerproperties_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerproperties_defaulteolfill_isbase = false;
    mutable bool qscilexerproperties_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerproperties_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerproperties_seteditor_isbase = false;
    mutable bool qscilexerproperties_refreshproperties_isbase = false;
    mutable bool qscilexerproperties_stylebitsneeded_isbase = false;
    mutable bool qscilexerproperties_wordcharacters_isbase = false;
    mutable bool qscilexerproperties_setautoindentstyle_isbase = false;
    mutable bool qscilexerproperties_setcolor_isbase = false;
    mutable bool qscilexerproperties_seteolfill_isbase = false;
    mutable bool qscilexerproperties_setfont_isbase = false;
    mutable bool qscilexerproperties_setpaper_isbase = false;
    mutable bool qscilexerproperties_readproperties_isbase = false;
    mutable bool qscilexerproperties_writeproperties_isbase = false;
    mutable bool qscilexerproperties_event_isbase = false;
    mutable bool qscilexerproperties_eventfilter_isbase = false;
    mutable bool qscilexerproperties_timerevent_isbase = false;
    mutable bool qscilexerproperties_childevent_isbase = false;
    mutable bool qscilexerproperties_customevent_isbase = false;
    mutable bool qscilexerproperties_connectnotify_isbase = false;
    mutable bool qscilexerproperties_disconnectnotify_isbase = false;
    mutable bool qscilexerproperties_sender_isbase = false;
    mutable bool qscilexerproperties_sendersignalindex_isbase = false;
    mutable bool qscilexerproperties_receivers_isbase = false;
    mutable bool qscilexerproperties_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerProperties() : QsciLexerProperties(){};
    VirtualQsciLexerProperties(QObject* parent) : QsciLexerProperties(parent){};

    ~VirtualQsciLexerProperties() {
        qscilexerproperties_metacall_callback = nullptr;
        qscilexerproperties_setfoldcompact_callback = nullptr;
        qscilexerproperties_language_callback = nullptr;
        qscilexerproperties_lexer_callback = nullptr;
        qscilexerproperties_lexerid_callback = nullptr;
        qscilexerproperties_autocompletionfillups_callback = nullptr;
        qscilexerproperties_autocompletionwordseparators_callback = nullptr;
        qscilexerproperties_blockend_callback = nullptr;
        qscilexerproperties_blocklookback_callback = nullptr;
        qscilexerproperties_blockstart_callback = nullptr;
        qscilexerproperties_blockstartkeyword_callback = nullptr;
        qscilexerproperties_bracestyle_callback = nullptr;
        qscilexerproperties_casesensitive_callback = nullptr;
        qscilexerproperties_color_callback = nullptr;
        qscilexerproperties_eolfill_callback = nullptr;
        qscilexerproperties_font_callback = nullptr;
        qscilexerproperties_indentationguideview_callback = nullptr;
        qscilexerproperties_keywords_callback = nullptr;
        qscilexerproperties_defaultstyle_callback = nullptr;
        qscilexerproperties_description_callback = nullptr;
        qscilexerproperties_paper_callback = nullptr;
        qscilexerproperties_defaultcolorwithstyle_callback = nullptr;
        qscilexerproperties_defaulteolfill_callback = nullptr;
        qscilexerproperties_defaultfontwithstyle_callback = nullptr;
        qscilexerproperties_defaultpaperwithstyle_callback = nullptr;
        qscilexerproperties_seteditor_callback = nullptr;
        qscilexerproperties_refreshproperties_callback = nullptr;
        qscilexerproperties_stylebitsneeded_callback = nullptr;
        qscilexerproperties_wordcharacters_callback = nullptr;
        qscilexerproperties_setautoindentstyle_callback = nullptr;
        qscilexerproperties_setcolor_callback = nullptr;
        qscilexerproperties_seteolfill_callback = nullptr;
        qscilexerproperties_setfont_callback = nullptr;
        qscilexerproperties_setpaper_callback = nullptr;
        qscilexerproperties_readproperties_callback = nullptr;
        qscilexerproperties_writeproperties_callback = nullptr;
        qscilexerproperties_event_callback = nullptr;
        qscilexerproperties_eventfilter_callback = nullptr;
        qscilexerproperties_timerevent_callback = nullptr;
        qscilexerproperties_childevent_callback = nullptr;
        qscilexerproperties_customevent_callback = nullptr;
        qscilexerproperties_connectnotify_callback = nullptr;
        qscilexerproperties_disconnectnotify_callback = nullptr;
        qscilexerproperties_sender_callback = nullptr;
        qscilexerproperties_sendersignalindex_callback = nullptr;
        qscilexerproperties_receivers_callback = nullptr;
        qscilexerproperties_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerProperties_Metacall_Callback(QsciLexerProperties_Metacall_Callback cb) { qscilexerproperties_metacall_callback = cb; }
    inline void setQsciLexerProperties_SetFoldCompact_Callback(QsciLexerProperties_SetFoldCompact_Callback cb) { qscilexerproperties_setfoldcompact_callback = cb; }
    inline void setQsciLexerProperties_Language_Callback(QsciLexerProperties_Language_Callback cb) { qscilexerproperties_language_callback = cb; }
    inline void setQsciLexerProperties_Lexer_Callback(QsciLexerProperties_Lexer_Callback cb) { qscilexerproperties_lexer_callback = cb; }
    inline void setQsciLexerProperties_LexerId_Callback(QsciLexerProperties_LexerId_Callback cb) { qscilexerproperties_lexerid_callback = cb; }
    inline void setQsciLexerProperties_AutoCompletionFillups_Callback(QsciLexerProperties_AutoCompletionFillups_Callback cb) { qscilexerproperties_autocompletionfillups_callback = cb; }
    inline void setQsciLexerProperties_AutoCompletionWordSeparators_Callback(QsciLexerProperties_AutoCompletionWordSeparators_Callback cb) { qscilexerproperties_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerProperties_BlockEnd_Callback(QsciLexerProperties_BlockEnd_Callback cb) { qscilexerproperties_blockend_callback = cb; }
    inline void setQsciLexerProperties_BlockLookback_Callback(QsciLexerProperties_BlockLookback_Callback cb) { qscilexerproperties_blocklookback_callback = cb; }
    inline void setQsciLexerProperties_BlockStart_Callback(QsciLexerProperties_BlockStart_Callback cb) { qscilexerproperties_blockstart_callback = cb; }
    inline void setQsciLexerProperties_BlockStartKeyword_Callback(QsciLexerProperties_BlockStartKeyword_Callback cb) { qscilexerproperties_blockstartkeyword_callback = cb; }
    inline void setQsciLexerProperties_BraceStyle_Callback(QsciLexerProperties_BraceStyle_Callback cb) { qscilexerproperties_bracestyle_callback = cb; }
    inline void setQsciLexerProperties_CaseSensitive_Callback(QsciLexerProperties_CaseSensitive_Callback cb) { qscilexerproperties_casesensitive_callback = cb; }
    inline void setQsciLexerProperties_Color_Callback(QsciLexerProperties_Color_Callback cb) { qscilexerproperties_color_callback = cb; }
    inline void setQsciLexerProperties_EolFill_Callback(QsciLexerProperties_EolFill_Callback cb) { qscilexerproperties_eolfill_callback = cb; }
    inline void setQsciLexerProperties_Font_Callback(QsciLexerProperties_Font_Callback cb) { qscilexerproperties_font_callback = cb; }
    inline void setQsciLexerProperties_IndentationGuideView_Callback(QsciLexerProperties_IndentationGuideView_Callback cb) { qscilexerproperties_indentationguideview_callback = cb; }
    inline void setQsciLexerProperties_Keywords_Callback(QsciLexerProperties_Keywords_Callback cb) { qscilexerproperties_keywords_callback = cb; }
    inline void setQsciLexerProperties_DefaultStyle_Callback(QsciLexerProperties_DefaultStyle_Callback cb) { qscilexerproperties_defaultstyle_callback = cb; }
    inline void setQsciLexerProperties_Description_Callback(QsciLexerProperties_Description_Callback cb) { qscilexerproperties_description_callback = cb; }
    inline void setQsciLexerProperties_Paper_Callback(QsciLexerProperties_Paper_Callback cb) { qscilexerproperties_paper_callback = cb; }
    inline void setQsciLexerProperties_DefaultColorWithStyle_Callback(QsciLexerProperties_DefaultColorWithStyle_Callback cb) { qscilexerproperties_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerProperties_DefaultEolFill_Callback(QsciLexerProperties_DefaultEolFill_Callback cb) { qscilexerproperties_defaulteolfill_callback = cb; }
    inline void setQsciLexerProperties_DefaultFontWithStyle_Callback(QsciLexerProperties_DefaultFontWithStyle_Callback cb) { qscilexerproperties_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerProperties_DefaultPaperWithStyle_Callback(QsciLexerProperties_DefaultPaperWithStyle_Callback cb) { qscilexerproperties_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerProperties_SetEditor_Callback(QsciLexerProperties_SetEditor_Callback cb) { qscilexerproperties_seteditor_callback = cb; }
    inline void setQsciLexerProperties_RefreshProperties_Callback(QsciLexerProperties_RefreshProperties_Callback cb) { qscilexerproperties_refreshproperties_callback = cb; }
    inline void setQsciLexerProperties_StyleBitsNeeded_Callback(QsciLexerProperties_StyleBitsNeeded_Callback cb) { qscilexerproperties_stylebitsneeded_callback = cb; }
    inline void setQsciLexerProperties_WordCharacters_Callback(QsciLexerProperties_WordCharacters_Callback cb) { qscilexerproperties_wordcharacters_callback = cb; }
    inline void setQsciLexerProperties_SetAutoIndentStyle_Callback(QsciLexerProperties_SetAutoIndentStyle_Callback cb) { qscilexerproperties_setautoindentstyle_callback = cb; }
    inline void setQsciLexerProperties_SetColor_Callback(QsciLexerProperties_SetColor_Callback cb) { qscilexerproperties_setcolor_callback = cb; }
    inline void setQsciLexerProperties_SetEolFill_Callback(QsciLexerProperties_SetEolFill_Callback cb) { qscilexerproperties_seteolfill_callback = cb; }
    inline void setQsciLexerProperties_SetFont_Callback(QsciLexerProperties_SetFont_Callback cb) { qscilexerproperties_setfont_callback = cb; }
    inline void setQsciLexerProperties_SetPaper_Callback(QsciLexerProperties_SetPaper_Callback cb) { qscilexerproperties_setpaper_callback = cb; }
    inline void setQsciLexerProperties_ReadProperties_Callback(QsciLexerProperties_ReadProperties_Callback cb) { qscilexerproperties_readproperties_callback = cb; }
    inline void setQsciLexerProperties_WriteProperties_Callback(QsciLexerProperties_WriteProperties_Callback cb) { qscilexerproperties_writeproperties_callback = cb; }
    inline void setQsciLexerProperties_Event_Callback(QsciLexerProperties_Event_Callback cb) { qscilexerproperties_event_callback = cb; }
    inline void setQsciLexerProperties_EventFilter_Callback(QsciLexerProperties_EventFilter_Callback cb) { qscilexerproperties_eventfilter_callback = cb; }
    inline void setQsciLexerProperties_TimerEvent_Callback(QsciLexerProperties_TimerEvent_Callback cb) { qscilexerproperties_timerevent_callback = cb; }
    inline void setQsciLexerProperties_ChildEvent_Callback(QsciLexerProperties_ChildEvent_Callback cb) { qscilexerproperties_childevent_callback = cb; }
    inline void setQsciLexerProperties_CustomEvent_Callback(QsciLexerProperties_CustomEvent_Callback cb) { qscilexerproperties_customevent_callback = cb; }
    inline void setQsciLexerProperties_ConnectNotify_Callback(QsciLexerProperties_ConnectNotify_Callback cb) { qscilexerproperties_connectnotify_callback = cb; }
    inline void setQsciLexerProperties_DisconnectNotify_Callback(QsciLexerProperties_DisconnectNotify_Callback cb) { qscilexerproperties_disconnectnotify_callback = cb; }
    inline void setQsciLexerProperties_Sender_Callback(QsciLexerProperties_Sender_Callback cb) { qscilexerproperties_sender_callback = cb; }
    inline void setQsciLexerProperties_SenderSignalIndex_Callback(QsciLexerProperties_SenderSignalIndex_Callback cb) { qscilexerproperties_sendersignalindex_callback = cb; }
    inline void setQsciLexerProperties_Receivers_Callback(QsciLexerProperties_Receivers_Callback cb) { qscilexerproperties_receivers_callback = cb; }
    inline void setQsciLexerProperties_IsSignalConnected_Callback(QsciLexerProperties_IsSignalConnected_Callback cb) { qscilexerproperties_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerProperties_Metacall_IsBase(bool value) const { qscilexerproperties_metacall_isbase = value; }
    inline void setQsciLexerProperties_SetFoldCompact_IsBase(bool value) const { qscilexerproperties_setfoldcompact_isbase = value; }
    inline void setQsciLexerProperties_Language_IsBase(bool value) const { qscilexerproperties_language_isbase = value; }
    inline void setQsciLexerProperties_Lexer_IsBase(bool value) const { qscilexerproperties_lexer_isbase = value; }
    inline void setQsciLexerProperties_LexerId_IsBase(bool value) const { qscilexerproperties_lexerid_isbase = value; }
    inline void setQsciLexerProperties_AutoCompletionFillups_IsBase(bool value) const { qscilexerproperties_autocompletionfillups_isbase = value; }
    inline void setQsciLexerProperties_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerproperties_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerProperties_BlockEnd_IsBase(bool value) const { qscilexerproperties_blockend_isbase = value; }
    inline void setQsciLexerProperties_BlockLookback_IsBase(bool value) const { qscilexerproperties_blocklookback_isbase = value; }
    inline void setQsciLexerProperties_BlockStart_IsBase(bool value) const { qscilexerproperties_blockstart_isbase = value; }
    inline void setQsciLexerProperties_BlockStartKeyword_IsBase(bool value) const { qscilexerproperties_blockstartkeyword_isbase = value; }
    inline void setQsciLexerProperties_BraceStyle_IsBase(bool value) const { qscilexerproperties_bracestyle_isbase = value; }
    inline void setQsciLexerProperties_CaseSensitive_IsBase(bool value) const { qscilexerproperties_casesensitive_isbase = value; }
    inline void setQsciLexerProperties_Color_IsBase(bool value) const { qscilexerproperties_color_isbase = value; }
    inline void setQsciLexerProperties_EolFill_IsBase(bool value) const { qscilexerproperties_eolfill_isbase = value; }
    inline void setQsciLexerProperties_Font_IsBase(bool value) const { qscilexerproperties_font_isbase = value; }
    inline void setQsciLexerProperties_IndentationGuideView_IsBase(bool value) const { qscilexerproperties_indentationguideview_isbase = value; }
    inline void setQsciLexerProperties_Keywords_IsBase(bool value) const { qscilexerproperties_keywords_isbase = value; }
    inline void setQsciLexerProperties_DefaultStyle_IsBase(bool value) const { qscilexerproperties_defaultstyle_isbase = value; }
    inline void setQsciLexerProperties_Description_IsBase(bool value) const { qscilexerproperties_description_isbase = value; }
    inline void setQsciLexerProperties_Paper_IsBase(bool value) const { qscilexerproperties_paper_isbase = value; }
    inline void setQsciLexerProperties_DefaultColorWithStyle_IsBase(bool value) const { qscilexerproperties_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerProperties_DefaultEolFill_IsBase(bool value) const { qscilexerproperties_defaulteolfill_isbase = value; }
    inline void setQsciLexerProperties_DefaultFontWithStyle_IsBase(bool value) const { qscilexerproperties_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerProperties_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerproperties_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerProperties_SetEditor_IsBase(bool value) const { qscilexerproperties_seteditor_isbase = value; }
    inline void setQsciLexerProperties_RefreshProperties_IsBase(bool value) const { qscilexerproperties_refreshproperties_isbase = value; }
    inline void setQsciLexerProperties_StyleBitsNeeded_IsBase(bool value) const { qscilexerproperties_stylebitsneeded_isbase = value; }
    inline void setQsciLexerProperties_WordCharacters_IsBase(bool value) const { qscilexerproperties_wordcharacters_isbase = value; }
    inline void setQsciLexerProperties_SetAutoIndentStyle_IsBase(bool value) const { qscilexerproperties_setautoindentstyle_isbase = value; }
    inline void setQsciLexerProperties_SetColor_IsBase(bool value) const { qscilexerproperties_setcolor_isbase = value; }
    inline void setQsciLexerProperties_SetEolFill_IsBase(bool value) const { qscilexerproperties_seteolfill_isbase = value; }
    inline void setQsciLexerProperties_SetFont_IsBase(bool value) const { qscilexerproperties_setfont_isbase = value; }
    inline void setQsciLexerProperties_SetPaper_IsBase(bool value) const { qscilexerproperties_setpaper_isbase = value; }
    inline void setQsciLexerProperties_ReadProperties_IsBase(bool value) const { qscilexerproperties_readproperties_isbase = value; }
    inline void setQsciLexerProperties_WriteProperties_IsBase(bool value) const { qscilexerproperties_writeproperties_isbase = value; }
    inline void setQsciLexerProperties_Event_IsBase(bool value) const { qscilexerproperties_event_isbase = value; }
    inline void setQsciLexerProperties_EventFilter_IsBase(bool value) const { qscilexerproperties_eventfilter_isbase = value; }
    inline void setQsciLexerProperties_TimerEvent_IsBase(bool value) const { qscilexerproperties_timerevent_isbase = value; }
    inline void setQsciLexerProperties_ChildEvent_IsBase(bool value) const { qscilexerproperties_childevent_isbase = value; }
    inline void setQsciLexerProperties_CustomEvent_IsBase(bool value) const { qscilexerproperties_customevent_isbase = value; }
    inline void setQsciLexerProperties_ConnectNotify_IsBase(bool value) const { qscilexerproperties_connectnotify_isbase = value; }
    inline void setQsciLexerProperties_DisconnectNotify_IsBase(bool value) const { qscilexerproperties_disconnectnotify_isbase = value; }
    inline void setQsciLexerProperties_Sender_IsBase(bool value) const { qscilexerproperties_sender_isbase = value; }
    inline void setQsciLexerProperties_SenderSignalIndex_IsBase(bool value) const { qscilexerproperties_sendersignalindex_isbase = value; }
    inline void setQsciLexerProperties_Receivers_IsBase(bool value) const { qscilexerproperties_receivers_isbase = value; }
    inline void setQsciLexerProperties_IsSignalConnected_IsBase(bool value) const { qscilexerproperties_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerproperties_metacall_isbase) {
            qscilexerproperties_metacall_isbase = false;
            return QsciLexerProperties::qt_metacall(param1, param2, param3);
        } else if (qscilexerproperties_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerproperties_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerproperties_setfoldcompact_isbase) {
            qscilexerproperties_setfoldcompact_isbase = false;
            QsciLexerProperties::setFoldCompact(fold);
        } else if (qscilexerproperties_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerproperties_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerProperties::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerproperties_language_callback != nullptr) {
            const char* callback_ret = qscilexerproperties_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerproperties_lexer_isbase) {
            qscilexerproperties_lexer_isbase = false;
            return QsciLexerProperties::lexer();
        } else if (qscilexerproperties_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerproperties_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerProperties::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerproperties_lexerid_isbase) {
            qscilexerproperties_lexerid_isbase = false;
            return QsciLexerProperties::lexerId();
        } else if (qscilexerproperties_lexerid_callback != nullptr) {
            int callback_ret = qscilexerproperties_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerproperties_autocompletionfillups_isbase) {
            qscilexerproperties_autocompletionfillups_isbase = false;
            return QsciLexerProperties::autoCompletionFillups();
        } else if (qscilexerproperties_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerproperties_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerProperties::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerproperties_autocompletionwordseparators_isbase) {
            qscilexerproperties_autocompletionwordseparators_isbase = false;
            return QsciLexerProperties::autoCompletionWordSeparators();
        } else if (qscilexerproperties_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerproperties_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerProperties::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerproperties_blockend_isbase) {
            qscilexerproperties_blockend_isbase = false;
            return QsciLexerProperties::blockEnd(style);
        } else if (qscilexerproperties_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerproperties_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerproperties_blocklookback_isbase) {
            qscilexerproperties_blocklookback_isbase = false;
            return QsciLexerProperties::blockLookback();
        } else if (qscilexerproperties_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerproperties_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerproperties_blockstart_isbase) {
            qscilexerproperties_blockstart_isbase = false;
            return QsciLexerProperties::blockStart(style);
        } else if (qscilexerproperties_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerproperties_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerproperties_blockstartkeyword_isbase) {
            qscilexerproperties_blockstartkeyword_isbase = false;
            return QsciLexerProperties::blockStartKeyword(style);
        } else if (qscilexerproperties_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerproperties_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerproperties_bracestyle_isbase) {
            qscilexerproperties_bracestyle_isbase = false;
            return QsciLexerProperties::braceStyle();
        } else if (qscilexerproperties_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerproperties_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerproperties_casesensitive_isbase) {
            qscilexerproperties_casesensitive_isbase = false;
            return QsciLexerProperties::caseSensitive();
        } else if (qscilexerproperties_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerproperties_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerProperties::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerproperties_color_isbase) {
            qscilexerproperties_color_isbase = false;
            return QsciLexerProperties::color(style);
        } else if (qscilexerproperties_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerproperties_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerproperties_eolfill_isbase) {
            qscilexerproperties_eolfill_isbase = false;
            return QsciLexerProperties::eolFill(style);
        } else if (qscilexerproperties_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerproperties_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerproperties_font_isbase) {
            qscilexerproperties_font_isbase = false;
            return QsciLexerProperties::font(style);
        } else if (qscilexerproperties_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerproperties_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerproperties_indentationguideview_isbase) {
            qscilexerproperties_indentationguideview_isbase = false;
            return QsciLexerProperties::indentationGuideView();
        } else if (qscilexerproperties_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerproperties_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerproperties_keywords_isbase) {
            qscilexerproperties_keywords_isbase = false;
            return QsciLexerProperties::keywords(set);
        } else if (qscilexerproperties_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerproperties_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerproperties_defaultstyle_isbase) {
            qscilexerproperties_defaultstyle_isbase = false;
            return QsciLexerProperties::defaultStyle();
        } else if (qscilexerproperties_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerproperties_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerproperties_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerproperties_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerproperties_paper_isbase) {
            qscilexerproperties_paper_isbase = false;
            return QsciLexerProperties::paper(style);
        } else if (qscilexerproperties_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerproperties_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerproperties_defaultcolorwithstyle_isbase) {
            qscilexerproperties_defaultcolorwithstyle_isbase = false;
            return QsciLexerProperties::defaultColor(style);
        } else if (qscilexerproperties_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerproperties_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerproperties_defaulteolfill_isbase) {
            qscilexerproperties_defaulteolfill_isbase = false;
            return QsciLexerProperties::defaultEolFill(style);
        } else if (qscilexerproperties_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerproperties_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerproperties_defaultfontwithstyle_isbase) {
            qscilexerproperties_defaultfontwithstyle_isbase = false;
            return QsciLexerProperties::defaultFont(style);
        } else if (qscilexerproperties_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerproperties_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerproperties_defaultpaperwithstyle_isbase) {
            qscilexerproperties_defaultpaperwithstyle_isbase = false;
            return QsciLexerProperties::defaultPaper(style);
        } else if (qscilexerproperties_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerproperties_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerProperties::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerproperties_seteditor_isbase) {
            qscilexerproperties_seteditor_isbase = false;
            QsciLexerProperties::setEditor(editor);
        } else if (qscilexerproperties_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerproperties_seteditor_callback(this, cbval1);
        } else {
            QsciLexerProperties::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerproperties_refreshproperties_isbase) {
            qscilexerproperties_refreshproperties_isbase = false;
            QsciLexerProperties::refreshProperties();
        } else if (qscilexerproperties_refreshproperties_callback != nullptr) {
            qscilexerproperties_refreshproperties_callback();
        } else {
            QsciLexerProperties::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerproperties_stylebitsneeded_isbase) {
            qscilexerproperties_stylebitsneeded_isbase = false;
            return QsciLexerProperties::styleBitsNeeded();
        } else if (qscilexerproperties_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerproperties_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerproperties_wordcharacters_isbase) {
            qscilexerproperties_wordcharacters_isbase = false;
            return QsciLexerProperties::wordCharacters();
        } else if (qscilexerproperties_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerproperties_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerProperties::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerproperties_setautoindentstyle_isbase) {
            qscilexerproperties_setautoindentstyle_isbase = false;
            QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerproperties_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerproperties_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerproperties_setcolor_isbase) {
            qscilexerproperties_setcolor_isbase = false;
            QsciLexerProperties::setColor(c, style);
        } else if (qscilexerproperties_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerproperties_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerProperties::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerproperties_seteolfill_isbase) {
            qscilexerproperties_seteolfill_isbase = false;
            QsciLexerProperties::setEolFill(eoffill, style);
        } else if (qscilexerproperties_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerproperties_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerProperties::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerproperties_setfont_isbase) {
            qscilexerproperties_setfont_isbase = false;
            QsciLexerProperties::setFont(f, style);
        } else if (qscilexerproperties_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerproperties_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerProperties::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerproperties_setpaper_isbase) {
            qscilexerproperties_setpaper_isbase = false;
            QsciLexerProperties::setPaper(c, style);
        } else if (qscilexerproperties_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerproperties_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerProperties::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerproperties_readproperties_isbase) {
            qscilexerproperties_readproperties_isbase = false;
            return QsciLexerProperties::readProperties(qs, prefix);
        } else if (qscilexerproperties_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerproperties_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerProperties::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerproperties_writeproperties_isbase) {
            qscilexerproperties_writeproperties_isbase = false;
            return QsciLexerProperties::writeProperties(qs, prefix);
        } else if (qscilexerproperties_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerproperties_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerProperties::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerproperties_event_isbase) {
            qscilexerproperties_event_isbase = false;
            return QsciLexerProperties::event(event);
        } else if (qscilexerproperties_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerproperties_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerproperties_eventfilter_isbase) {
            qscilexerproperties_eventfilter_isbase = false;
            return QsciLexerProperties::eventFilter(watched, event);
        } else if (qscilexerproperties_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerproperties_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerProperties::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerproperties_timerevent_isbase) {
            qscilexerproperties_timerevent_isbase = false;
            QsciLexerProperties::timerEvent(event);
        } else if (qscilexerproperties_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerproperties_timerevent_callback(this, cbval1);
        } else {
            QsciLexerProperties::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerproperties_childevent_isbase) {
            qscilexerproperties_childevent_isbase = false;
            QsciLexerProperties::childEvent(event);
        } else if (qscilexerproperties_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerproperties_childevent_callback(this, cbval1);
        } else {
            QsciLexerProperties::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerproperties_customevent_isbase) {
            qscilexerproperties_customevent_isbase = false;
            QsciLexerProperties::customEvent(event);
        } else if (qscilexerproperties_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerproperties_customevent_callback(this, cbval1);
        } else {
            QsciLexerProperties::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_connectnotify_isbase) {
            qscilexerproperties_connectnotify_isbase = false;
            QsciLexerProperties::connectNotify(signal);
        } else if (qscilexerproperties_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerproperties_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerProperties::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_disconnectnotify_isbase) {
            qscilexerproperties_disconnectnotify_isbase = false;
            QsciLexerProperties::disconnectNotify(signal);
        } else if (qscilexerproperties_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerproperties_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerProperties::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerproperties_sender_isbase) {
            qscilexerproperties_sender_isbase = false;
            return QsciLexerProperties::sender();
        } else if (qscilexerproperties_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerproperties_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerProperties::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerproperties_sendersignalindex_isbase) {
            qscilexerproperties_sendersignalindex_isbase = false;
            return QsciLexerProperties::senderSignalIndex();
        } else if (qscilexerproperties_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerproperties_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerproperties_receivers_isbase) {
            qscilexerproperties_receivers_isbase = false;
            return QsciLexerProperties::receivers(signal);
        } else if (qscilexerproperties_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerproperties_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerProperties::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerproperties_issignalconnected_isbase) {
            qscilexerproperties_issignalconnected_isbase = false;
            return QsciLexerProperties::isSignalConnected(signal);
        } else if (qscilexerproperties_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerproperties_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerProperties::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerProperties_ReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_QBaseReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_WriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_QBaseWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerProperties_TimerEvent(QsciLexerProperties* self, QTimerEvent* event);
    friend void QsciLexerProperties_QBaseTimerEvent(QsciLexerProperties* self, QTimerEvent* event);
    friend void QsciLexerProperties_ChildEvent(QsciLexerProperties* self, QChildEvent* event);
    friend void QsciLexerProperties_QBaseChildEvent(QsciLexerProperties* self, QChildEvent* event);
    friend void QsciLexerProperties_CustomEvent(QsciLexerProperties* self, QEvent* event);
    friend void QsciLexerProperties_QBaseCustomEvent(QsciLexerProperties* self, QEvent* event);
    friend void QsciLexerProperties_ConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_QBaseConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_DisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_QBaseDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend QObject* QsciLexerProperties_Sender(const QsciLexerProperties* self);
    friend QObject* QsciLexerProperties_QBaseSender(const QsciLexerProperties* self);
    friend int QsciLexerProperties_SenderSignalIndex(const QsciLexerProperties* self);
    friend int QsciLexerProperties_QBaseSenderSignalIndex(const QsciLexerProperties* self);
    friend int QsciLexerProperties_Receivers(const QsciLexerProperties* self, const char* signal);
    friend int QsciLexerProperties_QBaseReceivers(const QsciLexerProperties* self, const char* signal);
    friend bool QsciLexerProperties_IsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
    friend bool QsciLexerProperties_QBaseIsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal);
};

#endif
