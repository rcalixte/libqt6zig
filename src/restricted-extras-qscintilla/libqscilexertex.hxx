#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTeX so that we can call protected methods
class VirtualQsciLexerTeX final : public QsciLexerTeX {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerTeX = true;

    // Virtual class public types (including callbacks)
    using QsciLexerTeX_Metacall_Callback = int (*)(QsciLexerTeX*, int, int, void**);
    using QsciLexerTeX_Language_Callback = const char* (*)();
    using QsciLexerTeX_Lexer_Callback = const char* (*)();
    using QsciLexerTeX_LexerId_Callback = int (*)();
    using QsciLexerTeX_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerTeX_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerTeX_BlockEnd_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockLookback_Callback = int (*)();
    using QsciLexerTeX_BlockStart_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BraceStyle_Callback = int (*)();
    using QsciLexerTeX_CaseSensitive_Callback = bool (*)();
    using QsciLexerTeX_Color_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_EolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Font_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_IndentationGuideView_Callback = int (*)();
    using QsciLexerTeX_Keywords_Callback = const char* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultStyle_Callback = int (*)();
    using QsciLexerTeX_Description_Callback = libqt_string (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Paper_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultEolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_SetEditor_Callback = void (*)(QsciLexerTeX*, QsciScintilla*);
    using QsciLexerTeX_RefreshProperties_Callback = void (*)();
    using QsciLexerTeX_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerTeX_WordCharacters_Callback = const char* (*)();
    using QsciLexerTeX_SetAutoIndentStyle_Callback = void (*)(QsciLexerTeX*, int);
    using QsciLexerTeX_SetColor_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_SetEolFill_Callback = void (*)(QsciLexerTeX*, bool, int);
    using QsciLexerTeX_SetFont_Callback = void (*)(QsciLexerTeX*, QFont*, int);
    using QsciLexerTeX_SetPaper_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_ReadProperties_Callback = bool (*)(QsciLexerTeX*, QSettings*, libqt_string);
    using QsciLexerTeX_WriteProperties_Callback = bool (*)(const QsciLexerTeX*, QSettings*, libqt_string);
    using QsciLexerTeX_Event_Callback = bool (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_EventFilter_Callback = bool (*)(QsciLexerTeX*, QObject*, QEvent*);
    using QsciLexerTeX_TimerEvent_Callback = void (*)(QsciLexerTeX*, QTimerEvent*);
    using QsciLexerTeX_ChildEvent_Callback = void (*)(QsciLexerTeX*, QChildEvent*);
    using QsciLexerTeX_CustomEvent_Callback = void (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_ConnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX_DisconnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX_TextAsBytes_Callback = libqt_string (*)(const QsciLexerTeX*, libqt_string);
    using QsciLexerTeX_BytesAsText_Callback = libqt_string (*)(const QsciLexerTeX*, const char*, int);
    using QsciLexerTeX_Sender_Callback = QObject* (*)();
    using QsciLexerTeX_SenderSignalIndex_Callback = int (*)();
    using QsciLexerTeX_Receivers_Callback = int (*)(const QsciLexerTeX*, const char*);
    using QsciLexerTeX_IsSignalConnected_Callback = bool (*)(const QsciLexerTeX*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerTeX_Metacall_Callback qscilexertex_metacall_callback = nullptr;
    QsciLexerTeX_Language_Callback qscilexertex_language_callback = nullptr;
    QsciLexerTeX_Lexer_Callback qscilexertex_lexer_callback = nullptr;
    QsciLexerTeX_LexerId_Callback qscilexertex_lexerid_callback = nullptr;
    QsciLexerTeX_AutoCompletionFillups_Callback qscilexertex_autocompletionfillups_callback = nullptr;
    QsciLexerTeX_AutoCompletionWordSeparators_Callback qscilexertex_autocompletionwordseparators_callback = nullptr;
    QsciLexerTeX_BlockEnd_Callback qscilexertex_blockend_callback = nullptr;
    QsciLexerTeX_BlockLookback_Callback qscilexertex_blocklookback_callback = nullptr;
    QsciLexerTeX_BlockStart_Callback qscilexertex_blockstart_callback = nullptr;
    QsciLexerTeX_BlockStartKeyword_Callback qscilexertex_blockstartkeyword_callback = nullptr;
    QsciLexerTeX_BraceStyle_Callback qscilexertex_bracestyle_callback = nullptr;
    QsciLexerTeX_CaseSensitive_Callback qscilexertex_casesensitive_callback = nullptr;
    QsciLexerTeX_Color_Callback qscilexertex_color_callback = nullptr;
    QsciLexerTeX_EolFill_Callback qscilexertex_eolfill_callback = nullptr;
    QsciLexerTeX_Font_Callback qscilexertex_font_callback = nullptr;
    QsciLexerTeX_IndentationGuideView_Callback qscilexertex_indentationguideview_callback = nullptr;
    QsciLexerTeX_Keywords_Callback qscilexertex_keywords_callback = nullptr;
    QsciLexerTeX_DefaultStyle_Callback qscilexertex_defaultstyle_callback = nullptr;
    QsciLexerTeX_Description_Callback qscilexertex_description_callback = nullptr;
    QsciLexerTeX_Paper_Callback qscilexertex_paper_callback = nullptr;
    QsciLexerTeX_DefaultColorWithStyle_Callback qscilexertex_defaultcolorwithstyle_callback = nullptr;
    QsciLexerTeX_DefaultEolFill_Callback qscilexertex_defaulteolfill_callback = nullptr;
    QsciLexerTeX_DefaultFontWithStyle_Callback qscilexertex_defaultfontwithstyle_callback = nullptr;
    QsciLexerTeX_DefaultPaperWithStyle_Callback qscilexertex_defaultpaperwithstyle_callback = nullptr;
    QsciLexerTeX_SetEditor_Callback qscilexertex_seteditor_callback = nullptr;
    QsciLexerTeX_RefreshProperties_Callback qscilexertex_refreshproperties_callback = nullptr;
    QsciLexerTeX_StyleBitsNeeded_Callback qscilexertex_stylebitsneeded_callback = nullptr;
    QsciLexerTeX_WordCharacters_Callback qscilexertex_wordcharacters_callback = nullptr;
    QsciLexerTeX_SetAutoIndentStyle_Callback qscilexertex_setautoindentstyle_callback = nullptr;
    QsciLexerTeX_SetColor_Callback qscilexertex_setcolor_callback = nullptr;
    QsciLexerTeX_SetEolFill_Callback qscilexertex_seteolfill_callback = nullptr;
    QsciLexerTeX_SetFont_Callback qscilexertex_setfont_callback = nullptr;
    QsciLexerTeX_SetPaper_Callback qscilexertex_setpaper_callback = nullptr;
    QsciLexerTeX_ReadProperties_Callback qscilexertex_readproperties_callback = nullptr;
    QsciLexerTeX_WriteProperties_Callback qscilexertex_writeproperties_callback = nullptr;
    QsciLexerTeX_Event_Callback qscilexertex_event_callback = nullptr;
    QsciLexerTeX_EventFilter_Callback qscilexertex_eventfilter_callback = nullptr;
    QsciLexerTeX_TimerEvent_Callback qscilexertex_timerevent_callback = nullptr;
    QsciLexerTeX_ChildEvent_Callback qscilexertex_childevent_callback = nullptr;
    QsciLexerTeX_CustomEvent_Callback qscilexertex_customevent_callback = nullptr;
    QsciLexerTeX_ConnectNotify_Callback qscilexertex_connectnotify_callback = nullptr;
    QsciLexerTeX_DisconnectNotify_Callback qscilexertex_disconnectnotify_callback = nullptr;
    QsciLexerTeX_TextAsBytes_Callback qscilexertex_textasbytes_callback = nullptr;
    QsciLexerTeX_BytesAsText_Callback qscilexertex_bytesastext_callback = nullptr;
    QsciLexerTeX_Sender_Callback qscilexertex_sender_callback = nullptr;
    QsciLexerTeX_SenderSignalIndex_Callback qscilexertex_sendersignalindex_callback = nullptr;
    QsciLexerTeX_Receivers_Callback qscilexertex_receivers_callback = nullptr;
    QsciLexerTeX_IsSignalConnected_Callback qscilexertex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexertex_metacall_isbase = false;
    mutable bool qscilexertex_language_isbase = false;
    mutable bool qscilexertex_lexer_isbase = false;
    mutable bool qscilexertex_lexerid_isbase = false;
    mutable bool qscilexertex_autocompletionfillups_isbase = false;
    mutable bool qscilexertex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexertex_blockend_isbase = false;
    mutable bool qscilexertex_blocklookback_isbase = false;
    mutable bool qscilexertex_blockstart_isbase = false;
    mutable bool qscilexertex_blockstartkeyword_isbase = false;
    mutable bool qscilexertex_bracestyle_isbase = false;
    mutable bool qscilexertex_casesensitive_isbase = false;
    mutable bool qscilexertex_color_isbase = false;
    mutable bool qscilexertex_eolfill_isbase = false;
    mutable bool qscilexertex_font_isbase = false;
    mutable bool qscilexertex_indentationguideview_isbase = false;
    mutable bool qscilexertex_keywords_isbase = false;
    mutable bool qscilexertex_defaultstyle_isbase = false;
    mutable bool qscilexertex_description_isbase = false;
    mutable bool qscilexertex_paper_isbase = false;
    mutable bool qscilexertex_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexertex_defaulteolfill_isbase = false;
    mutable bool qscilexertex_defaultfontwithstyle_isbase = false;
    mutable bool qscilexertex_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexertex_seteditor_isbase = false;
    mutable bool qscilexertex_refreshproperties_isbase = false;
    mutable bool qscilexertex_stylebitsneeded_isbase = false;
    mutable bool qscilexertex_wordcharacters_isbase = false;
    mutable bool qscilexertex_setautoindentstyle_isbase = false;
    mutable bool qscilexertex_setcolor_isbase = false;
    mutable bool qscilexertex_seteolfill_isbase = false;
    mutable bool qscilexertex_setfont_isbase = false;
    mutable bool qscilexertex_setpaper_isbase = false;
    mutable bool qscilexertex_readproperties_isbase = false;
    mutable bool qscilexertex_writeproperties_isbase = false;
    mutable bool qscilexertex_event_isbase = false;
    mutable bool qscilexertex_eventfilter_isbase = false;
    mutable bool qscilexertex_timerevent_isbase = false;
    mutable bool qscilexertex_childevent_isbase = false;
    mutable bool qscilexertex_customevent_isbase = false;
    mutable bool qscilexertex_connectnotify_isbase = false;
    mutable bool qscilexertex_disconnectnotify_isbase = false;
    mutable bool qscilexertex_textasbytes_isbase = false;
    mutable bool qscilexertex_bytesastext_isbase = false;
    mutable bool qscilexertex_sender_isbase = false;
    mutable bool qscilexertex_sendersignalindex_isbase = false;
    mutable bool qscilexertex_receivers_isbase = false;
    mutable bool qscilexertex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerTeX() : QsciLexerTeX() {};
    VirtualQsciLexerTeX(QObject* parent) : QsciLexerTeX(parent) {};

    ~VirtualQsciLexerTeX() {
        qscilexertex_metacall_callback = nullptr;
        qscilexertex_language_callback = nullptr;
        qscilexertex_lexer_callback = nullptr;
        qscilexertex_lexerid_callback = nullptr;
        qscilexertex_autocompletionfillups_callback = nullptr;
        qscilexertex_autocompletionwordseparators_callback = nullptr;
        qscilexertex_blockend_callback = nullptr;
        qscilexertex_blocklookback_callback = nullptr;
        qscilexertex_blockstart_callback = nullptr;
        qscilexertex_blockstartkeyword_callback = nullptr;
        qscilexertex_bracestyle_callback = nullptr;
        qscilexertex_casesensitive_callback = nullptr;
        qscilexertex_color_callback = nullptr;
        qscilexertex_eolfill_callback = nullptr;
        qscilexertex_font_callback = nullptr;
        qscilexertex_indentationguideview_callback = nullptr;
        qscilexertex_keywords_callback = nullptr;
        qscilexertex_defaultstyle_callback = nullptr;
        qscilexertex_description_callback = nullptr;
        qscilexertex_paper_callback = nullptr;
        qscilexertex_defaultcolorwithstyle_callback = nullptr;
        qscilexertex_defaulteolfill_callback = nullptr;
        qscilexertex_defaultfontwithstyle_callback = nullptr;
        qscilexertex_defaultpaperwithstyle_callback = nullptr;
        qscilexertex_seteditor_callback = nullptr;
        qscilexertex_refreshproperties_callback = nullptr;
        qscilexertex_stylebitsneeded_callback = nullptr;
        qscilexertex_wordcharacters_callback = nullptr;
        qscilexertex_setautoindentstyle_callback = nullptr;
        qscilexertex_setcolor_callback = nullptr;
        qscilexertex_seteolfill_callback = nullptr;
        qscilexertex_setfont_callback = nullptr;
        qscilexertex_setpaper_callback = nullptr;
        qscilexertex_readproperties_callback = nullptr;
        qscilexertex_writeproperties_callback = nullptr;
        qscilexertex_event_callback = nullptr;
        qscilexertex_eventfilter_callback = nullptr;
        qscilexertex_timerevent_callback = nullptr;
        qscilexertex_childevent_callback = nullptr;
        qscilexertex_customevent_callback = nullptr;
        qscilexertex_connectnotify_callback = nullptr;
        qscilexertex_disconnectnotify_callback = nullptr;
        qscilexertex_textasbytes_callback = nullptr;
        qscilexertex_bytesastext_callback = nullptr;
        qscilexertex_sender_callback = nullptr;
        qscilexertex_sendersignalindex_callback = nullptr;
        qscilexertex_receivers_callback = nullptr;
        qscilexertex_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerTeX_Metacall_Callback(QsciLexerTeX_Metacall_Callback cb) { qscilexertex_metacall_callback = cb; }
    inline void setQsciLexerTeX_Language_Callback(QsciLexerTeX_Language_Callback cb) { qscilexertex_language_callback = cb; }
    inline void setQsciLexerTeX_Lexer_Callback(QsciLexerTeX_Lexer_Callback cb) { qscilexertex_lexer_callback = cb; }
    inline void setQsciLexerTeX_LexerId_Callback(QsciLexerTeX_LexerId_Callback cb) { qscilexertex_lexerid_callback = cb; }
    inline void setQsciLexerTeX_AutoCompletionFillups_Callback(QsciLexerTeX_AutoCompletionFillups_Callback cb) { qscilexertex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerTeX_AutoCompletionWordSeparators_Callback(QsciLexerTeX_AutoCompletionWordSeparators_Callback cb) { qscilexertex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerTeX_BlockEnd_Callback(QsciLexerTeX_BlockEnd_Callback cb) { qscilexertex_blockend_callback = cb; }
    inline void setQsciLexerTeX_BlockLookback_Callback(QsciLexerTeX_BlockLookback_Callback cb) { qscilexertex_blocklookback_callback = cb; }
    inline void setQsciLexerTeX_BlockStart_Callback(QsciLexerTeX_BlockStart_Callback cb) { qscilexertex_blockstart_callback = cb; }
    inline void setQsciLexerTeX_BlockStartKeyword_Callback(QsciLexerTeX_BlockStartKeyword_Callback cb) { qscilexertex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerTeX_BraceStyle_Callback(QsciLexerTeX_BraceStyle_Callback cb) { qscilexertex_bracestyle_callback = cb; }
    inline void setQsciLexerTeX_CaseSensitive_Callback(QsciLexerTeX_CaseSensitive_Callback cb) { qscilexertex_casesensitive_callback = cb; }
    inline void setQsciLexerTeX_Color_Callback(QsciLexerTeX_Color_Callback cb) { qscilexertex_color_callback = cb; }
    inline void setQsciLexerTeX_EolFill_Callback(QsciLexerTeX_EolFill_Callback cb) { qscilexertex_eolfill_callback = cb; }
    inline void setQsciLexerTeX_Font_Callback(QsciLexerTeX_Font_Callback cb) { qscilexertex_font_callback = cb; }
    inline void setQsciLexerTeX_IndentationGuideView_Callback(QsciLexerTeX_IndentationGuideView_Callback cb) { qscilexertex_indentationguideview_callback = cb; }
    inline void setQsciLexerTeX_Keywords_Callback(QsciLexerTeX_Keywords_Callback cb) { qscilexertex_keywords_callback = cb; }
    inline void setQsciLexerTeX_DefaultStyle_Callback(QsciLexerTeX_DefaultStyle_Callback cb) { qscilexertex_defaultstyle_callback = cb; }
    inline void setQsciLexerTeX_Description_Callback(QsciLexerTeX_Description_Callback cb) { qscilexertex_description_callback = cb; }
    inline void setQsciLexerTeX_Paper_Callback(QsciLexerTeX_Paper_Callback cb) { qscilexertex_paper_callback = cb; }
    inline void setQsciLexerTeX_DefaultColorWithStyle_Callback(QsciLexerTeX_DefaultColorWithStyle_Callback cb) { qscilexertex_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerTeX_DefaultEolFill_Callback(QsciLexerTeX_DefaultEolFill_Callback cb) { qscilexertex_defaulteolfill_callback = cb; }
    inline void setQsciLexerTeX_DefaultFontWithStyle_Callback(QsciLexerTeX_DefaultFontWithStyle_Callback cb) { qscilexertex_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerTeX_DefaultPaperWithStyle_Callback(QsciLexerTeX_DefaultPaperWithStyle_Callback cb) { qscilexertex_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerTeX_SetEditor_Callback(QsciLexerTeX_SetEditor_Callback cb) { qscilexertex_seteditor_callback = cb; }
    inline void setQsciLexerTeX_RefreshProperties_Callback(QsciLexerTeX_RefreshProperties_Callback cb) { qscilexertex_refreshproperties_callback = cb; }
    inline void setQsciLexerTeX_StyleBitsNeeded_Callback(QsciLexerTeX_StyleBitsNeeded_Callback cb) { qscilexertex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerTeX_WordCharacters_Callback(QsciLexerTeX_WordCharacters_Callback cb) { qscilexertex_wordcharacters_callback = cb; }
    inline void setQsciLexerTeX_SetAutoIndentStyle_Callback(QsciLexerTeX_SetAutoIndentStyle_Callback cb) { qscilexertex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerTeX_SetColor_Callback(QsciLexerTeX_SetColor_Callback cb) { qscilexertex_setcolor_callback = cb; }
    inline void setQsciLexerTeX_SetEolFill_Callback(QsciLexerTeX_SetEolFill_Callback cb) { qscilexertex_seteolfill_callback = cb; }
    inline void setQsciLexerTeX_SetFont_Callback(QsciLexerTeX_SetFont_Callback cb) { qscilexertex_setfont_callback = cb; }
    inline void setQsciLexerTeX_SetPaper_Callback(QsciLexerTeX_SetPaper_Callback cb) { qscilexertex_setpaper_callback = cb; }
    inline void setQsciLexerTeX_ReadProperties_Callback(QsciLexerTeX_ReadProperties_Callback cb) { qscilexertex_readproperties_callback = cb; }
    inline void setQsciLexerTeX_WriteProperties_Callback(QsciLexerTeX_WriteProperties_Callback cb) { qscilexertex_writeproperties_callback = cb; }
    inline void setQsciLexerTeX_Event_Callback(QsciLexerTeX_Event_Callback cb) { qscilexertex_event_callback = cb; }
    inline void setQsciLexerTeX_EventFilter_Callback(QsciLexerTeX_EventFilter_Callback cb) { qscilexertex_eventfilter_callback = cb; }
    inline void setQsciLexerTeX_TimerEvent_Callback(QsciLexerTeX_TimerEvent_Callback cb) { qscilexertex_timerevent_callback = cb; }
    inline void setQsciLexerTeX_ChildEvent_Callback(QsciLexerTeX_ChildEvent_Callback cb) { qscilexertex_childevent_callback = cb; }
    inline void setQsciLexerTeX_CustomEvent_Callback(QsciLexerTeX_CustomEvent_Callback cb) { qscilexertex_customevent_callback = cb; }
    inline void setQsciLexerTeX_ConnectNotify_Callback(QsciLexerTeX_ConnectNotify_Callback cb) { qscilexertex_connectnotify_callback = cb; }
    inline void setQsciLexerTeX_DisconnectNotify_Callback(QsciLexerTeX_DisconnectNotify_Callback cb) { qscilexertex_disconnectnotify_callback = cb; }
    inline void setQsciLexerTeX_TextAsBytes_Callback(QsciLexerTeX_TextAsBytes_Callback cb) { qscilexertex_textasbytes_callback = cb; }
    inline void setQsciLexerTeX_BytesAsText_Callback(QsciLexerTeX_BytesAsText_Callback cb) { qscilexertex_bytesastext_callback = cb; }
    inline void setQsciLexerTeX_Sender_Callback(QsciLexerTeX_Sender_Callback cb) { qscilexertex_sender_callback = cb; }
    inline void setQsciLexerTeX_SenderSignalIndex_Callback(QsciLexerTeX_SenderSignalIndex_Callback cb) { qscilexertex_sendersignalindex_callback = cb; }
    inline void setQsciLexerTeX_Receivers_Callback(QsciLexerTeX_Receivers_Callback cb) { qscilexertex_receivers_callback = cb; }
    inline void setQsciLexerTeX_IsSignalConnected_Callback(QsciLexerTeX_IsSignalConnected_Callback cb) { qscilexertex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerTeX_Metacall_IsBase(bool value) const { qscilexertex_metacall_isbase = value; }
    inline void setQsciLexerTeX_Language_IsBase(bool value) const { qscilexertex_language_isbase = value; }
    inline void setQsciLexerTeX_Lexer_IsBase(bool value) const { qscilexertex_lexer_isbase = value; }
    inline void setQsciLexerTeX_LexerId_IsBase(bool value) const { qscilexertex_lexerid_isbase = value; }
    inline void setQsciLexerTeX_AutoCompletionFillups_IsBase(bool value) const { qscilexertex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerTeX_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexertex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerTeX_BlockEnd_IsBase(bool value) const { qscilexertex_blockend_isbase = value; }
    inline void setQsciLexerTeX_BlockLookback_IsBase(bool value) const { qscilexertex_blocklookback_isbase = value; }
    inline void setQsciLexerTeX_BlockStart_IsBase(bool value) const { qscilexertex_blockstart_isbase = value; }
    inline void setQsciLexerTeX_BlockStartKeyword_IsBase(bool value) const { qscilexertex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerTeX_BraceStyle_IsBase(bool value) const { qscilexertex_bracestyle_isbase = value; }
    inline void setQsciLexerTeX_CaseSensitive_IsBase(bool value) const { qscilexertex_casesensitive_isbase = value; }
    inline void setQsciLexerTeX_Color_IsBase(bool value) const { qscilexertex_color_isbase = value; }
    inline void setQsciLexerTeX_EolFill_IsBase(bool value) const { qscilexertex_eolfill_isbase = value; }
    inline void setQsciLexerTeX_Font_IsBase(bool value) const { qscilexertex_font_isbase = value; }
    inline void setQsciLexerTeX_IndentationGuideView_IsBase(bool value) const { qscilexertex_indentationguideview_isbase = value; }
    inline void setQsciLexerTeX_Keywords_IsBase(bool value) const { qscilexertex_keywords_isbase = value; }
    inline void setQsciLexerTeX_DefaultStyle_IsBase(bool value) const { qscilexertex_defaultstyle_isbase = value; }
    inline void setQsciLexerTeX_Description_IsBase(bool value) const { qscilexertex_description_isbase = value; }
    inline void setQsciLexerTeX_Paper_IsBase(bool value) const { qscilexertex_paper_isbase = value; }
    inline void setQsciLexerTeX_DefaultColorWithStyle_IsBase(bool value) const { qscilexertex_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerTeX_DefaultEolFill_IsBase(bool value) const { qscilexertex_defaulteolfill_isbase = value; }
    inline void setQsciLexerTeX_DefaultFontWithStyle_IsBase(bool value) const { qscilexertex_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerTeX_DefaultPaperWithStyle_IsBase(bool value) const { qscilexertex_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerTeX_SetEditor_IsBase(bool value) const { qscilexertex_seteditor_isbase = value; }
    inline void setQsciLexerTeX_RefreshProperties_IsBase(bool value) const { qscilexertex_refreshproperties_isbase = value; }
    inline void setQsciLexerTeX_StyleBitsNeeded_IsBase(bool value) const { qscilexertex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerTeX_WordCharacters_IsBase(bool value) const { qscilexertex_wordcharacters_isbase = value; }
    inline void setQsciLexerTeX_SetAutoIndentStyle_IsBase(bool value) const { qscilexertex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerTeX_SetColor_IsBase(bool value) const { qscilexertex_setcolor_isbase = value; }
    inline void setQsciLexerTeX_SetEolFill_IsBase(bool value) const { qscilexertex_seteolfill_isbase = value; }
    inline void setQsciLexerTeX_SetFont_IsBase(bool value) const { qscilexertex_setfont_isbase = value; }
    inline void setQsciLexerTeX_SetPaper_IsBase(bool value) const { qscilexertex_setpaper_isbase = value; }
    inline void setQsciLexerTeX_ReadProperties_IsBase(bool value) const { qscilexertex_readproperties_isbase = value; }
    inline void setQsciLexerTeX_WriteProperties_IsBase(bool value) const { qscilexertex_writeproperties_isbase = value; }
    inline void setQsciLexerTeX_Event_IsBase(bool value) const { qscilexertex_event_isbase = value; }
    inline void setQsciLexerTeX_EventFilter_IsBase(bool value) const { qscilexertex_eventfilter_isbase = value; }
    inline void setQsciLexerTeX_TimerEvent_IsBase(bool value) const { qscilexertex_timerevent_isbase = value; }
    inline void setQsciLexerTeX_ChildEvent_IsBase(bool value) const { qscilexertex_childevent_isbase = value; }
    inline void setQsciLexerTeX_CustomEvent_IsBase(bool value) const { qscilexertex_customevent_isbase = value; }
    inline void setQsciLexerTeX_ConnectNotify_IsBase(bool value) const { qscilexertex_connectnotify_isbase = value; }
    inline void setQsciLexerTeX_DisconnectNotify_IsBase(bool value) const { qscilexertex_disconnectnotify_isbase = value; }
    inline void setQsciLexerTeX_TextAsBytes_IsBase(bool value) const { qscilexertex_textasbytes_isbase = value; }
    inline void setQsciLexerTeX_BytesAsText_IsBase(bool value) const { qscilexertex_bytesastext_isbase = value; }
    inline void setQsciLexerTeX_Sender_IsBase(bool value) const { qscilexertex_sender_isbase = value; }
    inline void setQsciLexerTeX_SenderSignalIndex_IsBase(bool value) const { qscilexertex_sendersignalindex_isbase = value; }
    inline void setQsciLexerTeX_Receivers_IsBase(bool value) const { qscilexertex_receivers_isbase = value; }
    inline void setQsciLexerTeX_IsSignalConnected_IsBase(bool value) const { qscilexertex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertex_metacall_isbase) {
            qscilexertex_metacall_isbase = false;
            return QsciLexerTeX::qt_metacall(param1, param2, param3);
        } else if (qscilexertex_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexertex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertex_language_callback != nullptr) {
            const char* callback_ret = qscilexertex_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertex_lexer_isbase) {
            qscilexertex_lexer_isbase = false;
            return QsciLexerTeX::lexer();
        } else if (qscilexertex_lexer_callback != nullptr) {
            const char* callback_ret = qscilexertex_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerTeX::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertex_lexerid_isbase) {
            qscilexertex_lexerid_isbase = false;
            return QsciLexerTeX::lexerId();
        } else if (qscilexertex_lexerid_callback != nullptr) {
            int callback_ret = qscilexertex_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertex_autocompletionfillups_isbase) {
            qscilexertex_autocompletionfillups_isbase = false;
            return QsciLexerTeX::autoCompletionFillups();
        } else if (qscilexertex_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexertex_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerTeX::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertex_autocompletionwordseparators_isbase) {
            qscilexertex_autocompletionwordseparators_isbase = false;
            return QsciLexerTeX::autoCompletionWordSeparators();
        } else if (qscilexertex_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexertex_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerTeX::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertex_blockend_isbase) {
            qscilexertex_blockend_isbase = false;
            return QsciLexerTeX::blockEnd(style);
        } else if (qscilexertex_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertex_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertex_blocklookback_isbase) {
            qscilexertex_blocklookback_isbase = false;
            return QsciLexerTeX::blockLookback();
        } else if (qscilexertex_blocklookback_callback != nullptr) {
            int callback_ret = qscilexertex_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertex_blockstart_isbase) {
            qscilexertex_blockstart_isbase = false;
            return QsciLexerTeX::blockStart(style);
        } else if (qscilexertex_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertex_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertex_blockstartkeyword_isbase) {
            qscilexertex_blockstartkeyword_isbase = false;
            return QsciLexerTeX::blockStartKeyword(style);
        } else if (qscilexertex_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertex_bracestyle_isbase) {
            qscilexertex_bracestyle_isbase = false;
            return QsciLexerTeX::braceStyle();
        } else if (qscilexertex_bracestyle_callback != nullptr) {
            int callback_ret = qscilexertex_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertex_casesensitive_isbase) {
            qscilexertex_casesensitive_isbase = false;
            return QsciLexerTeX::caseSensitive();
        } else if (qscilexertex_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexertex_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerTeX::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertex_color_isbase) {
            qscilexertex_color_isbase = false;
            return QsciLexerTeX::color(style);
        } else if (qscilexertex_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertex_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertex_eolfill_isbase) {
            qscilexertex_eolfill_isbase = false;
            return QsciLexerTeX::eolFill(style);
        } else if (qscilexertex_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertex_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertex_font_isbase) {
            qscilexertex_font_isbase = false;
            return QsciLexerTeX::font(style);
        } else if (qscilexertex_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertex_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertex_indentationguideview_isbase) {
            qscilexertex_indentationguideview_isbase = false;
            return QsciLexerTeX::indentationGuideView();
        } else if (qscilexertex_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexertex_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertex_keywords_isbase) {
            qscilexertex_keywords_isbase = false;
            return QsciLexerTeX::keywords(set);
        } else if (qscilexertex_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexertex_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertex_defaultstyle_isbase) {
            qscilexertex_defaultstyle_isbase = false;
            return QsciLexerTeX::defaultStyle();
        } else if (qscilexertex_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexertex_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertex_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexertex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertex_paper_isbase) {
            qscilexertex_paper_isbase = false;
            return QsciLexerTeX::paper(style);
        } else if (qscilexertex_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertex_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertex_defaultcolorwithstyle_isbase) {
            qscilexertex_defaultcolorwithstyle_isbase = false;
            return QsciLexerTeX::defaultColor(style);
        } else if (qscilexertex_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertex_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertex_defaulteolfill_isbase) {
            qscilexertex_defaulteolfill_isbase = false;
            return QsciLexerTeX::defaultEolFill(style);
        } else if (qscilexertex_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertex_defaultfontwithstyle_isbase) {
            qscilexertex_defaultfontwithstyle_isbase = false;
            return QsciLexerTeX::defaultFont(style);
        } else if (qscilexertex_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertex_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertex_defaultpaperwithstyle_isbase) {
            qscilexertex_defaultpaperwithstyle_isbase = false;
            return QsciLexerTeX::defaultPaper(style);
        } else if (qscilexertex_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertex_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTeX::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertex_seteditor_isbase) {
            qscilexertex_seteditor_isbase = false;
            QsciLexerTeX::setEditor(editor);
        } else if (qscilexertex_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexertex_seteditor_callback(this, cbval1);
        } else {
            QsciLexerTeX::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertex_refreshproperties_isbase) {
            qscilexertex_refreshproperties_isbase = false;
            QsciLexerTeX::refreshProperties();
        } else if (qscilexertex_refreshproperties_callback != nullptr) {
            qscilexertex_refreshproperties_callback();
        } else {
            QsciLexerTeX::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertex_stylebitsneeded_isbase) {
            qscilexertex_stylebitsneeded_isbase = false;
            return QsciLexerTeX::styleBitsNeeded();
        } else if (qscilexertex_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexertex_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertex_wordcharacters_isbase) {
            qscilexertex_wordcharacters_isbase = false;
            return QsciLexerTeX::wordCharacters();
        } else if (qscilexertex_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexertex_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerTeX::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertex_setautoindentstyle_isbase) {
            qscilexertex_setautoindentstyle_isbase = false;
            QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexertex_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexertex_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertex_setcolor_isbase) {
            qscilexertex_setcolor_isbase = false;
            QsciLexerTeX::setColor(c, style);
        } else if (qscilexertex_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertex_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTeX::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertex_seteolfill_isbase) {
            qscilexertex_seteolfill_isbase = false;
            QsciLexerTeX::setEolFill(eoffill, style);
        } else if (qscilexertex_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexertex_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTeX::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertex_setfont_isbase) {
            qscilexertex_setfont_isbase = false;
            QsciLexerTeX::setFont(f, style);
        } else if (qscilexertex_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexertex_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTeX::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertex_setpaper_isbase) {
            qscilexertex_setpaper_isbase = false;
            QsciLexerTeX::setPaper(c, style);
        } else if (qscilexertex_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertex_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTeX::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertex_readproperties_isbase) {
            qscilexertex_readproperties_isbase = false;
            return QsciLexerTeX::readProperties(qs, prefix);
        } else if (qscilexertex_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertex_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTeX::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertex_writeproperties_isbase) {
            qscilexertex_writeproperties_isbase = false;
            return QsciLexerTeX::writeProperties(qs, prefix);
        } else if (qscilexertex_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertex_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTeX::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertex_event_isbase) {
            qscilexertex_event_isbase = false;
            return QsciLexerTeX::event(event);
        } else if (qscilexertex_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexertex_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertex_eventfilter_isbase) {
            qscilexertex_eventfilter_isbase = false;
            return QsciLexerTeX::eventFilter(watched, event);
        } else if (qscilexertex_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexertex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTeX::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertex_timerevent_isbase) {
            qscilexertex_timerevent_isbase = false;
            QsciLexerTeX::timerEvent(event);
        } else if (qscilexertex_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexertex_timerevent_callback(this, cbval1);
        } else {
            QsciLexerTeX::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertex_childevent_isbase) {
            qscilexertex_childevent_isbase = false;
            QsciLexerTeX::childEvent(event);
        } else if (qscilexertex_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexertex_childevent_callback(this, cbval1);
        } else {
            QsciLexerTeX::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertex_customevent_isbase) {
            qscilexertex_customevent_isbase = false;
            QsciLexerTeX::customEvent(event);
        } else if (qscilexertex_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexertex_customevent_callback(this, cbval1);
        } else {
            QsciLexerTeX::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_connectnotify_isbase) {
            qscilexertex_connectnotify_isbase = false;
            QsciLexerTeX::connectNotify(signal);
        } else if (qscilexertex_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertex_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerTeX::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_disconnectnotify_isbase) {
            qscilexertex_disconnectnotify_isbase = false;
            QsciLexerTeX::disconnectNotify(signal);
        } else if (qscilexertex_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertex_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerTeX::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexertex_textasbytes_isbase) {
            qscilexertex_textasbytes_isbase = false;
            return QsciLexerTeX::textAsBytes(text);
        } else if (qscilexertex_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexertex_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerTeX::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexertex_bytesastext_isbase) {
            qscilexertex_bytesastext_isbase = false;
            return QsciLexerTeX::bytesAsText(bytes, size);
        } else if (qscilexertex_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexertex_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerTeX::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexertex_sender_isbase) {
            qscilexertex_sender_isbase = false;
            return QsciLexerTeX::sender();
        } else if (qscilexertex_sender_callback != nullptr) {
            QObject* callback_ret = qscilexertex_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerTeX::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexertex_sendersignalindex_isbase) {
            qscilexertex_sendersignalindex_isbase = false;
            return QsciLexerTeX::senderSignalIndex();
        } else if (qscilexertex_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexertex_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexertex_receivers_isbase) {
            qscilexertex_receivers_isbase = false;
            return QsciLexerTeX::receivers(signal);
        } else if (qscilexertex_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexertex_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTeX::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexertex_issignalconnected_isbase) {
            qscilexertex_issignalconnected_isbase = false;
            return QsciLexerTeX::isSignalConnected(signal);
        } else if (qscilexertex_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexertex_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTeX::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_QBaseReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_QBaseWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event);
    friend void QsciLexerTeX_QBaseTimerEvent(QsciLexerTeX* self, QTimerEvent* event);
    friend void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event);
    friend void QsciLexerTeX_QBaseChildEvent(QsciLexerTeX* self, QChildEvent* event);
    friend void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event);
    friend void QsciLexerTeX_QBaseCustomEvent(QsciLexerTeX* self, QEvent* event);
    friend void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_QBaseConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_QBaseDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerTeX_TextAsBytes(const QsciLexerTeX* self, const libqt_string text);
    friend libqt_string QsciLexerTeX_QBaseTextAsBytes(const QsciLexerTeX* self, const libqt_string text);
    friend libqt_string QsciLexerTeX_BytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
    friend libqt_string QsciLexerTeX_QBaseBytesAsText(const QsciLexerTeX* self, const char* bytes, int size);
    friend QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self);
    friend QObject* QsciLexerTeX_QBaseSender(const QsciLexerTeX* self);
    friend int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self);
    friend int QsciLexerTeX_QBaseSenderSignalIndex(const QsciLexerTeX* self);
    friend int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal);
    friend int QsciLexerTeX_QBaseReceivers(const QsciLexerTeX* self, const char* signal);
    friend bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
    friend bool QsciLexerTeX_QBaseIsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal);
};

#endif
