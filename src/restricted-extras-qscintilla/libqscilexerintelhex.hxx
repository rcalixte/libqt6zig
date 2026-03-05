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
    using QsciLexerIntelHex_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerIntelHex_Metacast_Callback = void* (*)(QsciLexerIntelHex*, const char*);
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
    using QsciLexerIntelHex_ReadProperties_Callback = bool (*)(QsciLexerIntelHex*, QSettings*, const char*);
    using QsciLexerIntelHex_WriteProperties_Callback = bool (*)(const QsciLexerIntelHex*, QSettings*, const char*);
    using QsciLexerIntelHex_Event_Callback = bool (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_EventFilter_Callback = bool (*)(QsciLexerIntelHex*, QObject*, QEvent*);
    using QsciLexerIntelHex_TimerEvent_Callback = void (*)(QsciLexerIntelHex*, QTimerEvent*);
    using QsciLexerIntelHex_ChildEvent_Callback = void (*)(QsciLexerIntelHex*, QChildEvent*);
    using QsciLexerIntelHex_CustomEvent_Callback = void (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_ConnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex_DisconnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex_TextAsBytes_Callback = libqt_string (*)(const QsciLexerIntelHex*, const char*);
    using QsciLexerIntelHex_BytesAsText_Callback = const char* (*)(const QsciLexerIntelHex*, const char*, int);
    using QsciLexerIntelHex_Sender_Callback = QObject* (*)();
    using QsciLexerIntelHex_SenderSignalIndex_Callback = int (*)();
    using QsciLexerIntelHex_Receivers_Callback = int (*)(const QsciLexerIntelHex*, const char*);
    using QsciLexerIntelHex_IsSignalConnected_Callback = bool (*)(const QsciLexerIntelHex*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerIntelHex_MetaObject_Callback qscilexerintelhex_metaobject_callback = nullptr;
    QsciLexerIntelHex_Metacast_Callback qscilexerintelhex_metacast_callback = nullptr;
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
    mutable bool qscilexerintelhex_metaobject_isbase = false;
    mutable bool qscilexerintelhex_metacast_isbase = false;
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

    // Callback setters
    inline void setQsciLexerIntelHex_MetaObject_Callback(QsciLexerIntelHex_MetaObject_Callback cb) { qscilexerintelhex_metaobject_callback = cb; }
    inline void setQsciLexerIntelHex_Metacast_Callback(QsciLexerIntelHex_Metacast_Callback cb) { qscilexerintelhex_metacast_callback = cb; }
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
    inline void setQsciLexerIntelHex_MetaObject_IsBase(bool value) const { qscilexerintelhex_metaobject_isbase = value; }
    inline void setQsciLexerIntelHex_Metacast_IsBase(bool value) const { qscilexerintelhex_metacast_isbase = value; }
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
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerintelhex_metaobject_isbase) {
            qscilexerintelhex_metaobject_isbase = false;
            return QsciLexerIntelHex::metaObject();
        }
        auto metaobject_cb = qscilexerintelhex_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerintelhex_metacast_isbase) {
            qscilexerintelhex_metacast_isbase = false;
            return QsciLexerIntelHex::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerintelhex_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerintelhex_metacall_isbase) {
            qscilexerintelhex_metacall_isbase = false;
            return QsciLexerIntelHex::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerintelhex_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerintelhex_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerintelhex_lexer_isbase) {
            qscilexerintelhex_lexer_isbase = false;
            return QsciLexerIntelHex::lexer();
        }
        auto lexer_cb = qscilexerintelhex_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerintelhex_lexerid_isbase) {
            qscilexerintelhex_lexerid_isbase = false;
            return QsciLexerIntelHex::lexerId();
        }
        auto lexerid_cb = qscilexerintelhex_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerintelhex_autocompletionfillups_isbase) {
            qscilexerintelhex_autocompletionfillups_isbase = false;
            return QsciLexerIntelHex::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerintelhex_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerintelhex_autocompletionwordseparators_isbase) {
            qscilexerintelhex_autocompletionwordseparators_isbase = false;
            return QsciLexerIntelHex::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerintelhex_autocompletionwordseparators_callback;
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
        return QsciLexerIntelHex::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerintelhex_blockend_isbase) {
            qscilexerintelhex_blockend_isbase = false;
            return QsciLexerIntelHex::blockEnd(style);
        }
        auto blockend_cb = qscilexerintelhex_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerintelhex_blocklookback_isbase) {
            qscilexerintelhex_blocklookback_isbase = false;
            return QsciLexerIntelHex::blockLookback();
        }
        auto blocklookback_cb = qscilexerintelhex_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerintelhex_blockstart_isbase) {
            qscilexerintelhex_blockstart_isbase = false;
            return QsciLexerIntelHex::blockStart(style);
        }
        auto blockstart_cb = qscilexerintelhex_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerintelhex_blockstartkeyword_isbase) {
            qscilexerintelhex_blockstartkeyword_isbase = false;
            return QsciLexerIntelHex::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerintelhex_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerintelhex_bracestyle_isbase) {
            qscilexerintelhex_bracestyle_isbase = false;
            return QsciLexerIntelHex::braceStyle();
        }
        auto bracestyle_cb = qscilexerintelhex_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerintelhex_casesensitive_isbase) {
            qscilexerintelhex_casesensitive_isbase = false;
            return QsciLexerIntelHex::caseSensitive();
        }
        auto casesensitive_cb = qscilexerintelhex_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerintelhex_color_isbase) {
            qscilexerintelhex_color_isbase = false;
            return QsciLexerIntelHex::color(style);
        }
        auto color_cb = qscilexerintelhex_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerintelhex_eolfill_isbase) {
            qscilexerintelhex_eolfill_isbase = false;
            return QsciLexerIntelHex::eolFill(style);
        }
        auto eolfill_cb = qscilexerintelhex_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerintelhex_font_isbase) {
            qscilexerintelhex_font_isbase = false;
            return QsciLexerIntelHex::font(style);
        }
        auto font_cb = qscilexerintelhex_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerintelhex_indentationguideview_isbase) {
            qscilexerintelhex_indentationguideview_isbase = false;
            return QsciLexerIntelHex::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerintelhex_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerintelhex_keywords_isbase) {
            qscilexerintelhex_keywords_isbase = false;
            return QsciLexerIntelHex::keywords(set);
        }
        auto keywords_cb = qscilexerintelhex_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerintelhex_defaultstyle_isbase) {
            qscilexerintelhex_defaultstyle_isbase = false;
            return QsciLexerIntelHex::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerintelhex_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerintelhex_description_callback;
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
        if (qscilexerintelhex_paper_isbase) {
            qscilexerintelhex_paper_isbase = false;
            return QsciLexerIntelHex::paper(style);
        }
        auto paper_cb = qscilexerintelhex_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerintelhex_defaultcolor2_isbase) {
            qscilexerintelhex_defaultcolor2_isbase = false;
            return QsciLexerIntelHex::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerintelhex_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerintelhex_defaulteolfill_isbase) {
            qscilexerintelhex_defaulteolfill_isbase = false;
            return QsciLexerIntelHex::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerintelhex_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerintelhex_defaultfont2_isbase) {
            qscilexerintelhex_defaultfont2_isbase = false;
            return QsciLexerIntelHex::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerintelhex_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerintelhex_defaultpaper2_isbase) {
            qscilexerintelhex_defaultpaper2_isbase = false;
            return QsciLexerIntelHex::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerintelhex_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerIntelHex::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerintelhex_seteditor_isbase) {
            qscilexerintelhex_seteditor_isbase = false;
            QsciLexerIntelHex::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerintelhex_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerintelhex_refreshproperties_isbase) {
            qscilexerintelhex_refreshproperties_isbase = false;
            QsciLexerIntelHex::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerintelhex_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerIntelHex::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerintelhex_stylebitsneeded_isbase) {
            qscilexerintelhex_stylebitsneeded_isbase = false;
            return QsciLexerIntelHex::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerintelhex_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerintelhex_wordcharacters_isbase) {
            qscilexerintelhex_wordcharacters_isbase = false;
            return QsciLexerIntelHex::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerintelhex_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerintelhex_setautoindentstyle_isbase) {
            qscilexerintelhex_setautoindentstyle_isbase = false;
            QsciLexerIntelHex::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerintelhex_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerintelhex_setcolor_isbase) {
            qscilexerintelhex_setcolor_isbase = false;
            QsciLexerIntelHex::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerintelhex_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerintelhex_seteolfill_isbase) {
            qscilexerintelhex_seteolfill_isbase = false;
            QsciLexerIntelHex::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerintelhex_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerintelhex_setfont_isbase) {
            qscilexerintelhex_setfont_isbase = false;
            QsciLexerIntelHex::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerintelhex_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerintelhex_setpaper_isbase) {
            qscilexerintelhex_setpaper_isbase = false;
            QsciLexerIntelHex::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerintelhex_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerintelhex_readproperties_isbase) {
            qscilexerintelhex_readproperties_isbase = false;
            return QsciLexerIntelHex::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerintelhex_readproperties_callback;
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
        return QsciLexerIntelHex::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerintelhex_writeproperties_isbase) {
            qscilexerintelhex_writeproperties_isbase = false;
            return QsciLexerIntelHex::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerintelhex_writeproperties_callback;
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
        return QsciLexerIntelHex::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerintelhex_event_isbase) {
            qscilexerintelhex_event_isbase = false;
            return QsciLexerIntelHex::event(event);
        }
        auto event_cb = qscilexerintelhex_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerintelhex_eventfilter_isbase) {
            qscilexerintelhex_eventfilter_isbase = false;
            return QsciLexerIntelHex::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerintelhex_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerIntelHex::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerintelhex_timerevent_isbase) {
            qscilexerintelhex_timerevent_isbase = false;
            QsciLexerIntelHex::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerintelhex_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerintelhex_childevent_isbase) {
            qscilexerintelhex_childevent_isbase = false;
            QsciLexerIntelHex::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerintelhex_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerintelhex_customevent_isbase) {
            qscilexerintelhex_customevent_isbase = false;
            QsciLexerIntelHex::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerintelhex_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_connectnotify_isbase) {
            qscilexerintelhex_connectnotify_isbase = false;
            QsciLexerIntelHex::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerintelhex_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_disconnectnotify_isbase) {
            qscilexerintelhex_disconnectnotify_isbase = false;
            QsciLexerIntelHex::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerintelhex_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerIntelHex::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerintelhex_textasbytes_isbase) {
            qscilexerintelhex_textasbytes_isbase = false;
            return QsciLexerIntelHex::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerintelhex_textasbytes_callback;
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
        return QsciLexerIntelHex::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerintelhex_bytesastext_isbase) {
            qscilexerintelhex_bytesastext_isbase = false;
            return QsciLexerIntelHex::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerintelhex_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerIntelHex::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerintelhex_sender_isbase) {
            qscilexerintelhex_sender_isbase = false;
            return QsciLexerIntelHex::sender();
        }
        auto sender_cb = qscilexerintelhex_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerIntelHex::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerintelhex_sendersignalindex_isbase) {
            qscilexerintelhex_sendersignalindex_isbase = false;
            return QsciLexerIntelHex::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerintelhex_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerintelhex_receivers_isbase) {
            qscilexerintelhex_receivers_isbase = false;
            return QsciLexerIntelHex::receivers(signal);
        }
        auto receivers_cb = qscilexerintelhex_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerintelhex_issignalconnected_isbase) {
            qscilexerintelhex_issignalconnected_isbase = false;
            return QsciLexerIntelHex::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerintelhex_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerIntelHex_ReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_SuperReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_WriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_SuperWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerIntelHex_TimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
    friend void QsciLexerIntelHex_SuperTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
    friend void QsciLexerIntelHex_ChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
    friend void QsciLexerIntelHex_SuperChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
    friend void QsciLexerIntelHex_CustomEvent(QsciLexerIntelHex* self, QEvent* event);
    friend void QsciLexerIntelHex_SuperCustomEvent(QsciLexerIntelHex* self, QEvent* event);
    friend void QsciLexerIntelHex_ConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_SuperConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_DisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_SuperDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerIntelHex_TextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
    friend libqt_string QsciLexerIntelHex_SuperTextAsBytes(const QsciLexerIntelHex* self, const libqt_string text);
    friend libqt_string QsciLexerIntelHex_BytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
    friend libqt_string QsciLexerIntelHex_SuperBytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size);
    friend QObject* QsciLexerIntelHex_Sender(const QsciLexerIntelHex* self);
    friend QObject* QsciLexerIntelHex_SuperSender(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_SenderSignalIndex(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_SuperSenderSignalIndex(const QsciLexerIntelHex* self);
    friend int QsciLexerIntelHex_Receivers(const QsciLexerIntelHex* self, const char* signal);
    friend int QsciLexerIntelHex_SuperReceivers(const QsciLexerIntelHex* self, const char* signal);
    friend bool QsciLexerIntelHex_IsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend bool QsciLexerIntelHex_SuperIsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal);
};

#endif
