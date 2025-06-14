#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJSON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERJSON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJSON so that we can call protected methods
class VirtualQsciLexerJSON final : public QsciLexerJSON {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerJSON = true;

    // Virtual class public types (including callbacks)
    using QsciLexerJSON_Metacall_Callback = int (*)(QsciLexerJSON*, int, int, void**);
    using QsciLexerJSON_Language_Callback = const char* (*)();
    using QsciLexerJSON_Lexer_Callback = const char* (*)();
    using QsciLexerJSON_LexerId_Callback = int (*)();
    using QsciLexerJSON_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerJSON_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerJSON_BlockEnd_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BlockLookback_Callback = int (*)();
    using QsciLexerJSON_BlockStart_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BraceStyle_Callback = int (*)();
    using QsciLexerJSON_CaseSensitive_Callback = bool (*)();
    using QsciLexerJSON_Color_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_EolFill_Callback = bool (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_Font_Callback = QFont* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_IndentationGuideView_Callback = int (*)();
    using QsciLexerJSON_Keywords_Callback = const char* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultStyle_Callback = int (*)();
    using QsciLexerJSON_Description_Callback = libqt_string (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_Paper_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultEolFill_Callback = bool (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_SetEditor_Callback = void (*)(QsciLexerJSON*, QsciScintilla*);
    using QsciLexerJSON_RefreshProperties_Callback = void (*)();
    using QsciLexerJSON_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerJSON_WordCharacters_Callback = const char* (*)();
    using QsciLexerJSON_SetAutoIndentStyle_Callback = void (*)(QsciLexerJSON*, int);
    using QsciLexerJSON_SetColor_Callback = void (*)(QsciLexerJSON*, QColor*, int);
    using QsciLexerJSON_SetEolFill_Callback = void (*)(QsciLexerJSON*, bool, int);
    using QsciLexerJSON_SetFont_Callback = void (*)(QsciLexerJSON*, QFont*, int);
    using QsciLexerJSON_SetPaper_Callback = void (*)(QsciLexerJSON*, QColor*, int);
    using QsciLexerJSON_ReadProperties_Callback = bool (*)(QsciLexerJSON*, QSettings*, libqt_string);
    using QsciLexerJSON_WriteProperties_Callback = bool (*)(const QsciLexerJSON*, QSettings*, libqt_string);
    using QsciLexerJSON_Event_Callback = bool (*)(QsciLexerJSON*, QEvent*);
    using QsciLexerJSON_EventFilter_Callback = bool (*)(QsciLexerJSON*, QObject*, QEvent*);
    using QsciLexerJSON_TimerEvent_Callback = void (*)(QsciLexerJSON*, QTimerEvent*);
    using QsciLexerJSON_ChildEvent_Callback = void (*)(QsciLexerJSON*, QChildEvent*);
    using QsciLexerJSON_CustomEvent_Callback = void (*)(QsciLexerJSON*, QEvent*);
    using QsciLexerJSON_ConnectNotify_Callback = void (*)(QsciLexerJSON*, QMetaMethod*);
    using QsciLexerJSON_DisconnectNotify_Callback = void (*)(QsciLexerJSON*, QMetaMethod*);
    using QsciLexerJSON_Sender_Callback = QObject* (*)();
    using QsciLexerJSON_SenderSignalIndex_Callback = int (*)();
    using QsciLexerJSON_Receivers_Callback = int (*)(const QsciLexerJSON*, const char*);
    using QsciLexerJSON_IsSignalConnected_Callback = bool (*)(const QsciLexerJSON*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerJSON_Metacall_Callback qscilexerjson_metacall_callback = nullptr;
    QsciLexerJSON_Language_Callback qscilexerjson_language_callback = nullptr;
    QsciLexerJSON_Lexer_Callback qscilexerjson_lexer_callback = nullptr;
    QsciLexerJSON_LexerId_Callback qscilexerjson_lexerid_callback = nullptr;
    QsciLexerJSON_AutoCompletionFillups_Callback qscilexerjson_autocompletionfillups_callback = nullptr;
    QsciLexerJSON_AutoCompletionWordSeparators_Callback qscilexerjson_autocompletionwordseparators_callback = nullptr;
    QsciLexerJSON_BlockEnd_Callback qscilexerjson_blockend_callback = nullptr;
    QsciLexerJSON_BlockLookback_Callback qscilexerjson_blocklookback_callback = nullptr;
    QsciLexerJSON_BlockStart_Callback qscilexerjson_blockstart_callback = nullptr;
    QsciLexerJSON_BlockStartKeyword_Callback qscilexerjson_blockstartkeyword_callback = nullptr;
    QsciLexerJSON_BraceStyle_Callback qscilexerjson_bracestyle_callback = nullptr;
    QsciLexerJSON_CaseSensitive_Callback qscilexerjson_casesensitive_callback = nullptr;
    QsciLexerJSON_Color_Callback qscilexerjson_color_callback = nullptr;
    QsciLexerJSON_EolFill_Callback qscilexerjson_eolfill_callback = nullptr;
    QsciLexerJSON_Font_Callback qscilexerjson_font_callback = nullptr;
    QsciLexerJSON_IndentationGuideView_Callback qscilexerjson_indentationguideview_callback = nullptr;
    QsciLexerJSON_Keywords_Callback qscilexerjson_keywords_callback = nullptr;
    QsciLexerJSON_DefaultStyle_Callback qscilexerjson_defaultstyle_callback = nullptr;
    QsciLexerJSON_Description_Callback qscilexerjson_description_callback = nullptr;
    QsciLexerJSON_Paper_Callback qscilexerjson_paper_callback = nullptr;
    QsciLexerJSON_DefaultColorWithStyle_Callback qscilexerjson_defaultcolorwithstyle_callback = nullptr;
    QsciLexerJSON_DefaultEolFill_Callback qscilexerjson_defaulteolfill_callback = nullptr;
    QsciLexerJSON_DefaultFontWithStyle_Callback qscilexerjson_defaultfontwithstyle_callback = nullptr;
    QsciLexerJSON_DefaultPaperWithStyle_Callback qscilexerjson_defaultpaperwithstyle_callback = nullptr;
    QsciLexerJSON_SetEditor_Callback qscilexerjson_seteditor_callback = nullptr;
    QsciLexerJSON_RefreshProperties_Callback qscilexerjson_refreshproperties_callback = nullptr;
    QsciLexerJSON_StyleBitsNeeded_Callback qscilexerjson_stylebitsneeded_callback = nullptr;
    QsciLexerJSON_WordCharacters_Callback qscilexerjson_wordcharacters_callback = nullptr;
    QsciLexerJSON_SetAutoIndentStyle_Callback qscilexerjson_setautoindentstyle_callback = nullptr;
    QsciLexerJSON_SetColor_Callback qscilexerjson_setcolor_callback = nullptr;
    QsciLexerJSON_SetEolFill_Callback qscilexerjson_seteolfill_callback = nullptr;
    QsciLexerJSON_SetFont_Callback qscilexerjson_setfont_callback = nullptr;
    QsciLexerJSON_SetPaper_Callback qscilexerjson_setpaper_callback = nullptr;
    QsciLexerJSON_ReadProperties_Callback qscilexerjson_readproperties_callback = nullptr;
    QsciLexerJSON_WriteProperties_Callback qscilexerjson_writeproperties_callback = nullptr;
    QsciLexerJSON_Event_Callback qscilexerjson_event_callback = nullptr;
    QsciLexerJSON_EventFilter_Callback qscilexerjson_eventfilter_callback = nullptr;
    QsciLexerJSON_TimerEvent_Callback qscilexerjson_timerevent_callback = nullptr;
    QsciLexerJSON_ChildEvent_Callback qscilexerjson_childevent_callback = nullptr;
    QsciLexerJSON_CustomEvent_Callback qscilexerjson_customevent_callback = nullptr;
    QsciLexerJSON_ConnectNotify_Callback qscilexerjson_connectnotify_callback = nullptr;
    QsciLexerJSON_DisconnectNotify_Callback qscilexerjson_disconnectnotify_callback = nullptr;
    QsciLexerJSON_Sender_Callback qscilexerjson_sender_callback = nullptr;
    QsciLexerJSON_SenderSignalIndex_Callback qscilexerjson_sendersignalindex_callback = nullptr;
    QsciLexerJSON_Receivers_Callback qscilexerjson_receivers_callback = nullptr;
    QsciLexerJSON_IsSignalConnected_Callback qscilexerjson_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerjson_metacall_isbase = false;
    mutable bool qscilexerjson_language_isbase = false;
    mutable bool qscilexerjson_lexer_isbase = false;
    mutable bool qscilexerjson_lexerid_isbase = false;
    mutable bool qscilexerjson_autocompletionfillups_isbase = false;
    mutable bool qscilexerjson_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerjson_blockend_isbase = false;
    mutable bool qscilexerjson_blocklookback_isbase = false;
    mutable bool qscilexerjson_blockstart_isbase = false;
    mutable bool qscilexerjson_blockstartkeyword_isbase = false;
    mutable bool qscilexerjson_bracestyle_isbase = false;
    mutable bool qscilexerjson_casesensitive_isbase = false;
    mutable bool qscilexerjson_color_isbase = false;
    mutable bool qscilexerjson_eolfill_isbase = false;
    mutable bool qscilexerjson_font_isbase = false;
    mutable bool qscilexerjson_indentationguideview_isbase = false;
    mutable bool qscilexerjson_keywords_isbase = false;
    mutable bool qscilexerjson_defaultstyle_isbase = false;
    mutable bool qscilexerjson_description_isbase = false;
    mutable bool qscilexerjson_paper_isbase = false;
    mutable bool qscilexerjson_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerjson_defaulteolfill_isbase = false;
    mutable bool qscilexerjson_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerjson_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerjson_seteditor_isbase = false;
    mutable bool qscilexerjson_refreshproperties_isbase = false;
    mutable bool qscilexerjson_stylebitsneeded_isbase = false;
    mutable bool qscilexerjson_wordcharacters_isbase = false;
    mutable bool qscilexerjson_setautoindentstyle_isbase = false;
    mutable bool qscilexerjson_setcolor_isbase = false;
    mutable bool qscilexerjson_seteolfill_isbase = false;
    mutable bool qscilexerjson_setfont_isbase = false;
    mutable bool qscilexerjson_setpaper_isbase = false;
    mutable bool qscilexerjson_readproperties_isbase = false;
    mutable bool qscilexerjson_writeproperties_isbase = false;
    mutable bool qscilexerjson_event_isbase = false;
    mutable bool qscilexerjson_eventfilter_isbase = false;
    mutable bool qscilexerjson_timerevent_isbase = false;
    mutable bool qscilexerjson_childevent_isbase = false;
    mutable bool qscilexerjson_customevent_isbase = false;
    mutable bool qscilexerjson_connectnotify_isbase = false;
    mutable bool qscilexerjson_disconnectnotify_isbase = false;
    mutable bool qscilexerjson_sender_isbase = false;
    mutable bool qscilexerjson_sendersignalindex_isbase = false;
    mutable bool qscilexerjson_receivers_isbase = false;
    mutable bool qscilexerjson_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerJSON() : QsciLexerJSON(){};
    VirtualQsciLexerJSON(QObject* parent) : QsciLexerJSON(parent){};

    ~VirtualQsciLexerJSON() {
        qscilexerjson_metacall_callback = nullptr;
        qscilexerjson_language_callback = nullptr;
        qscilexerjson_lexer_callback = nullptr;
        qscilexerjson_lexerid_callback = nullptr;
        qscilexerjson_autocompletionfillups_callback = nullptr;
        qscilexerjson_autocompletionwordseparators_callback = nullptr;
        qscilexerjson_blockend_callback = nullptr;
        qscilexerjson_blocklookback_callback = nullptr;
        qscilexerjson_blockstart_callback = nullptr;
        qscilexerjson_blockstartkeyword_callback = nullptr;
        qscilexerjson_bracestyle_callback = nullptr;
        qscilexerjson_casesensitive_callback = nullptr;
        qscilexerjson_color_callback = nullptr;
        qscilexerjson_eolfill_callback = nullptr;
        qscilexerjson_font_callback = nullptr;
        qscilexerjson_indentationguideview_callback = nullptr;
        qscilexerjson_keywords_callback = nullptr;
        qscilexerjson_defaultstyle_callback = nullptr;
        qscilexerjson_description_callback = nullptr;
        qscilexerjson_paper_callback = nullptr;
        qscilexerjson_defaultcolorwithstyle_callback = nullptr;
        qscilexerjson_defaulteolfill_callback = nullptr;
        qscilexerjson_defaultfontwithstyle_callback = nullptr;
        qscilexerjson_defaultpaperwithstyle_callback = nullptr;
        qscilexerjson_seteditor_callback = nullptr;
        qscilexerjson_refreshproperties_callback = nullptr;
        qscilexerjson_stylebitsneeded_callback = nullptr;
        qscilexerjson_wordcharacters_callback = nullptr;
        qscilexerjson_setautoindentstyle_callback = nullptr;
        qscilexerjson_setcolor_callback = nullptr;
        qscilexerjson_seteolfill_callback = nullptr;
        qscilexerjson_setfont_callback = nullptr;
        qscilexerjson_setpaper_callback = nullptr;
        qscilexerjson_readproperties_callback = nullptr;
        qscilexerjson_writeproperties_callback = nullptr;
        qscilexerjson_event_callback = nullptr;
        qscilexerjson_eventfilter_callback = nullptr;
        qscilexerjson_timerevent_callback = nullptr;
        qscilexerjson_childevent_callback = nullptr;
        qscilexerjson_customevent_callback = nullptr;
        qscilexerjson_connectnotify_callback = nullptr;
        qscilexerjson_disconnectnotify_callback = nullptr;
        qscilexerjson_sender_callback = nullptr;
        qscilexerjson_sendersignalindex_callback = nullptr;
        qscilexerjson_receivers_callback = nullptr;
        qscilexerjson_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerJSON_Metacall_Callback(QsciLexerJSON_Metacall_Callback cb) { qscilexerjson_metacall_callback = cb; }
    inline void setQsciLexerJSON_Language_Callback(QsciLexerJSON_Language_Callback cb) { qscilexerjson_language_callback = cb; }
    inline void setQsciLexerJSON_Lexer_Callback(QsciLexerJSON_Lexer_Callback cb) { qscilexerjson_lexer_callback = cb; }
    inline void setQsciLexerJSON_LexerId_Callback(QsciLexerJSON_LexerId_Callback cb) { qscilexerjson_lexerid_callback = cb; }
    inline void setQsciLexerJSON_AutoCompletionFillups_Callback(QsciLexerJSON_AutoCompletionFillups_Callback cb) { qscilexerjson_autocompletionfillups_callback = cb; }
    inline void setQsciLexerJSON_AutoCompletionWordSeparators_Callback(QsciLexerJSON_AutoCompletionWordSeparators_Callback cb) { qscilexerjson_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerJSON_BlockEnd_Callback(QsciLexerJSON_BlockEnd_Callback cb) { qscilexerjson_blockend_callback = cb; }
    inline void setQsciLexerJSON_BlockLookback_Callback(QsciLexerJSON_BlockLookback_Callback cb) { qscilexerjson_blocklookback_callback = cb; }
    inline void setQsciLexerJSON_BlockStart_Callback(QsciLexerJSON_BlockStart_Callback cb) { qscilexerjson_blockstart_callback = cb; }
    inline void setQsciLexerJSON_BlockStartKeyword_Callback(QsciLexerJSON_BlockStartKeyword_Callback cb) { qscilexerjson_blockstartkeyword_callback = cb; }
    inline void setQsciLexerJSON_BraceStyle_Callback(QsciLexerJSON_BraceStyle_Callback cb) { qscilexerjson_bracestyle_callback = cb; }
    inline void setQsciLexerJSON_CaseSensitive_Callback(QsciLexerJSON_CaseSensitive_Callback cb) { qscilexerjson_casesensitive_callback = cb; }
    inline void setQsciLexerJSON_Color_Callback(QsciLexerJSON_Color_Callback cb) { qscilexerjson_color_callback = cb; }
    inline void setQsciLexerJSON_EolFill_Callback(QsciLexerJSON_EolFill_Callback cb) { qscilexerjson_eolfill_callback = cb; }
    inline void setQsciLexerJSON_Font_Callback(QsciLexerJSON_Font_Callback cb) { qscilexerjson_font_callback = cb; }
    inline void setQsciLexerJSON_IndentationGuideView_Callback(QsciLexerJSON_IndentationGuideView_Callback cb) { qscilexerjson_indentationguideview_callback = cb; }
    inline void setQsciLexerJSON_Keywords_Callback(QsciLexerJSON_Keywords_Callback cb) { qscilexerjson_keywords_callback = cb; }
    inline void setQsciLexerJSON_DefaultStyle_Callback(QsciLexerJSON_DefaultStyle_Callback cb) { qscilexerjson_defaultstyle_callback = cb; }
    inline void setQsciLexerJSON_Description_Callback(QsciLexerJSON_Description_Callback cb) { qscilexerjson_description_callback = cb; }
    inline void setQsciLexerJSON_Paper_Callback(QsciLexerJSON_Paper_Callback cb) { qscilexerjson_paper_callback = cb; }
    inline void setQsciLexerJSON_DefaultColorWithStyle_Callback(QsciLexerJSON_DefaultColorWithStyle_Callback cb) { qscilexerjson_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerJSON_DefaultEolFill_Callback(QsciLexerJSON_DefaultEolFill_Callback cb) { qscilexerjson_defaulteolfill_callback = cb; }
    inline void setQsciLexerJSON_DefaultFontWithStyle_Callback(QsciLexerJSON_DefaultFontWithStyle_Callback cb) { qscilexerjson_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerJSON_DefaultPaperWithStyle_Callback(QsciLexerJSON_DefaultPaperWithStyle_Callback cb) { qscilexerjson_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerJSON_SetEditor_Callback(QsciLexerJSON_SetEditor_Callback cb) { qscilexerjson_seteditor_callback = cb; }
    inline void setQsciLexerJSON_RefreshProperties_Callback(QsciLexerJSON_RefreshProperties_Callback cb) { qscilexerjson_refreshproperties_callback = cb; }
    inline void setQsciLexerJSON_StyleBitsNeeded_Callback(QsciLexerJSON_StyleBitsNeeded_Callback cb) { qscilexerjson_stylebitsneeded_callback = cb; }
    inline void setQsciLexerJSON_WordCharacters_Callback(QsciLexerJSON_WordCharacters_Callback cb) { qscilexerjson_wordcharacters_callback = cb; }
    inline void setQsciLexerJSON_SetAutoIndentStyle_Callback(QsciLexerJSON_SetAutoIndentStyle_Callback cb) { qscilexerjson_setautoindentstyle_callback = cb; }
    inline void setQsciLexerJSON_SetColor_Callback(QsciLexerJSON_SetColor_Callback cb) { qscilexerjson_setcolor_callback = cb; }
    inline void setQsciLexerJSON_SetEolFill_Callback(QsciLexerJSON_SetEolFill_Callback cb) { qscilexerjson_seteolfill_callback = cb; }
    inline void setQsciLexerJSON_SetFont_Callback(QsciLexerJSON_SetFont_Callback cb) { qscilexerjson_setfont_callback = cb; }
    inline void setQsciLexerJSON_SetPaper_Callback(QsciLexerJSON_SetPaper_Callback cb) { qscilexerjson_setpaper_callback = cb; }
    inline void setQsciLexerJSON_ReadProperties_Callback(QsciLexerJSON_ReadProperties_Callback cb) { qscilexerjson_readproperties_callback = cb; }
    inline void setQsciLexerJSON_WriteProperties_Callback(QsciLexerJSON_WriteProperties_Callback cb) { qscilexerjson_writeproperties_callback = cb; }
    inline void setQsciLexerJSON_Event_Callback(QsciLexerJSON_Event_Callback cb) { qscilexerjson_event_callback = cb; }
    inline void setQsciLexerJSON_EventFilter_Callback(QsciLexerJSON_EventFilter_Callback cb) { qscilexerjson_eventfilter_callback = cb; }
    inline void setQsciLexerJSON_TimerEvent_Callback(QsciLexerJSON_TimerEvent_Callback cb) { qscilexerjson_timerevent_callback = cb; }
    inline void setQsciLexerJSON_ChildEvent_Callback(QsciLexerJSON_ChildEvent_Callback cb) { qscilexerjson_childevent_callback = cb; }
    inline void setQsciLexerJSON_CustomEvent_Callback(QsciLexerJSON_CustomEvent_Callback cb) { qscilexerjson_customevent_callback = cb; }
    inline void setQsciLexerJSON_ConnectNotify_Callback(QsciLexerJSON_ConnectNotify_Callback cb) { qscilexerjson_connectnotify_callback = cb; }
    inline void setQsciLexerJSON_DisconnectNotify_Callback(QsciLexerJSON_DisconnectNotify_Callback cb) { qscilexerjson_disconnectnotify_callback = cb; }
    inline void setQsciLexerJSON_Sender_Callback(QsciLexerJSON_Sender_Callback cb) { qscilexerjson_sender_callback = cb; }
    inline void setQsciLexerJSON_SenderSignalIndex_Callback(QsciLexerJSON_SenderSignalIndex_Callback cb) { qscilexerjson_sendersignalindex_callback = cb; }
    inline void setQsciLexerJSON_Receivers_Callback(QsciLexerJSON_Receivers_Callback cb) { qscilexerjson_receivers_callback = cb; }
    inline void setQsciLexerJSON_IsSignalConnected_Callback(QsciLexerJSON_IsSignalConnected_Callback cb) { qscilexerjson_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerJSON_Metacall_IsBase(bool value) const { qscilexerjson_metacall_isbase = value; }
    inline void setQsciLexerJSON_Language_IsBase(bool value) const { qscilexerjson_language_isbase = value; }
    inline void setQsciLexerJSON_Lexer_IsBase(bool value) const { qscilexerjson_lexer_isbase = value; }
    inline void setQsciLexerJSON_LexerId_IsBase(bool value) const { qscilexerjson_lexerid_isbase = value; }
    inline void setQsciLexerJSON_AutoCompletionFillups_IsBase(bool value) const { qscilexerjson_autocompletionfillups_isbase = value; }
    inline void setQsciLexerJSON_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerjson_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerJSON_BlockEnd_IsBase(bool value) const { qscilexerjson_blockend_isbase = value; }
    inline void setQsciLexerJSON_BlockLookback_IsBase(bool value) const { qscilexerjson_blocklookback_isbase = value; }
    inline void setQsciLexerJSON_BlockStart_IsBase(bool value) const { qscilexerjson_blockstart_isbase = value; }
    inline void setQsciLexerJSON_BlockStartKeyword_IsBase(bool value) const { qscilexerjson_blockstartkeyword_isbase = value; }
    inline void setQsciLexerJSON_BraceStyle_IsBase(bool value) const { qscilexerjson_bracestyle_isbase = value; }
    inline void setQsciLexerJSON_CaseSensitive_IsBase(bool value) const { qscilexerjson_casesensitive_isbase = value; }
    inline void setQsciLexerJSON_Color_IsBase(bool value) const { qscilexerjson_color_isbase = value; }
    inline void setQsciLexerJSON_EolFill_IsBase(bool value) const { qscilexerjson_eolfill_isbase = value; }
    inline void setQsciLexerJSON_Font_IsBase(bool value) const { qscilexerjson_font_isbase = value; }
    inline void setQsciLexerJSON_IndentationGuideView_IsBase(bool value) const { qscilexerjson_indentationguideview_isbase = value; }
    inline void setQsciLexerJSON_Keywords_IsBase(bool value) const { qscilexerjson_keywords_isbase = value; }
    inline void setQsciLexerJSON_DefaultStyle_IsBase(bool value) const { qscilexerjson_defaultstyle_isbase = value; }
    inline void setQsciLexerJSON_Description_IsBase(bool value) const { qscilexerjson_description_isbase = value; }
    inline void setQsciLexerJSON_Paper_IsBase(bool value) const { qscilexerjson_paper_isbase = value; }
    inline void setQsciLexerJSON_DefaultColorWithStyle_IsBase(bool value) const { qscilexerjson_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerJSON_DefaultEolFill_IsBase(bool value) const { qscilexerjson_defaulteolfill_isbase = value; }
    inline void setQsciLexerJSON_DefaultFontWithStyle_IsBase(bool value) const { qscilexerjson_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerJSON_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerjson_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerJSON_SetEditor_IsBase(bool value) const { qscilexerjson_seteditor_isbase = value; }
    inline void setQsciLexerJSON_RefreshProperties_IsBase(bool value) const { qscilexerjson_refreshproperties_isbase = value; }
    inline void setQsciLexerJSON_StyleBitsNeeded_IsBase(bool value) const { qscilexerjson_stylebitsneeded_isbase = value; }
    inline void setQsciLexerJSON_WordCharacters_IsBase(bool value) const { qscilexerjson_wordcharacters_isbase = value; }
    inline void setQsciLexerJSON_SetAutoIndentStyle_IsBase(bool value) const { qscilexerjson_setautoindentstyle_isbase = value; }
    inline void setQsciLexerJSON_SetColor_IsBase(bool value) const { qscilexerjson_setcolor_isbase = value; }
    inline void setQsciLexerJSON_SetEolFill_IsBase(bool value) const { qscilexerjson_seteolfill_isbase = value; }
    inline void setQsciLexerJSON_SetFont_IsBase(bool value) const { qscilexerjson_setfont_isbase = value; }
    inline void setQsciLexerJSON_SetPaper_IsBase(bool value) const { qscilexerjson_setpaper_isbase = value; }
    inline void setQsciLexerJSON_ReadProperties_IsBase(bool value) const { qscilexerjson_readproperties_isbase = value; }
    inline void setQsciLexerJSON_WriteProperties_IsBase(bool value) const { qscilexerjson_writeproperties_isbase = value; }
    inline void setQsciLexerJSON_Event_IsBase(bool value) const { qscilexerjson_event_isbase = value; }
    inline void setQsciLexerJSON_EventFilter_IsBase(bool value) const { qscilexerjson_eventfilter_isbase = value; }
    inline void setQsciLexerJSON_TimerEvent_IsBase(bool value) const { qscilexerjson_timerevent_isbase = value; }
    inline void setQsciLexerJSON_ChildEvent_IsBase(bool value) const { qscilexerjson_childevent_isbase = value; }
    inline void setQsciLexerJSON_CustomEvent_IsBase(bool value) const { qscilexerjson_customevent_isbase = value; }
    inline void setQsciLexerJSON_ConnectNotify_IsBase(bool value) const { qscilexerjson_connectnotify_isbase = value; }
    inline void setQsciLexerJSON_DisconnectNotify_IsBase(bool value) const { qscilexerjson_disconnectnotify_isbase = value; }
    inline void setQsciLexerJSON_Sender_IsBase(bool value) const { qscilexerjson_sender_isbase = value; }
    inline void setQsciLexerJSON_SenderSignalIndex_IsBase(bool value) const { qscilexerjson_sendersignalindex_isbase = value; }
    inline void setQsciLexerJSON_Receivers_IsBase(bool value) const { qscilexerjson_receivers_isbase = value; }
    inline void setQsciLexerJSON_IsSignalConnected_IsBase(bool value) const { qscilexerjson_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjson_metacall_isbase) {
            qscilexerjson_metacall_isbase = false;
            return QsciLexerJSON::qt_metacall(param1, param2, param3);
        } else if (qscilexerjson_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerjson_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerjson_language_callback != nullptr) {
            const char* callback_ret = qscilexerjson_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjson_lexer_isbase) {
            qscilexerjson_lexer_isbase = false;
            return QsciLexerJSON::lexer();
        } else if (qscilexerjson_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerjson_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerJSON::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjson_lexerid_isbase) {
            qscilexerjson_lexerid_isbase = false;
            return QsciLexerJSON::lexerId();
        } else if (qscilexerjson_lexerid_callback != nullptr) {
            int callback_ret = qscilexerjson_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjson_autocompletionfillups_isbase) {
            qscilexerjson_autocompletionfillups_isbase = false;
            return QsciLexerJSON::autoCompletionFillups();
        } else if (qscilexerjson_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerjson_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerJSON::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerjson_autocompletionwordseparators_isbase) {
            qscilexerjson_autocompletionwordseparators_isbase = false;
            return QsciLexerJSON::autoCompletionWordSeparators();
        } else if (qscilexerjson_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerjson_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerJSON::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjson_blockend_isbase) {
            qscilexerjson_blockend_isbase = false;
            return QsciLexerJSON::blockEnd(style);
        } else if (qscilexerjson_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerjson_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjson_blocklookback_isbase) {
            qscilexerjson_blocklookback_isbase = false;
            return QsciLexerJSON::blockLookback();
        } else if (qscilexerjson_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerjson_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjson_blockstart_isbase) {
            qscilexerjson_blockstart_isbase = false;
            return QsciLexerJSON::blockStart(style);
        } else if (qscilexerjson_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerjson_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjson_blockstartkeyword_isbase) {
            qscilexerjson_blockstartkeyword_isbase = false;
            return QsciLexerJSON::blockStartKeyword(style);
        } else if (qscilexerjson_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerjson_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjson_bracestyle_isbase) {
            qscilexerjson_bracestyle_isbase = false;
            return QsciLexerJSON::braceStyle();
        } else if (qscilexerjson_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerjson_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjson_casesensitive_isbase) {
            qscilexerjson_casesensitive_isbase = false;
            return QsciLexerJSON::caseSensitive();
        } else if (qscilexerjson_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerjson_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerJSON::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjson_color_isbase) {
            qscilexerjson_color_isbase = false;
            return QsciLexerJSON::color(style);
        } else if (qscilexerjson_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerjson_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjson_eolfill_isbase) {
            qscilexerjson_eolfill_isbase = false;
            return QsciLexerJSON::eolFill(style);
        } else if (qscilexerjson_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerjson_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjson_font_isbase) {
            qscilexerjson_font_isbase = false;
            return QsciLexerJSON::font(style);
        } else if (qscilexerjson_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerjson_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjson_indentationguideview_isbase) {
            qscilexerjson_indentationguideview_isbase = false;
            return QsciLexerJSON::indentationGuideView();
        } else if (qscilexerjson_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerjson_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjson_keywords_isbase) {
            qscilexerjson_keywords_isbase = false;
            return QsciLexerJSON::keywords(set);
        } else if (qscilexerjson_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerjson_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjson_defaultstyle_isbase) {
            qscilexerjson_defaultstyle_isbase = false;
            return QsciLexerJSON::defaultStyle();
        } else if (qscilexerjson_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerjson_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerjson_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerjson_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerjson_paper_isbase) {
            qscilexerjson_paper_isbase = false;
            return QsciLexerJSON::paper(style);
        } else if (qscilexerjson_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerjson_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjson_defaultcolorwithstyle_isbase) {
            qscilexerjson_defaultcolorwithstyle_isbase = false;
            return QsciLexerJSON::defaultColor(style);
        } else if (qscilexerjson_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerjson_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjson_defaulteolfill_isbase) {
            qscilexerjson_defaulteolfill_isbase = false;
            return QsciLexerJSON::defaultEolFill(style);
        } else if (qscilexerjson_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerjson_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjson_defaultfontwithstyle_isbase) {
            qscilexerjson_defaultfontwithstyle_isbase = false;
            return QsciLexerJSON::defaultFont(style);
        } else if (qscilexerjson_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerjson_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjson_defaultpaperwithstyle_isbase) {
            qscilexerjson_defaultpaperwithstyle_isbase = false;
            return QsciLexerJSON::defaultPaper(style);
        } else if (qscilexerjson_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerjson_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerJSON::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjson_seteditor_isbase) {
            qscilexerjson_seteditor_isbase = false;
            QsciLexerJSON::setEditor(editor);
        } else if (qscilexerjson_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerjson_seteditor_callback(this, cbval1);
        } else {
            QsciLexerJSON::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjson_refreshproperties_isbase) {
            qscilexerjson_refreshproperties_isbase = false;
            QsciLexerJSON::refreshProperties();
        } else if (qscilexerjson_refreshproperties_callback != nullptr) {
            qscilexerjson_refreshproperties_callback();
        } else {
            QsciLexerJSON::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjson_stylebitsneeded_isbase) {
            qscilexerjson_stylebitsneeded_isbase = false;
            return QsciLexerJSON::styleBitsNeeded();
        } else if (qscilexerjson_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerjson_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjson_wordcharacters_isbase) {
            qscilexerjson_wordcharacters_isbase = false;
            return QsciLexerJSON::wordCharacters();
        } else if (qscilexerjson_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerjson_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerJSON::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjson_setautoindentstyle_isbase) {
            qscilexerjson_setautoindentstyle_isbase = false;
            QsciLexerJSON::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerjson_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerjson_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerJSON::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjson_setcolor_isbase) {
            qscilexerjson_setcolor_isbase = false;
            QsciLexerJSON::setColor(c, style);
        } else if (qscilexerjson_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerjson_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerJSON::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjson_seteolfill_isbase) {
            qscilexerjson_seteolfill_isbase = false;
            QsciLexerJSON::setEolFill(eoffill, style);
        } else if (qscilexerjson_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerjson_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerJSON::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjson_setfont_isbase) {
            qscilexerjson_setfont_isbase = false;
            QsciLexerJSON::setFont(f, style);
        } else if (qscilexerjson_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerjson_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerJSON::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjson_setpaper_isbase) {
            qscilexerjson_setpaper_isbase = false;
            QsciLexerJSON::setPaper(c, style);
        } else if (qscilexerjson_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerjson_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerJSON::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjson_readproperties_isbase) {
            qscilexerjson_readproperties_isbase = false;
            return QsciLexerJSON::readProperties(qs, prefix);
        } else if (qscilexerjson_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerjson_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerJSON::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjson_writeproperties_isbase) {
            qscilexerjson_writeproperties_isbase = false;
            return QsciLexerJSON::writeProperties(qs, prefix);
        } else if (qscilexerjson_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerjson_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerJSON::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjson_event_isbase) {
            qscilexerjson_event_isbase = false;
            return QsciLexerJSON::event(event);
        } else if (qscilexerjson_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerjson_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjson_eventfilter_isbase) {
            qscilexerjson_eventfilter_isbase = false;
            return QsciLexerJSON::eventFilter(watched, event);
        } else if (qscilexerjson_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerjson_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerJSON::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjson_timerevent_isbase) {
            qscilexerjson_timerevent_isbase = false;
            QsciLexerJSON::timerEvent(event);
        } else if (qscilexerjson_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerjson_timerevent_callback(this, cbval1);
        } else {
            QsciLexerJSON::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjson_childevent_isbase) {
            qscilexerjson_childevent_isbase = false;
            QsciLexerJSON::childEvent(event);
        } else if (qscilexerjson_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerjson_childevent_callback(this, cbval1);
        } else {
            QsciLexerJSON::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjson_customevent_isbase) {
            qscilexerjson_customevent_isbase = false;
            QsciLexerJSON::customEvent(event);
        } else if (qscilexerjson_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerjson_customevent_callback(this, cbval1);
        } else {
            QsciLexerJSON::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjson_connectnotify_isbase) {
            qscilexerjson_connectnotify_isbase = false;
            QsciLexerJSON::connectNotify(signal);
        } else if (qscilexerjson_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerjson_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerJSON::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjson_disconnectnotify_isbase) {
            qscilexerjson_disconnectnotify_isbase = false;
            QsciLexerJSON::disconnectNotify(signal);
        } else if (qscilexerjson_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerjson_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerJSON::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerjson_sender_isbase) {
            qscilexerjson_sender_isbase = false;
            return QsciLexerJSON::sender();
        } else if (qscilexerjson_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerjson_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerJSON::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerjson_sendersignalindex_isbase) {
            qscilexerjson_sendersignalindex_isbase = false;
            return QsciLexerJSON::senderSignalIndex();
        } else if (qscilexerjson_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerjson_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerjson_receivers_isbase) {
            qscilexerjson_receivers_isbase = false;
            return QsciLexerJSON::receivers(signal);
        } else if (qscilexerjson_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerjson_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerJSON::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerjson_issignalconnected_isbase) {
            qscilexerjson_issignalconnected_isbase = false;
            return QsciLexerJSON::isSignalConnected(signal);
        } else if (qscilexerjson_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerjson_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerJSON::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerJSON_ReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJSON_QBaseReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJSON_WriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJSON_QBaseWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJSON_TimerEvent(QsciLexerJSON* self, QTimerEvent* event);
    friend void QsciLexerJSON_QBaseTimerEvent(QsciLexerJSON* self, QTimerEvent* event);
    friend void QsciLexerJSON_ChildEvent(QsciLexerJSON* self, QChildEvent* event);
    friend void QsciLexerJSON_QBaseChildEvent(QsciLexerJSON* self, QChildEvent* event);
    friend void QsciLexerJSON_CustomEvent(QsciLexerJSON* self, QEvent* event);
    friend void QsciLexerJSON_QBaseCustomEvent(QsciLexerJSON* self, QEvent* event);
    friend void QsciLexerJSON_ConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
    friend void QsciLexerJSON_QBaseConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
    friend void QsciLexerJSON_DisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
    friend void QsciLexerJSON_QBaseDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
    friend QObject* QsciLexerJSON_Sender(const QsciLexerJSON* self);
    friend QObject* QsciLexerJSON_QBaseSender(const QsciLexerJSON* self);
    friend int QsciLexerJSON_SenderSignalIndex(const QsciLexerJSON* self);
    friend int QsciLexerJSON_QBaseSenderSignalIndex(const QsciLexerJSON* self);
    friend int QsciLexerJSON_Receivers(const QsciLexerJSON* self, const char* signal);
    friend int QsciLexerJSON_QBaseReceivers(const QsciLexerJSON* self, const char* signal);
    friend bool QsciLexerJSON_IsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal);
    friend bool QsciLexerJSON_QBaseIsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal);
};

#endif
