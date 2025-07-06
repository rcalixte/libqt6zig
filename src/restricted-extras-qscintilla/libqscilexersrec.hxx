#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSREC_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSREC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSRec so that we can call protected methods
class VirtualQsciLexerSRec final : public QsciLexerSRec {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerSRec = true;

    // Virtual class public types (including callbacks)
    using QsciLexerSRec_Metacall_Callback = int (*)(QsciLexerSRec*, int, int, void**);
    using QsciLexerSRec_Language_Callback = const char* (*)();
    using QsciLexerSRec_Lexer_Callback = const char* (*)();
    using QsciLexerSRec_LexerId_Callback = int (*)();
    using QsciLexerSRec_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerSRec_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerSRec_BlockEnd_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BlockLookback_Callback = int (*)();
    using QsciLexerSRec_BlockStart_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BraceStyle_Callback = int (*)();
    using QsciLexerSRec_CaseSensitive_Callback = bool (*)();
    using QsciLexerSRec_Color_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_EolFill_Callback = bool (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_Font_Callback = QFont* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_IndentationGuideView_Callback = int (*)();
    using QsciLexerSRec_Keywords_Callback = const char* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultStyle_Callback = int (*)();
    using QsciLexerSRec_Description_Callback = libqt_string (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_Paper_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultEolFill_Callback = bool (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_SetEditor_Callback = void (*)(QsciLexerSRec*, QsciScintilla*);
    using QsciLexerSRec_RefreshProperties_Callback = void (*)();
    using QsciLexerSRec_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerSRec_WordCharacters_Callback = const char* (*)();
    using QsciLexerSRec_SetAutoIndentStyle_Callback = void (*)(QsciLexerSRec*, int);
    using QsciLexerSRec_SetColor_Callback = void (*)(QsciLexerSRec*, QColor*, int);
    using QsciLexerSRec_SetEolFill_Callback = void (*)(QsciLexerSRec*, bool, int);
    using QsciLexerSRec_SetFont_Callback = void (*)(QsciLexerSRec*, QFont*, int);
    using QsciLexerSRec_SetPaper_Callback = void (*)(QsciLexerSRec*, QColor*, int);
    using QsciLexerSRec_ReadProperties_Callback = bool (*)(QsciLexerSRec*, QSettings*, libqt_string);
    using QsciLexerSRec_WriteProperties_Callback = bool (*)(const QsciLexerSRec*, QSettings*, libqt_string);
    using QsciLexerSRec_Event_Callback = bool (*)(QsciLexerSRec*, QEvent*);
    using QsciLexerSRec_EventFilter_Callback = bool (*)(QsciLexerSRec*, QObject*, QEvent*);
    using QsciLexerSRec_TimerEvent_Callback = void (*)(QsciLexerSRec*, QTimerEvent*);
    using QsciLexerSRec_ChildEvent_Callback = void (*)(QsciLexerSRec*, QChildEvent*);
    using QsciLexerSRec_CustomEvent_Callback = void (*)(QsciLexerSRec*, QEvent*);
    using QsciLexerSRec_ConnectNotify_Callback = void (*)(QsciLexerSRec*, QMetaMethod*);
    using QsciLexerSRec_DisconnectNotify_Callback = void (*)(QsciLexerSRec*, QMetaMethod*);
    using QsciLexerSRec_TextAsBytes_Callback = libqt_string (*)(const QsciLexerSRec*, libqt_string);
    using QsciLexerSRec_BytesAsText_Callback = libqt_string (*)(const QsciLexerSRec*, const char*, int);
    using QsciLexerSRec_Sender_Callback = QObject* (*)();
    using QsciLexerSRec_SenderSignalIndex_Callback = int (*)();
    using QsciLexerSRec_Receivers_Callback = int (*)(const QsciLexerSRec*, const char*);
    using QsciLexerSRec_IsSignalConnected_Callback = bool (*)(const QsciLexerSRec*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerSRec_Metacall_Callback qscilexersrec_metacall_callback = nullptr;
    QsciLexerSRec_Language_Callback qscilexersrec_language_callback = nullptr;
    QsciLexerSRec_Lexer_Callback qscilexersrec_lexer_callback = nullptr;
    QsciLexerSRec_LexerId_Callback qscilexersrec_lexerid_callback = nullptr;
    QsciLexerSRec_AutoCompletionFillups_Callback qscilexersrec_autocompletionfillups_callback = nullptr;
    QsciLexerSRec_AutoCompletionWordSeparators_Callback qscilexersrec_autocompletionwordseparators_callback = nullptr;
    QsciLexerSRec_BlockEnd_Callback qscilexersrec_blockend_callback = nullptr;
    QsciLexerSRec_BlockLookback_Callback qscilexersrec_blocklookback_callback = nullptr;
    QsciLexerSRec_BlockStart_Callback qscilexersrec_blockstart_callback = nullptr;
    QsciLexerSRec_BlockStartKeyword_Callback qscilexersrec_blockstartkeyword_callback = nullptr;
    QsciLexerSRec_BraceStyle_Callback qscilexersrec_bracestyle_callback = nullptr;
    QsciLexerSRec_CaseSensitive_Callback qscilexersrec_casesensitive_callback = nullptr;
    QsciLexerSRec_Color_Callback qscilexersrec_color_callback = nullptr;
    QsciLexerSRec_EolFill_Callback qscilexersrec_eolfill_callback = nullptr;
    QsciLexerSRec_Font_Callback qscilexersrec_font_callback = nullptr;
    QsciLexerSRec_IndentationGuideView_Callback qscilexersrec_indentationguideview_callback = nullptr;
    QsciLexerSRec_Keywords_Callback qscilexersrec_keywords_callback = nullptr;
    QsciLexerSRec_DefaultStyle_Callback qscilexersrec_defaultstyle_callback = nullptr;
    QsciLexerSRec_Description_Callback qscilexersrec_description_callback = nullptr;
    QsciLexerSRec_Paper_Callback qscilexersrec_paper_callback = nullptr;
    QsciLexerSRec_DefaultColorWithStyle_Callback qscilexersrec_defaultcolorwithstyle_callback = nullptr;
    QsciLexerSRec_DefaultEolFill_Callback qscilexersrec_defaulteolfill_callback = nullptr;
    QsciLexerSRec_DefaultFontWithStyle_Callback qscilexersrec_defaultfontwithstyle_callback = nullptr;
    QsciLexerSRec_DefaultPaperWithStyle_Callback qscilexersrec_defaultpaperwithstyle_callback = nullptr;
    QsciLexerSRec_SetEditor_Callback qscilexersrec_seteditor_callback = nullptr;
    QsciLexerSRec_RefreshProperties_Callback qscilexersrec_refreshproperties_callback = nullptr;
    QsciLexerSRec_StyleBitsNeeded_Callback qscilexersrec_stylebitsneeded_callback = nullptr;
    QsciLexerSRec_WordCharacters_Callback qscilexersrec_wordcharacters_callback = nullptr;
    QsciLexerSRec_SetAutoIndentStyle_Callback qscilexersrec_setautoindentstyle_callback = nullptr;
    QsciLexerSRec_SetColor_Callback qscilexersrec_setcolor_callback = nullptr;
    QsciLexerSRec_SetEolFill_Callback qscilexersrec_seteolfill_callback = nullptr;
    QsciLexerSRec_SetFont_Callback qscilexersrec_setfont_callback = nullptr;
    QsciLexerSRec_SetPaper_Callback qscilexersrec_setpaper_callback = nullptr;
    QsciLexerSRec_ReadProperties_Callback qscilexersrec_readproperties_callback = nullptr;
    QsciLexerSRec_WriteProperties_Callback qscilexersrec_writeproperties_callback = nullptr;
    QsciLexerSRec_Event_Callback qscilexersrec_event_callback = nullptr;
    QsciLexerSRec_EventFilter_Callback qscilexersrec_eventfilter_callback = nullptr;
    QsciLexerSRec_TimerEvent_Callback qscilexersrec_timerevent_callback = nullptr;
    QsciLexerSRec_ChildEvent_Callback qscilexersrec_childevent_callback = nullptr;
    QsciLexerSRec_CustomEvent_Callback qscilexersrec_customevent_callback = nullptr;
    QsciLexerSRec_ConnectNotify_Callback qscilexersrec_connectnotify_callback = nullptr;
    QsciLexerSRec_DisconnectNotify_Callback qscilexersrec_disconnectnotify_callback = nullptr;
    QsciLexerSRec_TextAsBytes_Callback qscilexersrec_textasbytes_callback = nullptr;
    QsciLexerSRec_BytesAsText_Callback qscilexersrec_bytesastext_callback = nullptr;
    QsciLexerSRec_Sender_Callback qscilexersrec_sender_callback = nullptr;
    QsciLexerSRec_SenderSignalIndex_Callback qscilexersrec_sendersignalindex_callback = nullptr;
    QsciLexerSRec_Receivers_Callback qscilexersrec_receivers_callback = nullptr;
    QsciLexerSRec_IsSignalConnected_Callback qscilexersrec_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexersrec_metacall_isbase = false;
    mutable bool qscilexersrec_language_isbase = false;
    mutable bool qscilexersrec_lexer_isbase = false;
    mutable bool qscilexersrec_lexerid_isbase = false;
    mutable bool qscilexersrec_autocompletionfillups_isbase = false;
    mutable bool qscilexersrec_autocompletionwordseparators_isbase = false;
    mutable bool qscilexersrec_blockend_isbase = false;
    mutable bool qscilexersrec_blocklookback_isbase = false;
    mutable bool qscilexersrec_blockstart_isbase = false;
    mutable bool qscilexersrec_blockstartkeyword_isbase = false;
    mutable bool qscilexersrec_bracestyle_isbase = false;
    mutable bool qscilexersrec_casesensitive_isbase = false;
    mutable bool qscilexersrec_color_isbase = false;
    mutable bool qscilexersrec_eolfill_isbase = false;
    mutable bool qscilexersrec_font_isbase = false;
    mutable bool qscilexersrec_indentationguideview_isbase = false;
    mutable bool qscilexersrec_keywords_isbase = false;
    mutable bool qscilexersrec_defaultstyle_isbase = false;
    mutable bool qscilexersrec_description_isbase = false;
    mutable bool qscilexersrec_paper_isbase = false;
    mutable bool qscilexersrec_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexersrec_defaulteolfill_isbase = false;
    mutable bool qscilexersrec_defaultfontwithstyle_isbase = false;
    mutable bool qscilexersrec_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexersrec_seteditor_isbase = false;
    mutable bool qscilexersrec_refreshproperties_isbase = false;
    mutable bool qscilexersrec_stylebitsneeded_isbase = false;
    mutable bool qscilexersrec_wordcharacters_isbase = false;
    mutable bool qscilexersrec_setautoindentstyle_isbase = false;
    mutable bool qscilexersrec_setcolor_isbase = false;
    mutable bool qscilexersrec_seteolfill_isbase = false;
    mutable bool qscilexersrec_setfont_isbase = false;
    mutable bool qscilexersrec_setpaper_isbase = false;
    mutable bool qscilexersrec_readproperties_isbase = false;
    mutable bool qscilexersrec_writeproperties_isbase = false;
    mutable bool qscilexersrec_event_isbase = false;
    mutable bool qscilexersrec_eventfilter_isbase = false;
    mutable bool qscilexersrec_timerevent_isbase = false;
    mutable bool qscilexersrec_childevent_isbase = false;
    mutable bool qscilexersrec_customevent_isbase = false;
    mutable bool qscilexersrec_connectnotify_isbase = false;
    mutable bool qscilexersrec_disconnectnotify_isbase = false;
    mutable bool qscilexersrec_textasbytes_isbase = false;
    mutable bool qscilexersrec_bytesastext_isbase = false;
    mutable bool qscilexersrec_sender_isbase = false;
    mutable bool qscilexersrec_sendersignalindex_isbase = false;
    mutable bool qscilexersrec_receivers_isbase = false;
    mutable bool qscilexersrec_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerSRec() : QsciLexerSRec() {};
    VirtualQsciLexerSRec(QObject* parent) : QsciLexerSRec(parent) {};

    ~VirtualQsciLexerSRec() {
        qscilexersrec_metacall_callback = nullptr;
        qscilexersrec_language_callback = nullptr;
        qscilexersrec_lexer_callback = nullptr;
        qscilexersrec_lexerid_callback = nullptr;
        qscilexersrec_autocompletionfillups_callback = nullptr;
        qscilexersrec_autocompletionwordseparators_callback = nullptr;
        qscilexersrec_blockend_callback = nullptr;
        qscilexersrec_blocklookback_callback = nullptr;
        qscilexersrec_blockstart_callback = nullptr;
        qscilexersrec_blockstartkeyword_callback = nullptr;
        qscilexersrec_bracestyle_callback = nullptr;
        qscilexersrec_casesensitive_callback = nullptr;
        qscilexersrec_color_callback = nullptr;
        qscilexersrec_eolfill_callback = nullptr;
        qscilexersrec_font_callback = nullptr;
        qscilexersrec_indentationguideview_callback = nullptr;
        qscilexersrec_keywords_callback = nullptr;
        qscilexersrec_defaultstyle_callback = nullptr;
        qscilexersrec_description_callback = nullptr;
        qscilexersrec_paper_callback = nullptr;
        qscilexersrec_defaultcolorwithstyle_callback = nullptr;
        qscilexersrec_defaulteolfill_callback = nullptr;
        qscilexersrec_defaultfontwithstyle_callback = nullptr;
        qscilexersrec_defaultpaperwithstyle_callback = nullptr;
        qscilexersrec_seteditor_callback = nullptr;
        qscilexersrec_refreshproperties_callback = nullptr;
        qscilexersrec_stylebitsneeded_callback = nullptr;
        qscilexersrec_wordcharacters_callback = nullptr;
        qscilexersrec_setautoindentstyle_callback = nullptr;
        qscilexersrec_setcolor_callback = nullptr;
        qscilexersrec_seteolfill_callback = nullptr;
        qscilexersrec_setfont_callback = nullptr;
        qscilexersrec_setpaper_callback = nullptr;
        qscilexersrec_readproperties_callback = nullptr;
        qscilexersrec_writeproperties_callback = nullptr;
        qscilexersrec_event_callback = nullptr;
        qscilexersrec_eventfilter_callback = nullptr;
        qscilexersrec_timerevent_callback = nullptr;
        qscilexersrec_childevent_callback = nullptr;
        qscilexersrec_customevent_callback = nullptr;
        qscilexersrec_connectnotify_callback = nullptr;
        qscilexersrec_disconnectnotify_callback = nullptr;
        qscilexersrec_textasbytes_callback = nullptr;
        qscilexersrec_bytesastext_callback = nullptr;
        qscilexersrec_sender_callback = nullptr;
        qscilexersrec_sendersignalindex_callback = nullptr;
        qscilexersrec_receivers_callback = nullptr;
        qscilexersrec_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerSRec_Metacall_Callback(QsciLexerSRec_Metacall_Callback cb) { qscilexersrec_metacall_callback = cb; }
    inline void setQsciLexerSRec_Language_Callback(QsciLexerSRec_Language_Callback cb) { qscilexersrec_language_callback = cb; }
    inline void setQsciLexerSRec_Lexer_Callback(QsciLexerSRec_Lexer_Callback cb) { qscilexersrec_lexer_callback = cb; }
    inline void setQsciLexerSRec_LexerId_Callback(QsciLexerSRec_LexerId_Callback cb) { qscilexersrec_lexerid_callback = cb; }
    inline void setQsciLexerSRec_AutoCompletionFillups_Callback(QsciLexerSRec_AutoCompletionFillups_Callback cb) { qscilexersrec_autocompletionfillups_callback = cb; }
    inline void setQsciLexerSRec_AutoCompletionWordSeparators_Callback(QsciLexerSRec_AutoCompletionWordSeparators_Callback cb) { qscilexersrec_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerSRec_BlockEnd_Callback(QsciLexerSRec_BlockEnd_Callback cb) { qscilexersrec_blockend_callback = cb; }
    inline void setQsciLexerSRec_BlockLookback_Callback(QsciLexerSRec_BlockLookback_Callback cb) { qscilexersrec_blocklookback_callback = cb; }
    inline void setQsciLexerSRec_BlockStart_Callback(QsciLexerSRec_BlockStart_Callback cb) { qscilexersrec_blockstart_callback = cb; }
    inline void setQsciLexerSRec_BlockStartKeyword_Callback(QsciLexerSRec_BlockStartKeyword_Callback cb) { qscilexersrec_blockstartkeyword_callback = cb; }
    inline void setQsciLexerSRec_BraceStyle_Callback(QsciLexerSRec_BraceStyle_Callback cb) { qscilexersrec_bracestyle_callback = cb; }
    inline void setQsciLexerSRec_CaseSensitive_Callback(QsciLexerSRec_CaseSensitive_Callback cb) { qscilexersrec_casesensitive_callback = cb; }
    inline void setQsciLexerSRec_Color_Callback(QsciLexerSRec_Color_Callback cb) { qscilexersrec_color_callback = cb; }
    inline void setQsciLexerSRec_EolFill_Callback(QsciLexerSRec_EolFill_Callback cb) { qscilexersrec_eolfill_callback = cb; }
    inline void setQsciLexerSRec_Font_Callback(QsciLexerSRec_Font_Callback cb) { qscilexersrec_font_callback = cb; }
    inline void setQsciLexerSRec_IndentationGuideView_Callback(QsciLexerSRec_IndentationGuideView_Callback cb) { qscilexersrec_indentationguideview_callback = cb; }
    inline void setQsciLexerSRec_Keywords_Callback(QsciLexerSRec_Keywords_Callback cb) { qscilexersrec_keywords_callback = cb; }
    inline void setQsciLexerSRec_DefaultStyle_Callback(QsciLexerSRec_DefaultStyle_Callback cb) { qscilexersrec_defaultstyle_callback = cb; }
    inline void setQsciLexerSRec_Description_Callback(QsciLexerSRec_Description_Callback cb) { qscilexersrec_description_callback = cb; }
    inline void setQsciLexerSRec_Paper_Callback(QsciLexerSRec_Paper_Callback cb) { qscilexersrec_paper_callback = cb; }
    inline void setQsciLexerSRec_DefaultColorWithStyle_Callback(QsciLexerSRec_DefaultColorWithStyle_Callback cb) { qscilexersrec_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerSRec_DefaultEolFill_Callback(QsciLexerSRec_DefaultEolFill_Callback cb) { qscilexersrec_defaulteolfill_callback = cb; }
    inline void setQsciLexerSRec_DefaultFontWithStyle_Callback(QsciLexerSRec_DefaultFontWithStyle_Callback cb) { qscilexersrec_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerSRec_DefaultPaperWithStyle_Callback(QsciLexerSRec_DefaultPaperWithStyle_Callback cb) { qscilexersrec_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerSRec_SetEditor_Callback(QsciLexerSRec_SetEditor_Callback cb) { qscilexersrec_seteditor_callback = cb; }
    inline void setQsciLexerSRec_RefreshProperties_Callback(QsciLexerSRec_RefreshProperties_Callback cb) { qscilexersrec_refreshproperties_callback = cb; }
    inline void setQsciLexerSRec_StyleBitsNeeded_Callback(QsciLexerSRec_StyleBitsNeeded_Callback cb) { qscilexersrec_stylebitsneeded_callback = cb; }
    inline void setQsciLexerSRec_WordCharacters_Callback(QsciLexerSRec_WordCharacters_Callback cb) { qscilexersrec_wordcharacters_callback = cb; }
    inline void setQsciLexerSRec_SetAutoIndentStyle_Callback(QsciLexerSRec_SetAutoIndentStyle_Callback cb) { qscilexersrec_setautoindentstyle_callback = cb; }
    inline void setQsciLexerSRec_SetColor_Callback(QsciLexerSRec_SetColor_Callback cb) { qscilexersrec_setcolor_callback = cb; }
    inline void setQsciLexerSRec_SetEolFill_Callback(QsciLexerSRec_SetEolFill_Callback cb) { qscilexersrec_seteolfill_callback = cb; }
    inline void setQsciLexerSRec_SetFont_Callback(QsciLexerSRec_SetFont_Callback cb) { qscilexersrec_setfont_callback = cb; }
    inline void setQsciLexerSRec_SetPaper_Callback(QsciLexerSRec_SetPaper_Callback cb) { qscilexersrec_setpaper_callback = cb; }
    inline void setQsciLexerSRec_ReadProperties_Callback(QsciLexerSRec_ReadProperties_Callback cb) { qscilexersrec_readproperties_callback = cb; }
    inline void setQsciLexerSRec_WriteProperties_Callback(QsciLexerSRec_WriteProperties_Callback cb) { qscilexersrec_writeproperties_callback = cb; }
    inline void setQsciLexerSRec_Event_Callback(QsciLexerSRec_Event_Callback cb) { qscilexersrec_event_callback = cb; }
    inline void setQsciLexerSRec_EventFilter_Callback(QsciLexerSRec_EventFilter_Callback cb) { qscilexersrec_eventfilter_callback = cb; }
    inline void setQsciLexerSRec_TimerEvent_Callback(QsciLexerSRec_TimerEvent_Callback cb) { qscilexersrec_timerevent_callback = cb; }
    inline void setQsciLexerSRec_ChildEvent_Callback(QsciLexerSRec_ChildEvent_Callback cb) { qscilexersrec_childevent_callback = cb; }
    inline void setQsciLexerSRec_CustomEvent_Callback(QsciLexerSRec_CustomEvent_Callback cb) { qscilexersrec_customevent_callback = cb; }
    inline void setQsciLexerSRec_ConnectNotify_Callback(QsciLexerSRec_ConnectNotify_Callback cb) { qscilexersrec_connectnotify_callback = cb; }
    inline void setQsciLexerSRec_DisconnectNotify_Callback(QsciLexerSRec_DisconnectNotify_Callback cb) { qscilexersrec_disconnectnotify_callback = cb; }
    inline void setQsciLexerSRec_TextAsBytes_Callback(QsciLexerSRec_TextAsBytes_Callback cb) { qscilexersrec_textasbytes_callback = cb; }
    inline void setQsciLexerSRec_BytesAsText_Callback(QsciLexerSRec_BytesAsText_Callback cb) { qscilexersrec_bytesastext_callback = cb; }
    inline void setQsciLexerSRec_Sender_Callback(QsciLexerSRec_Sender_Callback cb) { qscilexersrec_sender_callback = cb; }
    inline void setQsciLexerSRec_SenderSignalIndex_Callback(QsciLexerSRec_SenderSignalIndex_Callback cb) { qscilexersrec_sendersignalindex_callback = cb; }
    inline void setQsciLexerSRec_Receivers_Callback(QsciLexerSRec_Receivers_Callback cb) { qscilexersrec_receivers_callback = cb; }
    inline void setQsciLexerSRec_IsSignalConnected_Callback(QsciLexerSRec_IsSignalConnected_Callback cb) { qscilexersrec_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerSRec_Metacall_IsBase(bool value) const { qscilexersrec_metacall_isbase = value; }
    inline void setQsciLexerSRec_Language_IsBase(bool value) const { qscilexersrec_language_isbase = value; }
    inline void setQsciLexerSRec_Lexer_IsBase(bool value) const { qscilexersrec_lexer_isbase = value; }
    inline void setQsciLexerSRec_LexerId_IsBase(bool value) const { qscilexersrec_lexerid_isbase = value; }
    inline void setQsciLexerSRec_AutoCompletionFillups_IsBase(bool value) const { qscilexersrec_autocompletionfillups_isbase = value; }
    inline void setQsciLexerSRec_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexersrec_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerSRec_BlockEnd_IsBase(bool value) const { qscilexersrec_blockend_isbase = value; }
    inline void setQsciLexerSRec_BlockLookback_IsBase(bool value) const { qscilexersrec_blocklookback_isbase = value; }
    inline void setQsciLexerSRec_BlockStart_IsBase(bool value) const { qscilexersrec_blockstart_isbase = value; }
    inline void setQsciLexerSRec_BlockStartKeyword_IsBase(bool value) const { qscilexersrec_blockstartkeyword_isbase = value; }
    inline void setQsciLexerSRec_BraceStyle_IsBase(bool value) const { qscilexersrec_bracestyle_isbase = value; }
    inline void setQsciLexerSRec_CaseSensitive_IsBase(bool value) const { qscilexersrec_casesensitive_isbase = value; }
    inline void setQsciLexerSRec_Color_IsBase(bool value) const { qscilexersrec_color_isbase = value; }
    inline void setQsciLexerSRec_EolFill_IsBase(bool value) const { qscilexersrec_eolfill_isbase = value; }
    inline void setQsciLexerSRec_Font_IsBase(bool value) const { qscilexersrec_font_isbase = value; }
    inline void setQsciLexerSRec_IndentationGuideView_IsBase(bool value) const { qscilexersrec_indentationguideview_isbase = value; }
    inline void setQsciLexerSRec_Keywords_IsBase(bool value) const { qscilexersrec_keywords_isbase = value; }
    inline void setQsciLexerSRec_DefaultStyle_IsBase(bool value) const { qscilexersrec_defaultstyle_isbase = value; }
    inline void setQsciLexerSRec_Description_IsBase(bool value) const { qscilexersrec_description_isbase = value; }
    inline void setQsciLexerSRec_Paper_IsBase(bool value) const { qscilexersrec_paper_isbase = value; }
    inline void setQsciLexerSRec_DefaultColorWithStyle_IsBase(bool value) const { qscilexersrec_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerSRec_DefaultEolFill_IsBase(bool value) const { qscilexersrec_defaulteolfill_isbase = value; }
    inline void setQsciLexerSRec_DefaultFontWithStyle_IsBase(bool value) const { qscilexersrec_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerSRec_DefaultPaperWithStyle_IsBase(bool value) const { qscilexersrec_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerSRec_SetEditor_IsBase(bool value) const { qscilexersrec_seteditor_isbase = value; }
    inline void setQsciLexerSRec_RefreshProperties_IsBase(bool value) const { qscilexersrec_refreshproperties_isbase = value; }
    inline void setQsciLexerSRec_StyleBitsNeeded_IsBase(bool value) const { qscilexersrec_stylebitsneeded_isbase = value; }
    inline void setQsciLexerSRec_WordCharacters_IsBase(bool value) const { qscilexersrec_wordcharacters_isbase = value; }
    inline void setQsciLexerSRec_SetAutoIndentStyle_IsBase(bool value) const { qscilexersrec_setautoindentstyle_isbase = value; }
    inline void setQsciLexerSRec_SetColor_IsBase(bool value) const { qscilexersrec_setcolor_isbase = value; }
    inline void setQsciLexerSRec_SetEolFill_IsBase(bool value) const { qscilexersrec_seteolfill_isbase = value; }
    inline void setQsciLexerSRec_SetFont_IsBase(bool value) const { qscilexersrec_setfont_isbase = value; }
    inline void setQsciLexerSRec_SetPaper_IsBase(bool value) const { qscilexersrec_setpaper_isbase = value; }
    inline void setQsciLexerSRec_ReadProperties_IsBase(bool value) const { qscilexersrec_readproperties_isbase = value; }
    inline void setQsciLexerSRec_WriteProperties_IsBase(bool value) const { qscilexersrec_writeproperties_isbase = value; }
    inline void setQsciLexerSRec_Event_IsBase(bool value) const { qscilexersrec_event_isbase = value; }
    inline void setQsciLexerSRec_EventFilter_IsBase(bool value) const { qscilexersrec_eventfilter_isbase = value; }
    inline void setQsciLexerSRec_TimerEvent_IsBase(bool value) const { qscilexersrec_timerevent_isbase = value; }
    inline void setQsciLexerSRec_ChildEvent_IsBase(bool value) const { qscilexersrec_childevent_isbase = value; }
    inline void setQsciLexerSRec_CustomEvent_IsBase(bool value) const { qscilexersrec_customevent_isbase = value; }
    inline void setQsciLexerSRec_ConnectNotify_IsBase(bool value) const { qscilexersrec_connectnotify_isbase = value; }
    inline void setQsciLexerSRec_DisconnectNotify_IsBase(bool value) const { qscilexersrec_disconnectnotify_isbase = value; }
    inline void setQsciLexerSRec_TextAsBytes_IsBase(bool value) const { qscilexersrec_textasbytes_isbase = value; }
    inline void setQsciLexerSRec_BytesAsText_IsBase(bool value) const { qscilexersrec_bytesastext_isbase = value; }
    inline void setQsciLexerSRec_Sender_IsBase(bool value) const { qscilexersrec_sender_isbase = value; }
    inline void setQsciLexerSRec_SenderSignalIndex_IsBase(bool value) const { qscilexersrec_sendersignalindex_isbase = value; }
    inline void setQsciLexerSRec_Receivers_IsBase(bool value) const { qscilexersrec_receivers_isbase = value; }
    inline void setQsciLexerSRec_IsSignalConnected_IsBase(bool value) const { qscilexersrec_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexersrec_metacall_isbase) {
            qscilexersrec_metacall_isbase = false;
            return QsciLexerSRec::qt_metacall(param1, param2, param3);
        } else if (qscilexersrec_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexersrec_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexersrec_language_callback != nullptr) {
            const char* callback_ret = qscilexersrec_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexersrec_lexer_isbase) {
            qscilexersrec_lexer_isbase = false;
            return QsciLexerSRec::lexer();
        } else if (qscilexersrec_lexer_callback != nullptr) {
            const char* callback_ret = qscilexersrec_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerSRec::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexersrec_lexerid_isbase) {
            qscilexersrec_lexerid_isbase = false;
            return QsciLexerSRec::lexerId();
        } else if (qscilexersrec_lexerid_callback != nullptr) {
            int callback_ret = qscilexersrec_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexersrec_autocompletionfillups_isbase) {
            qscilexersrec_autocompletionfillups_isbase = false;
            return QsciLexerSRec::autoCompletionFillups();
        } else if (qscilexersrec_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexersrec_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerSRec::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexersrec_autocompletionwordseparators_isbase) {
            qscilexersrec_autocompletionwordseparators_isbase = false;
            return QsciLexerSRec::autoCompletionWordSeparators();
        } else if (qscilexersrec_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexersrec_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerSRec::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexersrec_blockend_isbase) {
            qscilexersrec_blockend_isbase = false;
            return QsciLexerSRec::blockEnd(style);
        } else if (qscilexersrec_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersrec_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexersrec_blocklookback_isbase) {
            qscilexersrec_blocklookback_isbase = false;
            return QsciLexerSRec::blockLookback();
        } else if (qscilexersrec_blocklookback_callback != nullptr) {
            int callback_ret = qscilexersrec_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexersrec_blockstart_isbase) {
            qscilexersrec_blockstart_isbase = false;
            return QsciLexerSRec::blockStart(style);
        } else if (qscilexersrec_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersrec_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexersrec_blockstartkeyword_isbase) {
            qscilexersrec_blockstartkeyword_isbase = false;
            return QsciLexerSRec::blockStartKeyword(style);
        } else if (qscilexersrec_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersrec_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexersrec_bracestyle_isbase) {
            qscilexersrec_bracestyle_isbase = false;
            return QsciLexerSRec::braceStyle();
        } else if (qscilexersrec_bracestyle_callback != nullptr) {
            int callback_ret = qscilexersrec_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexersrec_casesensitive_isbase) {
            qscilexersrec_casesensitive_isbase = false;
            return QsciLexerSRec::caseSensitive();
        } else if (qscilexersrec_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexersrec_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerSRec::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexersrec_color_isbase) {
            qscilexersrec_color_isbase = false;
            return QsciLexerSRec::color(style);
        } else if (qscilexersrec_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersrec_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexersrec_eolfill_isbase) {
            qscilexersrec_eolfill_isbase = false;
            return QsciLexerSRec::eolFill(style);
        } else if (qscilexersrec_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexersrec_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexersrec_font_isbase) {
            qscilexersrec_font_isbase = false;
            return QsciLexerSRec::font(style);
        } else if (qscilexersrec_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexersrec_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexersrec_indentationguideview_isbase) {
            qscilexersrec_indentationguideview_isbase = false;
            return QsciLexerSRec::indentationGuideView();
        } else if (qscilexersrec_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexersrec_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexersrec_keywords_isbase) {
            qscilexersrec_keywords_isbase = false;
            return QsciLexerSRec::keywords(set);
        } else if (qscilexersrec_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexersrec_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexersrec_defaultstyle_isbase) {
            qscilexersrec_defaultstyle_isbase = false;
            return QsciLexerSRec::defaultStyle();
        } else if (qscilexersrec_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexersrec_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexersrec_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexersrec_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexersrec_paper_isbase) {
            qscilexersrec_paper_isbase = false;
            return QsciLexerSRec::paper(style);
        } else if (qscilexersrec_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersrec_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexersrec_defaultcolorwithstyle_isbase) {
            qscilexersrec_defaultcolorwithstyle_isbase = false;
            return QsciLexerSRec::defaultColor(style);
        } else if (qscilexersrec_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersrec_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexersrec_defaulteolfill_isbase) {
            qscilexersrec_defaulteolfill_isbase = false;
            return QsciLexerSRec::defaultEolFill(style);
        } else if (qscilexersrec_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexersrec_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexersrec_defaultfontwithstyle_isbase) {
            qscilexersrec_defaultfontwithstyle_isbase = false;
            return QsciLexerSRec::defaultFont(style);
        } else if (qscilexersrec_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexersrec_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexersrec_defaultpaperwithstyle_isbase) {
            qscilexersrec_defaultpaperwithstyle_isbase = false;
            return QsciLexerSRec::defaultPaper(style);
        } else if (qscilexersrec_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersrec_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSRec::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexersrec_seteditor_isbase) {
            qscilexersrec_seteditor_isbase = false;
            QsciLexerSRec::setEditor(editor);
        } else if (qscilexersrec_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexersrec_seteditor_callback(this, cbval1);
        } else {
            QsciLexerSRec::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexersrec_refreshproperties_isbase) {
            qscilexersrec_refreshproperties_isbase = false;
            QsciLexerSRec::refreshProperties();
        } else if (qscilexersrec_refreshproperties_callback != nullptr) {
            qscilexersrec_refreshproperties_callback();
        } else {
            QsciLexerSRec::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexersrec_stylebitsneeded_isbase) {
            qscilexersrec_stylebitsneeded_isbase = false;
            return QsciLexerSRec::styleBitsNeeded();
        } else if (qscilexersrec_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexersrec_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexersrec_wordcharacters_isbase) {
            qscilexersrec_wordcharacters_isbase = false;
            return QsciLexerSRec::wordCharacters();
        } else if (qscilexersrec_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexersrec_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerSRec::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexersrec_setautoindentstyle_isbase) {
            qscilexersrec_setautoindentstyle_isbase = false;
            QsciLexerSRec::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexersrec_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexersrec_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerSRec::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexersrec_setcolor_isbase) {
            qscilexersrec_setcolor_isbase = false;
            QsciLexerSRec::setColor(c, style);
        } else if (qscilexersrec_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexersrec_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSRec::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexersrec_seteolfill_isbase) {
            qscilexersrec_seteolfill_isbase = false;
            QsciLexerSRec::setEolFill(eoffill, style);
        } else if (qscilexersrec_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexersrec_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSRec::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexersrec_setfont_isbase) {
            qscilexersrec_setfont_isbase = false;
            QsciLexerSRec::setFont(f, style);
        } else if (qscilexersrec_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexersrec_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSRec::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexersrec_setpaper_isbase) {
            qscilexersrec_setpaper_isbase = false;
            QsciLexerSRec::setPaper(c, style);
        } else if (qscilexersrec_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexersrec_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSRec::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexersrec_readproperties_isbase) {
            qscilexersrec_readproperties_isbase = false;
            return QsciLexerSRec::readProperties(qs, prefix);
        } else if (qscilexersrec_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexersrec_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSRec::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexersrec_writeproperties_isbase) {
            qscilexersrec_writeproperties_isbase = false;
            return QsciLexerSRec::writeProperties(qs, prefix);
        } else if (qscilexersrec_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexersrec_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSRec::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexersrec_event_isbase) {
            qscilexersrec_event_isbase = false;
            return QsciLexerSRec::event(event);
        } else if (qscilexersrec_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexersrec_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexersrec_eventfilter_isbase) {
            qscilexersrec_eventfilter_isbase = false;
            return QsciLexerSRec::eventFilter(watched, event);
        } else if (qscilexersrec_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexersrec_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSRec::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexersrec_timerevent_isbase) {
            qscilexersrec_timerevent_isbase = false;
            QsciLexerSRec::timerEvent(event);
        } else if (qscilexersrec_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexersrec_timerevent_callback(this, cbval1);
        } else {
            QsciLexerSRec::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexersrec_childevent_isbase) {
            qscilexersrec_childevent_isbase = false;
            QsciLexerSRec::childEvent(event);
        } else if (qscilexersrec_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexersrec_childevent_callback(this, cbval1);
        } else {
            QsciLexerSRec::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexersrec_customevent_isbase) {
            qscilexersrec_customevent_isbase = false;
            QsciLexerSRec::customEvent(event);
        } else if (qscilexersrec_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexersrec_customevent_callback(this, cbval1);
        } else {
            QsciLexerSRec::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexersrec_connectnotify_isbase) {
            qscilexersrec_connectnotify_isbase = false;
            QsciLexerSRec::connectNotify(signal);
        } else if (qscilexersrec_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexersrec_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerSRec::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexersrec_disconnectnotify_isbase) {
            qscilexersrec_disconnectnotify_isbase = false;
            QsciLexerSRec::disconnectNotify(signal);
        } else if (qscilexersrec_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexersrec_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerSRec::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexersrec_textasbytes_isbase) {
            qscilexersrec_textasbytes_isbase = false;
            return QsciLexerSRec::textAsBytes(text);
        } else if (qscilexersrec_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexersrec_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerSRec::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexersrec_bytesastext_isbase) {
            qscilexersrec_bytesastext_isbase = false;
            return QsciLexerSRec::bytesAsText(bytes, size);
        } else if (qscilexersrec_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexersrec_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerSRec::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexersrec_sender_isbase) {
            qscilexersrec_sender_isbase = false;
            return QsciLexerSRec::sender();
        } else if (qscilexersrec_sender_callback != nullptr) {
            QObject* callback_ret = qscilexersrec_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerSRec::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexersrec_sendersignalindex_isbase) {
            qscilexersrec_sendersignalindex_isbase = false;
            return QsciLexerSRec::senderSignalIndex();
        } else if (qscilexersrec_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexersrec_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexersrec_receivers_isbase) {
            qscilexersrec_receivers_isbase = false;
            return QsciLexerSRec::receivers(signal);
        } else if (qscilexersrec_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexersrec_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSRec::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexersrec_issignalconnected_isbase) {
            qscilexersrec_issignalconnected_isbase = false;
            return QsciLexerSRec::isSignalConnected(signal);
        } else if (qscilexersrec_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexersrec_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSRec::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerSRec_ReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSRec_QBaseReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSRec_WriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSRec_QBaseWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSRec_TimerEvent(QsciLexerSRec* self, QTimerEvent* event);
    friend void QsciLexerSRec_QBaseTimerEvent(QsciLexerSRec* self, QTimerEvent* event);
    friend void QsciLexerSRec_ChildEvent(QsciLexerSRec* self, QChildEvent* event);
    friend void QsciLexerSRec_QBaseChildEvent(QsciLexerSRec* self, QChildEvent* event);
    friend void QsciLexerSRec_CustomEvent(QsciLexerSRec* self, QEvent* event);
    friend void QsciLexerSRec_QBaseCustomEvent(QsciLexerSRec* self, QEvent* event);
    friend void QsciLexerSRec_ConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
    friend void QsciLexerSRec_QBaseConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
    friend void QsciLexerSRec_DisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
    friend void QsciLexerSRec_QBaseDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerSRec_TextAsBytes(const QsciLexerSRec* self, const libqt_string text);
    friend libqt_string QsciLexerSRec_QBaseTextAsBytes(const QsciLexerSRec* self, const libqt_string text);
    friend libqt_string QsciLexerSRec_BytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
    friend libqt_string QsciLexerSRec_QBaseBytesAsText(const QsciLexerSRec* self, const char* bytes, int size);
    friend QObject* QsciLexerSRec_Sender(const QsciLexerSRec* self);
    friend QObject* QsciLexerSRec_QBaseSender(const QsciLexerSRec* self);
    friend int QsciLexerSRec_SenderSignalIndex(const QsciLexerSRec* self);
    friend int QsciLexerSRec_QBaseSenderSignalIndex(const QsciLexerSRec* self);
    friend int QsciLexerSRec_Receivers(const QsciLexerSRec* self, const char* signal);
    friend int QsciLexerSRec_QBaseReceivers(const QsciLexerSRec* self, const char* signal);
    friend bool QsciLexerSRec_IsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
    friend bool QsciLexerSRec_QBaseIsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal);
};

#endif
