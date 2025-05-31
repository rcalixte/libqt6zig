#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerFortran so that we can call protected methods
class VirtualQsciLexerFortran final : public QsciLexerFortran {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerFortran = true;

    // Virtual class public types (including callbacks)
    using QsciLexerFortran_Metacall_Callback = int (*)(QsciLexerFortran*, int, int, void**);
    using QsciLexerFortran_SetFoldCompact_Callback = void (*)(QsciLexerFortran*, bool);
    using QsciLexerFortran_Language_Callback = const char* (*)();
    using QsciLexerFortran_Lexer_Callback = const char* (*)();
    using QsciLexerFortran_LexerId_Callback = int (*)();
    using QsciLexerFortran_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerFortran_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerFortran_BlockEnd_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BlockLookback_Callback = int (*)();
    using QsciLexerFortran_BlockStart_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BlockStartKeyword_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BraceStyle_Callback = int (*)();
    using QsciLexerFortran_CaseSensitive_Callback = bool (*)();
    using QsciLexerFortran_Color_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_EolFill_Callback = bool (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_Font_Callback = QFont* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_IndentationGuideView_Callback = int (*)();
    using QsciLexerFortran_Keywords_Callback = const char* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultStyle_Callback = int (*)();
    using QsciLexerFortran_Description_Callback = libqt_string (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_Paper_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultEolFill_Callback = bool (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_SetEditor_Callback = void (*)(QsciLexerFortran*, QsciScintilla*);
    using QsciLexerFortran_RefreshProperties_Callback = void (*)();
    using QsciLexerFortran_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerFortran_WordCharacters_Callback = const char* (*)();
    using QsciLexerFortran_SetAutoIndentStyle_Callback = void (*)(QsciLexerFortran*, int);
    using QsciLexerFortran_SetColor_Callback = void (*)(QsciLexerFortran*, QColor*, int);
    using QsciLexerFortran_SetEolFill_Callback = void (*)(QsciLexerFortran*, bool, int);
    using QsciLexerFortran_SetFont_Callback = void (*)(QsciLexerFortran*, QFont*, int);
    using QsciLexerFortran_SetPaper_Callback = void (*)(QsciLexerFortran*, QColor*, int);
    using QsciLexerFortran_ReadProperties_Callback = bool (*)(QsciLexerFortran*, QSettings*, libqt_string);
    using QsciLexerFortran_WriteProperties_Callback = bool (*)(const QsciLexerFortran*, QSettings*, libqt_string);
    using QsciLexerFortran_Event_Callback = bool (*)(QsciLexerFortran*, QEvent*);
    using QsciLexerFortran_EventFilter_Callback = bool (*)(QsciLexerFortran*, QObject*, QEvent*);
    using QsciLexerFortran_TimerEvent_Callback = void (*)(QsciLexerFortran*, QTimerEvent*);
    using QsciLexerFortran_ChildEvent_Callback = void (*)(QsciLexerFortran*, QChildEvent*);
    using QsciLexerFortran_CustomEvent_Callback = void (*)(QsciLexerFortran*, QEvent*);
    using QsciLexerFortran_ConnectNotify_Callback = void (*)(QsciLexerFortran*, QMetaMethod*);
    using QsciLexerFortran_DisconnectNotify_Callback = void (*)(QsciLexerFortran*, QMetaMethod*);
    using QsciLexerFortran_Sender_Callback = QObject* (*)();
    using QsciLexerFortran_SenderSignalIndex_Callback = int (*)();
    using QsciLexerFortran_Receivers_Callback = int (*)(const QsciLexerFortran*, const char*);
    using QsciLexerFortran_IsSignalConnected_Callback = bool (*)(const QsciLexerFortran*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerFortran_Metacall_Callback qscilexerfortran_metacall_callback = nullptr;
    QsciLexerFortran_SetFoldCompact_Callback qscilexerfortran_setfoldcompact_callback = nullptr;
    QsciLexerFortran_Language_Callback qscilexerfortran_language_callback = nullptr;
    QsciLexerFortran_Lexer_Callback qscilexerfortran_lexer_callback = nullptr;
    QsciLexerFortran_LexerId_Callback qscilexerfortran_lexerid_callback = nullptr;
    QsciLexerFortran_AutoCompletionFillups_Callback qscilexerfortran_autocompletionfillups_callback = nullptr;
    QsciLexerFortran_AutoCompletionWordSeparators_Callback qscilexerfortran_autocompletionwordseparators_callback = nullptr;
    QsciLexerFortran_BlockEnd_Callback qscilexerfortran_blockend_callback = nullptr;
    QsciLexerFortran_BlockLookback_Callback qscilexerfortran_blocklookback_callback = nullptr;
    QsciLexerFortran_BlockStart_Callback qscilexerfortran_blockstart_callback = nullptr;
    QsciLexerFortran_BlockStartKeyword_Callback qscilexerfortran_blockstartkeyword_callback = nullptr;
    QsciLexerFortran_BraceStyle_Callback qscilexerfortran_bracestyle_callback = nullptr;
    QsciLexerFortran_CaseSensitive_Callback qscilexerfortran_casesensitive_callback = nullptr;
    QsciLexerFortran_Color_Callback qscilexerfortran_color_callback = nullptr;
    QsciLexerFortran_EolFill_Callback qscilexerfortran_eolfill_callback = nullptr;
    QsciLexerFortran_Font_Callback qscilexerfortran_font_callback = nullptr;
    QsciLexerFortran_IndentationGuideView_Callback qscilexerfortran_indentationguideview_callback = nullptr;
    QsciLexerFortran_Keywords_Callback qscilexerfortran_keywords_callback = nullptr;
    QsciLexerFortran_DefaultStyle_Callback qscilexerfortran_defaultstyle_callback = nullptr;
    QsciLexerFortran_Description_Callback qscilexerfortran_description_callback = nullptr;
    QsciLexerFortran_Paper_Callback qscilexerfortran_paper_callback = nullptr;
    QsciLexerFortran_DefaultColorWithStyle_Callback qscilexerfortran_defaultcolorwithstyle_callback = nullptr;
    QsciLexerFortran_DefaultEolFill_Callback qscilexerfortran_defaulteolfill_callback = nullptr;
    QsciLexerFortran_DefaultFontWithStyle_Callback qscilexerfortran_defaultfontwithstyle_callback = nullptr;
    QsciLexerFortran_DefaultPaperWithStyle_Callback qscilexerfortran_defaultpaperwithstyle_callback = nullptr;
    QsciLexerFortran_SetEditor_Callback qscilexerfortran_seteditor_callback = nullptr;
    QsciLexerFortran_RefreshProperties_Callback qscilexerfortran_refreshproperties_callback = nullptr;
    QsciLexerFortran_StyleBitsNeeded_Callback qscilexerfortran_stylebitsneeded_callback = nullptr;
    QsciLexerFortran_WordCharacters_Callback qscilexerfortran_wordcharacters_callback = nullptr;
    QsciLexerFortran_SetAutoIndentStyle_Callback qscilexerfortran_setautoindentstyle_callback = nullptr;
    QsciLexerFortran_SetColor_Callback qscilexerfortran_setcolor_callback = nullptr;
    QsciLexerFortran_SetEolFill_Callback qscilexerfortran_seteolfill_callback = nullptr;
    QsciLexerFortran_SetFont_Callback qscilexerfortran_setfont_callback = nullptr;
    QsciLexerFortran_SetPaper_Callback qscilexerfortran_setpaper_callback = nullptr;
    QsciLexerFortran_ReadProperties_Callback qscilexerfortran_readproperties_callback = nullptr;
    QsciLexerFortran_WriteProperties_Callback qscilexerfortran_writeproperties_callback = nullptr;
    QsciLexerFortran_Event_Callback qscilexerfortran_event_callback = nullptr;
    QsciLexerFortran_EventFilter_Callback qscilexerfortran_eventfilter_callback = nullptr;
    QsciLexerFortran_TimerEvent_Callback qscilexerfortran_timerevent_callback = nullptr;
    QsciLexerFortran_ChildEvent_Callback qscilexerfortran_childevent_callback = nullptr;
    QsciLexerFortran_CustomEvent_Callback qscilexerfortran_customevent_callback = nullptr;
    QsciLexerFortran_ConnectNotify_Callback qscilexerfortran_connectnotify_callback = nullptr;
    QsciLexerFortran_DisconnectNotify_Callback qscilexerfortran_disconnectnotify_callback = nullptr;
    QsciLexerFortran_Sender_Callback qscilexerfortran_sender_callback = nullptr;
    QsciLexerFortran_SenderSignalIndex_Callback qscilexerfortran_sendersignalindex_callback = nullptr;
    QsciLexerFortran_Receivers_Callback qscilexerfortran_receivers_callback = nullptr;
    QsciLexerFortran_IsSignalConnected_Callback qscilexerfortran_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerfortran_metacall_isbase = false;
    mutable bool qscilexerfortran_setfoldcompact_isbase = false;
    mutable bool qscilexerfortran_language_isbase = false;
    mutable bool qscilexerfortran_lexer_isbase = false;
    mutable bool qscilexerfortran_lexerid_isbase = false;
    mutable bool qscilexerfortran_autocompletionfillups_isbase = false;
    mutable bool qscilexerfortran_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerfortran_blockend_isbase = false;
    mutable bool qscilexerfortran_blocklookback_isbase = false;
    mutable bool qscilexerfortran_blockstart_isbase = false;
    mutable bool qscilexerfortran_blockstartkeyword_isbase = false;
    mutable bool qscilexerfortran_bracestyle_isbase = false;
    mutable bool qscilexerfortran_casesensitive_isbase = false;
    mutable bool qscilexerfortran_color_isbase = false;
    mutable bool qscilexerfortran_eolfill_isbase = false;
    mutable bool qscilexerfortran_font_isbase = false;
    mutable bool qscilexerfortran_indentationguideview_isbase = false;
    mutable bool qscilexerfortran_keywords_isbase = false;
    mutable bool qscilexerfortran_defaultstyle_isbase = false;
    mutable bool qscilexerfortran_description_isbase = false;
    mutable bool qscilexerfortran_paper_isbase = false;
    mutable bool qscilexerfortran_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerfortran_defaulteolfill_isbase = false;
    mutable bool qscilexerfortran_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerfortran_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerfortran_seteditor_isbase = false;
    mutable bool qscilexerfortran_refreshproperties_isbase = false;
    mutable bool qscilexerfortran_stylebitsneeded_isbase = false;
    mutable bool qscilexerfortran_wordcharacters_isbase = false;
    mutable bool qscilexerfortran_setautoindentstyle_isbase = false;
    mutable bool qscilexerfortran_setcolor_isbase = false;
    mutable bool qscilexerfortran_seteolfill_isbase = false;
    mutable bool qscilexerfortran_setfont_isbase = false;
    mutable bool qscilexerfortran_setpaper_isbase = false;
    mutable bool qscilexerfortran_readproperties_isbase = false;
    mutable bool qscilexerfortran_writeproperties_isbase = false;
    mutable bool qscilexerfortran_event_isbase = false;
    mutable bool qscilexerfortran_eventfilter_isbase = false;
    mutable bool qscilexerfortran_timerevent_isbase = false;
    mutable bool qscilexerfortran_childevent_isbase = false;
    mutable bool qscilexerfortran_customevent_isbase = false;
    mutable bool qscilexerfortran_connectnotify_isbase = false;
    mutable bool qscilexerfortran_disconnectnotify_isbase = false;
    mutable bool qscilexerfortran_sender_isbase = false;
    mutable bool qscilexerfortran_sendersignalindex_isbase = false;
    mutable bool qscilexerfortran_receivers_isbase = false;
    mutable bool qscilexerfortran_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerFortran() : QsciLexerFortran(){};
    VirtualQsciLexerFortran(QObject* parent) : QsciLexerFortran(parent){};

    ~VirtualQsciLexerFortran() {
        qscilexerfortran_metacall_callback = nullptr;
        qscilexerfortran_setfoldcompact_callback = nullptr;
        qscilexerfortran_language_callback = nullptr;
        qscilexerfortran_lexer_callback = nullptr;
        qscilexerfortran_lexerid_callback = nullptr;
        qscilexerfortran_autocompletionfillups_callback = nullptr;
        qscilexerfortran_autocompletionwordseparators_callback = nullptr;
        qscilexerfortran_blockend_callback = nullptr;
        qscilexerfortran_blocklookback_callback = nullptr;
        qscilexerfortran_blockstart_callback = nullptr;
        qscilexerfortran_blockstartkeyword_callback = nullptr;
        qscilexerfortran_bracestyle_callback = nullptr;
        qscilexerfortran_casesensitive_callback = nullptr;
        qscilexerfortran_color_callback = nullptr;
        qscilexerfortran_eolfill_callback = nullptr;
        qscilexerfortran_font_callback = nullptr;
        qscilexerfortran_indentationguideview_callback = nullptr;
        qscilexerfortran_keywords_callback = nullptr;
        qscilexerfortran_defaultstyle_callback = nullptr;
        qscilexerfortran_description_callback = nullptr;
        qscilexerfortran_paper_callback = nullptr;
        qscilexerfortran_defaultcolorwithstyle_callback = nullptr;
        qscilexerfortran_defaulteolfill_callback = nullptr;
        qscilexerfortran_defaultfontwithstyle_callback = nullptr;
        qscilexerfortran_defaultpaperwithstyle_callback = nullptr;
        qscilexerfortran_seteditor_callback = nullptr;
        qscilexerfortran_refreshproperties_callback = nullptr;
        qscilexerfortran_stylebitsneeded_callback = nullptr;
        qscilexerfortran_wordcharacters_callback = nullptr;
        qscilexerfortran_setautoindentstyle_callback = nullptr;
        qscilexerfortran_setcolor_callback = nullptr;
        qscilexerfortran_seteolfill_callback = nullptr;
        qscilexerfortran_setfont_callback = nullptr;
        qscilexerfortran_setpaper_callback = nullptr;
        qscilexerfortran_readproperties_callback = nullptr;
        qscilexerfortran_writeproperties_callback = nullptr;
        qscilexerfortran_event_callback = nullptr;
        qscilexerfortran_eventfilter_callback = nullptr;
        qscilexerfortran_timerevent_callback = nullptr;
        qscilexerfortran_childevent_callback = nullptr;
        qscilexerfortran_customevent_callback = nullptr;
        qscilexerfortran_connectnotify_callback = nullptr;
        qscilexerfortran_disconnectnotify_callback = nullptr;
        qscilexerfortran_sender_callback = nullptr;
        qscilexerfortran_sendersignalindex_callback = nullptr;
        qscilexerfortran_receivers_callback = nullptr;
        qscilexerfortran_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerFortran_Metacall_Callback(QsciLexerFortran_Metacall_Callback cb) { qscilexerfortran_metacall_callback = cb; }
    inline void setQsciLexerFortran_SetFoldCompact_Callback(QsciLexerFortran_SetFoldCompact_Callback cb) { qscilexerfortran_setfoldcompact_callback = cb; }
    inline void setQsciLexerFortran_Language_Callback(QsciLexerFortran_Language_Callback cb) { qscilexerfortran_language_callback = cb; }
    inline void setQsciLexerFortran_Lexer_Callback(QsciLexerFortran_Lexer_Callback cb) { qscilexerfortran_lexer_callback = cb; }
    inline void setQsciLexerFortran_LexerId_Callback(QsciLexerFortran_LexerId_Callback cb) { qscilexerfortran_lexerid_callback = cb; }
    inline void setQsciLexerFortran_AutoCompletionFillups_Callback(QsciLexerFortran_AutoCompletionFillups_Callback cb) { qscilexerfortran_autocompletionfillups_callback = cb; }
    inline void setQsciLexerFortran_AutoCompletionWordSeparators_Callback(QsciLexerFortran_AutoCompletionWordSeparators_Callback cb) { qscilexerfortran_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerFortran_BlockEnd_Callback(QsciLexerFortran_BlockEnd_Callback cb) { qscilexerfortran_blockend_callback = cb; }
    inline void setQsciLexerFortran_BlockLookback_Callback(QsciLexerFortran_BlockLookback_Callback cb) { qscilexerfortran_blocklookback_callback = cb; }
    inline void setQsciLexerFortran_BlockStart_Callback(QsciLexerFortran_BlockStart_Callback cb) { qscilexerfortran_blockstart_callback = cb; }
    inline void setQsciLexerFortran_BlockStartKeyword_Callback(QsciLexerFortran_BlockStartKeyword_Callback cb) { qscilexerfortran_blockstartkeyword_callback = cb; }
    inline void setQsciLexerFortran_BraceStyle_Callback(QsciLexerFortran_BraceStyle_Callback cb) { qscilexerfortran_bracestyle_callback = cb; }
    inline void setQsciLexerFortran_CaseSensitive_Callback(QsciLexerFortran_CaseSensitive_Callback cb) { qscilexerfortran_casesensitive_callback = cb; }
    inline void setQsciLexerFortran_Color_Callback(QsciLexerFortran_Color_Callback cb) { qscilexerfortran_color_callback = cb; }
    inline void setQsciLexerFortran_EolFill_Callback(QsciLexerFortran_EolFill_Callback cb) { qscilexerfortran_eolfill_callback = cb; }
    inline void setQsciLexerFortran_Font_Callback(QsciLexerFortran_Font_Callback cb) { qscilexerfortran_font_callback = cb; }
    inline void setQsciLexerFortran_IndentationGuideView_Callback(QsciLexerFortran_IndentationGuideView_Callback cb) { qscilexerfortran_indentationguideview_callback = cb; }
    inline void setQsciLexerFortran_Keywords_Callback(QsciLexerFortran_Keywords_Callback cb) { qscilexerfortran_keywords_callback = cb; }
    inline void setQsciLexerFortran_DefaultStyle_Callback(QsciLexerFortran_DefaultStyle_Callback cb) { qscilexerfortran_defaultstyle_callback = cb; }
    inline void setQsciLexerFortran_Description_Callback(QsciLexerFortran_Description_Callback cb) { qscilexerfortran_description_callback = cb; }
    inline void setQsciLexerFortran_Paper_Callback(QsciLexerFortran_Paper_Callback cb) { qscilexerfortran_paper_callback = cb; }
    inline void setQsciLexerFortran_DefaultColorWithStyle_Callback(QsciLexerFortran_DefaultColorWithStyle_Callback cb) { qscilexerfortran_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerFortran_DefaultEolFill_Callback(QsciLexerFortran_DefaultEolFill_Callback cb) { qscilexerfortran_defaulteolfill_callback = cb; }
    inline void setQsciLexerFortran_DefaultFontWithStyle_Callback(QsciLexerFortran_DefaultFontWithStyle_Callback cb) { qscilexerfortran_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerFortran_DefaultPaperWithStyle_Callback(QsciLexerFortran_DefaultPaperWithStyle_Callback cb) { qscilexerfortran_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerFortran_SetEditor_Callback(QsciLexerFortran_SetEditor_Callback cb) { qscilexerfortran_seteditor_callback = cb; }
    inline void setQsciLexerFortran_RefreshProperties_Callback(QsciLexerFortran_RefreshProperties_Callback cb) { qscilexerfortran_refreshproperties_callback = cb; }
    inline void setQsciLexerFortran_StyleBitsNeeded_Callback(QsciLexerFortran_StyleBitsNeeded_Callback cb) { qscilexerfortran_stylebitsneeded_callback = cb; }
    inline void setQsciLexerFortran_WordCharacters_Callback(QsciLexerFortran_WordCharacters_Callback cb) { qscilexerfortran_wordcharacters_callback = cb; }
    inline void setQsciLexerFortran_SetAutoIndentStyle_Callback(QsciLexerFortran_SetAutoIndentStyle_Callback cb) { qscilexerfortran_setautoindentstyle_callback = cb; }
    inline void setQsciLexerFortran_SetColor_Callback(QsciLexerFortran_SetColor_Callback cb) { qscilexerfortran_setcolor_callback = cb; }
    inline void setQsciLexerFortran_SetEolFill_Callback(QsciLexerFortran_SetEolFill_Callback cb) { qscilexerfortran_seteolfill_callback = cb; }
    inline void setQsciLexerFortran_SetFont_Callback(QsciLexerFortran_SetFont_Callback cb) { qscilexerfortran_setfont_callback = cb; }
    inline void setQsciLexerFortran_SetPaper_Callback(QsciLexerFortran_SetPaper_Callback cb) { qscilexerfortran_setpaper_callback = cb; }
    inline void setQsciLexerFortran_ReadProperties_Callback(QsciLexerFortran_ReadProperties_Callback cb) { qscilexerfortran_readproperties_callback = cb; }
    inline void setQsciLexerFortran_WriteProperties_Callback(QsciLexerFortran_WriteProperties_Callback cb) { qscilexerfortran_writeproperties_callback = cb; }
    inline void setQsciLexerFortran_Event_Callback(QsciLexerFortran_Event_Callback cb) { qscilexerfortran_event_callback = cb; }
    inline void setQsciLexerFortran_EventFilter_Callback(QsciLexerFortran_EventFilter_Callback cb) { qscilexerfortran_eventfilter_callback = cb; }
    inline void setQsciLexerFortran_TimerEvent_Callback(QsciLexerFortran_TimerEvent_Callback cb) { qscilexerfortran_timerevent_callback = cb; }
    inline void setQsciLexerFortran_ChildEvent_Callback(QsciLexerFortran_ChildEvent_Callback cb) { qscilexerfortran_childevent_callback = cb; }
    inline void setQsciLexerFortran_CustomEvent_Callback(QsciLexerFortran_CustomEvent_Callback cb) { qscilexerfortran_customevent_callback = cb; }
    inline void setQsciLexerFortran_ConnectNotify_Callback(QsciLexerFortran_ConnectNotify_Callback cb) { qscilexerfortran_connectnotify_callback = cb; }
    inline void setQsciLexerFortran_DisconnectNotify_Callback(QsciLexerFortran_DisconnectNotify_Callback cb) { qscilexerfortran_disconnectnotify_callback = cb; }
    inline void setQsciLexerFortran_Sender_Callback(QsciLexerFortran_Sender_Callback cb) { qscilexerfortran_sender_callback = cb; }
    inline void setQsciLexerFortran_SenderSignalIndex_Callback(QsciLexerFortran_SenderSignalIndex_Callback cb) { qscilexerfortran_sendersignalindex_callback = cb; }
    inline void setQsciLexerFortran_Receivers_Callback(QsciLexerFortran_Receivers_Callback cb) { qscilexerfortran_receivers_callback = cb; }
    inline void setQsciLexerFortran_IsSignalConnected_Callback(QsciLexerFortran_IsSignalConnected_Callback cb) { qscilexerfortran_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerFortran_Metacall_IsBase(bool value) const { qscilexerfortran_metacall_isbase = value; }
    inline void setQsciLexerFortran_SetFoldCompact_IsBase(bool value) const { qscilexerfortran_setfoldcompact_isbase = value; }
    inline void setQsciLexerFortran_Language_IsBase(bool value) const { qscilexerfortran_language_isbase = value; }
    inline void setQsciLexerFortran_Lexer_IsBase(bool value) const { qscilexerfortran_lexer_isbase = value; }
    inline void setQsciLexerFortran_LexerId_IsBase(bool value) const { qscilexerfortran_lexerid_isbase = value; }
    inline void setQsciLexerFortran_AutoCompletionFillups_IsBase(bool value) const { qscilexerfortran_autocompletionfillups_isbase = value; }
    inline void setQsciLexerFortran_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerfortran_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerFortran_BlockEnd_IsBase(bool value) const { qscilexerfortran_blockend_isbase = value; }
    inline void setQsciLexerFortran_BlockLookback_IsBase(bool value) const { qscilexerfortran_blocklookback_isbase = value; }
    inline void setQsciLexerFortran_BlockStart_IsBase(bool value) const { qscilexerfortran_blockstart_isbase = value; }
    inline void setQsciLexerFortran_BlockStartKeyword_IsBase(bool value) const { qscilexerfortran_blockstartkeyword_isbase = value; }
    inline void setQsciLexerFortran_BraceStyle_IsBase(bool value) const { qscilexerfortran_bracestyle_isbase = value; }
    inline void setQsciLexerFortran_CaseSensitive_IsBase(bool value) const { qscilexerfortran_casesensitive_isbase = value; }
    inline void setQsciLexerFortran_Color_IsBase(bool value) const { qscilexerfortran_color_isbase = value; }
    inline void setQsciLexerFortran_EolFill_IsBase(bool value) const { qscilexerfortran_eolfill_isbase = value; }
    inline void setQsciLexerFortran_Font_IsBase(bool value) const { qscilexerfortran_font_isbase = value; }
    inline void setQsciLexerFortran_IndentationGuideView_IsBase(bool value) const { qscilexerfortran_indentationguideview_isbase = value; }
    inline void setQsciLexerFortran_Keywords_IsBase(bool value) const { qscilexerfortran_keywords_isbase = value; }
    inline void setQsciLexerFortran_DefaultStyle_IsBase(bool value) const { qscilexerfortran_defaultstyle_isbase = value; }
    inline void setQsciLexerFortran_Description_IsBase(bool value) const { qscilexerfortran_description_isbase = value; }
    inline void setQsciLexerFortran_Paper_IsBase(bool value) const { qscilexerfortran_paper_isbase = value; }
    inline void setQsciLexerFortran_DefaultColorWithStyle_IsBase(bool value) const { qscilexerfortran_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerFortran_DefaultEolFill_IsBase(bool value) const { qscilexerfortran_defaulteolfill_isbase = value; }
    inline void setQsciLexerFortran_DefaultFontWithStyle_IsBase(bool value) const { qscilexerfortran_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerFortran_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerfortran_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerFortran_SetEditor_IsBase(bool value) const { qscilexerfortran_seteditor_isbase = value; }
    inline void setQsciLexerFortran_RefreshProperties_IsBase(bool value) const { qscilexerfortran_refreshproperties_isbase = value; }
    inline void setQsciLexerFortran_StyleBitsNeeded_IsBase(bool value) const { qscilexerfortran_stylebitsneeded_isbase = value; }
    inline void setQsciLexerFortran_WordCharacters_IsBase(bool value) const { qscilexerfortran_wordcharacters_isbase = value; }
    inline void setQsciLexerFortran_SetAutoIndentStyle_IsBase(bool value) const { qscilexerfortran_setautoindentstyle_isbase = value; }
    inline void setQsciLexerFortran_SetColor_IsBase(bool value) const { qscilexerfortran_setcolor_isbase = value; }
    inline void setQsciLexerFortran_SetEolFill_IsBase(bool value) const { qscilexerfortran_seteolfill_isbase = value; }
    inline void setQsciLexerFortran_SetFont_IsBase(bool value) const { qscilexerfortran_setfont_isbase = value; }
    inline void setQsciLexerFortran_SetPaper_IsBase(bool value) const { qscilexerfortran_setpaper_isbase = value; }
    inline void setQsciLexerFortran_ReadProperties_IsBase(bool value) const { qscilexerfortran_readproperties_isbase = value; }
    inline void setQsciLexerFortran_WriteProperties_IsBase(bool value) const { qscilexerfortran_writeproperties_isbase = value; }
    inline void setQsciLexerFortran_Event_IsBase(bool value) const { qscilexerfortran_event_isbase = value; }
    inline void setQsciLexerFortran_EventFilter_IsBase(bool value) const { qscilexerfortran_eventfilter_isbase = value; }
    inline void setQsciLexerFortran_TimerEvent_IsBase(bool value) const { qscilexerfortran_timerevent_isbase = value; }
    inline void setQsciLexerFortran_ChildEvent_IsBase(bool value) const { qscilexerfortran_childevent_isbase = value; }
    inline void setQsciLexerFortran_CustomEvent_IsBase(bool value) const { qscilexerfortran_customevent_isbase = value; }
    inline void setQsciLexerFortran_ConnectNotify_IsBase(bool value) const { qscilexerfortran_connectnotify_isbase = value; }
    inline void setQsciLexerFortran_DisconnectNotify_IsBase(bool value) const { qscilexerfortran_disconnectnotify_isbase = value; }
    inline void setQsciLexerFortran_Sender_IsBase(bool value) const { qscilexerfortran_sender_isbase = value; }
    inline void setQsciLexerFortran_SenderSignalIndex_IsBase(bool value) const { qscilexerfortran_sendersignalindex_isbase = value; }
    inline void setQsciLexerFortran_Receivers_IsBase(bool value) const { qscilexerfortran_receivers_isbase = value; }
    inline void setQsciLexerFortran_IsSignalConnected_IsBase(bool value) const { qscilexerfortran_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerfortran_metacall_isbase) {
            qscilexerfortran_metacall_isbase = false;
            return QsciLexerFortran::qt_metacall(param1, param2, param3);
        } else if (qscilexerfortran_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerfortran_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerfortran_setfoldcompact_isbase) {
            qscilexerfortran_setfoldcompact_isbase = false;
            QsciLexerFortran::setFoldCompact(fold);
        } else if (qscilexerfortran_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerfortran_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerFortran::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerfortran_language_callback != nullptr) {
            const char* callback_ret = qscilexerfortran_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerfortran_lexer_isbase) {
            qscilexerfortran_lexer_isbase = false;
            return QsciLexerFortran::lexer();
        } else if (qscilexerfortran_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerfortran_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerFortran::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerfortran_lexerid_isbase) {
            qscilexerfortran_lexerid_isbase = false;
            return QsciLexerFortran::lexerId();
        } else if (qscilexerfortran_lexerid_callback != nullptr) {
            int callback_ret = qscilexerfortran_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerfortran_autocompletionfillups_isbase) {
            qscilexerfortran_autocompletionfillups_isbase = false;
            return QsciLexerFortran::autoCompletionFillups();
        } else if (qscilexerfortran_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerfortran_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerFortran::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerfortran_autocompletionwordseparators_isbase) {
            qscilexerfortran_autocompletionwordseparators_isbase = false;
            return QsciLexerFortran::autoCompletionWordSeparators();
        } else if (qscilexerfortran_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerfortran_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerFortran::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerfortran_blockend_isbase) {
            qscilexerfortran_blockend_isbase = false;
            return QsciLexerFortran::blockEnd(style);
        } else if (qscilexerfortran_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerfortran_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerfortran_blocklookback_isbase) {
            qscilexerfortran_blocklookback_isbase = false;
            return QsciLexerFortran::blockLookback();
        } else if (qscilexerfortran_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerfortran_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerfortran_blockstart_isbase) {
            qscilexerfortran_blockstart_isbase = false;
            return QsciLexerFortran::blockStart(style);
        } else if (qscilexerfortran_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerfortran_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerfortran_blockstartkeyword_isbase) {
            qscilexerfortran_blockstartkeyword_isbase = false;
            return QsciLexerFortran::blockStartKeyword(style);
        } else if (qscilexerfortran_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerfortran_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerfortran_bracestyle_isbase) {
            qscilexerfortran_bracestyle_isbase = false;
            return QsciLexerFortran::braceStyle();
        } else if (qscilexerfortran_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerfortran_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerfortran_casesensitive_isbase) {
            qscilexerfortran_casesensitive_isbase = false;
            return QsciLexerFortran::caseSensitive();
        } else if (qscilexerfortran_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerfortran_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerFortran::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerfortran_color_isbase) {
            qscilexerfortran_color_isbase = false;
            return QsciLexerFortran::color(style);
        } else if (qscilexerfortran_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerfortran_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerfortran_eolfill_isbase) {
            qscilexerfortran_eolfill_isbase = false;
            return QsciLexerFortran::eolFill(style);
        } else if (qscilexerfortran_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerfortran_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerfortran_font_isbase) {
            qscilexerfortran_font_isbase = false;
            return QsciLexerFortran::font(style);
        } else if (qscilexerfortran_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerfortran_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerfortran_indentationguideview_isbase) {
            qscilexerfortran_indentationguideview_isbase = false;
            return QsciLexerFortran::indentationGuideView();
        } else if (qscilexerfortran_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerfortran_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerfortran_keywords_isbase) {
            qscilexerfortran_keywords_isbase = false;
            return QsciLexerFortran::keywords(set);
        } else if (qscilexerfortran_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerfortran_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerfortran_defaultstyle_isbase) {
            qscilexerfortran_defaultstyle_isbase = false;
            return QsciLexerFortran::defaultStyle();
        } else if (qscilexerfortran_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerfortran_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerfortran_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerfortran_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerfortran_paper_isbase) {
            qscilexerfortran_paper_isbase = false;
            return QsciLexerFortran::paper(style);
        } else if (qscilexerfortran_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerfortran_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerfortran_defaultcolorwithstyle_isbase) {
            qscilexerfortran_defaultcolorwithstyle_isbase = false;
            return QsciLexerFortran::defaultColor(style);
        } else if (qscilexerfortran_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerfortran_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerfortran_defaulteolfill_isbase) {
            qscilexerfortran_defaulteolfill_isbase = false;
            return QsciLexerFortran::defaultEolFill(style);
        } else if (qscilexerfortran_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerfortran_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerfortran_defaultfontwithstyle_isbase) {
            qscilexerfortran_defaultfontwithstyle_isbase = false;
            return QsciLexerFortran::defaultFont(style);
        } else if (qscilexerfortran_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerfortran_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerfortran_defaultpaperwithstyle_isbase) {
            qscilexerfortran_defaultpaperwithstyle_isbase = false;
            return QsciLexerFortran::defaultPaper(style);
        } else if (qscilexerfortran_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerfortran_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerFortran::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerfortran_seteditor_isbase) {
            qscilexerfortran_seteditor_isbase = false;
            QsciLexerFortran::setEditor(editor);
        } else if (qscilexerfortran_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerfortran_seteditor_callback(this, cbval1);
        } else {
            QsciLexerFortran::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerfortran_refreshproperties_isbase) {
            qscilexerfortran_refreshproperties_isbase = false;
            QsciLexerFortran::refreshProperties();
        } else if (qscilexerfortran_refreshproperties_callback != nullptr) {
            qscilexerfortran_refreshproperties_callback();
        } else {
            QsciLexerFortran::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerfortran_stylebitsneeded_isbase) {
            qscilexerfortran_stylebitsneeded_isbase = false;
            return QsciLexerFortran::styleBitsNeeded();
        } else if (qscilexerfortran_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerfortran_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerfortran_wordcharacters_isbase) {
            qscilexerfortran_wordcharacters_isbase = false;
            return QsciLexerFortran::wordCharacters();
        } else if (qscilexerfortran_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerfortran_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerFortran::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerfortran_setautoindentstyle_isbase) {
            qscilexerfortran_setautoindentstyle_isbase = false;
            QsciLexerFortran::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerfortran_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerfortran_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerFortran::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerfortran_setcolor_isbase) {
            qscilexerfortran_setcolor_isbase = false;
            QsciLexerFortran::setColor(c, style);
        } else if (qscilexerfortran_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerfortran_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerFortran::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerfortran_seteolfill_isbase) {
            qscilexerfortran_seteolfill_isbase = false;
            QsciLexerFortran::setEolFill(eoffill, style);
        } else if (qscilexerfortran_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerfortran_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerFortran::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerfortran_setfont_isbase) {
            qscilexerfortran_setfont_isbase = false;
            QsciLexerFortran::setFont(f, style);
        } else if (qscilexerfortran_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerfortran_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerFortran::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerfortran_setpaper_isbase) {
            qscilexerfortran_setpaper_isbase = false;
            QsciLexerFortran::setPaper(c, style);
        } else if (qscilexerfortran_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerfortran_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerFortran::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerfortran_readproperties_isbase) {
            qscilexerfortran_readproperties_isbase = false;
            return QsciLexerFortran::readProperties(qs, prefix);
        } else if (qscilexerfortran_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerfortran_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerFortran::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerfortran_writeproperties_isbase) {
            qscilexerfortran_writeproperties_isbase = false;
            return QsciLexerFortran::writeProperties(qs, prefix);
        } else if (qscilexerfortran_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerfortran_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerFortran::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerfortran_event_isbase) {
            qscilexerfortran_event_isbase = false;
            return QsciLexerFortran::event(event);
        } else if (qscilexerfortran_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerfortran_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerfortran_eventfilter_isbase) {
            qscilexerfortran_eventfilter_isbase = false;
            return QsciLexerFortran::eventFilter(watched, event);
        } else if (qscilexerfortran_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerfortran_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerFortran::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerfortran_timerevent_isbase) {
            qscilexerfortran_timerevent_isbase = false;
            QsciLexerFortran::timerEvent(event);
        } else if (qscilexerfortran_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerfortran_timerevent_callback(this, cbval1);
        } else {
            QsciLexerFortran::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerfortran_childevent_isbase) {
            qscilexerfortran_childevent_isbase = false;
            QsciLexerFortran::childEvent(event);
        } else if (qscilexerfortran_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerfortran_childevent_callback(this, cbval1);
        } else {
            QsciLexerFortran::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerfortran_customevent_isbase) {
            qscilexerfortran_customevent_isbase = false;
            QsciLexerFortran::customEvent(event);
        } else if (qscilexerfortran_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerfortran_customevent_callback(this, cbval1);
        } else {
            QsciLexerFortran::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran_connectnotify_isbase) {
            qscilexerfortran_connectnotify_isbase = false;
            QsciLexerFortran::connectNotify(signal);
        } else if (qscilexerfortran_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerfortran_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerFortran::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran_disconnectnotify_isbase) {
            qscilexerfortran_disconnectnotify_isbase = false;
            QsciLexerFortran::disconnectNotify(signal);
        } else if (qscilexerfortran_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerfortran_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerFortran::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerfortran_sender_isbase) {
            qscilexerfortran_sender_isbase = false;
            return QsciLexerFortran::sender();
        } else if (qscilexerfortran_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerfortran_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerFortran::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerfortran_sendersignalindex_isbase) {
            qscilexerfortran_sendersignalindex_isbase = false;
            return QsciLexerFortran::senderSignalIndex();
        } else if (qscilexerfortran_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerfortran_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerfortran_receivers_isbase) {
            qscilexerfortran_receivers_isbase = false;
            return QsciLexerFortran::receivers(signal);
        } else if (qscilexerfortran_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerfortran_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerFortran::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerfortran_issignalconnected_isbase) {
            qscilexerfortran_issignalconnected_isbase = false;
            return QsciLexerFortran::isSignalConnected(signal);
        } else if (qscilexerfortran_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerfortran_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerFortran::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran_QBaseReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran_QBaseWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event);
    friend void QsciLexerFortran_QBaseTimerEvent(QsciLexerFortran* self, QTimerEvent* event);
    friend void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event);
    friend void QsciLexerFortran_QBaseChildEvent(QsciLexerFortran* self, QChildEvent* event);
    friend void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event);
    friend void QsciLexerFortran_QBaseCustomEvent(QsciLexerFortran* self, QEvent* event);
    friend void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
    friend void QsciLexerFortran_QBaseConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
    friend void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
    friend void QsciLexerFortran_QBaseDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
    friend QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self);
    friend QObject* QsciLexerFortran_QBaseSender(const QsciLexerFortran* self);
    friend int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self);
    friend int QsciLexerFortran_QBaseSenderSignalIndex(const QsciLexerFortran* self);
    friend int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal);
    friend int QsciLexerFortran_QBaseReceivers(const QsciLexerFortran* self, const char* signal);
    friend bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
    friend bool QsciLexerFortran_QBaseIsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal);
};

#endif
