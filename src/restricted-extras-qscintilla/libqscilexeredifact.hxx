#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEREDIFACT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXEREDIFACT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerEDIFACT so that we can call protected methods
class VirtualQsciLexerEDIFACT final : public QsciLexerEDIFACT {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerEDIFACT = true;

    // Virtual class public types (including callbacks)
    using QsciLexerEDIFACT_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerEDIFACT_Metacast_Callback = void* (*)(QsciLexerEDIFACT*, const char*);
    using QsciLexerEDIFACT_Metacall_Callback = int (*)(QsciLexerEDIFACT*, int, int, void**);
    using QsciLexerEDIFACT_Language_Callback = const char* (*)();
    using QsciLexerEDIFACT_Lexer_Callback = const char* (*)();
    using QsciLexerEDIFACT_LexerId_Callback = int (*)();
    using QsciLexerEDIFACT_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerEDIFACT_BlockEnd_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockLookback_Callback = int (*)();
    using QsciLexerEDIFACT_BlockStart_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockStartKeyword_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BraceStyle_Callback = int (*)();
    using QsciLexerEDIFACT_CaseSensitive_Callback = bool (*)();
    using QsciLexerEDIFACT_Color_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_EolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Font_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_IndentationGuideView_Callback = int (*)();
    using QsciLexerEDIFACT_Keywords_Callback = const char* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultStyle_Callback = int (*)();
    using QsciLexerEDIFACT_Description_Callback = const char* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Paper_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultColor2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultEolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultFont2_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultPaper2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetEditor_Callback = void (*)(QsciLexerEDIFACT*, QsciScintilla*);
    using QsciLexerEDIFACT_RefreshProperties_Callback = void (*)();
    using QsciLexerEDIFACT_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerEDIFACT_WordCharacters_Callback = const char* (*)();
    using QsciLexerEDIFACT_SetAutoIndentStyle_Callback = void (*)(QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetColor_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_SetEolFill_Callback = void (*)(QsciLexerEDIFACT*, bool, int);
    using QsciLexerEDIFACT_SetFont_Callback = void (*)(QsciLexerEDIFACT*, QFont*, int);
    using QsciLexerEDIFACT_SetPaper_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_ReadProperties_Callback = bool (*)(QsciLexerEDIFACT*, QSettings*, const char*);
    using QsciLexerEDIFACT_WriteProperties_Callback = bool (*)(const QsciLexerEDIFACT*, QSettings*, const char*);
    using QsciLexerEDIFACT_Event_Callback = bool (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_EventFilter_Callback = bool (*)(QsciLexerEDIFACT*, QObject*, QEvent*);
    using QsciLexerEDIFACT_TimerEvent_Callback = void (*)(QsciLexerEDIFACT*, QTimerEvent*);
    using QsciLexerEDIFACT_ChildEvent_Callback = void (*)(QsciLexerEDIFACT*, QChildEvent*);
    using QsciLexerEDIFACT_CustomEvent_Callback = void (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_ConnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT_DisconnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT_TextAsBytes_Callback = libqt_string (*)(const QsciLexerEDIFACT*, const char*);
    using QsciLexerEDIFACT_BytesAsText_Callback = const char* (*)(const QsciLexerEDIFACT*, const char*, int);
    using QsciLexerEDIFACT_Sender_Callback = QObject* (*)();
    using QsciLexerEDIFACT_SenderSignalIndex_Callback = int (*)();
    using QsciLexerEDIFACT_Receivers_Callback = int (*)(const QsciLexerEDIFACT*, const char*);
    using QsciLexerEDIFACT_IsSignalConnected_Callback = bool (*)(const QsciLexerEDIFACT*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerEDIFACT_MetaObject_Callback qscilexeredifact_metaobject_callback = nullptr;
    QsciLexerEDIFACT_Metacast_Callback qscilexeredifact_metacast_callback = nullptr;
    QsciLexerEDIFACT_Metacall_Callback qscilexeredifact_metacall_callback = nullptr;
    QsciLexerEDIFACT_Language_Callback qscilexeredifact_language_callback = nullptr;
    QsciLexerEDIFACT_Lexer_Callback qscilexeredifact_lexer_callback = nullptr;
    QsciLexerEDIFACT_LexerId_Callback qscilexeredifact_lexerid_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionFillups_Callback qscilexeredifact_autocompletionfillups_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback qscilexeredifact_autocompletionwordseparators_callback = nullptr;
    QsciLexerEDIFACT_BlockEnd_Callback qscilexeredifact_blockend_callback = nullptr;
    QsciLexerEDIFACT_BlockLookback_Callback qscilexeredifact_blocklookback_callback = nullptr;
    QsciLexerEDIFACT_BlockStart_Callback qscilexeredifact_blockstart_callback = nullptr;
    QsciLexerEDIFACT_BlockStartKeyword_Callback qscilexeredifact_blockstartkeyword_callback = nullptr;
    QsciLexerEDIFACT_BraceStyle_Callback qscilexeredifact_bracestyle_callback = nullptr;
    QsciLexerEDIFACT_CaseSensitive_Callback qscilexeredifact_casesensitive_callback = nullptr;
    QsciLexerEDIFACT_Color_Callback qscilexeredifact_color_callback = nullptr;
    QsciLexerEDIFACT_EolFill_Callback qscilexeredifact_eolfill_callback = nullptr;
    QsciLexerEDIFACT_Font_Callback qscilexeredifact_font_callback = nullptr;
    QsciLexerEDIFACT_IndentationGuideView_Callback qscilexeredifact_indentationguideview_callback = nullptr;
    QsciLexerEDIFACT_Keywords_Callback qscilexeredifact_keywords_callback = nullptr;
    QsciLexerEDIFACT_DefaultStyle_Callback qscilexeredifact_defaultstyle_callback = nullptr;
    QsciLexerEDIFACT_Description_Callback qscilexeredifact_description_callback = nullptr;
    QsciLexerEDIFACT_Paper_Callback qscilexeredifact_paper_callback = nullptr;
    QsciLexerEDIFACT_DefaultColor2_Callback qscilexeredifact_defaultcolor2_callback = nullptr;
    QsciLexerEDIFACT_DefaultEolFill_Callback qscilexeredifact_defaulteolfill_callback = nullptr;
    QsciLexerEDIFACT_DefaultFont2_Callback qscilexeredifact_defaultfont2_callback = nullptr;
    QsciLexerEDIFACT_DefaultPaper2_Callback qscilexeredifact_defaultpaper2_callback = nullptr;
    QsciLexerEDIFACT_SetEditor_Callback qscilexeredifact_seteditor_callback = nullptr;
    QsciLexerEDIFACT_RefreshProperties_Callback qscilexeredifact_refreshproperties_callback = nullptr;
    QsciLexerEDIFACT_StyleBitsNeeded_Callback qscilexeredifact_stylebitsneeded_callback = nullptr;
    QsciLexerEDIFACT_WordCharacters_Callback qscilexeredifact_wordcharacters_callback = nullptr;
    QsciLexerEDIFACT_SetAutoIndentStyle_Callback qscilexeredifact_setautoindentstyle_callback = nullptr;
    QsciLexerEDIFACT_SetColor_Callback qscilexeredifact_setcolor_callback = nullptr;
    QsciLexerEDIFACT_SetEolFill_Callback qscilexeredifact_seteolfill_callback = nullptr;
    QsciLexerEDIFACT_SetFont_Callback qscilexeredifact_setfont_callback = nullptr;
    QsciLexerEDIFACT_SetPaper_Callback qscilexeredifact_setpaper_callback = nullptr;
    QsciLexerEDIFACT_ReadProperties_Callback qscilexeredifact_readproperties_callback = nullptr;
    QsciLexerEDIFACT_WriteProperties_Callback qscilexeredifact_writeproperties_callback = nullptr;
    QsciLexerEDIFACT_Event_Callback qscilexeredifact_event_callback = nullptr;
    QsciLexerEDIFACT_EventFilter_Callback qscilexeredifact_eventfilter_callback = nullptr;
    QsciLexerEDIFACT_TimerEvent_Callback qscilexeredifact_timerevent_callback = nullptr;
    QsciLexerEDIFACT_ChildEvent_Callback qscilexeredifact_childevent_callback = nullptr;
    QsciLexerEDIFACT_CustomEvent_Callback qscilexeredifact_customevent_callback = nullptr;
    QsciLexerEDIFACT_ConnectNotify_Callback qscilexeredifact_connectnotify_callback = nullptr;
    QsciLexerEDIFACT_DisconnectNotify_Callback qscilexeredifact_disconnectnotify_callback = nullptr;
    QsciLexerEDIFACT_TextAsBytes_Callback qscilexeredifact_textasbytes_callback = nullptr;
    QsciLexerEDIFACT_BytesAsText_Callback qscilexeredifact_bytesastext_callback = nullptr;
    QsciLexerEDIFACT_Sender_Callback qscilexeredifact_sender_callback = nullptr;
    QsciLexerEDIFACT_SenderSignalIndex_Callback qscilexeredifact_sendersignalindex_callback = nullptr;
    QsciLexerEDIFACT_Receivers_Callback qscilexeredifact_receivers_callback = nullptr;
    QsciLexerEDIFACT_IsSignalConnected_Callback qscilexeredifact_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeredifact_metaobject_isbase = false;
    mutable bool qscilexeredifact_metacast_isbase = false;
    mutable bool qscilexeredifact_metacall_isbase = false;
    mutable bool qscilexeredifact_language_isbase = false;
    mutable bool qscilexeredifact_lexer_isbase = false;
    mutable bool qscilexeredifact_lexerid_isbase = false;
    mutable bool qscilexeredifact_autocompletionfillups_isbase = false;
    mutable bool qscilexeredifact_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeredifact_blockend_isbase = false;
    mutable bool qscilexeredifact_blocklookback_isbase = false;
    mutable bool qscilexeredifact_blockstart_isbase = false;
    mutable bool qscilexeredifact_blockstartkeyword_isbase = false;
    mutable bool qscilexeredifact_bracestyle_isbase = false;
    mutable bool qscilexeredifact_casesensitive_isbase = false;
    mutable bool qscilexeredifact_color_isbase = false;
    mutable bool qscilexeredifact_eolfill_isbase = false;
    mutable bool qscilexeredifact_font_isbase = false;
    mutable bool qscilexeredifact_indentationguideview_isbase = false;
    mutable bool qscilexeredifact_keywords_isbase = false;
    mutable bool qscilexeredifact_defaultstyle_isbase = false;
    mutable bool qscilexeredifact_description_isbase = false;
    mutable bool qscilexeredifact_paper_isbase = false;
    mutable bool qscilexeredifact_defaultcolor2_isbase = false;
    mutable bool qscilexeredifact_defaulteolfill_isbase = false;
    mutable bool qscilexeredifact_defaultfont2_isbase = false;
    mutable bool qscilexeredifact_defaultpaper2_isbase = false;
    mutable bool qscilexeredifact_seteditor_isbase = false;
    mutable bool qscilexeredifact_refreshproperties_isbase = false;
    mutable bool qscilexeredifact_stylebitsneeded_isbase = false;
    mutable bool qscilexeredifact_wordcharacters_isbase = false;
    mutable bool qscilexeredifact_setautoindentstyle_isbase = false;
    mutable bool qscilexeredifact_setcolor_isbase = false;
    mutable bool qscilexeredifact_seteolfill_isbase = false;
    mutable bool qscilexeredifact_setfont_isbase = false;
    mutable bool qscilexeredifact_setpaper_isbase = false;
    mutable bool qscilexeredifact_readproperties_isbase = false;
    mutable bool qscilexeredifact_writeproperties_isbase = false;
    mutable bool qscilexeredifact_event_isbase = false;
    mutable bool qscilexeredifact_eventfilter_isbase = false;
    mutable bool qscilexeredifact_timerevent_isbase = false;
    mutable bool qscilexeredifact_childevent_isbase = false;
    mutable bool qscilexeredifact_customevent_isbase = false;
    mutable bool qscilexeredifact_connectnotify_isbase = false;
    mutable bool qscilexeredifact_disconnectnotify_isbase = false;
    mutable bool qscilexeredifact_textasbytes_isbase = false;
    mutable bool qscilexeredifact_bytesastext_isbase = false;
    mutable bool qscilexeredifact_sender_isbase = false;
    mutable bool qscilexeredifact_sendersignalindex_isbase = false;
    mutable bool qscilexeredifact_receivers_isbase = false;
    mutable bool qscilexeredifact_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerEDIFACT() : QsciLexerEDIFACT() {};
    VirtualQsciLexerEDIFACT(QObject* parent) : QsciLexerEDIFACT(parent) {};

    // Callback setters
    inline void setQsciLexerEDIFACT_MetaObject_Callback(QsciLexerEDIFACT_MetaObject_Callback cb) { qscilexeredifact_metaobject_callback = cb; }
    inline void setQsciLexerEDIFACT_Metacast_Callback(QsciLexerEDIFACT_Metacast_Callback cb) { qscilexeredifact_metacast_callback = cb; }
    inline void setQsciLexerEDIFACT_Metacall_Callback(QsciLexerEDIFACT_Metacall_Callback cb) { qscilexeredifact_metacall_callback = cb; }
    inline void setQsciLexerEDIFACT_Language_Callback(QsciLexerEDIFACT_Language_Callback cb) { qscilexeredifact_language_callback = cb; }
    inline void setQsciLexerEDIFACT_Lexer_Callback(QsciLexerEDIFACT_Lexer_Callback cb) { qscilexeredifact_lexer_callback = cb; }
    inline void setQsciLexerEDIFACT_LexerId_Callback(QsciLexerEDIFACT_LexerId_Callback cb) { qscilexeredifact_lexerid_callback = cb; }
    inline void setQsciLexerEDIFACT_AutoCompletionFillups_Callback(QsciLexerEDIFACT_AutoCompletionFillups_Callback cb) { qscilexeredifact_autocompletionfillups_callback = cb; }
    inline void setQsciLexerEDIFACT_AutoCompletionWordSeparators_Callback(QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback cb) { qscilexeredifact_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockEnd_Callback(QsciLexerEDIFACT_BlockEnd_Callback cb) { qscilexeredifact_blockend_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockLookback_Callback(QsciLexerEDIFACT_BlockLookback_Callback cb) { qscilexeredifact_blocklookback_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockStart_Callback(QsciLexerEDIFACT_BlockStart_Callback cb) { qscilexeredifact_blockstart_callback = cb; }
    inline void setQsciLexerEDIFACT_BlockStartKeyword_Callback(QsciLexerEDIFACT_BlockStartKeyword_Callback cb) { qscilexeredifact_blockstartkeyword_callback = cb; }
    inline void setQsciLexerEDIFACT_BraceStyle_Callback(QsciLexerEDIFACT_BraceStyle_Callback cb) { qscilexeredifact_bracestyle_callback = cb; }
    inline void setQsciLexerEDIFACT_CaseSensitive_Callback(QsciLexerEDIFACT_CaseSensitive_Callback cb) { qscilexeredifact_casesensitive_callback = cb; }
    inline void setQsciLexerEDIFACT_Color_Callback(QsciLexerEDIFACT_Color_Callback cb) { qscilexeredifact_color_callback = cb; }
    inline void setQsciLexerEDIFACT_EolFill_Callback(QsciLexerEDIFACT_EolFill_Callback cb) { qscilexeredifact_eolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_Font_Callback(QsciLexerEDIFACT_Font_Callback cb) { qscilexeredifact_font_callback = cb; }
    inline void setQsciLexerEDIFACT_IndentationGuideView_Callback(QsciLexerEDIFACT_IndentationGuideView_Callback cb) { qscilexeredifact_indentationguideview_callback = cb; }
    inline void setQsciLexerEDIFACT_Keywords_Callback(QsciLexerEDIFACT_Keywords_Callback cb) { qscilexeredifact_keywords_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultStyle_Callback(QsciLexerEDIFACT_DefaultStyle_Callback cb) { qscilexeredifact_defaultstyle_callback = cb; }
    inline void setQsciLexerEDIFACT_Description_Callback(QsciLexerEDIFACT_Description_Callback cb) { qscilexeredifact_description_callback = cb; }
    inline void setQsciLexerEDIFACT_Paper_Callback(QsciLexerEDIFACT_Paper_Callback cb) { qscilexeredifact_paper_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultColor2_Callback(QsciLexerEDIFACT_DefaultColor2_Callback cb) { qscilexeredifact_defaultcolor2_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultEolFill_Callback(QsciLexerEDIFACT_DefaultEolFill_Callback cb) { qscilexeredifact_defaulteolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultFont2_Callback(QsciLexerEDIFACT_DefaultFont2_Callback cb) { qscilexeredifact_defaultfont2_callback = cb; }
    inline void setQsciLexerEDIFACT_DefaultPaper2_Callback(QsciLexerEDIFACT_DefaultPaper2_Callback cb) { qscilexeredifact_defaultpaper2_callback = cb; }
    inline void setQsciLexerEDIFACT_SetEditor_Callback(QsciLexerEDIFACT_SetEditor_Callback cb) { qscilexeredifact_seteditor_callback = cb; }
    inline void setQsciLexerEDIFACT_RefreshProperties_Callback(QsciLexerEDIFACT_RefreshProperties_Callback cb) { qscilexeredifact_refreshproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_StyleBitsNeeded_Callback(QsciLexerEDIFACT_StyleBitsNeeded_Callback cb) { qscilexeredifact_stylebitsneeded_callback = cb; }
    inline void setQsciLexerEDIFACT_WordCharacters_Callback(QsciLexerEDIFACT_WordCharacters_Callback cb) { qscilexeredifact_wordcharacters_callback = cb; }
    inline void setQsciLexerEDIFACT_SetAutoIndentStyle_Callback(QsciLexerEDIFACT_SetAutoIndentStyle_Callback cb) { qscilexeredifact_setautoindentstyle_callback = cb; }
    inline void setQsciLexerEDIFACT_SetColor_Callback(QsciLexerEDIFACT_SetColor_Callback cb) { qscilexeredifact_setcolor_callback = cb; }
    inline void setQsciLexerEDIFACT_SetEolFill_Callback(QsciLexerEDIFACT_SetEolFill_Callback cb) { qscilexeredifact_seteolfill_callback = cb; }
    inline void setQsciLexerEDIFACT_SetFont_Callback(QsciLexerEDIFACT_SetFont_Callback cb) { qscilexeredifact_setfont_callback = cb; }
    inline void setQsciLexerEDIFACT_SetPaper_Callback(QsciLexerEDIFACT_SetPaper_Callback cb) { qscilexeredifact_setpaper_callback = cb; }
    inline void setQsciLexerEDIFACT_ReadProperties_Callback(QsciLexerEDIFACT_ReadProperties_Callback cb) { qscilexeredifact_readproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_WriteProperties_Callback(QsciLexerEDIFACT_WriteProperties_Callback cb) { qscilexeredifact_writeproperties_callback = cb; }
    inline void setQsciLexerEDIFACT_Event_Callback(QsciLexerEDIFACT_Event_Callback cb) { qscilexeredifact_event_callback = cb; }
    inline void setQsciLexerEDIFACT_EventFilter_Callback(QsciLexerEDIFACT_EventFilter_Callback cb) { qscilexeredifact_eventfilter_callback = cb; }
    inline void setQsciLexerEDIFACT_TimerEvent_Callback(QsciLexerEDIFACT_TimerEvent_Callback cb) { qscilexeredifact_timerevent_callback = cb; }
    inline void setQsciLexerEDIFACT_ChildEvent_Callback(QsciLexerEDIFACT_ChildEvent_Callback cb) { qscilexeredifact_childevent_callback = cb; }
    inline void setQsciLexerEDIFACT_CustomEvent_Callback(QsciLexerEDIFACT_CustomEvent_Callback cb) { qscilexeredifact_customevent_callback = cb; }
    inline void setQsciLexerEDIFACT_ConnectNotify_Callback(QsciLexerEDIFACT_ConnectNotify_Callback cb) { qscilexeredifact_connectnotify_callback = cb; }
    inline void setQsciLexerEDIFACT_DisconnectNotify_Callback(QsciLexerEDIFACT_DisconnectNotify_Callback cb) { qscilexeredifact_disconnectnotify_callback = cb; }
    inline void setQsciLexerEDIFACT_TextAsBytes_Callback(QsciLexerEDIFACT_TextAsBytes_Callback cb) { qscilexeredifact_textasbytes_callback = cb; }
    inline void setQsciLexerEDIFACT_BytesAsText_Callback(QsciLexerEDIFACT_BytesAsText_Callback cb) { qscilexeredifact_bytesastext_callback = cb; }
    inline void setQsciLexerEDIFACT_Sender_Callback(QsciLexerEDIFACT_Sender_Callback cb) { qscilexeredifact_sender_callback = cb; }
    inline void setQsciLexerEDIFACT_SenderSignalIndex_Callback(QsciLexerEDIFACT_SenderSignalIndex_Callback cb) { qscilexeredifact_sendersignalindex_callback = cb; }
    inline void setQsciLexerEDIFACT_Receivers_Callback(QsciLexerEDIFACT_Receivers_Callback cb) { qscilexeredifact_receivers_callback = cb; }
    inline void setQsciLexerEDIFACT_IsSignalConnected_Callback(QsciLexerEDIFACT_IsSignalConnected_Callback cb) { qscilexeredifact_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerEDIFACT_MetaObject_IsBase(bool value) const { qscilexeredifact_metaobject_isbase = value; }
    inline void setQsciLexerEDIFACT_Metacast_IsBase(bool value) const { qscilexeredifact_metacast_isbase = value; }
    inline void setQsciLexerEDIFACT_Metacall_IsBase(bool value) const { qscilexeredifact_metacall_isbase = value; }
    inline void setQsciLexerEDIFACT_Language_IsBase(bool value) const { qscilexeredifact_language_isbase = value; }
    inline void setQsciLexerEDIFACT_Lexer_IsBase(bool value) const { qscilexeredifact_lexer_isbase = value; }
    inline void setQsciLexerEDIFACT_LexerId_IsBase(bool value) const { qscilexeredifact_lexerid_isbase = value; }
    inline void setQsciLexerEDIFACT_AutoCompletionFillups_IsBase(bool value) const { qscilexeredifact_autocompletionfillups_isbase = value; }
    inline void setQsciLexerEDIFACT_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeredifact_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockEnd_IsBase(bool value) const { qscilexeredifact_blockend_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockLookback_IsBase(bool value) const { qscilexeredifact_blocklookback_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockStart_IsBase(bool value) const { qscilexeredifact_blockstart_isbase = value; }
    inline void setQsciLexerEDIFACT_BlockStartKeyword_IsBase(bool value) const { qscilexeredifact_blockstartkeyword_isbase = value; }
    inline void setQsciLexerEDIFACT_BraceStyle_IsBase(bool value) const { qscilexeredifact_bracestyle_isbase = value; }
    inline void setQsciLexerEDIFACT_CaseSensitive_IsBase(bool value) const { qscilexeredifact_casesensitive_isbase = value; }
    inline void setQsciLexerEDIFACT_Color_IsBase(bool value) const { qscilexeredifact_color_isbase = value; }
    inline void setQsciLexerEDIFACT_EolFill_IsBase(bool value) const { qscilexeredifact_eolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_Font_IsBase(bool value) const { qscilexeredifact_font_isbase = value; }
    inline void setQsciLexerEDIFACT_IndentationGuideView_IsBase(bool value) const { qscilexeredifact_indentationguideview_isbase = value; }
    inline void setQsciLexerEDIFACT_Keywords_IsBase(bool value) const { qscilexeredifact_keywords_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultStyle_IsBase(bool value) const { qscilexeredifact_defaultstyle_isbase = value; }
    inline void setQsciLexerEDIFACT_Description_IsBase(bool value) const { qscilexeredifact_description_isbase = value; }
    inline void setQsciLexerEDIFACT_Paper_IsBase(bool value) const { qscilexeredifact_paper_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultColor2_IsBase(bool value) const { qscilexeredifact_defaultcolor2_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultEolFill_IsBase(bool value) const { qscilexeredifact_defaulteolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultFont2_IsBase(bool value) const { qscilexeredifact_defaultfont2_isbase = value; }
    inline void setQsciLexerEDIFACT_DefaultPaper2_IsBase(bool value) const { qscilexeredifact_defaultpaper2_isbase = value; }
    inline void setQsciLexerEDIFACT_SetEditor_IsBase(bool value) const { qscilexeredifact_seteditor_isbase = value; }
    inline void setQsciLexerEDIFACT_RefreshProperties_IsBase(bool value) const { qscilexeredifact_refreshproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_StyleBitsNeeded_IsBase(bool value) const { qscilexeredifact_stylebitsneeded_isbase = value; }
    inline void setQsciLexerEDIFACT_WordCharacters_IsBase(bool value) const { qscilexeredifact_wordcharacters_isbase = value; }
    inline void setQsciLexerEDIFACT_SetAutoIndentStyle_IsBase(bool value) const { qscilexeredifact_setautoindentstyle_isbase = value; }
    inline void setQsciLexerEDIFACT_SetColor_IsBase(bool value) const { qscilexeredifact_setcolor_isbase = value; }
    inline void setQsciLexerEDIFACT_SetEolFill_IsBase(bool value) const { qscilexeredifact_seteolfill_isbase = value; }
    inline void setQsciLexerEDIFACT_SetFont_IsBase(bool value) const { qscilexeredifact_setfont_isbase = value; }
    inline void setQsciLexerEDIFACT_SetPaper_IsBase(bool value) const { qscilexeredifact_setpaper_isbase = value; }
    inline void setQsciLexerEDIFACT_ReadProperties_IsBase(bool value) const { qscilexeredifact_readproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_WriteProperties_IsBase(bool value) const { qscilexeredifact_writeproperties_isbase = value; }
    inline void setQsciLexerEDIFACT_Event_IsBase(bool value) const { qscilexeredifact_event_isbase = value; }
    inline void setQsciLexerEDIFACT_EventFilter_IsBase(bool value) const { qscilexeredifact_eventfilter_isbase = value; }
    inline void setQsciLexerEDIFACT_TimerEvent_IsBase(bool value) const { qscilexeredifact_timerevent_isbase = value; }
    inline void setQsciLexerEDIFACT_ChildEvent_IsBase(bool value) const { qscilexeredifact_childevent_isbase = value; }
    inline void setQsciLexerEDIFACT_CustomEvent_IsBase(bool value) const { qscilexeredifact_customevent_isbase = value; }
    inline void setQsciLexerEDIFACT_ConnectNotify_IsBase(bool value) const { qscilexeredifact_connectnotify_isbase = value; }
    inline void setQsciLexerEDIFACT_DisconnectNotify_IsBase(bool value) const { qscilexeredifact_disconnectnotify_isbase = value; }
    inline void setQsciLexerEDIFACT_TextAsBytes_IsBase(bool value) const { qscilexeredifact_textasbytes_isbase = value; }
    inline void setQsciLexerEDIFACT_BytesAsText_IsBase(bool value) const { qscilexeredifact_bytesastext_isbase = value; }
    inline void setQsciLexerEDIFACT_Sender_IsBase(bool value) const { qscilexeredifact_sender_isbase = value; }
    inline void setQsciLexerEDIFACT_SenderSignalIndex_IsBase(bool value) const { qscilexeredifact_sendersignalindex_isbase = value; }
    inline void setQsciLexerEDIFACT_Receivers_IsBase(bool value) const { qscilexeredifact_receivers_isbase = value; }
    inline void setQsciLexerEDIFACT_IsSignalConnected_IsBase(bool value) const { qscilexeredifact_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeredifact_metaobject_isbase) {
            qscilexeredifact_metaobject_isbase = false;
            return QsciLexerEDIFACT::metaObject();
        }
        auto metaobject_cb = qscilexeredifact_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeredifact_metacast_isbase) {
            qscilexeredifact_metacast_isbase = false;
            return QsciLexerEDIFACT::qt_metacast(param1);
        }
        auto metacast_cb = qscilexeredifact_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeredifact_metacall_isbase) {
            qscilexeredifact_metacall_isbase = false;
            return QsciLexerEDIFACT::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexeredifact_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexeredifact_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeredifact_lexer_isbase) {
            qscilexeredifact_lexer_isbase = false;
            return QsciLexerEDIFACT::lexer();
        }
        auto lexer_cb = qscilexeredifact_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeredifact_lexerid_isbase) {
            qscilexeredifact_lexerid_isbase = false;
            return QsciLexerEDIFACT::lexerId();
        }
        auto lexerid_cb = qscilexeredifact_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeredifact_autocompletionfillups_isbase) {
            qscilexeredifact_autocompletionfillups_isbase = false;
            return QsciLexerEDIFACT::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexeredifact_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeredifact_autocompletionwordseparators_isbase) {
            qscilexeredifact_autocompletionwordseparators_isbase = false;
            return QsciLexerEDIFACT::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexeredifact_autocompletionwordseparators_callback;
        if (autocompletionwordseparators_cb) {
            const char** callback_ret = autocompletionwordseparators_cb();
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QsciLexerEDIFACT::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeredifact_blockend_isbase) {
            qscilexeredifact_blockend_isbase = false;
            return QsciLexerEDIFACT::blockEnd(style);
        }
        auto blockend_cb = qscilexeredifact_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeredifact_blocklookback_isbase) {
            qscilexeredifact_blocklookback_isbase = false;
            return QsciLexerEDIFACT::blockLookback();
        }
        auto blocklookback_cb = qscilexeredifact_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeredifact_blockstart_isbase) {
            qscilexeredifact_blockstart_isbase = false;
            return QsciLexerEDIFACT::blockStart(style);
        }
        auto blockstart_cb = qscilexeredifact_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeredifact_blockstartkeyword_isbase) {
            qscilexeredifact_blockstartkeyword_isbase = false;
            return QsciLexerEDIFACT::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexeredifact_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeredifact_bracestyle_isbase) {
            qscilexeredifact_bracestyle_isbase = false;
            return QsciLexerEDIFACT::braceStyle();
        }
        auto bracestyle_cb = qscilexeredifact_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeredifact_casesensitive_isbase) {
            qscilexeredifact_casesensitive_isbase = false;
            return QsciLexerEDIFACT::caseSensitive();
        }
        auto casesensitive_cb = qscilexeredifact_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeredifact_color_isbase) {
            qscilexeredifact_color_isbase = false;
            return QsciLexerEDIFACT::color(style);
        }
        auto color_cb = qscilexeredifact_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeredifact_eolfill_isbase) {
            qscilexeredifact_eolfill_isbase = false;
            return QsciLexerEDIFACT::eolFill(style);
        }
        auto eolfill_cb = qscilexeredifact_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeredifact_font_isbase) {
            qscilexeredifact_font_isbase = false;
            return QsciLexerEDIFACT::font(style);
        }
        auto font_cb = qscilexeredifact_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeredifact_indentationguideview_isbase) {
            qscilexeredifact_indentationguideview_isbase = false;
            return QsciLexerEDIFACT::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexeredifact_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeredifact_keywords_isbase) {
            qscilexeredifact_keywords_isbase = false;
            return QsciLexerEDIFACT::keywords(set);
        }
        auto keywords_cb = qscilexeredifact_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeredifact_defaultstyle_isbase) {
            qscilexeredifact_defaultstyle_isbase = false;
            return QsciLexerEDIFACT::defaultStyle();
        }
        auto defaultstyle_cb = qscilexeredifact_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexeredifact_description_callback;
        if (description_cb) {
            int cbval1 = style;

            const char* callback_ret = description_cb(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeredifact_paper_isbase) {
            qscilexeredifact_paper_isbase = false;
            return QsciLexerEDIFACT::paper(style);
        }
        auto paper_cb = qscilexeredifact_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeredifact_defaultcolor2_isbase) {
            qscilexeredifact_defaultcolor2_isbase = false;
            return QsciLexerEDIFACT::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexeredifact_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeredifact_defaulteolfill_isbase) {
            qscilexeredifact_defaulteolfill_isbase = false;
            return QsciLexerEDIFACT::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexeredifact_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeredifact_defaultfont2_isbase) {
            qscilexeredifact_defaultfont2_isbase = false;
            return QsciLexerEDIFACT::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexeredifact_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeredifact_defaultpaper2_isbase) {
            qscilexeredifact_defaultpaper2_isbase = false;
            return QsciLexerEDIFACT::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexeredifact_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerEDIFACT::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeredifact_seteditor_isbase) {
            qscilexeredifact_seteditor_isbase = false;
            QsciLexerEDIFACT::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexeredifact_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeredifact_refreshproperties_isbase) {
            qscilexeredifact_refreshproperties_isbase = false;
            QsciLexerEDIFACT::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexeredifact_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerEDIFACT::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeredifact_stylebitsneeded_isbase) {
            qscilexeredifact_stylebitsneeded_isbase = false;
            return QsciLexerEDIFACT::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexeredifact_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeredifact_wordcharacters_isbase) {
            qscilexeredifact_wordcharacters_isbase = false;
            return QsciLexerEDIFACT::wordCharacters();
        }
        auto wordcharacters_cb = qscilexeredifact_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeredifact_setautoindentstyle_isbase) {
            qscilexeredifact_setautoindentstyle_isbase = false;
            QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexeredifact_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeredifact_setcolor_isbase) {
            qscilexeredifact_setcolor_isbase = false;
            QsciLexerEDIFACT::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexeredifact_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeredifact_seteolfill_isbase) {
            qscilexeredifact_seteolfill_isbase = false;
            QsciLexerEDIFACT::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexeredifact_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeredifact_setfont_isbase) {
            qscilexeredifact_setfont_isbase = false;
            QsciLexerEDIFACT::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexeredifact_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeredifact_setpaper_isbase) {
            qscilexeredifact_setpaper_isbase = false;
            QsciLexerEDIFACT::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexeredifact_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeredifact_readproperties_isbase) {
            qscilexeredifact_readproperties_isbase = false;
            return QsciLexerEDIFACT::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexeredifact_readproperties_callback;
        if (readproperties_cb) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;

            bool callback_ret = readproperties_cb(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerEDIFACT::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeredifact_writeproperties_isbase) {
            qscilexeredifact_writeproperties_isbase = false;
            return QsciLexerEDIFACT::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexeredifact_writeproperties_callback;
        if (writeproperties_cb) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;

            bool callback_ret = writeproperties_cb(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerEDIFACT::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeredifact_event_isbase) {
            qscilexeredifact_event_isbase = false;
            return QsciLexerEDIFACT::event(event);
        }
        auto event_cb = qscilexeredifact_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeredifact_eventfilter_isbase) {
            qscilexeredifact_eventfilter_isbase = false;
            return QsciLexerEDIFACT::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexeredifact_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerEDIFACT::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeredifact_timerevent_isbase) {
            qscilexeredifact_timerevent_isbase = false;
            QsciLexerEDIFACT::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexeredifact_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeredifact_childevent_isbase) {
            qscilexeredifact_childevent_isbase = false;
            QsciLexerEDIFACT::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexeredifact_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeredifact_customevent_isbase) {
            qscilexeredifact_customevent_isbase = false;
            QsciLexerEDIFACT::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexeredifact_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_connectnotify_isbase) {
            qscilexeredifact_connectnotify_isbase = false;
            QsciLexerEDIFACT::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexeredifact_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_disconnectnotify_isbase) {
            qscilexeredifact_disconnectnotify_isbase = false;
            QsciLexerEDIFACT::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexeredifact_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexeredifact_textasbytes_isbase) {
            qscilexeredifact_textasbytes_isbase = false;
            return QsciLexerEDIFACT::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexeredifact_textasbytes_callback;
        if (textasbytes_cb) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval1 = text_str;

            libqt_string callback_ret = textasbytes_cb(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            libqt_free(text_str);
            return callback_ret_QByteArray;
        }
        return QsciLexerEDIFACT::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexeredifact_bytesastext_isbase) {
            qscilexeredifact_bytesastext_isbase = false;
            return QsciLexerEDIFACT::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexeredifact_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerEDIFACT::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeredifact_sender_isbase) {
            qscilexeredifact_sender_isbase = false;
            return QsciLexerEDIFACT::sender();
        }
        auto sender_cb = qscilexeredifact_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerEDIFACT::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeredifact_sendersignalindex_isbase) {
            qscilexeredifact_sendersignalindex_isbase = false;
            return QsciLexerEDIFACT::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexeredifact_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeredifact_receivers_isbase) {
            qscilexeredifact_receivers_isbase = false;
            return QsciLexerEDIFACT::receivers(signal);
        }
        auto receivers_cb = qscilexeredifact_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeredifact_issignalconnected_isbase) {
            qscilexeredifact_issignalconnected_isbase = false;
            return QsciLexerEDIFACT::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexeredifact_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_SuperReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_SuperWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
    friend void QsciLexerEDIFACT_SuperTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
    friend void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
    friend void QsciLexerEDIFACT_SuperChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
    friend void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event);
    friend void QsciLexerEDIFACT_SuperCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
    friend void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_SuperConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_SuperDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerEDIFACT_TextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
    friend libqt_string QsciLexerEDIFACT_SuperTextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text);
    friend libqt_string QsciLexerEDIFACT_BytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
    friend libqt_string QsciLexerEDIFACT_SuperBytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size);
    friend QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self);
    friend QObject* QsciLexerEDIFACT_SuperSender(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_SuperSenderSignalIndex(const QsciLexerEDIFACT* self);
    friend int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal);
    friend int QsciLexerEDIFACT_SuperReceivers(const QsciLexerEDIFACT* self, const char* signal);
    friend bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend bool QsciLexerEDIFACT_SuperIsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal);
};

#endif
