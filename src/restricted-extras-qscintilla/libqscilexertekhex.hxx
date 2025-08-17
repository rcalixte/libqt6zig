#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEKHEX_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTEKHEX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTekHex so that we can call protected methods
class VirtualQsciLexerTekHex final : public QsciLexerTekHex {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerTekHex = true;

    // Virtual class public types (including callbacks)
    using QsciLexerTekHex_Metacall_Callback = int (*)(QsciLexerTekHex*, int, int, void**);
    using QsciLexerTekHex_Language_Callback = const char* (*)();
    using QsciLexerTekHex_Lexer_Callback = const char* (*)();
    using QsciLexerTekHex_LexerId_Callback = int (*)();
    using QsciLexerTekHex_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerTekHex_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerTekHex_BlockEnd_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BlockLookback_Callback = int (*)();
    using QsciLexerTekHex_BlockStart_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BraceStyle_Callback = int (*)();
    using QsciLexerTekHex_CaseSensitive_Callback = bool (*)();
    using QsciLexerTekHex_Color_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_EolFill_Callback = bool (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_Font_Callback = QFont* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_IndentationGuideView_Callback = int (*)();
    using QsciLexerTekHex_Keywords_Callback = const char* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultStyle_Callback = int (*)();
    using QsciLexerTekHex_Description_Callback = libqt_string (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_Paper_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultEolFill_Callback = bool (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_SetEditor_Callback = void (*)(QsciLexerTekHex*, QsciScintilla*);
    using QsciLexerTekHex_RefreshProperties_Callback = void (*)();
    using QsciLexerTekHex_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerTekHex_WordCharacters_Callback = const char* (*)();
    using QsciLexerTekHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerTekHex*, int);
    using QsciLexerTekHex_SetColor_Callback = void (*)(QsciLexerTekHex*, QColor*, int);
    using QsciLexerTekHex_SetEolFill_Callback = void (*)(QsciLexerTekHex*, bool, int);
    using QsciLexerTekHex_SetFont_Callback = void (*)(QsciLexerTekHex*, QFont*, int);
    using QsciLexerTekHex_SetPaper_Callback = void (*)(QsciLexerTekHex*, QColor*, int);
    using QsciLexerTekHex_ReadProperties_Callback = bool (*)(QsciLexerTekHex*, QSettings*, libqt_string);
    using QsciLexerTekHex_WriteProperties_Callback = bool (*)(const QsciLexerTekHex*, QSettings*, libqt_string);
    using QsciLexerTekHex_Event_Callback = bool (*)(QsciLexerTekHex*, QEvent*);
    using QsciLexerTekHex_EventFilter_Callback = bool (*)(QsciLexerTekHex*, QObject*, QEvent*);
    using QsciLexerTekHex_TimerEvent_Callback = void (*)(QsciLexerTekHex*, QTimerEvent*);
    using QsciLexerTekHex_ChildEvent_Callback = void (*)(QsciLexerTekHex*, QChildEvent*);
    using QsciLexerTekHex_CustomEvent_Callback = void (*)(QsciLexerTekHex*, QEvent*);
    using QsciLexerTekHex_ConnectNotify_Callback = void (*)(QsciLexerTekHex*, QMetaMethod*);
    using QsciLexerTekHex_DisconnectNotify_Callback = void (*)(QsciLexerTekHex*, QMetaMethod*);
    using QsciLexerTekHex_TextAsBytes_Callback = libqt_string (*)(const QsciLexerTekHex*, libqt_string);
    using QsciLexerTekHex_BytesAsText_Callback = libqt_string (*)(const QsciLexerTekHex*, const char*, int);
    using QsciLexerTekHex_Sender_Callback = QObject* (*)();
    using QsciLexerTekHex_SenderSignalIndex_Callback = int (*)();
    using QsciLexerTekHex_Receivers_Callback = int (*)(const QsciLexerTekHex*, const char*);
    using QsciLexerTekHex_IsSignalConnected_Callback = bool (*)(const QsciLexerTekHex*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerTekHex_Metacall_Callback qscilexertekhex_metacall_callback = nullptr;
    QsciLexerTekHex_Language_Callback qscilexertekhex_language_callback = nullptr;
    QsciLexerTekHex_Lexer_Callback qscilexertekhex_lexer_callback = nullptr;
    QsciLexerTekHex_LexerId_Callback qscilexertekhex_lexerid_callback = nullptr;
    QsciLexerTekHex_AutoCompletionFillups_Callback qscilexertekhex_autocompletionfillups_callback = nullptr;
    QsciLexerTekHex_AutoCompletionWordSeparators_Callback qscilexertekhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerTekHex_BlockEnd_Callback qscilexertekhex_blockend_callback = nullptr;
    QsciLexerTekHex_BlockLookback_Callback qscilexertekhex_blocklookback_callback = nullptr;
    QsciLexerTekHex_BlockStart_Callback qscilexertekhex_blockstart_callback = nullptr;
    QsciLexerTekHex_BlockStartKeyword_Callback qscilexertekhex_blockstartkeyword_callback = nullptr;
    QsciLexerTekHex_BraceStyle_Callback qscilexertekhex_bracestyle_callback = nullptr;
    QsciLexerTekHex_CaseSensitive_Callback qscilexertekhex_casesensitive_callback = nullptr;
    QsciLexerTekHex_Color_Callback qscilexertekhex_color_callback = nullptr;
    QsciLexerTekHex_EolFill_Callback qscilexertekhex_eolfill_callback = nullptr;
    QsciLexerTekHex_Font_Callback qscilexertekhex_font_callback = nullptr;
    QsciLexerTekHex_IndentationGuideView_Callback qscilexertekhex_indentationguideview_callback = nullptr;
    QsciLexerTekHex_Keywords_Callback qscilexertekhex_keywords_callback = nullptr;
    QsciLexerTekHex_DefaultStyle_Callback qscilexertekhex_defaultstyle_callback = nullptr;
    QsciLexerTekHex_Description_Callback qscilexertekhex_description_callback = nullptr;
    QsciLexerTekHex_Paper_Callback qscilexertekhex_paper_callback = nullptr;
    QsciLexerTekHex_DefaultColor2_Callback qscilexertekhex_defaultcolor2_callback = nullptr;
    QsciLexerTekHex_DefaultEolFill_Callback qscilexertekhex_defaulteolfill_callback = nullptr;
    QsciLexerTekHex_DefaultFont2_Callback qscilexertekhex_defaultfont2_callback = nullptr;
    QsciLexerTekHex_DefaultPaper2_Callback qscilexertekhex_defaultpaper2_callback = nullptr;
    QsciLexerTekHex_SetEditor_Callback qscilexertekhex_seteditor_callback = nullptr;
    QsciLexerTekHex_RefreshProperties_Callback qscilexertekhex_refreshproperties_callback = nullptr;
    QsciLexerTekHex_StyleBitsNeeded_Callback qscilexertekhex_stylebitsneeded_callback = nullptr;
    QsciLexerTekHex_WordCharacters_Callback qscilexertekhex_wordcharacters_callback = nullptr;
    QsciLexerTekHex_SetAutoIndentStyle_Callback qscilexertekhex_setautoindentstyle_callback = nullptr;
    QsciLexerTekHex_SetColor_Callback qscilexertekhex_setcolor_callback = nullptr;
    QsciLexerTekHex_SetEolFill_Callback qscilexertekhex_seteolfill_callback = nullptr;
    QsciLexerTekHex_SetFont_Callback qscilexertekhex_setfont_callback = nullptr;
    QsciLexerTekHex_SetPaper_Callback qscilexertekhex_setpaper_callback = nullptr;
    QsciLexerTekHex_ReadProperties_Callback qscilexertekhex_readproperties_callback = nullptr;
    QsciLexerTekHex_WriteProperties_Callback qscilexertekhex_writeproperties_callback = nullptr;
    QsciLexerTekHex_Event_Callback qscilexertekhex_event_callback = nullptr;
    QsciLexerTekHex_EventFilter_Callback qscilexertekhex_eventfilter_callback = nullptr;
    QsciLexerTekHex_TimerEvent_Callback qscilexertekhex_timerevent_callback = nullptr;
    QsciLexerTekHex_ChildEvent_Callback qscilexertekhex_childevent_callback = nullptr;
    QsciLexerTekHex_CustomEvent_Callback qscilexertekhex_customevent_callback = nullptr;
    QsciLexerTekHex_ConnectNotify_Callback qscilexertekhex_connectnotify_callback = nullptr;
    QsciLexerTekHex_DisconnectNotify_Callback qscilexertekhex_disconnectnotify_callback = nullptr;
    QsciLexerTekHex_TextAsBytes_Callback qscilexertekhex_textasbytes_callback = nullptr;
    QsciLexerTekHex_BytesAsText_Callback qscilexertekhex_bytesastext_callback = nullptr;
    QsciLexerTekHex_Sender_Callback qscilexertekhex_sender_callback = nullptr;
    QsciLexerTekHex_SenderSignalIndex_Callback qscilexertekhex_sendersignalindex_callback = nullptr;
    QsciLexerTekHex_Receivers_Callback qscilexertekhex_receivers_callback = nullptr;
    QsciLexerTekHex_IsSignalConnected_Callback qscilexertekhex_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexertekhex_metacall_isbase = false;
    mutable bool qscilexertekhex_language_isbase = false;
    mutable bool qscilexertekhex_lexer_isbase = false;
    mutable bool qscilexertekhex_lexerid_isbase = false;
    mutable bool qscilexertekhex_autocompletionfillups_isbase = false;
    mutable bool qscilexertekhex_autocompletionwordseparators_isbase = false;
    mutable bool qscilexertekhex_blockend_isbase = false;
    mutable bool qscilexertekhex_blocklookback_isbase = false;
    mutable bool qscilexertekhex_blockstart_isbase = false;
    mutable bool qscilexertekhex_blockstartkeyword_isbase = false;
    mutable bool qscilexertekhex_bracestyle_isbase = false;
    mutable bool qscilexertekhex_casesensitive_isbase = false;
    mutable bool qscilexertekhex_color_isbase = false;
    mutable bool qscilexertekhex_eolfill_isbase = false;
    mutable bool qscilexertekhex_font_isbase = false;
    mutable bool qscilexertekhex_indentationguideview_isbase = false;
    mutable bool qscilexertekhex_keywords_isbase = false;
    mutable bool qscilexertekhex_defaultstyle_isbase = false;
    mutable bool qscilexertekhex_description_isbase = false;
    mutable bool qscilexertekhex_paper_isbase = false;
    mutable bool qscilexertekhex_defaultcolor2_isbase = false;
    mutable bool qscilexertekhex_defaulteolfill_isbase = false;
    mutable bool qscilexertekhex_defaultfont2_isbase = false;
    mutable bool qscilexertekhex_defaultpaper2_isbase = false;
    mutable bool qscilexertekhex_seteditor_isbase = false;
    mutable bool qscilexertekhex_refreshproperties_isbase = false;
    mutable bool qscilexertekhex_stylebitsneeded_isbase = false;
    mutable bool qscilexertekhex_wordcharacters_isbase = false;
    mutable bool qscilexertekhex_setautoindentstyle_isbase = false;
    mutable bool qscilexertekhex_setcolor_isbase = false;
    mutable bool qscilexertekhex_seteolfill_isbase = false;
    mutable bool qscilexertekhex_setfont_isbase = false;
    mutable bool qscilexertekhex_setpaper_isbase = false;
    mutable bool qscilexertekhex_readproperties_isbase = false;
    mutable bool qscilexertekhex_writeproperties_isbase = false;
    mutable bool qscilexertekhex_event_isbase = false;
    mutable bool qscilexertekhex_eventfilter_isbase = false;
    mutable bool qscilexertekhex_timerevent_isbase = false;
    mutable bool qscilexertekhex_childevent_isbase = false;
    mutable bool qscilexertekhex_customevent_isbase = false;
    mutable bool qscilexertekhex_connectnotify_isbase = false;
    mutable bool qscilexertekhex_disconnectnotify_isbase = false;
    mutable bool qscilexertekhex_textasbytes_isbase = false;
    mutable bool qscilexertekhex_bytesastext_isbase = false;
    mutable bool qscilexertekhex_sender_isbase = false;
    mutable bool qscilexertekhex_sendersignalindex_isbase = false;
    mutable bool qscilexertekhex_receivers_isbase = false;
    mutable bool qscilexertekhex_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerTekHex() : QsciLexerTekHex() {};
    VirtualQsciLexerTekHex(QObject* parent) : QsciLexerTekHex(parent) {};

    ~VirtualQsciLexerTekHex() {
        qscilexertekhex_metacall_callback = nullptr;
        qscilexertekhex_language_callback = nullptr;
        qscilexertekhex_lexer_callback = nullptr;
        qscilexertekhex_lexerid_callback = nullptr;
        qscilexertekhex_autocompletionfillups_callback = nullptr;
        qscilexertekhex_autocompletionwordseparators_callback = nullptr;
        qscilexertekhex_blockend_callback = nullptr;
        qscilexertekhex_blocklookback_callback = nullptr;
        qscilexertekhex_blockstart_callback = nullptr;
        qscilexertekhex_blockstartkeyword_callback = nullptr;
        qscilexertekhex_bracestyle_callback = nullptr;
        qscilexertekhex_casesensitive_callback = nullptr;
        qscilexertekhex_color_callback = nullptr;
        qscilexertekhex_eolfill_callback = nullptr;
        qscilexertekhex_font_callback = nullptr;
        qscilexertekhex_indentationguideview_callback = nullptr;
        qscilexertekhex_keywords_callback = nullptr;
        qscilexertekhex_defaultstyle_callback = nullptr;
        qscilexertekhex_description_callback = nullptr;
        qscilexertekhex_paper_callback = nullptr;
        qscilexertekhex_defaultcolor2_callback = nullptr;
        qscilexertekhex_defaulteolfill_callback = nullptr;
        qscilexertekhex_defaultfont2_callback = nullptr;
        qscilexertekhex_defaultpaper2_callback = nullptr;
        qscilexertekhex_seteditor_callback = nullptr;
        qscilexertekhex_refreshproperties_callback = nullptr;
        qscilexertekhex_stylebitsneeded_callback = nullptr;
        qscilexertekhex_wordcharacters_callback = nullptr;
        qscilexertekhex_setautoindentstyle_callback = nullptr;
        qscilexertekhex_setcolor_callback = nullptr;
        qscilexertekhex_seteolfill_callback = nullptr;
        qscilexertekhex_setfont_callback = nullptr;
        qscilexertekhex_setpaper_callback = nullptr;
        qscilexertekhex_readproperties_callback = nullptr;
        qscilexertekhex_writeproperties_callback = nullptr;
        qscilexertekhex_event_callback = nullptr;
        qscilexertekhex_eventfilter_callback = nullptr;
        qscilexertekhex_timerevent_callback = nullptr;
        qscilexertekhex_childevent_callback = nullptr;
        qscilexertekhex_customevent_callback = nullptr;
        qscilexertekhex_connectnotify_callback = nullptr;
        qscilexertekhex_disconnectnotify_callback = nullptr;
        qscilexertekhex_textasbytes_callback = nullptr;
        qscilexertekhex_bytesastext_callback = nullptr;
        qscilexertekhex_sender_callback = nullptr;
        qscilexertekhex_sendersignalindex_callback = nullptr;
        qscilexertekhex_receivers_callback = nullptr;
        qscilexertekhex_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerTekHex_Metacall_Callback(QsciLexerTekHex_Metacall_Callback cb) { qscilexertekhex_metacall_callback = cb; }
    inline void setQsciLexerTekHex_Language_Callback(QsciLexerTekHex_Language_Callback cb) { qscilexertekhex_language_callback = cb; }
    inline void setQsciLexerTekHex_Lexer_Callback(QsciLexerTekHex_Lexer_Callback cb) { qscilexertekhex_lexer_callback = cb; }
    inline void setQsciLexerTekHex_LexerId_Callback(QsciLexerTekHex_LexerId_Callback cb) { qscilexertekhex_lexerid_callback = cb; }
    inline void setQsciLexerTekHex_AutoCompletionFillups_Callback(QsciLexerTekHex_AutoCompletionFillups_Callback cb) { qscilexertekhex_autocompletionfillups_callback = cb; }
    inline void setQsciLexerTekHex_AutoCompletionWordSeparators_Callback(QsciLexerTekHex_AutoCompletionWordSeparators_Callback cb) { qscilexertekhex_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerTekHex_BlockEnd_Callback(QsciLexerTekHex_BlockEnd_Callback cb) { qscilexertekhex_blockend_callback = cb; }
    inline void setQsciLexerTekHex_BlockLookback_Callback(QsciLexerTekHex_BlockLookback_Callback cb) { qscilexertekhex_blocklookback_callback = cb; }
    inline void setQsciLexerTekHex_BlockStart_Callback(QsciLexerTekHex_BlockStart_Callback cb) { qscilexertekhex_blockstart_callback = cb; }
    inline void setQsciLexerTekHex_BlockStartKeyword_Callback(QsciLexerTekHex_BlockStartKeyword_Callback cb) { qscilexertekhex_blockstartkeyword_callback = cb; }
    inline void setQsciLexerTekHex_BraceStyle_Callback(QsciLexerTekHex_BraceStyle_Callback cb) { qscilexertekhex_bracestyle_callback = cb; }
    inline void setQsciLexerTekHex_CaseSensitive_Callback(QsciLexerTekHex_CaseSensitive_Callback cb) { qscilexertekhex_casesensitive_callback = cb; }
    inline void setQsciLexerTekHex_Color_Callback(QsciLexerTekHex_Color_Callback cb) { qscilexertekhex_color_callback = cb; }
    inline void setQsciLexerTekHex_EolFill_Callback(QsciLexerTekHex_EolFill_Callback cb) { qscilexertekhex_eolfill_callback = cb; }
    inline void setQsciLexerTekHex_Font_Callback(QsciLexerTekHex_Font_Callback cb) { qscilexertekhex_font_callback = cb; }
    inline void setQsciLexerTekHex_IndentationGuideView_Callback(QsciLexerTekHex_IndentationGuideView_Callback cb) { qscilexertekhex_indentationguideview_callback = cb; }
    inline void setQsciLexerTekHex_Keywords_Callback(QsciLexerTekHex_Keywords_Callback cb) { qscilexertekhex_keywords_callback = cb; }
    inline void setQsciLexerTekHex_DefaultStyle_Callback(QsciLexerTekHex_DefaultStyle_Callback cb) { qscilexertekhex_defaultstyle_callback = cb; }
    inline void setQsciLexerTekHex_Description_Callback(QsciLexerTekHex_Description_Callback cb) { qscilexertekhex_description_callback = cb; }
    inline void setQsciLexerTekHex_Paper_Callback(QsciLexerTekHex_Paper_Callback cb) { qscilexertekhex_paper_callback = cb; }
    inline void setQsciLexerTekHex_DefaultColor2_Callback(QsciLexerTekHex_DefaultColor2_Callback cb) { qscilexertekhex_defaultcolor2_callback = cb; }
    inline void setQsciLexerTekHex_DefaultEolFill_Callback(QsciLexerTekHex_DefaultEolFill_Callback cb) { qscilexertekhex_defaulteolfill_callback = cb; }
    inline void setQsciLexerTekHex_DefaultFont2_Callback(QsciLexerTekHex_DefaultFont2_Callback cb) { qscilexertekhex_defaultfont2_callback = cb; }
    inline void setQsciLexerTekHex_DefaultPaper2_Callback(QsciLexerTekHex_DefaultPaper2_Callback cb) { qscilexertekhex_defaultpaper2_callback = cb; }
    inline void setQsciLexerTekHex_SetEditor_Callback(QsciLexerTekHex_SetEditor_Callback cb) { qscilexertekhex_seteditor_callback = cb; }
    inline void setQsciLexerTekHex_RefreshProperties_Callback(QsciLexerTekHex_RefreshProperties_Callback cb) { qscilexertekhex_refreshproperties_callback = cb; }
    inline void setQsciLexerTekHex_StyleBitsNeeded_Callback(QsciLexerTekHex_StyleBitsNeeded_Callback cb) { qscilexertekhex_stylebitsneeded_callback = cb; }
    inline void setQsciLexerTekHex_WordCharacters_Callback(QsciLexerTekHex_WordCharacters_Callback cb) { qscilexertekhex_wordcharacters_callback = cb; }
    inline void setQsciLexerTekHex_SetAutoIndentStyle_Callback(QsciLexerTekHex_SetAutoIndentStyle_Callback cb) { qscilexertekhex_setautoindentstyle_callback = cb; }
    inline void setQsciLexerTekHex_SetColor_Callback(QsciLexerTekHex_SetColor_Callback cb) { qscilexertekhex_setcolor_callback = cb; }
    inline void setQsciLexerTekHex_SetEolFill_Callback(QsciLexerTekHex_SetEolFill_Callback cb) { qscilexertekhex_seteolfill_callback = cb; }
    inline void setQsciLexerTekHex_SetFont_Callback(QsciLexerTekHex_SetFont_Callback cb) { qscilexertekhex_setfont_callback = cb; }
    inline void setQsciLexerTekHex_SetPaper_Callback(QsciLexerTekHex_SetPaper_Callback cb) { qscilexertekhex_setpaper_callback = cb; }
    inline void setQsciLexerTekHex_ReadProperties_Callback(QsciLexerTekHex_ReadProperties_Callback cb) { qscilexertekhex_readproperties_callback = cb; }
    inline void setQsciLexerTekHex_WriteProperties_Callback(QsciLexerTekHex_WriteProperties_Callback cb) { qscilexertekhex_writeproperties_callback = cb; }
    inline void setQsciLexerTekHex_Event_Callback(QsciLexerTekHex_Event_Callback cb) { qscilexertekhex_event_callback = cb; }
    inline void setQsciLexerTekHex_EventFilter_Callback(QsciLexerTekHex_EventFilter_Callback cb) { qscilexertekhex_eventfilter_callback = cb; }
    inline void setQsciLexerTekHex_TimerEvent_Callback(QsciLexerTekHex_TimerEvent_Callback cb) { qscilexertekhex_timerevent_callback = cb; }
    inline void setQsciLexerTekHex_ChildEvent_Callback(QsciLexerTekHex_ChildEvent_Callback cb) { qscilexertekhex_childevent_callback = cb; }
    inline void setQsciLexerTekHex_CustomEvent_Callback(QsciLexerTekHex_CustomEvent_Callback cb) { qscilexertekhex_customevent_callback = cb; }
    inline void setQsciLexerTekHex_ConnectNotify_Callback(QsciLexerTekHex_ConnectNotify_Callback cb) { qscilexertekhex_connectnotify_callback = cb; }
    inline void setQsciLexerTekHex_DisconnectNotify_Callback(QsciLexerTekHex_DisconnectNotify_Callback cb) { qscilexertekhex_disconnectnotify_callback = cb; }
    inline void setQsciLexerTekHex_TextAsBytes_Callback(QsciLexerTekHex_TextAsBytes_Callback cb) { qscilexertekhex_textasbytes_callback = cb; }
    inline void setQsciLexerTekHex_BytesAsText_Callback(QsciLexerTekHex_BytesAsText_Callback cb) { qscilexertekhex_bytesastext_callback = cb; }
    inline void setQsciLexerTekHex_Sender_Callback(QsciLexerTekHex_Sender_Callback cb) { qscilexertekhex_sender_callback = cb; }
    inline void setQsciLexerTekHex_SenderSignalIndex_Callback(QsciLexerTekHex_SenderSignalIndex_Callback cb) { qscilexertekhex_sendersignalindex_callback = cb; }
    inline void setQsciLexerTekHex_Receivers_Callback(QsciLexerTekHex_Receivers_Callback cb) { qscilexertekhex_receivers_callback = cb; }
    inline void setQsciLexerTekHex_IsSignalConnected_Callback(QsciLexerTekHex_IsSignalConnected_Callback cb) { qscilexertekhex_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerTekHex_Metacall_IsBase(bool value) const { qscilexertekhex_metacall_isbase = value; }
    inline void setQsciLexerTekHex_Language_IsBase(bool value) const { qscilexertekhex_language_isbase = value; }
    inline void setQsciLexerTekHex_Lexer_IsBase(bool value) const { qscilexertekhex_lexer_isbase = value; }
    inline void setQsciLexerTekHex_LexerId_IsBase(bool value) const { qscilexertekhex_lexerid_isbase = value; }
    inline void setQsciLexerTekHex_AutoCompletionFillups_IsBase(bool value) const { qscilexertekhex_autocompletionfillups_isbase = value; }
    inline void setQsciLexerTekHex_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexertekhex_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerTekHex_BlockEnd_IsBase(bool value) const { qscilexertekhex_blockend_isbase = value; }
    inline void setQsciLexerTekHex_BlockLookback_IsBase(bool value) const { qscilexertekhex_blocklookback_isbase = value; }
    inline void setQsciLexerTekHex_BlockStart_IsBase(bool value) const { qscilexertekhex_blockstart_isbase = value; }
    inline void setQsciLexerTekHex_BlockStartKeyword_IsBase(bool value) const { qscilexertekhex_blockstartkeyword_isbase = value; }
    inline void setQsciLexerTekHex_BraceStyle_IsBase(bool value) const { qscilexertekhex_bracestyle_isbase = value; }
    inline void setQsciLexerTekHex_CaseSensitive_IsBase(bool value) const { qscilexertekhex_casesensitive_isbase = value; }
    inline void setQsciLexerTekHex_Color_IsBase(bool value) const { qscilexertekhex_color_isbase = value; }
    inline void setQsciLexerTekHex_EolFill_IsBase(bool value) const { qscilexertekhex_eolfill_isbase = value; }
    inline void setQsciLexerTekHex_Font_IsBase(bool value) const { qscilexertekhex_font_isbase = value; }
    inline void setQsciLexerTekHex_IndentationGuideView_IsBase(bool value) const { qscilexertekhex_indentationguideview_isbase = value; }
    inline void setQsciLexerTekHex_Keywords_IsBase(bool value) const { qscilexertekhex_keywords_isbase = value; }
    inline void setQsciLexerTekHex_DefaultStyle_IsBase(bool value) const { qscilexertekhex_defaultstyle_isbase = value; }
    inline void setQsciLexerTekHex_Description_IsBase(bool value) const { qscilexertekhex_description_isbase = value; }
    inline void setQsciLexerTekHex_Paper_IsBase(bool value) const { qscilexertekhex_paper_isbase = value; }
    inline void setQsciLexerTekHex_DefaultColor2_IsBase(bool value) const { qscilexertekhex_defaultcolor2_isbase = value; }
    inline void setQsciLexerTekHex_DefaultEolFill_IsBase(bool value) const { qscilexertekhex_defaulteolfill_isbase = value; }
    inline void setQsciLexerTekHex_DefaultFont2_IsBase(bool value) const { qscilexertekhex_defaultfont2_isbase = value; }
    inline void setQsciLexerTekHex_DefaultPaper2_IsBase(bool value) const { qscilexertekhex_defaultpaper2_isbase = value; }
    inline void setQsciLexerTekHex_SetEditor_IsBase(bool value) const { qscilexertekhex_seteditor_isbase = value; }
    inline void setQsciLexerTekHex_RefreshProperties_IsBase(bool value) const { qscilexertekhex_refreshproperties_isbase = value; }
    inline void setQsciLexerTekHex_StyleBitsNeeded_IsBase(bool value) const { qscilexertekhex_stylebitsneeded_isbase = value; }
    inline void setQsciLexerTekHex_WordCharacters_IsBase(bool value) const { qscilexertekhex_wordcharacters_isbase = value; }
    inline void setQsciLexerTekHex_SetAutoIndentStyle_IsBase(bool value) const { qscilexertekhex_setautoindentstyle_isbase = value; }
    inline void setQsciLexerTekHex_SetColor_IsBase(bool value) const { qscilexertekhex_setcolor_isbase = value; }
    inline void setQsciLexerTekHex_SetEolFill_IsBase(bool value) const { qscilexertekhex_seteolfill_isbase = value; }
    inline void setQsciLexerTekHex_SetFont_IsBase(bool value) const { qscilexertekhex_setfont_isbase = value; }
    inline void setQsciLexerTekHex_SetPaper_IsBase(bool value) const { qscilexertekhex_setpaper_isbase = value; }
    inline void setQsciLexerTekHex_ReadProperties_IsBase(bool value) const { qscilexertekhex_readproperties_isbase = value; }
    inline void setQsciLexerTekHex_WriteProperties_IsBase(bool value) const { qscilexertekhex_writeproperties_isbase = value; }
    inline void setQsciLexerTekHex_Event_IsBase(bool value) const { qscilexertekhex_event_isbase = value; }
    inline void setQsciLexerTekHex_EventFilter_IsBase(bool value) const { qscilexertekhex_eventfilter_isbase = value; }
    inline void setQsciLexerTekHex_TimerEvent_IsBase(bool value) const { qscilexertekhex_timerevent_isbase = value; }
    inline void setQsciLexerTekHex_ChildEvent_IsBase(bool value) const { qscilexertekhex_childevent_isbase = value; }
    inline void setQsciLexerTekHex_CustomEvent_IsBase(bool value) const { qscilexertekhex_customevent_isbase = value; }
    inline void setQsciLexerTekHex_ConnectNotify_IsBase(bool value) const { qscilexertekhex_connectnotify_isbase = value; }
    inline void setQsciLexerTekHex_DisconnectNotify_IsBase(bool value) const { qscilexertekhex_disconnectnotify_isbase = value; }
    inline void setQsciLexerTekHex_TextAsBytes_IsBase(bool value) const { qscilexertekhex_textasbytes_isbase = value; }
    inline void setQsciLexerTekHex_BytesAsText_IsBase(bool value) const { qscilexertekhex_bytesastext_isbase = value; }
    inline void setQsciLexerTekHex_Sender_IsBase(bool value) const { qscilexertekhex_sender_isbase = value; }
    inline void setQsciLexerTekHex_SenderSignalIndex_IsBase(bool value) const { qscilexertekhex_sendersignalindex_isbase = value; }
    inline void setQsciLexerTekHex_Receivers_IsBase(bool value) const { qscilexertekhex_receivers_isbase = value; }
    inline void setQsciLexerTekHex_IsSignalConnected_IsBase(bool value) const { qscilexertekhex_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertekhex_metacall_isbase) {
            qscilexertekhex_metacall_isbase = false;
            return QsciLexerTekHex::qt_metacall(param1, param2, param3);
        } else if (qscilexertekhex_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexertekhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertekhex_language_callback != nullptr) {
            const char* callback_ret = qscilexertekhex_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertekhex_lexer_isbase) {
            qscilexertekhex_lexer_isbase = false;
            return QsciLexerTekHex::lexer();
        } else if (qscilexertekhex_lexer_callback != nullptr) {
            const char* callback_ret = qscilexertekhex_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerTekHex::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertekhex_lexerid_isbase) {
            qscilexertekhex_lexerid_isbase = false;
            return QsciLexerTekHex::lexerId();
        } else if (qscilexertekhex_lexerid_callback != nullptr) {
            int callback_ret = qscilexertekhex_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertekhex_autocompletionfillups_isbase) {
            qscilexertekhex_autocompletionfillups_isbase = false;
            return QsciLexerTekHex::autoCompletionFillups();
        } else if (qscilexertekhex_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexertekhex_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerTekHex::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertekhex_autocompletionwordseparators_isbase) {
            qscilexertekhex_autocompletionwordseparators_isbase = false;
            return QsciLexerTekHex::autoCompletionWordSeparators();
        } else if (qscilexertekhex_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexertekhex_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerTekHex::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertekhex_blockend_isbase) {
            qscilexertekhex_blockend_isbase = false;
            return QsciLexerTekHex::blockEnd(style);
        } else if (qscilexertekhex_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertekhex_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertekhex_blocklookback_isbase) {
            qscilexertekhex_blocklookback_isbase = false;
            return QsciLexerTekHex::blockLookback();
        } else if (qscilexertekhex_blocklookback_callback != nullptr) {
            int callback_ret = qscilexertekhex_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertekhex_blockstart_isbase) {
            qscilexertekhex_blockstart_isbase = false;
            return QsciLexerTekHex::blockStart(style);
        } else if (qscilexertekhex_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertekhex_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertekhex_blockstartkeyword_isbase) {
            qscilexertekhex_blockstartkeyword_isbase = false;
            return QsciLexerTekHex::blockStartKeyword(style);
        } else if (qscilexertekhex_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertekhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertekhex_bracestyle_isbase) {
            qscilexertekhex_bracestyle_isbase = false;
            return QsciLexerTekHex::braceStyle();
        } else if (qscilexertekhex_bracestyle_callback != nullptr) {
            int callback_ret = qscilexertekhex_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertekhex_casesensitive_isbase) {
            qscilexertekhex_casesensitive_isbase = false;
            return QsciLexerTekHex::caseSensitive();
        } else if (qscilexertekhex_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexertekhex_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerTekHex::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertekhex_color_isbase) {
            qscilexertekhex_color_isbase = false;
            return QsciLexerTekHex::color(style);
        } else if (qscilexertekhex_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertekhex_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertekhex_eolfill_isbase) {
            qscilexertekhex_eolfill_isbase = false;
            return QsciLexerTekHex::eolFill(style);
        } else if (qscilexertekhex_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertekhex_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertekhex_font_isbase) {
            qscilexertekhex_font_isbase = false;
            return QsciLexerTekHex::font(style);
        } else if (qscilexertekhex_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertekhex_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertekhex_indentationguideview_isbase) {
            qscilexertekhex_indentationguideview_isbase = false;
            return QsciLexerTekHex::indentationGuideView();
        } else if (qscilexertekhex_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexertekhex_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertekhex_keywords_isbase) {
            qscilexertekhex_keywords_isbase = false;
            return QsciLexerTekHex::keywords(set);
        } else if (qscilexertekhex_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexertekhex_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertekhex_defaultstyle_isbase) {
            qscilexertekhex_defaultstyle_isbase = false;
            return QsciLexerTekHex::defaultStyle();
        } else if (qscilexertekhex_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexertekhex_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertekhex_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexertekhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertekhex_paper_isbase) {
            qscilexertekhex_paper_isbase = false;
            return QsciLexerTekHex::paper(style);
        } else if (qscilexertekhex_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertekhex_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertekhex_defaultcolor2_isbase) {
            qscilexertekhex_defaultcolor2_isbase = false;
            return QsciLexerTekHex::defaultColor(style);
        } else if (qscilexertekhex_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertekhex_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertekhex_defaulteolfill_isbase) {
            qscilexertekhex_defaulteolfill_isbase = false;
            return QsciLexerTekHex::defaultEolFill(style);
        } else if (qscilexertekhex_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertekhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertekhex_defaultfont2_isbase) {
            qscilexertekhex_defaultfont2_isbase = false;
            return QsciLexerTekHex::defaultFont(style);
        } else if (qscilexertekhex_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertekhex_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertekhex_defaultpaper2_isbase) {
            qscilexertekhex_defaultpaper2_isbase = false;
            return QsciLexerTekHex::defaultPaper(style);
        } else if (qscilexertekhex_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertekhex_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTekHex::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertekhex_seteditor_isbase) {
            qscilexertekhex_seteditor_isbase = false;
            QsciLexerTekHex::setEditor(editor);
        } else if (qscilexertekhex_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexertekhex_seteditor_callback(this, cbval1);
        } else {
            QsciLexerTekHex::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertekhex_refreshproperties_isbase) {
            qscilexertekhex_refreshproperties_isbase = false;
            QsciLexerTekHex::refreshProperties();
        } else if (qscilexertekhex_refreshproperties_callback != nullptr) {
            qscilexertekhex_refreshproperties_callback();
        } else {
            QsciLexerTekHex::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertekhex_stylebitsneeded_isbase) {
            qscilexertekhex_stylebitsneeded_isbase = false;
            return QsciLexerTekHex::styleBitsNeeded();
        } else if (qscilexertekhex_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexertekhex_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertekhex_wordcharacters_isbase) {
            qscilexertekhex_wordcharacters_isbase = false;
            return QsciLexerTekHex::wordCharacters();
        } else if (qscilexertekhex_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexertekhex_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerTekHex::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertekhex_setautoindentstyle_isbase) {
            qscilexertekhex_setautoindentstyle_isbase = false;
            QsciLexerTekHex::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexertekhex_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexertekhex_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerTekHex::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertekhex_setcolor_isbase) {
            qscilexertekhex_setcolor_isbase = false;
            QsciLexerTekHex::setColor(c, style);
        } else if (qscilexertekhex_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertekhex_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTekHex::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertekhex_seteolfill_isbase) {
            qscilexertekhex_seteolfill_isbase = false;
            QsciLexerTekHex::setEolFill(eoffill, style);
        } else if (qscilexertekhex_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexertekhex_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTekHex::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertekhex_setfont_isbase) {
            qscilexertekhex_setfont_isbase = false;
            QsciLexerTekHex::setFont(f, style);
        } else if (qscilexertekhex_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexertekhex_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTekHex::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertekhex_setpaper_isbase) {
            qscilexertekhex_setpaper_isbase = false;
            QsciLexerTekHex::setPaper(c, style);
        } else if (qscilexertekhex_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertekhex_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTekHex::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertekhex_readproperties_isbase) {
            qscilexertekhex_readproperties_isbase = false;
            return QsciLexerTekHex::readProperties(qs, prefix);
        } else if (qscilexertekhex_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertekhex_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTekHex::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertekhex_writeproperties_isbase) {
            qscilexertekhex_writeproperties_isbase = false;
            return QsciLexerTekHex::writeProperties(qs, prefix);
        } else if (qscilexertekhex_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertekhex_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTekHex::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertekhex_event_isbase) {
            qscilexertekhex_event_isbase = false;
            return QsciLexerTekHex::event(event);
        } else if (qscilexertekhex_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexertekhex_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertekhex_eventfilter_isbase) {
            qscilexertekhex_eventfilter_isbase = false;
            return QsciLexerTekHex::eventFilter(watched, event);
        } else if (qscilexertekhex_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexertekhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTekHex::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertekhex_timerevent_isbase) {
            qscilexertekhex_timerevent_isbase = false;
            QsciLexerTekHex::timerEvent(event);
        } else if (qscilexertekhex_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexertekhex_timerevent_callback(this, cbval1);
        } else {
            QsciLexerTekHex::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertekhex_childevent_isbase) {
            qscilexertekhex_childevent_isbase = false;
            QsciLexerTekHex::childEvent(event);
        } else if (qscilexertekhex_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexertekhex_childevent_callback(this, cbval1);
        } else {
            QsciLexerTekHex::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertekhex_customevent_isbase) {
            qscilexertekhex_customevent_isbase = false;
            QsciLexerTekHex::customEvent(event);
        } else if (qscilexertekhex_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexertekhex_customevent_callback(this, cbval1);
        } else {
            QsciLexerTekHex::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertekhex_connectnotify_isbase) {
            qscilexertekhex_connectnotify_isbase = false;
            QsciLexerTekHex::connectNotify(signal);
        } else if (qscilexertekhex_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertekhex_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerTekHex::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertekhex_disconnectnotify_isbase) {
            qscilexertekhex_disconnectnotify_isbase = false;
            QsciLexerTekHex::disconnectNotify(signal);
        } else if (qscilexertekhex_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertekhex_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerTekHex::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexertekhex_textasbytes_isbase) {
            qscilexertekhex_textasbytes_isbase = false;
            return QsciLexerTekHex::textAsBytes(text);
        } else if (qscilexertekhex_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexertekhex_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerTekHex::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexertekhex_bytesastext_isbase) {
            qscilexertekhex_bytesastext_isbase = false;
            return QsciLexerTekHex::bytesAsText(bytes, size);
        } else if (qscilexertekhex_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexertekhex_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerTekHex::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexertekhex_sender_isbase) {
            qscilexertekhex_sender_isbase = false;
            return QsciLexerTekHex::sender();
        } else if (qscilexertekhex_sender_callback != nullptr) {
            QObject* callback_ret = qscilexertekhex_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerTekHex::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexertekhex_sendersignalindex_isbase) {
            qscilexertekhex_sendersignalindex_isbase = false;
            return QsciLexerTekHex::senderSignalIndex();
        } else if (qscilexertekhex_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexertekhex_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexertekhex_receivers_isbase) {
            qscilexertekhex_receivers_isbase = false;
            return QsciLexerTekHex::receivers(signal);
        } else if (qscilexertekhex_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexertekhex_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTekHex::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexertekhex_issignalconnected_isbase) {
            qscilexertekhex_issignalconnected_isbase = false;
            return QsciLexerTekHex::isSignalConnected(signal);
        } else if (qscilexertekhex_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexertekhex_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTekHex::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerTekHex_ReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTekHex_QBaseReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTekHex_WriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTekHex_QBaseWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTekHex_TimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
    friend void QsciLexerTekHex_QBaseTimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
    friend void QsciLexerTekHex_ChildEvent(QsciLexerTekHex* self, QChildEvent* event);
    friend void QsciLexerTekHex_QBaseChildEvent(QsciLexerTekHex* self, QChildEvent* event);
    friend void QsciLexerTekHex_CustomEvent(QsciLexerTekHex* self, QEvent* event);
    friend void QsciLexerTekHex_QBaseCustomEvent(QsciLexerTekHex* self, QEvent* event);
    friend void QsciLexerTekHex_ConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
    friend void QsciLexerTekHex_QBaseConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
    friend void QsciLexerTekHex_DisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
    friend void QsciLexerTekHex_QBaseDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerTekHex_TextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
    friend libqt_string QsciLexerTekHex_QBaseTextAsBytes(const QsciLexerTekHex* self, const libqt_string text);
    friend libqt_string QsciLexerTekHex_BytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
    friend libqt_string QsciLexerTekHex_QBaseBytesAsText(const QsciLexerTekHex* self, const char* bytes, int size);
    friend QObject* QsciLexerTekHex_Sender(const QsciLexerTekHex* self);
    friend QObject* QsciLexerTekHex_QBaseSender(const QsciLexerTekHex* self);
    friend int QsciLexerTekHex_SenderSignalIndex(const QsciLexerTekHex* self);
    friend int QsciLexerTekHex_QBaseSenderSignalIndex(const QsciLexerTekHex* self);
    friend int QsciLexerTekHex_Receivers(const QsciLexerTekHex* self, const char* signal);
    friend int QsciLexerTekHex_QBaseReceivers(const QsciLexerTekHex* self, const char* signal);
    friend bool QsciLexerTekHex_IsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
    friend bool QsciLexerTekHex_QBaseIsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal);
};

#endif
