#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPO_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERPO_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPO so that we can call protected methods
class VirtualQsciLexerPO final : public QsciLexerPO {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerPO = true;

    // Virtual class public types (including callbacks)
    using QsciLexerPO_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerPO_Metacast_Callback = void* (*)(QsciLexerPO*, const char*);
    using QsciLexerPO_Metacall_Callback = int (*)(QsciLexerPO*, int, int, void**);
    using QsciLexerPO_SetFoldComments_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_SetFoldCompact_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_Language_Callback = const char* (*)();
    using QsciLexerPO_Lexer_Callback = const char* (*)();
    using QsciLexerPO_LexerId_Callback = int (*)();
    using QsciLexerPO_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerPO_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerPO_BlockEnd_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockLookback_Callback = int (*)();
    using QsciLexerPO_BlockStart_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BraceStyle_Callback = int (*)();
    using QsciLexerPO_CaseSensitive_Callback = bool (*)();
    using QsciLexerPO_Color_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_EolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Font_Callback = QFont* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_IndentationGuideView_Callback = int (*)();
    using QsciLexerPO_Keywords_Callback = const char* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultStyle_Callback = int (*)();
    using QsciLexerPO_Description_Callback = const char* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Paper_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultColor2_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultEolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultFont2_Callback = QFont* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_SetEditor_Callback = void (*)(QsciLexerPO*, QsciScintilla*);
    using QsciLexerPO_RefreshProperties_Callback = void (*)();
    using QsciLexerPO_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerPO_WordCharacters_Callback = const char* (*)();
    using QsciLexerPO_SetAutoIndentStyle_Callback = void (*)(QsciLexerPO*, int);
    using QsciLexerPO_SetColor_Callback = void (*)(QsciLexerPO*, QColor*, int);
    using QsciLexerPO_SetEolFill_Callback = void (*)(QsciLexerPO*, bool, int);
    using QsciLexerPO_SetFont_Callback = void (*)(QsciLexerPO*, QFont*, int);
    using QsciLexerPO_SetPaper_Callback = void (*)(QsciLexerPO*, QColor*, int);
    using QsciLexerPO_ReadProperties_Callback = bool (*)(QsciLexerPO*, QSettings*, const char*);
    using QsciLexerPO_WriteProperties_Callback = bool (*)(const QsciLexerPO*, QSettings*, const char*);
    using QsciLexerPO_Event_Callback = bool (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_EventFilter_Callback = bool (*)(QsciLexerPO*, QObject*, QEvent*);
    using QsciLexerPO_TimerEvent_Callback = void (*)(QsciLexerPO*, QTimerEvent*);
    using QsciLexerPO_ChildEvent_Callback = void (*)(QsciLexerPO*, QChildEvent*);
    using QsciLexerPO_CustomEvent_Callback = void (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_ConnectNotify_Callback = void (*)(QsciLexerPO*, QMetaMethod*);
    using QsciLexerPO_DisconnectNotify_Callback = void (*)(QsciLexerPO*, QMetaMethod*);
    using QsciLexerPO_TextAsBytes_Callback = libqt_string (*)(const QsciLexerPO*, const char*);
    using QsciLexerPO_BytesAsText_Callback = const char* (*)(const QsciLexerPO*, const char*, int);
    using QsciLexerPO_Sender_Callback = QObject* (*)();
    using QsciLexerPO_SenderSignalIndex_Callback = int (*)();
    using QsciLexerPO_Receivers_Callback = int (*)(const QsciLexerPO*, const char*);
    using QsciLexerPO_IsSignalConnected_Callback = bool (*)(const QsciLexerPO*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerPO_MetaObject_Callback qscilexerpo_metaobject_callback = nullptr;
    QsciLexerPO_Metacast_Callback qscilexerpo_metacast_callback = nullptr;
    QsciLexerPO_Metacall_Callback qscilexerpo_metacall_callback = nullptr;
    QsciLexerPO_SetFoldComments_Callback qscilexerpo_setfoldcomments_callback = nullptr;
    QsciLexerPO_SetFoldCompact_Callback qscilexerpo_setfoldcompact_callback = nullptr;
    QsciLexerPO_Language_Callback qscilexerpo_language_callback = nullptr;
    QsciLexerPO_Lexer_Callback qscilexerpo_lexer_callback = nullptr;
    QsciLexerPO_LexerId_Callback qscilexerpo_lexerid_callback = nullptr;
    QsciLexerPO_AutoCompletionFillups_Callback qscilexerpo_autocompletionfillups_callback = nullptr;
    QsciLexerPO_AutoCompletionWordSeparators_Callback qscilexerpo_autocompletionwordseparators_callback = nullptr;
    QsciLexerPO_BlockEnd_Callback qscilexerpo_blockend_callback = nullptr;
    QsciLexerPO_BlockLookback_Callback qscilexerpo_blocklookback_callback = nullptr;
    QsciLexerPO_BlockStart_Callback qscilexerpo_blockstart_callback = nullptr;
    QsciLexerPO_BlockStartKeyword_Callback qscilexerpo_blockstartkeyword_callback = nullptr;
    QsciLexerPO_BraceStyle_Callback qscilexerpo_bracestyle_callback = nullptr;
    QsciLexerPO_CaseSensitive_Callback qscilexerpo_casesensitive_callback = nullptr;
    QsciLexerPO_Color_Callback qscilexerpo_color_callback = nullptr;
    QsciLexerPO_EolFill_Callback qscilexerpo_eolfill_callback = nullptr;
    QsciLexerPO_Font_Callback qscilexerpo_font_callback = nullptr;
    QsciLexerPO_IndentationGuideView_Callback qscilexerpo_indentationguideview_callback = nullptr;
    QsciLexerPO_Keywords_Callback qscilexerpo_keywords_callback = nullptr;
    QsciLexerPO_DefaultStyle_Callback qscilexerpo_defaultstyle_callback = nullptr;
    QsciLexerPO_Description_Callback qscilexerpo_description_callback = nullptr;
    QsciLexerPO_Paper_Callback qscilexerpo_paper_callback = nullptr;
    QsciLexerPO_DefaultColor2_Callback qscilexerpo_defaultcolor2_callback = nullptr;
    QsciLexerPO_DefaultEolFill_Callback qscilexerpo_defaulteolfill_callback = nullptr;
    QsciLexerPO_DefaultFont2_Callback qscilexerpo_defaultfont2_callback = nullptr;
    QsciLexerPO_DefaultPaper2_Callback qscilexerpo_defaultpaper2_callback = nullptr;
    QsciLexerPO_SetEditor_Callback qscilexerpo_seteditor_callback = nullptr;
    QsciLexerPO_RefreshProperties_Callback qscilexerpo_refreshproperties_callback = nullptr;
    QsciLexerPO_StyleBitsNeeded_Callback qscilexerpo_stylebitsneeded_callback = nullptr;
    QsciLexerPO_WordCharacters_Callback qscilexerpo_wordcharacters_callback = nullptr;
    QsciLexerPO_SetAutoIndentStyle_Callback qscilexerpo_setautoindentstyle_callback = nullptr;
    QsciLexerPO_SetColor_Callback qscilexerpo_setcolor_callback = nullptr;
    QsciLexerPO_SetEolFill_Callback qscilexerpo_seteolfill_callback = nullptr;
    QsciLexerPO_SetFont_Callback qscilexerpo_setfont_callback = nullptr;
    QsciLexerPO_SetPaper_Callback qscilexerpo_setpaper_callback = nullptr;
    QsciLexerPO_ReadProperties_Callback qscilexerpo_readproperties_callback = nullptr;
    QsciLexerPO_WriteProperties_Callback qscilexerpo_writeproperties_callback = nullptr;
    QsciLexerPO_Event_Callback qscilexerpo_event_callback = nullptr;
    QsciLexerPO_EventFilter_Callback qscilexerpo_eventfilter_callback = nullptr;
    QsciLexerPO_TimerEvent_Callback qscilexerpo_timerevent_callback = nullptr;
    QsciLexerPO_ChildEvent_Callback qscilexerpo_childevent_callback = nullptr;
    QsciLexerPO_CustomEvent_Callback qscilexerpo_customevent_callback = nullptr;
    QsciLexerPO_ConnectNotify_Callback qscilexerpo_connectnotify_callback = nullptr;
    QsciLexerPO_DisconnectNotify_Callback qscilexerpo_disconnectnotify_callback = nullptr;
    QsciLexerPO_TextAsBytes_Callback qscilexerpo_textasbytes_callback = nullptr;
    QsciLexerPO_BytesAsText_Callback qscilexerpo_bytesastext_callback = nullptr;
    QsciLexerPO_Sender_Callback qscilexerpo_sender_callback = nullptr;
    QsciLexerPO_SenderSignalIndex_Callback qscilexerpo_sendersignalindex_callback = nullptr;
    QsciLexerPO_Receivers_Callback qscilexerpo_receivers_callback = nullptr;
    QsciLexerPO_IsSignalConnected_Callback qscilexerpo_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerpo_metaobject_isbase = false;
    mutable bool qscilexerpo_metacast_isbase = false;
    mutable bool qscilexerpo_metacall_isbase = false;
    mutable bool qscilexerpo_setfoldcomments_isbase = false;
    mutable bool qscilexerpo_setfoldcompact_isbase = false;
    mutable bool qscilexerpo_language_isbase = false;
    mutable bool qscilexerpo_lexer_isbase = false;
    mutable bool qscilexerpo_lexerid_isbase = false;
    mutable bool qscilexerpo_autocompletionfillups_isbase = false;
    mutable bool qscilexerpo_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerpo_blockend_isbase = false;
    mutable bool qscilexerpo_blocklookback_isbase = false;
    mutable bool qscilexerpo_blockstart_isbase = false;
    mutable bool qscilexerpo_blockstartkeyword_isbase = false;
    mutable bool qscilexerpo_bracestyle_isbase = false;
    mutable bool qscilexerpo_casesensitive_isbase = false;
    mutable bool qscilexerpo_color_isbase = false;
    mutable bool qscilexerpo_eolfill_isbase = false;
    mutable bool qscilexerpo_font_isbase = false;
    mutable bool qscilexerpo_indentationguideview_isbase = false;
    mutable bool qscilexerpo_keywords_isbase = false;
    mutable bool qscilexerpo_defaultstyle_isbase = false;
    mutable bool qscilexerpo_description_isbase = false;
    mutable bool qscilexerpo_paper_isbase = false;
    mutable bool qscilexerpo_defaultcolor2_isbase = false;
    mutable bool qscilexerpo_defaulteolfill_isbase = false;
    mutable bool qscilexerpo_defaultfont2_isbase = false;
    mutable bool qscilexerpo_defaultpaper2_isbase = false;
    mutable bool qscilexerpo_seteditor_isbase = false;
    mutable bool qscilexerpo_refreshproperties_isbase = false;
    mutable bool qscilexerpo_stylebitsneeded_isbase = false;
    mutable bool qscilexerpo_wordcharacters_isbase = false;
    mutable bool qscilexerpo_setautoindentstyle_isbase = false;
    mutable bool qscilexerpo_setcolor_isbase = false;
    mutable bool qscilexerpo_seteolfill_isbase = false;
    mutable bool qscilexerpo_setfont_isbase = false;
    mutable bool qscilexerpo_setpaper_isbase = false;
    mutable bool qscilexerpo_readproperties_isbase = false;
    mutable bool qscilexerpo_writeproperties_isbase = false;
    mutable bool qscilexerpo_event_isbase = false;
    mutable bool qscilexerpo_eventfilter_isbase = false;
    mutable bool qscilexerpo_timerevent_isbase = false;
    mutable bool qscilexerpo_childevent_isbase = false;
    mutable bool qscilexerpo_customevent_isbase = false;
    mutable bool qscilexerpo_connectnotify_isbase = false;
    mutable bool qscilexerpo_disconnectnotify_isbase = false;
    mutable bool qscilexerpo_textasbytes_isbase = false;
    mutable bool qscilexerpo_bytesastext_isbase = false;
    mutable bool qscilexerpo_sender_isbase = false;
    mutable bool qscilexerpo_sendersignalindex_isbase = false;
    mutable bool qscilexerpo_receivers_isbase = false;
    mutable bool qscilexerpo_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerPO() : QsciLexerPO() {};
    VirtualQsciLexerPO(QObject* parent) : QsciLexerPO(parent) {};

    // Callback setters
    inline void setQsciLexerPO_MetaObject_Callback(QsciLexerPO_MetaObject_Callback cb) { qscilexerpo_metaobject_callback = cb; }
    inline void setQsciLexerPO_Metacast_Callback(QsciLexerPO_Metacast_Callback cb) { qscilexerpo_metacast_callback = cb; }
    inline void setQsciLexerPO_Metacall_Callback(QsciLexerPO_Metacall_Callback cb) { qscilexerpo_metacall_callback = cb; }
    inline void setQsciLexerPO_SetFoldComments_Callback(QsciLexerPO_SetFoldComments_Callback cb) { qscilexerpo_setfoldcomments_callback = cb; }
    inline void setQsciLexerPO_SetFoldCompact_Callback(QsciLexerPO_SetFoldCompact_Callback cb) { qscilexerpo_setfoldcompact_callback = cb; }
    inline void setQsciLexerPO_Language_Callback(QsciLexerPO_Language_Callback cb) { qscilexerpo_language_callback = cb; }
    inline void setQsciLexerPO_Lexer_Callback(QsciLexerPO_Lexer_Callback cb) { qscilexerpo_lexer_callback = cb; }
    inline void setQsciLexerPO_LexerId_Callback(QsciLexerPO_LexerId_Callback cb) { qscilexerpo_lexerid_callback = cb; }
    inline void setQsciLexerPO_AutoCompletionFillups_Callback(QsciLexerPO_AutoCompletionFillups_Callback cb) { qscilexerpo_autocompletionfillups_callback = cb; }
    inline void setQsciLexerPO_AutoCompletionWordSeparators_Callback(QsciLexerPO_AutoCompletionWordSeparators_Callback cb) { qscilexerpo_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerPO_BlockEnd_Callback(QsciLexerPO_BlockEnd_Callback cb) { qscilexerpo_blockend_callback = cb; }
    inline void setQsciLexerPO_BlockLookback_Callback(QsciLexerPO_BlockLookback_Callback cb) { qscilexerpo_blocklookback_callback = cb; }
    inline void setQsciLexerPO_BlockStart_Callback(QsciLexerPO_BlockStart_Callback cb) { qscilexerpo_blockstart_callback = cb; }
    inline void setQsciLexerPO_BlockStartKeyword_Callback(QsciLexerPO_BlockStartKeyword_Callback cb) { qscilexerpo_blockstartkeyword_callback = cb; }
    inline void setQsciLexerPO_BraceStyle_Callback(QsciLexerPO_BraceStyle_Callback cb) { qscilexerpo_bracestyle_callback = cb; }
    inline void setQsciLexerPO_CaseSensitive_Callback(QsciLexerPO_CaseSensitive_Callback cb) { qscilexerpo_casesensitive_callback = cb; }
    inline void setQsciLexerPO_Color_Callback(QsciLexerPO_Color_Callback cb) { qscilexerpo_color_callback = cb; }
    inline void setQsciLexerPO_EolFill_Callback(QsciLexerPO_EolFill_Callback cb) { qscilexerpo_eolfill_callback = cb; }
    inline void setQsciLexerPO_Font_Callback(QsciLexerPO_Font_Callback cb) { qscilexerpo_font_callback = cb; }
    inline void setQsciLexerPO_IndentationGuideView_Callback(QsciLexerPO_IndentationGuideView_Callback cb) { qscilexerpo_indentationguideview_callback = cb; }
    inline void setQsciLexerPO_Keywords_Callback(QsciLexerPO_Keywords_Callback cb) { qscilexerpo_keywords_callback = cb; }
    inline void setQsciLexerPO_DefaultStyle_Callback(QsciLexerPO_DefaultStyle_Callback cb) { qscilexerpo_defaultstyle_callback = cb; }
    inline void setQsciLexerPO_Description_Callback(QsciLexerPO_Description_Callback cb) { qscilexerpo_description_callback = cb; }
    inline void setQsciLexerPO_Paper_Callback(QsciLexerPO_Paper_Callback cb) { qscilexerpo_paper_callback = cb; }
    inline void setQsciLexerPO_DefaultColor2_Callback(QsciLexerPO_DefaultColor2_Callback cb) { qscilexerpo_defaultcolor2_callback = cb; }
    inline void setQsciLexerPO_DefaultEolFill_Callback(QsciLexerPO_DefaultEolFill_Callback cb) { qscilexerpo_defaulteolfill_callback = cb; }
    inline void setQsciLexerPO_DefaultFont2_Callback(QsciLexerPO_DefaultFont2_Callback cb) { qscilexerpo_defaultfont2_callback = cb; }
    inline void setQsciLexerPO_DefaultPaper2_Callback(QsciLexerPO_DefaultPaper2_Callback cb) { qscilexerpo_defaultpaper2_callback = cb; }
    inline void setQsciLexerPO_SetEditor_Callback(QsciLexerPO_SetEditor_Callback cb) { qscilexerpo_seteditor_callback = cb; }
    inline void setQsciLexerPO_RefreshProperties_Callback(QsciLexerPO_RefreshProperties_Callback cb) { qscilexerpo_refreshproperties_callback = cb; }
    inline void setQsciLexerPO_StyleBitsNeeded_Callback(QsciLexerPO_StyleBitsNeeded_Callback cb) { qscilexerpo_stylebitsneeded_callback = cb; }
    inline void setQsciLexerPO_WordCharacters_Callback(QsciLexerPO_WordCharacters_Callback cb) { qscilexerpo_wordcharacters_callback = cb; }
    inline void setQsciLexerPO_SetAutoIndentStyle_Callback(QsciLexerPO_SetAutoIndentStyle_Callback cb) { qscilexerpo_setautoindentstyle_callback = cb; }
    inline void setQsciLexerPO_SetColor_Callback(QsciLexerPO_SetColor_Callback cb) { qscilexerpo_setcolor_callback = cb; }
    inline void setQsciLexerPO_SetEolFill_Callback(QsciLexerPO_SetEolFill_Callback cb) { qscilexerpo_seteolfill_callback = cb; }
    inline void setQsciLexerPO_SetFont_Callback(QsciLexerPO_SetFont_Callback cb) { qscilexerpo_setfont_callback = cb; }
    inline void setQsciLexerPO_SetPaper_Callback(QsciLexerPO_SetPaper_Callback cb) { qscilexerpo_setpaper_callback = cb; }
    inline void setQsciLexerPO_ReadProperties_Callback(QsciLexerPO_ReadProperties_Callback cb) { qscilexerpo_readproperties_callback = cb; }
    inline void setQsciLexerPO_WriteProperties_Callback(QsciLexerPO_WriteProperties_Callback cb) { qscilexerpo_writeproperties_callback = cb; }
    inline void setQsciLexerPO_Event_Callback(QsciLexerPO_Event_Callback cb) { qscilexerpo_event_callback = cb; }
    inline void setQsciLexerPO_EventFilter_Callback(QsciLexerPO_EventFilter_Callback cb) { qscilexerpo_eventfilter_callback = cb; }
    inline void setQsciLexerPO_TimerEvent_Callback(QsciLexerPO_TimerEvent_Callback cb) { qscilexerpo_timerevent_callback = cb; }
    inline void setQsciLexerPO_ChildEvent_Callback(QsciLexerPO_ChildEvent_Callback cb) { qscilexerpo_childevent_callback = cb; }
    inline void setQsciLexerPO_CustomEvent_Callback(QsciLexerPO_CustomEvent_Callback cb) { qscilexerpo_customevent_callback = cb; }
    inline void setQsciLexerPO_ConnectNotify_Callback(QsciLexerPO_ConnectNotify_Callback cb) { qscilexerpo_connectnotify_callback = cb; }
    inline void setQsciLexerPO_DisconnectNotify_Callback(QsciLexerPO_DisconnectNotify_Callback cb) { qscilexerpo_disconnectnotify_callback = cb; }
    inline void setQsciLexerPO_TextAsBytes_Callback(QsciLexerPO_TextAsBytes_Callback cb) { qscilexerpo_textasbytes_callback = cb; }
    inline void setQsciLexerPO_BytesAsText_Callback(QsciLexerPO_BytesAsText_Callback cb) { qscilexerpo_bytesastext_callback = cb; }
    inline void setQsciLexerPO_Sender_Callback(QsciLexerPO_Sender_Callback cb) { qscilexerpo_sender_callback = cb; }
    inline void setQsciLexerPO_SenderSignalIndex_Callback(QsciLexerPO_SenderSignalIndex_Callback cb) { qscilexerpo_sendersignalindex_callback = cb; }
    inline void setQsciLexerPO_Receivers_Callback(QsciLexerPO_Receivers_Callback cb) { qscilexerpo_receivers_callback = cb; }
    inline void setQsciLexerPO_IsSignalConnected_Callback(QsciLexerPO_IsSignalConnected_Callback cb) { qscilexerpo_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerPO_MetaObject_IsBase(bool value) const { qscilexerpo_metaobject_isbase = value; }
    inline void setQsciLexerPO_Metacast_IsBase(bool value) const { qscilexerpo_metacast_isbase = value; }
    inline void setQsciLexerPO_Metacall_IsBase(bool value) const { qscilexerpo_metacall_isbase = value; }
    inline void setQsciLexerPO_SetFoldComments_IsBase(bool value) const { qscilexerpo_setfoldcomments_isbase = value; }
    inline void setQsciLexerPO_SetFoldCompact_IsBase(bool value) const { qscilexerpo_setfoldcompact_isbase = value; }
    inline void setQsciLexerPO_Language_IsBase(bool value) const { qscilexerpo_language_isbase = value; }
    inline void setQsciLexerPO_Lexer_IsBase(bool value) const { qscilexerpo_lexer_isbase = value; }
    inline void setQsciLexerPO_LexerId_IsBase(bool value) const { qscilexerpo_lexerid_isbase = value; }
    inline void setQsciLexerPO_AutoCompletionFillups_IsBase(bool value) const { qscilexerpo_autocompletionfillups_isbase = value; }
    inline void setQsciLexerPO_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerpo_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerPO_BlockEnd_IsBase(bool value) const { qscilexerpo_blockend_isbase = value; }
    inline void setQsciLexerPO_BlockLookback_IsBase(bool value) const { qscilexerpo_blocklookback_isbase = value; }
    inline void setQsciLexerPO_BlockStart_IsBase(bool value) const { qscilexerpo_blockstart_isbase = value; }
    inline void setQsciLexerPO_BlockStartKeyword_IsBase(bool value) const { qscilexerpo_blockstartkeyword_isbase = value; }
    inline void setQsciLexerPO_BraceStyle_IsBase(bool value) const { qscilexerpo_bracestyle_isbase = value; }
    inline void setQsciLexerPO_CaseSensitive_IsBase(bool value) const { qscilexerpo_casesensitive_isbase = value; }
    inline void setQsciLexerPO_Color_IsBase(bool value) const { qscilexerpo_color_isbase = value; }
    inline void setQsciLexerPO_EolFill_IsBase(bool value) const { qscilexerpo_eolfill_isbase = value; }
    inline void setQsciLexerPO_Font_IsBase(bool value) const { qscilexerpo_font_isbase = value; }
    inline void setQsciLexerPO_IndentationGuideView_IsBase(bool value) const { qscilexerpo_indentationguideview_isbase = value; }
    inline void setQsciLexerPO_Keywords_IsBase(bool value) const { qscilexerpo_keywords_isbase = value; }
    inline void setQsciLexerPO_DefaultStyle_IsBase(bool value) const { qscilexerpo_defaultstyle_isbase = value; }
    inline void setQsciLexerPO_Description_IsBase(bool value) const { qscilexerpo_description_isbase = value; }
    inline void setQsciLexerPO_Paper_IsBase(bool value) const { qscilexerpo_paper_isbase = value; }
    inline void setQsciLexerPO_DefaultColor2_IsBase(bool value) const { qscilexerpo_defaultcolor2_isbase = value; }
    inline void setQsciLexerPO_DefaultEolFill_IsBase(bool value) const { qscilexerpo_defaulteolfill_isbase = value; }
    inline void setQsciLexerPO_DefaultFont2_IsBase(bool value) const { qscilexerpo_defaultfont2_isbase = value; }
    inline void setQsciLexerPO_DefaultPaper2_IsBase(bool value) const { qscilexerpo_defaultpaper2_isbase = value; }
    inline void setQsciLexerPO_SetEditor_IsBase(bool value) const { qscilexerpo_seteditor_isbase = value; }
    inline void setQsciLexerPO_RefreshProperties_IsBase(bool value) const { qscilexerpo_refreshproperties_isbase = value; }
    inline void setQsciLexerPO_StyleBitsNeeded_IsBase(bool value) const { qscilexerpo_stylebitsneeded_isbase = value; }
    inline void setQsciLexerPO_WordCharacters_IsBase(bool value) const { qscilexerpo_wordcharacters_isbase = value; }
    inline void setQsciLexerPO_SetAutoIndentStyle_IsBase(bool value) const { qscilexerpo_setautoindentstyle_isbase = value; }
    inline void setQsciLexerPO_SetColor_IsBase(bool value) const { qscilexerpo_setcolor_isbase = value; }
    inline void setQsciLexerPO_SetEolFill_IsBase(bool value) const { qscilexerpo_seteolfill_isbase = value; }
    inline void setQsciLexerPO_SetFont_IsBase(bool value) const { qscilexerpo_setfont_isbase = value; }
    inline void setQsciLexerPO_SetPaper_IsBase(bool value) const { qscilexerpo_setpaper_isbase = value; }
    inline void setQsciLexerPO_ReadProperties_IsBase(bool value) const { qscilexerpo_readproperties_isbase = value; }
    inline void setQsciLexerPO_WriteProperties_IsBase(bool value) const { qscilexerpo_writeproperties_isbase = value; }
    inline void setQsciLexerPO_Event_IsBase(bool value) const { qscilexerpo_event_isbase = value; }
    inline void setQsciLexerPO_EventFilter_IsBase(bool value) const { qscilexerpo_eventfilter_isbase = value; }
    inline void setQsciLexerPO_TimerEvent_IsBase(bool value) const { qscilexerpo_timerevent_isbase = value; }
    inline void setQsciLexerPO_ChildEvent_IsBase(bool value) const { qscilexerpo_childevent_isbase = value; }
    inline void setQsciLexerPO_CustomEvent_IsBase(bool value) const { qscilexerpo_customevent_isbase = value; }
    inline void setQsciLexerPO_ConnectNotify_IsBase(bool value) const { qscilexerpo_connectnotify_isbase = value; }
    inline void setQsciLexerPO_DisconnectNotify_IsBase(bool value) const { qscilexerpo_disconnectnotify_isbase = value; }
    inline void setQsciLexerPO_TextAsBytes_IsBase(bool value) const { qscilexerpo_textasbytes_isbase = value; }
    inline void setQsciLexerPO_BytesAsText_IsBase(bool value) const { qscilexerpo_bytesastext_isbase = value; }
    inline void setQsciLexerPO_Sender_IsBase(bool value) const { qscilexerpo_sender_isbase = value; }
    inline void setQsciLexerPO_SenderSignalIndex_IsBase(bool value) const { qscilexerpo_sendersignalindex_isbase = value; }
    inline void setQsciLexerPO_Receivers_IsBase(bool value) const { qscilexerpo_receivers_isbase = value; }
    inline void setQsciLexerPO_IsSignalConnected_IsBase(bool value) const { qscilexerpo_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpo_metaobject_isbase) {
            qscilexerpo_metaobject_isbase = false;
            return QsciLexerPO::metaObject();
        }
        auto metaobject_cb = qscilexerpo_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerPO::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpo_metacast_isbase) {
            qscilexerpo_metacast_isbase = false;
            return QsciLexerPO::qt_metacast(param1);
        }
        auto metacast_cb = qscilexerpo_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpo_metacall_isbase) {
            qscilexerpo_metacall_isbase = false;
            return QsciLexerPO::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexerpo_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpo_setfoldcomments_isbase) {
            qscilexerpo_setfoldcomments_isbase = false;
            QsciLexerPO::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexerpo_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerPO::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpo_setfoldcompact_isbase) {
            qscilexerpo_setfoldcompact_isbase = false;
            QsciLexerPO::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexerpo_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerPO::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexerpo_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpo_lexer_isbase) {
            qscilexerpo_lexer_isbase = false;
            return QsciLexerPO::lexer();
        }
        auto lexer_cb = qscilexerpo_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerPO::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpo_lexerid_isbase) {
            qscilexerpo_lexerid_isbase = false;
            return QsciLexerPO::lexerId();
        }
        auto lexerid_cb = qscilexerpo_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpo_autocompletionfillups_isbase) {
            qscilexerpo_autocompletionfillups_isbase = false;
            return QsciLexerPO::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexerpo_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerPO::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpo_autocompletionwordseparators_isbase) {
            qscilexerpo_autocompletionwordseparators_isbase = false;
            return QsciLexerPO::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexerpo_autocompletionwordseparators_callback;
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
        return QsciLexerPO::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpo_blockend_isbase) {
            qscilexerpo_blockend_isbase = false;
            return QsciLexerPO::blockEnd(style);
        }
        auto blockend_cb = qscilexerpo_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpo_blocklookback_isbase) {
            qscilexerpo_blocklookback_isbase = false;
            return QsciLexerPO::blockLookback();
        }
        auto blocklookback_cb = qscilexerpo_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpo_blockstart_isbase) {
            qscilexerpo_blockstart_isbase = false;
            return QsciLexerPO::blockStart(style);
        }
        auto blockstart_cb = qscilexerpo_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpo_blockstartkeyword_isbase) {
            qscilexerpo_blockstartkeyword_isbase = false;
            return QsciLexerPO::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexerpo_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpo_bracestyle_isbase) {
            qscilexerpo_bracestyle_isbase = false;
            return QsciLexerPO::braceStyle();
        }
        auto bracestyle_cb = qscilexerpo_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpo_casesensitive_isbase) {
            qscilexerpo_casesensitive_isbase = false;
            return QsciLexerPO::caseSensitive();
        }
        auto casesensitive_cb = qscilexerpo_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerPO::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpo_color_isbase) {
            qscilexerpo_color_isbase = false;
            return QsciLexerPO::color(style);
        }
        auto color_cb = qscilexerpo_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpo_eolfill_isbase) {
            qscilexerpo_eolfill_isbase = false;
            return QsciLexerPO::eolFill(style);
        }
        auto eolfill_cb = qscilexerpo_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpo_font_isbase) {
            qscilexerpo_font_isbase = false;
            return QsciLexerPO::font(style);
        }
        auto font_cb = qscilexerpo_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpo_indentationguideview_isbase) {
            qscilexerpo_indentationguideview_isbase = false;
            return QsciLexerPO::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexerpo_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpo_keywords_isbase) {
            qscilexerpo_keywords_isbase = false;
            return QsciLexerPO::keywords(set);
        }
        auto keywords_cb = qscilexerpo_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpo_defaultstyle_isbase) {
            qscilexerpo_defaultstyle_isbase = false;
            return QsciLexerPO::defaultStyle();
        }
        auto defaultstyle_cb = qscilexerpo_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexerpo_description_callback;
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
        if (qscilexerpo_paper_isbase) {
            qscilexerpo_paper_isbase = false;
            return QsciLexerPO::paper(style);
        }
        auto paper_cb = qscilexerpo_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpo_defaultcolor2_isbase) {
            qscilexerpo_defaultcolor2_isbase = false;
            return QsciLexerPO::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexerpo_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpo_defaulteolfill_isbase) {
            qscilexerpo_defaulteolfill_isbase = false;
            return QsciLexerPO::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexerpo_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpo_defaultfont2_isbase) {
            qscilexerpo_defaultfont2_isbase = false;
            return QsciLexerPO::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexerpo_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpo_defaultpaper2_isbase) {
            qscilexerpo_defaultpaper2_isbase = false;
            return QsciLexerPO::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexerpo_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerPO::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpo_seteditor_isbase) {
            qscilexerpo_seteditor_isbase = false;
            QsciLexerPO::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexerpo_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerPO::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpo_refreshproperties_isbase) {
            qscilexerpo_refreshproperties_isbase = false;
            QsciLexerPO::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexerpo_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerPO::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpo_stylebitsneeded_isbase) {
            qscilexerpo_stylebitsneeded_isbase = false;
            return QsciLexerPO::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexerpo_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpo_wordcharacters_isbase) {
            qscilexerpo_wordcharacters_isbase = false;
            return QsciLexerPO::wordCharacters();
        }
        auto wordcharacters_cb = qscilexerpo_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerPO::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpo_setautoindentstyle_isbase) {
            qscilexerpo_setautoindentstyle_isbase = false;
            QsciLexerPO::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexerpo_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerPO::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpo_setcolor_isbase) {
            qscilexerpo_setcolor_isbase = false;
            QsciLexerPO::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexerpo_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpo_seteolfill_isbase) {
            qscilexerpo_seteolfill_isbase = false;
            QsciLexerPO::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexerpo_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpo_setfont_isbase) {
            qscilexerpo_setfont_isbase = false;
            QsciLexerPO::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexerpo_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpo_setpaper_isbase) {
            qscilexerpo_setpaper_isbase = false;
            QsciLexerPO::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexerpo_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpo_readproperties_isbase) {
            qscilexerpo_readproperties_isbase = false;
            return QsciLexerPO::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexerpo_readproperties_callback;
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
        return QsciLexerPO::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpo_writeproperties_isbase) {
            qscilexerpo_writeproperties_isbase = false;
            return QsciLexerPO::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexerpo_writeproperties_callback;
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
        return QsciLexerPO::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpo_event_isbase) {
            qscilexerpo_event_isbase = false;
            return QsciLexerPO::event(event);
        }
        auto event_cb = qscilexerpo_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpo_eventfilter_isbase) {
            qscilexerpo_eventfilter_isbase = false;
            return QsciLexerPO::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexerpo_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPO::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpo_timerevent_isbase) {
            qscilexerpo_timerevent_isbase = false;
            QsciLexerPO::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexerpo_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerPO::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpo_childevent_isbase) {
            qscilexerpo_childevent_isbase = false;
            QsciLexerPO::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexerpo_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerPO::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpo_customevent_isbase) {
            qscilexerpo_customevent_isbase = false;
            QsciLexerPO::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexerpo_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerPO::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_connectnotify_isbase) {
            qscilexerpo_connectnotify_isbase = false;
            QsciLexerPO::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexerpo_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPO::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_disconnectnotify_isbase) {
            qscilexerpo_disconnectnotify_isbase = false;
            QsciLexerPO::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexerpo_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerPO::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerpo_textasbytes_isbase) {
            qscilexerpo_textasbytes_isbase = false;
            return QsciLexerPO::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexerpo_textasbytes_callback;
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
        return QsciLexerPO::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerpo_bytesastext_isbase) {
            qscilexerpo_bytesastext_isbase = false;
            return QsciLexerPO::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexerpo_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerPO::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerpo_sender_isbase) {
            qscilexerpo_sender_isbase = false;
            return QsciLexerPO::sender();
        }
        auto sender_cb = qscilexerpo_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerPO::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerpo_sendersignalindex_isbase) {
            qscilexerpo_sendersignalindex_isbase = false;
            return QsciLexerPO::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexerpo_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerpo_receivers_isbase) {
            qscilexerpo_receivers_isbase = false;
            return QsciLexerPO::receivers(signal);
        }
        auto receivers_cb = qscilexerpo_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerpo_issignalconnected_isbase) {
            qscilexerpo_issignalconnected_isbase = false;
            return QsciLexerPO::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexerpo_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerPO_ReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPO_SuperReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPO_WriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPO_SuperWriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPO_TimerEvent(QsciLexerPO* self, QTimerEvent* event);
    friend void QsciLexerPO_SuperTimerEvent(QsciLexerPO* self, QTimerEvent* event);
    friend void QsciLexerPO_ChildEvent(QsciLexerPO* self, QChildEvent* event);
    friend void QsciLexerPO_SuperChildEvent(QsciLexerPO* self, QChildEvent* event);
    friend void QsciLexerPO_CustomEvent(QsciLexerPO* self, QEvent* event);
    friend void QsciLexerPO_SuperCustomEvent(QsciLexerPO* self, QEvent* event);
    friend void QsciLexerPO_ConnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
    friend void QsciLexerPO_SuperConnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
    friend void QsciLexerPO_DisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
    friend void QsciLexerPO_SuperDisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerPO_TextAsBytes(const QsciLexerPO* self, const libqt_string text);
    friend libqt_string QsciLexerPO_SuperTextAsBytes(const QsciLexerPO* self, const libqt_string text);
    friend libqt_string QsciLexerPO_BytesAsText(const QsciLexerPO* self, const char* bytes, int size);
    friend libqt_string QsciLexerPO_SuperBytesAsText(const QsciLexerPO* self, const char* bytes, int size);
    friend QObject* QsciLexerPO_Sender(const QsciLexerPO* self);
    friend QObject* QsciLexerPO_SuperSender(const QsciLexerPO* self);
    friend int QsciLexerPO_SenderSignalIndex(const QsciLexerPO* self);
    friend int QsciLexerPO_SuperSenderSignalIndex(const QsciLexerPO* self);
    friend int QsciLexerPO_Receivers(const QsciLexerPO* self, const char* signal);
    friend int QsciLexerPO_SuperReceivers(const QsciLexerPO* self, const char* signal);
    friend bool QsciLexerPO_IsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal);
    friend bool QsciLexerPO_SuperIsSignalConnected(const QsciLexerPO* self, const QMetaMethod* signal);
};

#endif
