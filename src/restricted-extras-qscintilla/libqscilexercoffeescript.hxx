#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCOFFEESCRIPT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCOFFEESCRIPT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCoffeeScript so that we can call protected methods
class VirtualQsciLexerCoffeeScript final : public QsciLexerCoffeeScript {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerCoffeeScript = true;

    // Virtual class public types (including callbacks)
    using QsciLexerCoffeeScript_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerCoffeeScript_Metacast_Callback = void* (*)(QsciLexerCoffeeScript*, const char*);
    using QsciLexerCoffeeScript_Metacall_Callback = int (*)(QsciLexerCoffeeScript*, int, int, void**);
    using QsciLexerCoffeeScript_Language_Callback = const char* (*)();
    using QsciLexerCoffeeScript_Lexer_Callback = const char* (*)();
    using QsciLexerCoffeeScript_LexerId_Callback = int (*)();
    using QsciLexerCoffeeScript_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerCoffeeScript_BlockEnd_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockLookback_Callback = int (*)();
    using QsciLexerCoffeeScript_BlockStart_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BraceStyle_Callback = int (*)();
    using QsciLexerCoffeeScript_CaseSensitive_Callback = bool (*)();
    using QsciLexerCoffeeScript_Color_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_EolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Font_Callback = QFont* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_IndentationGuideView_Callback = int (*)();
    using QsciLexerCoffeeScript_Keywords_Callback = const char* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultStyle_Callback = int (*)();
    using QsciLexerCoffeeScript_Description_Callback = const char* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Paper_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultEolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetEditor_Callback = void (*)(QsciLexerCoffeeScript*, QsciScintilla*);
    using QsciLexerCoffeeScript_RefreshProperties_Callback = void (*)();
    using QsciLexerCoffeeScript_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCoffeeScript_WordCharacters_Callback = const char* (*)();
    using QsciLexerCoffeeScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetColor_Callback = void (*)(QsciLexerCoffeeScript*, QColor*, int);
    using QsciLexerCoffeeScript_SetEolFill_Callback = void (*)(QsciLexerCoffeeScript*, bool, int);
    using QsciLexerCoffeeScript_SetFont_Callback = void (*)(QsciLexerCoffeeScript*, QFont*, int);
    using QsciLexerCoffeeScript_SetPaper_Callback = void (*)(QsciLexerCoffeeScript*, QColor*, int);
    using QsciLexerCoffeeScript_ReadProperties_Callback = bool (*)(QsciLexerCoffeeScript*, QSettings*, const char*);
    using QsciLexerCoffeeScript_WriteProperties_Callback = bool (*)(const QsciLexerCoffeeScript*, QSettings*, const char*);
    using QsciLexerCoffeeScript_Event_Callback = bool (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_EventFilter_Callback = bool (*)(QsciLexerCoffeeScript*, QObject*, QEvent*);
    using QsciLexerCoffeeScript_TimerEvent_Callback = void (*)(QsciLexerCoffeeScript*, QTimerEvent*);
    using QsciLexerCoffeeScript_ChildEvent_Callback = void (*)(QsciLexerCoffeeScript*, QChildEvent*);
    using QsciLexerCoffeeScript_CustomEvent_Callback = void (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_ConnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, QMetaMethod*);
    using QsciLexerCoffeeScript_DisconnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, QMetaMethod*);
    using QsciLexerCoffeeScript_TextAsBytes_Callback = libqt_string (*)(const QsciLexerCoffeeScript*, const char*);
    using QsciLexerCoffeeScript_BytesAsText_Callback = const char* (*)(const QsciLexerCoffeeScript*, const char*, int);
    using QsciLexerCoffeeScript_Sender_Callback = QObject* (*)();
    using QsciLexerCoffeeScript_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCoffeeScript_Receivers_Callback = int (*)(const QsciLexerCoffeeScript*, const char*);
    using QsciLexerCoffeeScript_IsSignalConnected_Callback = bool (*)(const QsciLexerCoffeeScript*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerCoffeeScript_MetaObject_Callback qscilexercoffeescript_metaobject_callback = nullptr;
    QsciLexerCoffeeScript_Metacast_Callback qscilexercoffeescript_metacast_callback = nullptr;
    QsciLexerCoffeeScript_Metacall_Callback qscilexercoffeescript_metacall_callback = nullptr;
    QsciLexerCoffeeScript_Language_Callback qscilexercoffeescript_language_callback = nullptr;
    QsciLexerCoffeeScript_Lexer_Callback qscilexercoffeescript_lexer_callback = nullptr;
    QsciLexerCoffeeScript_LexerId_Callback qscilexercoffeescript_lexerid_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionFillups_Callback qscilexercoffeescript_autocompletionfillups_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback qscilexercoffeescript_autocompletionwordseparators_callback = nullptr;
    QsciLexerCoffeeScript_BlockEnd_Callback qscilexercoffeescript_blockend_callback = nullptr;
    QsciLexerCoffeeScript_BlockLookback_Callback qscilexercoffeescript_blocklookback_callback = nullptr;
    QsciLexerCoffeeScript_BlockStart_Callback qscilexercoffeescript_blockstart_callback = nullptr;
    QsciLexerCoffeeScript_BlockStartKeyword_Callback qscilexercoffeescript_blockstartkeyword_callback = nullptr;
    QsciLexerCoffeeScript_BraceStyle_Callback qscilexercoffeescript_bracestyle_callback = nullptr;
    QsciLexerCoffeeScript_CaseSensitive_Callback qscilexercoffeescript_casesensitive_callback = nullptr;
    QsciLexerCoffeeScript_Color_Callback qscilexercoffeescript_color_callback = nullptr;
    QsciLexerCoffeeScript_EolFill_Callback qscilexercoffeescript_eolfill_callback = nullptr;
    QsciLexerCoffeeScript_Font_Callback qscilexercoffeescript_font_callback = nullptr;
    QsciLexerCoffeeScript_IndentationGuideView_Callback qscilexercoffeescript_indentationguideview_callback = nullptr;
    QsciLexerCoffeeScript_Keywords_Callback qscilexercoffeescript_keywords_callback = nullptr;
    QsciLexerCoffeeScript_DefaultStyle_Callback qscilexercoffeescript_defaultstyle_callback = nullptr;
    QsciLexerCoffeeScript_Description_Callback qscilexercoffeescript_description_callback = nullptr;
    QsciLexerCoffeeScript_Paper_Callback qscilexercoffeescript_paper_callback = nullptr;
    QsciLexerCoffeeScript_DefaultColor2_Callback qscilexercoffeescript_defaultcolor2_callback = nullptr;
    QsciLexerCoffeeScript_DefaultEolFill_Callback qscilexercoffeescript_defaulteolfill_callback = nullptr;
    QsciLexerCoffeeScript_DefaultFont2_Callback qscilexercoffeescript_defaultfont2_callback = nullptr;
    QsciLexerCoffeeScript_DefaultPaper2_Callback qscilexercoffeescript_defaultpaper2_callback = nullptr;
    QsciLexerCoffeeScript_SetEditor_Callback qscilexercoffeescript_seteditor_callback = nullptr;
    QsciLexerCoffeeScript_RefreshProperties_Callback qscilexercoffeescript_refreshproperties_callback = nullptr;
    QsciLexerCoffeeScript_StyleBitsNeeded_Callback qscilexercoffeescript_stylebitsneeded_callback = nullptr;
    QsciLexerCoffeeScript_WordCharacters_Callback qscilexercoffeescript_wordcharacters_callback = nullptr;
    QsciLexerCoffeeScript_SetAutoIndentStyle_Callback qscilexercoffeescript_setautoindentstyle_callback = nullptr;
    QsciLexerCoffeeScript_SetColor_Callback qscilexercoffeescript_setcolor_callback = nullptr;
    QsciLexerCoffeeScript_SetEolFill_Callback qscilexercoffeescript_seteolfill_callback = nullptr;
    QsciLexerCoffeeScript_SetFont_Callback qscilexercoffeescript_setfont_callback = nullptr;
    QsciLexerCoffeeScript_SetPaper_Callback qscilexercoffeescript_setpaper_callback = nullptr;
    QsciLexerCoffeeScript_ReadProperties_Callback qscilexercoffeescript_readproperties_callback = nullptr;
    QsciLexerCoffeeScript_WriteProperties_Callback qscilexercoffeescript_writeproperties_callback = nullptr;
    QsciLexerCoffeeScript_Event_Callback qscilexercoffeescript_event_callback = nullptr;
    QsciLexerCoffeeScript_EventFilter_Callback qscilexercoffeescript_eventfilter_callback = nullptr;
    QsciLexerCoffeeScript_TimerEvent_Callback qscilexercoffeescript_timerevent_callback = nullptr;
    QsciLexerCoffeeScript_ChildEvent_Callback qscilexercoffeescript_childevent_callback = nullptr;
    QsciLexerCoffeeScript_CustomEvent_Callback qscilexercoffeescript_customevent_callback = nullptr;
    QsciLexerCoffeeScript_ConnectNotify_Callback qscilexercoffeescript_connectnotify_callback = nullptr;
    QsciLexerCoffeeScript_DisconnectNotify_Callback qscilexercoffeescript_disconnectnotify_callback = nullptr;
    QsciLexerCoffeeScript_TextAsBytes_Callback qscilexercoffeescript_textasbytes_callback = nullptr;
    QsciLexerCoffeeScript_BytesAsText_Callback qscilexercoffeescript_bytesastext_callback = nullptr;
    QsciLexerCoffeeScript_Sender_Callback qscilexercoffeescript_sender_callback = nullptr;
    QsciLexerCoffeeScript_SenderSignalIndex_Callback qscilexercoffeescript_sendersignalindex_callback = nullptr;
    QsciLexerCoffeeScript_Receivers_Callback qscilexercoffeescript_receivers_callback = nullptr;
    QsciLexerCoffeeScript_IsSignalConnected_Callback qscilexercoffeescript_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercoffeescript_metaobject_isbase = false;
    mutable bool qscilexercoffeescript_metacast_isbase = false;
    mutable bool qscilexercoffeescript_metacall_isbase = false;
    mutable bool qscilexercoffeescript_language_isbase = false;
    mutable bool qscilexercoffeescript_lexer_isbase = false;
    mutable bool qscilexercoffeescript_lexerid_isbase = false;
    mutable bool qscilexercoffeescript_autocompletionfillups_isbase = false;
    mutable bool qscilexercoffeescript_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercoffeescript_blockend_isbase = false;
    mutable bool qscilexercoffeescript_blocklookback_isbase = false;
    mutable bool qscilexercoffeescript_blockstart_isbase = false;
    mutable bool qscilexercoffeescript_blockstartkeyword_isbase = false;
    mutable bool qscilexercoffeescript_bracestyle_isbase = false;
    mutable bool qscilexercoffeescript_casesensitive_isbase = false;
    mutable bool qscilexercoffeescript_color_isbase = false;
    mutable bool qscilexercoffeescript_eolfill_isbase = false;
    mutable bool qscilexercoffeescript_font_isbase = false;
    mutable bool qscilexercoffeescript_indentationguideview_isbase = false;
    mutable bool qscilexercoffeescript_keywords_isbase = false;
    mutable bool qscilexercoffeescript_defaultstyle_isbase = false;
    mutable bool qscilexercoffeescript_description_isbase = false;
    mutable bool qscilexercoffeescript_paper_isbase = false;
    mutable bool qscilexercoffeescript_defaultcolor2_isbase = false;
    mutable bool qscilexercoffeescript_defaulteolfill_isbase = false;
    mutable bool qscilexercoffeescript_defaultfont2_isbase = false;
    mutable bool qscilexercoffeescript_defaultpaper2_isbase = false;
    mutable bool qscilexercoffeescript_seteditor_isbase = false;
    mutable bool qscilexercoffeescript_refreshproperties_isbase = false;
    mutable bool qscilexercoffeescript_stylebitsneeded_isbase = false;
    mutable bool qscilexercoffeescript_wordcharacters_isbase = false;
    mutable bool qscilexercoffeescript_setautoindentstyle_isbase = false;
    mutable bool qscilexercoffeescript_setcolor_isbase = false;
    mutable bool qscilexercoffeescript_seteolfill_isbase = false;
    mutable bool qscilexercoffeescript_setfont_isbase = false;
    mutable bool qscilexercoffeescript_setpaper_isbase = false;
    mutable bool qscilexercoffeescript_readproperties_isbase = false;
    mutable bool qscilexercoffeescript_writeproperties_isbase = false;
    mutable bool qscilexercoffeescript_event_isbase = false;
    mutable bool qscilexercoffeescript_eventfilter_isbase = false;
    mutable bool qscilexercoffeescript_timerevent_isbase = false;
    mutable bool qscilexercoffeescript_childevent_isbase = false;
    mutable bool qscilexercoffeescript_customevent_isbase = false;
    mutable bool qscilexercoffeescript_connectnotify_isbase = false;
    mutable bool qscilexercoffeescript_disconnectnotify_isbase = false;
    mutable bool qscilexercoffeescript_textasbytes_isbase = false;
    mutable bool qscilexercoffeescript_bytesastext_isbase = false;
    mutable bool qscilexercoffeescript_sender_isbase = false;
    mutable bool qscilexercoffeescript_sendersignalindex_isbase = false;
    mutable bool qscilexercoffeescript_receivers_isbase = false;
    mutable bool qscilexercoffeescript_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCoffeeScript() : QsciLexerCoffeeScript() {};
    VirtualQsciLexerCoffeeScript(QObject* parent) : QsciLexerCoffeeScript(parent) {};

    // Callback setters
    inline void setQsciLexerCoffeeScript_MetaObject_Callback(QsciLexerCoffeeScript_MetaObject_Callback cb) { qscilexercoffeescript_metaobject_callback = cb; }
    inline void setQsciLexerCoffeeScript_Metacast_Callback(QsciLexerCoffeeScript_Metacast_Callback cb) { qscilexercoffeescript_metacast_callback = cb; }
    inline void setQsciLexerCoffeeScript_Metacall_Callback(QsciLexerCoffeeScript_Metacall_Callback cb) { qscilexercoffeescript_metacall_callback = cb; }
    inline void setQsciLexerCoffeeScript_Language_Callback(QsciLexerCoffeeScript_Language_Callback cb) { qscilexercoffeescript_language_callback = cb; }
    inline void setQsciLexerCoffeeScript_Lexer_Callback(QsciLexerCoffeeScript_Lexer_Callback cb) { qscilexercoffeescript_lexer_callback = cb; }
    inline void setQsciLexerCoffeeScript_LexerId_Callback(QsciLexerCoffeeScript_LexerId_Callback cb) { qscilexercoffeescript_lexerid_callback = cb; }
    inline void setQsciLexerCoffeeScript_AutoCompletionFillups_Callback(QsciLexerCoffeeScript_AutoCompletionFillups_Callback cb) { qscilexercoffeescript_autocompletionfillups_callback = cb; }
    inline void setQsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback(QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback cb) { qscilexercoffeescript_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerCoffeeScript_BlockEnd_Callback(QsciLexerCoffeeScript_BlockEnd_Callback cb) { qscilexercoffeescript_blockend_callback = cb; }
    inline void setQsciLexerCoffeeScript_BlockLookback_Callback(QsciLexerCoffeeScript_BlockLookback_Callback cb) { qscilexercoffeescript_blocklookback_callback = cb; }
    inline void setQsciLexerCoffeeScript_BlockStart_Callback(QsciLexerCoffeeScript_BlockStart_Callback cb) { qscilexercoffeescript_blockstart_callback = cb; }
    inline void setQsciLexerCoffeeScript_BlockStartKeyword_Callback(QsciLexerCoffeeScript_BlockStartKeyword_Callback cb) { qscilexercoffeescript_blockstartkeyword_callback = cb; }
    inline void setQsciLexerCoffeeScript_BraceStyle_Callback(QsciLexerCoffeeScript_BraceStyle_Callback cb) { qscilexercoffeescript_bracestyle_callback = cb; }
    inline void setQsciLexerCoffeeScript_CaseSensitive_Callback(QsciLexerCoffeeScript_CaseSensitive_Callback cb) { qscilexercoffeescript_casesensitive_callback = cb; }
    inline void setQsciLexerCoffeeScript_Color_Callback(QsciLexerCoffeeScript_Color_Callback cb) { qscilexercoffeescript_color_callback = cb; }
    inline void setQsciLexerCoffeeScript_EolFill_Callback(QsciLexerCoffeeScript_EolFill_Callback cb) { qscilexercoffeescript_eolfill_callback = cb; }
    inline void setQsciLexerCoffeeScript_Font_Callback(QsciLexerCoffeeScript_Font_Callback cb) { qscilexercoffeescript_font_callback = cb; }
    inline void setQsciLexerCoffeeScript_IndentationGuideView_Callback(QsciLexerCoffeeScript_IndentationGuideView_Callback cb) { qscilexercoffeescript_indentationguideview_callback = cb; }
    inline void setQsciLexerCoffeeScript_Keywords_Callback(QsciLexerCoffeeScript_Keywords_Callback cb) { qscilexercoffeescript_keywords_callback = cb; }
    inline void setQsciLexerCoffeeScript_DefaultStyle_Callback(QsciLexerCoffeeScript_DefaultStyle_Callback cb) { qscilexercoffeescript_defaultstyle_callback = cb; }
    inline void setQsciLexerCoffeeScript_Description_Callback(QsciLexerCoffeeScript_Description_Callback cb) { qscilexercoffeescript_description_callback = cb; }
    inline void setQsciLexerCoffeeScript_Paper_Callback(QsciLexerCoffeeScript_Paper_Callback cb) { qscilexercoffeescript_paper_callback = cb; }
    inline void setQsciLexerCoffeeScript_DefaultColor2_Callback(QsciLexerCoffeeScript_DefaultColor2_Callback cb) { qscilexercoffeescript_defaultcolor2_callback = cb; }
    inline void setQsciLexerCoffeeScript_DefaultEolFill_Callback(QsciLexerCoffeeScript_DefaultEolFill_Callback cb) { qscilexercoffeescript_defaulteolfill_callback = cb; }
    inline void setQsciLexerCoffeeScript_DefaultFont2_Callback(QsciLexerCoffeeScript_DefaultFont2_Callback cb) { qscilexercoffeescript_defaultfont2_callback = cb; }
    inline void setQsciLexerCoffeeScript_DefaultPaper2_Callback(QsciLexerCoffeeScript_DefaultPaper2_Callback cb) { qscilexercoffeescript_defaultpaper2_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetEditor_Callback(QsciLexerCoffeeScript_SetEditor_Callback cb) { qscilexercoffeescript_seteditor_callback = cb; }
    inline void setQsciLexerCoffeeScript_RefreshProperties_Callback(QsciLexerCoffeeScript_RefreshProperties_Callback cb) { qscilexercoffeescript_refreshproperties_callback = cb; }
    inline void setQsciLexerCoffeeScript_StyleBitsNeeded_Callback(QsciLexerCoffeeScript_StyleBitsNeeded_Callback cb) { qscilexercoffeescript_stylebitsneeded_callback = cb; }
    inline void setQsciLexerCoffeeScript_WordCharacters_Callback(QsciLexerCoffeeScript_WordCharacters_Callback cb) { qscilexercoffeescript_wordcharacters_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetAutoIndentStyle_Callback(QsciLexerCoffeeScript_SetAutoIndentStyle_Callback cb) { qscilexercoffeescript_setautoindentstyle_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetColor_Callback(QsciLexerCoffeeScript_SetColor_Callback cb) { qscilexercoffeescript_setcolor_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetEolFill_Callback(QsciLexerCoffeeScript_SetEolFill_Callback cb) { qscilexercoffeescript_seteolfill_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetFont_Callback(QsciLexerCoffeeScript_SetFont_Callback cb) { qscilexercoffeescript_setfont_callback = cb; }
    inline void setQsciLexerCoffeeScript_SetPaper_Callback(QsciLexerCoffeeScript_SetPaper_Callback cb) { qscilexercoffeescript_setpaper_callback = cb; }
    inline void setQsciLexerCoffeeScript_ReadProperties_Callback(QsciLexerCoffeeScript_ReadProperties_Callback cb) { qscilexercoffeescript_readproperties_callback = cb; }
    inline void setQsciLexerCoffeeScript_WriteProperties_Callback(QsciLexerCoffeeScript_WriteProperties_Callback cb) { qscilexercoffeescript_writeproperties_callback = cb; }
    inline void setQsciLexerCoffeeScript_Event_Callback(QsciLexerCoffeeScript_Event_Callback cb) { qscilexercoffeescript_event_callback = cb; }
    inline void setQsciLexerCoffeeScript_EventFilter_Callback(QsciLexerCoffeeScript_EventFilter_Callback cb) { qscilexercoffeescript_eventfilter_callback = cb; }
    inline void setQsciLexerCoffeeScript_TimerEvent_Callback(QsciLexerCoffeeScript_TimerEvent_Callback cb) { qscilexercoffeescript_timerevent_callback = cb; }
    inline void setQsciLexerCoffeeScript_ChildEvent_Callback(QsciLexerCoffeeScript_ChildEvent_Callback cb) { qscilexercoffeescript_childevent_callback = cb; }
    inline void setQsciLexerCoffeeScript_CustomEvent_Callback(QsciLexerCoffeeScript_CustomEvent_Callback cb) { qscilexercoffeescript_customevent_callback = cb; }
    inline void setQsciLexerCoffeeScript_ConnectNotify_Callback(QsciLexerCoffeeScript_ConnectNotify_Callback cb) { qscilexercoffeescript_connectnotify_callback = cb; }
    inline void setQsciLexerCoffeeScript_DisconnectNotify_Callback(QsciLexerCoffeeScript_DisconnectNotify_Callback cb) { qscilexercoffeescript_disconnectnotify_callback = cb; }
    inline void setQsciLexerCoffeeScript_TextAsBytes_Callback(QsciLexerCoffeeScript_TextAsBytes_Callback cb) { qscilexercoffeescript_textasbytes_callback = cb; }
    inline void setQsciLexerCoffeeScript_BytesAsText_Callback(QsciLexerCoffeeScript_BytesAsText_Callback cb) { qscilexercoffeescript_bytesastext_callback = cb; }
    inline void setQsciLexerCoffeeScript_Sender_Callback(QsciLexerCoffeeScript_Sender_Callback cb) { qscilexercoffeescript_sender_callback = cb; }
    inline void setQsciLexerCoffeeScript_SenderSignalIndex_Callback(QsciLexerCoffeeScript_SenderSignalIndex_Callback cb) { qscilexercoffeescript_sendersignalindex_callback = cb; }
    inline void setQsciLexerCoffeeScript_Receivers_Callback(QsciLexerCoffeeScript_Receivers_Callback cb) { qscilexercoffeescript_receivers_callback = cb; }
    inline void setQsciLexerCoffeeScript_IsSignalConnected_Callback(QsciLexerCoffeeScript_IsSignalConnected_Callback cb) { qscilexercoffeescript_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerCoffeeScript_MetaObject_IsBase(bool value) const { qscilexercoffeescript_metaobject_isbase = value; }
    inline void setQsciLexerCoffeeScript_Metacast_IsBase(bool value) const { qscilexercoffeescript_metacast_isbase = value; }
    inline void setQsciLexerCoffeeScript_Metacall_IsBase(bool value) const { qscilexercoffeescript_metacall_isbase = value; }
    inline void setQsciLexerCoffeeScript_Language_IsBase(bool value) const { qscilexercoffeescript_language_isbase = value; }
    inline void setQsciLexerCoffeeScript_Lexer_IsBase(bool value) const { qscilexercoffeescript_lexer_isbase = value; }
    inline void setQsciLexerCoffeeScript_LexerId_IsBase(bool value) const { qscilexercoffeescript_lexerid_isbase = value; }
    inline void setQsciLexerCoffeeScript_AutoCompletionFillups_IsBase(bool value) const { qscilexercoffeescript_autocompletionfillups_isbase = value; }
    inline void setQsciLexerCoffeeScript_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercoffeescript_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerCoffeeScript_BlockEnd_IsBase(bool value) const { qscilexercoffeescript_blockend_isbase = value; }
    inline void setQsciLexerCoffeeScript_BlockLookback_IsBase(bool value) const { qscilexercoffeescript_blocklookback_isbase = value; }
    inline void setQsciLexerCoffeeScript_BlockStart_IsBase(bool value) const { qscilexercoffeescript_blockstart_isbase = value; }
    inline void setQsciLexerCoffeeScript_BlockStartKeyword_IsBase(bool value) const { qscilexercoffeescript_blockstartkeyword_isbase = value; }
    inline void setQsciLexerCoffeeScript_BraceStyle_IsBase(bool value) const { qscilexercoffeescript_bracestyle_isbase = value; }
    inline void setQsciLexerCoffeeScript_CaseSensitive_IsBase(bool value) const { qscilexercoffeescript_casesensitive_isbase = value; }
    inline void setQsciLexerCoffeeScript_Color_IsBase(bool value) const { qscilexercoffeescript_color_isbase = value; }
    inline void setQsciLexerCoffeeScript_EolFill_IsBase(bool value) const { qscilexercoffeescript_eolfill_isbase = value; }
    inline void setQsciLexerCoffeeScript_Font_IsBase(bool value) const { qscilexercoffeescript_font_isbase = value; }
    inline void setQsciLexerCoffeeScript_IndentationGuideView_IsBase(bool value) const { qscilexercoffeescript_indentationguideview_isbase = value; }
    inline void setQsciLexerCoffeeScript_Keywords_IsBase(bool value) const { qscilexercoffeescript_keywords_isbase = value; }
    inline void setQsciLexerCoffeeScript_DefaultStyle_IsBase(bool value) const { qscilexercoffeescript_defaultstyle_isbase = value; }
    inline void setQsciLexerCoffeeScript_Description_IsBase(bool value) const { qscilexercoffeescript_description_isbase = value; }
    inline void setQsciLexerCoffeeScript_Paper_IsBase(bool value) const { qscilexercoffeescript_paper_isbase = value; }
    inline void setQsciLexerCoffeeScript_DefaultColor2_IsBase(bool value) const { qscilexercoffeescript_defaultcolor2_isbase = value; }
    inline void setQsciLexerCoffeeScript_DefaultEolFill_IsBase(bool value) const { qscilexercoffeescript_defaulteolfill_isbase = value; }
    inline void setQsciLexerCoffeeScript_DefaultFont2_IsBase(bool value) const { qscilexercoffeescript_defaultfont2_isbase = value; }
    inline void setQsciLexerCoffeeScript_DefaultPaper2_IsBase(bool value) const { qscilexercoffeescript_defaultpaper2_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetEditor_IsBase(bool value) const { qscilexercoffeescript_seteditor_isbase = value; }
    inline void setQsciLexerCoffeeScript_RefreshProperties_IsBase(bool value) const { qscilexercoffeescript_refreshproperties_isbase = value; }
    inline void setQsciLexerCoffeeScript_StyleBitsNeeded_IsBase(bool value) const { qscilexercoffeescript_stylebitsneeded_isbase = value; }
    inline void setQsciLexerCoffeeScript_WordCharacters_IsBase(bool value) const { qscilexercoffeescript_wordcharacters_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetAutoIndentStyle_IsBase(bool value) const { qscilexercoffeescript_setautoindentstyle_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetColor_IsBase(bool value) const { qscilexercoffeescript_setcolor_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetEolFill_IsBase(bool value) const { qscilexercoffeescript_seteolfill_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetFont_IsBase(bool value) const { qscilexercoffeescript_setfont_isbase = value; }
    inline void setQsciLexerCoffeeScript_SetPaper_IsBase(bool value) const { qscilexercoffeescript_setpaper_isbase = value; }
    inline void setQsciLexerCoffeeScript_ReadProperties_IsBase(bool value) const { qscilexercoffeescript_readproperties_isbase = value; }
    inline void setQsciLexerCoffeeScript_WriteProperties_IsBase(bool value) const { qscilexercoffeescript_writeproperties_isbase = value; }
    inline void setQsciLexerCoffeeScript_Event_IsBase(bool value) const { qscilexercoffeescript_event_isbase = value; }
    inline void setQsciLexerCoffeeScript_EventFilter_IsBase(bool value) const { qscilexercoffeescript_eventfilter_isbase = value; }
    inline void setQsciLexerCoffeeScript_TimerEvent_IsBase(bool value) const { qscilexercoffeescript_timerevent_isbase = value; }
    inline void setQsciLexerCoffeeScript_ChildEvent_IsBase(bool value) const { qscilexercoffeescript_childevent_isbase = value; }
    inline void setQsciLexerCoffeeScript_CustomEvent_IsBase(bool value) const { qscilexercoffeescript_customevent_isbase = value; }
    inline void setQsciLexerCoffeeScript_ConnectNotify_IsBase(bool value) const { qscilexercoffeescript_connectnotify_isbase = value; }
    inline void setQsciLexerCoffeeScript_DisconnectNotify_IsBase(bool value) const { qscilexercoffeescript_disconnectnotify_isbase = value; }
    inline void setQsciLexerCoffeeScript_TextAsBytes_IsBase(bool value) const { qscilexercoffeescript_textasbytes_isbase = value; }
    inline void setQsciLexerCoffeeScript_BytesAsText_IsBase(bool value) const { qscilexercoffeescript_bytesastext_isbase = value; }
    inline void setQsciLexerCoffeeScript_Sender_IsBase(bool value) const { qscilexercoffeescript_sender_isbase = value; }
    inline void setQsciLexerCoffeeScript_SenderSignalIndex_IsBase(bool value) const { qscilexercoffeescript_sendersignalindex_isbase = value; }
    inline void setQsciLexerCoffeeScript_Receivers_IsBase(bool value) const { qscilexercoffeescript_receivers_isbase = value; }
    inline void setQsciLexerCoffeeScript_IsSignalConnected_IsBase(bool value) const { qscilexercoffeescript_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercoffeescript_metaobject_isbase) {
            qscilexercoffeescript_metaobject_isbase = false;
            return QsciLexerCoffeeScript::metaObject();
        }
        auto metaobject_cb = qscilexercoffeescript_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercoffeescript_metacast_isbase) {
            qscilexercoffeescript_metacast_isbase = false;
            return QsciLexerCoffeeScript::qt_metacast(param1);
        }
        auto metacast_cb = qscilexercoffeescript_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercoffeescript_metacall_isbase) {
            qscilexercoffeescript_metacall_isbase = false;
            return QsciLexerCoffeeScript::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexercoffeescript_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexercoffeescript_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercoffeescript_lexer_isbase) {
            qscilexercoffeescript_lexer_isbase = false;
            return QsciLexerCoffeeScript::lexer();
        }
        auto lexer_cb = qscilexercoffeescript_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercoffeescript_lexerid_isbase) {
            qscilexercoffeescript_lexerid_isbase = false;
            return QsciLexerCoffeeScript::lexerId();
        }
        auto lexerid_cb = qscilexercoffeescript_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercoffeescript_autocompletionfillups_isbase) {
            qscilexercoffeescript_autocompletionfillups_isbase = false;
            return QsciLexerCoffeeScript::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexercoffeescript_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercoffeescript_autocompletionwordseparators_isbase) {
            qscilexercoffeescript_autocompletionwordseparators_isbase = false;
            return QsciLexerCoffeeScript::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexercoffeescript_autocompletionwordseparators_callback;
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
        return QsciLexerCoffeeScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercoffeescript_blockend_isbase) {
            qscilexercoffeescript_blockend_isbase = false;
            return QsciLexerCoffeeScript::blockEnd(style);
        }
        auto blockend_cb = qscilexercoffeescript_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercoffeescript_blocklookback_isbase) {
            qscilexercoffeescript_blocklookback_isbase = false;
            return QsciLexerCoffeeScript::blockLookback();
        }
        auto blocklookback_cb = qscilexercoffeescript_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercoffeescript_blockstart_isbase) {
            qscilexercoffeescript_blockstart_isbase = false;
            return QsciLexerCoffeeScript::blockStart(style);
        }
        auto blockstart_cb = qscilexercoffeescript_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercoffeescript_blockstartkeyword_isbase) {
            qscilexercoffeescript_blockstartkeyword_isbase = false;
            return QsciLexerCoffeeScript::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexercoffeescript_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercoffeescript_bracestyle_isbase) {
            qscilexercoffeescript_bracestyle_isbase = false;
            return QsciLexerCoffeeScript::braceStyle();
        }
        auto bracestyle_cb = qscilexercoffeescript_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercoffeescript_casesensitive_isbase) {
            qscilexercoffeescript_casesensitive_isbase = false;
            return QsciLexerCoffeeScript::caseSensitive();
        }
        auto casesensitive_cb = qscilexercoffeescript_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercoffeescript_color_isbase) {
            qscilexercoffeescript_color_isbase = false;
            return QsciLexerCoffeeScript::color(style);
        }
        auto color_cb = qscilexercoffeescript_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercoffeescript_eolfill_isbase) {
            qscilexercoffeescript_eolfill_isbase = false;
            return QsciLexerCoffeeScript::eolFill(style);
        }
        auto eolfill_cb = qscilexercoffeescript_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercoffeescript_font_isbase) {
            qscilexercoffeescript_font_isbase = false;
            return QsciLexerCoffeeScript::font(style);
        }
        auto font_cb = qscilexercoffeescript_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercoffeescript_indentationguideview_isbase) {
            qscilexercoffeescript_indentationguideview_isbase = false;
            return QsciLexerCoffeeScript::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexercoffeescript_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercoffeescript_keywords_isbase) {
            qscilexercoffeescript_keywords_isbase = false;
            return QsciLexerCoffeeScript::keywords(set);
        }
        auto keywords_cb = qscilexercoffeescript_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercoffeescript_defaultstyle_isbase) {
            qscilexercoffeescript_defaultstyle_isbase = false;
            return QsciLexerCoffeeScript::defaultStyle();
        }
        auto defaultstyle_cb = qscilexercoffeescript_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexercoffeescript_description_callback;
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
        if (qscilexercoffeescript_paper_isbase) {
            qscilexercoffeescript_paper_isbase = false;
            return QsciLexerCoffeeScript::paper(style);
        }
        auto paper_cb = qscilexercoffeescript_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercoffeescript_defaultcolor2_isbase) {
            qscilexercoffeescript_defaultcolor2_isbase = false;
            return QsciLexerCoffeeScript::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexercoffeescript_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercoffeescript_defaulteolfill_isbase) {
            qscilexercoffeescript_defaulteolfill_isbase = false;
            return QsciLexerCoffeeScript::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexercoffeescript_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercoffeescript_defaultfont2_isbase) {
            qscilexercoffeescript_defaultfont2_isbase = false;
            return QsciLexerCoffeeScript::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexercoffeescript_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercoffeescript_defaultpaper2_isbase) {
            qscilexercoffeescript_defaultpaper2_isbase = false;
            return QsciLexerCoffeeScript::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexercoffeescript_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerCoffeeScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercoffeescript_seteditor_isbase) {
            qscilexercoffeescript_seteditor_isbase = false;
            QsciLexerCoffeeScript::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexercoffeescript_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercoffeescript_refreshproperties_isbase) {
            qscilexercoffeescript_refreshproperties_isbase = false;
            QsciLexerCoffeeScript::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexercoffeescript_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerCoffeeScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercoffeescript_stylebitsneeded_isbase) {
            qscilexercoffeescript_stylebitsneeded_isbase = false;
            return QsciLexerCoffeeScript::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexercoffeescript_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercoffeescript_wordcharacters_isbase) {
            qscilexercoffeescript_wordcharacters_isbase = false;
            return QsciLexerCoffeeScript::wordCharacters();
        }
        auto wordcharacters_cb = qscilexercoffeescript_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercoffeescript_setautoindentstyle_isbase) {
            qscilexercoffeescript_setautoindentstyle_isbase = false;
            QsciLexerCoffeeScript::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexercoffeescript_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercoffeescript_setcolor_isbase) {
            qscilexercoffeescript_setcolor_isbase = false;
            QsciLexerCoffeeScript::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexercoffeescript_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercoffeescript_seteolfill_isbase) {
            qscilexercoffeescript_seteolfill_isbase = false;
            QsciLexerCoffeeScript::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexercoffeescript_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercoffeescript_setfont_isbase) {
            qscilexercoffeescript_setfont_isbase = false;
            QsciLexerCoffeeScript::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexercoffeescript_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercoffeescript_setpaper_isbase) {
            qscilexercoffeescript_setpaper_isbase = false;
            QsciLexerCoffeeScript::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexercoffeescript_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercoffeescript_readproperties_isbase) {
            qscilexercoffeescript_readproperties_isbase = false;
            return QsciLexerCoffeeScript::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexercoffeescript_readproperties_callback;
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
        return QsciLexerCoffeeScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercoffeescript_writeproperties_isbase) {
            qscilexercoffeescript_writeproperties_isbase = false;
            return QsciLexerCoffeeScript::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexercoffeescript_writeproperties_callback;
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
        return QsciLexerCoffeeScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercoffeescript_event_isbase) {
            qscilexercoffeescript_event_isbase = false;
            return QsciLexerCoffeeScript::event(event);
        }
        auto event_cb = qscilexercoffeescript_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercoffeescript_eventfilter_isbase) {
            qscilexercoffeescript_eventfilter_isbase = false;
            return QsciLexerCoffeeScript::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexercoffeescript_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercoffeescript_timerevent_isbase) {
            qscilexercoffeescript_timerevent_isbase = false;
            QsciLexerCoffeeScript::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexercoffeescript_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercoffeescript_childevent_isbase) {
            qscilexercoffeescript_childevent_isbase = false;
            QsciLexerCoffeeScript::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexercoffeescript_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercoffeescript_customevent_isbase) {
            qscilexercoffeescript_customevent_isbase = false;
            QsciLexerCoffeeScript::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexercoffeescript_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_connectnotify_isbase) {
            qscilexercoffeescript_connectnotify_isbase = false;
            QsciLexerCoffeeScript::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexercoffeescript_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_disconnectnotify_isbase) {
            qscilexercoffeescript_disconnectnotify_isbase = false;
            QsciLexerCoffeeScript::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexercoffeescript_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexercoffeescript_textasbytes_isbase) {
            qscilexercoffeescript_textasbytes_isbase = false;
            return QsciLexerCoffeeScript::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexercoffeescript_textasbytes_callback;
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
        return QsciLexerCoffeeScript::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexercoffeescript_bytesastext_isbase) {
            qscilexercoffeescript_bytesastext_isbase = false;
            return QsciLexerCoffeeScript::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexercoffeescript_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerCoffeeScript::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercoffeescript_sender_isbase) {
            qscilexercoffeescript_sender_isbase = false;
            return QsciLexerCoffeeScript::sender();
        }
        auto sender_cb = qscilexercoffeescript_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerCoffeeScript::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercoffeescript_sendersignalindex_isbase) {
            qscilexercoffeescript_sendersignalindex_isbase = false;
            return QsciLexerCoffeeScript::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexercoffeescript_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercoffeescript_receivers_isbase) {
            qscilexercoffeescript_receivers_isbase = false;
            return QsciLexerCoffeeScript::receivers(signal);
        }
        auto receivers_cb = qscilexercoffeescript_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercoffeescript_issignalconnected_isbase) {
            qscilexercoffeescript_issignalconnected_isbase = false;
            return QsciLexerCoffeeScript::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexercoffeescript_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerCoffeeScript_ReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCoffeeScript_SuperReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCoffeeScript_WriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCoffeeScript_SuperWriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCoffeeScript_TimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event);
    friend void QsciLexerCoffeeScript_SuperTimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event);
    friend void QsciLexerCoffeeScript_ChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event);
    friend void QsciLexerCoffeeScript_SuperChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event);
    friend void QsciLexerCoffeeScript_CustomEvent(QsciLexerCoffeeScript* self, QEvent* event);
    friend void QsciLexerCoffeeScript_SuperCustomEvent(QsciLexerCoffeeScript* self, QEvent* event);
    friend void QsciLexerCoffeeScript_ConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend void QsciLexerCoffeeScript_SuperConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend void QsciLexerCoffeeScript_DisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend void QsciLexerCoffeeScript_SuperDisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerCoffeeScript_TextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text);
    friend libqt_string QsciLexerCoffeeScript_SuperTextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text);
    friend libqt_string QsciLexerCoffeeScript_BytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size);
    friend libqt_string QsciLexerCoffeeScript_SuperBytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size);
    friend QObject* QsciLexerCoffeeScript_Sender(const QsciLexerCoffeeScript* self);
    friend QObject* QsciLexerCoffeeScript_SuperSender(const QsciLexerCoffeeScript* self);
    friend int QsciLexerCoffeeScript_SenderSignalIndex(const QsciLexerCoffeeScript* self);
    friend int QsciLexerCoffeeScript_SuperSenderSignalIndex(const QsciLexerCoffeeScript* self);
    friend int QsciLexerCoffeeScript_Receivers(const QsciLexerCoffeeScript* self, const char* signal);
    friend int QsciLexerCoffeeScript_SuperReceivers(const QsciLexerCoffeeScript* self, const char* signal);
    friend bool QsciLexerCoffeeScript_IsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend bool QsciLexerCoffeeScript_SuperIsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal);
};

#endif
