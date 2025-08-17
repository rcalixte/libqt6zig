#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERHEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerHex so that we can call protected methods
class VirtualQsciLexerHex final : public QsciLexerHex {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerHex = true;

    // Virtual class public types (including callbacks)
    using QsciLexerHex_Metacall_Callback = int (*)(QsciLexerHex*, int, int, void**);
    using QsciLexerHex_Language_Callback = const char* (*)();
    using QsciLexerHex_Lexer_Callback = const char* (*)();
    using QsciLexerHex_LexerId_Callback = int (*)();
    using QsciLexerHex_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerHex_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerHex_BlockEnd_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockLookback_Callback = int (*)();
    using QsciLexerHex_BlockStart_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BraceStyle_Callback = int (*)();
    using QsciLexerHex_CaseSensitive_Callback = bool (*)();
    using QsciLexerHex_Color_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_EolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Font_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_IndentationGuideView_Callback = int (*)();
    using QsciLexerHex_Keywords_Callback = const char* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultStyle_Callback = int (*)();
    using QsciLexerHex_Description_Callback = libqt_string (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Paper_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultEolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_SetEditor_Callback = void (*)(QsciLexerHex*, QsciScintilla*);
    using QsciLexerHex_RefreshProperties_Callback = void (*)();
    using QsciLexerHex_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerHex_WordCharacters_Callback = const char* (*)();
    using QsciLexerHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerHex*, int);
    using QsciLexerHex_SetColor_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_SetEolFill_Callback = void (*)(QsciLexerHex*, bool, int);
    using QsciLexerHex_SetFont_Callback = void (*)(QsciLexerHex*, QFont*, int);
    using QsciLexerHex_SetPaper_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_ReadProperties_Callback = bool (*)(QsciLexerHex*, QSettings*, libqt_string);
    using QsciLexerHex_WriteProperties_Callback = bool (*)(const QsciLexerHex*, QSettings*, libqt_string);
    using QsciLexerHex_Event_Callback = bool (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_EventFilter_Callback = bool (*)(QsciLexerHex*, QObject*, QEvent*);
    using QsciLexerHex_TimerEvent_Callback = void (*)(QsciLexerHex*, QTimerEvent*);
    using QsciLexerHex_ChildEvent_Callback = void (*)(QsciLexerHex*, QChildEvent*);
    using QsciLexerHex_CustomEvent_Callback = void (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_ConnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex_DisconnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex_TextAsBytes_Callback = libqt_string (*)(const QsciLexerHex*, libqt_string);
    using QsciLexerHex_BytesAsText_Callback = libqt_string (*)(const QsciLexerHex*, const char*, int);
    using QsciLexerHex_Sender_Callback = QObject* (*)();
    using QsciLexerHex_SenderSignalIndex_Callback = int (*)();
    using QsciLexerHex_Receivers_Callback = int (*)(const QsciLexerHex*, const char*);
    using QsciLexerHex_IsSignalConnected_Callback = bool (*)(const QsciLexerHex*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerHex_Metacall_Callback qscilexerhex_metacall_callback = nullptr;
    QsciLexerHex_Language_Callback qscilexerhex_language_callback = nullptr;
    QsciLexerHex_Lexer_Callback qscilexerhex_lexer_callback = nullptr;
    QsciLexerHex_LexerId_Callback qscilexerhex_lexerid_callback = nullptr;
    QsciLexerHex_AutoCompletionFillups_Callback qscilexerhex_autocompletionfillups_callback = nullptr;
    QsciLexerHex_AutoCompletionWordSeparators_Callback qscilexerhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerHex_BlockEnd_Callback qscilexerhex_blockend_callback = nullptr;
    QsciLexerHex_BlockLookback_Callback qscilexerhex_blocklookback_callback = nullptr;
    QsciLexerHex_BlockStart_Callback qscilexerhex_blockstart_callback = nullptr;
    QsciLexerHex_BlockStartKeyword_Callback qscilexerhex_blockstartkeyword_callback = nullptr;
    QsciLexerHex_BraceStyle_Callback qscilexerhex_bracestyle_callback = nullptr;
    QsciLexerHex_CaseSensitive_Callback qscilexerhex_casesensitive_callback = nullptr;
    QsciLexerHex_Color_Callback qscilexerhex_color_callback = nullptr;
    QsciLexerHex_EolFill_Callback qscilexerhex_eolfill_callback = nullptr;
    QsciLexerHex_Font_Callback qscilexerhex_font_callback = nullptr;
    QsciLexerHex_IndentationGuideView_Callback qscilexerhex_indentationguideview_callback = nullptr;
    QsciLexerHex_Keywords_Callback qscilexerhex_keywords_callback = nullptr;
    QsciLexerHex_DefaultStyle_Callback qscilexerhex_defaultstyle_callback = nullptr;
    QsciLexerHex_Description_Callback qscilexerhex_description_callback = nullptr;
    QsciLexerHex_Paper_Callback qscilexerhex_paper_callback = nullptr;
    QsciLexerHex_DefaultColor2_Callback qscilexerhex_defaultcolor2_callback = nullptr;
    QsciLexerHex_DefaultEolFill_Callback qscilexerhex_defaulteolfill_callback = nullptr;
    QsciLexerHex_DefaultFont2_Callback qscilexerhex_defaultfont2_callback = nullptr;
    QsciLexerHex_DefaultPaper2_Callback qscilexerhex_defaultpaper2_callback = nullptr;
    QsciLexerHex_SetEditor_Callback qscilexerhex_seteditor_callback = nullptr;
    QsciLexerHex_RefreshProperties_Callback qscilexerhex_refreshproperties_callback = nullptr;
    QsciLexerHex_StyleBitsNeeded_Callback qscilexerhex_stylebitsneeded_callback = nullptr;
    QsciLexerHex_WordCharacters_Callback qscilexerhex_wordcharacters_callback = nullptr;
    QsciLexerHex_SetAutoIndentStyle_Callback qscilexerhex_setautoindentstyle_callback = nullptr;
    QsciLexerHex_SetColor_Callback qscilexerhex_setcolor_callback = nullptr;
    QsciLexerHex_SetEolFill_Callback qscilexerhex_seteolfill_callback = nullptr;
    QsciLexerHex_SetFont_Callback qscilexerhex_setfont_callback = nullptr;
    QsciLexerHex_SetPaper_Callback qscilexerhex_setpaper_callback = nullptr;
    QsciLexerHex_ReadProperties_Callback qscilexerhex_readproperties_callback = nullptr;
    QsciLexerHex_WriteProperties_Callback qscilexerhex_writeproperties_callback = nullptr;
    QsciLexerHex_Event_Callback qscilexerhex_event_callback = nullptr;
    QsciLexerHex_EventFilter_Callback qscilexerhex_eventfilter_callback = nullptr;
    QsciLexerHex_TimerEvent_Callback qscilexerhex_timerevent_callback = nullptr;
    QsciLexerHex_ChildEvent_Callback qscilexerhex_childevent_callback = nullptr;
    QsciLexerHex_CustomEvent_Callback qscilexerhex_customevent_callback = nullptr;
    QsciLexerHex_ConnectNotify_Callback qscilexerhex_connectnotify_callback = nullptr;
    QsciLexerHex_DisconnectNotify_Callback qscilexerhex_disconnectnotify_callback = nullptr;
    QsciLexerHex_TextAsBytes_Callback qscilexerhex_textasbytes_callback = nullptr;
    QsciLexerHex_BytesAsText_Callback qscilexerhex_bytesastext_callback = nullptr;
    QsciLexerHex_Sender_Callback qscilexerhex_sender_callback = nullptr;
    QsciLexerHex_SenderSignalIndex_Callback qscilexerhex_sendersignalindex_callback = nullptr;
    QsciLexerHex_Receivers_Callback qscilexerhex_receivers_callback = nullptr;
    QsciLexerHex_IsSignalConnected_Callback qscilexerhex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerhex_metacall_isbase = false;
    mutable bool qscilexerhex_language_isbase = false;
    mutable bool qscilexerhex_lexer_isbase = false;
    mutable bool qscilexerhex_lexerid_isbase = false;
    mutable bool qscilexerhex_autocompletionfillups_isbase = false;
    mutable bool qscilexerhex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerhex_blockend_isbase = false;
    mutable bool qscilexerhex_blocklookback_isbase = false;
    mutable bool qscilexerhex_blockstart_isbase = false;
    mutable bool qscilexerhex_blockstartkeyword_isbase = false;
    mutable bool qscilexerhex_bracestyle_isbase = false;
    mutable bool qscilexerhex_casesensitive_isbase = false;
    mutable bool qscilexerhex_color_isbase = false;
    mutable bool qscilexerhex_eolfill_isbase = false;
    mutable bool qscilexerhex_font_isbase = false;
    mutable bool qscilexerhex_indentationguideview_isbase = false;
    mutable bool qscilexerhex_keywords_isbase = false;
    mutable bool qscilexerhex_defaultstyle_isbase = false;
    mutable bool qscilexerhex_description_isbase = false;
    mutable bool qscilexerhex_paper_isbase = false;
    mutable bool qscilexerhex_defaultcolor2_isbase = false;
    mutable bool qscilexerhex_defaulteolfill_isbase = false;
    mutable bool qscilexerhex_defaultfont2_isbase = false;
    mutable bool qscilexerhex_defaultpaper2_isbase = false;
    mutable bool qscilexerhex_seteditor_isbase = false;
    mutable bool qscilexerhex_refreshproperties_isbase = false;
    mutable bool qscilexerhex_stylebitsneeded_isbase = false;
    mutable bool qscilexerhex_wordcharacters_isbase = false;
    mutable bool qscilexerhex_setautoindentstyle_isbase = false;
    mutable bool qscilexerhex_setcolor_isbase = false;
    mutable bool qscilexerhex_seteolfill_isbase = false;
    mutable bool qscilexerhex_setfont_isbase = false;
    mutable bool qscilexerhex_setpaper_isbase = false;
    mutable bool qscilexerhex_readproperties_isbase = false;
    mutable bool qscilexerhex_writeproperties_isbase = false;
    mutable bool qscilexerhex_event_isbase = false;
    mutable bool qscilexerhex_eventfilter_isbase = false;
    mutable bool qscilexerhex_timerevent_isbase = false;
    mutable bool qscilexerhex_childevent_isbase = false;
    mutable bool qscilexerhex_customevent_isbase = false;
    mutable bool qscilexerhex_connectnotify_isbase = false;
    mutable bool qscilexerhex_disconnectnotify_isbase = false;
    mutable bool qscilexerhex_textasbytes_isbase = false;
    mutable bool qscilexerhex_bytesastext_isbase = false;
    mutable bool qscilexerhex_sender_isbase = false;
    mutable bool qscilexerhex_sendersignalindex_isbase = false;
    mutable bool qscilexerhex_receivers_isbase = false;
    mutable bool qscilexerhex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerHex() : QsciLexerHex() {};
    VirtualQsciLexerHex(QObject* parent) : QsciLexerHex(parent) {};

    ~VirtualQsciLexerHex() {
        qscilexerhex_metacall_callback = nullptr;
        qscilexerhex_language_callback = nullptr;
        qscilexerhex_lexer_callback = nullptr;
        qscilexerhex_lexerid_callback = nullptr;
        qscilexerhex_autocompletionfillups_callback = nullptr;
        qscilexerhex_autocompletionwordseparators_callback = nullptr;
        qscilexerhex_blockend_callback = nullptr;
        qscilexerhex_blocklookback_callback = nullptr;
        qscilexerhex_blockstart_callback = nullptr;
        qscilexerhex_blockstartkeyword_callback = nullptr;
        qscilexerhex_bracestyle_callback = nullptr;
        qscilexerhex_casesensitive_callback = nullptr;
        qscilexerhex_color_callback = nullptr;
        qscilexerhex_eolfill_callback = nullptr;
        qscilexerhex_font_callback = nullptr;
        qscilexerhex_indentationguideview_callback = nullptr;
        qscilexerhex_keywords_callback = nullptr;
        qscilexerhex_defaultstyle_callback = nullptr;
        qscilexerhex_description_callback = nullptr;
        qscilexerhex_paper_callback = nullptr;
        qscilexerhex_defaultcolor2_callback = nullptr;
        qscilexerhex_defaulteolfill_callback = nullptr;
        qscilexerhex_defaultfont2_callback = nullptr;
        qscilexerhex_defaultpaper2_callback = nullptr;
        qscilexerhex_seteditor_callback = nullptr;
        qscilexerhex_refreshproperties_callback = nullptr;
        qscilexerhex_stylebitsneeded_callback = nullptr;
        qscilexerhex_wordcharacters_callback = nullptr;
        qscilexerhex_setautoindentstyle_callback = nullptr;
        qscilexerhex_setcolor_callback = nullptr;
        qscilexerhex_seteolfill_callback = nullptr;
        qscilexerhex_setfont_callback = nullptr;
        qscilexerhex_setpaper_callback = nullptr;
        qscilexerhex_readproperties_callback = nullptr;
        qscilexerhex_writeproperties_callback = nullptr;
        qscilexerhex_event_callback = nullptr;
        qscilexerhex_eventfilter_callback = nullptr;
        qscilexerhex_timerevent_callback = nullptr;
        qscilexerhex_childevent_callback = nullptr;
        qscilexerhex_customevent_callback = nullptr;
        qscilexerhex_connectnotify_callback = nullptr;
        qscilexerhex_disconnectnotify_callback = nullptr;
        qscilexerhex_textasbytes_callback = nullptr;
        qscilexerhex_bytesastext_callback = nullptr;
        qscilexerhex_sender_callback = nullptr;
        qscilexerhex_sendersignalindex_callback = nullptr;
        qscilexerhex_receivers_callback = nullptr;
        qscilexerhex_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerHex_Metacall_Callback(QsciLexerHex_Metacall_Callback cb) { qscilexerhex_metacall_callback = cb; }
    inline void setQsciLexerHex_Language_Callback(QsciLexerHex_Language_Callback cb) { qscilexerhex_language_callback = cb; }
    inline void setQsciLexerHex_Lexer_Callback(QsciLexerHex_Lexer_Callback cb) { qscilexerhex_lexer_callback = cb; }
    inline void setQsciLexerHex_LexerId_Callback(QsciLexerHex_LexerId_Callback cb) { qscilexerhex_lexerid_callback = cb; }
    inline void setQsciLexerHex_AutoCompletionFillups_Callback(QsciLexerHex_AutoCompletionFillups_Callback cb) { qscilexerhex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerHex_AutoCompletionWordSeparators_Callback(QsciLexerHex_AutoCompletionWordSeparators_Callback cb) { qscilexerhex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerHex_BlockEnd_Callback(QsciLexerHex_BlockEnd_Callback cb) { qscilexerhex_blockend_callback = cb; }
    inline void setQsciLexerHex_BlockLookback_Callback(QsciLexerHex_BlockLookback_Callback cb) { qscilexerhex_blocklookback_callback = cb; }
    inline void setQsciLexerHex_BlockStart_Callback(QsciLexerHex_BlockStart_Callback cb) { qscilexerhex_blockstart_callback = cb; }
    inline void setQsciLexerHex_BlockStartKeyword_Callback(QsciLexerHex_BlockStartKeyword_Callback cb) { qscilexerhex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerHex_BraceStyle_Callback(QsciLexerHex_BraceStyle_Callback cb) { qscilexerhex_bracestyle_callback = cb; }
    inline void setQsciLexerHex_CaseSensitive_Callback(QsciLexerHex_CaseSensitive_Callback cb) { qscilexerhex_casesensitive_callback = cb; }
    inline void setQsciLexerHex_Color_Callback(QsciLexerHex_Color_Callback cb) { qscilexerhex_color_callback = cb; }
    inline void setQsciLexerHex_EolFill_Callback(QsciLexerHex_EolFill_Callback cb) { qscilexerhex_eolfill_callback = cb; }
    inline void setQsciLexerHex_Font_Callback(QsciLexerHex_Font_Callback cb) { qscilexerhex_font_callback = cb; }
    inline void setQsciLexerHex_IndentationGuideView_Callback(QsciLexerHex_IndentationGuideView_Callback cb) { qscilexerhex_indentationguideview_callback = cb; }
    inline void setQsciLexerHex_Keywords_Callback(QsciLexerHex_Keywords_Callback cb) { qscilexerhex_keywords_callback = cb; }
    inline void setQsciLexerHex_DefaultStyle_Callback(QsciLexerHex_DefaultStyle_Callback cb) { qscilexerhex_defaultstyle_callback = cb; }
    inline void setQsciLexerHex_Description_Callback(QsciLexerHex_Description_Callback cb) { qscilexerhex_description_callback = cb; }
    inline void setQsciLexerHex_Paper_Callback(QsciLexerHex_Paper_Callback cb) { qscilexerhex_paper_callback = cb; }
    inline void setQsciLexerHex_DefaultColor2_Callback(QsciLexerHex_DefaultColor2_Callback cb) { qscilexerhex_defaultcolor2_callback = cb; }
    inline void setQsciLexerHex_DefaultEolFill_Callback(QsciLexerHex_DefaultEolFill_Callback cb) { qscilexerhex_defaulteolfill_callback = cb; }
    inline void setQsciLexerHex_DefaultFont2_Callback(QsciLexerHex_DefaultFont2_Callback cb) { qscilexerhex_defaultfont2_callback = cb; }
    inline void setQsciLexerHex_DefaultPaper2_Callback(QsciLexerHex_DefaultPaper2_Callback cb) { qscilexerhex_defaultpaper2_callback = cb; }
    inline void setQsciLexerHex_SetEditor_Callback(QsciLexerHex_SetEditor_Callback cb) { qscilexerhex_seteditor_callback = cb; }
    inline void setQsciLexerHex_RefreshProperties_Callback(QsciLexerHex_RefreshProperties_Callback cb) { qscilexerhex_refreshproperties_callback = cb; }
    inline void setQsciLexerHex_StyleBitsNeeded_Callback(QsciLexerHex_StyleBitsNeeded_Callback cb) { qscilexerhex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerHex_WordCharacters_Callback(QsciLexerHex_WordCharacters_Callback cb) { qscilexerhex_wordcharacters_callback = cb; }
    inline void setQsciLexerHex_SetAutoIndentStyle_Callback(QsciLexerHex_SetAutoIndentStyle_Callback cb) { qscilexerhex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerHex_SetColor_Callback(QsciLexerHex_SetColor_Callback cb) { qscilexerhex_setcolor_callback = cb; }
    inline void setQsciLexerHex_SetEolFill_Callback(QsciLexerHex_SetEolFill_Callback cb) { qscilexerhex_seteolfill_callback = cb; }
    inline void setQsciLexerHex_SetFont_Callback(QsciLexerHex_SetFont_Callback cb) { qscilexerhex_setfont_callback = cb; }
    inline void setQsciLexerHex_SetPaper_Callback(QsciLexerHex_SetPaper_Callback cb) { qscilexerhex_setpaper_callback = cb; }
    inline void setQsciLexerHex_ReadProperties_Callback(QsciLexerHex_ReadProperties_Callback cb) { qscilexerhex_readproperties_callback = cb; }
    inline void setQsciLexerHex_WriteProperties_Callback(QsciLexerHex_WriteProperties_Callback cb) { qscilexerhex_writeproperties_callback = cb; }
    inline void setQsciLexerHex_Event_Callback(QsciLexerHex_Event_Callback cb) { qscilexerhex_event_callback = cb; }
    inline void setQsciLexerHex_EventFilter_Callback(QsciLexerHex_EventFilter_Callback cb) { qscilexerhex_eventfilter_callback = cb; }
    inline void setQsciLexerHex_TimerEvent_Callback(QsciLexerHex_TimerEvent_Callback cb) { qscilexerhex_timerevent_callback = cb; }
    inline void setQsciLexerHex_ChildEvent_Callback(QsciLexerHex_ChildEvent_Callback cb) { qscilexerhex_childevent_callback = cb; }
    inline void setQsciLexerHex_CustomEvent_Callback(QsciLexerHex_CustomEvent_Callback cb) { qscilexerhex_customevent_callback = cb; }
    inline void setQsciLexerHex_ConnectNotify_Callback(QsciLexerHex_ConnectNotify_Callback cb) { qscilexerhex_connectnotify_callback = cb; }
    inline void setQsciLexerHex_DisconnectNotify_Callback(QsciLexerHex_DisconnectNotify_Callback cb) { qscilexerhex_disconnectnotify_callback = cb; }
    inline void setQsciLexerHex_TextAsBytes_Callback(QsciLexerHex_TextAsBytes_Callback cb) { qscilexerhex_textasbytes_callback = cb; }
    inline void setQsciLexerHex_BytesAsText_Callback(QsciLexerHex_BytesAsText_Callback cb) { qscilexerhex_bytesastext_callback = cb; }
    inline void setQsciLexerHex_Sender_Callback(QsciLexerHex_Sender_Callback cb) { qscilexerhex_sender_callback = cb; }
    inline void setQsciLexerHex_SenderSignalIndex_Callback(QsciLexerHex_SenderSignalIndex_Callback cb) { qscilexerhex_sendersignalindex_callback = cb; }
    inline void setQsciLexerHex_Receivers_Callback(QsciLexerHex_Receivers_Callback cb) { qscilexerhex_receivers_callback = cb; }
    inline void setQsciLexerHex_IsSignalConnected_Callback(QsciLexerHex_IsSignalConnected_Callback cb) { qscilexerhex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerHex_Metacall_IsBase(bool value) const { qscilexerhex_metacall_isbase = value; }
    inline void setQsciLexerHex_Language_IsBase(bool value) const { qscilexerhex_language_isbase = value; }
    inline void setQsciLexerHex_Lexer_IsBase(bool value) const { qscilexerhex_lexer_isbase = value; }
    inline void setQsciLexerHex_LexerId_IsBase(bool value) const { qscilexerhex_lexerid_isbase = value; }
    inline void setQsciLexerHex_AutoCompletionFillups_IsBase(bool value) const { qscilexerhex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerHex_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerhex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerHex_BlockEnd_IsBase(bool value) const { qscilexerhex_blockend_isbase = value; }
    inline void setQsciLexerHex_BlockLookback_IsBase(bool value) const { qscilexerhex_blocklookback_isbase = value; }
    inline void setQsciLexerHex_BlockStart_IsBase(bool value) const { qscilexerhex_blockstart_isbase = value; }
    inline void setQsciLexerHex_BlockStartKeyword_IsBase(bool value) const { qscilexerhex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerHex_BraceStyle_IsBase(bool value) const { qscilexerhex_bracestyle_isbase = value; }
    inline void setQsciLexerHex_CaseSensitive_IsBase(bool value) const { qscilexerhex_casesensitive_isbase = value; }
    inline void setQsciLexerHex_Color_IsBase(bool value) const { qscilexerhex_color_isbase = value; }
    inline void setQsciLexerHex_EolFill_IsBase(bool value) const { qscilexerhex_eolfill_isbase = value; }
    inline void setQsciLexerHex_Font_IsBase(bool value) const { qscilexerhex_font_isbase = value; }
    inline void setQsciLexerHex_IndentationGuideView_IsBase(bool value) const { qscilexerhex_indentationguideview_isbase = value; }
    inline void setQsciLexerHex_Keywords_IsBase(bool value) const { qscilexerhex_keywords_isbase = value; }
    inline void setQsciLexerHex_DefaultStyle_IsBase(bool value) const { qscilexerhex_defaultstyle_isbase = value; }
    inline void setQsciLexerHex_Description_IsBase(bool value) const { qscilexerhex_description_isbase = value; }
    inline void setQsciLexerHex_Paper_IsBase(bool value) const { qscilexerhex_paper_isbase = value; }
    inline void setQsciLexerHex_DefaultColor2_IsBase(bool value) const { qscilexerhex_defaultcolor2_isbase = value; }
    inline void setQsciLexerHex_DefaultEolFill_IsBase(bool value) const { qscilexerhex_defaulteolfill_isbase = value; }
    inline void setQsciLexerHex_DefaultFont2_IsBase(bool value) const { qscilexerhex_defaultfont2_isbase = value; }
    inline void setQsciLexerHex_DefaultPaper2_IsBase(bool value) const { qscilexerhex_defaultpaper2_isbase = value; }
    inline void setQsciLexerHex_SetEditor_IsBase(bool value) const { qscilexerhex_seteditor_isbase = value; }
    inline void setQsciLexerHex_RefreshProperties_IsBase(bool value) const { qscilexerhex_refreshproperties_isbase = value; }
    inline void setQsciLexerHex_StyleBitsNeeded_IsBase(bool value) const { qscilexerhex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerHex_WordCharacters_IsBase(bool value) const { qscilexerhex_wordcharacters_isbase = value; }
    inline void setQsciLexerHex_SetAutoIndentStyle_IsBase(bool value) const { qscilexerhex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerHex_SetColor_IsBase(bool value) const { qscilexerhex_setcolor_isbase = value; }
    inline void setQsciLexerHex_SetEolFill_IsBase(bool value) const { qscilexerhex_seteolfill_isbase = value; }
    inline void setQsciLexerHex_SetFont_IsBase(bool value) const { qscilexerhex_setfont_isbase = value; }
    inline void setQsciLexerHex_SetPaper_IsBase(bool value) const { qscilexerhex_setpaper_isbase = value; }
    inline void setQsciLexerHex_ReadProperties_IsBase(bool value) const { qscilexerhex_readproperties_isbase = value; }
    inline void setQsciLexerHex_WriteProperties_IsBase(bool value) const { qscilexerhex_writeproperties_isbase = value; }
    inline void setQsciLexerHex_Event_IsBase(bool value) const { qscilexerhex_event_isbase = value; }
    inline void setQsciLexerHex_EventFilter_IsBase(bool value) const { qscilexerhex_eventfilter_isbase = value; }
    inline void setQsciLexerHex_TimerEvent_IsBase(bool value) const { qscilexerhex_timerevent_isbase = value; }
    inline void setQsciLexerHex_ChildEvent_IsBase(bool value) const { qscilexerhex_childevent_isbase = value; }
    inline void setQsciLexerHex_CustomEvent_IsBase(bool value) const { qscilexerhex_customevent_isbase = value; }
    inline void setQsciLexerHex_ConnectNotify_IsBase(bool value) const { qscilexerhex_connectnotify_isbase = value; }
    inline void setQsciLexerHex_DisconnectNotify_IsBase(bool value) const { qscilexerhex_disconnectnotify_isbase = value; }
    inline void setQsciLexerHex_TextAsBytes_IsBase(bool value) const { qscilexerhex_textasbytes_isbase = value; }
    inline void setQsciLexerHex_BytesAsText_IsBase(bool value) const { qscilexerhex_bytesastext_isbase = value; }
    inline void setQsciLexerHex_Sender_IsBase(bool value) const { qscilexerhex_sender_isbase = value; }
    inline void setQsciLexerHex_SenderSignalIndex_IsBase(bool value) const { qscilexerhex_sendersignalindex_isbase = value; }
    inline void setQsciLexerHex_Receivers_IsBase(bool value) const { qscilexerhex_receivers_isbase = value; }
    inline void setQsciLexerHex_IsSignalConnected_IsBase(bool value) const { qscilexerhex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerhex_metacall_isbase) {
            qscilexerhex_metacall_isbase = false;
            return QsciLexerHex::qt_metacall(param1, param2, param3);
        } else if (qscilexerhex_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerhex_language_callback != nullptr) {
            const char* callback_ret = qscilexerhex_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerhex_lexer_isbase) {
            qscilexerhex_lexer_isbase = false;
            return QsciLexerHex::lexer();
        } else if (qscilexerhex_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerhex_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerHex::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerhex_lexerid_isbase) {
            qscilexerhex_lexerid_isbase = false;
            return QsciLexerHex::lexerId();
        } else if (qscilexerhex_lexerid_callback != nullptr) {
            int callback_ret = qscilexerhex_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerhex_autocompletionfillups_isbase) {
            qscilexerhex_autocompletionfillups_isbase = false;
            return QsciLexerHex::autoCompletionFillups();
        } else if (qscilexerhex_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerhex_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerHex::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerhex_autocompletionwordseparators_isbase) {
            qscilexerhex_autocompletionwordseparators_isbase = false;
            return QsciLexerHex::autoCompletionWordSeparators();
        } else if (qscilexerhex_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerhex_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerHex::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerhex_blockend_isbase) {
            qscilexerhex_blockend_isbase = false;
            return QsciLexerHex::blockEnd(style);
        } else if (qscilexerhex_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerhex_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerhex_blocklookback_isbase) {
            qscilexerhex_blocklookback_isbase = false;
            return QsciLexerHex::blockLookback();
        } else if (qscilexerhex_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerhex_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerhex_blockstart_isbase) {
            qscilexerhex_blockstart_isbase = false;
            return QsciLexerHex::blockStart(style);
        } else if (qscilexerhex_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerhex_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerhex_blockstartkeyword_isbase) {
            qscilexerhex_blockstartkeyword_isbase = false;
            return QsciLexerHex::blockStartKeyword(style);
        } else if (qscilexerhex_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerhex_bracestyle_isbase) {
            qscilexerhex_bracestyle_isbase = false;
            return QsciLexerHex::braceStyle();
        } else if (qscilexerhex_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerhex_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerhex_casesensitive_isbase) {
            qscilexerhex_casesensitive_isbase = false;
            return QsciLexerHex::caseSensitive();
        } else if (qscilexerhex_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerhex_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerHex::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerhex_color_isbase) {
            qscilexerhex_color_isbase = false;
            return QsciLexerHex::color(style);
        } else if (qscilexerhex_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerhex_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerhex_eolfill_isbase) {
            qscilexerhex_eolfill_isbase = false;
            return QsciLexerHex::eolFill(style);
        } else if (qscilexerhex_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerhex_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerhex_font_isbase) {
            qscilexerhex_font_isbase = false;
            return QsciLexerHex::font(style);
        } else if (qscilexerhex_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerhex_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerhex_indentationguideview_isbase) {
            qscilexerhex_indentationguideview_isbase = false;
            return QsciLexerHex::indentationGuideView();
        } else if (qscilexerhex_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerhex_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerhex_keywords_isbase) {
            qscilexerhex_keywords_isbase = false;
            return QsciLexerHex::keywords(set);
        } else if (qscilexerhex_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerhex_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerhex_defaultstyle_isbase) {
            qscilexerhex_defaultstyle_isbase = false;
            return QsciLexerHex::defaultStyle();
        } else if (qscilexerhex_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerhex_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerhex_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerhex_paper_isbase) {
            qscilexerhex_paper_isbase = false;
            return QsciLexerHex::paper(style);
        } else if (qscilexerhex_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerhex_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerhex_defaultcolor2_isbase) {
            qscilexerhex_defaultcolor2_isbase = false;
            return QsciLexerHex::defaultColor(style);
        } else if (qscilexerhex_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerhex_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerhex_defaulteolfill_isbase) {
            qscilexerhex_defaulteolfill_isbase = false;
            return QsciLexerHex::defaultEolFill(style);
        } else if (qscilexerhex_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerhex_defaultfont2_isbase) {
            qscilexerhex_defaultfont2_isbase = false;
            return QsciLexerHex::defaultFont(style);
        } else if (qscilexerhex_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerhex_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerhex_defaultpaper2_isbase) {
            qscilexerhex_defaultpaper2_isbase = false;
            return QsciLexerHex::defaultPaper(style);
        } else if (qscilexerhex_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerhex_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerHex::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerhex_seteditor_isbase) {
            qscilexerhex_seteditor_isbase = false;
            QsciLexerHex::setEditor(editor);
        } else if (qscilexerhex_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerhex_seteditor_callback(this, cbval1);
        } else {
            QsciLexerHex::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerhex_refreshproperties_isbase) {
            qscilexerhex_refreshproperties_isbase = false;
            QsciLexerHex::refreshProperties();
        } else if (qscilexerhex_refreshproperties_callback != nullptr) {
            qscilexerhex_refreshproperties_callback();
        } else {
            QsciLexerHex::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerhex_stylebitsneeded_isbase) {
            qscilexerhex_stylebitsneeded_isbase = false;
            return QsciLexerHex::styleBitsNeeded();
        } else if (qscilexerhex_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerhex_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerhex_wordcharacters_isbase) {
            qscilexerhex_wordcharacters_isbase = false;
            return QsciLexerHex::wordCharacters();
        } else if (qscilexerhex_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerhex_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerHex::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerhex_setautoindentstyle_isbase) {
            qscilexerhex_setautoindentstyle_isbase = false;
            QsciLexerHex::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerhex_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerhex_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerHex::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerhex_setcolor_isbase) {
            qscilexerhex_setcolor_isbase = false;
            QsciLexerHex::setColor(c, style);
        } else if (qscilexerhex_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerhex_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerHex::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerhex_seteolfill_isbase) {
            qscilexerhex_seteolfill_isbase = false;
            QsciLexerHex::setEolFill(eoffill, style);
        } else if (qscilexerhex_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerhex_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerHex::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerhex_setfont_isbase) {
            qscilexerhex_setfont_isbase = false;
            QsciLexerHex::setFont(f, style);
        } else if (qscilexerhex_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerhex_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerHex::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerhex_setpaper_isbase) {
            qscilexerhex_setpaper_isbase = false;
            QsciLexerHex::setPaper(c, style);
        } else if (qscilexerhex_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerhex_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerHex::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerhex_readproperties_isbase) {
            qscilexerhex_readproperties_isbase = false;
            return QsciLexerHex::readProperties(qs, prefix);
        } else if (qscilexerhex_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerhex_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerHex::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerhex_writeproperties_isbase) {
            qscilexerhex_writeproperties_isbase = false;
            return QsciLexerHex::writeProperties(qs, prefix);
        } else if (qscilexerhex_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerhex_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerHex::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerhex_event_isbase) {
            qscilexerhex_event_isbase = false;
            return QsciLexerHex::event(event);
        } else if (qscilexerhex_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerhex_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerhex_eventfilter_isbase) {
            qscilexerhex_eventfilter_isbase = false;
            return QsciLexerHex::eventFilter(watched, event);
        } else if (qscilexerhex_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerHex::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerhex_timerevent_isbase) {
            qscilexerhex_timerevent_isbase = false;
            QsciLexerHex::timerEvent(event);
        } else if (qscilexerhex_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerhex_timerevent_callback(this, cbval1);
        } else {
            QsciLexerHex::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerhex_childevent_isbase) {
            qscilexerhex_childevent_isbase = false;
            QsciLexerHex::childEvent(event);
        } else if (qscilexerhex_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerhex_childevent_callback(this, cbval1);
        } else {
            QsciLexerHex::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerhex_customevent_isbase) {
            qscilexerhex_customevent_isbase = false;
            QsciLexerHex::customEvent(event);
        } else if (qscilexerhex_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerhex_customevent_callback(this, cbval1);
        } else {
            QsciLexerHex::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_connectnotify_isbase) {
            qscilexerhex_connectnotify_isbase = false;
            QsciLexerHex::connectNotify(signal);
        } else if (qscilexerhex_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerhex_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerHex::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_disconnectnotify_isbase) {
            qscilexerhex_disconnectnotify_isbase = false;
            QsciLexerHex::disconnectNotify(signal);
        } else if (qscilexerhex_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerhex_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerHex::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerhex_textasbytes_isbase) {
            qscilexerhex_textasbytes_isbase = false;
            return QsciLexerHex::textAsBytes(text);
        } else if (qscilexerhex_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexerhex_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerHex::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerhex_bytesastext_isbase) {
            qscilexerhex_bytesastext_isbase = false;
            return QsciLexerHex::bytesAsText(bytes, size);
        } else if (qscilexerhex_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexerhex_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerHex::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerhex_sender_isbase) {
            qscilexerhex_sender_isbase = false;
            return QsciLexerHex::sender();
        } else if (qscilexerhex_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerhex_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerHex::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerhex_sendersignalindex_isbase) {
            qscilexerhex_sendersignalindex_isbase = false;
            return QsciLexerHex::senderSignalIndex();
        } else if (qscilexerhex_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerhex_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerhex_receivers_isbase) {
            qscilexerhex_receivers_isbase = false;
            return QsciLexerHex::receivers(signal);
        } else if (qscilexerhex_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerhex_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerHex::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerhex_issignalconnected_isbase) {
            qscilexerhex_issignalconnected_isbase = false;
            return QsciLexerHex::isSignalConnected(signal);
        } else if (qscilexerhex_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerhex_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerHex::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerHex_ReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_QBaseReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_WriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_QBaseWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerHex_TimerEvent(QsciLexerHex* self, QTimerEvent* event);
    friend void QsciLexerHex_QBaseTimerEvent(QsciLexerHex* self, QTimerEvent* event);
    friend void QsciLexerHex_ChildEvent(QsciLexerHex* self, QChildEvent* event);
    friend void QsciLexerHex_QBaseChildEvent(QsciLexerHex* self, QChildEvent* event);
    friend void QsciLexerHex_CustomEvent(QsciLexerHex* self, QEvent* event);
    friend void QsciLexerHex_QBaseCustomEvent(QsciLexerHex* self, QEvent* event);
    friend void QsciLexerHex_ConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_QBaseConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_DisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_QBaseDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerHex_TextAsBytes(const QsciLexerHex* self, const libqt_string text);
    friend libqt_string QsciLexerHex_QBaseTextAsBytes(const QsciLexerHex* self, const libqt_string text);
    friend libqt_string QsciLexerHex_BytesAsText(const QsciLexerHex* self, const char* bytes, int size);
    friend libqt_string QsciLexerHex_QBaseBytesAsText(const QsciLexerHex* self, const char* bytes, int size);
    friend QObject* QsciLexerHex_Sender(const QsciLexerHex* self);
    friend QObject* QsciLexerHex_QBaseSender(const QsciLexerHex* self);
    friend int QsciLexerHex_SenderSignalIndex(const QsciLexerHex* self);
    friend int QsciLexerHex_QBaseSenderSignalIndex(const QsciLexerHex* self);
    friend int QsciLexerHex_Receivers(const QsciLexerHex* self, const char* signal);
    friend int QsciLexerHex_QBaseReceivers(const QsciLexerHex* self, const char* signal);
    friend bool QsciLexerHex_IsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
    friend bool QsciLexerHex_QBaseIsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal);
};

#endif
