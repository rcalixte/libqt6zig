#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERAVS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERAVS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerAVS so that we can call protected methods
class VirtualQsciLexerAVS final : public QsciLexerAVS {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerAVS = true;

    // Virtual class public types (including callbacks)
    using QsciLexerAVS_Metacall_Callback = int (*)(QsciLexerAVS*, int, int, void**);
    using QsciLexerAVS_SetFoldComments_Callback = void (*)(QsciLexerAVS*, bool);
    using QsciLexerAVS_SetFoldCompact_Callback = void (*)(QsciLexerAVS*, bool);
    using QsciLexerAVS_Language_Callback = const char* (*)();
    using QsciLexerAVS_Lexer_Callback = const char* (*)();
    using QsciLexerAVS_LexerId_Callback = int (*)();
    using QsciLexerAVS_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerAVS_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerAVS_BlockEnd_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BlockLookback_Callback = int (*)();
    using QsciLexerAVS_BlockStart_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BlockStartKeyword_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BraceStyle_Callback = int (*)();
    using QsciLexerAVS_CaseSensitive_Callback = bool (*)();
    using QsciLexerAVS_Color_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_EolFill_Callback = bool (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_Font_Callback = QFont* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_IndentationGuideView_Callback = int (*)();
    using QsciLexerAVS_Keywords_Callback = const char* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultStyle_Callback = int (*)();
    using QsciLexerAVS_Description_Callback = libqt_string (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_Paper_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultEolFill_Callback = bool (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_SetEditor_Callback = void (*)(QsciLexerAVS*, QsciScintilla*);
    using QsciLexerAVS_RefreshProperties_Callback = void (*)();
    using QsciLexerAVS_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerAVS_WordCharacters_Callback = const char* (*)();
    using QsciLexerAVS_SetAutoIndentStyle_Callback = void (*)(QsciLexerAVS*, int);
    using QsciLexerAVS_SetColor_Callback = void (*)(QsciLexerAVS*, QColor*, int);
    using QsciLexerAVS_SetEolFill_Callback = void (*)(QsciLexerAVS*, bool, int);
    using QsciLexerAVS_SetFont_Callback = void (*)(QsciLexerAVS*, QFont*, int);
    using QsciLexerAVS_SetPaper_Callback = void (*)(QsciLexerAVS*, QColor*, int);
    using QsciLexerAVS_ReadProperties_Callback = bool (*)(QsciLexerAVS*, QSettings*, libqt_string);
    using QsciLexerAVS_WriteProperties_Callback = bool (*)(const QsciLexerAVS*, QSettings*, libqt_string);
    using QsciLexerAVS_Event_Callback = bool (*)(QsciLexerAVS*, QEvent*);
    using QsciLexerAVS_EventFilter_Callback = bool (*)(QsciLexerAVS*, QObject*, QEvent*);
    using QsciLexerAVS_TimerEvent_Callback = void (*)(QsciLexerAVS*, QTimerEvent*);
    using QsciLexerAVS_ChildEvent_Callback = void (*)(QsciLexerAVS*, QChildEvent*);
    using QsciLexerAVS_CustomEvent_Callback = void (*)(QsciLexerAVS*, QEvent*);
    using QsciLexerAVS_ConnectNotify_Callback = void (*)(QsciLexerAVS*, QMetaMethod*);
    using QsciLexerAVS_DisconnectNotify_Callback = void (*)(QsciLexerAVS*, QMetaMethod*);
    using QsciLexerAVS_Sender_Callback = QObject* (*)();
    using QsciLexerAVS_SenderSignalIndex_Callback = int (*)();
    using QsciLexerAVS_Receivers_Callback = int (*)(const QsciLexerAVS*, const char*);
    using QsciLexerAVS_IsSignalConnected_Callback = bool (*)(const QsciLexerAVS*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerAVS_Metacall_Callback qscilexeravs_metacall_callback = nullptr;
    QsciLexerAVS_SetFoldComments_Callback qscilexeravs_setfoldcomments_callback = nullptr;
    QsciLexerAVS_SetFoldCompact_Callback qscilexeravs_setfoldcompact_callback = nullptr;
    QsciLexerAVS_Language_Callback qscilexeravs_language_callback = nullptr;
    QsciLexerAVS_Lexer_Callback qscilexeravs_lexer_callback = nullptr;
    QsciLexerAVS_LexerId_Callback qscilexeravs_lexerid_callback = nullptr;
    QsciLexerAVS_AutoCompletionFillups_Callback qscilexeravs_autocompletionfillups_callback = nullptr;
    QsciLexerAVS_AutoCompletionWordSeparators_Callback qscilexeravs_autocompletionwordseparators_callback = nullptr;
    QsciLexerAVS_BlockEnd_Callback qscilexeravs_blockend_callback = nullptr;
    QsciLexerAVS_BlockLookback_Callback qscilexeravs_blocklookback_callback = nullptr;
    QsciLexerAVS_BlockStart_Callback qscilexeravs_blockstart_callback = nullptr;
    QsciLexerAVS_BlockStartKeyword_Callback qscilexeravs_blockstartkeyword_callback = nullptr;
    QsciLexerAVS_BraceStyle_Callback qscilexeravs_bracestyle_callback = nullptr;
    QsciLexerAVS_CaseSensitive_Callback qscilexeravs_casesensitive_callback = nullptr;
    QsciLexerAVS_Color_Callback qscilexeravs_color_callback = nullptr;
    QsciLexerAVS_EolFill_Callback qscilexeravs_eolfill_callback = nullptr;
    QsciLexerAVS_Font_Callback qscilexeravs_font_callback = nullptr;
    QsciLexerAVS_IndentationGuideView_Callback qscilexeravs_indentationguideview_callback = nullptr;
    QsciLexerAVS_Keywords_Callback qscilexeravs_keywords_callback = nullptr;
    QsciLexerAVS_DefaultStyle_Callback qscilexeravs_defaultstyle_callback = nullptr;
    QsciLexerAVS_Description_Callback qscilexeravs_description_callback = nullptr;
    QsciLexerAVS_Paper_Callback qscilexeravs_paper_callback = nullptr;
    QsciLexerAVS_DefaultColorWithStyle_Callback qscilexeravs_defaultcolorwithstyle_callback = nullptr;
    QsciLexerAVS_DefaultEolFill_Callback qscilexeravs_defaulteolfill_callback = nullptr;
    QsciLexerAVS_DefaultFontWithStyle_Callback qscilexeravs_defaultfontwithstyle_callback = nullptr;
    QsciLexerAVS_DefaultPaperWithStyle_Callback qscilexeravs_defaultpaperwithstyle_callback = nullptr;
    QsciLexerAVS_SetEditor_Callback qscilexeravs_seteditor_callback = nullptr;
    QsciLexerAVS_RefreshProperties_Callback qscilexeravs_refreshproperties_callback = nullptr;
    QsciLexerAVS_StyleBitsNeeded_Callback qscilexeravs_stylebitsneeded_callback = nullptr;
    QsciLexerAVS_WordCharacters_Callback qscilexeravs_wordcharacters_callback = nullptr;
    QsciLexerAVS_SetAutoIndentStyle_Callback qscilexeravs_setautoindentstyle_callback = nullptr;
    QsciLexerAVS_SetColor_Callback qscilexeravs_setcolor_callback = nullptr;
    QsciLexerAVS_SetEolFill_Callback qscilexeravs_seteolfill_callback = nullptr;
    QsciLexerAVS_SetFont_Callback qscilexeravs_setfont_callback = nullptr;
    QsciLexerAVS_SetPaper_Callback qscilexeravs_setpaper_callback = nullptr;
    QsciLexerAVS_ReadProperties_Callback qscilexeravs_readproperties_callback = nullptr;
    QsciLexerAVS_WriteProperties_Callback qscilexeravs_writeproperties_callback = nullptr;
    QsciLexerAVS_Event_Callback qscilexeravs_event_callback = nullptr;
    QsciLexerAVS_EventFilter_Callback qscilexeravs_eventfilter_callback = nullptr;
    QsciLexerAVS_TimerEvent_Callback qscilexeravs_timerevent_callback = nullptr;
    QsciLexerAVS_ChildEvent_Callback qscilexeravs_childevent_callback = nullptr;
    QsciLexerAVS_CustomEvent_Callback qscilexeravs_customevent_callback = nullptr;
    QsciLexerAVS_ConnectNotify_Callback qscilexeravs_connectnotify_callback = nullptr;
    QsciLexerAVS_DisconnectNotify_Callback qscilexeravs_disconnectnotify_callback = nullptr;
    QsciLexerAVS_Sender_Callback qscilexeravs_sender_callback = nullptr;
    QsciLexerAVS_SenderSignalIndex_Callback qscilexeravs_sendersignalindex_callback = nullptr;
    QsciLexerAVS_Receivers_Callback qscilexeravs_receivers_callback = nullptr;
    QsciLexerAVS_IsSignalConnected_Callback qscilexeravs_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeravs_metacall_isbase = false;
    mutable bool qscilexeravs_setfoldcomments_isbase = false;
    mutable bool qscilexeravs_setfoldcompact_isbase = false;
    mutable bool qscilexeravs_language_isbase = false;
    mutable bool qscilexeravs_lexer_isbase = false;
    mutable bool qscilexeravs_lexerid_isbase = false;
    mutable bool qscilexeravs_autocompletionfillups_isbase = false;
    mutable bool qscilexeravs_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeravs_blockend_isbase = false;
    mutable bool qscilexeravs_blocklookback_isbase = false;
    mutable bool qscilexeravs_blockstart_isbase = false;
    mutable bool qscilexeravs_blockstartkeyword_isbase = false;
    mutable bool qscilexeravs_bracestyle_isbase = false;
    mutable bool qscilexeravs_casesensitive_isbase = false;
    mutable bool qscilexeravs_color_isbase = false;
    mutable bool qscilexeravs_eolfill_isbase = false;
    mutable bool qscilexeravs_font_isbase = false;
    mutable bool qscilexeravs_indentationguideview_isbase = false;
    mutable bool qscilexeravs_keywords_isbase = false;
    mutable bool qscilexeravs_defaultstyle_isbase = false;
    mutable bool qscilexeravs_description_isbase = false;
    mutable bool qscilexeravs_paper_isbase = false;
    mutable bool qscilexeravs_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexeravs_defaulteolfill_isbase = false;
    mutable bool qscilexeravs_defaultfontwithstyle_isbase = false;
    mutable bool qscilexeravs_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexeravs_seteditor_isbase = false;
    mutable bool qscilexeravs_refreshproperties_isbase = false;
    mutable bool qscilexeravs_stylebitsneeded_isbase = false;
    mutable bool qscilexeravs_wordcharacters_isbase = false;
    mutable bool qscilexeravs_setautoindentstyle_isbase = false;
    mutable bool qscilexeravs_setcolor_isbase = false;
    mutable bool qscilexeravs_seteolfill_isbase = false;
    mutable bool qscilexeravs_setfont_isbase = false;
    mutable bool qscilexeravs_setpaper_isbase = false;
    mutable bool qscilexeravs_readproperties_isbase = false;
    mutable bool qscilexeravs_writeproperties_isbase = false;
    mutable bool qscilexeravs_event_isbase = false;
    mutable bool qscilexeravs_eventfilter_isbase = false;
    mutable bool qscilexeravs_timerevent_isbase = false;
    mutable bool qscilexeravs_childevent_isbase = false;
    mutable bool qscilexeravs_customevent_isbase = false;
    mutable bool qscilexeravs_connectnotify_isbase = false;
    mutable bool qscilexeravs_disconnectnotify_isbase = false;
    mutable bool qscilexeravs_sender_isbase = false;
    mutable bool qscilexeravs_sendersignalindex_isbase = false;
    mutable bool qscilexeravs_receivers_isbase = false;
    mutable bool qscilexeravs_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerAVS() : QsciLexerAVS(){};
    VirtualQsciLexerAVS(QObject* parent) : QsciLexerAVS(parent){};

    ~VirtualQsciLexerAVS() {
        qscilexeravs_metacall_callback = nullptr;
        qscilexeravs_setfoldcomments_callback = nullptr;
        qscilexeravs_setfoldcompact_callback = nullptr;
        qscilexeravs_language_callback = nullptr;
        qscilexeravs_lexer_callback = nullptr;
        qscilexeravs_lexerid_callback = nullptr;
        qscilexeravs_autocompletionfillups_callback = nullptr;
        qscilexeravs_autocompletionwordseparators_callback = nullptr;
        qscilexeravs_blockend_callback = nullptr;
        qscilexeravs_blocklookback_callback = nullptr;
        qscilexeravs_blockstart_callback = nullptr;
        qscilexeravs_blockstartkeyword_callback = nullptr;
        qscilexeravs_bracestyle_callback = nullptr;
        qscilexeravs_casesensitive_callback = nullptr;
        qscilexeravs_color_callback = nullptr;
        qscilexeravs_eolfill_callback = nullptr;
        qscilexeravs_font_callback = nullptr;
        qscilexeravs_indentationguideview_callback = nullptr;
        qscilexeravs_keywords_callback = nullptr;
        qscilexeravs_defaultstyle_callback = nullptr;
        qscilexeravs_description_callback = nullptr;
        qscilexeravs_paper_callback = nullptr;
        qscilexeravs_defaultcolorwithstyle_callback = nullptr;
        qscilexeravs_defaulteolfill_callback = nullptr;
        qscilexeravs_defaultfontwithstyle_callback = nullptr;
        qscilexeravs_defaultpaperwithstyle_callback = nullptr;
        qscilexeravs_seteditor_callback = nullptr;
        qscilexeravs_refreshproperties_callback = nullptr;
        qscilexeravs_stylebitsneeded_callback = nullptr;
        qscilexeravs_wordcharacters_callback = nullptr;
        qscilexeravs_setautoindentstyle_callback = nullptr;
        qscilexeravs_setcolor_callback = nullptr;
        qscilexeravs_seteolfill_callback = nullptr;
        qscilexeravs_setfont_callback = nullptr;
        qscilexeravs_setpaper_callback = nullptr;
        qscilexeravs_readproperties_callback = nullptr;
        qscilexeravs_writeproperties_callback = nullptr;
        qscilexeravs_event_callback = nullptr;
        qscilexeravs_eventfilter_callback = nullptr;
        qscilexeravs_timerevent_callback = nullptr;
        qscilexeravs_childevent_callback = nullptr;
        qscilexeravs_customevent_callback = nullptr;
        qscilexeravs_connectnotify_callback = nullptr;
        qscilexeravs_disconnectnotify_callback = nullptr;
        qscilexeravs_sender_callback = nullptr;
        qscilexeravs_sendersignalindex_callback = nullptr;
        qscilexeravs_receivers_callback = nullptr;
        qscilexeravs_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerAVS_Metacall_Callback(QsciLexerAVS_Metacall_Callback cb) { qscilexeravs_metacall_callback = cb; }
    inline void setQsciLexerAVS_SetFoldComments_Callback(QsciLexerAVS_SetFoldComments_Callback cb) { qscilexeravs_setfoldcomments_callback = cb; }
    inline void setQsciLexerAVS_SetFoldCompact_Callback(QsciLexerAVS_SetFoldCompact_Callback cb) { qscilexeravs_setfoldcompact_callback = cb; }
    inline void setQsciLexerAVS_Language_Callback(QsciLexerAVS_Language_Callback cb) { qscilexeravs_language_callback = cb; }
    inline void setQsciLexerAVS_Lexer_Callback(QsciLexerAVS_Lexer_Callback cb) { qscilexeravs_lexer_callback = cb; }
    inline void setQsciLexerAVS_LexerId_Callback(QsciLexerAVS_LexerId_Callback cb) { qscilexeravs_lexerid_callback = cb; }
    inline void setQsciLexerAVS_AutoCompletionFillups_Callback(QsciLexerAVS_AutoCompletionFillups_Callback cb) { qscilexeravs_autocompletionfillups_callback = cb; }
    inline void setQsciLexerAVS_AutoCompletionWordSeparators_Callback(QsciLexerAVS_AutoCompletionWordSeparators_Callback cb) { qscilexeravs_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerAVS_BlockEnd_Callback(QsciLexerAVS_BlockEnd_Callback cb) { qscilexeravs_blockend_callback = cb; }
    inline void setQsciLexerAVS_BlockLookback_Callback(QsciLexerAVS_BlockLookback_Callback cb) { qscilexeravs_blocklookback_callback = cb; }
    inline void setQsciLexerAVS_BlockStart_Callback(QsciLexerAVS_BlockStart_Callback cb) { qscilexeravs_blockstart_callback = cb; }
    inline void setQsciLexerAVS_BlockStartKeyword_Callback(QsciLexerAVS_BlockStartKeyword_Callback cb) { qscilexeravs_blockstartkeyword_callback = cb; }
    inline void setQsciLexerAVS_BraceStyle_Callback(QsciLexerAVS_BraceStyle_Callback cb) { qscilexeravs_bracestyle_callback = cb; }
    inline void setQsciLexerAVS_CaseSensitive_Callback(QsciLexerAVS_CaseSensitive_Callback cb) { qscilexeravs_casesensitive_callback = cb; }
    inline void setQsciLexerAVS_Color_Callback(QsciLexerAVS_Color_Callback cb) { qscilexeravs_color_callback = cb; }
    inline void setQsciLexerAVS_EolFill_Callback(QsciLexerAVS_EolFill_Callback cb) { qscilexeravs_eolfill_callback = cb; }
    inline void setQsciLexerAVS_Font_Callback(QsciLexerAVS_Font_Callback cb) { qscilexeravs_font_callback = cb; }
    inline void setQsciLexerAVS_IndentationGuideView_Callback(QsciLexerAVS_IndentationGuideView_Callback cb) { qscilexeravs_indentationguideview_callback = cb; }
    inline void setQsciLexerAVS_Keywords_Callback(QsciLexerAVS_Keywords_Callback cb) { qscilexeravs_keywords_callback = cb; }
    inline void setQsciLexerAVS_DefaultStyle_Callback(QsciLexerAVS_DefaultStyle_Callback cb) { qscilexeravs_defaultstyle_callback = cb; }
    inline void setQsciLexerAVS_Description_Callback(QsciLexerAVS_Description_Callback cb) { qscilexeravs_description_callback = cb; }
    inline void setQsciLexerAVS_Paper_Callback(QsciLexerAVS_Paper_Callback cb) { qscilexeravs_paper_callback = cb; }
    inline void setQsciLexerAVS_DefaultColorWithStyle_Callback(QsciLexerAVS_DefaultColorWithStyle_Callback cb) { qscilexeravs_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerAVS_DefaultEolFill_Callback(QsciLexerAVS_DefaultEolFill_Callback cb) { qscilexeravs_defaulteolfill_callback = cb; }
    inline void setQsciLexerAVS_DefaultFontWithStyle_Callback(QsciLexerAVS_DefaultFontWithStyle_Callback cb) { qscilexeravs_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerAVS_DefaultPaperWithStyle_Callback(QsciLexerAVS_DefaultPaperWithStyle_Callback cb) { qscilexeravs_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerAVS_SetEditor_Callback(QsciLexerAVS_SetEditor_Callback cb) { qscilexeravs_seteditor_callback = cb; }
    inline void setQsciLexerAVS_RefreshProperties_Callback(QsciLexerAVS_RefreshProperties_Callback cb) { qscilexeravs_refreshproperties_callback = cb; }
    inline void setQsciLexerAVS_StyleBitsNeeded_Callback(QsciLexerAVS_StyleBitsNeeded_Callback cb) { qscilexeravs_stylebitsneeded_callback = cb; }
    inline void setQsciLexerAVS_WordCharacters_Callback(QsciLexerAVS_WordCharacters_Callback cb) { qscilexeravs_wordcharacters_callback = cb; }
    inline void setQsciLexerAVS_SetAutoIndentStyle_Callback(QsciLexerAVS_SetAutoIndentStyle_Callback cb) { qscilexeravs_setautoindentstyle_callback = cb; }
    inline void setQsciLexerAVS_SetColor_Callback(QsciLexerAVS_SetColor_Callback cb) { qscilexeravs_setcolor_callback = cb; }
    inline void setQsciLexerAVS_SetEolFill_Callback(QsciLexerAVS_SetEolFill_Callback cb) { qscilexeravs_seteolfill_callback = cb; }
    inline void setQsciLexerAVS_SetFont_Callback(QsciLexerAVS_SetFont_Callback cb) { qscilexeravs_setfont_callback = cb; }
    inline void setQsciLexerAVS_SetPaper_Callback(QsciLexerAVS_SetPaper_Callback cb) { qscilexeravs_setpaper_callback = cb; }
    inline void setQsciLexerAVS_ReadProperties_Callback(QsciLexerAVS_ReadProperties_Callback cb) { qscilexeravs_readproperties_callback = cb; }
    inline void setQsciLexerAVS_WriteProperties_Callback(QsciLexerAVS_WriteProperties_Callback cb) { qscilexeravs_writeproperties_callback = cb; }
    inline void setQsciLexerAVS_Event_Callback(QsciLexerAVS_Event_Callback cb) { qscilexeravs_event_callback = cb; }
    inline void setQsciLexerAVS_EventFilter_Callback(QsciLexerAVS_EventFilter_Callback cb) { qscilexeravs_eventfilter_callback = cb; }
    inline void setQsciLexerAVS_TimerEvent_Callback(QsciLexerAVS_TimerEvent_Callback cb) { qscilexeravs_timerevent_callback = cb; }
    inline void setQsciLexerAVS_ChildEvent_Callback(QsciLexerAVS_ChildEvent_Callback cb) { qscilexeravs_childevent_callback = cb; }
    inline void setQsciLexerAVS_CustomEvent_Callback(QsciLexerAVS_CustomEvent_Callback cb) { qscilexeravs_customevent_callback = cb; }
    inline void setQsciLexerAVS_ConnectNotify_Callback(QsciLexerAVS_ConnectNotify_Callback cb) { qscilexeravs_connectnotify_callback = cb; }
    inline void setQsciLexerAVS_DisconnectNotify_Callback(QsciLexerAVS_DisconnectNotify_Callback cb) { qscilexeravs_disconnectnotify_callback = cb; }
    inline void setQsciLexerAVS_Sender_Callback(QsciLexerAVS_Sender_Callback cb) { qscilexeravs_sender_callback = cb; }
    inline void setQsciLexerAVS_SenderSignalIndex_Callback(QsciLexerAVS_SenderSignalIndex_Callback cb) { qscilexeravs_sendersignalindex_callback = cb; }
    inline void setQsciLexerAVS_Receivers_Callback(QsciLexerAVS_Receivers_Callback cb) { qscilexeravs_receivers_callback = cb; }
    inline void setQsciLexerAVS_IsSignalConnected_Callback(QsciLexerAVS_IsSignalConnected_Callback cb) { qscilexeravs_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerAVS_Metacall_IsBase(bool value) const { qscilexeravs_metacall_isbase = value; }
    inline void setQsciLexerAVS_SetFoldComments_IsBase(bool value) const { qscilexeravs_setfoldcomments_isbase = value; }
    inline void setQsciLexerAVS_SetFoldCompact_IsBase(bool value) const { qscilexeravs_setfoldcompact_isbase = value; }
    inline void setQsciLexerAVS_Language_IsBase(bool value) const { qscilexeravs_language_isbase = value; }
    inline void setQsciLexerAVS_Lexer_IsBase(bool value) const { qscilexeravs_lexer_isbase = value; }
    inline void setQsciLexerAVS_LexerId_IsBase(bool value) const { qscilexeravs_lexerid_isbase = value; }
    inline void setQsciLexerAVS_AutoCompletionFillups_IsBase(bool value) const { qscilexeravs_autocompletionfillups_isbase = value; }
    inline void setQsciLexerAVS_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeravs_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerAVS_BlockEnd_IsBase(bool value) const { qscilexeravs_blockend_isbase = value; }
    inline void setQsciLexerAVS_BlockLookback_IsBase(bool value) const { qscilexeravs_blocklookback_isbase = value; }
    inline void setQsciLexerAVS_BlockStart_IsBase(bool value) const { qscilexeravs_blockstart_isbase = value; }
    inline void setQsciLexerAVS_BlockStartKeyword_IsBase(bool value) const { qscilexeravs_blockstartkeyword_isbase = value; }
    inline void setQsciLexerAVS_BraceStyle_IsBase(bool value) const { qscilexeravs_bracestyle_isbase = value; }
    inline void setQsciLexerAVS_CaseSensitive_IsBase(bool value) const { qscilexeravs_casesensitive_isbase = value; }
    inline void setQsciLexerAVS_Color_IsBase(bool value) const { qscilexeravs_color_isbase = value; }
    inline void setQsciLexerAVS_EolFill_IsBase(bool value) const { qscilexeravs_eolfill_isbase = value; }
    inline void setQsciLexerAVS_Font_IsBase(bool value) const { qscilexeravs_font_isbase = value; }
    inline void setQsciLexerAVS_IndentationGuideView_IsBase(bool value) const { qscilexeravs_indentationguideview_isbase = value; }
    inline void setQsciLexerAVS_Keywords_IsBase(bool value) const { qscilexeravs_keywords_isbase = value; }
    inline void setQsciLexerAVS_DefaultStyle_IsBase(bool value) const { qscilexeravs_defaultstyle_isbase = value; }
    inline void setQsciLexerAVS_Description_IsBase(bool value) const { qscilexeravs_description_isbase = value; }
    inline void setQsciLexerAVS_Paper_IsBase(bool value) const { qscilexeravs_paper_isbase = value; }
    inline void setQsciLexerAVS_DefaultColorWithStyle_IsBase(bool value) const { qscilexeravs_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerAVS_DefaultEolFill_IsBase(bool value) const { qscilexeravs_defaulteolfill_isbase = value; }
    inline void setQsciLexerAVS_DefaultFontWithStyle_IsBase(bool value) const { qscilexeravs_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerAVS_DefaultPaperWithStyle_IsBase(bool value) const { qscilexeravs_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerAVS_SetEditor_IsBase(bool value) const { qscilexeravs_seteditor_isbase = value; }
    inline void setQsciLexerAVS_RefreshProperties_IsBase(bool value) const { qscilexeravs_refreshproperties_isbase = value; }
    inline void setQsciLexerAVS_StyleBitsNeeded_IsBase(bool value) const { qscilexeravs_stylebitsneeded_isbase = value; }
    inline void setQsciLexerAVS_WordCharacters_IsBase(bool value) const { qscilexeravs_wordcharacters_isbase = value; }
    inline void setQsciLexerAVS_SetAutoIndentStyle_IsBase(bool value) const { qscilexeravs_setautoindentstyle_isbase = value; }
    inline void setQsciLexerAVS_SetColor_IsBase(bool value) const { qscilexeravs_setcolor_isbase = value; }
    inline void setQsciLexerAVS_SetEolFill_IsBase(bool value) const { qscilexeravs_seteolfill_isbase = value; }
    inline void setQsciLexerAVS_SetFont_IsBase(bool value) const { qscilexeravs_setfont_isbase = value; }
    inline void setQsciLexerAVS_SetPaper_IsBase(bool value) const { qscilexeravs_setpaper_isbase = value; }
    inline void setQsciLexerAVS_ReadProperties_IsBase(bool value) const { qscilexeravs_readproperties_isbase = value; }
    inline void setQsciLexerAVS_WriteProperties_IsBase(bool value) const { qscilexeravs_writeproperties_isbase = value; }
    inline void setQsciLexerAVS_Event_IsBase(bool value) const { qscilexeravs_event_isbase = value; }
    inline void setQsciLexerAVS_EventFilter_IsBase(bool value) const { qscilexeravs_eventfilter_isbase = value; }
    inline void setQsciLexerAVS_TimerEvent_IsBase(bool value) const { qscilexeravs_timerevent_isbase = value; }
    inline void setQsciLexerAVS_ChildEvent_IsBase(bool value) const { qscilexeravs_childevent_isbase = value; }
    inline void setQsciLexerAVS_CustomEvent_IsBase(bool value) const { qscilexeravs_customevent_isbase = value; }
    inline void setQsciLexerAVS_ConnectNotify_IsBase(bool value) const { qscilexeravs_connectnotify_isbase = value; }
    inline void setQsciLexerAVS_DisconnectNotify_IsBase(bool value) const { qscilexeravs_disconnectnotify_isbase = value; }
    inline void setQsciLexerAVS_Sender_IsBase(bool value) const { qscilexeravs_sender_isbase = value; }
    inline void setQsciLexerAVS_SenderSignalIndex_IsBase(bool value) const { qscilexeravs_sendersignalindex_isbase = value; }
    inline void setQsciLexerAVS_Receivers_IsBase(bool value) const { qscilexeravs_receivers_isbase = value; }
    inline void setQsciLexerAVS_IsSignalConnected_IsBase(bool value) const { qscilexeravs_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeravs_metacall_isbase) {
            qscilexeravs_metacall_isbase = false;
            return QsciLexerAVS::qt_metacall(param1, param2, param3);
        } else if (qscilexeravs_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexeravs_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeravs_setfoldcomments_isbase) {
            qscilexeravs_setfoldcomments_isbase = false;
            QsciLexerAVS::setFoldComments(fold);
        } else if (qscilexeravs_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexeravs_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerAVS::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexeravs_setfoldcompact_isbase) {
            qscilexeravs_setfoldcompact_isbase = false;
            QsciLexerAVS::setFoldCompact(fold);
        } else if (qscilexeravs_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexeravs_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerAVS::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeravs_language_callback != nullptr) {
            const char* callback_ret = qscilexeravs_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeravs_lexer_isbase) {
            qscilexeravs_lexer_isbase = false;
            return QsciLexerAVS::lexer();
        } else if (qscilexeravs_lexer_callback != nullptr) {
            const char* callback_ret = qscilexeravs_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerAVS::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeravs_lexerid_isbase) {
            qscilexeravs_lexerid_isbase = false;
            return QsciLexerAVS::lexerId();
        } else if (qscilexeravs_lexerid_callback != nullptr) {
            int callback_ret = qscilexeravs_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeravs_autocompletionfillups_isbase) {
            qscilexeravs_autocompletionfillups_isbase = false;
            return QsciLexerAVS::autoCompletionFillups();
        } else if (qscilexeravs_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexeravs_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerAVS::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexeravs_autocompletionwordseparators_isbase) {
            qscilexeravs_autocompletionwordseparators_isbase = false;
            return QsciLexerAVS::autoCompletionWordSeparators();
        } else if (qscilexeravs_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexeravs_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerAVS::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeravs_blockend_isbase) {
            qscilexeravs_blockend_isbase = false;
            return QsciLexerAVS::blockEnd(style);
        } else if (qscilexeravs_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeravs_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeravs_blocklookback_isbase) {
            qscilexeravs_blocklookback_isbase = false;
            return QsciLexerAVS::blockLookback();
        } else if (qscilexeravs_blocklookback_callback != nullptr) {
            int callback_ret = qscilexeravs_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeravs_blockstart_isbase) {
            qscilexeravs_blockstart_isbase = false;
            return QsciLexerAVS::blockStart(style);
        } else if (qscilexeravs_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeravs_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeravs_blockstartkeyword_isbase) {
            qscilexeravs_blockstartkeyword_isbase = false;
            return QsciLexerAVS::blockStartKeyword(style);
        } else if (qscilexeravs_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeravs_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeravs_bracestyle_isbase) {
            qscilexeravs_bracestyle_isbase = false;
            return QsciLexerAVS::braceStyle();
        } else if (qscilexeravs_bracestyle_callback != nullptr) {
            int callback_ret = qscilexeravs_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeravs_casesensitive_isbase) {
            qscilexeravs_casesensitive_isbase = false;
            return QsciLexerAVS::caseSensitive();
        } else if (qscilexeravs_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexeravs_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerAVS::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeravs_color_isbase) {
            qscilexeravs_color_isbase = false;
            return QsciLexerAVS::color(style);
        } else if (qscilexeravs_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeravs_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeravs_eolfill_isbase) {
            qscilexeravs_eolfill_isbase = false;
            return QsciLexerAVS::eolFill(style);
        } else if (qscilexeravs_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeravs_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeravs_font_isbase) {
            qscilexeravs_font_isbase = false;
            return QsciLexerAVS::font(style);
        } else if (qscilexeravs_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeravs_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeravs_indentationguideview_isbase) {
            qscilexeravs_indentationguideview_isbase = false;
            return QsciLexerAVS::indentationGuideView();
        } else if (qscilexeravs_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexeravs_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeravs_keywords_isbase) {
            qscilexeravs_keywords_isbase = false;
            return QsciLexerAVS::keywords(set);
        } else if (qscilexeravs_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexeravs_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeravs_defaultstyle_isbase) {
            qscilexeravs_defaultstyle_isbase = false;
            return QsciLexerAVS::defaultStyle();
        } else if (qscilexeravs_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexeravs_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeravs_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexeravs_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeravs_paper_isbase) {
            qscilexeravs_paper_isbase = false;
            return QsciLexerAVS::paper(style);
        } else if (qscilexeravs_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeravs_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeravs_defaultcolorwithstyle_isbase) {
            qscilexeravs_defaultcolorwithstyle_isbase = false;
            return QsciLexerAVS::defaultColor(style);
        } else if (qscilexeravs_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeravs_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeravs_defaulteolfill_isbase) {
            qscilexeravs_defaulteolfill_isbase = false;
            return QsciLexerAVS::defaultEolFill(style);
        } else if (qscilexeravs_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeravs_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeravs_defaultfontwithstyle_isbase) {
            qscilexeravs_defaultfontwithstyle_isbase = false;
            return QsciLexerAVS::defaultFont(style);
        } else if (qscilexeravs_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeravs_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeravs_defaultpaperwithstyle_isbase) {
            qscilexeravs_defaultpaperwithstyle_isbase = false;
            return QsciLexerAVS::defaultPaper(style);
        } else if (qscilexeravs_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeravs_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAVS::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeravs_seteditor_isbase) {
            qscilexeravs_seteditor_isbase = false;
            QsciLexerAVS::setEditor(editor);
        } else if (qscilexeravs_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexeravs_seteditor_callback(this, cbval1);
        } else {
            QsciLexerAVS::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeravs_refreshproperties_isbase) {
            qscilexeravs_refreshproperties_isbase = false;
            QsciLexerAVS::refreshProperties();
        } else if (qscilexeravs_refreshproperties_callback != nullptr) {
            qscilexeravs_refreshproperties_callback();
        } else {
            QsciLexerAVS::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeravs_stylebitsneeded_isbase) {
            qscilexeravs_stylebitsneeded_isbase = false;
            return QsciLexerAVS::styleBitsNeeded();
        } else if (qscilexeravs_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexeravs_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeravs_wordcharacters_isbase) {
            qscilexeravs_wordcharacters_isbase = false;
            return QsciLexerAVS::wordCharacters();
        } else if (qscilexeravs_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexeravs_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerAVS::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeravs_setautoindentstyle_isbase) {
            qscilexeravs_setautoindentstyle_isbase = false;
            QsciLexerAVS::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexeravs_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexeravs_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerAVS::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeravs_setcolor_isbase) {
            qscilexeravs_setcolor_isbase = false;
            QsciLexerAVS::setColor(c, style);
        } else if (qscilexeravs_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeravs_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAVS::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeravs_seteolfill_isbase) {
            qscilexeravs_seteolfill_isbase = false;
            QsciLexerAVS::setEolFill(eoffill, style);
        } else if (qscilexeravs_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexeravs_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAVS::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeravs_setfont_isbase) {
            qscilexeravs_setfont_isbase = false;
            QsciLexerAVS::setFont(f, style);
        } else if (qscilexeravs_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexeravs_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAVS::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeravs_setpaper_isbase) {
            qscilexeravs_setpaper_isbase = false;
            QsciLexerAVS::setPaper(c, style);
        } else if (qscilexeravs_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeravs_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAVS::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeravs_readproperties_isbase) {
            qscilexeravs_readproperties_isbase = false;
            return QsciLexerAVS::readProperties(qs, prefix);
        } else if (qscilexeravs_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexeravs_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAVS::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeravs_writeproperties_isbase) {
            qscilexeravs_writeproperties_isbase = false;
            return QsciLexerAVS::writeProperties(qs, prefix);
        } else if (qscilexeravs_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexeravs_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAVS::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeravs_event_isbase) {
            qscilexeravs_event_isbase = false;
            return QsciLexerAVS::event(event);
        } else if (qscilexeravs_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexeravs_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeravs_eventfilter_isbase) {
            qscilexeravs_eventfilter_isbase = false;
            return QsciLexerAVS::eventFilter(watched, event);
        } else if (qscilexeravs_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexeravs_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAVS::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeravs_timerevent_isbase) {
            qscilexeravs_timerevent_isbase = false;
            QsciLexerAVS::timerEvent(event);
        } else if (qscilexeravs_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexeravs_timerevent_callback(this, cbval1);
        } else {
            QsciLexerAVS::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeravs_childevent_isbase) {
            qscilexeravs_childevent_isbase = false;
            QsciLexerAVS::childEvent(event);
        } else if (qscilexeravs_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexeravs_childevent_callback(this, cbval1);
        } else {
            QsciLexerAVS::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeravs_customevent_isbase) {
            qscilexeravs_customevent_isbase = false;
            QsciLexerAVS::customEvent(event);
        } else if (qscilexeravs_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexeravs_customevent_callback(this, cbval1);
        } else {
            QsciLexerAVS::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeravs_connectnotify_isbase) {
            qscilexeravs_connectnotify_isbase = false;
            QsciLexerAVS::connectNotify(signal);
        } else if (qscilexeravs_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeravs_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerAVS::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeravs_disconnectnotify_isbase) {
            qscilexeravs_disconnectnotify_isbase = false;
            QsciLexerAVS::disconnectNotify(signal);
        } else if (qscilexeravs_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeravs_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerAVS::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeravs_sender_isbase) {
            qscilexeravs_sender_isbase = false;
            return QsciLexerAVS::sender();
        } else if (qscilexeravs_sender_callback != nullptr) {
            QObject* callback_ret = qscilexeravs_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerAVS::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeravs_sendersignalindex_isbase) {
            qscilexeravs_sendersignalindex_isbase = false;
            return QsciLexerAVS::senderSignalIndex();
        } else if (qscilexeravs_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexeravs_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeravs_receivers_isbase) {
            qscilexeravs_receivers_isbase = false;
            return QsciLexerAVS::receivers(signal);
        } else if (qscilexeravs_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexeravs_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAVS::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeravs_issignalconnected_isbase) {
            qscilexeravs_issignalconnected_isbase = false;
            return QsciLexerAVS::isSignalConnected(signal);
        } else if (qscilexeravs_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexeravs_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAVS::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerAVS_ReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAVS_QBaseReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAVS_WriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAVS_QBaseWriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerAVS_TimerEvent(QsciLexerAVS* self, QTimerEvent* event);
    friend void QsciLexerAVS_QBaseTimerEvent(QsciLexerAVS* self, QTimerEvent* event);
    friend void QsciLexerAVS_ChildEvent(QsciLexerAVS* self, QChildEvent* event);
    friend void QsciLexerAVS_QBaseChildEvent(QsciLexerAVS* self, QChildEvent* event);
    friend void QsciLexerAVS_CustomEvent(QsciLexerAVS* self, QEvent* event);
    friend void QsciLexerAVS_QBaseCustomEvent(QsciLexerAVS* self, QEvent* event);
    friend void QsciLexerAVS_ConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
    friend void QsciLexerAVS_QBaseConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
    friend void QsciLexerAVS_DisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
    friend void QsciLexerAVS_QBaseDisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
    friend QObject* QsciLexerAVS_Sender(const QsciLexerAVS* self);
    friend QObject* QsciLexerAVS_QBaseSender(const QsciLexerAVS* self);
    friend int QsciLexerAVS_SenderSignalIndex(const QsciLexerAVS* self);
    friend int QsciLexerAVS_QBaseSenderSignalIndex(const QsciLexerAVS* self);
    friend int QsciLexerAVS_Receivers(const QsciLexerAVS* self, const char* signal);
    friend int QsciLexerAVS_QBaseReceivers(const QsciLexerAVS* self, const char* signal);
    friend bool QsciLexerAVS_IsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal);
    friend bool QsciLexerAVS_QBaseIsSignalConnected(const QsciLexerAVS* self, const QMetaMethod* signal);
};

#endif
