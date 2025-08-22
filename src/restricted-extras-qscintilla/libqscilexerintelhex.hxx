#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERINTELHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERINTELHEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerIntelHex so that we can call protected methods
class VirtualQsciLexerIntelHex final : public QsciLexerIntelHex {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerIntelHex = true;

    // Virtual class public types (including callbacks)
    using QsciLexerIntelHex_Metacall_Callback = int (*)(QsciLexerIntelHex*, int, int, void**);
    using QsciLexerIntelHex_Language_Callback = const char* (*)();
    using QsciLexerIntelHex_Lexer_Callback = const char* (*)();
    using QsciLexerIntelHex_LexerId_Callback = int (*)();
    using QsciLexerIntelHex_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerIntelHex_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerIntelHex_BlockEnd_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BlockLookback_Callback = int (*)();
    using QsciLexerIntelHex_BlockStart_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BraceStyle_Callback = int (*)();
    using QsciLexerIntelHex_CaseSensitive_Callback = bool (*)();
    using QsciLexerIntelHex_Color_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_EolFill_Callback = bool (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_Font_Callback = QFont* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_IndentationGuideView_Callback = int (*)();
    using QsciLexerIntelHex_Keywords_Callback = const char* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultStyle_Callback = int (*)();
    using QsciLexerIntelHex_Description_Callback = const char* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_Paper_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultEolFill_Callback = bool (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_SetEditor_Callback = void (*)(QsciLexerIntelHex*, QsciScintilla*);
    using QsciLexerIntelHex_RefreshProperties_Callback = void (*)();
    using QsciLexerIntelHex_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerIntelHex_WordCharacters_Callback = const char* (*)();
    using QsciLexerIntelHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_SetColor_Callback = void (*)(QsciLexerIntelHex*, QColor*, int);
    using QsciLexerIntelHex_SetEolFill_Callback = void (*)(QsciLexerIntelHex*, bool, int);
    using QsciLexerIntelHex_SetFont_Callback = void (*)(QsciLexerIntelHex*, QFont*, int);
    using QsciLexerIntelHex_SetPaper_Callback = void (*)(QsciLexerIntelHex*, QColor*, int);
    using QsciLexerIntelHex_ReadProperties_Callback = bool (*)(QsciLexerIntelHex*, QSettings*, libqt_string);
    using QsciLexerIntelHex_WriteProperties_Callback = bool (*)(const QsciLexerIntelHex*, QSettings*, libqt_string);
    using QsciLexerIntelHex_Event_Callback = bool (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_EventFilter_Callback = bool (*)(QsciLexerIntelHex*, QObject*, QEvent*);
    using QsciLexerIntelHex_TimerEvent_Callback = void (*)(QsciLexerIntelHex*, QTimerEvent*);
    using QsciLexerIntelHex_ChildEvent_Callback = void (*)(QsciLexerIntelHex*, QChildEvent*);
    using QsciLexerIntelHex_CustomEvent_Callback = void (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_ConnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex_DisconnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex_TextAsBytes_Callback = const char* (*)(const QsciLexerIntelHex*, libqt_string);
    using QsciLexerIntelHex_BytesAsText_Callback = const char* (*)(const QsciLexerIntelHex*, const char*, int);
    using QsciLexerIntelHex_Sender_Callback = QObject* (*)();
    using QsciLexerIntelHex_SenderSignalIndex_Callback = int (*)();
    using QsciLexerIntelHex_Receivers_Callback = int (*)(const QsciLexerIntelHex*, const char*);
    using QsciLexerIntelHex_IsSignalConnected_Callback = bool (*)(const QsciLexerIntelHex*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerIntelHex_Metacall_Callback qscilexerintelhex_metacall_callback = nullptr;
    QsciLexerIntelHex_Language_Callback qscilexerintelhex_language_callback = nullptr;
    QsciLexerIntelHex_Lexer_Callback qscilexerintelhex_lexer_callback = nullptr;
    QsciLexerIntelHex_LexerId_Callback qscilexerintelhex_lexerid_callback = nullptr;
    QsciLexerIntelHex_AutoCompletionFillups_Callback qscilexerintelhex_autocompletionfillups_callback = nullptr;
    QsciLexerIntelHex_AutoCompletionWordSeparators_Callback qscilexerintelhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerIntelHex_BlockEnd_Callback qscilexerintelhex_blockend_callback = nullptr;
    QsciLexerIntelHex_BlockLookback_Callback qscilexerintelhex_blocklookback_callback = nullptr;
    QsciLexerIntelHex_BlockStart_Callback qscilexerintelhex_blockstart_callback = nullptr;
    QsciLexerIntelHex_BlockStartKeyword_Callback qscilexerintelhex_blockstartkeyword_callback = nullptr;
    QsciLexerIntelHex_BraceStyle_Callback qscilexerintelhex_bracestyle_callback = nullptr;
    QsciLexerIntelHex_CaseSensitive_Callback qscilexerintelhex_casesensitive_callback = nullptr;
    QsciLexerIntelHex_Color_Callback qscilexerintelhex_color_callback = nullptr;
    QsciLexerIntelHex_EolFill_Callback qscilexerintelhex_eolfill_callback = nullptr;
    QsciLexerIntelHex_Font_Callback qscilexerintelhex_font_callback = nullptr;
    QsciLexerIntelHex_IndentationGuideView_Callback qscilexerintelhex_indentationguideview_callback = nullptr;
    QsciLexerIntelHex_Keywords_Callback qscilexerintelhex_keywords_callback = nullptr;
    QsciLexerIntelHex_DefaultStyle_Callback qscilexerintelhex_defaultstyle_callback = nullptr;
    QsciLexerIntelHex_Description_Callback qscilexerintelhex_description_callback = nullptr;
    QsciLexerIntelHex_Paper_Callback qscilexerintelhex_paper_callback = nullptr;
    QsciLexerIntelHex_DefaultColor2_Callback qscilexerintelhex_defaultcolor2_callback = nullptr;
    QsciLexerIntelHex_DefaultEolFill_Callback qscilexerintelhex_defaulteolfill_callback = nullptr;
    QsciLexerIntelHex_DefaultFont2_Callback qscilexerintelhex_defaultfont2_callback = nullptr;
    QsciLexerIntelHex_DefaultPaper2_Callback qscilexerintelhex_defaultpaper2_callback = nullptr;
    QsciLexerIntelHex_SetEditor_Callback qscilexerintelhex_seteditor_callback = nullptr;
    QsciLexerIntelHex_RefreshProperties_Callback qscilexerintelhex_refreshproperties_callback = nullptr;
    QsciLexerIntelHex_StyleBitsNeeded_Callback qscilexerintelhex_stylebitsneeded_callback = nullptr;
    QsciLexerIntelHex_WordCharacters_Callback qscilexerintelhex_wordcharacters_callback = nullptr;
    QsciLexerIntelHex_SetAutoIndentStyle_Callback qscilexerintelhex_setautoindentstyle_callback = nullptr;
    QsciLexerIntelHex_SetColor_Callback qscilexerintelhex_setcolor_callback = nullptr;
    QsciLexerIntelHex_SetEolFill_Callback qscilexerintelhex_seteolfill_callback = nullptr;
    QsciLexerIntelHex_SetFont_Callback qscilexerintelhex_setfont_callback = nullptr;
    QsciLexerIntelHex_SetPaper_Callback qscilexerintelhex_setpaper_callback = nullptr;
    QsciLexerIntelHex_ReadProperties_Callback qscilexerintelhex_readproperties_callback = nullptr;
    QsciLexerIntelHex_WriteProperties_Callback qscilexerintelhex_writeproperties_callback = nullptr;
    QsciLexerIntelHex_Event_Callback qscilexerintelhex_event_callback = nullptr;
    QsciLexerIntelHex_EventFilter_Callback qscilexerintelhex_eventfilter_callback = nullptr;
    QsciLexerIntelHex_TimerEvent_Callback qscilexerintelhex_timerevent_callback = nullptr;
    QsciLexerIntelHex_ChildEvent_Callback qscilexerintelhex_childevent_callback = nullptr;
    QsciLexerIntelHex_CustomEvent_Callback qscilexerintelhex_customevent_callback = nullptr;
    QsciLexerIntelHex_ConnectNotify_Callback qscilexerintelhex_connectnotify_callback = nullptr;
    QsciLexerIntelHex_DisconnectNotify_Callback qscilexerintelhex_disconnectnotify_callback = nullptr;
    QsciLexerIntelHex_TextAsBytes_Callback qscilexerintelhex_textasbytes_callback = nullptr;
    QsciLexerIntelHex_BytesAsText_Callback qscilexerintelhex_bytesastext_callback = nullptr;
    QsciLexerIntelHex_Sender_Callback qscilexerintelhex_sender_callback = nullptr;
    QsciLexerIntelHex_SenderSignalIndex_Callback qscilexerintelhex_sendersignalindex_callback = nullptr;
    QsciLexerIntelHex_Receivers_Callback qscilexerintelhex_receivers_callback = nullptr;
    QsciLexerIntelHex_IsSignalConnected_Callback qscilexerintelhex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerintelhex_metacall_isbase = false;
    mutable bool qscilexerintelhex_language_isbase = false;
    mutable bool qscilexerintelhex_lexer_isbase = false;
    mutable bool qscilexerintelhex_lexerid_isbase = false;
    mutable bool qscilexerintelhex_autocompletionfillups_isbase = false;
    mutable bool qscilexerintelhex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerintelhex_blockend_isbase = false;
    mutable bool qscilexerintelhex_blocklookback_isbase = false;
    mutable bool qscilexerintelhex_blockstart_isbase = false;
    mutable bool qscilexerintelhex_blockstartkeyword_isbase = false;
    mutable bool qscilexerintelhex_bracestyle_isbase = false;
    mutable bool qscilexerintelhex_casesensitive_isbase = false;
    mutable bool qscilexerintelhex_color_isbase = false;
    mutable bool qscilexerintelhex_eolfill_isbase = false;
    mutable bool qscilexerintelhex_font_isbase = false;
    mutable bool qscilexerintelhex_indentationguideview_isbase = false;
    mutable bool qscilexerintelhex_keywords_isbase = false;
    mutable bool qscilexerintelhex_defaultstyle_isbase = false;
    mutable bool qscilexerintelhex_description_isbase = false;
    mutable bool qscilexerintelhex_paper_isbase = false;
    mutable bool qscilexerintelhex_defaultcolor2_isbase = false;
    mutable bool qscilexerintelhex_defaulteolfill_isbase = false;
    mutable bool qscilexerintelhex_defaultfont2_isbase = false;
    mutable bool qscilexerintelhex_defaultpaper2_isbase = false;
    mutable bool qscilexerintelhex_seteditor_isbase = false;
    mutable bool qscilexerintelhex_refreshproperties_isbase = false;
    mutable bool qscilexerintelhex_stylebitsneeded_isbase = false;
    mutable bool qscilexerintelhex_wordcharacters_isbase = false;
    mutable bool qscilexerintelhex_setautoindentstyle_isbase = false;
    mutable bool qscilexerintelhex_setcolor_isbase = false;
    mutable bool qscilexerintelhex_seteolfill_isbase = false;
    mutable bool qscilexerintelhex_setfont_isbase = false;
    mutable bool qscilexerintelhex_setpaper_isbase = false;
    mutable bool qscilexerintelhex_readproperties_isbase = false;
    mutable bool qscilexerintelhex_writeproperties_isbase = false;
    mutable bool qscilexerintelhex_event_isbase = false;
    mutable bool qscilexerintelhex_eventfilter_isbase = false;
    mutable bool qscilexerintelhex_timerevent_isbase = false;
    mutable bool qscilexerintelhex_childevent_isbase = false;
    mutable bool qscilexerintelhex_customevent_isbase = false;
    mutable bool qscilexerintelhex_connectnotify_isbase = false;
    mutable bool qscilexerintelhex_disconnectnotify_isbase = false;
    mutable bool qscilexerintelhex_textasbytes_isbase = false;
    mutable bool qscilexerintelhex_bytesastext_isbase = false;
    mutable bool qscilexerintelhex_sender_isbase = false;
    mutable bool qscilexerintelhex_sendersignalindex_isbase = false;
    mutable bool qscilexerintelhex_receivers_isbase = false;
    mutable bool qscilexerintelhex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerIntelHex() : QsciLexerIntelHex() {};
    VirtualQsciLexerIntelHex(QObject* parent) : QsciLexerIntelHex(parent) {};

    ~VirtualQsciLexerIntelHex() {
        qscilexerintelhex_metacall_callback = nullptr;
        qscilexerintelhex_language_callback = nullptr;
        qscilexerintelhex_lexer_callback = nullptr;
        qscilexerintelhex_lexerid_callback = nullptr;
        qscilexerintelhex_autocompletionfillups_callback = nullptr;
        qscilexerintelhex_autocompletionwordseparators_callback = nullptr;
        qscilexerintelhex_blockend_callback = nullptr;
        qscilexerintelhex_blocklookback_callback = nullptr;
        qscilexerintelhex_blockstart_callback = nullptr;
        qscilexerintelhex_blockstartkeyword_callback = nullptr;
        qscilexerintelhex_bracestyle_callback = nullptr;
        qscilexerintelhex_casesensitive_callback = nullptr;
        qscilexerintelhex_color_callback = nullptr;
        qscilexerintelhex_eolfill_callback = nullptr;
        qscilexerintelhex_font_callback = nullptr;
        qscilexerintelhex_indentationguideview_callback = nullptr;
        qscilexerintelhex_keywords_callback = nullptr;
        qscilexerintelhex_defaultstyle_callback = nullptr;
        qscilexerintelhex_description_callback = nullptr;
        qscilexerintelhex_paper_callback = nullptr;
        qscilexerintelhex_defaultcolor2_callback = nullptr;
        qscilexerintelhex_defaulteolfill_callback = nullptr;
        qscilexerintelhex_defaultfont2_callback = nullptr;
        qscilexerintelhex_defaultpaper2_callback = nullptr;
        qscilexerintelhex_seteditor_callback = nullptr;
        qscilexerintelhex_refreshproperties_callback = nullptr;
        qscilexerintelhex_stylebitsneeded_callback = nullptr;
        qscilexerintelhex_wordcharacters_callback = nullptr;
        qscilexerintelhex_setautoindentstyle_callback = nullptr;
        qscilexerintelhex_setcolor_callback = nullptr;
        qscilexerintelhex_seteolfill_callback = nullptr;
        qscilexerintelhex_setfont_callback = nullptr;
        qscilexerintelhex_setpaper_callback = nullptr;
        qscilexerintelhex_readproperties_callback = nullptr;
        qscilexerintelhex_writeproperties_callback = nullptr;
        qscilexerintelhex_event_callback = nullptr;
        qscilexerintelhex_eventfilter_callback = nullptr;
        qscilexerintelhex_timerevent_callback = nullptr;
        qscilexerintelhex_childevent_callback = nullptr;
        qscilexerintelhex_customevent_callback = nullptr;
        qscilexerintelhex_connectnotify_callback = nullptr;
        qscilexerintelhex_disconnectnotify_callback = nullptr;
        qscilexerintelhex_textasbytes_callback = nullptr;
        qscilexerintelhex_bytesastext_callback = nullptr;
        qscilexerintelhex_sender_callback = nullptr;
        qscilexerintelhex_sendersignalindex_callback = nullptr;
        qscilexerintelhex_receivers_callback = nullptr;
        qscilexerintelhex_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerIntelHex_Metacall_Callback(QsciLexerIntelHex_Metacall_Callback cb) { qscilexerintelhex_metacall_callback = cb; }
    inline void setQsciLexerIntelHex_Language_Callback(QsciLexerIntelHex_Language_Callback cb) { qscilexerintelhex_language_callback = cb; }
    inline void setQsciLexerIntelHex_Lexer_Callback(QsciLexerIntelHex_Lexer_Callback cb) { qscilexerintelhex_lexer_callback = cb; }
    inline void setQsciLexerIntelHex_LexerId_Callback(QsciLexerIntelHex_LexerId_Callback cb) { qscilexerintelhex_lexerid_callback = cb; }
    inline void setQsciLexerIntelHex_AutoCompletionFillups_Callback(QsciLexerIntelHex_AutoCompletionFillups_Callback cb) { qscilexerintelhex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerIntelHex_AutoCompletionWordSeparators_Callback(QsciLexerIntelHex_AutoCompletionWordSeparators_Callback cb) { qscilexerintelhex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerIntelHex_BlockEnd_Callback(QsciLexerIntelHex_BlockEnd_Callback cb) { qscilexerintelhex_blockend_callback = cb; }
    inline void setQsciLexerIntelHex_BlockLookback_Callback(QsciLexerIntelHex_BlockLookback_Callback cb) { qscilexerintelhex_blocklookback_callback = cb; }
    inline void setQsciLexerIntelHex_BlockStart_Callback(QsciLexerIntelHex_BlockStart_Callback cb) { qscilexerintelhex_blockstart_callback = cb; }
    inline void setQsciLexerIntelHex_BlockStartKeyword_Callback(QsciLexerIntelHex_BlockStartKeyword_Callback cb) { qscilexerintelhex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerIntelHex_BraceStyle_Callback(QsciLexerIntelHex_BraceStyle_Callback cb) { qscilexerintelhex_bracestyle_callback = cb; }
    inline void setQsciLexerIntelHex_CaseSensitive_Callback(QsciLexerIntelHex_CaseSensitive_Callback cb) { qscilexerintelhex_casesensitive_callback = cb; }
    inline void setQsciLexerIntelHex_Color_Callback(QsciLexerIntelHex_Color_Callback cb) { qscilexerintelhex_color_callback = cb; }
    inline void setQsciLexerIntelHex_EolFill_Callback(QsciLexerIntelHex_EolFill_Callback cb) { qscilexerintelhex_eolfill_callback = cb; }
    inline void setQsciLexerIntelHex_Font_Callback(QsciLexerIntelHex_Font_Callback cb) { qscilexerintelhex_font_callback = cb; }
    inline void setQsciLexerIntelHex_IndentationGuideView_Callback(QsciLexerIntelHex_IndentationGuideView_Callback cb) { qscilexerintelhex_indentationguideview_callback = cb; }
    inline void setQsciLexerIntelHex_Keywords_Callback(QsciLexerIntelHex_Keywords_Callback cb) { qscilexerintelhex_keywords_callback = cb; }
    inline void setQsciLexerIntelHex_DefaultStyle_Callback(QsciLexerIntelHex_DefaultStyle_Callback cb) { qscilexerintelhex_defaultstyle_callback = cb; }
    inline void setQsciLexerIntelHex_Description_Callback(QsciLexerIntelHex_Description_Callback cb) { qscilexerintelhex_description_callback = cb; }
    inline void setQsciLexerIntelHex_Paper_Callback(QsciLexerIntelHex_Paper_Callback cb) { qscilexerintelhex_paper_callback = cb; }
    inline void setQsciLexerIntelHex_DefaultColor2_Callback(QsciLexerIntelHex_DefaultColor2_Callback cb) { qscilexerintelhex_defaultcolor2_callback = cb; }
    inline void setQsciLexerIntelHex_DefaultEolFill_Callback(QsciLexerIntelHex_DefaultEolFill_Callback cb) { qscilexerintelhex_defaulteolfill_callback = cb; }
    inline void setQsciLexerIntelHex_DefaultFont2_Callback(QsciLexerIntelHex_DefaultFont2_Callback cb) { qscilexerintelhex_defaultfont2_callback = cb; }
    inline void setQsciLexerIntelHex_DefaultPaper2_Callback(QsciLexerIntelHex_DefaultPaper2_Callback cb) { qscilexerintelhex_defaultpaper2_callback = cb; }
    inline void setQsciLexerIntelHex_SetEditor_Callback(QsciLexerIntelHex_SetEditor_Callback cb) { qscilexerintelhex_seteditor_callback = cb; }
    inline void setQsciLexerIntelHex_RefreshProperties_Callback(QsciLexerIntelHex_RefreshProperties_Callback cb) { qscilexerintelhex_refreshproperties_callback = cb; }
    inline void setQsciLexerIntelHex_StyleBitsNeeded_Callback(QsciLexerIntelHex_StyleBitsNeeded_Callback cb) { qscilexerintelhex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerIntelHex_WordCharacters_Callback(QsciLexerIntelHex_WordCharacters_Callback cb) { qscilexerintelhex_wordcharacters_callback = cb; }
    inline void setQsciLexerIntelHex_SetAutoIndentStyle_Callback(QsciLexerIntelHex_SetAutoIndentStyle_Callback cb) { qscilexerintelhex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerIntelHex_SetColor_Callback(QsciLexerIntelHex_SetColor_Callback cb) { qscilexerintelhex_setcolor_callback = cb; }
    inline void setQsciLexerIntelHex_SetEolFill_Callback(QsciLexerIntelHex_SetEolFill_Callback cb) { qscilexerintelhex_seteolfill_callback = cb; }
    inline void setQsciLexerIntelHex_SetFont_Callback(QsciLexerIntelHex_SetFont_Callback cb) { qscilexerintelhex_setfont_callback = cb; }
    inline void setQsciLexerIntelHex_SetPaper_Callback(QsciLexerIntelHex_SetPaper_Callback cb) { qscilexerintelhex_setpaper_callback = cb; }
    inline void setQsciLexerIntelHex_ReadProperties_Callback(QsciLexerIntelHex_ReadProperties_Callback cb) { qscilexerintelhex_readproperties_callback = cb; }
    inline void setQsciLexerIntelHex_WriteProperties_Callback(QsciLexerIntelHex_WriteProperties_Callback cb) { qscilexerintelhex_writeproperties_callback = cb; }
    inline void setQsciLexerIntelHex_Event_Callback(QsciLexerIntelHex_Event_Callback cb) { qscilexerintelhex_event_callback = cb; }
    inline void setQsciLexerIntelHex_EventFilter_Callback(QsciLexerIntelHex_EventFilter_Callback cb) { qscilexerintelhex_eventfilter_callback = cb; }
    inline void setQsciLexerIntelHex_TimerEvent_Callback(QsciLexerIntelHex_TimerEvent_Callback cb) { qscilexerintelhex_timerevent_callback = cb; }
    inline void setQsciLexerIntelHex_ChildEvent_Callback(QsciLexerIntelHex_ChildEvent_Callback cb) { qscilexerintelhex_childevent_callback = cb; }
    inline void setQsciLexerIntelHex_CustomEvent_Callback(QsciLexerIntelHex_CustomEvent_Callback cb) { qscilexerintelhex_customevent_callback = cb; }
    inline void setQsciLexerIntelHex_ConnectNotify_Callback(QsciLexerIntelHex_ConnectNotify_Callback cb) { qscilexerintelhex_connectnotify_callback = cb; }
    inline void setQsciLexerIntelHex_DisconnectNotify_Callback(QsciLexerIntelHex_DisconnectNotify_Callback cb) { qscilexerintelhex_disconnectnotify_callback = cb; }
    inline void setQsciLexerIntelHex_TextAsBytes_Callback(QsciLexerIntelHex_TextAsBytes_Callback cb) { qscilexerintelhex_textasbytes_callback = cb; }
    inline void setQsciLexerIntelHex_BytesAsText_Callback(QsciLexerIntelHex_BytesAsText_Callback cb) { qscilexerintelhex_bytesastext_callback = cb; }
    inline void setQsciLexerIntelHex_Sender_Callback(QsciLexerIntelHex_Sender_Callback cb) { qscilexerintelhex_sender_callback = cb; }
    inline void setQsciLexerIntelHex_SenderSignalIndex_Callback(QsciLexerIntelHex_SenderSignalIndex_Callback cb) { qscilexerintelhex_sendersignalindex_callback = cb; }
    inline void setQsciLexerIntelHex_Receivers_Callback(QsciLexerIntelHex_Receivers_Callback cb) { qscilexerintelhex_receivers_callback = cb; }
    inline void setQsciLexerIntelHex_IsSignalConnected_Callback(QsciLexerIntelHex_IsSignalConnected_Callback cb) { qscilexerintelhex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerIntelHex_Metacall_IsBase(bool value) const { qscilexerintelhex_metacall_isbase = value; }
    inline void setQsciLexerIntelHex_Language_IsBase(bool value) const { qscilexerintelhex_language_isbase = value; }
    inline void setQsciLexerIntelHex_Lexer_IsBase(bool value) const { qscilexerintelhex_lexer_isbase = value; }
    inline void setQsciLexerIntelHex_LexerId_IsBase(bool value) const { qscilexerintelhex_lexerid_isbase = value; }
    inline void setQsciLexerIntelHex_AutoCompletionFillups_IsBase(bool value) const { qscilexerintelhex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerIntelHex_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerintelhex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerIntelHex_BlockEnd_IsBase(bool value) const { qscilexerintelhex_blockend_isbase = value; }
    inline void setQsciLexerIntelHex_BlockLookback_IsBase(bool value) const { qscilexerintelhex_blocklookback_isbase = value; }
    inline void setQsciLexerIntelHex_BlockStart_IsBase(bool value) const { qscilexerintelhex_blockstart_isbase = value; }
    inline void setQsciLexerIntelHex_BlockStartKeyword_IsBase(bool value) const { qscilexerintelhex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerIntelHex_BraceStyle_IsBase(bool value) const { qscilexerintelhex_bracestyle_isbase = value; }
    inline void setQsciLexerIntelHex_CaseSensitive_IsBase(bool value) const { qscilexerintelhex_casesensitive_isbase = value; }
    inline void setQsciLexerIntelHex_Color_IsBase(bool value) const { qscilexerintelhex_color_isbase = value; }
    inline void setQsciLexerIntelHex_EolFill_IsBase(bool value) const { qscilexerintelhex_eolfill_isbase = value; }
    inline void setQsciLexerIntelHex_Font_IsBase(bool value) const { qscilexerintelhex_font_isbase = value; }
    inline void setQsciLexerIntelHex_IndentationGuideView_IsBase(bool value) const { qscilexerintelhex_indentationguideview_isbase = value; }
    inline void setQsciLexerIntelHex_Keywords_IsBase(bool value) const { qscilexerintelhex_keywords_isbase = value; }
    inline void setQsciLexerIntelHex_DefaultStyle_IsBase(bool value) const { qscilexerintelhex_defaultstyle_isbase = value; }
    inline void setQsciLexerIntelHex_Description_IsBase(bool value) const { qscilexerintelhex_description_isbase = value; }
    inline void setQsciLexerIntelHex_Paper_IsBase(bool value) const { qscilexerintelhex_paper_isbase = value; }
    inline void setQsciLexerIntelHex_DefaultColor2_IsBase(bool value) const { qscilexerintelhex_defaultcolor2_isbase = value; }
    inline void setQsciLexerIntelHex_DefaultEolFill_IsBase(bool value) const { qscilexerintelhex_defaulteolfill_isbase = value; }
    inline void setQsciLexerIntelHex_DefaultFont2_IsBase(bool value) const { qscilexerintelhex_defaultfont2_isbase = value; }
    inline void setQsciLexerIntelHex_DefaultPaper2_IsBase(bool value) const { qscilexerintelhex_defaultpaper2_isbase = value; }
    inline void setQsciLexerIntelHex_SetEditor_IsBase(bool value) const { qscilexerintelhex_seteditor_isbase = value; }
    inline void setQsciLexerIntelHex_RefreshProperties_IsBase(bool value) const { qscilexerintelhex_refreshproperties_isbase = value; }
    inline void setQsciLexerIntelHex_StyleBitsNeeded_IsBase(bool value) const { qscilexerintelhex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerIntelHex_WordCharacters_IsBase(bool value) const { qscilexerintelhex_wordcharacters_isbase = value; }
    inline void setQsciLexerIntelHex_SetAutoIndentStyle_IsBase(bool value) const { qscilexerintelhex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerIntelHex_SetColor_IsBase(bool value) const { qscilexerintelhex_setcolor_isbase = value; }
    inline void setQsciLexerIntelHex_SetEolFill_IsBase(bool value) const { qscilexerintelhex_seteolfill_isbase = value; }
    inline void setQsciLexerIntelHex_SetFont_IsBase(bool value) const { qscilexerintelhex_setfont_isbase = value; }
    inline void setQsciLexerIntelHex_SetPaper_IsBase(bool value) const { qscilexerintelhex_setpaper_isbase = value; }
    inline void setQsciLexerIntelHex_ReadProperties_IsBase(bool value) const { qscilexerintelhex_readproperties_isbase = value; }
    inline void setQsciLexerIntelHex_WriteProperties_IsBase(bool value) const { qscilexerintelhex_writeproperties_isbase = value; }
    inline void setQsciLexerIntelHex_Event_IsBase(bool value) const { qscilexerintelhex_event_isbase = value; }
    inline void setQsciLexerIntelHex_EventFilter_IsBase(bool value) const { qscilexerintelhex_eventfilter_isbase = value; }
    inline void setQsciLexerIntelHex_TimerEvent_IsBase(bool value) const { qscilexerintelhex_timerevent_isbase = value; }
    inline void setQsciLexerIntelHex_ChildEvent_IsBase(bool value) const { qscilexerintelhex_childevent_isbase = value; }
    inline void setQsciLexerIntelHex_CustomEvent_IsBase(bool value) const { qscilexerintelhex_customevent_isbase = value; }
    inline void setQsciLexerIntelHex_ConnectNotify_IsBase(bool value) const { qscilexerintelhex_connectnotify_isbase = value; }
    inline void setQsciLexerIntelHex_DisconnectNotify_IsBase(bool value) const { qscilexerintelhex_disconnectnotify_isbase = value; }
    inline void setQsciLexerIntelHex_TextAsBytes_IsBase(bool value) const { qscilexerintelhex_textasbytes_isbase = value; }
    inline void setQsciLexerIntelHex_BytesAsText_IsBase(bool value) const { qscilexerintelhex_bytesastext_isbase = value; }
    inline void setQsciLexerIntelHex_Sender_IsBase(bool value) const { qscilexerintelhex_sender_isbase = value; }
    inline void setQsciLexerIntelHex_SenderSignalIndex_IsBase(bool value) const { qscilexerintelhex_sendersignalindex_isbase = value; }
    inline void setQsciLexerIntelHex_Receivers_IsBase(bool value) const { qscilexerintelhex_receivers_isbase = value; }
    inline void setQsciLexerIntelHex_IsSignalConnected_IsBase(bool value) const { qscilexerintelhex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerintelhex_metacall_isbase) {
            qscilexerintelhex_metacall_isbase = false;
            return QsciLexerIntelHex::qt_metacall(param1, param2, param3);
        } else if (qscilexerintelhex_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerintelhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerintelhex_language_callback != nullptr) {
            const char* callback_ret = qscilexerintelhex_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerintelhex_lexer_isbase) {
            qscilexerintelhex_lexer_isbase = false;
            return QsciLexerIntelHex::lexer();
        } else if (qscilexerintelhex_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerintelhex_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerIntelHex::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerintelhex_lexerid_isbase) {
            qscilexerintelhex_lexerid_isbase = false;
            return QsciLexerIntelHex::lexerId();
        } else if (qscilexerintelhex_lexerid_callback != nullptr) {
            int callback_ret = qscilexerintelhex_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerintelhex_autocompletionfillups_isbase) {
            qscilexerintelhex_autocompletionfillups_isbase = false;
            return QsciLexerIntelHex::autoCompletionFillups();
        } else if (qscilexerintelhex_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerintelhex_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerIntelHex::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerintelhex_autocompletionwordseparators_isbase) {
            qscilexerintelhex_autocompletionwordseparators_isbase = false;
            return QsciLexerIntelHex::autoCompletionWordSeparators();
        } else if (qscilexerintelhex_autocompletionwordseparators_callback != nullptr) {
            const char** callback_ret = qscilexerintelhex_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerIntelHex::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerintelhex_blockend_isbase) {
            qscilexerintelhex_blockend_isbase = false;
            return QsciLexerIntelHex::blockEnd(style);
        } else if (qscilexerintelhex_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerintelhex_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerintelhex_blocklookback_isbase) {
            qscilexerintelhex_blocklookback_isbase = false;
            return QsciLexerIntelHex::blockLookback();
        } else if (qscilexerintelhex_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerintelhex_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerintelhex_blockstart_isbase) {
            qscilexerintelhex_blockstart_isbase = false;
            return QsciLexerIntelHex::blockStart(style);
        } else if (qscilexerintelhex_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerintelhex_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerintelhex_blockstartkeyword_isbase) {
            qscilexerintelhex_blockstartkeyword_isbase = false;
            return QsciLexerIntelHex::blockStartKeyword(style);
        } else if (qscilexerintelhex_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerintelhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerintelhex_bracestyle_isbase) {
            qscilexerintelhex_bracestyle_isbase = false;
            return QsciLexerIntelHex::braceStyle();
        } else if (qscilexerintelhex_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerintelhex_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerintelhex_casesensitive_isbase) {
            qscilexerintelhex_casesensitive_isbase = false;
            return QsciLexerIntelHex::caseSensitive();
        } else if (qscilexerintelhex_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerintelhex_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerIntelHex::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerintelhex_color_isbase) {
            qscilexerintelhex_color_isbase = false;
            return QsciLexerIntelHex::color(style);
        } else if (qscilexerintelhex_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerintelhex_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerintelhex_eolfill_isbase) {
            qscilexerintelhex_eolfill_isbase = false;
            return QsciLexerIntelHex::eolFill(style);
        } else if (qscilexerintelhex_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerintelhex_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerintelhex_font_isbase) {
            qscilexerintelhex_font_isbase = false;
            return QsciLexerIntelHex::font(style);
        } else if (qscilexerintelhex_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerintelhex_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerintelhex_indentationguideview_isbase) {
            qscilexerintelhex_indentationguideview_isbase = false;
            return QsciLexerIntelHex::indentationGuideView();
        } else if (qscilexerintelhex_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerintelhex_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerintelhex_keywords_isbase) {
            qscilexerintelhex_keywords_isbase = false;
            return QsciLexerIntelHex::keywords(set);
        } else if (qscilexerintelhex_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerintelhex_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerintelhex_defaultstyle_isbase) {
            qscilexerintelhex_defaultstyle_isbase = false;
            return QsciLexerIntelHex::defaultStyle();
        } else if (qscilexerintelhex_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerintelhex_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerintelhex_description_callback != nullptr) {
            int cbval1 = style;

            const char* callback_ret = qscilexerintelhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerintelhex_paper_isbase) {
            qscilexerintelhex_paper_isbase = false;
            return QsciLexerIntelHex::paper(style);
        } else if (qscilexerintelhex_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerintelhex_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerintelhex_defaultcolor2_isbase) {
            qscilexerintelhex_defaultcolor2_isbase = false;
            return QsciLexerIntelHex::defaultColor(style);
        } else if (qscilexerintelhex_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerintelhex_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerintelhex_defaulteolfill_isbase) {
            qscilexerintelhex_defaulteolfill_isbase = false;
            return QsciLexerIntelHex::defaultEolFill(style);
        } else if (qscilexerintelhex_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerintelhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerintelhex_defaultfont2_isbase) {
            qscilexerintelhex_defaultfont2_isbase = false;
            return QsciLexerIntelHex::defaultFont(style);
        } else if (qscilexerintelhex_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerintelhex_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerintelhex_defaultpaper2_isbase) {
            qscilexerintelhex_defaultpaper2_isbase = false;
            return QsciLexerIntelHex::defaultPaper(style);
        } else if (qscilexerintelhex_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerintelhex_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerIntelHex::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerintelhex_seteditor_isbase) {
            qscilexerintelhex_seteditor_isbase = false;
            QsciLexerIntelHex::setEditor(editor);
        } else if (qscilexerintelhex_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerintelhex_seteditor_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerintelhex_refreshproperties_isbase) {
            qscilexerintelhex_refreshproperties_isbase = false;
            QsciLexerIntelHex::refreshProperties();
        } else if (qscilexerintelhex_refreshproperties_callback != nullptr) {
            qscilexerintelhex_refreshproperties_callback();
        } else {
            QsciLexerIntelHex::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerintelhex_stylebitsneeded_isbase) {
            qscilexerintelhex_stylebitsneeded_isbase = false;
            return QsciLexerIntelHex::styleBitsNeeded();
        } else if (qscilexerintelhex_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerintelhex_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerintelhex_wordcharacters_isbase) {
            qscilexerintelhex_wordcharacters_isbase = false;
            return QsciLexerIntelHex::wordCharacters();
        } else if (qscilexerintelhex_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerintelhex_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerIntelHex::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerintelhex_setautoindentstyle_isbase) {
            qscilexerintelhex_setautoindentstyle_isbase = false;
            QsciLexerIntelHex::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerintelhex_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerintelhex_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerintelhex_setcolor_isbase) {
            qscilexerintelhex_setcolor_isbase = false;
            QsciLexerIntelHex::setColor(c, style);
        } else if (qscilexerintelhex_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerintelhex_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerIntelHex::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerintelhex_seteolfill_isbase) {
            qscilexerintelhex_seteolfill_isbase = false;
            QsciLexerIntelHex::setEolFill(eoffill, style);
        } else if (qscilexerintelhex_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerintelhex_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerIntelHex::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerintelhex_setfont_isbase) {
            qscilexerintelhex_setfont_isbase = false;
            QsciLexerIntelHex::setFont(f, style);
        } else if (qscilexerintelhex_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerintelhex_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerIntelHex::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerintelhex_setpaper_isbase) {
            qscilexerintelhex_setpaper_isbase = false;
            QsciLexerIntelHex::setPaper(c, style);
        } else if (qscilexerintelhex_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerintelhex_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerIntelHex::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerintelhex_readproperties_isbase) {
            qscilexerintelhex_readproperties_isbase = false;
            return QsciLexerIntelHex::readProperties(qs, prefix);
        } else if (qscilexerintelhex_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerintelhex_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerintelhex_writeproperties_isbase) {
            qscilexerintelhex_writeproperties_isbase = false;
            return QsciLexerIntelHex::writeProperties(qs, prefix);
        } else if (qscilexerintelhex_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerintelhex_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerintelhex_event_isbase) {
            qscilexerintelhex_event_isbase = false;
            return QsciLexerIntelHex::event(event);
        } else if (qscilexerintelhex_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerintelhex_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerintelhex_eventfilter_isbase) {
            qscilexerintelhex_eventfilter_isbase = false;
            return QsciLexerIntelHex::eventFilter(watched, event);
        } else if (qscilexerintelhex_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerintelhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerintelhex_timerevent_isbase) {
            qscilexerintelhex_timerevent_isbase = false;
            QsciLexerIntelHex::timerEvent(event);
        } else if (qscilexerintelhex_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerintelhex_timerevent_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerintelhex_childevent_isbase) {
            qscilexerintelhex_childevent_isbase = false;
            QsciLexerIntelHex::childEvent(event);
        } else if (qscilexerintelhex_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerintelhex_childevent_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerintelhex_customevent_isbase) {
            qscilexerintelhex_customevent_isbase = false;
            QsciLexerIntelHex::customEvent(event);
        } else if (qscilexerintelhex_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerintelhex_customevent_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_connectnotify_isbase) {
            qscilexerintelhex_connectnotify_isbase = false;
            QsciLexerIntelHex::connectNotify(signal);
        } else if (qscilexerintelhex_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerintelhex_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_disconnectnotify_isbase) {
            qscilexerintelhex_disconnectnotify_isbase = false;
            QsciLexerIntelHex::disconnectNotify(signal);
        } else if (qscilexerintelhex_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerintelhex_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerIntelHex::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerintelhex_textasbytes_isbase) {
            qscilexerintelhex_textasbytes_isbase = false;
            return QsciLexerIntelHex::textAsBytes(text);
        } else if (qscilexerintelhex_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            const char* callback_ret = qscilexerintelhex_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerIntelHex::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerintelhex_bytesastext_isbase) {
            qscilexerintelhex_bytesastext_isbase = false;
            return QsciLexerIntelHex::bytesAsText(bytes, size);
        } else if (qscilexerintelhex_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = qscilexerintelhex_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return QsciLexerIntelHex::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerintelhex_sender_isbase) {
            qscilexerintelhex_sender_isbase = false;
            return QsciLexerIntelHex::sender();
        } else if (qscilexerintelhex_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerintelhex_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerIntelHex::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerintelhex_sendersignalindex_isbase) {
            qscilexerintelhex_sendersignalindex_isbase = false;
            return QsciLexerIntelHex::senderSignalIndex();
        } else if (qscilexerintelhex_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerintelhex_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerintelhex_receivers_isbase) {
            qscilexerintelhex_receivers_isbase = false;
            return QsciLexerIntelHex::receivers(signal);
        } else if (qscilexerintelhex_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerintelhex_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerIntelHex::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerintelhex_issignalconnected_isbase) {
            qscilexerintelhex_issignalconnected_isbase = false;
            return QsciLexerIntelHex::isSignalConnected(signal);
        } else if (qscilexerintelhex_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerintelhex_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerIntelHex::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerIntelHex_ReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_QBaseReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_WriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_QBaseWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerIntelHex_TimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
    friend void QsciLexerIntelHex_QBaseTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
    friend void QsciLexerIntelHex_ChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
    friend void QsciLexerIntelHex_QBaseChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
    friend void QsciLexerIntelHex_CustomEvent(QsciLexerIntelHex* self, QEvent* event);
    friend void QsciLexerIntelHex_QBaseCustomEvent(QsciLexerIntelHex* self, QEvent* event);
    friend void QsciLexerIntelHex_ConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_QBaseConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_DisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_QBaseDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerIntelHex_TextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
    friend libqt_string QsciLexerIntelHex_QBaseTextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
    friend libqt_string QsciLexerIntelHex_BytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
    friend libqt_string QsciLexerIntelHex_QBaseBytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
    friend QObject* QsciLexerIntelHex_Sender(const QsciLexerIntelHex* self);
    friend QObject* QsciLexerIntelHex_QBaseSender(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_SenderSignalIndex(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_QBaseSenderSignalIndex(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_Receivers(const QsciLexerIntelHex* self, const char* signal);
    friend int QsciLexerIntelHex_QBaseReceivers(const QsciLexerIntelHex* self, const char* signal);
    friend bool QsciLexerIntelHex_IsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend bool QsciLexerIntelHex_QBaseIsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
};

#endif
