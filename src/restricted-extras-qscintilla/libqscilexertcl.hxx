#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTCL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERTCL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTCL so that we can call protected methods
class VirtualQsciLexerTCL final : public QsciLexerTCL {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerTCL = true;

    // Virtual class public types (including callbacks)
    using QsciLexerTCL_Metacall_Callback = int (*)(QsciLexerTCL*, int, int, void**);
    using QsciLexerTCL_Language_Callback = const char* (*)();
    using QsciLexerTCL_Lexer_Callback = const char* (*)();
    using QsciLexerTCL_LexerId_Callback = int (*)();
    using QsciLexerTCL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerTCL_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerTCL_BlockEnd_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BlockLookback_Callback = int (*)();
    using QsciLexerTCL_BlockStart_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BraceStyle_Callback = int (*)();
    using QsciLexerTCL_CaseSensitive_Callback = bool (*)();
    using QsciLexerTCL_Color_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_EolFill_Callback = bool (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_Font_Callback = QFont* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_IndentationGuideView_Callback = int (*)();
    using QsciLexerTCL_Keywords_Callback = const char* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultStyle_Callback = int (*)();
    using QsciLexerTCL_Description_Callback = libqt_string (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_Paper_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultEolFill_Callback = bool (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_SetEditor_Callback = void (*)(QsciLexerTCL*, QsciScintilla*);
    using QsciLexerTCL_RefreshProperties_Callback = void (*)();
    using QsciLexerTCL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerTCL_WordCharacters_Callback = const char* (*)();
    using QsciLexerTCL_SetAutoIndentStyle_Callback = void (*)(QsciLexerTCL*, int);
    using QsciLexerTCL_SetColor_Callback = void (*)(QsciLexerTCL*, QColor*, int);
    using QsciLexerTCL_SetEolFill_Callback = void (*)(QsciLexerTCL*, bool, int);
    using QsciLexerTCL_SetFont_Callback = void (*)(QsciLexerTCL*, QFont*, int);
    using QsciLexerTCL_SetPaper_Callback = void (*)(QsciLexerTCL*, QColor*, int);
    using QsciLexerTCL_ReadProperties_Callback = bool (*)(QsciLexerTCL*, QSettings*, libqt_string);
    using QsciLexerTCL_WriteProperties_Callback = bool (*)(const QsciLexerTCL*, QSettings*, libqt_string);
    using QsciLexerTCL_Event_Callback = bool (*)(QsciLexerTCL*, QEvent*);
    using QsciLexerTCL_EventFilter_Callback = bool (*)(QsciLexerTCL*, QObject*, QEvent*);
    using QsciLexerTCL_TimerEvent_Callback = void (*)(QsciLexerTCL*, QTimerEvent*);
    using QsciLexerTCL_ChildEvent_Callback = void (*)(QsciLexerTCL*, QChildEvent*);
    using QsciLexerTCL_CustomEvent_Callback = void (*)(QsciLexerTCL*, QEvent*);
    using QsciLexerTCL_ConnectNotify_Callback = void (*)(QsciLexerTCL*, QMetaMethod*);
    using QsciLexerTCL_DisconnectNotify_Callback = void (*)(QsciLexerTCL*, QMetaMethod*);
    using QsciLexerTCL_TextAsBytes_Callback = libqt_string (*)(const QsciLexerTCL*, libqt_string);
    using QsciLexerTCL_BytesAsText_Callback = libqt_string (*)(const QsciLexerTCL*, const char*, int);
    using QsciLexerTCL_Sender_Callback = QObject* (*)();
    using QsciLexerTCL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerTCL_Receivers_Callback = int (*)(const QsciLexerTCL*, const char*);
    using QsciLexerTCL_IsSignalConnected_Callback = bool (*)(const QsciLexerTCL*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerTCL_Metacall_Callback qscilexertcl_metacall_callback = nullptr;
    QsciLexerTCL_Language_Callback qscilexertcl_language_callback = nullptr;
    QsciLexerTCL_Lexer_Callback qscilexertcl_lexer_callback = nullptr;
    QsciLexerTCL_LexerId_Callback qscilexertcl_lexerid_callback = nullptr;
    QsciLexerTCL_AutoCompletionFillups_Callback qscilexertcl_autocompletionfillups_callback = nullptr;
    QsciLexerTCL_AutoCompletionWordSeparators_Callback qscilexertcl_autocompletionwordseparators_callback = nullptr;
    QsciLexerTCL_BlockEnd_Callback qscilexertcl_blockend_callback = nullptr;
    QsciLexerTCL_BlockLookback_Callback qscilexertcl_blocklookback_callback = nullptr;
    QsciLexerTCL_BlockStart_Callback qscilexertcl_blockstart_callback = nullptr;
    QsciLexerTCL_BlockStartKeyword_Callback qscilexertcl_blockstartkeyword_callback = nullptr;
    QsciLexerTCL_BraceStyle_Callback qscilexertcl_bracestyle_callback = nullptr;
    QsciLexerTCL_CaseSensitive_Callback qscilexertcl_casesensitive_callback = nullptr;
    QsciLexerTCL_Color_Callback qscilexertcl_color_callback = nullptr;
    QsciLexerTCL_EolFill_Callback qscilexertcl_eolfill_callback = nullptr;
    QsciLexerTCL_Font_Callback qscilexertcl_font_callback = nullptr;
    QsciLexerTCL_IndentationGuideView_Callback qscilexertcl_indentationguideview_callback = nullptr;
    QsciLexerTCL_Keywords_Callback qscilexertcl_keywords_callback = nullptr;
    QsciLexerTCL_DefaultStyle_Callback qscilexertcl_defaultstyle_callback = nullptr;
    QsciLexerTCL_Description_Callback qscilexertcl_description_callback = nullptr;
    QsciLexerTCL_Paper_Callback qscilexertcl_paper_callback = nullptr;
    QsciLexerTCL_DefaultColorWithStyle_Callback qscilexertcl_defaultcolorwithstyle_callback = nullptr;
    QsciLexerTCL_DefaultEolFill_Callback qscilexertcl_defaulteolfill_callback = nullptr;
    QsciLexerTCL_DefaultFontWithStyle_Callback qscilexertcl_defaultfontwithstyle_callback = nullptr;
    QsciLexerTCL_DefaultPaperWithStyle_Callback qscilexertcl_defaultpaperwithstyle_callback = nullptr;
    QsciLexerTCL_SetEditor_Callback qscilexertcl_seteditor_callback = nullptr;
    QsciLexerTCL_RefreshProperties_Callback qscilexertcl_refreshproperties_callback = nullptr;
    QsciLexerTCL_StyleBitsNeeded_Callback qscilexertcl_stylebitsneeded_callback = nullptr;
    QsciLexerTCL_WordCharacters_Callback qscilexertcl_wordcharacters_callback = nullptr;
    QsciLexerTCL_SetAutoIndentStyle_Callback qscilexertcl_setautoindentstyle_callback = nullptr;
    QsciLexerTCL_SetColor_Callback qscilexertcl_setcolor_callback = nullptr;
    QsciLexerTCL_SetEolFill_Callback qscilexertcl_seteolfill_callback = nullptr;
    QsciLexerTCL_SetFont_Callback qscilexertcl_setfont_callback = nullptr;
    QsciLexerTCL_SetPaper_Callback qscilexertcl_setpaper_callback = nullptr;
    QsciLexerTCL_ReadProperties_Callback qscilexertcl_readproperties_callback = nullptr;
    QsciLexerTCL_WriteProperties_Callback qscilexertcl_writeproperties_callback = nullptr;
    QsciLexerTCL_Event_Callback qscilexertcl_event_callback = nullptr;
    QsciLexerTCL_EventFilter_Callback qscilexertcl_eventfilter_callback = nullptr;
    QsciLexerTCL_TimerEvent_Callback qscilexertcl_timerevent_callback = nullptr;
    QsciLexerTCL_ChildEvent_Callback qscilexertcl_childevent_callback = nullptr;
    QsciLexerTCL_CustomEvent_Callback qscilexertcl_customevent_callback = nullptr;
    QsciLexerTCL_ConnectNotify_Callback qscilexertcl_connectnotify_callback = nullptr;
    QsciLexerTCL_DisconnectNotify_Callback qscilexertcl_disconnectnotify_callback = nullptr;
    QsciLexerTCL_TextAsBytes_Callback qscilexertcl_textasbytes_callback = nullptr;
    QsciLexerTCL_BytesAsText_Callback qscilexertcl_bytesastext_callback = nullptr;
    QsciLexerTCL_Sender_Callback qscilexertcl_sender_callback = nullptr;
    QsciLexerTCL_SenderSignalIndex_Callback qscilexertcl_sendersignalindex_callback = nullptr;
    QsciLexerTCL_Receivers_Callback qscilexertcl_receivers_callback = nullptr;
    QsciLexerTCL_IsSignalConnected_Callback qscilexertcl_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexertcl_metacall_isbase = false;
    mutable bool qscilexertcl_language_isbase = false;
    mutable bool qscilexertcl_lexer_isbase = false;
    mutable bool qscilexertcl_lexerid_isbase = false;
    mutable bool qscilexertcl_autocompletionfillups_isbase = false;
    mutable bool qscilexertcl_autocompletionwordseparators_isbase = false;
    mutable bool qscilexertcl_blockend_isbase = false;
    mutable bool qscilexertcl_blocklookback_isbase = false;
    mutable bool qscilexertcl_blockstart_isbase = false;
    mutable bool qscilexertcl_blockstartkeyword_isbase = false;
    mutable bool qscilexertcl_bracestyle_isbase = false;
    mutable bool qscilexertcl_casesensitive_isbase = false;
    mutable bool qscilexertcl_color_isbase = false;
    mutable bool qscilexertcl_eolfill_isbase = false;
    mutable bool qscilexertcl_font_isbase = false;
    mutable bool qscilexertcl_indentationguideview_isbase = false;
    mutable bool qscilexertcl_keywords_isbase = false;
    mutable bool qscilexertcl_defaultstyle_isbase = false;
    mutable bool qscilexertcl_description_isbase = false;
    mutable bool qscilexertcl_paper_isbase = false;
    mutable bool qscilexertcl_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexertcl_defaulteolfill_isbase = false;
    mutable bool qscilexertcl_defaultfontwithstyle_isbase = false;
    mutable bool qscilexertcl_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexertcl_seteditor_isbase = false;
    mutable bool qscilexertcl_refreshproperties_isbase = false;
    mutable bool qscilexertcl_stylebitsneeded_isbase = false;
    mutable bool qscilexertcl_wordcharacters_isbase = false;
    mutable bool qscilexertcl_setautoindentstyle_isbase = false;
    mutable bool qscilexertcl_setcolor_isbase = false;
    mutable bool qscilexertcl_seteolfill_isbase = false;
    mutable bool qscilexertcl_setfont_isbase = false;
    mutable bool qscilexertcl_setpaper_isbase = false;
    mutable bool qscilexertcl_readproperties_isbase = false;
    mutable bool qscilexertcl_writeproperties_isbase = false;
    mutable bool qscilexertcl_event_isbase = false;
    mutable bool qscilexertcl_eventfilter_isbase = false;
    mutable bool qscilexertcl_timerevent_isbase = false;
    mutable bool qscilexertcl_childevent_isbase = false;
    mutable bool qscilexertcl_customevent_isbase = false;
    mutable bool qscilexertcl_connectnotify_isbase = false;
    mutable bool qscilexertcl_disconnectnotify_isbase = false;
    mutable bool qscilexertcl_textasbytes_isbase = false;
    mutable bool qscilexertcl_bytesastext_isbase = false;
    mutable bool qscilexertcl_sender_isbase = false;
    mutable bool qscilexertcl_sendersignalindex_isbase = false;
    mutable bool qscilexertcl_receivers_isbase = false;
    mutable bool qscilexertcl_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerTCL() : QsciLexerTCL() {};
    VirtualQsciLexerTCL(QObject* parent) : QsciLexerTCL(parent) {};

    ~VirtualQsciLexerTCL() {
        qscilexertcl_metacall_callback = nullptr;
        qscilexertcl_language_callback = nullptr;
        qscilexertcl_lexer_callback = nullptr;
        qscilexertcl_lexerid_callback = nullptr;
        qscilexertcl_autocompletionfillups_callback = nullptr;
        qscilexertcl_autocompletionwordseparators_callback = nullptr;
        qscilexertcl_blockend_callback = nullptr;
        qscilexertcl_blocklookback_callback = nullptr;
        qscilexertcl_blockstart_callback = nullptr;
        qscilexertcl_blockstartkeyword_callback = nullptr;
        qscilexertcl_bracestyle_callback = nullptr;
        qscilexertcl_casesensitive_callback = nullptr;
        qscilexertcl_color_callback = nullptr;
        qscilexertcl_eolfill_callback = nullptr;
        qscilexertcl_font_callback = nullptr;
        qscilexertcl_indentationguideview_callback = nullptr;
        qscilexertcl_keywords_callback = nullptr;
        qscilexertcl_defaultstyle_callback = nullptr;
        qscilexertcl_description_callback = nullptr;
        qscilexertcl_paper_callback = nullptr;
        qscilexertcl_defaultcolorwithstyle_callback = nullptr;
        qscilexertcl_defaulteolfill_callback = nullptr;
        qscilexertcl_defaultfontwithstyle_callback = nullptr;
        qscilexertcl_defaultpaperwithstyle_callback = nullptr;
        qscilexertcl_seteditor_callback = nullptr;
        qscilexertcl_refreshproperties_callback = nullptr;
        qscilexertcl_stylebitsneeded_callback = nullptr;
        qscilexertcl_wordcharacters_callback = nullptr;
        qscilexertcl_setautoindentstyle_callback = nullptr;
        qscilexertcl_setcolor_callback = nullptr;
        qscilexertcl_seteolfill_callback = nullptr;
        qscilexertcl_setfont_callback = nullptr;
        qscilexertcl_setpaper_callback = nullptr;
        qscilexertcl_readproperties_callback = nullptr;
        qscilexertcl_writeproperties_callback = nullptr;
        qscilexertcl_event_callback = nullptr;
        qscilexertcl_eventfilter_callback = nullptr;
        qscilexertcl_timerevent_callback = nullptr;
        qscilexertcl_childevent_callback = nullptr;
        qscilexertcl_customevent_callback = nullptr;
        qscilexertcl_connectnotify_callback = nullptr;
        qscilexertcl_disconnectnotify_callback = nullptr;
        qscilexertcl_textasbytes_callback = nullptr;
        qscilexertcl_bytesastext_callback = nullptr;
        qscilexertcl_sender_callback = nullptr;
        qscilexertcl_sendersignalindex_callback = nullptr;
        qscilexertcl_receivers_callback = nullptr;
        qscilexertcl_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerTCL_Metacall_Callback(QsciLexerTCL_Metacall_Callback cb) { qscilexertcl_metacall_callback = cb; }
    inline void setQsciLexerTCL_Language_Callback(QsciLexerTCL_Language_Callback cb) { qscilexertcl_language_callback = cb; }
    inline void setQsciLexerTCL_Lexer_Callback(QsciLexerTCL_Lexer_Callback cb) { qscilexertcl_lexer_callback = cb; }
    inline void setQsciLexerTCL_LexerId_Callback(QsciLexerTCL_LexerId_Callback cb) { qscilexertcl_lexerid_callback = cb; }
    inline void setQsciLexerTCL_AutoCompletionFillups_Callback(QsciLexerTCL_AutoCompletionFillups_Callback cb) { qscilexertcl_autocompletionfillups_callback = cb; }
    inline void setQsciLexerTCL_AutoCompletionWordSeparators_Callback(QsciLexerTCL_AutoCompletionWordSeparators_Callback cb) { qscilexertcl_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerTCL_BlockEnd_Callback(QsciLexerTCL_BlockEnd_Callback cb) { qscilexertcl_blockend_callback = cb; }
    inline void setQsciLexerTCL_BlockLookback_Callback(QsciLexerTCL_BlockLookback_Callback cb) { qscilexertcl_blocklookback_callback = cb; }
    inline void setQsciLexerTCL_BlockStart_Callback(QsciLexerTCL_BlockStart_Callback cb) { qscilexertcl_blockstart_callback = cb; }
    inline void setQsciLexerTCL_BlockStartKeyword_Callback(QsciLexerTCL_BlockStartKeyword_Callback cb) { qscilexertcl_blockstartkeyword_callback = cb; }
    inline void setQsciLexerTCL_BraceStyle_Callback(QsciLexerTCL_BraceStyle_Callback cb) { qscilexertcl_bracestyle_callback = cb; }
    inline void setQsciLexerTCL_CaseSensitive_Callback(QsciLexerTCL_CaseSensitive_Callback cb) { qscilexertcl_casesensitive_callback = cb; }
    inline void setQsciLexerTCL_Color_Callback(QsciLexerTCL_Color_Callback cb) { qscilexertcl_color_callback = cb; }
    inline void setQsciLexerTCL_EolFill_Callback(QsciLexerTCL_EolFill_Callback cb) { qscilexertcl_eolfill_callback = cb; }
    inline void setQsciLexerTCL_Font_Callback(QsciLexerTCL_Font_Callback cb) { qscilexertcl_font_callback = cb; }
    inline void setQsciLexerTCL_IndentationGuideView_Callback(QsciLexerTCL_IndentationGuideView_Callback cb) { qscilexertcl_indentationguideview_callback = cb; }
    inline void setQsciLexerTCL_Keywords_Callback(QsciLexerTCL_Keywords_Callback cb) { qscilexertcl_keywords_callback = cb; }
    inline void setQsciLexerTCL_DefaultStyle_Callback(QsciLexerTCL_DefaultStyle_Callback cb) { qscilexertcl_defaultstyle_callback = cb; }
    inline void setQsciLexerTCL_Description_Callback(QsciLexerTCL_Description_Callback cb) { qscilexertcl_description_callback = cb; }
    inline void setQsciLexerTCL_Paper_Callback(QsciLexerTCL_Paper_Callback cb) { qscilexertcl_paper_callback = cb; }
    inline void setQsciLexerTCL_DefaultColorWithStyle_Callback(QsciLexerTCL_DefaultColorWithStyle_Callback cb) { qscilexertcl_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerTCL_DefaultEolFill_Callback(QsciLexerTCL_DefaultEolFill_Callback cb) { qscilexertcl_defaulteolfill_callback = cb; }
    inline void setQsciLexerTCL_DefaultFontWithStyle_Callback(QsciLexerTCL_DefaultFontWithStyle_Callback cb) { qscilexertcl_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerTCL_DefaultPaperWithStyle_Callback(QsciLexerTCL_DefaultPaperWithStyle_Callback cb) { qscilexertcl_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerTCL_SetEditor_Callback(QsciLexerTCL_SetEditor_Callback cb) { qscilexertcl_seteditor_callback = cb; }
    inline void setQsciLexerTCL_RefreshProperties_Callback(QsciLexerTCL_RefreshProperties_Callback cb) { qscilexertcl_refreshproperties_callback = cb; }
    inline void setQsciLexerTCL_StyleBitsNeeded_Callback(QsciLexerTCL_StyleBitsNeeded_Callback cb) { qscilexertcl_stylebitsneeded_callback = cb; }
    inline void setQsciLexerTCL_WordCharacters_Callback(QsciLexerTCL_WordCharacters_Callback cb) { qscilexertcl_wordcharacters_callback = cb; }
    inline void setQsciLexerTCL_SetAutoIndentStyle_Callback(QsciLexerTCL_SetAutoIndentStyle_Callback cb) { qscilexertcl_setautoindentstyle_callback = cb; }
    inline void setQsciLexerTCL_SetColor_Callback(QsciLexerTCL_SetColor_Callback cb) { qscilexertcl_setcolor_callback = cb; }
    inline void setQsciLexerTCL_SetEolFill_Callback(QsciLexerTCL_SetEolFill_Callback cb) { qscilexertcl_seteolfill_callback = cb; }
    inline void setQsciLexerTCL_SetFont_Callback(QsciLexerTCL_SetFont_Callback cb) { qscilexertcl_setfont_callback = cb; }
    inline void setQsciLexerTCL_SetPaper_Callback(QsciLexerTCL_SetPaper_Callback cb) { qscilexertcl_setpaper_callback = cb; }
    inline void setQsciLexerTCL_ReadProperties_Callback(QsciLexerTCL_ReadProperties_Callback cb) { qscilexertcl_readproperties_callback = cb; }
    inline void setQsciLexerTCL_WriteProperties_Callback(QsciLexerTCL_WriteProperties_Callback cb) { qscilexertcl_writeproperties_callback = cb; }
    inline void setQsciLexerTCL_Event_Callback(QsciLexerTCL_Event_Callback cb) { qscilexertcl_event_callback = cb; }
    inline void setQsciLexerTCL_EventFilter_Callback(QsciLexerTCL_EventFilter_Callback cb) { qscilexertcl_eventfilter_callback = cb; }
    inline void setQsciLexerTCL_TimerEvent_Callback(QsciLexerTCL_TimerEvent_Callback cb) { qscilexertcl_timerevent_callback = cb; }
    inline void setQsciLexerTCL_ChildEvent_Callback(QsciLexerTCL_ChildEvent_Callback cb) { qscilexertcl_childevent_callback = cb; }
    inline void setQsciLexerTCL_CustomEvent_Callback(QsciLexerTCL_CustomEvent_Callback cb) { qscilexertcl_customevent_callback = cb; }
    inline void setQsciLexerTCL_ConnectNotify_Callback(QsciLexerTCL_ConnectNotify_Callback cb) { qscilexertcl_connectnotify_callback = cb; }
    inline void setQsciLexerTCL_DisconnectNotify_Callback(QsciLexerTCL_DisconnectNotify_Callback cb) { qscilexertcl_disconnectnotify_callback = cb; }
    inline void setQsciLexerTCL_TextAsBytes_Callback(QsciLexerTCL_TextAsBytes_Callback cb) { qscilexertcl_textasbytes_callback = cb; }
    inline void setQsciLexerTCL_BytesAsText_Callback(QsciLexerTCL_BytesAsText_Callback cb) { qscilexertcl_bytesastext_callback = cb; }
    inline void setQsciLexerTCL_Sender_Callback(QsciLexerTCL_Sender_Callback cb) { qscilexertcl_sender_callback = cb; }
    inline void setQsciLexerTCL_SenderSignalIndex_Callback(QsciLexerTCL_SenderSignalIndex_Callback cb) { qscilexertcl_sendersignalindex_callback = cb; }
    inline void setQsciLexerTCL_Receivers_Callback(QsciLexerTCL_Receivers_Callback cb) { qscilexertcl_receivers_callback = cb; }
    inline void setQsciLexerTCL_IsSignalConnected_Callback(QsciLexerTCL_IsSignalConnected_Callback cb) { qscilexertcl_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerTCL_Metacall_IsBase(bool value) const { qscilexertcl_metacall_isbase = value; }
    inline void setQsciLexerTCL_Language_IsBase(bool value) const { qscilexertcl_language_isbase = value; }
    inline void setQsciLexerTCL_Lexer_IsBase(bool value) const { qscilexertcl_lexer_isbase = value; }
    inline void setQsciLexerTCL_LexerId_IsBase(bool value) const { qscilexertcl_lexerid_isbase = value; }
    inline void setQsciLexerTCL_AutoCompletionFillups_IsBase(bool value) const { qscilexertcl_autocompletionfillups_isbase = value; }
    inline void setQsciLexerTCL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexertcl_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerTCL_BlockEnd_IsBase(bool value) const { qscilexertcl_blockend_isbase = value; }
    inline void setQsciLexerTCL_BlockLookback_IsBase(bool value) const { qscilexertcl_blocklookback_isbase = value; }
    inline void setQsciLexerTCL_BlockStart_IsBase(bool value) const { qscilexertcl_blockstart_isbase = value; }
    inline void setQsciLexerTCL_BlockStartKeyword_IsBase(bool value) const { qscilexertcl_blockstartkeyword_isbase = value; }
    inline void setQsciLexerTCL_BraceStyle_IsBase(bool value) const { qscilexertcl_bracestyle_isbase = value; }
    inline void setQsciLexerTCL_CaseSensitive_IsBase(bool value) const { qscilexertcl_casesensitive_isbase = value; }
    inline void setQsciLexerTCL_Color_IsBase(bool value) const { qscilexertcl_color_isbase = value; }
    inline void setQsciLexerTCL_EolFill_IsBase(bool value) const { qscilexertcl_eolfill_isbase = value; }
    inline void setQsciLexerTCL_Font_IsBase(bool value) const { qscilexertcl_font_isbase = value; }
    inline void setQsciLexerTCL_IndentationGuideView_IsBase(bool value) const { qscilexertcl_indentationguideview_isbase = value; }
    inline void setQsciLexerTCL_Keywords_IsBase(bool value) const { qscilexertcl_keywords_isbase = value; }
    inline void setQsciLexerTCL_DefaultStyle_IsBase(bool value) const { qscilexertcl_defaultstyle_isbase = value; }
    inline void setQsciLexerTCL_Description_IsBase(bool value) const { qscilexertcl_description_isbase = value; }
    inline void setQsciLexerTCL_Paper_IsBase(bool value) const { qscilexertcl_paper_isbase = value; }
    inline void setQsciLexerTCL_DefaultColorWithStyle_IsBase(bool value) const { qscilexertcl_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerTCL_DefaultEolFill_IsBase(bool value) const { qscilexertcl_defaulteolfill_isbase = value; }
    inline void setQsciLexerTCL_DefaultFontWithStyle_IsBase(bool value) const { qscilexertcl_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerTCL_DefaultPaperWithStyle_IsBase(bool value) const { qscilexertcl_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerTCL_SetEditor_IsBase(bool value) const { qscilexertcl_seteditor_isbase = value; }
    inline void setQsciLexerTCL_RefreshProperties_IsBase(bool value) const { qscilexertcl_refreshproperties_isbase = value; }
    inline void setQsciLexerTCL_StyleBitsNeeded_IsBase(bool value) const { qscilexertcl_stylebitsneeded_isbase = value; }
    inline void setQsciLexerTCL_WordCharacters_IsBase(bool value) const { qscilexertcl_wordcharacters_isbase = value; }
    inline void setQsciLexerTCL_SetAutoIndentStyle_IsBase(bool value) const { qscilexertcl_setautoindentstyle_isbase = value; }
    inline void setQsciLexerTCL_SetColor_IsBase(bool value) const { qscilexertcl_setcolor_isbase = value; }
    inline void setQsciLexerTCL_SetEolFill_IsBase(bool value) const { qscilexertcl_seteolfill_isbase = value; }
    inline void setQsciLexerTCL_SetFont_IsBase(bool value) const { qscilexertcl_setfont_isbase = value; }
    inline void setQsciLexerTCL_SetPaper_IsBase(bool value) const { qscilexertcl_setpaper_isbase = value; }
    inline void setQsciLexerTCL_ReadProperties_IsBase(bool value) const { qscilexertcl_readproperties_isbase = value; }
    inline void setQsciLexerTCL_WriteProperties_IsBase(bool value) const { qscilexertcl_writeproperties_isbase = value; }
    inline void setQsciLexerTCL_Event_IsBase(bool value) const { qscilexertcl_event_isbase = value; }
    inline void setQsciLexerTCL_EventFilter_IsBase(bool value) const { qscilexertcl_eventfilter_isbase = value; }
    inline void setQsciLexerTCL_TimerEvent_IsBase(bool value) const { qscilexertcl_timerevent_isbase = value; }
    inline void setQsciLexerTCL_ChildEvent_IsBase(bool value) const { qscilexertcl_childevent_isbase = value; }
    inline void setQsciLexerTCL_CustomEvent_IsBase(bool value) const { qscilexertcl_customevent_isbase = value; }
    inline void setQsciLexerTCL_ConnectNotify_IsBase(bool value) const { qscilexertcl_connectnotify_isbase = value; }
    inline void setQsciLexerTCL_DisconnectNotify_IsBase(bool value) const { qscilexertcl_disconnectnotify_isbase = value; }
    inline void setQsciLexerTCL_TextAsBytes_IsBase(bool value) const { qscilexertcl_textasbytes_isbase = value; }
    inline void setQsciLexerTCL_BytesAsText_IsBase(bool value) const { qscilexertcl_bytesastext_isbase = value; }
    inline void setQsciLexerTCL_Sender_IsBase(bool value) const { qscilexertcl_sender_isbase = value; }
    inline void setQsciLexerTCL_SenderSignalIndex_IsBase(bool value) const { qscilexertcl_sendersignalindex_isbase = value; }
    inline void setQsciLexerTCL_Receivers_IsBase(bool value) const { qscilexertcl_receivers_isbase = value; }
    inline void setQsciLexerTCL_IsSignalConnected_IsBase(bool value) const { qscilexertcl_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertcl_metacall_isbase) {
            qscilexertcl_metacall_isbase = false;
            return QsciLexerTCL::qt_metacall(param1, param2, param3);
        } else if (qscilexertcl_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexertcl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertcl_language_callback != nullptr) {
            const char* callback_ret = qscilexertcl_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertcl_lexer_isbase) {
            qscilexertcl_lexer_isbase = false;
            return QsciLexerTCL::lexer();
        } else if (qscilexertcl_lexer_callback != nullptr) {
            const char* callback_ret = qscilexertcl_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerTCL::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertcl_lexerid_isbase) {
            qscilexertcl_lexerid_isbase = false;
            return QsciLexerTCL::lexerId();
        } else if (qscilexertcl_lexerid_callback != nullptr) {
            int callback_ret = qscilexertcl_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertcl_autocompletionfillups_isbase) {
            qscilexertcl_autocompletionfillups_isbase = false;
            return QsciLexerTCL::autoCompletionFillups();
        } else if (qscilexertcl_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexertcl_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerTCL::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertcl_autocompletionwordseparators_isbase) {
            qscilexertcl_autocompletionwordseparators_isbase = false;
            return QsciLexerTCL::autoCompletionWordSeparators();
        } else if (qscilexertcl_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexertcl_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerTCL::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertcl_blockend_isbase) {
            qscilexertcl_blockend_isbase = false;
            return QsciLexerTCL::blockEnd(style);
        } else if (qscilexertcl_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertcl_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertcl_blocklookback_isbase) {
            qscilexertcl_blocklookback_isbase = false;
            return QsciLexerTCL::blockLookback();
        } else if (qscilexertcl_blocklookback_callback != nullptr) {
            int callback_ret = qscilexertcl_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertcl_blockstart_isbase) {
            qscilexertcl_blockstart_isbase = false;
            return QsciLexerTCL::blockStart(style);
        } else if (qscilexertcl_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertcl_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertcl_blockstartkeyword_isbase) {
            qscilexertcl_blockstartkeyword_isbase = false;
            return QsciLexerTCL::blockStartKeyword(style);
        } else if (qscilexertcl_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexertcl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertcl_bracestyle_isbase) {
            qscilexertcl_bracestyle_isbase = false;
            return QsciLexerTCL::braceStyle();
        } else if (qscilexertcl_bracestyle_callback != nullptr) {
            int callback_ret = qscilexertcl_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertcl_casesensitive_isbase) {
            qscilexertcl_casesensitive_isbase = false;
            return QsciLexerTCL::caseSensitive();
        } else if (qscilexertcl_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexertcl_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerTCL::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertcl_color_isbase) {
            qscilexertcl_color_isbase = false;
            return QsciLexerTCL::color(style);
        } else if (qscilexertcl_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertcl_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertcl_eolfill_isbase) {
            qscilexertcl_eolfill_isbase = false;
            return QsciLexerTCL::eolFill(style);
        } else if (qscilexertcl_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertcl_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertcl_font_isbase) {
            qscilexertcl_font_isbase = false;
            return QsciLexerTCL::font(style);
        } else if (qscilexertcl_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertcl_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertcl_indentationguideview_isbase) {
            qscilexertcl_indentationguideview_isbase = false;
            return QsciLexerTCL::indentationGuideView();
        } else if (qscilexertcl_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexertcl_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertcl_keywords_isbase) {
            qscilexertcl_keywords_isbase = false;
            return QsciLexerTCL::keywords(set);
        } else if (qscilexertcl_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexertcl_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertcl_defaultstyle_isbase) {
            qscilexertcl_defaultstyle_isbase = false;
            return QsciLexerTCL::defaultStyle();
        } else if (qscilexertcl_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexertcl_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertcl_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexertcl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertcl_paper_isbase) {
            qscilexertcl_paper_isbase = false;
            return QsciLexerTCL::paper(style);
        } else if (qscilexertcl_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertcl_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertcl_defaultcolorwithstyle_isbase) {
            qscilexertcl_defaultcolorwithstyle_isbase = false;
            return QsciLexerTCL::defaultColor(style);
        } else if (qscilexertcl_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertcl_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertcl_defaulteolfill_isbase) {
            qscilexertcl_defaulteolfill_isbase = false;
            return QsciLexerTCL::defaultEolFill(style);
        } else if (qscilexertcl_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexertcl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertcl_defaultfontwithstyle_isbase) {
            qscilexertcl_defaultfontwithstyle_isbase = false;
            return QsciLexerTCL::defaultFont(style);
        } else if (qscilexertcl_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexertcl_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertcl_defaultpaperwithstyle_isbase) {
            qscilexertcl_defaultpaperwithstyle_isbase = false;
            return QsciLexerTCL::defaultPaper(style);
        } else if (qscilexertcl_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexertcl_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerTCL::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertcl_seteditor_isbase) {
            qscilexertcl_seteditor_isbase = false;
            QsciLexerTCL::setEditor(editor);
        } else if (qscilexertcl_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexertcl_seteditor_callback(this, cbval1);
        } else {
            QsciLexerTCL::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertcl_refreshproperties_isbase) {
            qscilexertcl_refreshproperties_isbase = false;
            QsciLexerTCL::refreshProperties();
        } else if (qscilexertcl_refreshproperties_callback != nullptr) {
            qscilexertcl_refreshproperties_callback();
        } else {
            QsciLexerTCL::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertcl_stylebitsneeded_isbase) {
            qscilexertcl_stylebitsneeded_isbase = false;
            return QsciLexerTCL::styleBitsNeeded();
        } else if (qscilexertcl_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexertcl_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertcl_wordcharacters_isbase) {
            qscilexertcl_wordcharacters_isbase = false;
            return QsciLexerTCL::wordCharacters();
        } else if (qscilexertcl_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexertcl_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerTCL::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertcl_setautoindentstyle_isbase) {
            qscilexertcl_setautoindentstyle_isbase = false;
            QsciLexerTCL::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexertcl_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexertcl_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerTCL::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertcl_setcolor_isbase) {
            qscilexertcl_setcolor_isbase = false;
            QsciLexerTCL::setColor(c, style);
        } else if (qscilexertcl_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertcl_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTCL::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertcl_seteolfill_isbase) {
            qscilexertcl_seteolfill_isbase = false;
            QsciLexerTCL::setEolFill(eoffill, style);
        } else if (qscilexertcl_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexertcl_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTCL::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertcl_setfont_isbase) {
            qscilexertcl_setfont_isbase = false;
            QsciLexerTCL::setFont(f, style);
        } else if (qscilexertcl_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexertcl_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTCL::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertcl_setpaper_isbase) {
            qscilexertcl_setpaper_isbase = false;
            QsciLexerTCL::setPaper(c, style);
        } else if (qscilexertcl_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexertcl_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerTCL::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertcl_readproperties_isbase) {
            qscilexertcl_readproperties_isbase = false;
            return QsciLexerTCL::readProperties(qs, prefix);
        } else if (qscilexertcl_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertcl_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTCL::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertcl_writeproperties_isbase) {
            qscilexertcl_writeproperties_isbase = false;
            return QsciLexerTCL::writeProperties(qs, prefix);
        } else if (qscilexertcl_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexertcl_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTCL::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertcl_event_isbase) {
            qscilexertcl_event_isbase = false;
            return QsciLexerTCL::event(event);
        } else if (qscilexertcl_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexertcl_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertcl_eventfilter_isbase) {
            qscilexertcl_eventfilter_isbase = false;
            return QsciLexerTCL::eventFilter(watched, event);
        } else if (qscilexertcl_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexertcl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerTCL::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertcl_timerevent_isbase) {
            qscilexertcl_timerevent_isbase = false;
            QsciLexerTCL::timerEvent(event);
        } else if (qscilexertcl_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexertcl_timerevent_callback(this, cbval1);
        } else {
            QsciLexerTCL::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertcl_childevent_isbase) {
            qscilexertcl_childevent_isbase = false;
            QsciLexerTCL::childEvent(event);
        } else if (qscilexertcl_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexertcl_childevent_callback(this, cbval1);
        } else {
            QsciLexerTCL::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertcl_customevent_isbase) {
            qscilexertcl_customevent_isbase = false;
            QsciLexerTCL::customEvent(event);
        } else if (qscilexertcl_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexertcl_customevent_callback(this, cbval1);
        } else {
            QsciLexerTCL::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertcl_connectnotify_isbase) {
            qscilexertcl_connectnotify_isbase = false;
            QsciLexerTCL::connectNotify(signal);
        } else if (qscilexertcl_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertcl_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerTCL::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertcl_disconnectnotify_isbase) {
            qscilexertcl_disconnectnotify_isbase = false;
            QsciLexerTCL::disconnectNotify(signal);
        } else if (qscilexertcl_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexertcl_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerTCL::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexertcl_textasbytes_isbase) {
            qscilexertcl_textasbytes_isbase = false;
            return QsciLexerTCL::textAsBytes(text);
        } else if (qscilexertcl_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexertcl_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerTCL::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexertcl_bytesastext_isbase) {
            qscilexertcl_bytesastext_isbase = false;
            return QsciLexerTCL::bytesAsText(bytes, size);
        } else if (qscilexertcl_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexertcl_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerTCL::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexertcl_sender_isbase) {
            qscilexertcl_sender_isbase = false;
            return QsciLexerTCL::sender();
        } else if (qscilexertcl_sender_callback != nullptr) {
            QObject* callback_ret = qscilexertcl_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerTCL::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexertcl_sendersignalindex_isbase) {
            qscilexertcl_sendersignalindex_isbase = false;
            return QsciLexerTCL::senderSignalIndex();
        } else if (qscilexertcl_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexertcl_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexertcl_receivers_isbase) {
            qscilexertcl_receivers_isbase = false;
            return QsciLexerTCL::receivers(signal);
        } else if (qscilexertcl_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexertcl_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerTCL::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexertcl_issignalconnected_isbase) {
            qscilexertcl_issignalconnected_isbase = false;
            return QsciLexerTCL::isSignalConnected(signal);
        } else if (qscilexertcl_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexertcl_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerTCL::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerTCL_ReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTCL_QBaseReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTCL_WriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTCL_QBaseWriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTCL_TimerEvent(QsciLexerTCL* self, QTimerEvent* event);
    friend void QsciLexerTCL_QBaseTimerEvent(QsciLexerTCL* self, QTimerEvent* event);
    friend void QsciLexerTCL_ChildEvent(QsciLexerTCL* self, QChildEvent* event);
    friend void QsciLexerTCL_QBaseChildEvent(QsciLexerTCL* self, QChildEvent* event);
    friend void QsciLexerTCL_CustomEvent(QsciLexerTCL* self, QEvent* event);
    friend void QsciLexerTCL_QBaseCustomEvent(QsciLexerTCL* self, QEvent* event);
    friend void QsciLexerTCL_ConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
    friend void QsciLexerTCL_QBaseConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
    friend void QsciLexerTCL_DisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
    friend void QsciLexerTCL_QBaseDisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerTCL_TextAsBytes(const QsciLexerTCL* self, const libqt_string text);
    friend libqt_string QsciLexerTCL_QBaseTextAsBytes(const QsciLexerTCL* self, const libqt_string text);
    friend libqt_string QsciLexerTCL_BytesAsText(const QsciLexerTCL* self, const char* bytes, int size);
    friend libqt_string QsciLexerTCL_QBaseBytesAsText(const QsciLexerTCL* self, const char* bytes, int size);
    friend QObject* QsciLexerTCL_Sender(const QsciLexerTCL* self);
    friend QObject* QsciLexerTCL_QBaseSender(const QsciLexerTCL* self);
    friend int QsciLexerTCL_SenderSignalIndex(const QsciLexerTCL* self);
    friend int QsciLexerTCL_QBaseSenderSignalIndex(const QsciLexerTCL* self);
    friend int QsciLexerTCL_Receivers(const QsciLexerTCL* self, const char* signal);
    friend int QsciLexerTCL_QBaseReceivers(const QsciLexerTCL* self, const char* signal);
    friend bool QsciLexerTCL_IsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal);
    friend bool QsciLexerTCL_QBaseIsSignalConnected(const QsciLexerTCL* self, const QMetaMethod* signal);
};

#endif
