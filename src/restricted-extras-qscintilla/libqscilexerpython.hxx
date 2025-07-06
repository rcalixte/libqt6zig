#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPYTHON_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPYTHON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPython so that we can call protected methods
class VirtualQsciLexerPython final : public QsciLexerPython {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerPython = true;

    // Virtual class public types (including callbacks)
    using QsciLexerPython_Metacall_Callback = int (*)(QsciLexerPython*, int, int, void**);
    using QsciLexerPython_IndentationGuideView_Callback = int (*)();
    using QsciLexerPython_SetFoldComments_Callback = void (*)(QsciLexerPython*, bool);
    using QsciLexerPython_SetFoldQuotes_Callback = void (*)(QsciLexerPython*, bool);
    using QsciLexerPython_SetIndentationWarning_Callback = void (*)(QsciLexerPython*, int);
    using QsciLexerPython_Language_Callback = const char* (*)();
    using QsciLexerPython_Lexer_Callback = const char* (*)();
    using QsciLexerPython_LexerId_Callback = int (*)();
    using QsciLexerPython_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPython_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerPython_BlockEnd_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BlockLookback_Callback = int (*)();
    using QsciLexerPython_BlockStart_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BraceStyle_Callback = int (*)();
    using QsciLexerPython_CaseSensitive_Callback = bool (*)();
    using QsciLexerPython_Color_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_EolFill_Callback = bool (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Font_Callback = QFont* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Keywords_Callback = const char* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultStyle_Callback = int (*)();
    using QsciLexerPython_Description_Callback = libqt_string (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Paper_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultEolFill_Callback = bool (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_SetEditor_Callback = void (*)(QsciLexerPython*, QsciScintilla*);
    using QsciLexerPython_RefreshProperties_Callback = void (*)();
    using QsciLexerPython_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPython_WordCharacters_Callback = const char* (*)();
    using QsciLexerPython_SetAutoIndentStyle_Callback = void (*)(QsciLexerPython*, int);
    using QsciLexerPython_SetColor_Callback = void (*)(QsciLexerPython*, QColor*, int);
    using QsciLexerPython_SetEolFill_Callback = void (*)(QsciLexerPython*, bool, int);
    using QsciLexerPython_SetFont_Callback = void (*)(QsciLexerPython*, QFont*, int);
    using QsciLexerPython_SetPaper_Callback = void (*)(QsciLexerPython*, QColor*, int);
    using QsciLexerPython_ReadProperties_Callback = bool (*)(QsciLexerPython*, QSettings*, libqt_string);
    using QsciLexerPython_WriteProperties_Callback = bool (*)(const QsciLexerPython*, QSettings*, libqt_string);
    using QsciLexerPython_Event_Callback = bool (*)(QsciLexerPython*, QEvent*);
    using QsciLexerPython_EventFilter_Callback = bool (*)(QsciLexerPython*, QObject*, QEvent*);
    using QsciLexerPython_TimerEvent_Callback = void (*)(QsciLexerPython*, QTimerEvent*);
    using QsciLexerPython_ChildEvent_Callback = void (*)(QsciLexerPython*, QChildEvent*);
    using QsciLexerPython_CustomEvent_Callback = void (*)(QsciLexerPython*, QEvent*);
    using QsciLexerPython_ConnectNotify_Callback = void (*)(QsciLexerPython*, QMetaMethod*);
    using QsciLexerPython_DisconnectNotify_Callback = void (*)(QsciLexerPython*, QMetaMethod*);
    using QsciLexerPython_TextAsBytes_Callback = libqt_string (*)(const QsciLexerPython*, libqt_string);
    using QsciLexerPython_BytesAsText_Callback = libqt_string (*)(const QsciLexerPython*, const char*, int);
    using QsciLexerPython_Sender_Callback = QObject* (*)();
    using QsciLexerPython_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPython_Receivers_Callback = int (*)(const QsciLexerPython*, const char*);
    using QsciLexerPython_IsSignalConnected_Callback = bool (*)(const QsciLexerPython*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerPython_Metacall_Callback qscilexerpython_metacall_callback = nullptr;
    QsciLexerPython_IndentationGuideView_Callback qscilexerpython_indentationguideview_callback = nullptr;
    QsciLexerPython_SetFoldComments_Callback qscilexerpython_setfoldcomments_callback = nullptr;
    QsciLexerPython_SetFoldQuotes_Callback qscilexerpython_setfoldquotes_callback = nullptr;
    QsciLexerPython_SetIndentationWarning_Callback qscilexerpython_setindentationwarning_callback = nullptr;
    QsciLexerPython_Language_Callback qscilexerpython_language_callback = nullptr;
    QsciLexerPython_Lexer_Callback qscilexerpython_lexer_callback = nullptr;
    QsciLexerPython_LexerId_Callback qscilexerpython_lexerid_callback = nullptr;
    QsciLexerPython_AutoCompletionFillups_Callback qscilexerpython_autocompletionfillups_callback = nullptr;
    QsciLexerPython_AutoCompletionWordSeparators_Callback qscilexerpython_autocompletionwordseparators_callback = nullptr;
    QsciLexerPython_BlockEnd_Callback qscilexerpython_blockend_callback = nullptr;
    QsciLexerPython_BlockLookback_Callback qscilexerpython_blocklookback_callback = nullptr;
    QsciLexerPython_BlockStart_Callback qscilexerpython_blockstart_callback = nullptr;
    QsciLexerPython_BlockStartKeyword_Callback qscilexerpython_blockstartkeyword_callback = nullptr;
    QsciLexerPython_BraceStyle_Callback qscilexerpython_bracestyle_callback = nullptr;
    QsciLexerPython_CaseSensitive_Callback qscilexerpython_casesensitive_callback = nullptr;
    QsciLexerPython_Color_Callback qscilexerpython_color_callback = nullptr;
    QsciLexerPython_EolFill_Callback qscilexerpython_eolfill_callback = nullptr;
    QsciLexerPython_Font_Callback qscilexerpython_font_callback = nullptr;
    QsciLexerPython_Keywords_Callback qscilexerpython_keywords_callback = nullptr;
    QsciLexerPython_DefaultStyle_Callback qscilexerpython_defaultstyle_callback = nullptr;
    QsciLexerPython_Description_Callback qscilexerpython_description_callback = nullptr;
    QsciLexerPython_Paper_Callback qscilexerpython_paper_callback = nullptr;
    QsciLexerPython_DefaultColorWithStyle_Callback qscilexerpython_defaultcolorwithstyle_callback = nullptr;
    QsciLexerPython_DefaultEolFill_Callback qscilexerpython_defaulteolfill_callback = nullptr;
    QsciLexerPython_DefaultFontWithStyle_Callback qscilexerpython_defaultfontwithstyle_callback = nullptr;
    QsciLexerPython_DefaultPaperWithStyle_Callback qscilexerpython_defaultpaperwithstyle_callback = nullptr;
    QsciLexerPython_SetEditor_Callback qscilexerpython_seteditor_callback = nullptr;
    QsciLexerPython_RefreshProperties_Callback qscilexerpython_refreshproperties_callback = nullptr;
    QsciLexerPython_StyleBitsNeeded_Callback qscilexerpython_stylebitsneeded_callback = nullptr;
    QsciLexerPython_WordCharacters_Callback qscilexerpython_wordcharacters_callback = nullptr;
    QsciLexerPython_SetAutoIndentStyle_Callback qscilexerpython_setautoindentstyle_callback = nullptr;
    QsciLexerPython_SetColor_Callback qscilexerpython_setcolor_callback = nullptr;
    QsciLexerPython_SetEolFill_Callback qscilexerpython_seteolfill_callback = nullptr;
    QsciLexerPython_SetFont_Callback qscilexerpython_setfont_callback = nullptr;
    QsciLexerPython_SetPaper_Callback qscilexerpython_setpaper_callback = nullptr;
    QsciLexerPython_ReadProperties_Callback qscilexerpython_readproperties_callback = nullptr;
    QsciLexerPython_WriteProperties_Callback qscilexerpython_writeproperties_callback = nullptr;
    QsciLexerPython_Event_Callback qscilexerpython_event_callback = nullptr;
    QsciLexerPython_EventFilter_Callback qscilexerpython_eventfilter_callback = nullptr;
    QsciLexerPython_TimerEvent_Callback qscilexerpython_timerevent_callback = nullptr;
    QsciLexerPython_ChildEvent_Callback qscilexerpython_childevent_callback = nullptr;
    QsciLexerPython_CustomEvent_Callback qscilexerpython_customevent_callback = nullptr;
    QsciLexerPython_ConnectNotify_Callback qscilexerpython_connectnotify_callback = nullptr;
    QsciLexerPython_DisconnectNotify_Callback qscilexerpython_disconnectnotify_callback = nullptr;
    QsciLexerPython_TextAsBytes_Callback qscilexerpython_textasbytes_callback = nullptr;
    QsciLexerPython_BytesAsText_Callback qscilexerpython_bytesastext_callback = nullptr;
    QsciLexerPython_Sender_Callback qscilexerpython_sender_callback = nullptr;
    QsciLexerPython_SenderSignalIndex_Callback qscilexerpython_sendersignalindex_callback = nullptr;
    QsciLexerPython_Receivers_Callback qscilexerpython_receivers_callback = nullptr;
    QsciLexerPython_IsSignalConnected_Callback qscilexerpython_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpython_metacall_isbase = false;
    mutable bool qscilexerpython_indentationguideview_isbase = false;
    mutable bool qscilexerpython_setfoldcomments_isbase = false;
    mutable bool qscilexerpython_setfoldquotes_isbase = false;
    mutable bool qscilexerpython_setindentationwarning_isbase = false;
    mutable bool qscilexerpython_language_isbase = false;
    mutable bool qscilexerpython_lexer_isbase = false;
    mutable bool qscilexerpython_lexerid_isbase = false;
    mutable bool qscilexerpython_autocompletionfillups_isbase = false;
    mutable bool qscilexerpython_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpython_blockend_isbase = false;
    mutable bool qscilexerpython_blocklookback_isbase = false;
    mutable bool qscilexerpython_blockstart_isbase = false;
    mutable bool qscilexerpython_blockstartkeyword_isbase = false;
    mutable bool qscilexerpython_bracestyle_isbase = false;
    mutable bool qscilexerpython_casesensitive_isbase = false;
    mutable bool qscilexerpython_color_isbase = false;
    mutable bool qscilexerpython_eolfill_isbase = false;
    mutable bool qscilexerpython_font_isbase = false;
    mutable bool qscilexerpython_keywords_isbase = false;
    mutable bool qscilexerpython_defaultstyle_isbase = false;
    mutable bool qscilexerpython_description_isbase = false;
    mutable bool qscilexerpython_paper_isbase = false;
    mutable bool qscilexerpython_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerpython_defaulteolfill_isbase = false;
    mutable bool qscilexerpython_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerpython_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerpython_seteditor_isbase = false;
    mutable bool qscilexerpython_refreshproperties_isbase = false;
    mutable bool qscilexerpython_stylebitsneeded_isbase = false;
    mutable bool qscilexerpython_wordcharacters_isbase = false;
    mutable bool qscilexerpython_setautoindentstyle_isbase = false;
    mutable bool qscilexerpython_setcolor_isbase = false;
    mutable bool qscilexerpython_seteolfill_isbase = false;
    mutable bool qscilexerpython_setfont_isbase = false;
    mutable bool qscilexerpython_setpaper_isbase = false;
    mutable bool qscilexerpython_readproperties_isbase = false;
    mutable bool qscilexerpython_writeproperties_isbase = false;
    mutable bool qscilexerpython_event_isbase = false;
    mutable bool qscilexerpython_eventfilter_isbase = false;
    mutable bool qscilexerpython_timerevent_isbase = false;
    mutable bool qscilexerpython_childevent_isbase = false;
    mutable bool qscilexerpython_customevent_isbase = false;
    mutable bool qscilexerpython_connectnotify_isbase = false;
    mutable bool qscilexerpython_disconnectnotify_isbase = false;
    mutable bool qscilexerpython_textasbytes_isbase = false;
    mutable bool qscilexerpython_bytesastext_isbase = false;
    mutable bool qscilexerpython_sender_isbase = false;
    mutable bool qscilexerpython_sendersignalindex_isbase = false;
    mutable bool qscilexerpython_receivers_isbase = false;
    mutable bool qscilexerpython_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPython() : QsciLexerPython() {};
    VirtualQsciLexerPython(QObject* parent) : QsciLexerPython(parent) {};

    ~VirtualQsciLexerPython() {
        qscilexerpython_metacall_callback = nullptr;
        qscilexerpython_indentationguideview_callback = nullptr;
        qscilexerpython_setfoldcomments_callback = nullptr;
        qscilexerpython_setfoldquotes_callback = nullptr;
        qscilexerpython_setindentationwarning_callback = nullptr;
        qscilexerpython_language_callback = nullptr;
        qscilexerpython_lexer_callback = nullptr;
        qscilexerpython_lexerid_callback = nullptr;
        qscilexerpython_autocompletionfillups_callback = nullptr;
        qscilexerpython_autocompletionwordseparators_callback = nullptr;
        qscilexerpython_blockend_callback = nullptr;
        qscilexerpython_blocklookback_callback = nullptr;
        qscilexerpython_blockstart_callback = nullptr;
        qscilexerpython_blockstartkeyword_callback = nullptr;
        qscilexerpython_bracestyle_callback = nullptr;
        qscilexerpython_casesensitive_callback = nullptr;
        qscilexerpython_color_callback = nullptr;
        qscilexerpython_eolfill_callback = nullptr;
        qscilexerpython_font_callback = nullptr;
        qscilexerpython_keywords_callback = nullptr;
        qscilexerpython_defaultstyle_callback = nullptr;
        qscilexerpython_description_callback = nullptr;
        qscilexerpython_paper_callback = nullptr;
        qscilexerpython_defaultcolorwithstyle_callback = nullptr;
        qscilexerpython_defaulteolfill_callback = nullptr;
        qscilexerpython_defaultfontwithstyle_callback = nullptr;
        qscilexerpython_defaultpaperwithstyle_callback = nullptr;
        qscilexerpython_seteditor_callback = nullptr;
        qscilexerpython_refreshproperties_callback = nullptr;
        qscilexerpython_stylebitsneeded_callback = nullptr;
        qscilexerpython_wordcharacters_callback = nullptr;
        qscilexerpython_setautoindentstyle_callback = nullptr;
        qscilexerpython_setcolor_callback = nullptr;
        qscilexerpython_seteolfill_callback = nullptr;
        qscilexerpython_setfont_callback = nullptr;
        qscilexerpython_setpaper_callback = nullptr;
        qscilexerpython_readproperties_callback = nullptr;
        qscilexerpython_writeproperties_callback = nullptr;
        qscilexerpython_event_callback = nullptr;
        qscilexerpython_eventfilter_callback = nullptr;
        qscilexerpython_timerevent_callback = nullptr;
        qscilexerpython_childevent_callback = nullptr;
        qscilexerpython_customevent_callback = nullptr;
        qscilexerpython_connectnotify_callback = nullptr;
        qscilexerpython_disconnectnotify_callback = nullptr;
        qscilexerpython_textasbytes_callback = nullptr;
        qscilexerpython_bytesastext_callback = nullptr;
        qscilexerpython_sender_callback = nullptr;
        qscilexerpython_sendersignalindex_callback = nullptr;
        qscilexerpython_receivers_callback = nullptr;
        qscilexerpython_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerPython_Metacall_Callback(QsciLexerPython_Metacall_Callback cb) { qscilexerpython_metacall_callback = cb; }
    inline void setQsciLexerPython_IndentationGuideView_Callback(QsciLexerPython_IndentationGuideView_Callback cb) { qscilexerpython_indentationguideview_callback = cb; }
    inline void setQsciLexerPython_SetFoldComments_Callback(QsciLexerPython_SetFoldComments_Callback cb) { qscilexerpython_setfoldcomments_callback = cb; }
    inline void setQsciLexerPython_SetFoldQuotes_Callback(QsciLexerPython_SetFoldQuotes_Callback cb) { qscilexerpython_setfoldquotes_callback = cb; }
    inline void setQsciLexerPython_SetIndentationWarning_Callback(QsciLexerPython_SetIndentationWarning_Callback cb) { qscilexerpython_setindentationwarning_callback = cb; }
    inline void setQsciLexerPython_Language_Callback(QsciLexerPython_Language_Callback cb) { qscilexerpython_language_callback = cb; }
    inline void setQsciLexerPython_Lexer_Callback(QsciLexerPython_Lexer_Callback cb) { qscilexerpython_lexer_callback = cb; }
    inline void setQsciLexerPython_LexerId_Callback(QsciLexerPython_LexerId_Callback cb) { qscilexerpython_lexerid_callback = cb; }
    inline void setQsciLexerPython_AutoCompletionFillups_Callback(QsciLexerPython_AutoCompletionFillups_Callback cb) { qscilexerpython_autocompletionfillups_callback = cb; }
    inline void setQsciLexerPython_AutoCompletionWordSeparators_Callback(QsciLexerPython_AutoCompletionWordSeparators_Callback cb) { qscilexerpython_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerPython_BlockEnd_Callback(QsciLexerPython_BlockEnd_Callback cb) { qscilexerpython_blockend_callback = cb; }
    inline void setQsciLexerPython_BlockLookback_Callback(QsciLexerPython_BlockLookback_Callback cb) { qscilexerpython_blocklookback_callback = cb; }
    inline void setQsciLexerPython_BlockStart_Callback(QsciLexerPython_BlockStart_Callback cb) { qscilexerpython_blockstart_callback = cb; }
    inline void setQsciLexerPython_BlockStartKeyword_Callback(QsciLexerPython_BlockStartKeyword_Callback cb) { qscilexerpython_blockstartkeyword_callback = cb; }
    inline void setQsciLexerPython_BraceStyle_Callback(QsciLexerPython_BraceStyle_Callback cb) { qscilexerpython_bracestyle_callback = cb; }
    inline void setQsciLexerPython_CaseSensitive_Callback(QsciLexerPython_CaseSensitive_Callback cb) { qscilexerpython_casesensitive_callback = cb; }
    inline void setQsciLexerPython_Color_Callback(QsciLexerPython_Color_Callback cb) { qscilexerpython_color_callback = cb; }
    inline void setQsciLexerPython_EolFill_Callback(QsciLexerPython_EolFill_Callback cb) { qscilexerpython_eolfill_callback = cb; }
    inline void setQsciLexerPython_Font_Callback(QsciLexerPython_Font_Callback cb) { qscilexerpython_font_callback = cb; }
    inline void setQsciLexerPython_Keywords_Callback(QsciLexerPython_Keywords_Callback cb) { qscilexerpython_keywords_callback = cb; }
    inline void setQsciLexerPython_DefaultStyle_Callback(QsciLexerPython_DefaultStyle_Callback cb) { qscilexerpython_defaultstyle_callback = cb; }
    inline void setQsciLexerPython_Description_Callback(QsciLexerPython_Description_Callback cb) { qscilexerpython_description_callback = cb; }
    inline void setQsciLexerPython_Paper_Callback(QsciLexerPython_Paper_Callback cb) { qscilexerpython_paper_callback = cb; }
    inline void setQsciLexerPython_DefaultColorWithStyle_Callback(QsciLexerPython_DefaultColorWithStyle_Callback cb) { qscilexerpython_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerPython_DefaultEolFill_Callback(QsciLexerPython_DefaultEolFill_Callback cb) { qscilexerpython_defaulteolfill_callback = cb; }
    inline void setQsciLexerPython_DefaultFontWithStyle_Callback(QsciLexerPython_DefaultFontWithStyle_Callback cb) { qscilexerpython_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerPython_DefaultPaperWithStyle_Callback(QsciLexerPython_DefaultPaperWithStyle_Callback cb) { qscilexerpython_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerPython_SetEditor_Callback(QsciLexerPython_SetEditor_Callback cb) { qscilexerpython_seteditor_callback = cb; }
    inline void setQsciLexerPython_RefreshProperties_Callback(QsciLexerPython_RefreshProperties_Callback cb) { qscilexerpython_refreshproperties_callback = cb; }
    inline void setQsciLexerPython_StyleBitsNeeded_Callback(QsciLexerPython_StyleBitsNeeded_Callback cb) { qscilexerpython_stylebitsneeded_callback = cb; }
    inline void setQsciLexerPython_WordCharacters_Callback(QsciLexerPython_WordCharacters_Callback cb) { qscilexerpython_wordcharacters_callback = cb; }
    inline void setQsciLexerPython_SetAutoIndentStyle_Callback(QsciLexerPython_SetAutoIndentStyle_Callback cb) { qscilexerpython_setautoindentstyle_callback = cb; }
    inline void setQsciLexerPython_SetColor_Callback(QsciLexerPython_SetColor_Callback cb) { qscilexerpython_setcolor_callback = cb; }
    inline void setQsciLexerPython_SetEolFill_Callback(QsciLexerPython_SetEolFill_Callback cb) { qscilexerpython_seteolfill_callback = cb; }
    inline void setQsciLexerPython_SetFont_Callback(QsciLexerPython_SetFont_Callback cb) { qscilexerpython_setfont_callback = cb; }
    inline void setQsciLexerPython_SetPaper_Callback(QsciLexerPython_SetPaper_Callback cb) { qscilexerpython_setpaper_callback = cb; }
    inline void setQsciLexerPython_ReadProperties_Callback(QsciLexerPython_ReadProperties_Callback cb) { qscilexerpython_readproperties_callback = cb; }
    inline void setQsciLexerPython_WriteProperties_Callback(QsciLexerPython_WriteProperties_Callback cb) { qscilexerpython_writeproperties_callback = cb; }
    inline void setQsciLexerPython_Event_Callback(QsciLexerPython_Event_Callback cb) { qscilexerpython_event_callback = cb; }
    inline void setQsciLexerPython_EventFilter_Callback(QsciLexerPython_EventFilter_Callback cb) { qscilexerpython_eventfilter_callback = cb; }
    inline void setQsciLexerPython_TimerEvent_Callback(QsciLexerPython_TimerEvent_Callback cb) { qscilexerpython_timerevent_callback = cb; }
    inline void setQsciLexerPython_ChildEvent_Callback(QsciLexerPython_ChildEvent_Callback cb) { qscilexerpython_childevent_callback = cb; }
    inline void setQsciLexerPython_CustomEvent_Callback(QsciLexerPython_CustomEvent_Callback cb) { qscilexerpython_customevent_callback = cb; }
    inline void setQsciLexerPython_ConnectNotify_Callback(QsciLexerPython_ConnectNotify_Callback cb) { qscilexerpython_connectnotify_callback = cb; }
    inline void setQsciLexerPython_DisconnectNotify_Callback(QsciLexerPython_DisconnectNotify_Callback cb) { qscilexerpython_disconnectnotify_callback = cb; }
    inline void setQsciLexerPython_TextAsBytes_Callback(QsciLexerPython_TextAsBytes_Callback cb) { qscilexerpython_textasbytes_callback = cb; }
    inline void setQsciLexerPython_BytesAsText_Callback(QsciLexerPython_BytesAsText_Callback cb) { qscilexerpython_bytesastext_callback = cb; }
    inline void setQsciLexerPython_Sender_Callback(QsciLexerPython_Sender_Callback cb) { qscilexerpython_sender_callback = cb; }
    inline void setQsciLexerPython_SenderSignalIndex_Callback(QsciLexerPython_SenderSignalIndex_Callback cb) { qscilexerpython_sendersignalindex_callback = cb; }
    inline void setQsciLexerPython_Receivers_Callback(QsciLexerPython_Receivers_Callback cb) { qscilexerpython_receivers_callback = cb; }
    inline void setQsciLexerPython_IsSignalConnected_Callback(QsciLexerPython_IsSignalConnected_Callback cb) { qscilexerpython_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerPython_Metacall_IsBase(bool value) const { qscilexerpython_metacall_isbase = value; }
    inline void setQsciLexerPython_IndentationGuideView_IsBase(bool value) const { qscilexerpython_indentationguideview_isbase = value; }
    inline void setQsciLexerPython_SetFoldComments_IsBase(bool value) const { qscilexerpython_setfoldcomments_isbase = value; }
    inline void setQsciLexerPython_SetFoldQuotes_IsBase(bool value) const { qscilexerpython_setfoldquotes_isbase = value; }
    inline void setQsciLexerPython_SetIndentationWarning_IsBase(bool value) const { qscilexerpython_setindentationwarning_isbase = value; }
    inline void setQsciLexerPython_Language_IsBase(bool value) const { qscilexerpython_language_isbase = value; }
    inline void setQsciLexerPython_Lexer_IsBase(bool value) const { qscilexerpython_lexer_isbase = value; }
    inline void setQsciLexerPython_LexerId_IsBase(bool value) const { qscilexerpython_lexerid_isbase = value; }
    inline void setQsciLexerPython_AutoCompletionFillups_IsBase(bool value) const { qscilexerpython_autocompletionfillups_isbase = value; }
    inline void setQsciLexerPython_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpython_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerPython_BlockEnd_IsBase(bool value) const { qscilexerpython_blockend_isbase = value; }
    inline void setQsciLexerPython_BlockLookback_IsBase(bool value) const { qscilexerpython_blocklookback_isbase = value; }
    inline void setQsciLexerPython_BlockStart_IsBase(bool value) const { qscilexerpython_blockstart_isbase = value; }
    inline void setQsciLexerPython_BlockStartKeyword_IsBase(bool value) const { qscilexerpython_blockstartkeyword_isbase = value; }
    inline void setQsciLexerPython_BraceStyle_IsBase(bool value) const { qscilexerpython_bracestyle_isbase = value; }
    inline void setQsciLexerPython_CaseSensitive_IsBase(bool value) const { qscilexerpython_casesensitive_isbase = value; }
    inline void setQsciLexerPython_Color_IsBase(bool value) const { qscilexerpython_color_isbase = value; }
    inline void setQsciLexerPython_EolFill_IsBase(bool value) const { qscilexerpython_eolfill_isbase = value; }
    inline void setQsciLexerPython_Font_IsBase(bool value) const { qscilexerpython_font_isbase = value; }
    inline void setQsciLexerPython_Keywords_IsBase(bool value) const { qscilexerpython_keywords_isbase = value; }
    inline void setQsciLexerPython_DefaultStyle_IsBase(bool value) const { qscilexerpython_defaultstyle_isbase = value; }
    inline void setQsciLexerPython_Description_IsBase(bool value) const { qscilexerpython_description_isbase = value; }
    inline void setQsciLexerPython_Paper_IsBase(bool value) const { qscilexerpython_paper_isbase = value; }
    inline void setQsciLexerPython_DefaultColorWithStyle_IsBase(bool value) const { qscilexerpython_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerPython_DefaultEolFill_IsBase(bool value) const { qscilexerpython_defaulteolfill_isbase = value; }
    inline void setQsciLexerPython_DefaultFontWithStyle_IsBase(bool value) const { qscilexerpython_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerPython_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerpython_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerPython_SetEditor_IsBase(bool value) const { qscilexerpython_seteditor_isbase = value; }
    inline void setQsciLexerPython_RefreshProperties_IsBase(bool value) const { qscilexerpython_refreshproperties_isbase = value; }
    inline void setQsciLexerPython_StyleBitsNeeded_IsBase(bool value) const { qscilexerpython_stylebitsneeded_isbase = value; }
    inline void setQsciLexerPython_WordCharacters_IsBase(bool value) const { qscilexerpython_wordcharacters_isbase = value; }
    inline void setQsciLexerPython_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpython_setautoindentstyle_isbase = value; }
    inline void setQsciLexerPython_SetColor_IsBase(bool value) const { qscilexerpython_setcolor_isbase = value; }
    inline void setQsciLexerPython_SetEolFill_IsBase(bool value) const { qscilexerpython_seteolfill_isbase = value; }
    inline void setQsciLexerPython_SetFont_IsBase(bool value) const { qscilexerpython_setfont_isbase = value; }
    inline void setQsciLexerPython_SetPaper_IsBase(bool value) const { qscilexerpython_setpaper_isbase = value; }
    inline void setQsciLexerPython_ReadProperties_IsBase(bool value) const { qscilexerpython_readproperties_isbase = value; }
    inline void setQsciLexerPython_WriteProperties_IsBase(bool value) const { qscilexerpython_writeproperties_isbase = value; }
    inline void setQsciLexerPython_Event_IsBase(bool value) const { qscilexerpython_event_isbase = value; }
    inline void setQsciLexerPython_EventFilter_IsBase(bool value) const { qscilexerpython_eventfilter_isbase = value; }
    inline void setQsciLexerPython_TimerEvent_IsBase(bool value) const { qscilexerpython_timerevent_isbase = value; }
    inline void setQsciLexerPython_ChildEvent_IsBase(bool value) const { qscilexerpython_childevent_isbase = value; }
    inline void setQsciLexerPython_CustomEvent_IsBase(bool value) const { qscilexerpython_customevent_isbase = value; }
    inline void setQsciLexerPython_ConnectNotify_IsBase(bool value) const { qscilexerpython_connectnotify_isbase = value; }
    inline void setQsciLexerPython_DisconnectNotify_IsBase(bool value) const { qscilexerpython_disconnectnotify_isbase = value; }
    inline void setQsciLexerPython_TextAsBytes_IsBase(bool value) const { qscilexerpython_textasbytes_isbase = value; }
    inline void setQsciLexerPython_BytesAsText_IsBase(bool value) const { qscilexerpython_bytesastext_isbase = value; }
    inline void setQsciLexerPython_Sender_IsBase(bool value) const { qscilexerpython_sender_isbase = value; }
    inline void setQsciLexerPython_SenderSignalIndex_IsBase(bool value) const { qscilexerpython_sendersignalindex_isbase = value; }
    inline void setQsciLexerPython_Receivers_IsBase(bool value) const { qscilexerpython_receivers_isbase = value; }
    inline void setQsciLexerPython_IsSignalConnected_IsBase(bool value) const { qscilexerpython_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpython_metacall_isbase) {
            qscilexerpython_metacall_isbase = false;
            return QsciLexerPython::qt_metacall(param1, param2, param3);
        } else if (qscilexerpython_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerpython_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpython_indentationguideview_isbase) {
            qscilexerpython_indentationguideview_isbase = false;
            return QsciLexerPython::indentationGuideView();
        } else if (qscilexerpython_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerpython_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpython_setfoldcomments_isbase) {
            qscilexerpython_setfoldcomments_isbase = false;
            QsciLexerPython::setFoldComments(fold);
        } else if (qscilexerpython_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerpython_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerPython::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldQuotes(bool fold) override {
        if (qscilexerpython_setfoldquotes_isbase) {
            qscilexerpython_setfoldquotes_isbase = false;
            QsciLexerPython::setFoldQuotes(fold);
        } else if (qscilexerpython_setfoldquotes_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerpython_setfoldquotes_callback(this, cbval1);
        } else {
            QsciLexerPython::setFoldQuotes(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationWarning(QsciLexerPython::IndentationWarning warn) override {
        if (qscilexerpython_setindentationwarning_isbase) {
            qscilexerpython_setindentationwarning_isbase = false;
            QsciLexerPython::setIndentationWarning(warn);
        } else if (qscilexerpython_setindentationwarning_callback != nullptr) {
            int cbval1 = static_cast<int>(warn);

            qscilexerpython_setindentationwarning_callback(this, cbval1);
        } else {
            QsciLexerPython::setIndentationWarning(warn);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpython_language_callback != nullptr) {
            const char* callback_ret = qscilexerpython_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpython_lexer_isbase) {
            qscilexerpython_lexer_isbase = false;
            return QsciLexerPython::lexer();
        } else if (qscilexerpython_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerpython_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerPython::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpython_lexerid_isbase) {
            qscilexerpython_lexerid_isbase = false;
            return QsciLexerPython::lexerId();
        } else if (qscilexerpython_lexerid_callback != nullptr) {
            int callback_ret = qscilexerpython_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpython_autocompletionfillups_isbase) {
            qscilexerpython_autocompletionfillups_isbase = false;
            return QsciLexerPython::autoCompletionFillups();
        } else if (qscilexerpython_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerpython_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerPython::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpython_autocompletionwordseparators_isbase) {
            qscilexerpython_autocompletionwordseparators_isbase = false;
            return QsciLexerPython::autoCompletionWordSeparators();
        } else if (qscilexerpython_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerpython_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerPython::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpython_blockend_isbase) {
            qscilexerpython_blockend_isbase = false;
            return QsciLexerPython::blockEnd(style);
        } else if (qscilexerpython_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerpython_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpython_blocklookback_isbase) {
            qscilexerpython_blocklookback_isbase = false;
            return QsciLexerPython::blockLookback();
        } else if (qscilexerpython_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerpython_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpython_blockstart_isbase) {
            qscilexerpython_blockstart_isbase = false;
            return QsciLexerPython::blockStart(style);
        } else if (qscilexerpython_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerpython_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpython_blockstartkeyword_isbase) {
            qscilexerpython_blockstartkeyword_isbase = false;
            return QsciLexerPython::blockStartKeyword(style);
        } else if (qscilexerpython_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerpython_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpython_bracestyle_isbase) {
            qscilexerpython_bracestyle_isbase = false;
            return QsciLexerPython::braceStyle();
        } else if (qscilexerpython_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerpython_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpython_casesensitive_isbase) {
            qscilexerpython_casesensitive_isbase = false;
            return QsciLexerPython::caseSensitive();
        } else if (qscilexerpython_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerpython_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerPython::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpython_color_isbase) {
            qscilexerpython_color_isbase = false;
            return QsciLexerPython::color(style);
        } else if (qscilexerpython_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerpython_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpython_eolfill_isbase) {
            qscilexerpython_eolfill_isbase = false;
            return QsciLexerPython::eolFill(style);
        } else if (qscilexerpython_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerpython_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpython_font_isbase) {
            qscilexerpython_font_isbase = false;
            return QsciLexerPython::font(style);
        } else if (qscilexerpython_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerpython_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpython_keywords_isbase) {
            qscilexerpython_keywords_isbase = false;
            return QsciLexerPython::keywords(set);
        } else if (qscilexerpython_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerpython_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpython_defaultstyle_isbase) {
            qscilexerpython_defaultstyle_isbase = false;
            return QsciLexerPython::defaultStyle();
        } else if (qscilexerpython_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerpython_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpython_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerpython_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpython_paper_isbase) {
            qscilexerpython_paper_isbase = false;
            return QsciLexerPython::paper(style);
        } else if (qscilexerpython_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerpython_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpython_defaultcolorwithstyle_isbase) {
            qscilexerpython_defaultcolorwithstyle_isbase = false;
            return QsciLexerPython::defaultColor(style);
        } else if (qscilexerpython_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerpython_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpython_defaulteolfill_isbase) {
            qscilexerpython_defaulteolfill_isbase = false;
            return QsciLexerPython::defaultEolFill(style);
        } else if (qscilexerpython_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerpython_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpython_defaultfontwithstyle_isbase) {
            qscilexerpython_defaultfontwithstyle_isbase = false;
            return QsciLexerPython::defaultFont(style);
        } else if (qscilexerpython_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerpython_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpython_defaultpaperwithstyle_isbase) {
            qscilexerpython_defaultpaperwithstyle_isbase = false;
            return QsciLexerPython::defaultPaper(style);
        } else if (qscilexerpython_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerpython_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerPython::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpython_seteditor_isbase) {
            qscilexerpython_seteditor_isbase = false;
            QsciLexerPython::setEditor(editor);
        } else if (qscilexerpython_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerpython_seteditor_callback(this, cbval1);
        } else {
            QsciLexerPython::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpython_refreshproperties_isbase) {
            qscilexerpython_refreshproperties_isbase = false;
            QsciLexerPython::refreshProperties();
        } else if (qscilexerpython_refreshproperties_callback != nullptr) {
            qscilexerpython_refreshproperties_callback();
        } else {
            QsciLexerPython::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpython_stylebitsneeded_isbase) {
            qscilexerpython_stylebitsneeded_isbase = false;
            return QsciLexerPython::styleBitsNeeded();
        } else if (qscilexerpython_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerpython_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpython_wordcharacters_isbase) {
            qscilexerpython_wordcharacters_isbase = false;
            return QsciLexerPython::wordCharacters();
        } else if (qscilexerpython_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerpython_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerPython::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpython_setautoindentstyle_isbase) {
            qscilexerpython_setautoindentstyle_isbase = false;
            QsciLexerPython::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerpython_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerpython_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerPython::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpython_setcolor_isbase) {
            qscilexerpython_setcolor_isbase = false;
            QsciLexerPython::setColor(c, style);
        } else if (qscilexerpython_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerpython_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerPython::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpython_seteolfill_isbase) {
            qscilexerpython_seteolfill_isbase = false;
            QsciLexerPython::setEolFill(eoffill, style);
        } else if (qscilexerpython_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerpython_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerPython::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpython_setfont_isbase) {
            qscilexerpython_setfont_isbase = false;
            QsciLexerPython::setFont(f, style);
        } else if (qscilexerpython_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerpython_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerPython::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpython_setpaper_isbase) {
            qscilexerpython_setpaper_isbase = false;
            QsciLexerPython::setPaper(c, style);
        } else if (qscilexerpython_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerpython_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerPython::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpython_readproperties_isbase) {
            qscilexerpython_readproperties_isbase = false;
            return QsciLexerPython::readProperties(qs, prefix);
        } else if (qscilexerpython_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerpython_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerPython::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpython_writeproperties_isbase) {
            qscilexerpython_writeproperties_isbase = false;
            return QsciLexerPython::writeProperties(qs, prefix);
        } else if (qscilexerpython_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerpython_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerPython::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpython_event_isbase) {
            qscilexerpython_event_isbase = false;
            return QsciLexerPython::event(event);
        } else if (qscilexerpython_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerpython_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpython_eventfilter_isbase) {
            qscilexerpython_eventfilter_isbase = false;
            return QsciLexerPython::eventFilter(watched, event);
        } else if (qscilexerpython_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerpython_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerPython::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpython_timerevent_isbase) {
            qscilexerpython_timerevent_isbase = false;
            QsciLexerPython::timerEvent(event);
        } else if (qscilexerpython_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerpython_timerevent_callback(this, cbval1);
        } else {
            QsciLexerPython::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpython_childevent_isbase) {
            qscilexerpython_childevent_isbase = false;
            QsciLexerPython::childEvent(event);
        } else if (qscilexerpython_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerpython_childevent_callback(this, cbval1);
        } else {
            QsciLexerPython::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpython_customevent_isbase) {
            qscilexerpython_customevent_isbase = false;
            QsciLexerPython::customEvent(event);
        } else if (qscilexerpython_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerpython_customevent_callback(this, cbval1);
        } else {
            QsciLexerPython::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpython_connectnotify_isbase) {
            qscilexerpython_connectnotify_isbase = false;
            QsciLexerPython::connectNotify(signal);
        } else if (qscilexerpython_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerpython_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerPython::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpython_disconnectnotify_isbase) {
            qscilexerpython_disconnectnotify_isbase = false;
            QsciLexerPython::disconnectNotify(signal);
        } else if (qscilexerpython_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerpython_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerPython::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerpython_textasbytes_isbase) {
            qscilexerpython_textasbytes_isbase = false;
            return QsciLexerPython::textAsBytes(text);
        } else if (qscilexerpython_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexerpython_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerPython::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerpython_bytesastext_isbase) {
            qscilexerpython_bytesastext_isbase = false;
            return QsciLexerPython::bytesAsText(bytes, size);
        } else if (qscilexerpython_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexerpython_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerPython::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpython_sender_isbase) {
            qscilexerpython_sender_isbase = false;
            return QsciLexerPython::sender();
        } else if (qscilexerpython_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerpython_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerPython::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpython_sendersignalindex_isbase) {
            qscilexerpython_sendersignalindex_isbase = false;
            return QsciLexerPython::senderSignalIndex();
        } else if (qscilexerpython_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerpython_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpython_receivers_isbase) {
            qscilexerpython_receivers_isbase = false;
            return QsciLexerPython::receivers(signal);
        } else if (qscilexerpython_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerpython_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerPython::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpython_issignalconnected_isbase) {
            qscilexerpython_issignalconnected_isbase = false;
            return QsciLexerPython::isSignalConnected(signal);
        } else if (qscilexerpython_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerpython_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerPython::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerPython_ReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPython_QBaseReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPython_WriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPython_QBaseWriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPython_TimerEvent(QsciLexerPython* self, QTimerEvent* event);
    friend void QsciLexerPython_QBaseTimerEvent(QsciLexerPython* self, QTimerEvent* event);
    friend void QsciLexerPython_ChildEvent(QsciLexerPython* self, QChildEvent* event);
    friend void QsciLexerPython_QBaseChildEvent(QsciLexerPython* self, QChildEvent* event);
    friend void QsciLexerPython_CustomEvent(QsciLexerPython* self, QEvent* event);
    friend void QsciLexerPython_QBaseCustomEvent(QsciLexerPython* self, QEvent* event);
    friend void QsciLexerPython_ConnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
    friend void QsciLexerPython_QBaseConnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
    friend void QsciLexerPython_DisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
    friend void QsciLexerPython_QBaseDisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerPython_TextAsBytes(const QsciLexerPython* self, const libqt_string text);
    friend libqt_string QsciLexerPython_QBaseTextAsBytes(const QsciLexerPython* self, const libqt_string text);
    friend libqt_string QsciLexerPython_BytesAsText(const QsciLexerPython* self, const char* bytes, int size);
    friend libqt_string QsciLexerPython_QBaseBytesAsText(const QsciLexerPython* self, const char* bytes, int size);
    friend QObject* QsciLexerPython_Sender(const QsciLexerPython* self);
    friend QObject* QsciLexerPython_QBaseSender(const QsciLexerPython* self);
    friend int QsciLexerPython_SenderSignalIndex(const QsciLexerPython* self);
    friend int QsciLexerPython_QBaseSenderSignalIndex(const QsciLexerPython* self);
    friend int QsciLexerPython_Receivers(const QsciLexerPython* self, const char* signal);
    friend int QsciLexerPython_QBaseReceivers(const QsciLexerPython* self, const char* signal);
    friend bool QsciLexerPython_IsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal);
    friend bool QsciLexerPython_QBaseIsSignalConnected(const QsciLexerPython* self, const QMetaMethod* signal);
};

#endif
