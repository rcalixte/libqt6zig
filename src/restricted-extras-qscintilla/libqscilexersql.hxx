#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSQL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERSQL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSQL so that we can call protected methods
class VirtualQsciLexerSQL final : public QsciLexerSQL {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerSQL = true;

    // Virtual class public types (including callbacks)
    using QsciLexerSQL_Metacall_Callback = int (*)(QsciLexerSQL*, int, int, void**);
    using QsciLexerSQL_SetBackslashEscapes_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldComments_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldCompact_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_Language_Callback = const char* (*)();
    using QsciLexerSQL_Lexer_Callback = const char* (*)();
    using QsciLexerSQL_LexerId_Callback = int (*)();
    using QsciLexerSQL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerSQL_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerSQL_BlockEnd_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockLookback_Callback = int (*)();
    using QsciLexerSQL_BlockStart_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BraceStyle_Callback = int (*)();
    using QsciLexerSQL_CaseSensitive_Callback = bool (*)();
    using QsciLexerSQL_Color_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_EolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Font_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_IndentationGuideView_Callback = int (*)();
    using QsciLexerSQL_Keywords_Callback = const char* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultStyle_Callback = int (*)();
    using QsciLexerSQL_Description_Callback = libqt_string (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Paper_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultEolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_SetEditor_Callback = void (*)(QsciLexerSQL*, QsciScintilla*);
    using QsciLexerSQL_RefreshProperties_Callback = void (*)();
    using QsciLexerSQL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerSQL_WordCharacters_Callback = const char* (*)();
    using QsciLexerSQL_SetAutoIndentStyle_Callback = void (*)(QsciLexerSQL*, int);
    using QsciLexerSQL_SetColor_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_SetEolFill_Callback = void (*)(QsciLexerSQL*, bool, int);
    using QsciLexerSQL_SetFont_Callback = void (*)(QsciLexerSQL*, QFont*, int);
    using QsciLexerSQL_SetPaper_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_ReadProperties_Callback = bool (*)(QsciLexerSQL*, QSettings*, libqt_string);
    using QsciLexerSQL_WriteProperties_Callback = bool (*)(const QsciLexerSQL*, QSettings*, libqt_string);
    using QsciLexerSQL_Event_Callback = bool (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_EventFilter_Callback = bool (*)(QsciLexerSQL*, QObject*, QEvent*);
    using QsciLexerSQL_TimerEvent_Callback = void (*)(QsciLexerSQL*, QTimerEvent*);
    using QsciLexerSQL_ChildEvent_Callback = void (*)(QsciLexerSQL*, QChildEvent*);
    using QsciLexerSQL_CustomEvent_Callback = void (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_ConnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL_DisconnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL_TextAsBytes_Callback = libqt_string (*)(const QsciLexerSQL*, libqt_string);
    using QsciLexerSQL_BytesAsText_Callback = libqt_string (*)(const QsciLexerSQL*, const char*, int);
    using QsciLexerSQL_Sender_Callback = QObject* (*)();
    using QsciLexerSQL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerSQL_Receivers_Callback = int (*)(const QsciLexerSQL*, const char*);
    using QsciLexerSQL_IsSignalConnected_Callback = bool (*)(const QsciLexerSQL*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerSQL_Metacall_Callback qscilexersql_metacall_callback = nullptr;
    QsciLexerSQL_SetBackslashEscapes_Callback qscilexersql_setbackslashescapes_callback = nullptr;
    QsciLexerSQL_SetFoldComments_Callback qscilexersql_setfoldcomments_callback = nullptr;
    QsciLexerSQL_SetFoldCompact_Callback qscilexersql_setfoldcompact_callback = nullptr;
    QsciLexerSQL_Language_Callback qscilexersql_language_callback = nullptr;
    QsciLexerSQL_Lexer_Callback qscilexersql_lexer_callback = nullptr;
    QsciLexerSQL_LexerId_Callback qscilexersql_lexerid_callback = nullptr;
    QsciLexerSQL_AutoCompletionFillups_Callback qscilexersql_autocompletionfillups_callback = nullptr;
    QsciLexerSQL_AutoCompletionWordSeparators_Callback qscilexersql_autocompletionwordseparators_callback = nullptr;
    QsciLexerSQL_BlockEnd_Callback qscilexersql_blockend_callback = nullptr;
    QsciLexerSQL_BlockLookback_Callback qscilexersql_blocklookback_callback = nullptr;
    QsciLexerSQL_BlockStart_Callback qscilexersql_blockstart_callback = nullptr;
    QsciLexerSQL_BlockStartKeyword_Callback qscilexersql_blockstartkeyword_callback = nullptr;
    QsciLexerSQL_BraceStyle_Callback qscilexersql_bracestyle_callback = nullptr;
    QsciLexerSQL_CaseSensitive_Callback qscilexersql_casesensitive_callback = nullptr;
    QsciLexerSQL_Color_Callback qscilexersql_color_callback = nullptr;
    QsciLexerSQL_EolFill_Callback qscilexersql_eolfill_callback = nullptr;
    QsciLexerSQL_Font_Callback qscilexersql_font_callback = nullptr;
    QsciLexerSQL_IndentationGuideView_Callback qscilexersql_indentationguideview_callback = nullptr;
    QsciLexerSQL_Keywords_Callback qscilexersql_keywords_callback = nullptr;
    QsciLexerSQL_DefaultStyle_Callback qscilexersql_defaultstyle_callback = nullptr;
    QsciLexerSQL_Description_Callback qscilexersql_description_callback = nullptr;
    QsciLexerSQL_Paper_Callback qscilexersql_paper_callback = nullptr;
    QsciLexerSQL_DefaultColorWithStyle_Callback qscilexersql_defaultcolorwithstyle_callback = nullptr;
    QsciLexerSQL_DefaultEolFill_Callback qscilexersql_defaulteolfill_callback = nullptr;
    QsciLexerSQL_DefaultFontWithStyle_Callback qscilexersql_defaultfontwithstyle_callback = nullptr;
    QsciLexerSQL_DefaultPaperWithStyle_Callback qscilexersql_defaultpaperwithstyle_callback = nullptr;
    QsciLexerSQL_SetEditor_Callback qscilexersql_seteditor_callback = nullptr;
    QsciLexerSQL_RefreshProperties_Callback qscilexersql_refreshproperties_callback = nullptr;
    QsciLexerSQL_StyleBitsNeeded_Callback qscilexersql_stylebitsneeded_callback = nullptr;
    QsciLexerSQL_WordCharacters_Callback qscilexersql_wordcharacters_callback = nullptr;
    QsciLexerSQL_SetAutoIndentStyle_Callback qscilexersql_setautoindentstyle_callback = nullptr;
    QsciLexerSQL_SetColor_Callback qscilexersql_setcolor_callback = nullptr;
    QsciLexerSQL_SetEolFill_Callback qscilexersql_seteolfill_callback = nullptr;
    QsciLexerSQL_SetFont_Callback qscilexersql_setfont_callback = nullptr;
    QsciLexerSQL_SetPaper_Callback qscilexersql_setpaper_callback = nullptr;
    QsciLexerSQL_ReadProperties_Callback qscilexersql_readproperties_callback = nullptr;
    QsciLexerSQL_WriteProperties_Callback qscilexersql_writeproperties_callback = nullptr;
    QsciLexerSQL_Event_Callback qscilexersql_event_callback = nullptr;
    QsciLexerSQL_EventFilter_Callback qscilexersql_eventfilter_callback = nullptr;
    QsciLexerSQL_TimerEvent_Callback qscilexersql_timerevent_callback = nullptr;
    QsciLexerSQL_ChildEvent_Callback qscilexersql_childevent_callback = nullptr;
    QsciLexerSQL_CustomEvent_Callback qscilexersql_customevent_callback = nullptr;
    QsciLexerSQL_ConnectNotify_Callback qscilexersql_connectnotify_callback = nullptr;
    QsciLexerSQL_DisconnectNotify_Callback qscilexersql_disconnectnotify_callback = nullptr;
    QsciLexerSQL_TextAsBytes_Callback qscilexersql_textasbytes_callback = nullptr;
    QsciLexerSQL_BytesAsText_Callback qscilexersql_bytesastext_callback = nullptr;
    QsciLexerSQL_Sender_Callback qscilexersql_sender_callback = nullptr;
    QsciLexerSQL_SenderSignalIndex_Callback qscilexersql_sendersignalindex_callback = nullptr;
    QsciLexerSQL_Receivers_Callback qscilexersql_receivers_callback = nullptr;
    QsciLexerSQL_IsSignalConnected_Callback qscilexersql_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexersql_metacall_isbase = false;
    mutable bool qscilexersql_setbackslashescapes_isbase = false;
    mutable bool qscilexersql_setfoldcomments_isbase = false;
    mutable bool qscilexersql_setfoldcompact_isbase = false;
    mutable bool qscilexersql_language_isbase = false;
    mutable bool qscilexersql_lexer_isbase = false;
    mutable bool qscilexersql_lexerid_isbase = false;
    mutable bool qscilexersql_autocompletionfillups_isbase = false;
    mutable bool qscilexersql_autocompletionwordseparators_isbase = false;
    mutable bool qscilexersql_blockend_isbase = false;
    mutable bool qscilexersql_blocklookback_isbase = false;
    mutable bool qscilexersql_blockstart_isbase = false;
    mutable bool qscilexersql_blockstartkeyword_isbase = false;
    mutable bool qscilexersql_bracestyle_isbase = false;
    mutable bool qscilexersql_casesensitive_isbase = false;
    mutable bool qscilexersql_color_isbase = false;
    mutable bool qscilexersql_eolfill_isbase = false;
    mutable bool qscilexersql_font_isbase = false;
    mutable bool qscilexersql_indentationguideview_isbase = false;
    mutable bool qscilexersql_keywords_isbase = false;
    mutable bool qscilexersql_defaultstyle_isbase = false;
    mutable bool qscilexersql_description_isbase = false;
    mutable bool qscilexersql_paper_isbase = false;
    mutable bool qscilexersql_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexersql_defaulteolfill_isbase = false;
    mutable bool qscilexersql_defaultfontwithstyle_isbase = false;
    mutable bool qscilexersql_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexersql_seteditor_isbase = false;
    mutable bool qscilexersql_refreshproperties_isbase = false;
    mutable bool qscilexersql_stylebitsneeded_isbase = false;
    mutable bool qscilexersql_wordcharacters_isbase = false;
    mutable bool qscilexersql_setautoindentstyle_isbase = false;
    mutable bool qscilexersql_setcolor_isbase = false;
    mutable bool qscilexersql_seteolfill_isbase = false;
    mutable bool qscilexersql_setfont_isbase = false;
    mutable bool qscilexersql_setpaper_isbase = false;
    mutable bool qscilexersql_readproperties_isbase = false;
    mutable bool qscilexersql_writeproperties_isbase = false;
    mutable bool qscilexersql_event_isbase = false;
    mutable bool qscilexersql_eventfilter_isbase = false;
    mutable bool qscilexersql_timerevent_isbase = false;
    mutable bool qscilexersql_childevent_isbase = false;
    mutable bool qscilexersql_customevent_isbase = false;
    mutable bool qscilexersql_connectnotify_isbase = false;
    mutable bool qscilexersql_disconnectnotify_isbase = false;
    mutable bool qscilexersql_textasbytes_isbase = false;
    mutable bool qscilexersql_bytesastext_isbase = false;
    mutable bool qscilexersql_sender_isbase = false;
    mutable bool qscilexersql_sendersignalindex_isbase = false;
    mutable bool qscilexersql_receivers_isbase = false;
    mutable bool qscilexersql_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerSQL() : QsciLexerSQL() {};
    VirtualQsciLexerSQL(QObject* parent) : QsciLexerSQL(parent) {};

    ~VirtualQsciLexerSQL() {
        qscilexersql_metacall_callback = nullptr;
        qscilexersql_setbackslashescapes_callback = nullptr;
        qscilexersql_setfoldcomments_callback = nullptr;
        qscilexersql_setfoldcompact_callback = nullptr;
        qscilexersql_language_callback = nullptr;
        qscilexersql_lexer_callback = nullptr;
        qscilexersql_lexerid_callback = nullptr;
        qscilexersql_autocompletionfillups_callback = nullptr;
        qscilexersql_autocompletionwordseparators_callback = nullptr;
        qscilexersql_blockend_callback = nullptr;
        qscilexersql_blocklookback_callback = nullptr;
        qscilexersql_blockstart_callback = nullptr;
        qscilexersql_blockstartkeyword_callback = nullptr;
        qscilexersql_bracestyle_callback = nullptr;
        qscilexersql_casesensitive_callback = nullptr;
        qscilexersql_color_callback = nullptr;
        qscilexersql_eolfill_callback = nullptr;
        qscilexersql_font_callback = nullptr;
        qscilexersql_indentationguideview_callback = nullptr;
        qscilexersql_keywords_callback = nullptr;
        qscilexersql_defaultstyle_callback = nullptr;
        qscilexersql_description_callback = nullptr;
        qscilexersql_paper_callback = nullptr;
        qscilexersql_defaultcolorwithstyle_callback = nullptr;
        qscilexersql_defaulteolfill_callback = nullptr;
        qscilexersql_defaultfontwithstyle_callback = nullptr;
        qscilexersql_defaultpaperwithstyle_callback = nullptr;
        qscilexersql_seteditor_callback = nullptr;
        qscilexersql_refreshproperties_callback = nullptr;
        qscilexersql_stylebitsneeded_callback = nullptr;
        qscilexersql_wordcharacters_callback = nullptr;
        qscilexersql_setautoindentstyle_callback = nullptr;
        qscilexersql_setcolor_callback = nullptr;
        qscilexersql_seteolfill_callback = nullptr;
        qscilexersql_setfont_callback = nullptr;
        qscilexersql_setpaper_callback = nullptr;
        qscilexersql_readproperties_callback = nullptr;
        qscilexersql_writeproperties_callback = nullptr;
        qscilexersql_event_callback = nullptr;
        qscilexersql_eventfilter_callback = nullptr;
        qscilexersql_timerevent_callback = nullptr;
        qscilexersql_childevent_callback = nullptr;
        qscilexersql_customevent_callback = nullptr;
        qscilexersql_connectnotify_callback = nullptr;
        qscilexersql_disconnectnotify_callback = nullptr;
        qscilexersql_textasbytes_callback = nullptr;
        qscilexersql_bytesastext_callback = nullptr;
        qscilexersql_sender_callback = nullptr;
        qscilexersql_sendersignalindex_callback = nullptr;
        qscilexersql_receivers_callback = nullptr;
        qscilexersql_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerSQL_Metacall_Callback(QsciLexerSQL_Metacall_Callback cb) { qscilexersql_metacall_callback = cb; }
    inline void setQsciLexerSQL_SetBackslashEscapes_Callback(QsciLexerSQL_SetBackslashEscapes_Callback cb) { qscilexersql_setbackslashescapes_callback = cb; }
    inline void setQsciLexerSQL_SetFoldComments_Callback(QsciLexerSQL_SetFoldComments_Callback cb) { qscilexersql_setfoldcomments_callback = cb; }
    inline void setQsciLexerSQL_SetFoldCompact_Callback(QsciLexerSQL_SetFoldCompact_Callback cb) { qscilexersql_setfoldcompact_callback = cb; }
    inline void setQsciLexerSQL_Language_Callback(QsciLexerSQL_Language_Callback cb) { qscilexersql_language_callback = cb; }
    inline void setQsciLexerSQL_Lexer_Callback(QsciLexerSQL_Lexer_Callback cb) { qscilexersql_lexer_callback = cb; }
    inline void setQsciLexerSQL_LexerId_Callback(QsciLexerSQL_LexerId_Callback cb) { qscilexersql_lexerid_callback = cb; }
    inline void setQsciLexerSQL_AutoCompletionFillups_Callback(QsciLexerSQL_AutoCompletionFillups_Callback cb) { qscilexersql_autocompletionfillups_callback = cb; }
    inline void setQsciLexerSQL_AutoCompletionWordSeparators_Callback(QsciLexerSQL_AutoCompletionWordSeparators_Callback cb) { qscilexersql_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerSQL_BlockEnd_Callback(QsciLexerSQL_BlockEnd_Callback cb) { qscilexersql_blockend_callback = cb; }
    inline void setQsciLexerSQL_BlockLookback_Callback(QsciLexerSQL_BlockLookback_Callback cb) { qscilexersql_blocklookback_callback = cb; }
    inline void setQsciLexerSQL_BlockStart_Callback(QsciLexerSQL_BlockStart_Callback cb) { qscilexersql_blockstart_callback = cb; }
    inline void setQsciLexerSQL_BlockStartKeyword_Callback(QsciLexerSQL_BlockStartKeyword_Callback cb) { qscilexersql_blockstartkeyword_callback = cb; }
    inline void setQsciLexerSQL_BraceStyle_Callback(QsciLexerSQL_BraceStyle_Callback cb) { qscilexersql_bracestyle_callback = cb; }
    inline void setQsciLexerSQL_CaseSensitive_Callback(QsciLexerSQL_CaseSensitive_Callback cb) { qscilexersql_casesensitive_callback = cb; }
    inline void setQsciLexerSQL_Color_Callback(QsciLexerSQL_Color_Callback cb) { qscilexersql_color_callback = cb; }
    inline void setQsciLexerSQL_EolFill_Callback(QsciLexerSQL_EolFill_Callback cb) { qscilexersql_eolfill_callback = cb; }
    inline void setQsciLexerSQL_Font_Callback(QsciLexerSQL_Font_Callback cb) { qscilexersql_font_callback = cb; }
    inline void setQsciLexerSQL_IndentationGuideView_Callback(QsciLexerSQL_IndentationGuideView_Callback cb) { qscilexersql_indentationguideview_callback = cb; }
    inline void setQsciLexerSQL_Keywords_Callback(QsciLexerSQL_Keywords_Callback cb) { qscilexersql_keywords_callback = cb; }
    inline void setQsciLexerSQL_DefaultStyle_Callback(QsciLexerSQL_DefaultStyle_Callback cb) { qscilexersql_defaultstyle_callback = cb; }
    inline void setQsciLexerSQL_Description_Callback(QsciLexerSQL_Description_Callback cb) { qscilexersql_description_callback = cb; }
    inline void setQsciLexerSQL_Paper_Callback(QsciLexerSQL_Paper_Callback cb) { qscilexersql_paper_callback = cb; }
    inline void setQsciLexerSQL_DefaultColorWithStyle_Callback(QsciLexerSQL_DefaultColorWithStyle_Callback cb) { qscilexersql_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerSQL_DefaultEolFill_Callback(QsciLexerSQL_DefaultEolFill_Callback cb) { qscilexersql_defaulteolfill_callback = cb; }
    inline void setQsciLexerSQL_DefaultFontWithStyle_Callback(QsciLexerSQL_DefaultFontWithStyle_Callback cb) { qscilexersql_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerSQL_DefaultPaperWithStyle_Callback(QsciLexerSQL_DefaultPaperWithStyle_Callback cb) { qscilexersql_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerSQL_SetEditor_Callback(QsciLexerSQL_SetEditor_Callback cb) { qscilexersql_seteditor_callback = cb; }
    inline void setQsciLexerSQL_RefreshProperties_Callback(QsciLexerSQL_RefreshProperties_Callback cb) { qscilexersql_refreshproperties_callback = cb; }
    inline void setQsciLexerSQL_StyleBitsNeeded_Callback(QsciLexerSQL_StyleBitsNeeded_Callback cb) { qscilexersql_stylebitsneeded_callback = cb; }
    inline void setQsciLexerSQL_WordCharacters_Callback(QsciLexerSQL_WordCharacters_Callback cb) { qscilexersql_wordcharacters_callback = cb; }
    inline void setQsciLexerSQL_SetAutoIndentStyle_Callback(QsciLexerSQL_SetAutoIndentStyle_Callback cb) { qscilexersql_setautoindentstyle_callback = cb; }
    inline void setQsciLexerSQL_SetColor_Callback(QsciLexerSQL_SetColor_Callback cb) { qscilexersql_setcolor_callback = cb; }
    inline void setQsciLexerSQL_SetEolFill_Callback(QsciLexerSQL_SetEolFill_Callback cb) { qscilexersql_seteolfill_callback = cb; }
    inline void setQsciLexerSQL_SetFont_Callback(QsciLexerSQL_SetFont_Callback cb) { qscilexersql_setfont_callback = cb; }
    inline void setQsciLexerSQL_SetPaper_Callback(QsciLexerSQL_SetPaper_Callback cb) { qscilexersql_setpaper_callback = cb; }
    inline void setQsciLexerSQL_ReadProperties_Callback(QsciLexerSQL_ReadProperties_Callback cb) { qscilexersql_readproperties_callback = cb; }
    inline void setQsciLexerSQL_WriteProperties_Callback(QsciLexerSQL_WriteProperties_Callback cb) { qscilexersql_writeproperties_callback = cb; }
    inline void setQsciLexerSQL_Event_Callback(QsciLexerSQL_Event_Callback cb) { qscilexersql_event_callback = cb; }
    inline void setQsciLexerSQL_EventFilter_Callback(QsciLexerSQL_EventFilter_Callback cb) { qscilexersql_eventfilter_callback = cb; }
    inline void setQsciLexerSQL_TimerEvent_Callback(QsciLexerSQL_TimerEvent_Callback cb) { qscilexersql_timerevent_callback = cb; }
    inline void setQsciLexerSQL_ChildEvent_Callback(QsciLexerSQL_ChildEvent_Callback cb) { qscilexersql_childevent_callback = cb; }
    inline void setQsciLexerSQL_CustomEvent_Callback(QsciLexerSQL_CustomEvent_Callback cb) { qscilexersql_customevent_callback = cb; }
    inline void setQsciLexerSQL_ConnectNotify_Callback(QsciLexerSQL_ConnectNotify_Callback cb) { qscilexersql_connectnotify_callback = cb; }
    inline void setQsciLexerSQL_DisconnectNotify_Callback(QsciLexerSQL_DisconnectNotify_Callback cb) { qscilexersql_disconnectnotify_callback = cb; }
    inline void setQsciLexerSQL_TextAsBytes_Callback(QsciLexerSQL_TextAsBytes_Callback cb) { qscilexersql_textasbytes_callback = cb; }
    inline void setQsciLexerSQL_BytesAsText_Callback(QsciLexerSQL_BytesAsText_Callback cb) { qscilexersql_bytesastext_callback = cb; }
    inline void setQsciLexerSQL_Sender_Callback(QsciLexerSQL_Sender_Callback cb) { qscilexersql_sender_callback = cb; }
    inline void setQsciLexerSQL_SenderSignalIndex_Callback(QsciLexerSQL_SenderSignalIndex_Callback cb) { qscilexersql_sendersignalindex_callback = cb; }
    inline void setQsciLexerSQL_Receivers_Callback(QsciLexerSQL_Receivers_Callback cb) { qscilexersql_receivers_callback = cb; }
    inline void setQsciLexerSQL_IsSignalConnected_Callback(QsciLexerSQL_IsSignalConnected_Callback cb) { qscilexersql_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerSQL_Metacall_IsBase(bool value) const { qscilexersql_metacall_isbase = value; }
    inline void setQsciLexerSQL_SetBackslashEscapes_IsBase(bool value) const { qscilexersql_setbackslashescapes_isbase = value; }
    inline void setQsciLexerSQL_SetFoldComments_IsBase(bool value) const { qscilexersql_setfoldcomments_isbase = value; }
    inline void setQsciLexerSQL_SetFoldCompact_IsBase(bool value) const { qscilexersql_setfoldcompact_isbase = value; }
    inline void setQsciLexerSQL_Language_IsBase(bool value) const { qscilexersql_language_isbase = value; }
    inline void setQsciLexerSQL_Lexer_IsBase(bool value) const { qscilexersql_lexer_isbase = value; }
    inline void setQsciLexerSQL_LexerId_IsBase(bool value) const { qscilexersql_lexerid_isbase = value; }
    inline void setQsciLexerSQL_AutoCompletionFillups_IsBase(bool value) const { qscilexersql_autocompletionfillups_isbase = value; }
    inline void setQsciLexerSQL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexersql_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerSQL_BlockEnd_IsBase(bool value) const { qscilexersql_blockend_isbase = value; }
    inline void setQsciLexerSQL_BlockLookback_IsBase(bool value) const { qscilexersql_blocklookback_isbase = value; }
    inline void setQsciLexerSQL_BlockStart_IsBase(bool value) const { qscilexersql_blockstart_isbase = value; }
    inline void setQsciLexerSQL_BlockStartKeyword_IsBase(bool value) const { qscilexersql_blockstartkeyword_isbase = value; }
    inline void setQsciLexerSQL_BraceStyle_IsBase(bool value) const { qscilexersql_bracestyle_isbase = value; }
    inline void setQsciLexerSQL_CaseSensitive_IsBase(bool value) const { qscilexersql_casesensitive_isbase = value; }
    inline void setQsciLexerSQL_Color_IsBase(bool value) const { qscilexersql_color_isbase = value; }
    inline void setQsciLexerSQL_EolFill_IsBase(bool value) const { qscilexersql_eolfill_isbase = value; }
    inline void setQsciLexerSQL_Font_IsBase(bool value) const { qscilexersql_font_isbase = value; }
    inline void setQsciLexerSQL_IndentationGuideView_IsBase(bool value) const { qscilexersql_indentationguideview_isbase = value; }
    inline void setQsciLexerSQL_Keywords_IsBase(bool value) const { qscilexersql_keywords_isbase = value; }
    inline void setQsciLexerSQL_DefaultStyle_IsBase(bool value) const { qscilexersql_defaultstyle_isbase = value; }
    inline void setQsciLexerSQL_Description_IsBase(bool value) const { qscilexersql_description_isbase = value; }
    inline void setQsciLexerSQL_Paper_IsBase(bool value) const { qscilexersql_paper_isbase = value; }
    inline void setQsciLexerSQL_DefaultColorWithStyle_IsBase(bool value) const { qscilexersql_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerSQL_DefaultEolFill_IsBase(bool value) const { qscilexersql_defaulteolfill_isbase = value; }
    inline void setQsciLexerSQL_DefaultFontWithStyle_IsBase(bool value) const { qscilexersql_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerSQL_DefaultPaperWithStyle_IsBase(bool value) const { qscilexersql_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerSQL_SetEditor_IsBase(bool value) const { qscilexersql_seteditor_isbase = value; }
    inline void setQsciLexerSQL_RefreshProperties_IsBase(bool value) const { qscilexersql_refreshproperties_isbase = value; }
    inline void setQsciLexerSQL_StyleBitsNeeded_IsBase(bool value) const { qscilexersql_stylebitsneeded_isbase = value; }
    inline void setQsciLexerSQL_WordCharacters_IsBase(bool value) const { qscilexersql_wordcharacters_isbase = value; }
    inline void setQsciLexerSQL_SetAutoIndentStyle_IsBase(bool value) const { qscilexersql_setautoindentstyle_isbase = value; }
    inline void setQsciLexerSQL_SetColor_IsBase(bool value) const { qscilexersql_setcolor_isbase = value; }
    inline void setQsciLexerSQL_SetEolFill_IsBase(bool value) const { qscilexersql_seteolfill_isbase = value; }
    inline void setQsciLexerSQL_SetFont_IsBase(bool value) const { qscilexersql_setfont_isbase = value; }
    inline void setQsciLexerSQL_SetPaper_IsBase(bool value) const { qscilexersql_setpaper_isbase = value; }
    inline void setQsciLexerSQL_ReadProperties_IsBase(bool value) const { qscilexersql_readproperties_isbase = value; }
    inline void setQsciLexerSQL_WriteProperties_IsBase(bool value) const { qscilexersql_writeproperties_isbase = value; }
    inline void setQsciLexerSQL_Event_IsBase(bool value) const { qscilexersql_event_isbase = value; }
    inline void setQsciLexerSQL_EventFilter_IsBase(bool value) const { qscilexersql_eventfilter_isbase = value; }
    inline void setQsciLexerSQL_TimerEvent_IsBase(bool value) const { qscilexersql_timerevent_isbase = value; }
    inline void setQsciLexerSQL_ChildEvent_IsBase(bool value) const { qscilexersql_childevent_isbase = value; }
    inline void setQsciLexerSQL_CustomEvent_IsBase(bool value) const { qscilexersql_customevent_isbase = value; }
    inline void setQsciLexerSQL_ConnectNotify_IsBase(bool value) const { qscilexersql_connectnotify_isbase = value; }
    inline void setQsciLexerSQL_DisconnectNotify_IsBase(bool value) const { qscilexersql_disconnectnotify_isbase = value; }
    inline void setQsciLexerSQL_TextAsBytes_IsBase(bool value) const { qscilexersql_textasbytes_isbase = value; }
    inline void setQsciLexerSQL_BytesAsText_IsBase(bool value) const { qscilexersql_bytesastext_isbase = value; }
    inline void setQsciLexerSQL_Sender_IsBase(bool value) const { qscilexersql_sender_isbase = value; }
    inline void setQsciLexerSQL_SenderSignalIndex_IsBase(bool value) const { qscilexersql_sendersignalindex_isbase = value; }
    inline void setQsciLexerSQL_Receivers_IsBase(bool value) const { qscilexersql_receivers_isbase = value; }
    inline void setQsciLexerSQL_IsSignalConnected_IsBase(bool value) const { qscilexersql_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexersql_metacall_isbase) {
            qscilexersql_metacall_isbase = false;
            return QsciLexerSQL::qt_metacall(param1, param2, param3);
        } else if (qscilexersql_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexersql_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBackslashEscapes(bool enable) override {
        if (qscilexersql_setbackslashescapes_isbase) {
            qscilexersql_setbackslashescapes_isbase = false;
            QsciLexerSQL::setBackslashEscapes(enable);
        } else if (qscilexersql_setbackslashescapes_callback != nullptr) {
            bool cbval1 = enable;

            qscilexersql_setbackslashescapes_callback(this, cbval1);
        } else {
            QsciLexerSQL::setBackslashEscapes(enable);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexersql_setfoldcomments_isbase) {
            qscilexersql_setfoldcomments_isbase = false;
            QsciLexerSQL::setFoldComments(fold);
        } else if (qscilexersql_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexersql_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerSQL::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexersql_setfoldcompact_isbase) {
            qscilexersql_setfoldcompact_isbase = false;
            QsciLexerSQL::setFoldCompact(fold);
        } else if (qscilexersql_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexersql_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerSQL::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexersql_language_callback != nullptr) {
            const char* callback_ret = qscilexersql_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexersql_lexer_isbase) {
            qscilexersql_lexer_isbase = false;
            return QsciLexerSQL::lexer();
        } else if (qscilexersql_lexer_callback != nullptr) {
            const char* callback_ret = qscilexersql_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerSQL::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexersql_lexerid_isbase) {
            qscilexersql_lexerid_isbase = false;
            return QsciLexerSQL::lexerId();
        } else if (qscilexersql_lexerid_callback != nullptr) {
            int callback_ret = qscilexersql_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexersql_autocompletionfillups_isbase) {
            qscilexersql_autocompletionfillups_isbase = false;
            return QsciLexerSQL::autoCompletionFillups();
        } else if (qscilexersql_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexersql_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerSQL::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexersql_autocompletionwordseparators_isbase) {
            qscilexersql_autocompletionwordseparators_isbase = false;
            return QsciLexerSQL::autoCompletionWordSeparators();
        } else if (qscilexersql_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexersql_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerSQL::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexersql_blockend_isbase) {
            qscilexersql_blockend_isbase = false;
            return QsciLexerSQL::blockEnd(style);
        } else if (qscilexersql_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersql_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexersql_blocklookback_isbase) {
            qscilexersql_blocklookback_isbase = false;
            return QsciLexerSQL::blockLookback();
        } else if (qscilexersql_blocklookback_callback != nullptr) {
            int callback_ret = qscilexersql_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexersql_blockstart_isbase) {
            qscilexersql_blockstart_isbase = false;
            return QsciLexerSQL::blockStart(style);
        } else if (qscilexersql_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersql_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexersql_blockstartkeyword_isbase) {
            qscilexersql_blockstartkeyword_isbase = false;
            return QsciLexerSQL::blockStartKeyword(style);
        } else if (qscilexersql_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexersql_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexersql_bracestyle_isbase) {
            qscilexersql_bracestyle_isbase = false;
            return QsciLexerSQL::braceStyle();
        } else if (qscilexersql_bracestyle_callback != nullptr) {
            int callback_ret = qscilexersql_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexersql_casesensitive_isbase) {
            qscilexersql_casesensitive_isbase = false;
            return QsciLexerSQL::caseSensitive();
        } else if (qscilexersql_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexersql_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerSQL::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexersql_color_isbase) {
            qscilexersql_color_isbase = false;
            return QsciLexerSQL::color(style);
        } else if (qscilexersql_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersql_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexersql_eolfill_isbase) {
            qscilexersql_eolfill_isbase = false;
            return QsciLexerSQL::eolFill(style);
        } else if (qscilexersql_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexersql_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexersql_font_isbase) {
            qscilexersql_font_isbase = false;
            return QsciLexerSQL::font(style);
        } else if (qscilexersql_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexersql_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexersql_indentationguideview_isbase) {
            qscilexersql_indentationguideview_isbase = false;
            return QsciLexerSQL::indentationGuideView();
        } else if (qscilexersql_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexersql_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexersql_keywords_isbase) {
            qscilexersql_keywords_isbase = false;
            return QsciLexerSQL::keywords(set);
        } else if (qscilexersql_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexersql_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexersql_defaultstyle_isbase) {
            qscilexersql_defaultstyle_isbase = false;
            return QsciLexerSQL::defaultStyle();
        } else if (qscilexersql_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexersql_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexersql_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexersql_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexersql_paper_isbase) {
            qscilexersql_paper_isbase = false;
            return QsciLexerSQL::paper(style);
        } else if (qscilexersql_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersql_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexersql_defaultcolorwithstyle_isbase) {
            qscilexersql_defaultcolorwithstyle_isbase = false;
            return QsciLexerSQL::defaultColor(style);
        } else if (qscilexersql_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersql_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexersql_defaulteolfill_isbase) {
            qscilexersql_defaulteolfill_isbase = false;
            return QsciLexerSQL::defaultEolFill(style);
        } else if (qscilexersql_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexersql_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexersql_defaultfontwithstyle_isbase) {
            qscilexersql_defaultfontwithstyle_isbase = false;
            return QsciLexerSQL::defaultFont(style);
        } else if (qscilexersql_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexersql_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexersql_defaultpaperwithstyle_isbase) {
            qscilexersql_defaultpaperwithstyle_isbase = false;
            return QsciLexerSQL::defaultPaper(style);
        } else if (qscilexersql_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexersql_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerSQL::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexersql_seteditor_isbase) {
            qscilexersql_seteditor_isbase = false;
            QsciLexerSQL::setEditor(editor);
        } else if (qscilexersql_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexersql_seteditor_callback(this, cbval1);
        } else {
            QsciLexerSQL::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexersql_refreshproperties_isbase) {
            qscilexersql_refreshproperties_isbase = false;
            QsciLexerSQL::refreshProperties();
        } else if (qscilexersql_refreshproperties_callback != nullptr) {
            qscilexersql_refreshproperties_callback();
        } else {
            QsciLexerSQL::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexersql_stylebitsneeded_isbase) {
            qscilexersql_stylebitsneeded_isbase = false;
            return QsciLexerSQL::styleBitsNeeded();
        } else if (qscilexersql_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexersql_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexersql_wordcharacters_isbase) {
            qscilexersql_wordcharacters_isbase = false;
            return QsciLexerSQL::wordCharacters();
        } else if (qscilexersql_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexersql_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerSQL::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexersql_setautoindentstyle_isbase) {
            qscilexersql_setautoindentstyle_isbase = false;
            QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexersql_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexersql_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexersql_setcolor_isbase) {
            qscilexersql_setcolor_isbase = false;
            QsciLexerSQL::setColor(c, style);
        } else if (qscilexersql_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexersql_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSQL::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexersql_seteolfill_isbase) {
            qscilexersql_seteolfill_isbase = false;
            QsciLexerSQL::setEolFill(eoffill, style);
        } else if (qscilexersql_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexersql_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSQL::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexersql_setfont_isbase) {
            qscilexersql_setfont_isbase = false;
            QsciLexerSQL::setFont(f, style);
        } else if (qscilexersql_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexersql_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSQL::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexersql_setpaper_isbase) {
            qscilexersql_setpaper_isbase = false;
            QsciLexerSQL::setPaper(c, style);
        } else if (qscilexersql_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexersql_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerSQL::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexersql_readproperties_isbase) {
            qscilexersql_readproperties_isbase = false;
            return QsciLexerSQL::readProperties(qs, prefix);
        } else if (qscilexersql_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexersql_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSQL::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexersql_writeproperties_isbase) {
            qscilexersql_writeproperties_isbase = false;
            return QsciLexerSQL::writeProperties(qs, prefix);
        } else if (qscilexersql_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexersql_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSQL::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexersql_event_isbase) {
            qscilexersql_event_isbase = false;
            return QsciLexerSQL::event(event);
        } else if (qscilexersql_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexersql_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexersql_eventfilter_isbase) {
            qscilexersql_eventfilter_isbase = false;
            return QsciLexerSQL::eventFilter(watched, event);
        } else if (qscilexersql_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexersql_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerSQL::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexersql_timerevent_isbase) {
            qscilexersql_timerevent_isbase = false;
            QsciLexerSQL::timerEvent(event);
        } else if (qscilexersql_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexersql_timerevent_callback(this, cbval1);
        } else {
            QsciLexerSQL::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexersql_childevent_isbase) {
            qscilexersql_childevent_isbase = false;
            QsciLexerSQL::childEvent(event);
        } else if (qscilexersql_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexersql_childevent_callback(this, cbval1);
        } else {
            QsciLexerSQL::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexersql_customevent_isbase) {
            qscilexersql_customevent_isbase = false;
            QsciLexerSQL::customEvent(event);
        } else if (qscilexersql_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexersql_customevent_callback(this, cbval1);
        } else {
            QsciLexerSQL::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_connectnotify_isbase) {
            qscilexersql_connectnotify_isbase = false;
            QsciLexerSQL::connectNotify(signal);
        } else if (qscilexersql_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexersql_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerSQL::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_disconnectnotify_isbase) {
            qscilexersql_disconnectnotify_isbase = false;
            QsciLexerSQL::disconnectNotify(signal);
        } else if (qscilexersql_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexersql_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerSQL::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexersql_textasbytes_isbase) {
            qscilexersql_textasbytes_isbase = false;
            return QsciLexerSQL::textAsBytes(text);
        } else if (qscilexersql_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexersql_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerSQL::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexersql_bytesastext_isbase) {
            qscilexersql_bytesastext_isbase = false;
            return QsciLexerSQL::bytesAsText(bytes, size);
        } else if (qscilexersql_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexersql_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerSQL::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexersql_sender_isbase) {
            qscilexersql_sender_isbase = false;
            return QsciLexerSQL::sender();
        } else if (qscilexersql_sender_callback != nullptr) {
            QObject* callback_ret = qscilexersql_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerSQL::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexersql_sendersignalindex_isbase) {
            qscilexersql_sendersignalindex_isbase = false;
            return QsciLexerSQL::senderSignalIndex();
        } else if (qscilexersql_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexersql_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexersql_receivers_isbase) {
            qscilexersql_receivers_isbase = false;
            return QsciLexerSQL::receivers(signal);
        } else if (qscilexersql_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexersql_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerSQL::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexersql_issignalconnected_isbase) {
            qscilexersql_issignalconnected_isbase = false;
            return QsciLexerSQL::isSignalConnected(signal);
        } else if (qscilexersql_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexersql_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerSQL::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_QBaseReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_QBaseWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event);
    friend void QsciLexerSQL_QBaseTimerEvent(QsciLexerSQL* self, QTimerEvent* event);
    friend void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event);
    friend void QsciLexerSQL_QBaseChildEvent(QsciLexerSQL* self, QChildEvent* event);
    friend void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event);
    friend void QsciLexerSQL_QBaseCustomEvent(QsciLexerSQL* self, QEvent* event);
    friend void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_QBaseConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_QBaseDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text);
    friend libqt_string QsciLexerSQL_QBaseTextAsBytes(const QsciLexerSQL* self, const libqt_string text);
    friend libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
    friend libqt_string QsciLexerSQL_QBaseBytesAsText(const QsciLexerSQL* self, const char* bytes, int size);
    friend QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self);
    friend QObject* QsciLexerSQL_QBaseSender(const QsciLexerSQL* self);
    friend int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self);
    friend int QsciLexerSQL_QBaseSenderSignalIndex(const QsciLexerSQL* self);
    friend int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal);
    friend int QsciLexerSQL_QBaseReceivers(const QsciLexerSQL* self, const char* signal);
    friend bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
    friend bool QsciLexerSQL_QBaseIsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal);
};

#endif
