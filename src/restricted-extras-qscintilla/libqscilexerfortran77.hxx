#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN77_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERFORTRAN77_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerFortran77 so that we can call protected methods
class VirtualQsciLexerFortran77 final : public QsciLexerFortran77 {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerFortran77 = true;

    // Virtual class public types (including callbacks)
    using QsciLexerFortran77_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerFortran77_Metacast_Callback = void* (*)(QsciLexerFortran77*, const char*);
    using QsciLexerFortran77_Metacall_Callback = int (*)(QsciLexerFortran77*, int, int, void**);
    using QsciLexerFortran77_SetFoldCompact_Callback = void (*)(QsciLexerFortran77*, bool);
    using QsciLexerFortran77_Language_Callback = const char* (*)();
    using QsciLexerFortran77_Lexer_Callback = const char* (*)();
    using QsciLexerFortran77_LexerId_Callback = int (*)();
    using QsciLexerFortran77_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerFortran77_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerFortran77_BlockEnd_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockLookback_Callback = int (*)();
    using QsciLexerFortran77_BlockStart_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockStartKeyword_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BraceStyle_Callback = int (*)();
    using QsciLexerFortran77_CaseSensitive_Callback = bool (*)();
    using QsciLexerFortran77_Color_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_EolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Font_Callback = QFont* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_IndentationGuideView_Callback = int (*)();
    using QsciLexerFortran77_Keywords_Callback = const char* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultStyle_Callback = int (*)();
    using QsciLexerFortran77_Description_Callback = const char* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Paper_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultColor2_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultEolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultFont2_Callback = QFont* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultPaper2_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetEditor_Callback = void (*)(QsciLexerFortran77*, QsciScintilla*);
    using QsciLexerFortran77_RefreshProperties_Callback = void (*)();
    using QsciLexerFortran77_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerFortran77_WordCharacters_Callback = const char* (*)();
    using QsciLexerFortran77_SetAutoIndentStyle_Callback = void (*)(QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetColor_Callback = void (*)(QsciLexerFortran77*, QColor*, int);
    using QsciLexerFortran77_SetEolFill_Callback = void (*)(QsciLexerFortran77*, bool, int);
    using QsciLexerFortran77_SetFont_Callback = void (*)(QsciLexerFortran77*, QFont*, int);
    using QsciLexerFortran77_SetPaper_Callback = void (*)(QsciLexerFortran77*, QColor*, int);
    using QsciLexerFortran77_ReadProperties_Callback = bool (*)(QsciLexerFortran77*, QSettings*, const char*);
    using QsciLexerFortran77_WriteProperties_Callback = bool (*)(const QsciLexerFortran77*, QSettings*, const char*);
    using QsciLexerFortran77_Event_Callback = bool (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_EventFilter_Callback = bool (*)(QsciLexerFortran77*, QObject*, QEvent*);
    using QsciLexerFortran77_TimerEvent_Callback = void (*)(QsciLexerFortran77*, QTimerEvent*);
    using QsciLexerFortran77_ChildEvent_Callback = void (*)(QsciLexerFortran77*, QChildEvent*);
    using QsciLexerFortran77_CustomEvent_Callback = void (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_ConnectNotify_Callback = void (*)(QsciLexerFortran77*, QMetaMethod*);
    using QsciLexerFortran77_DisconnectNotify_Callback = void (*)(QsciLexerFortran77*, QMetaMethod*);
    using QsciLexerFortran77_TextAsBytes_Callback = libqt_string (*)(const QsciLexerFortran77*, const char*);
    using QsciLexerFortran77_BytesAsText_Callback = const char* (*)(const QsciLexerFortran77*, const char*, int);
    using QsciLexerFortran77_Sender_Callback = QObject* (*)();
    using QsciLexerFortran77_SenderSignalIndex_Callback = int (*)();
    using QsciLexerFortran77_Receivers_Callback = int (*)(const QsciLexerFortran77*, const char*);
    using QsciLexerFortran77_IsSignalConnected_Callback = bool (*)(const QsciLexerFortran77*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerFortran77_MetaObject_Callback qscilexerfortran77_metaobject_callback = nullptr;
    QsciLexerFortran77_Metacast_Callback qscilexerfortran77_metacast_callback = nullptr;
    QsciLexerFortran77_Metacall_Callback qscilexerfortran77_metacall_callback = nullptr;
    QsciLexerFortran77_SetFoldCompact_Callback qscilexerfortran77_setfoldcompact_callback = nullptr;
    QsciLexerFortran77_Language_Callback qscilexerfortran77_language_callback = nullptr;
    QsciLexerFortran77_Lexer_Callback qscilexerfortran77_lexer_callback = nullptr;
    QsciLexerFortran77_LexerId_Callback qscilexerfortran77_lexerid_callback = nullptr;
    QsciLexerFortran77_AutoCompletionFillups_Callback qscilexerfortran77_autocompletionfillups_callback = nullptr;
    QsciLexerFortran77_AutoCompletionWordSeparators_Callback qscilexerfortran77_autocompletionwordseparators_callback = nullptr;
    QsciLexerFortran77_BlockEnd_Callback qscilexerfortran77_blockend_callback = nullptr;
    QsciLexerFortran77_BlockLookback_Callback qscilexerfortran77_blocklookback_callback = nullptr;
    QsciLexerFortran77_BlockStart_Callback qscilexerfortran77_blockstart_callback = nullptr;
    QsciLexerFortran77_BlockStartKeyword_Callback qscilexerfortran77_blockstartkeyword_callback = nullptr;
    QsciLexerFortran77_BraceStyle_Callback qscilexerfortran77_bracestyle_callback = nullptr;
    QsciLexerFortran77_CaseSensitive_Callback qscilexerfortran77_casesensitive_callback = nullptr;
    QsciLexerFortran77_Color_Callback qscilexerfortran77_color_callback = nullptr;
    QsciLexerFortran77_EolFill_Callback qscilexerfortran77_eolfill_callback = nullptr;
    QsciLexerFortran77_Font_Callback qscilexerfortran77_font_callback = nullptr;
    QsciLexerFortran77_IndentationGuideView_Callback qscilexerfortran77_indentationguideview_callback = nullptr;
    QsciLexerFortran77_Keywords_Callback qscilexerfortran77_keywords_callback = nullptr;
    QsciLexerFortran77_DefaultStyle_Callback qscilexerfortran77_defaultstyle_callback = nullptr;
    QsciLexerFortran77_Description_Callback qscilexerfortran77_description_callback = nullptr;
    QsciLexerFortran77_Paper_Callback qscilexerfortran77_paper_callback = nullptr;
    QsciLexerFortran77_DefaultColor2_Callback qscilexerfortran77_defaultcolor2_callback = nullptr;
    QsciLexerFortran77_DefaultEolFill_Callback qscilexerfortran77_defaulteolfill_callback = nullptr;
    QsciLexerFortran77_DefaultFont2_Callback qscilexerfortran77_defaultfont2_callback = nullptr;
    QsciLexerFortran77_DefaultPaper2_Callback qscilexerfortran77_defaultpaper2_callback = nullptr;
    QsciLexerFortran77_SetEditor_Callback qscilexerfortran77_seteditor_callback = nullptr;
    QsciLexerFortran77_RefreshProperties_Callback qscilexerfortran77_refreshproperties_callback = nullptr;
    QsciLexerFortran77_StyleBitsNeeded_Callback qscilexerfortran77_stylebitsneeded_callback = nullptr;
    QsciLexerFortran77_WordCharacters_Callback qscilexerfortran77_wordcharacters_callback = nullptr;
    QsciLexerFortran77_SetAutoIndentStyle_Callback qscilexerfortran77_setautoindentstyle_callback = nullptr;
    QsciLexerFortran77_SetColor_Callback qscilexerfortran77_setcolor_callback = nullptr;
    QsciLexerFortran77_SetEolFill_Callback qscilexerfortran77_seteolfill_callback = nullptr;
    QsciLexerFortran77_SetFont_Callback qscilexerfortran77_setfont_callback = nullptr;
    QsciLexerFortran77_SetPaper_Callback qscilexerfortran77_setpaper_callback = nullptr;
    QsciLexerFortran77_ReadProperties_Callback qscilexerfortran77_readproperties_callback = nullptr;
    QsciLexerFortran77_WriteProperties_Callback qscilexerfortran77_writeproperties_callback = nullptr;
    QsciLexerFortran77_Event_Callback qscilexerfortran77_event_callback = nullptr;
    QsciLexerFortran77_EventFilter_Callback qscilexerfortran77_eventfilter_callback = nullptr;
    QsciLexerFortran77_TimerEvent_Callback qscilexerfortran77_timerevent_callback = nullptr;
    QsciLexerFortran77_ChildEvent_Callback qscilexerfortran77_childevent_callback = nullptr;
    QsciLexerFortran77_CustomEvent_Callback qscilexerfortran77_customevent_callback = nullptr;
    QsciLexerFortran77_ConnectNotify_Callback qscilexerfortran77_connectnotify_callback = nullptr;
    QsciLexerFortran77_DisconnectNotify_Callback qscilexerfortran77_disconnectnotify_callback = nullptr;
    QsciLexerFortran77_TextAsBytes_Callback qscilexerfortran77_textasbytes_callback = nullptr;
    QsciLexerFortran77_BytesAsText_Callback qscilexerfortran77_bytesastext_callback = nullptr;
    QsciLexerFortran77_Sender_Callback qscilexerfortran77_sender_callback = nullptr;
    QsciLexerFortran77_SenderSignalIndex_Callback qscilexerfortran77_sendersignalindex_callback = nullptr;
    QsciLexerFortran77_Receivers_Callback qscilexerfortran77_receivers_callback = nullptr;
    QsciLexerFortran77_IsSignalConnected_Callback qscilexerfortran77_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerfortran77_metaobject_isbase = false;
    mutable bool qscilexerfortran77_metacast_isbase = false;
    mutable bool qscilexerfortran77_metacall_isbase = false;
    mutable bool qscilexerfortran77_setfoldcompact_isbase = false;
    mutable bool qscilexerfortran77_language_isbase = false;
    mutable bool qscilexerfortran77_lexer_isbase = false;
    mutable bool qscilexerfortran77_lexerid_isbase = false;
    mutable bool qscilexerfortran77_autocompletionfillups_isbase = false;
    mutable bool qscilexerfortran77_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerfortran77_blockend_isbase = false;
    mutable bool qscilexerfortran77_blocklookback_isbase = false;
    mutable bool qscilexerfortran77_blockstart_isbase = false;
    mutable bool qscilexerfortran77_blockstartkeyword_isbase = false;
    mutable bool qscilexerfortran77_bracestyle_isbase = false;
    mutable bool qscilexerfortran77_casesensitive_isbase = false;
    mutable bool qscilexerfortran77_color_isbase = false;
    mutable bool qscilexerfortran77_eolfill_isbase = false;
    mutable bool qscilexerfortran77_font_isbase = false;
    mutable bool qscilexerfortran77_indentationguideview_isbase = false;
    mutable bool qscilexerfortran77_keywords_isbase = false;
    mutable bool qscilexerfortran77_defaultstyle_isbase = false;
    mutable bool qscilexerfortran77_description_isbase = false;
    mutable bool qscilexerfortran77_paper_isbase = false;
    mutable bool qscilexerfortran77_defaultcolor2_isbase = false;
    mutable bool qscilexerfortran77_defaulteolfill_isbase = false;
    mutable bool qscilexerfortran77_defaultfont2_isbase = false;
    mutable bool qscilexerfortran77_defaultpaper2_isbase = false;
    mutable bool qscilexerfortran77_seteditor_isbase = false;
    mutable bool qscilexerfortran77_refreshproperties_isbase = false;
    mutable bool qscilexerfortran77_stylebitsneeded_isbase = false;
    mutable bool qscilexerfortran77_wordcharacters_isbase = false;
    mutable bool qscilexerfortran77_setautoindentstyle_isbase = false;
    mutable bool qscilexerfortran77_setcolor_isbase = false;
    mutable bool qscilexerfortran77_seteolfill_isbase = false;
    mutable bool qscilexerfortran77_setfont_isbase = false;
    mutable bool qscilexerfortran77_setpaper_isbase = false;
    mutable bool qscilexerfortran77_readproperties_isbase = false;
    mutable bool qscilexerfortran77_writeproperties_isbase = false;
    mutable bool qscilexerfortran77_event_isbase = false;
    mutable bool qscilexerfortran77_eventfilter_isbase = false;
    mutable bool qscilexerfortran77_timerevent_isbase = false;
    mutable bool qscilexerfortran77_childevent_isbase = false;
    mutable bool qscilexerfortran77_customevent_isbase = false;
    mutable bool qscilexerfortran77_connectnotify_isbase = false;
    mutable bool qscilexerfortran77_disconnectnotify_isbase = false;
    mutable bool qscilexerfortran77_textasbytes_isbase = false;
    mutable bool qscilexerfortran77_bytesastext_isbase = false;
    mutable bool qscilexerfortran77_sender_isbase = false;
    mutable bool qscilexerfortran77_sendersignalindex_isbase = false;
    mutable bool qscilexerfortran77_receivers_isbase = false;
    mutable bool qscilexerfortran77_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerFortran77() : QsciLexerFortran77() {};
    VirtualQsciLexerFortran77(QObject* parent) : QsciLexerFortran77(parent) {};

    // Callback setters
    inline void setQsciLexerFortran77_MetaObject_Callback(QsciLexerFortran77_MetaObject_Callback cb) { qscilexerfortran77_metaobject_callback = cb; }
    inline void setQsciLexerFortran77_Metacast_Callback(QsciLexerFortran77_Metacast_Callback cb) { qscilexerfortran77_metacast_callback = cb; }
    inline void setQsciLexerFortran77_Metacall_Callback(QsciLexerFortran77_Metacall_Callback cb) { qscilexerfortran77_metacall_callback = cb; }
    inline void setQsciLexerFortran77_SetFoldCompact_Callback(QsciLexerFortran77_SetFoldCompact_Callback cb) { qscilexerfortran77_setfoldcompact_callback = cb; }
    inline void setQsciLexerFortran77_Language_Callback(QsciLexerFortran77_Language_Callback cb) { qscilexerfortran77_language_callback = cb; }
    inline void setQsciLexerFortran77_Lexer_Callback(QsciLexerFortran77_Lexer_Callback cb) { qscilexerfortran77_lexer_callback = cb; }
    inline void setQsciLexerFortran77_LexerId_Callback(QsciLexerFortran77_LexerId_Callback cb) { qscilexerfortran77_lexerid_callback = cb; }
    inline void setQsciLexerFortran77_AutoCompletionFillups_Callback(QsciLexerFortran77_AutoCompletionFillups_Callback cb) { qscilexerfortran77_autocompletionfillups_callback = cb; }
    inline void setQsciLexerFortran77_AutoCompletionWordSeparators_Callback(QsciLexerFortran77_AutoCompletionWordSeparators_Callback cb) { qscilexerfortran77_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerFortran77_BlockEnd_Callback(QsciLexerFortran77_BlockEnd_Callback cb) { qscilexerfortran77_blockend_callback = cb; }
    inline void setQsciLexerFortran77_BlockLookback_Callback(QsciLexerFortran77_BlockLookback_Callback cb) { qscilexerfortran77_blocklookback_callback = cb; }
    inline void setQsciLexerFortran77_BlockStart_Callback(QsciLexerFortran77_BlockStart_Callback cb) { qscilexerfortran77_blockstart_callback = cb; }
    inline void setQsciLexerFortran77_BlockStartKeyword_Callback(QsciLexerFortran77_BlockStartKeyword_Callback cb) { qscilexerfortran77_blockstartkeyword_callback = cb; }
    inline void setQsciLexerFortran77_BraceStyle_Callback(QsciLexerFortran77_BraceStyle_Callback cb) { qscilexerfortran77_bracestyle_callback = cb; }
    inline void setQsciLexerFortran77_CaseSensitive_Callback(QsciLexerFortran77_CaseSensitive_Callback cb) { qscilexerfortran77_casesensitive_callback = cb; }
    inline void setQsciLexerFortran77_Color_Callback(QsciLexerFortran77_Color_Callback cb) { qscilexerfortran77_color_callback = cb; }
    inline void setQsciLexerFortran77_EolFill_Callback(QsciLexerFortran77_EolFill_Callback cb) { qscilexerfortran77_eolfill_callback = cb; }
    inline void setQsciLexerFortran77_Font_Callback(QsciLexerFortran77_Font_Callback cb) { qscilexerfortran77_font_callback = cb; }
    inline void setQsciLexerFortran77_IndentationGuideView_Callback(QsciLexerFortran77_IndentationGuideView_Callback cb) { qscilexerfortran77_indentationguideview_callback = cb; }
    inline void setQsciLexerFortran77_Keywords_Callback(QsciLexerFortran77_Keywords_Callback cb) { qscilexerfortran77_keywords_callback = cb; }
    inline void setQsciLexerFortran77_DefaultStyle_Callback(QsciLexerFortran77_DefaultStyle_Callback cb) { qscilexerfortran77_defaultstyle_callback = cb; }
    inline void setQsciLexerFortran77_Description_Callback(QsciLexerFortran77_Description_Callback cb) { qscilexerfortran77_description_callback = cb; }
    inline void setQsciLexerFortran77_Paper_Callback(QsciLexerFortran77_Paper_Callback cb) { qscilexerfortran77_paper_callback = cb; }
    inline void setQsciLexerFortran77_DefaultColor2_Callback(QsciLexerFortran77_DefaultColor2_Callback cb) { qscilexerfortran77_defaultcolor2_callback = cb; }
    inline void setQsciLexerFortran77_DefaultEolFill_Callback(QsciLexerFortran77_DefaultEolFill_Callback cb) { qscilexerfortran77_defaulteolfill_callback = cb; }
    inline void setQsciLexerFortran77_DefaultFont2_Callback(QsciLexerFortran77_DefaultFont2_Callback cb) { qscilexerfortran77_defaultfont2_callback = cb; }
    inline void setQsciLexerFortran77_DefaultPaper2_Callback(QsciLexerFortran77_DefaultPaper2_Callback cb) { qscilexerfortran77_defaultpaper2_callback = cb; }
    inline void setQsciLexerFortran77_SetEditor_Callback(QsciLexerFortran77_SetEditor_Callback cb) { qscilexerfortran77_seteditor_callback = cb; }
    inline void setQsciLexerFortran77_RefreshProperties_Callback(QsciLexerFortran77_RefreshProperties_Callback cb) { qscilexerfortran77_refreshproperties_callback = cb; }
    inline void setQsciLexerFortran77_StyleBitsNeeded_Callback(QsciLexerFortran77_StyleBitsNeeded_Callback cb) { qscilexerfortran77_stylebitsneeded_callback = cb; }
    inline void setQsciLexerFortran77_WordCharacters_Callback(QsciLexerFortran77_WordCharacters_Callback cb) { qscilexerfortran77_wordcharacters_callback = cb; }
    inline void setQsciLexerFortran77_SetAutoIndentStyle_Callback(QsciLexerFortran77_SetAutoIndentStyle_Callback cb) { qscilexerfortran77_setautoindentstyle_callback = cb; }
    inline void setQsciLexerFortran77_SetColor_Callback(QsciLexerFortran77_SetColor_Callback cb) { qscilexerfortran77_setcolor_callback = cb; }
    inline void setQsciLexerFortran77_SetEolFill_Callback(QsciLexerFortran77_SetEolFill_Callback cb) { qscilexerfortran77_seteolfill_callback = cb; }
    inline void setQsciLexerFortran77_SetFont_Callback(QsciLexerFortran77_SetFont_Callback cb) { qscilexerfortran77_setfont_callback = cb; }
    inline void setQsciLexerFortran77_SetPaper_Callback(QsciLexerFortran77_SetPaper_Callback cb) { qscilexerfortran77_setpaper_callback = cb; }
    inline void setQsciLexerFortran77_ReadProperties_Callback(QsciLexerFortran77_ReadProperties_Callback cb) { qscilexerfortran77_readproperties_callback = cb; }
    inline void setQsciLexerFortran77_WriteProperties_Callback(QsciLexerFortran77_WriteProperties_Callback cb) { qscilexerfortran77_writeproperties_callback = cb; }
    inline void setQsciLexerFortran77_Event_Callback(QsciLexerFortran77_Event_Callback cb) { qscilexerfortran77_event_callback = cb; }
    inline void setQsciLexerFortran77_EventFilter_Callback(QsciLexerFortran77_EventFilter_Callback cb) { qscilexerfortran77_eventfilter_callback = cb; }
    inline void setQsciLexerFortran77_TimerEvent_Callback(QsciLexerFortran77_TimerEvent_Callback cb) { qscilexerfortran77_timerevent_callback = cb; }
    inline void setQsciLexerFortran77_ChildEvent_Callback(QsciLexerFortran77_ChildEvent_Callback cb) { qscilexerfortran77_childevent_callback = cb; }
    inline void setQsciLexerFortran77_CustomEvent_Callback(QsciLexerFortran77_CustomEvent_Callback cb) { qscilexerfortran77_customevent_callback = cb; }
    inline void setQsciLexerFortran77_ConnectNotify_Callback(QsciLexerFortran77_ConnectNotify_Callback cb) { qscilexerfortran77_connectnotify_callback = cb; }
    inline void setQsciLexerFortran77_DisconnectNotify_Callback(QsciLexerFortran77_DisconnectNotify_Callback cb) { qscilexerfortran77_disconnectnotify_callback = cb; }
    inline void setQsciLexerFortran77_TextAsBytes_Callback(QsciLexerFortran77_TextAsBytes_Callback cb) { qscilexerfortran77_textasbytes_callback = cb; }
    inline void setQsciLexerFortran77_BytesAsText_Callback(QsciLexerFortran77_BytesAsText_Callback cb) { qscilexerfortran77_bytesastext_callback = cb; }
    inline void setQsciLexerFortran77_Sender_Callback(QsciLexerFortran77_Sender_Callback cb) { qscilexerfortran77_sender_callback = cb; }
    inline void setQsciLexerFortran77_SenderSignalIndex_Callback(QsciLexerFortran77_SenderSignalIndex_Callback cb) { qscilexerfortran77_sendersignalindex_callback = cb; }
    inline void setQsciLexerFortran77_Receivers_Callback(QsciLexerFortran77_Receivers_Callback cb) { qscilexerfortran77_receivers_callback = cb; }
    inline void setQsciLexerFortran77_IsSignalConnected_Callback(QsciLexerFortran77_IsSignalConnected_Callback cb) { qscilexerfortran77_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerFortran77_MetaObject_IsBase(bool value) const { qscilexerfortran77_metaobject_isbase = value; }
    inline void setQsciLexerFortran77_Metacast_IsBase(bool value) const { qscilexerfortran77_metacast_isbase = value; }
    inline void setQsciLexerFortran77_Metacall_IsBase(bool value) const { qscilexerfortran77_metacall_isbase = value; }
    inline void setQsciLexerFortran77_SetFoldCompact_IsBase(bool value) const { qscilexerfortran77_setfoldcompact_isbase = value; }
    inline void setQsciLexerFortran77_Language_IsBase(bool value) const { qscilexerfortran77_language_isbase = value; }
    inline void setQsciLexerFortran77_Lexer_IsBase(bool value) const { qscilexerfortran77_lexer_isbase = value; }
    inline void setQsciLexerFortran77_LexerId_IsBase(bool value) const { qscilexerfortran77_lexerid_isbase = value; }
    inline void setQsciLexerFortran77_AutoCompletionFillups_IsBase(bool value) const { qscilexerfortran77_autocompletionfillups_isbase = value; }
    inline void setQsciLexerFortran77_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerfortran77_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerFortran77_BlockEnd_IsBase(bool value) const { qscilexerfortran77_blockend_isbase = value; }
    inline void setQsciLexerFortran77_BlockLookback_IsBase(bool value) const { qscilexerfortran77_blocklookback_isbase = value; }
    inline void setQsciLexerFortran77_BlockStart_IsBase(bool value) const { qscilexerfortran77_blockstart_isbase = value; }
    inline void setQsciLexerFortran77_BlockStartKeyword_IsBase(bool value) const { qscilexerfortran77_blockstartkeyword_isbase = value; }
    inline void setQsciLexerFortran77_BraceStyle_IsBase(bool value) const { qscilexerfortran77_bracestyle_isbase = value; }
    inline void setQsciLexerFortran77_CaseSensitive_IsBase(bool value) const { qscilexerfortran77_casesensitive_isbase = value; }
    inline void setQsciLexerFortran77_Color_IsBase(bool value) const { qscilexerfortran77_color_isbase = value; }
    inline void setQsciLexerFortran77_EolFill_IsBase(bool value) const { qscilexerfortran77_eolfill_isbase = value; }
    inline void setQsciLexerFortran77_Font_IsBase(bool value) const { qscilexerfortran77_font_isbase = value; }
    inline void setQsciLexerFortran77_IndentationGuideView_IsBase(bool value) const { qscilexerfortran77_indentationguideview_isbase = value; }
    inline void setQsciLexerFortran77_Keywords_IsBase(bool value) const { qscilexerfortran77_keywords_isbase = value; }
    inline void setQsciLexerFortran77_DefaultStyle_IsBase(bool value) const { qscilexerfortran77_defaultstyle_isbase = value; }
    inline void setQsciLexerFortran77_Description_IsBase(bool value) const { qscilexerfortran77_description_isbase = value; }
    inline void setQsciLexerFortran77_Paper_IsBase(bool value) const { qscilexerfortran77_paper_isbase = value; }
    inline void setQsciLexerFortran77_DefaultColor2_IsBase(bool value) const { qscilexerfortran77_defaultcolor2_isbase = value; }
    inline void setQsciLexerFortran77_DefaultEolFill_IsBase(bool value) const { qscilexerfortran77_defaulteolfill_isbase = value; }
    inline void setQsciLexerFortran77_DefaultFont2_IsBase(bool value) const { qscilexerfortran77_defaultfont2_isbase = value; }
    inline void setQsciLexerFortran77_DefaultPaper2_IsBase(bool value) const { qscilexerfortran77_defaultpaper2_isbase = value; }
    inline void setQsciLexerFortran77_SetEditor_IsBase(bool value) const { qscilexerfortran77_seteditor_isbase = value; }
    inline void setQsciLexerFortran77_RefreshProperties_IsBase(bool value) const { qscilexerfortran77_refreshproperties_isbase = value; }
    inline void setQsciLexerFortran77_StyleBitsNeeded_IsBase(bool value) const { qscilexerfortran77_stylebitsneeded_isbase = value; }
    inline void setQsciLexerFortran77_WordCharacters_IsBase(bool value) const { qscilexerfortran77_wordcharacters_isbase = value; }
    inline void setQsciLexerFortran77_SetAutoIndentStyle_IsBase(bool value) const { qscilexerfortran77_setautoindentstyle_isbase = value; }
    inline void setQsciLexerFortran77_SetColor_IsBase(bool value) const { qscilexerfortran77_setcolor_isbase = value; }
    inline void setQsciLexerFortran77_SetEolFill_IsBase(bool value) const { qscilexerfortran77_seteolfill_isbase = value; }
    inline void setQsciLexerFortran77_SetFont_IsBase(bool value) const { qscilexerfortran77_setfont_isbase = value; }
    inline void setQsciLexerFortran77_SetPaper_IsBase(bool value) const { qscilexerfortran77_setpaper_isbase = value; }
    inline void setQsciLexerFortran77_ReadProperties_IsBase(bool value) const { qscilexerfortran77_readproperties_isbase = value; }
    inline void setQsciLexerFortran77_WriteProperties_IsBase(bool value) const { qscilexerfortran77_writeproperties_isbase = value; }
    inline void setQsciLexerFortran77_Event_IsBase(bool value) const { qscilexerfortran77_event_isbase = value; }
    inline void setQsciLexerFortran77_EventFilter_IsBase(bool value) const { qscilexerfortran77_eventfilter_isbase = value; }
    inline void setQsciLexerFortran77_TimerEvent_IsBase(bool value) const { qscilexerfortran77_timerevent_isbase = value; }
    inline void setQsciLexerFortran77_ChildEvent_IsBase(bool value) const { qscilexerfortran77_childevent_isbase = value; }
    inline void setQsciLexerFortran77_CustomEvent_IsBase(bool value) const { qscilexerfortran77_customevent_isbase = value; }
    inline void setQsciLexerFortran77_ConnectNotify_IsBase(bool value) const { qscilexerfortran77_connectnotify_isbase = value; }
    inline void setQsciLexerFortran77_DisconnectNotify_IsBase(bool value) const { qscilexerfortran77_disconnectnotify_isbase = value; }
    inline void setQsciLexerFortran77_TextAsBytes_IsBase(bool value) const { qscilexerfortran77_textasbytes_isbase = value; }
    inline void setQsciLexerFortran77_BytesAsText_IsBase(bool value) const { qscilexerfortran77_bytesastext_isbase = value; }
    inline void setQsciLexerFortran77_Sender_IsBase(bool value) const { qscilexerfortran77_sender_isbase = value; }
    inline void setQsciLexerFortran77_SenderSignalIndex_IsBase(bool value) const { qscilexerfortran77_sendersignalindex_isbase = value; }
    inline void setQsciLexerFortran77_Receivers_IsBase(bool value) const { qscilexerfortran77_receivers_isbase = value; }
    inline void setQsciLexerFortran77_IsSignalConnected_IsBase(bool value) const { qscilexerfortran77_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerfortran77_metaobject_isbase) {
            qscilexerfortran77_metaobject_isbase = false;
            return QsciLexerFortran77::metaObject();
        }
        auto metaobject_cb = qscilexerfortran77_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerfortran77_metacast_isbase) {
            qscilexerfortran77_metacast_isbase = false;
            return QsciLexerFortran77::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerfortran77_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerfortran77_metacall_isbase) {
            qscilexerfortran77_metacall_isbase = false;
            return QsciLexerFortran77::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerfortran77_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerfortran77_setfoldcompact_isbase) {
            qscilexerfortran77_setfoldcompact_isbase = false;
            QsciLexerFortran77::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerfortran77_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerfortran77_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerfortran77_lexer_isbase) {
            qscilexerfortran77_lexer_isbase = false;
            return QsciLexerFortran77::lexer();
        }
        auto lexer_cb = qscilexerfortran77_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerfortran77_lexerid_isbase) {
            qscilexerfortran77_lexerid_isbase = false;
            return QsciLexerFortran77::lexerId();
        }
        auto lexerid_cb = qscilexerfortran77_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerfortran77_autocompletionfillups_isbase) {
            qscilexerfortran77_autocompletionfillups_isbase = false;
            return QsciLexerFortran77::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerfortran77_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerfortran77_autocompletionwordseparators_isbase) {
            qscilexerfortran77_autocompletionwordseparators_isbase = false;
            return QsciLexerFortran77::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerfortran77_autocompletionwordseparators_callback;
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
        return QsciLexerFortran77::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerfortran77_blockend_isbase) {
            qscilexerfortran77_blockend_isbase = false;
            return QsciLexerFortran77::blockEnd(style);
        }
        auto blockend_cb = qscilexerfortran77_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerfortran77_blocklookback_isbase) {
            qscilexerfortran77_blocklookback_isbase = false;
            return QsciLexerFortran77::blockLookback();
        }
        auto blocklookback_cb = qscilexerfortran77_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerfortran77_blockstart_isbase) {
            qscilexerfortran77_blockstart_isbase = false;
            return QsciLexerFortran77::blockStart(style);
        }
        auto blockstart_cb = qscilexerfortran77_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerfortran77_blockstartkeyword_isbase) {
            qscilexerfortran77_blockstartkeyword_isbase = false;
            return QsciLexerFortran77::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerfortran77_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerfortran77_bracestyle_isbase) {
            qscilexerfortran77_bracestyle_isbase = false;
            return QsciLexerFortran77::braceStyle();
        }
        auto bracestyle_cb = qscilexerfortran77_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerfortran77_casesensitive_isbase) {
            qscilexerfortran77_casesensitive_isbase = false;
            return QsciLexerFortran77::caseSensitive();
        }
        auto casesensitive_cb = qscilexerfortran77_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerfortran77_color_isbase) {
            qscilexerfortran77_color_isbase = false;
            return QsciLexerFortran77::color(style);
        }
        auto color_cb = qscilexerfortran77_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerfortran77_eolfill_isbase) {
            qscilexerfortran77_eolfill_isbase = false;
            return QsciLexerFortran77::eolFill(style);
        }
        auto eolfill_cb = qscilexerfortran77_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerfortran77_font_isbase) {
            qscilexerfortran77_font_isbase = false;
            return QsciLexerFortran77::font(style);
        }
        auto font_cb = qscilexerfortran77_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerfortran77_indentationguideview_isbase) {
            qscilexerfortran77_indentationguideview_isbase = false;
            return QsciLexerFortran77::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerfortran77_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerfortran77_keywords_isbase) {
            qscilexerfortran77_keywords_isbase = false;
            return QsciLexerFortran77::keywords(set);
        }
        auto keywords_cb = qscilexerfortran77_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerfortran77_defaultstyle_isbase) {
            qscilexerfortran77_defaultstyle_isbase = false;
            return QsciLexerFortran77::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerfortran77_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerfortran77_description_callback;
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
        if (qscilexerfortran77_paper_isbase) {
            qscilexerfortran77_paper_isbase = false;
            return QsciLexerFortran77::paper(style);
        }
        auto paper_cb = qscilexerfortran77_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerfortran77_defaultcolor2_isbase) {
            qscilexerfortran77_defaultcolor2_isbase = false;
            return QsciLexerFortran77::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerfortran77_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerfortran77_defaulteolfill_isbase) {
            qscilexerfortran77_defaulteolfill_isbase = false;
            return QsciLexerFortran77::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerfortran77_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerfortran77_defaultfont2_isbase) {
            qscilexerfortran77_defaultfont2_isbase = false;
            return QsciLexerFortran77::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerfortran77_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerfortran77_defaultpaper2_isbase) {
            qscilexerfortran77_defaultpaper2_isbase = false;
            return QsciLexerFortran77::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerfortran77_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerFortran77::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerfortran77_seteditor_isbase) {
            qscilexerfortran77_seteditor_isbase = false;
            QsciLexerFortran77::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerfortran77_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerfortran77_refreshproperties_isbase) {
            qscilexerfortran77_refreshproperties_isbase = false;
            QsciLexerFortran77::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerfortran77_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerFortran77::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerfortran77_stylebitsneeded_isbase) {
            qscilexerfortran77_stylebitsneeded_isbase = false;
            return QsciLexerFortran77::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerfortran77_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerfortran77_wordcharacters_isbase) {
            qscilexerfortran77_wordcharacters_isbase = false;
            return QsciLexerFortran77::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerfortran77_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerfortran77_setautoindentstyle_isbase) {
            qscilexerfortran77_setautoindentstyle_isbase = false;
            QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerfortran77_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerfortran77_setcolor_isbase) {
            qscilexerfortran77_setcolor_isbase = false;
            QsciLexerFortran77::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerfortran77_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerfortran77_seteolfill_isbase) {
            qscilexerfortran77_seteolfill_isbase = false;
            QsciLexerFortran77::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerfortran77_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerfortran77_setfont_isbase) {
            qscilexerfortran77_setfont_isbase = false;
            QsciLexerFortran77::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerfortran77_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerfortran77_setpaper_isbase) {
            qscilexerfortran77_setpaper_isbase = false;
            QsciLexerFortran77::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerfortran77_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerfortran77_readproperties_isbase) {
            qscilexerfortran77_readproperties_isbase = false;
            return QsciLexerFortran77::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerfortran77_readproperties_callback;
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
        return QsciLexerFortran77::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerfortran77_writeproperties_isbase) {
            qscilexerfortran77_writeproperties_isbase = false;
            return QsciLexerFortran77::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerfortran77_writeproperties_callback;
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
        return QsciLexerFortran77::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerfortran77_event_isbase) {
            qscilexerfortran77_event_isbase = false;
            return QsciLexerFortran77::event(event);
        }
        auto event_cb = qscilexerfortran77_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerfortran77_eventfilter_isbase) {
            qscilexerfortran77_eventfilter_isbase = false;
            return QsciLexerFortran77::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerfortran77_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerFortran77::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerfortran77_timerevent_isbase) {
            qscilexerfortran77_timerevent_isbase = false;
            QsciLexerFortran77::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerfortran77_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerfortran77_childevent_isbase) {
            qscilexerfortran77_childevent_isbase = false;
            QsciLexerFortran77::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerfortran77_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerfortran77_customevent_isbase) {
            qscilexerfortran77_customevent_isbase = false;
            QsciLexerFortran77::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerfortran77_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_connectnotify_isbase) {
            qscilexerfortran77_connectnotify_isbase = false;
            QsciLexerFortran77::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerfortran77_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_disconnectnotify_isbase) {
            qscilexerfortran77_disconnectnotify_isbase = false;
            QsciLexerFortran77::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerfortran77_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerFortran77::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerfortran77_textasbytes_isbase) {
            qscilexerfortran77_textasbytes_isbase = false;
            return QsciLexerFortran77::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerfortran77_textasbytes_callback;
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
        return QsciLexerFortran77::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerfortran77_bytesastext_isbase) {
            qscilexerfortran77_bytesastext_isbase = false;
            return QsciLexerFortran77::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerfortran77_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerFortran77::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerfortran77_sender_isbase) {
            qscilexerfortran77_sender_isbase = false;
            return QsciLexerFortran77::sender();
        }
        auto sender_cb = qscilexerfortran77_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerFortran77::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerfortran77_sendersignalindex_isbase) {
            qscilexerfortran77_sendersignalindex_isbase = false;
            return QsciLexerFortran77::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerfortran77_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerfortran77_receivers_isbase) {
            qscilexerfortran77_receivers_isbase = false;
            return QsciLexerFortran77::receivers(signal);
        }
        auto receivers_cb = qscilexerfortran77_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerfortran77_issignalconnected_isbase) {
            qscilexerfortran77_issignalconnected_isbase = false;
            return QsciLexerFortran77::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerfortran77_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerFortran77_ReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran77_SuperReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran77_WriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran77_SuperWriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerFortran77_TimerEvent(QsciLexerFortran77* self, QTimerEvent* event);
    friend void QsciLexerFortran77_SuperTimerEvent(QsciLexerFortran77* self, QTimerEvent* event);
    friend void QsciLexerFortran77_ChildEvent(QsciLexerFortran77* self, QChildEvent* event);
    friend void QsciLexerFortran77_SuperChildEvent(QsciLexerFortran77* self, QChildEvent* event);
    friend void QsciLexerFortran77_CustomEvent(QsciLexerFortran77* self, QEvent* event);
    friend void QsciLexerFortran77_SuperCustomEvent(QsciLexerFortran77* self, QEvent* event);
    friend void QsciLexerFortran77_ConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
    friend void QsciLexerFortran77_SuperConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
    friend void QsciLexerFortran77_DisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
    friend void QsciLexerFortran77_SuperDisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerFortran77_TextAsBytes(const QsciLexerFortran77* self, const libqt_string text);
    friend libqt_string QsciLexerFortran77_SuperTextAsBytes(const QsciLexerFortran77* self, const libqt_string text);
    friend libqt_string QsciLexerFortran77_BytesAsText(const QsciLexerFortran77* self, const char* bytes, int size);
    friend libqt_string QsciLexerFortran77_SuperBytesAsText(const QsciLexerFortran77* self, const char* bytes, int size);
    friend QObject* QsciLexerFortran77_Sender(const QsciLexerFortran77* self);
    friend QObject* QsciLexerFortran77_SuperSender(const QsciLexerFortran77* self);
    friend int QsciLexerFortran77_SenderSignalIndex(const QsciLexerFortran77* self);
    friend int QsciLexerFortran77_SuperSenderSignalIndex(const QsciLexerFortran77* self);
    friend int QsciLexerFortran77_Receivers(const QsciLexerFortran77* self, const char* signal);
    friend int QsciLexerFortran77_SuperReceivers(const QsciLexerFortran77* self, const char* signal);
    friend bool QsciLexerFortran77_IsSignalConnected(const QsciLexerFortran77* self, const QMetaMethod* signal);
    friend bool QsciLexerFortran77_SuperIsSignalConnected(const QsciLexerFortran77* self, const QMetaMethod* signal);
};

#endif
