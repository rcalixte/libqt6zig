#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCMAKE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCMAKE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCMake so that we can call protected methods
class VirtualQsciLexerCMake final : public QsciLexerCMake {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCMake = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCMake_Metacall_Callback = int (*)(QsciLexerCMake*, int, int, void**);
    using QsciLexerCMake_SetFoldAtElse_Callback = void (*)(QsciLexerCMake*, bool);
    using QsciLexerCMake_Language_Callback = const char* (*)();
    using QsciLexerCMake_Lexer_Callback = const char* (*)();
    using QsciLexerCMake_LexerId_Callback = int (*)();
    using QsciLexerCMake_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCMake_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerCMake_BlockEnd_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BlockLookback_Callback = int (*)();
    using QsciLexerCMake_BlockStart_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BraceStyle_Callback = int (*)();
    using QsciLexerCMake_CaseSensitive_Callback = bool (*)();
    using QsciLexerCMake_Color_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_EolFill_Callback = bool (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_Font_Callback = QFont* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_IndentationGuideView_Callback = int (*)();
    using QsciLexerCMake_Keywords_Callback = const char* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultStyle_Callback = int (*)();
    using QsciLexerCMake_Description_Callback = libqt_string (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_Paper_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultEolFill_Callback = bool (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_SetEditor_Callback = void (*)(QsciLexerCMake*, QsciScintilla*);
    using QsciLexerCMake_RefreshProperties_Callback = void (*)();
    using QsciLexerCMake_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCMake_WordCharacters_Callback = const char* (*)();
    using QsciLexerCMake_SetAutoIndentStyle_Callback = void (*)(QsciLexerCMake*, int);
    using QsciLexerCMake_SetColor_Callback = void (*)(QsciLexerCMake*, QColor*, int);
    using QsciLexerCMake_SetEolFill_Callback = void (*)(QsciLexerCMake*, bool, int);
    using QsciLexerCMake_SetFont_Callback = void (*)(QsciLexerCMake*, QFont*, int);
    using QsciLexerCMake_SetPaper_Callback = void (*)(QsciLexerCMake*, QColor*, int);
    using QsciLexerCMake_ReadProperties_Callback = bool (*)(QsciLexerCMake*, QSettings*, libqt_string);
    using QsciLexerCMake_WriteProperties_Callback = bool (*)(const QsciLexerCMake*, QSettings*, libqt_string);
    using QsciLexerCMake_Event_Callback = bool (*)(QsciLexerCMake*, QEvent*);
    using QsciLexerCMake_EventFilter_Callback = bool (*)(QsciLexerCMake*, QObject*, QEvent*);
    using QsciLexerCMake_TimerEvent_Callback = void (*)(QsciLexerCMake*, QTimerEvent*);
    using QsciLexerCMake_ChildEvent_Callback = void (*)(QsciLexerCMake*, QChildEvent*);
    using QsciLexerCMake_CustomEvent_Callback = void (*)(QsciLexerCMake*, QEvent*);
    using QsciLexerCMake_ConnectNotify_Callback = void (*)(QsciLexerCMake*, QMetaMethod*);
    using QsciLexerCMake_DisconnectNotify_Callback = void (*)(QsciLexerCMake*, QMetaMethod*);
    using QsciLexerCMake_Sender_Callback = QObject* (*)();
    using QsciLexerCMake_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCMake_Receivers_Callback = int (*)(const QsciLexerCMake*, const char*);
    using QsciLexerCMake_IsSignalConnected_Callback = bool (*)(const QsciLexerCMake*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCMake_Metacall_Callback qscilexercmake_metacall_callback = nullptr;
    QsciLexerCMake_SetFoldAtElse_Callback qscilexercmake_setfoldatelse_callback = nullptr;
    QsciLexerCMake_Language_Callback qscilexercmake_language_callback = nullptr;
    QsciLexerCMake_Lexer_Callback qscilexercmake_lexer_callback = nullptr;
    QsciLexerCMake_LexerId_Callback qscilexercmake_lexerid_callback = nullptr;
    QsciLexerCMake_AutoCompletionFillups_Callback qscilexercmake_autocompletionfillups_callback = nullptr;
    QsciLexerCMake_AutoCompletionWordSeparators_Callback qscilexercmake_autocompletionwordseparators_callback = nullptr;
    QsciLexerCMake_BlockEnd_Callback qscilexercmake_blockend_callback = nullptr;
    QsciLexerCMake_BlockLookback_Callback qscilexercmake_blocklookback_callback = nullptr;
    QsciLexerCMake_BlockStart_Callback qscilexercmake_blockstart_callback = nullptr;
    QsciLexerCMake_BlockStartKeyword_Callback qscilexercmake_blockstartkeyword_callback = nullptr;
    QsciLexerCMake_BraceStyle_Callback qscilexercmake_bracestyle_callback = nullptr;
    QsciLexerCMake_CaseSensitive_Callback qscilexercmake_casesensitive_callback = nullptr;
    QsciLexerCMake_Color_Callback qscilexercmake_color_callback = nullptr;
    QsciLexerCMake_EolFill_Callback qscilexercmake_eolfill_callback = nullptr;
    QsciLexerCMake_Font_Callback qscilexercmake_font_callback = nullptr;
    QsciLexerCMake_IndentationGuideView_Callback qscilexercmake_indentationguideview_callback = nullptr;
    QsciLexerCMake_Keywords_Callback qscilexercmake_keywords_callback = nullptr;
    QsciLexerCMake_DefaultStyle_Callback qscilexercmake_defaultstyle_callback = nullptr;
    QsciLexerCMake_Description_Callback qscilexercmake_description_callback = nullptr;
    QsciLexerCMake_Paper_Callback qscilexercmake_paper_callback = nullptr;
    QsciLexerCMake_DefaultColorWithStyle_Callback qscilexercmake_defaultcolorwithstyle_callback = nullptr;
    QsciLexerCMake_DefaultEolFill_Callback qscilexercmake_defaulteolfill_callback = nullptr;
    QsciLexerCMake_DefaultFontWithStyle_Callback qscilexercmake_defaultfontwithstyle_callback = nullptr;
    QsciLexerCMake_DefaultPaperWithStyle_Callback qscilexercmake_defaultpaperwithstyle_callback = nullptr;
    QsciLexerCMake_SetEditor_Callback qscilexercmake_seteditor_callback = nullptr;
    QsciLexerCMake_RefreshProperties_Callback qscilexercmake_refreshproperties_callback = nullptr;
    QsciLexerCMake_StyleBitsNeeded_Callback qscilexercmake_stylebitsneeded_callback = nullptr;
    QsciLexerCMake_WordCharacters_Callback qscilexercmake_wordcharacters_callback = nullptr;
    QsciLexerCMake_SetAutoIndentStyle_Callback qscilexercmake_setautoindentstyle_callback = nullptr;
    QsciLexerCMake_SetColor_Callback qscilexercmake_setcolor_callback = nullptr;
    QsciLexerCMake_SetEolFill_Callback qscilexercmake_seteolfill_callback = nullptr;
    QsciLexerCMake_SetFont_Callback qscilexercmake_setfont_callback = nullptr;
    QsciLexerCMake_SetPaper_Callback qscilexercmake_setpaper_callback = nullptr;
    QsciLexerCMake_ReadProperties_Callback qscilexercmake_readproperties_callback = nullptr;
    QsciLexerCMake_WriteProperties_Callback qscilexercmake_writeproperties_callback = nullptr;
    QsciLexerCMake_Event_Callback qscilexercmake_event_callback = nullptr;
    QsciLexerCMake_EventFilter_Callback qscilexercmake_eventfilter_callback = nullptr;
    QsciLexerCMake_TimerEvent_Callback qscilexercmake_timerevent_callback = nullptr;
    QsciLexerCMake_ChildEvent_Callback qscilexercmake_childevent_callback = nullptr;
    QsciLexerCMake_CustomEvent_Callback qscilexercmake_customevent_callback = nullptr;
    QsciLexerCMake_ConnectNotify_Callback qscilexercmake_connectnotify_callback = nullptr;
    QsciLexerCMake_DisconnectNotify_Callback qscilexercmake_disconnectnotify_callback = nullptr;
    QsciLexerCMake_Sender_Callback qscilexercmake_sender_callback = nullptr;
    QsciLexerCMake_SenderSignalIndex_Callback qscilexercmake_sendersignalindex_callback = nullptr;
    QsciLexerCMake_Receivers_Callback qscilexercmake_receivers_callback = nullptr;
    QsciLexerCMake_IsSignalConnected_Callback qscilexercmake_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercmake_metacall_isbase = false;
    mutable bool qscilexercmake_setfoldatelse_isbase = false;
    mutable bool qscilexercmake_language_isbase = false;
    mutable bool qscilexercmake_lexer_isbase = false;
    mutable bool qscilexercmake_lexerid_isbase = false;
    mutable bool qscilexercmake_autocompletionfillups_isbase = false;
    mutable bool qscilexercmake_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercmake_blockend_isbase = false;
    mutable bool qscilexercmake_blocklookback_isbase = false;
    mutable bool qscilexercmake_blockstart_isbase = false;
    mutable bool qscilexercmake_blockstartkeyword_isbase = false;
    mutable bool qscilexercmake_bracestyle_isbase = false;
    mutable bool qscilexercmake_casesensitive_isbase = false;
    mutable bool qscilexercmake_color_isbase = false;
    mutable bool qscilexercmake_eolfill_isbase = false;
    mutable bool qscilexercmake_font_isbase = false;
    mutable bool qscilexercmake_indentationguideview_isbase = false;
    mutable bool qscilexercmake_keywords_isbase = false;
    mutable bool qscilexercmake_defaultstyle_isbase = false;
    mutable bool qscilexercmake_description_isbase = false;
    mutable bool qscilexercmake_paper_isbase = false;
    mutable bool qscilexercmake_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexercmake_defaulteolfill_isbase = false;
    mutable bool qscilexercmake_defaultfontwithstyle_isbase = false;
    mutable bool qscilexercmake_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexercmake_seteditor_isbase = false;
    mutable bool qscilexercmake_refreshproperties_isbase = false;
    mutable bool qscilexercmake_stylebitsneeded_isbase = false;
    mutable bool qscilexercmake_wordcharacters_isbase = false;
    mutable bool qscilexercmake_setautoindentstyle_isbase = false;
    mutable bool qscilexercmake_setcolor_isbase = false;
    mutable bool qscilexercmake_seteolfill_isbase = false;
    mutable bool qscilexercmake_setfont_isbase = false;
    mutable bool qscilexercmake_setpaper_isbase = false;
    mutable bool qscilexercmake_readproperties_isbase = false;
    mutable bool qscilexercmake_writeproperties_isbase = false;
    mutable bool qscilexercmake_event_isbase = false;
    mutable bool qscilexercmake_eventfilter_isbase = false;
    mutable bool qscilexercmake_timerevent_isbase = false;
    mutable bool qscilexercmake_childevent_isbase = false;
    mutable bool qscilexercmake_customevent_isbase = false;
    mutable bool qscilexercmake_connectnotify_isbase = false;
    mutable bool qscilexercmake_disconnectnotify_isbase = false;
    mutable bool qscilexercmake_sender_isbase = false;
    mutable bool qscilexercmake_sendersignalindex_isbase = false;
    mutable bool qscilexercmake_receivers_isbase = false;
    mutable bool qscilexercmake_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCMake() : QsciLexerCMake(){};
    VirtualQsciLexerCMake(QObject* parent) : QsciLexerCMake(parent){};

    ~VirtualQsciLexerCMake() {
        qscilexercmake_metacall_callback = nullptr;
        qscilexercmake_setfoldatelse_callback = nullptr;
        qscilexercmake_language_callback = nullptr;
        qscilexercmake_lexer_callback = nullptr;
        qscilexercmake_lexerid_callback = nullptr;
        qscilexercmake_autocompletionfillups_callback = nullptr;
        qscilexercmake_autocompletionwordseparators_callback = nullptr;
        qscilexercmake_blockend_callback = nullptr;
        qscilexercmake_blocklookback_callback = nullptr;
        qscilexercmake_blockstart_callback = nullptr;
        qscilexercmake_blockstartkeyword_callback = nullptr;
        qscilexercmake_bracestyle_callback = nullptr;
        qscilexercmake_casesensitive_callback = nullptr;
        qscilexercmake_color_callback = nullptr;
        qscilexercmake_eolfill_callback = nullptr;
        qscilexercmake_font_callback = nullptr;
        qscilexercmake_indentationguideview_callback = nullptr;
        qscilexercmake_keywords_callback = nullptr;
        qscilexercmake_defaultstyle_callback = nullptr;
        qscilexercmake_description_callback = nullptr;
        qscilexercmake_paper_callback = nullptr;
        qscilexercmake_defaultcolorwithstyle_callback = nullptr;
        qscilexercmake_defaulteolfill_callback = nullptr;
        qscilexercmake_defaultfontwithstyle_callback = nullptr;
        qscilexercmake_defaultpaperwithstyle_callback = nullptr;
        qscilexercmake_seteditor_callback = nullptr;
        qscilexercmake_refreshproperties_callback = nullptr;
        qscilexercmake_stylebitsneeded_callback = nullptr;
        qscilexercmake_wordcharacters_callback = nullptr;
        qscilexercmake_setautoindentstyle_callback = nullptr;
        qscilexercmake_setcolor_callback = nullptr;
        qscilexercmake_seteolfill_callback = nullptr;
        qscilexercmake_setfont_callback = nullptr;
        qscilexercmake_setpaper_callback = nullptr;
        qscilexercmake_readproperties_callback = nullptr;
        qscilexercmake_writeproperties_callback = nullptr;
        qscilexercmake_event_callback = nullptr;
        qscilexercmake_eventfilter_callback = nullptr;
        qscilexercmake_timerevent_callback = nullptr;
        qscilexercmake_childevent_callback = nullptr;
        qscilexercmake_customevent_callback = nullptr;
        qscilexercmake_connectnotify_callback = nullptr;
        qscilexercmake_disconnectnotify_callback = nullptr;
        qscilexercmake_sender_callback = nullptr;
        qscilexercmake_sendersignalindex_callback = nullptr;
        qscilexercmake_receivers_callback = nullptr;
        qscilexercmake_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerCMake_Metacall_Callback(QsciLexerCMake_Metacall_Callback cb) { qscilexercmake_metacall_callback = cb; }
    inline void setQsciLexerCMake_SetFoldAtElse_Callback(QsciLexerCMake_SetFoldAtElse_Callback cb) { qscilexercmake_setfoldatelse_callback = cb; }
    inline void setQsciLexerCMake_Language_Callback(QsciLexerCMake_Language_Callback cb) { qscilexercmake_language_callback = cb; }
    inline void setQsciLexerCMake_Lexer_Callback(QsciLexerCMake_Lexer_Callback cb) { qscilexercmake_lexer_callback = cb; }
    inline void setQsciLexerCMake_LexerId_Callback(QsciLexerCMake_LexerId_Callback cb) { qscilexercmake_lexerid_callback = cb; }
    inline void setQsciLexerCMake_AutoCompletionFillups_Callback(QsciLexerCMake_AutoCompletionFillups_Callback cb) { qscilexercmake_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCMake_AutoCompletionWordSeparators_Callback(QsciLexerCMake_AutoCompletionWordSeparators_Callback cb) { qscilexercmake_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCMake_BlockEnd_Callback(QsciLexerCMake_BlockEnd_Callback cb) { qscilexercmake_blockend_callback = cb; }
    inline void setQsciLexerCMake_BlockLookback_Callback(QsciLexerCMake_BlockLookback_Callback cb) { qscilexercmake_blocklookback_callback = cb; }
    inline void setQsciLexerCMake_BlockStart_Callback(QsciLexerCMake_BlockStart_Callback cb) { qscilexercmake_blockstart_callback = cb; }
    inline void setQsciLexerCMake_BlockStartKeyword_Callback(QsciLexerCMake_BlockStartKeyword_Callback cb) { qscilexercmake_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCMake_BraceStyle_Callback(QsciLexerCMake_BraceStyle_Callback cb) { qscilexercmake_bracestyle_callback = cb; }
    inline void setQsciLexerCMake_CaseSensitive_Callback(QsciLexerCMake_CaseSensitive_Callback cb) { qscilexercmake_casesensitive_callback = cb; }
    inline void setQsciLexerCMake_Color_Callback(QsciLexerCMake_Color_Callback cb) { qscilexercmake_color_callback = cb; }
    inline void setQsciLexerCMake_EolFill_Callback(QsciLexerCMake_EolFill_Callback cb) { qscilexercmake_eolfill_callback = cb; }
    inline void setQsciLexerCMake_Font_Callback(QsciLexerCMake_Font_Callback cb) { qscilexercmake_font_callback = cb; }
    inline void setQsciLexerCMake_IndentationGuideView_Callback(QsciLexerCMake_IndentationGuideView_Callback cb) { qscilexercmake_indentationguideview_callback = cb; }
    inline void setQsciLexerCMake_Keywords_Callback(QsciLexerCMake_Keywords_Callback cb) { qscilexercmake_keywords_callback = cb; }
    inline void setQsciLexerCMake_DefaultStyle_Callback(QsciLexerCMake_DefaultStyle_Callback cb) { qscilexercmake_defaultstyle_callback = cb; }
    inline void setQsciLexerCMake_Description_Callback(QsciLexerCMake_Description_Callback cb) { qscilexercmake_description_callback = cb; }
    inline void setQsciLexerCMake_Paper_Callback(QsciLexerCMake_Paper_Callback cb) { qscilexercmake_paper_callback = cb; }
    inline void setQsciLexerCMake_DefaultColorWithStyle_Callback(QsciLexerCMake_DefaultColorWithStyle_Callback cb) { qscilexercmake_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerCMake_DefaultEolFill_Callback(QsciLexerCMake_DefaultEolFill_Callback cb) { qscilexercmake_defaulteolfill_callback = cb; }
    inline void setQsciLexerCMake_DefaultFontWithStyle_Callback(QsciLexerCMake_DefaultFontWithStyle_Callback cb) { qscilexercmake_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerCMake_DefaultPaperWithStyle_Callback(QsciLexerCMake_DefaultPaperWithStyle_Callback cb) { qscilexercmake_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerCMake_SetEditor_Callback(QsciLexerCMake_SetEditor_Callback cb) { qscilexercmake_seteditor_callback = cb; }
    inline void setQsciLexerCMake_RefreshProperties_Callback(QsciLexerCMake_RefreshProperties_Callback cb) { qscilexercmake_refreshproperties_callback = cb; }
    inline void setQsciLexerCMake_StyleBitsNeeded_Callback(QsciLexerCMake_StyleBitsNeeded_Callback cb) { qscilexercmake_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCMake_WordCharacters_Callback(QsciLexerCMake_WordCharacters_Callback cb) { qscilexercmake_wordcharacters_callback = cb; }
    inline void setQsciLexerCMake_SetAutoIndentStyle_Callback(QsciLexerCMake_SetAutoIndentStyle_Callback cb) { qscilexercmake_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCMake_SetColor_Callback(QsciLexerCMake_SetColor_Callback cb) { qscilexercmake_setcolor_callback = cb; }
    inline void setQsciLexerCMake_SetEolFill_Callback(QsciLexerCMake_SetEolFill_Callback cb) { qscilexercmake_seteolfill_callback = cb; }
    inline void setQsciLexerCMake_SetFont_Callback(QsciLexerCMake_SetFont_Callback cb) { qscilexercmake_setfont_callback = cb; }
    inline void setQsciLexerCMake_SetPaper_Callback(QsciLexerCMake_SetPaper_Callback cb) { qscilexercmake_setpaper_callback = cb; }
    inline void setQsciLexerCMake_ReadProperties_Callback(QsciLexerCMake_ReadProperties_Callback cb) { qscilexercmake_readproperties_callback = cb; }
    inline void setQsciLexerCMake_WriteProperties_Callback(QsciLexerCMake_WriteProperties_Callback cb) { qscilexercmake_writeproperties_callback = cb; }
    inline void setQsciLexerCMake_Event_Callback(QsciLexerCMake_Event_Callback cb) { qscilexercmake_event_callback = cb; }
    inline void setQsciLexerCMake_EventFilter_Callback(QsciLexerCMake_EventFilter_Callback cb) { qscilexercmake_eventfilter_callback = cb; }
    inline void setQsciLexerCMake_TimerEvent_Callback(QsciLexerCMake_TimerEvent_Callback cb) { qscilexercmake_timerevent_callback = cb; }
    inline void setQsciLexerCMake_ChildEvent_Callback(QsciLexerCMake_ChildEvent_Callback cb) { qscilexercmake_childevent_callback = cb; }
    inline void setQsciLexerCMake_CustomEvent_Callback(QsciLexerCMake_CustomEvent_Callback cb) { qscilexercmake_customevent_callback = cb; }
    inline void setQsciLexerCMake_ConnectNotify_Callback(QsciLexerCMake_ConnectNotify_Callback cb) { qscilexercmake_connectnotify_callback = cb; }
    inline void setQsciLexerCMake_DisconnectNotify_Callback(QsciLexerCMake_DisconnectNotify_Callback cb) { qscilexercmake_disconnectnotify_callback = cb; }
    inline void setQsciLexerCMake_Sender_Callback(QsciLexerCMake_Sender_Callback cb) { qscilexercmake_sender_callback = cb; }
    inline void setQsciLexerCMake_SenderSignalIndex_Callback(QsciLexerCMake_SenderSignalIndex_Callback cb) { qscilexercmake_sendersignalindex_callback = cb; }
    inline void setQsciLexerCMake_Receivers_Callback(QsciLexerCMake_Receivers_Callback cb) { qscilexercmake_receivers_callback = cb; }
    inline void setQsciLexerCMake_IsSignalConnected_Callback(QsciLexerCMake_IsSignalConnected_Callback cb) { qscilexercmake_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCMake_Metacall_IsBase(bool value) const { qscilexercmake_metacall_isbase = value; }
    inline void setQsciLexerCMake_SetFoldAtElse_IsBase(bool value) const { qscilexercmake_setfoldatelse_isbase = value; }
    inline void setQsciLexerCMake_Language_IsBase(bool value) const { qscilexercmake_language_isbase = value; }
    inline void setQsciLexerCMake_Lexer_IsBase(bool value) const { qscilexercmake_lexer_isbase = value; }
    inline void setQsciLexerCMake_LexerId_IsBase(bool value) const { qscilexercmake_lexerid_isbase = value; }
    inline void setQsciLexerCMake_AutoCompletionFillups_IsBase(bool value) const { qscilexercmake_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCMake_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercmake_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCMake_BlockEnd_IsBase(bool value) const { qscilexercmake_blockend_isbase = value; }
    inline void setQsciLexerCMake_BlockLookback_IsBase(bool value) const { qscilexercmake_blocklookback_isbase = value; }
    inline void setQsciLexerCMake_BlockStart_IsBase(bool value) const { qscilexercmake_blockstart_isbase = value; }
    inline void setQsciLexerCMake_BlockStartKeyword_IsBase(bool value) const { qscilexercmake_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCMake_BraceStyle_IsBase(bool value) const { qscilexercmake_bracestyle_isbase = value; }
    inline void setQsciLexerCMake_CaseSensitive_IsBase(bool value) const { qscilexercmake_casesensitive_isbase = value; }
    inline void setQsciLexerCMake_Color_IsBase(bool value) const { qscilexercmake_color_isbase = value; }
    inline void setQsciLexerCMake_EolFill_IsBase(bool value) const { qscilexercmake_eolfill_isbase = value; }
    inline void setQsciLexerCMake_Font_IsBase(bool value) const { qscilexercmake_font_isbase = value; }
    inline void setQsciLexerCMake_IndentationGuideView_IsBase(bool value) const { qscilexercmake_indentationguideview_isbase = value; }
    inline void setQsciLexerCMake_Keywords_IsBase(bool value) const { qscilexercmake_keywords_isbase = value; }
    inline void setQsciLexerCMake_DefaultStyle_IsBase(bool value) const { qscilexercmake_defaultstyle_isbase = value; }
    inline void setQsciLexerCMake_Description_IsBase(bool value) const { qscilexercmake_description_isbase = value; }
    inline void setQsciLexerCMake_Paper_IsBase(bool value) const { qscilexercmake_paper_isbase = value; }
    inline void setQsciLexerCMake_DefaultColorWithStyle_IsBase(bool value) const { qscilexercmake_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerCMake_DefaultEolFill_IsBase(bool value) const { qscilexercmake_defaulteolfill_isbase = value; }
    inline void setQsciLexerCMake_DefaultFontWithStyle_IsBase(bool value) const { qscilexercmake_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerCMake_DefaultPaperWithStyle_IsBase(bool value) const { qscilexercmake_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerCMake_SetEditor_IsBase(bool value) const { qscilexercmake_seteditor_isbase = value; }
    inline void setQsciLexerCMake_RefreshProperties_IsBase(bool value) const { qscilexercmake_refreshproperties_isbase = value; }
    inline void setQsciLexerCMake_StyleBitsNeeded_IsBase(bool value) const { qscilexercmake_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCMake_WordCharacters_IsBase(bool value) const { qscilexercmake_wordcharacters_isbase = value; }
    inline void setQsciLexerCMake_SetAutoIndentStyle_IsBase(bool value) const { qscilexercmake_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCMake_SetColor_IsBase(bool value) const { qscilexercmake_setcolor_isbase = value; }
    inline void setQsciLexerCMake_SetEolFill_IsBase(bool value) const { qscilexercmake_seteolfill_isbase = value; }
    inline void setQsciLexerCMake_SetFont_IsBase(bool value) const { qscilexercmake_setfont_isbase = value; }
    inline void setQsciLexerCMake_SetPaper_IsBase(bool value) const { qscilexercmake_setpaper_isbase = value; }
    inline void setQsciLexerCMake_ReadProperties_IsBase(bool value) const { qscilexercmake_readproperties_isbase = value; }
    inline void setQsciLexerCMake_WriteProperties_IsBase(bool value) const { qscilexercmake_writeproperties_isbase = value; }
    inline void setQsciLexerCMake_Event_IsBase(bool value) const { qscilexercmake_event_isbase = value; }
    inline void setQsciLexerCMake_EventFilter_IsBase(bool value) const { qscilexercmake_eventfilter_isbase = value; }
    inline void setQsciLexerCMake_TimerEvent_IsBase(bool value) const { qscilexercmake_timerevent_isbase = value; }
    inline void setQsciLexerCMake_ChildEvent_IsBase(bool value) const { qscilexercmake_childevent_isbase = value; }
    inline void setQsciLexerCMake_CustomEvent_IsBase(bool value) const { qscilexercmake_customevent_isbase = value; }
    inline void setQsciLexerCMake_ConnectNotify_IsBase(bool value) const { qscilexercmake_connectnotify_isbase = value; }
    inline void setQsciLexerCMake_DisconnectNotify_IsBase(bool value) const { qscilexercmake_disconnectnotify_isbase = value; }
    inline void setQsciLexerCMake_Sender_IsBase(bool value) const { qscilexercmake_sender_isbase = value; }
    inline void setQsciLexerCMake_SenderSignalIndex_IsBase(bool value) const { qscilexercmake_sendersignalindex_isbase = value; }
    inline void setQsciLexerCMake_Receivers_IsBase(bool value) const { qscilexercmake_receivers_isbase = value; }
    inline void setQsciLexerCMake_IsSignalConnected_IsBase(bool value) const { qscilexercmake_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercmake_metacall_isbase) {
            qscilexercmake_metacall_isbase = false;
            return QsciLexerCMake::qt_metacall(param1, param2, param3);
        } else if (qscilexercmake_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexercmake_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercmake_setfoldatelse_isbase) {
            qscilexercmake_setfoldatelse_isbase = false;
            QsciLexerCMake::setFoldAtElse(fold);
        } else if (qscilexercmake_setfoldatelse_callback != nullptr) {
            bool cbval1 = fold;

            qscilexercmake_setfoldatelse_callback(this, cbval1);
        } else {
            QsciLexerCMake::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercmake_language_callback != nullptr) {
            const char* callback_ret = qscilexercmake_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercmake_lexer_isbase) {
            qscilexercmake_lexer_isbase = false;
            return QsciLexerCMake::lexer();
        } else if (qscilexercmake_lexer_callback != nullptr) {
            const char* callback_ret = qscilexercmake_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerCMake::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercmake_lexerid_isbase) {
            qscilexercmake_lexerid_isbase = false;
            return QsciLexerCMake::lexerId();
        } else if (qscilexercmake_lexerid_callback != nullptr) {
            int callback_ret = qscilexercmake_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercmake_autocompletionfillups_isbase) {
            qscilexercmake_autocompletionfillups_isbase = false;
            return QsciLexerCMake::autoCompletionFillups();
        } else if (qscilexercmake_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexercmake_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerCMake::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexercmake_autocompletionwordseparators_isbase) {
            qscilexercmake_autocompletionwordseparators_isbase = false;
            return QsciLexerCMake::autoCompletionWordSeparators();
        } else if (qscilexercmake_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexercmake_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerCMake::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercmake_blockend_isbase) {
            qscilexercmake_blockend_isbase = false;
            return QsciLexerCMake::blockEnd(style);
        } else if (qscilexercmake_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercmake_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercmake_blocklookback_isbase) {
            qscilexercmake_blocklookback_isbase = false;
            return QsciLexerCMake::blockLookback();
        } else if (qscilexercmake_blocklookback_callback != nullptr) {
            int callback_ret = qscilexercmake_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercmake_blockstart_isbase) {
            qscilexercmake_blockstart_isbase = false;
            return QsciLexerCMake::blockStart(style);
        } else if (qscilexercmake_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercmake_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercmake_blockstartkeyword_isbase) {
            qscilexercmake_blockstartkeyword_isbase = false;
            return QsciLexerCMake::blockStartKeyword(style);
        } else if (qscilexercmake_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexercmake_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercmake_bracestyle_isbase) {
            qscilexercmake_bracestyle_isbase = false;
            return QsciLexerCMake::braceStyle();
        } else if (qscilexercmake_bracestyle_callback != nullptr) {
            int callback_ret = qscilexercmake_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercmake_casesensitive_isbase) {
            qscilexercmake_casesensitive_isbase = false;
            return QsciLexerCMake::caseSensitive();
        } else if (qscilexercmake_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexercmake_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerCMake::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercmake_color_isbase) {
            qscilexercmake_color_isbase = false;
            return QsciLexerCMake::color(style);
        } else if (qscilexercmake_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercmake_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercmake_eolfill_isbase) {
            qscilexercmake_eolfill_isbase = false;
            return QsciLexerCMake::eolFill(style);
        } else if (qscilexercmake_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercmake_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercmake_font_isbase) {
            qscilexercmake_font_isbase = false;
            return QsciLexerCMake::font(style);
        } else if (qscilexercmake_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercmake_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercmake_indentationguideview_isbase) {
            qscilexercmake_indentationguideview_isbase = false;
            return QsciLexerCMake::indentationGuideView();
        } else if (qscilexercmake_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexercmake_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercmake_keywords_isbase) {
            qscilexercmake_keywords_isbase = false;
            return QsciLexerCMake::keywords(set);
        } else if (qscilexercmake_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexercmake_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercmake_defaultstyle_isbase) {
            qscilexercmake_defaultstyle_isbase = false;
            return QsciLexerCMake::defaultStyle();
        } else if (qscilexercmake_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexercmake_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercmake_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexercmake_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercmake_paper_isbase) {
            qscilexercmake_paper_isbase = false;
            return QsciLexerCMake::paper(style);
        } else if (qscilexercmake_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercmake_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercmake_defaultcolorwithstyle_isbase) {
            qscilexercmake_defaultcolorwithstyle_isbase = false;
            return QsciLexerCMake::defaultColor(style);
        } else if (qscilexercmake_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercmake_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercmake_defaulteolfill_isbase) {
            qscilexercmake_defaulteolfill_isbase = false;
            return QsciLexerCMake::defaultEolFill(style);
        } else if (qscilexercmake_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexercmake_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercmake_defaultfontwithstyle_isbase) {
            qscilexercmake_defaultfontwithstyle_isbase = false;
            return QsciLexerCMake::defaultFont(style);
        } else if (qscilexercmake_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexercmake_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercmake_defaultpaperwithstyle_isbase) {
            qscilexercmake_defaultpaperwithstyle_isbase = false;
            return QsciLexerCMake::defaultPaper(style);
        } else if (qscilexercmake_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexercmake_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerCMake::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercmake_seteditor_isbase) {
            qscilexercmake_seteditor_isbase = false;
            QsciLexerCMake::setEditor(editor);
        } else if (qscilexercmake_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexercmake_seteditor_callback(this, cbval1);
        } else {
            QsciLexerCMake::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercmake_refreshproperties_isbase) {
            qscilexercmake_refreshproperties_isbase = false;
            QsciLexerCMake::refreshProperties();
        } else if (qscilexercmake_refreshproperties_callback != nullptr) {
            qscilexercmake_refreshproperties_callback();
        } else {
            QsciLexerCMake::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercmake_stylebitsneeded_isbase) {
            qscilexercmake_stylebitsneeded_isbase = false;
            return QsciLexerCMake::styleBitsNeeded();
        } else if (qscilexercmake_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexercmake_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercmake_wordcharacters_isbase) {
            qscilexercmake_wordcharacters_isbase = false;
            return QsciLexerCMake::wordCharacters();
        } else if (qscilexercmake_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexercmake_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerCMake::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercmake_setautoindentstyle_isbase) {
            qscilexercmake_setautoindentstyle_isbase = false;
            QsciLexerCMake::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercmake_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexercmake_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerCMake::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercmake_setcolor_isbase) {
            qscilexercmake_setcolor_isbase = false;
            QsciLexerCMake::setColor(c, style);
        } else if (qscilexercmake_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercmake_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCMake::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercmake_seteolfill_isbase) {
            qscilexercmake_seteolfill_isbase = false;
            QsciLexerCMake::setEolFill(eoffill, style);
        } else if (qscilexercmake_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexercmake_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCMake::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercmake_setfont_isbase) {
            qscilexercmake_setfont_isbase = false;
            QsciLexerCMake::setFont(f, style);
        } else if (qscilexercmake_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexercmake_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCMake::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercmake_setpaper_isbase) {
            qscilexercmake_setpaper_isbase = false;
            QsciLexerCMake::setPaper(c, style);
        } else if (qscilexercmake_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexercmake_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerCMake::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercmake_readproperties_isbase) {
            qscilexercmake_readproperties_isbase = false;
            return QsciLexerCMake::readProperties(qs, prefix);
        } else if (qscilexercmake_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercmake_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCMake::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercmake_writeproperties_isbase) {
            qscilexercmake_writeproperties_isbase = false;
            return QsciLexerCMake::writeProperties(qs, prefix);
        } else if (qscilexercmake_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexercmake_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCMake::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercmake_event_isbase) {
            qscilexercmake_event_isbase = false;
            return QsciLexerCMake::event(event);
        } else if (qscilexercmake_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexercmake_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercmake_eventfilter_isbase) {
            qscilexercmake_eventfilter_isbase = false;
            return QsciLexerCMake::eventFilter(watched, event);
        } else if (qscilexercmake_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexercmake_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerCMake::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercmake_timerevent_isbase) {
            qscilexercmake_timerevent_isbase = false;
            QsciLexerCMake::timerEvent(event);
        } else if (qscilexercmake_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexercmake_timerevent_callback(this, cbval1);
        } else {
            QsciLexerCMake::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercmake_childevent_isbase) {
            qscilexercmake_childevent_isbase = false;
            QsciLexerCMake::childEvent(event);
        } else if (qscilexercmake_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexercmake_childevent_callback(this, cbval1);
        } else {
            QsciLexerCMake::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercmake_customevent_isbase) {
            qscilexercmake_customevent_isbase = false;
            QsciLexerCMake::customEvent(event);
        } else if (qscilexercmake_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexercmake_customevent_callback(this, cbval1);
        } else {
            QsciLexerCMake::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercmake_connectnotify_isbase) {
            qscilexercmake_connectnotify_isbase = false;
            QsciLexerCMake::connectNotify(signal);
        } else if (qscilexercmake_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercmake_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerCMake::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercmake_disconnectnotify_isbase) {
            qscilexercmake_disconnectnotify_isbase = false;
            QsciLexerCMake::disconnectNotify(signal);
        } else if (qscilexercmake_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexercmake_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerCMake::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercmake_sender_isbase) {
            qscilexercmake_sender_isbase = false;
            return QsciLexerCMake::sender();
        } else if (qscilexercmake_sender_callback != nullptr) {
            QObject* callback_ret = qscilexercmake_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerCMake::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercmake_sendersignalindex_isbase) {
            qscilexercmake_sendersignalindex_isbase = false;
            return QsciLexerCMake::senderSignalIndex();
        } else if (qscilexercmake_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexercmake_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercmake_receivers_isbase) {
            qscilexercmake_receivers_isbase = false;
            return QsciLexerCMake::receivers(signal);
        } else if (qscilexercmake_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexercmake_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerCMake::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercmake_issignalconnected_isbase) {
            qscilexercmake_issignalconnected_isbase = false;
            return QsciLexerCMake::isSignalConnected(signal);
        } else if (qscilexercmake_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexercmake_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerCMake::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCMake_QBaseReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCMake_QBaseWriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event);
    friend void QsciLexerCMake_QBaseTimerEvent(QsciLexerCMake* self, QTimerEvent* event);
    friend void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event);
    friend void QsciLexerCMake_QBaseChildEvent(QsciLexerCMake* self, QChildEvent* event);
    friend void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event);
    friend void QsciLexerCMake_QBaseCustomEvent(QsciLexerCMake* self, QEvent* event);
    friend void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
    friend void QsciLexerCMake_QBaseConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
    friend void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
    friend void QsciLexerCMake_QBaseDisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
    friend QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self);
    friend QObject* QsciLexerCMake_QBaseSender(const QsciLexerCMake* self);
    friend int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self);
    friend int QsciLexerCMake_QBaseSenderSignalIndex(const QsciLexerCMake* self);
    friend int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal);
    friend int QsciLexerCMake_QBaseReceivers(const QsciLexerCMake* self, const char* signal);
    friend bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal);
    friend bool QsciLexerCMake_QBaseIsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal);
};

#endif
