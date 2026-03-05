#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOV_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPOV_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPOV so that we can call protected methods
class VirtualQsciLexerPOV final : public QsciLexerPOV {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerPOV = true;

    // Virtual class public types (including callbacks)
    using QsciLexerPOV_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerPOV_Metacast_Callback = void* (*)(QsciLexerPOV*, const char*);
    using QsciLexerPOV_Metacall_Callback = int (*)(QsciLexerPOV*, int, int, void**);
    using QsciLexerPOV_SetFoldComments_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_SetFoldCompact_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_SetFoldDirectives_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_Language_Callback = const char* (*)();
    using QsciLexerPOV_Lexer_Callback = const char* (*)();
    using QsciLexerPOV_LexerId_Callback = int (*)();
    using QsciLexerPOV_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPOV_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerPOV_BlockEnd_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BlockLookback_Callback = int (*)();
    using QsciLexerPOV_BlockStart_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BraceStyle_Callback = int (*)();
    using QsciLexerPOV_CaseSensitive_Callback = bool (*)();
    using QsciLexerPOV_Color_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_EolFill_Callback = bool (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_Font_Callback = QFont* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_IndentationGuideView_Callback = int (*)();
    using QsciLexerPOV_Keywords_Callback = const char* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultStyle_Callback = int (*)();
    using QsciLexerPOV_Description_Callback = const char* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_Paper_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultColor2_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultEolFill_Callback = bool (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultFont2_Callback = QFont* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_SetEditor_Callback = void (*)(QsciLexerPOV*, QsciScintilla*);
    using QsciLexerPOV_RefreshProperties_Callback = void (*)();
    using QsciLexerPOV_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPOV_WordCharacters_Callback = const char* (*)();
    using QsciLexerPOV_SetAutoIndentStyle_Callback = void (*)(QsciLexerPOV*, int);
    using QsciLexerPOV_SetColor_Callback = void (*)(QsciLexerPOV*, QColor*, int);
    using QsciLexerPOV_SetEolFill_Callback = void (*)(QsciLexerPOV*, bool, int);
    using QsciLexerPOV_SetFont_Callback = void (*)(QsciLexerPOV*, QFont*, int);
    using QsciLexerPOV_SetPaper_Callback = void (*)(QsciLexerPOV*, QColor*, int);
    using QsciLexerPOV_ReadProperties_Callback = bool (*)(QsciLexerPOV*, QSettings*, const char*);
    using QsciLexerPOV_WriteProperties_Callback = bool (*)(const QsciLexerPOV*, QSettings*, const char*);
    using QsciLexerPOV_Event_Callback = bool (*)(QsciLexerPOV*, QEvent*);
    using QsciLexerPOV_EventFilter_Callback = bool (*)(QsciLexerPOV*, QObject*, QEvent*);
    using QsciLexerPOV_TimerEvent_Callback = void (*)(QsciLexerPOV*, QTimerEvent*);
    using QsciLexerPOV_ChildEvent_Callback = void (*)(QsciLexerPOV*, QChildEvent*);
    using QsciLexerPOV_CustomEvent_Callback = void (*)(QsciLexerPOV*, QEvent*);
    using QsciLexerPOV_ConnectNotify_Callback = void (*)(QsciLexerPOV*, QMetaMethod*);
    using QsciLexerPOV_DisconnectNotify_Callback = void (*)(QsciLexerPOV*, QMetaMethod*);
    using QsciLexerPOV_TextAsBytes_Callback = libqt_string (*)(const QsciLexerPOV*, const char*);
    using QsciLexerPOV_BytesAsText_Callback = const char* (*)(const QsciLexerPOV*, const char*, int);
    using QsciLexerPOV_Sender_Callback = QObject* (*)();
    using QsciLexerPOV_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPOV_Receivers_Callback = int (*)(const QsciLexerPOV*, const char*);
    using QsciLexerPOV_IsSignalConnected_Callback = bool (*)(const QsciLexerPOV*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerPOV_MetaObject_Callback qscilexerpov_metaobject_callback = nullptr;
    QsciLexerPOV_Metacast_Callback qscilexerpov_metacast_callback = nullptr;
    QsciLexerPOV_Metacall_Callback qscilexerpov_metacall_callback = nullptr;
    QsciLexerPOV_SetFoldComments_Callback qscilexerpov_setfoldcomments_callback = nullptr;
    QsciLexerPOV_SetFoldCompact_Callback qscilexerpov_setfoldcompact_callback = nullptr;
    QsciLexerPOV_SetFoldDirectives_Callback qscilexerpov_setfolddirectives_callback = nullptr;
    QsciLexerPOV_Language_Callback qscilexerpov_language_callback = nullptr;
    QsciLexerPOV_Lexer_Callback qscilexerpov_lexer_callback = nullptr;
    QsciLexerPOV_LexerId_Callback qscilexerpov_lexerid_callback = nullptr;
    QsciLexerPOV_AutoCompletionFillups_Callback qscilexerpov_autocompletionfillups_callback = nullptr;
    QsciLexerPOV_AutoCompletionWordSeparators_Callback qscilexerpov_autocompletionwordseparators_callback = nullptr;
    QsciLexerPOV_BlockEnd_Callback qscilexerpov_blockend_callback = nullptr;
    QsciLexerPOV_BlockLookback_Callback qscilexerpov_blocklookback_callback = nullptr;
    QsciLexerPOV_BlockStart_Callback qscilexerpov_blockstart_callback = nullptr;
    QsciLexerPOV_BlockStartKeyword_Callback qscilexerpov_blockstartkeyword_callback = nullptr;
    QsciLexerPOV_BraceStyle_Callback qscilexerpov_bracestyle_callback = nullptr;
    QsciLexerPOV_CaseSensitive_Callback qscilexerpov_casesensitive_callback = nullptr;
    QsciLexerPOV_Color_Callback qscilexerpov_color_callback = nullptr;
    QsciLexerPOV_EolFill_Callback qscilexerpov_eolfill_callback = nullptr;
    QsciLexerPOV_Font_Callback qscilexerpov_font_callback = nullptr;
    QsciLexerPOV_IndentationGuideView_Callback qscilexerpov_indentationguideview_callback = nullptr;
    QsciLexerPOV_Keywords_Callback qscilexerpov_keywords_callback = nullptr;
    QsciLexerPOV_DefaultStyle_Callback qscilexerpov_defaultstyle_callback = nullptr;
    QsciLexerPOV_Description_Callback qscilexerpov_description_callback = nullptr;
    QsciLexerPOV_Paper_Callback qscilexerpov_paper_callback = nullptr;
    QsciLexerPOV_DefaultColor2_Callback qscilexerpov_defaultcolor2_callback = nullptr;
    QsciLexerPOV_DefaultEolFill_Callback qscilexerpov_defaulteolfill_callback = nullptr;
    QsciLexerPOV_DefaultFont2_Callback qscilexerpov_defaultfont2_callback = nullptr;
    QsciLexerPOV_DefaultPaper2_Callback qscilexerpov_defaultpaper2_callback = nullptr;
    QsciLexerPOV_SetEditor_Callback qscilexerpov_seteditor_callback = nullptr;
    QsciLexerPOV_RefreshProperties_Callback qscilexerpov_refreshproperties_callback = nullptr;
    QsciLexerPOV_StyleBitsNeeded_Callback qscilexerpov_stylebitsneeded_callback = nullptr;
    QsciLexerPOV_WordCharacters_Callback qscilexerpov_wordcharacters_callback = nullptr;
    QsciLexerPOV_SetAutoIndentStyle_Callback qscilexerpov_setautoindentstyle_callback = nullptr;
    QsciLexerPOV_SetColor_Callback qscilexerpov_setcolor_callback = nullptr;
    QsciLexerPOV_SetEolFill_Callback qscilexerpov_seteolfill_callback = nullptr;
    QsciLexerPOV_SetFont_Callback qscilexerpov_setfont_callback = nullptr;
    QsciLexerPOV_SetPaper_Callback qscilexerpov_setpaper_callback = nullptr;
    QsciLexerPOV_ReadProperties_Callback qscilexerpov_readproperties_callback = nullptr;
    QsciLexerPOV_WriteProperties_Callback qscilexerpov_writeproperties_callback = nullptr;
    QsciLexerPOV_Event_Callback qscilexerpov_event_callback = nullptr;
    QsciLexerPOV_EventFilter_Callback qscilexerpov_eventfilter_callback = nullptr;
    QsciLexerPOV_TimerEvent_Callback qscilexerpov_timerevent_callback = nullptr;
    QsciLexerPOV_ChildEvent_Callback qscilexerpov_childevent_callback = nullptr;
    QsciLexerPOV_CustomEvent_Callback qscilexerpov_customevent_callback = nullptr;
    QsciLexerPOV_ConnectNotify_Callback qscilexerpov_connectnotify_callback = nullptr;
    QsciLexerPOV_DisconnectNotify_Callback qscilexerpov_disconnectnotify_callback = nullptr;
    QsciLexerPOV_TextAsBytes_Callback qscilexerpov_textasbytes_callback = nullptr;
    QsciLexerPOV_BytesAsText_Callback qscilexerpov_bytesastext_callback = nullptr;
    QsciLexerPOV_Sender_Callback qscilexerpov_sender_callback = nullptr;
    QsciLexerPOV_SenderSignalIndex_Callback qscilexerpov_sendersignalindex_callback = nullptr;
    QsciLexerPOV_Receivers_Callback qscilexerpov_receivers_callback = nullptr;
    QsciLexerPOV_IsSignalConnected_Callback qscilexerpov_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpov_metaobject_isbase = false;
    mutable bool qscilexerpov_metacast_isbase = false;
    mutable bool qscilexerpov_metacall_isbase = false;
    mutable bool qscilexerpov_setfoldcomments_isbase = false;
    mutable bool qscilexerpov_setfoldcompact_isbase = false;
    mutable bool qscilexerpov_setfolddirectives_isbase = false;
    mutable bool qscilexerpov_language_isbase = false;
    mutable bool qscilexerpov_lexer_isbase = false;
    mutable bool qscilexerpov_lexerid_isbase = false;
    mutable bool qscilexerpov_autocompletionfillups_isbase = false;
    mutable bool qscilexerpov_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpov_blockend_isbase = false;
    mutable bool qscilexerpov_blocklookback_isbase = false;
    mutable bool qscilexerpov_blockstart_isbase = false;
    mutable bool qscilexerpov_blockstartkeyword_isbase = false;
    mutable bool qscilexerpov_bracestyle_isbase = false;
    mutable bool qscilexerpov_casesensitive_isbase = false;
    mutable bool qscilexerpov_color_isbase = false;
    mutable bool qscilexerpov_eolfill_isbase = false;
    mutable bool qscilexerpov_font_isbase = false;
    mutable bool qscilexerpov_indentationguideview_isbase = false;
    mutable bool qscilexerpov_keywords_isbase = false;
    mutable bool qscilexerpov_defaultstyle_isbase = false;
    mutable bool qscilexerpov_description_isbase = false;
    mutable bool qscilexerpov_paper_isbase = false;
    mutable bool qscilexerpov_defaultcolor2_isbase = false;
    mutable bool qscilexerpov_defaulteolfill_isbase = false;
    mutable bool qscilexerpov_defaultfont2_isbase = false;
    mutable bool qscilexerpov_defaultpaper2_isbase = false;
    mutable bool qscilexerpov_seteditor_isbase = false;
    mutable bool qscilexerpov_refreshproperties_isbase = false;
    mutable bool qscilexerpov_stylebitsneeded_isbase = false;
    mutable bool qscilexerpov_wordcharacters_isbase = false;
    mutable bool qscilexerpov_setautoindentstyle_isbase = false;
    mutable bool qscilexerpov_setcolor_isbase = false;
    mutable bool qscilexerpov_seteolfill_isbase = false;
    mutable bool qscilexerpov_setfont_isbase = false;
    mutable bool qscilexerpov_setpaper_isbase = false;
    mutable bool qscilexerpov_readproperties_isbase = false;
    mutable bool qscilexerpov_writeproperties_isbase = false;
    mutable bool qscilexerpov_event_isbase = false;
    mutable bool qscilexerpov_eventfilter_isbase = false;
    mutable bool qscilexerpov_timerevent_isbase = false;
    mutable bool qscilexerpov_childevent_isbase = false;
    mutable bool qscilexerpov_customevent_isbase = false;
    mutable bool qscilexerpov_connectnotify_isbase = false;
    mutable bool qscilexerpov_disconnectnotify_isbase = false;
    mutable bool qscilexerpov_textasbytes_isbase = false;
    mutable bool qscilexerpov_bytesastext_isbase = false;
    mutable bool qscilexerpov_sender_isbase = false;
    mutable bool qscilexerpov_sendersignalindex_isbase = false;
    mutable bool qscilexerpov_receivers_isbase = false;
    mutable bool qscilexerpov_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPOV() : QsciLexerPOV() {};
    VirtualQsciLexerPOV(QObject* parent) : QsciLexerPOV(parent) {};

    // Callback setters
    inline void setQsciLexerPOV_MetaObject_Callback(QsciLexerPOV_MetaObject_Callback cb) { qscilexerpov_metaobject_callback = cb; }
    inline void setQsciLexerPOV_Metacast_Callback(QsciLexerPOV_Metacast_Callback cb) { qscilexerpov_metacast_callback = cb; }
    inline void setQsciLexerPOV_Metacall_Callback(QsciLexerPOV_Metacall_Callback cb) { qscilexerpov_metacall_callback = cb; }
    inline void setQsciLexerPOV_SetFoldComments_Callback(QsciLexerPOV_SetFoldComments_Callback cb) { qscilexerpov_setfoldcomments_callback = cb; }
    inline void setQsciLexerPOV_SetFoldCompact_Callback(QsciLexerPOV_SetFoldCompact_Callback cb) { qscilexerpov_setfoldcompact_callback = cb; }
    inline void setQsciLexerPOV_SetFoldDirectives_Callback(QsciLexerPOV_SetFoldDirectives_Callback cb) { qscilexerpov_setfolddirectives_callback = cb; }
    inline void setQsciLexerPOV_Language_Callback(QsciLexerPOV_Language_Callback cb) { qscilexerpov_language_callback = cb; }
    inline void setQsciLexerPOV_Lexer_Callback(QsciLexerPOV_Lexer_Callback cb) { qscilexerpov_lexer_callback = cb; }
    inline void setQsciLexerPOV_LexerId_Callback(QsciLexerPOV_LexerId_Callback cb) { qscilexerpov_lexerid_callback = cb; }
    inline void setQsciLexerPOV_AutoCompletionFillups_Callback(QsciLexerPOV_AutoCompletionFillups_Callback cb) { qscilexerpov_autocompletionfillups_callback = cb; }
    inline void setQsciLexerPOV_AutoCompletionWordSeparators_Callback(QsciLexerPOV_AutoCompletionWordSeparators_Callback cb) { qscilexerpov_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerPOV_BlockEnd_Callback(QsciLexerPOV_BlockEnd_Callback cb) { qscilexerpov_blockend_callback = cb; }
    inline void setQsciLexerPOV_BlockLookback_Callback(QsciLexerPOV_BlockLookback_Callback cb) { qscilexerpov_blocklookback_callback = cb; }
    inline void setQsciLexerPOV_BlockStart_Callback(QsciLexerPOV_BlockStart_Callback cb) { qscilexerpov_blockstart_callback = cb; }
    inline void setQsciLexerPOV_BlockStartKeyword_Callback(QsciLexerPOV_BlockStartKeyword_Callback cb) { qscilexerpov_blockstartkeyword_callback = cb; }
    inline void setQsciLexerPOV_BraceStyle_Callback(QsciLexerPOV_BraceStyle_Callback cb) { qscilexerpov_bracestyle_callback = cb; }
    inline void setQsciLexerPOV_CaseSensitive_Callback(QsciLexerPOV_CaseSensitive_Callback cb) { qscilexerpov_casesensitive_callback = cb; }
    inline void setQsciLexerPOV_Color_Callback(QsciLexerPOV_Color_Callback cb) { qscilexerpov_color_callback = cb; }
    inline void setQsciLexerPOV_EolFill_Callback(QsciLexerPOV_EolFill_Callback cb) { qscilexerpov_eolfill_callback = cb; }
    inline void setQsciLexerPOV_Font_Callback(QsciLexerPOV_Font_Callback cb) { qscilexerpov_font_callback = cb; }
    inline void setQsciLexerPOV_IndentationGuideView_Callback(QsciLexerPOV_IndentationGuideView_Callback cb) { qscilexerpov_indentationguideview_callback = cb; }
    inline void setQsciLexerPOV_Keywords_Callback(QsciLexerPOV_Keywords_Callback cb) { qscilexerpov_keywords_callback = cb; }
    inline void setQsciLexerPOV_DefaultStyle_Callback(QsciLexerPOV_DefaultStyle_Callback cb) { qscilexerpov_defaultstyle_callback = cb; }
    inline void setQsciLexerPOV_Description_Callback(QsciLexerPOV_Description_Callback cb) { qscilexerpov_description_callback = cb; }
    inline void setQsciLexerPOV_Paper_Callback(QsciLexerPOV_Paper_Callback cb) { qscilexerpov_paper_callback = cb; }
    inline void setQsciLexerPOV_DefaultColor2_Callback(QsciLexerPOV_DefaultColor2_Callback cb) { qscilexerpov_defaultcolor2_callback = cb; }
    inline void setQsciLexerPOV_DefaultEolFill_Callback(QsciLexerPOV_DefaultEolFill_Callback cb) { qscilexerpov_defaulteolfill_callback = cb; }
    inline void setQsciLexerPOV_DefaultFont2_Callback(QsciLexerPOV_DefaultFont2_Callback cb) { qscilexerpov_defaultfont2_callback = cb; }
    inline void setQsciLexerPOV_DefaultPaper2_Callback(QsciLexerPOV_DefaultPaper2_Callback cb) { qscilexerpov_defaultpaper2_callback = cb; }
    inline void setQsciLexerPOV_SetEditor_Callback(QsciLexerPOV_SetEditor_Callback cb) { qscilexerpov_seteditor_callback = cb; }
    inline void setQsciLexerPOV_RefreshProperties_Callback(QsciLexerPOV_RefreshProperties_Callback cb) { qscilexerpov_refreshproperties_callback = cb; }
    inline void setQsciLexerPOV_StyleBitsNeeded_Callback(QsciLexerPOV_StyleBitsNeeded_Callback cb) { qscilexerpov_stylebitsneeded_callback = cb; }
    inline void setQsciLexerPOV_WordCharacters_Callback(QsciLexerPOV_WordCharacters_Callback cb) { qscilexerpov_wordcharacters_callback = cb; }
    inline void setQsciLexerPOV_SetAutoIndentStyle_Callback(QsciLexerPOV_SetAutoIndentStyle_Callback cb) { qscilexerpov_setautoindentstyle_callback = cb; }
    inline void setQsciLexerPOV_SetColor_Callback(QsciLexerPOV_SetColor_Callback cb) { qscilexerpov_setcolor_callback = cb; }
    inline void setQsciLexerPOV_SetEolFill_Callback(QsciLexerPOV_SetEolFill_Callback cb) { qscilexerpov_seteolfill_callback = cb; }
    inline void setQsciLexerPOV_SetFont_Callback(QsciLexerPOV_SetFont_Callback cb) { qscilexerpov_setfont_callback = cb; }
    inline void setQsciLexerPOV_SetPaper_Callback(QsciLexerPOV_SetPaper_Callback cb) { qscilexerpov_setpaper_callback = cb; }
    inline void setQsciLexerPOV_ReadProperties_Callback(QsciLexerPOV_ReadProperties_Callback cb) { qscilexerpov_readproperties_callback = cb; }
    inline void setQsciLexerPOV_WriteProperties_Callback(QsciLexerPOV_WriteProperties_Callback cb) { qscilexerpov_writeproperties_callback = cb; }
    inline void setQsciLexerPOV_Event_Callback(QsciLexerPOV_Event_Callback cb) { qscilexerpov_event_callback = cb; }
    inline void setQsciLexerPOV_EventFilter_Callback(QsciLexerPOV_EventFilter_Callback cb) { qscilexerpov_eventfilter_callback = cb; }
    inline void setQsciLexerPOV_TimerEvent_Callback(QsciLexerPOV_TimerEvent_Callback cb) { qscilexerpov_timerevent_callback = cb; }
    inline void setQsciLexerPOV_ChildEvent_Callback(QsciLexerPOV_ChildEvent_Callback cb) { qscilexerpov_childevent_callback = cb; }
    inline void setQsciLexerPOV_CustomEvent_Callback(QsciLexerPOV_CustomEvent_Callback cb) { qscilexerpov_customevent_callback = cb; }
    inline void setQsciLexerPOV_ConnectNotify_Callback(QsciLexerPOV_ConnectNotify_Callback cb) { qscilexerpov_connectnotify_callback = cb; }
    inline void setQsciLexerPOV_DisconnectNotify_Callback(QsciLexerPOV_DisconnectNotify_Callback cb) { qscilexerpov_disconnectnotify_callback = cb; }
    inline void setQsciLexerPOV_TextAsBytes_Callback(QsciLexerPOV_TextAsBytes_Callback cb) { qscilexerpov_textasbytes_callback = cb; }
    inline void setQsciLexerPOV_BytesAsText_Callback(QsciLexerPOV_BytesAsText_Callback cb) { qscilexerpov_bytesastext_callback = cb; }
    inline void setQsciLexerPOV_Sender_Callback(QsciLexerPOV_Sender_Callback cb) { qscilexerpov_sender_callback = cb; }
    inline void setQsciLexerPOV_SenderSignalIndex_Callback(QsciLexerPOV_SenderSignalIndex_Callback cb) { qscilexerpov_sendersignalindex_callback = cb; }
    inline void setQsciLexerPOV_Receivers_Callback(QsciLexerPOV_Receivers_Callback cb) { qscilexerpov_receivers_callback = cb; }
    inline void setQsciLexerPOV_IsSignalConnected_Callback(QsciLexerPOV_IsSignalConnected_Callback cb) { qscilexerpov_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerPOV_MetaObject_IsBase(bool value) const { qscilexerpov_metaobject_isbase = value; }
    inline void setQsciLexerPOV_Metacast_IsBase(bool value) const { qscilexerpov_metacast_isbase = value; }
    inline void setQsciLexerPOV_Metacall_IsBase(bool value) const { qscilexerpov_metacall_isbase = value; }
    inline void setQsciLexerPOV_SetFoldComments_IsBase(bool value) const { qscilexerpov_setfoldcomments_isbase = value; }
    inline void setQsciLexerPOV_SetFoldCompact_IsBase(bool value) const { qscilexerpov_setfoldcompact_isbase = value; }
    inline void setQsciLexerPOV_SetFoldDirectives_IsBase(bool value) const { qscilexerpov_setfolddirectives_isbase = value; }
    inline void setQsciLexerPOV_Language_IsBase(bool value) const { qscilexerpov_language_isbase = value; }
    inline void setQsciLexerPOV_Lexer_IsBase(bool value) const { qscilexerpov_lexer_isbase = value; }
    inline void setQsciLexerPOV_LexerId_IsBase(bool value) const { qscilexerpov_lexerid_isbase = value; }
    inline void setQsciLexerPOV_AutoCompletionFillups_IsBase(bool value) const { qscilexerpov_autocompletionfillups_isbase = value; }
    inline void setQsciLexerPOV_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpov_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerPOV_BlockEnd_IsBase(bool value) const { qscilexerpov_blockend_isbase = value; }
    inline void setQsciLexerPOV_BlockLookback_IsBase(bool value) const { qscilexerpov_blocklookback_isbase = value; }
    inline void setQsciLexerPOV_BlockStart_IsBase(bool value) const { qscilexerpov_blockstart_isbase = value; }
    inline void setQsciLexerPOV_BlockStartKeyword_IsBase(bool value) const { qscilexerpov_blockstartkeyword_isbase = value; }
    inline void setQsciLexerPOV_BraceStyle_IsBase(bool value) const { qscilexerpov_bracestyle_isbase = value; }
    inline void setQsciLexerPOV_CaseSensitive_IsBase(bool value) const { qscilexerpov_casesensitive_isbase = value; }
    inline void setQsciLexerPOV_Color_IsBase(bool value) const { qscilexerpov_color_isbase = value; }
    inline void setQsciLexerPOV_EolFill_IsBase(bool value) const { qscilexerpov_eolfill_isbase = value; }
    inline void setQsciLexerPOV_Font_IsBase(bool value) const { qscilexerpov_font_isbase = value; }
    inline void setQsciLexerPOV_IndentationGuideView_IsBase(bool value) const { qscilexerpov_indentationguideview_isbase = value; }
    inline void setQsciLexerPOV_Keywords_IsBase(bool value) const { qscilexerpov_keywords_isbase = value; }
    inline void setQsciLexerPOV_DefaultStyle_IsBase(bool value) const { qscilexerpov_defaultstyle_isbase = value; }
    inline void setQsciLexerPOV_Description_IsBase(bool value) const { qscilexerpov_description_isbase = value; }
    inline void setQsciLexerPOV_Paper_IsBase(bool value) const { qscilexerpov_paper_isbase = value; }
    inline void setQsciLexerPOV_DefaultColor2_IsBase(bool value) const { qscilexerpov_defaultcolor2_isbase = value; }
    inline void setQsciLexerPOV_DefaultEolFill_IsBase(bool value) const { qscilexerpov_defaulteolfill_isbase = value; }
    inline void setQsciLexerPOV_DefaultFont2_IsBase(bool value) const { qscilexerpov_defaultfont2_isbase = value; }
    inline void setQsciLexerPOV_DefaultPaper2_IsBase(bool value) const { qscilexerpov_defaultpaper2_isbase = value; }
    inline void setQsciLexerPOV_SetEditor_IsBase(bool value) const { qscilexerpov_seteditor_isbase = value; }
    inline void setQsciLexerPOV_RefreshProperties_IsBase(bool value) const { qscilexerpov_refreshproperties_isbase = value; }
    inline void setQsciLexerPOV_StyleBitsNeeded_IsBase(bool value) const { qscilexerpov_stylebitsneeded_isbase = value; }
    inline void setQsciLexerPOV_WordCharacters_IsBase(bool value) const { qscilexerpov_wordcharacters_isbase = value; }
    inline void setQsciLexerPOV_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpov_setautoindentstyle_isbase = value; }
    inline void setQsciLexerPOV_SetColor_IsBase(bool value) const { qscilexerpov_setcolor_isbase = value; }
    inline void setQsciLexerPOV_SetEolFill_IsBase(bool value) const { qscilexerpov_seteolfill_isbase = value; }
    inline void setQsciLexerPOV_SetFont_IsBase(bool value) const { qscilexerpov_setfont_isbase = value; }
    inline void setQsciLexerPOV_SetPaper_IsBase(bool value) const { qscilexerpov_setpaper_isbase = value; }
    inline void setQsciLexerPOV_ReadProperties_IsBase(bool value) const { qscilexerpov_readproperties_isbase = value; }
    inline void setQsciLexerPOV_WriteProperties_IsBase(bool value) const { qscilexerpov_writeproperties_isbase = value; }
    inline void setQsciLexerPOV_Event_IsBase(bool value) const { qscilexerpov_event_isbase = value; }
    inline void setQsciLexerPOV_EventFilter_IsBase(bool value) const { qscilexerpov_eventfilter_isbase = value; }
    inline void setQsciLexerPOV_TimerEvent_IsBase(bool value) const { qscilexerpov_timerevent_isbase = value; }
    inline void setQsciLexerPOV_ChildEvent_IsBase(bool value) const { qscilexerpov_childevent_isbase = value; }
    inline void setQsciLexerPOV_CustomEvent_IsBase(bool value) const { qscilexerpov_customevent_isbase = value; }
    inline void setQsciLexerPOV_ConnectNotify_IsBase(bool value) const { qscilexerpov_connectnotify_isbase = value; }
    inline void setQsciLexerPOV_DisconnectNotify_IsBase(bool value) const { qscilexerpov_disconnectnotify_isbase = value; }
    inline void setQsciLexerPOV_TextAsBytes_IsBase(bool value) const { qscilexerpov_textasbytes_isbase = value; }
    inline void setQsciLexerPOV_BytesAsText_IsBase(bool value) const { qscilexerpov_bytesastext_isbase = value; }
    inline void setQsciLexerPOV_Sender_IsBase(bool value) const { qscilexerpov_sender_isbase = value; }
    inline void setQsciLexerPOV_SenderSignalIndex_IsBase(bool value) const { qscilexerpov_sendersignalindex_isbase = value; }
    inline void setQsciLexerPOV_Receivers_IsBase(bool value) const { qscilexerpov_receivers_isbase = value; }
    inline void setQsciLexerPOV_IsSignalConnected_IsBase(bool value) const { qscilexerpov_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpov_metaobject_isbase) {
            qscilexerpov_metaobject_isbase = false;
            return QsciLexerPOV::metaObject();
        }
        auto metaobject_cb = qscilexerpov_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerPOV::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpov_metacast_isbase) {
            qscilexerpov_metacast_isbase = false;
            return QsciLexerPOV::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerpov_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpov_metacall_isbase) {
            qscilexerpov_metacall_isbase = false;
            return QsciLexerPOV::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerpov_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpov_setfoldcomments_isbase) {
            qscilexerpov_setfoldcomments_isbase = false;
            QsciLexerPOV::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexerpov_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpov_setfoldcompact_isbase) {
            qscilexerpov_setfoldcompact_isbase = false;
            QsciLexerPOV::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerpov_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldDirectives(bool fold) override {
        if (qscilexerpov_setfolddirectives_isbase) {
            qscilexerpov_setfolddirectives_isbase = false;
            QsciLexerPOV::setFoldDirectives(fold);
            return;
        }
        auto setfolddirectives_cb = qscilexerpov_setfolddirectives_callback;
        if (setfolddirectives_cb) {
            bool cbval1 = fold;

            setfolddirectives_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldDirectives(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerpov_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpov_lexer_isbase) {
            qscilexerpov_lexer_isbase = false;
            return QsciLexerPOV::lexer();
        }
        auto lexer_cb = qscilexerpov_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerPOV::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpov_lexerid_isbase) {
            qscilexerpov_lexerid_isbase = false;
            return QsciLexerPOV::lexerId();
        }
        auto lexerid_cb = qscilexerpov_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpov_autocompletionfillups_isbase) {
            qscilexerpov_autocompletionfillups_isbase = false;
            return QsciLexerPOV::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerpov_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerPOV::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpov_autocompletionwordseparators_isbase) {
            qscilexerpov_autocompletionwordseparators_isbase = false;
            return QsciLexerPOV::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerpov_autocompletionwordseparators_callback;
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
        return QsciLexerPOV::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpov_blockend_isbase) {
            qscilexerpov_blockend_isbase = false;
            return QsciLexerPOV::blockEnd(style);
        }
        auto blockend_cb = qscilexerpov_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpov_blocklookback_isbase) {
            qscilexerpov_blocklookback_isbase = false;
            return QsciLexerPOV::blockLookback();
        }
        auto blocklookback_cb = qscilexerpov_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpov_blockstart_isbase) {
            qscilexerpov_blockstart_isbase = false;
            return QsciLexerPOV::blockStart(style);
        }
        auto blockstart_cb = qscilexerpov_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpov_blockstartkeyword_isbase) {
            qscilexerpov_blockstartkeyword_isbase = false;
            return QsciLexerPOV::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerpov_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpov_bracestyle_isbase) {
            qscilexerpov_bracestyle_isbase = false;
            return QsciLexerPOV::braceStyle();
        }
        auto bracestyle_cb = qscilexerpov_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpov_casesensitive_isbase) {
            qscilexerpov_casesensitive_isbase = false;
            return QsciLexerPOV::caseSensitive();
        }
        auto casesensitive_cb = qscilexerpov_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerPOV::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpov_color_isbase) {
            qscilexerpov_color_isbase = false;
            return QsciLexerPOV::color(style);
        }
        auto color_cb = qscilexerpov_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpov_eolfill_isbase) {
            qscilexerpov_eolfill_isbase = false;
            return QsciLexerPOV::eolFill(style);
        }
        auto eolfill_cb = qscilexerpov_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpov_font_isbase) {
            qscilexerpov_font_isbase = false;
            return QsciLexerPOV::font(style);
        }
        auto font_cb = qscilexerpov_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpov_indentationguideview_isbase) {
            qscilexerpov_indentationguideview_isbase = false;
            return QsciLexerPOV::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerpov_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpov_keywords_isbase) {
            qscilexerpov_keywords_isbase = false;
            return QsciLexerPOV::keywords(set);
        }
        auto keywords_cb = qscilexerpov_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpov_defaultstyle_isbase) {
            qscilexerpov_defaultstyle_isbase = false;
            return QsciLexerPOV::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerpov_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerpov_description_callback;
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
        if (qscilexerpov_paper_isbase) {
            qscilexerpov_paper_isbase = false;
            return QsciLexerPOV::paper(style);
        }
        auto paper_cb = qscilexerpov_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpov_defaultcolor2_isbase) {
            qscilexerpov_defaultcolor2_isbase = false;
            return QsciLexerPOV::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerpov_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpov_defaulteolfill_isbase) {
            qscilexerpov_defaulteolfill_isbase = false;
            return QsciLexerPOV::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerpov_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpov_defaultfont2_isbase) {
            qscilexerpov_defaultfont2_isbase = false;
            return QsciLexerPOV::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerpov_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpov_defaultpaper2_isbase) {
            qscilexerpov_defaultpaper2_isbase = false;
            return QsciLexerPOV::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerpov_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPOV::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpov_seteditor_isbase) {
            qscilexerpov_seteditor_isbase = false;
            QsciLexerPOV::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerpov_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpov_refreshproperties_isbase) {
            qscilexerpov_refreshproperties_isbase = false;
            QsciLexerPOV::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerpov_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerPOV::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpov_stylebitsneeded_isbase) {
            qscilexerpov_stylebitsneeded_isbase = false;
            return QsciLexerPOV::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerpov_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpov_wordcharacters_isbase) {
            qscilexerpov_wordcharacters_isbase = false;
            return QsciLexerPOV::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerpov_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerPOV::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpov_setautoindentstyle_isbase) {
            qscilexerpov_setautoindentstyle_isbase = false;
            QsciLexerPOV::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerpov_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpov_setcolor_isbase) {
            qscilexerpov_setcolor_isbase = false;
            QsciLexerPOV::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerpov_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpov_seteolfill_isbase) {
            qscilexerpov_seteolfill_isbase = false;
            QsciLexerPOV::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerpov_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpov_setfont_isbase) {
            qscilexerpov_setfont_isbase = false;
            QsciLexerPOV::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerpov_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpov_setpaper_isbase) {
            qscilexerpov_setpaper_isbase = false;
            QsciLexerPOV::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerpov_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpov_readproperties_isbase) {
            qscilexerpov_readproperties_isbase = false;
            return QsciLexerPOV::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerpov_readproperties_callback;
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
        return QsciLexerPOV::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpov_writeproperties_isbase) {
            qscilexerpov_writeproperties_isbase = false;
            return QsciLexerPOV::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerpov_writeproperties_callback;
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
        return QsciLexerPOV::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpov_event_isbase) {
            qscilexerpov_event_isbase = false;
            return QsciLexerPOV::event(event);
        }
        auto event_cb = qscilexerpov_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpov_eventfilter_isbase) {
            qscilexerpov_eventfilter_isbase = false;
            return QsciLexerPOV::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerpov_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPOV::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpov_timerevent_isbase) {
            qscilexerpov_timerevent_isbase = false;
            QsciLexerPOV::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerpov_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpov_childevent_isbase) {
            qscilexerpov_childevent_isbase = false;
            QsciLexerPOV::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerpov_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpov_customevent_isbase) {
            qscilexerpov_customevent_isbase = false;
            QsciLexerPOV::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerpov_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpov_connectnotify_isbase) {
            qscilexerpov_connectnotify_isbase = false;
            QsciLexerPOV::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerpov_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpov_disconnectnotify_isbase) {
            qscilexerpov_disconnectnotify_isbase = false;
            QsciLexerPOV::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerpov_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPOV::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerpov_textasbytes_isbase) {
            qscilexerpov_textasbytes_isbase = false;
            return QsciLexerPOV::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerpov_textasbytes_callback;
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
        return QsciLexerPOV::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerpov_bytesastext_isbase) {
            qscilexerpov_bytesastext_isbase = false;
            return QsciLexerPOV::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerpov_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerPOV::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpov_sender_isbase) {
            qscilexerpov_sender_isbase = false;
            return QsciLexerPOV::sender();
        }
        auto sender_cb = qscilexerpov_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerPOV::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpov_sendersignalindex_isbase) {
            qscilexerpov_sendersignalindex_isbase = false;
            return QsciLexerPOV::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerpov_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpov_receivers_isbase) {
            qscilexerpov_receivers_isbase = false;
            return QsciLexerPOV::receivers(signal);
        }
        auto receivers_cb = qscilexerpov_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpov_issignalconnected_isbase) {
            qscilexerpov_issignalconnected_isbase = false;
            return QsciLexerPOV::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerpov_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerPOV_ReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPOV_SuperReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPOV_WriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPOV_SuperWriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPOV_TimerEvent(QsciLexerPOV* self, QTimerEvent* event);
    friend void QsciLexerPOV_SuperTimerEvent(QsciLexerPOV* self, QTimerEvent* event);
    friend void QsciLexerPOV_ChildEvent(QsciLexerPOV* self, QChildEvent* event);
    friend void QsciLexerPOV_SuperChildEvent(QsciLexerPOV* self, QChildEvent* event);
    friend void QsciLexerPOV_CustomEvent(QsciLexerPOV* self, QEvent* event);
    friend void QsciLexerPOV_SuperCustomEvent(QsciLexerPOV* self, QEvent* event);
    friend void QsciLexerPOV_ConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
    friend void QsciLexerPOV_SuperConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
    friend void QsciLexerPOV_DisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
    friend void QsciLexerPOV_SuperDisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerPOV_TextAsBytes(const QsciLexerPOV* self, const libqt_string text);
    friend libqt_string QsciLexerPOV_SuperTextAsBytes(const QsciLexerPOV* self, const libqt_string text);
    friend libqt_string QsciLexerPOV_BytesAsText(const QsciLexerPOV* self, const char* bytes, int size);
    friend libqt_string QsciLexerPOV_SuperBytesAsText(const QsciLexerPOV* self, const char* bytes, int size);
    friend QObject* QsciLexerPOV_Sender(const QsciLexerPOV* self);
    friend QObject* QsciLexerPOV_SuperSender(const QsciLexerPOV* self);
    friend int QsciLexerPOV_SenderSignalIndex(const QsciLexerPOV* self);
    friend int QsciLexerPOV_SuperSenderSignalIndex(const QsciLexerPOV* self);
    friend int QsciLexerPOV_Receivers(const QsciLexerPOV* self, const char* signal);
    friend int QsciLexerPOV_SuperReceivers(const QsciLexerPOV* self, const char* signal);
    friend bool QsciLexerPOV_IsSignalConnected(const QsciLexerPOV* self, const QMetaMethod* signal);
    friend bool QsciLexerPOV_SuperIsSignalConnected(const QsciLexerPOV* self, const QMetaMethod* signal);
};

#endif
