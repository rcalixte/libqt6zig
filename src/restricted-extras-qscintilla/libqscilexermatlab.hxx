#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMATLAB_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMATLAB_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMatlab so that we can call protected methods
class VirtualQsciLexerMatlab final : public QsciLexerMatlab {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerMatlab = true;

    // Virtual class public types (including callbacks)
    using QsciLexerMatlab_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerMatlab_Metacast_Callback = void* (*)(QsciLexerMatlab*, const char*);
    using QsciLexerMatlab_Metacall_Callback = int (*)(QsciLexerMatlab*, int, int, void**);
    using QsciLexerMatlab_Language_Callback = const char* (*)();
    using QsciLexerMatlab_Lexer_Callback = const char* (*)();
    using QsciLexerMatlab_LexerId_Callback = int (*)();
    using QsciLexerMatlab_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMatlab_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerMatlab_BlockEnd_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockLookback_Callback = int (*)();
    using QsciLexerMatlab_BlockStart_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BraceStyle_Callback = int (*)();
    using QsciLexerMatlab_CaseSensitive_Callback = bool (*)();
    using QsciLexerMatlab_Color_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_EolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Font_Callback = QFont* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_IndentationGuideView_Callback = int (*)();
    using QsciLexerMatlab_Keywords_Callback = const char* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultStyle_Callback = int (*)();
    using QsciLexerMatlab_Description_Callback = const char* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Paper_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultColor2_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultEolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultFont2_Callback = QFont* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetEditor_Callback = void (*)(QsciLexerMatlab*, QsciScintilla*);
    using QsciLexerMatlab_RefreshProperties_Callback = void (*)();
    using QsciLexerMatlab_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMatlab_WordCharacters_Callback = const char* (*)();
    using QsciLexerMatlab_SetAutoIndentStyle_Callback = void (*)(QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetColor_Callback = void (*)(QsciLexerMatlab*, QColor*, int);
    using QsciLexerMatlab_SetEolFill_Callback = void (*)(QsciLexerMatlab*, bool, int);
    using QsciLexerMatlab_SetFont_Callback = void (*)(QsciLexerMatlab*, QFont*, int);
    using QsciLexerMatlab_SetPaper_Callback = void (*)(QsciLexerMatlab*, QColor*, int);
    using QsciLexerMatlab_ReadProperties_Callback = bool (*)(QsciLexerMatlab*, QSettings*, const char*);
    using QsciLexerMatlab_WriteProperties_Callback = bool (*)(const QsciLexerMatlab*, QSettings*, const char*);
    using QsciLexerMatlab_Event_Callback = bool (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_EventFilter_Callback = bool (*)(QsciLexerMatlab*, QObject*, QEvent*);
    using QsciLexerMatlab_TimerEvent_Callback = void (*)(QsciLexerMatlab*, QTimerEvent*);
    using QsciLexerMatlab_ChildEvent_Callback = void (*)(QsciLexerMatlab*, QChildEvent*);
    using QsciLexerMatlab_CustomEvent_Callback = void (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_ConnectNotify_Callback = void (*)(QsciLexerMatlab*, QMetaMethod*);
    using QsciLexerMatlab_DisconnectNotify_Callback = void (*)(QsciLexerMatlab*, QMetaMethod*);
    using QsciLexerMatlab_TextAsBytes_Callback = libqt_string (*)(const QsciLexerMatlab*, const char*);
    using QsciLexerMatlab_BytesAsText_Callback = const char* (*)(const QsciLexerMatlab*, const char*, int);
    using QsciLexerMatlab_Sender_Callback = QObject* (*)();
    using QsciLexerMatlab_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMatlab_Receivers_Callback = int (*)(const QsciLexerMatlab*, const char*);
    using QsciLexerMatlab_IsSignalConnected_Callback = bool (*)(const QsciLexerMatlab*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerMatlab_MetaObject_Callback qscilexermatlab_metaobject_callback = nullptr;
    QsciLexerMatlab_Metacast_Callback qscilexermatlab_metacast_callback = nullptr;
    QsciLexerMatlab_Metacall_Callback qscilexermatlab_metacall_callback = nullptr;
    QsciLexerMatlab_Language_Callback qscilexermatlab_language_callback = nullptr;
    QsciLexerMatlab_Lexer_Callback qscilexermatlab_lexer_callback = nullptr;
    QsciLexerMatlab_LexerId_Callback qscilexermatlab_lexerid_callback = nullptr;
    QsciLexerMatlab_AutoCompletionFillups_Callback qscilexermatlab_autocompletionfillups_callback = nullptr;
    QsciLexerMatlab_AutoCompletionWordSeparators_Callback qscilexermatlab_autocompletionwordseparators_callback = nullptr;
    QsciLexerMatlab_BlockEnd_Callback qscilexermatlab_blockend_callback = nullptr;
    QsciLexerMatlab_BlockLookback_Callback qscilexermatlab_blocklookback_callback = nullptr;
    QsciLexerMatlab_BlockStart_Callback qscilexermatlab_blockstart_callback = nullptr;
    QsciLexerMatlab_BlockStartKeyword_Callback qscilexermatlab_blockstartkeyword_callback = nullptr;
    QsciLexerMatlab_BraceStyle_Callback qscilexermatlab_bracestyle_callback = nullptr;
    QsciLexerMatlab_CaseSensitive_Callback qscilexermatlab_casesensitive_callback = nullptr;
    QsciLexerMatlab_Color_Callback qscilexermatlab_color_callback = nullptr;
    QsciLexerMatlab_EolFill_Callback qscilexermatlab_eolfill_callback = nullptr;
    QsciLexerMatlab_Font_Callback qscilexermatlab_font_callback = nullptr;
    QsciLexerMatlab_IndentationGuideView_Callback qscilexermatlab_indentationguideview_callback = nullptr;
    QsciLexerMatlab_Keywords_Callback qscilexermatlab_keywords_callback = nullptr;
    QsciLexerMatlab_DefaultStyle_Callback qscilexermatlab_defaultstyle_callback = nullptr;
    QsciLexerMatlab_Description_Callback qscilexermatlab_description_callback = nullptr;
    QsciLexerMatlab_Paper_Callback qscilexermatlab_paper_callback = nullptr;
    QsciLexerMatlab_DefaultColor2_Callback qscilexermatlab_defaultcolor2_callback = nullptr;
    QsciLexerMatlab_DefaultEolFill_Callback qscilexermatlab_defaulteolfill_callback = nullptr;
    QsciLexerMatlab_DefaultFont2_Callback qscilexermatlab_defaultfont2_callback = nullptr;
    QsciLexerMatlab_DefaultPaper2_Callback qscilexermatlab_defaultpaper2_callback = nullptr;
    QsciLexerMatlab_SetEditor_Callback qscilexermatlab_seteditor_callback = nullptr;
    QsciLexerMatlab_RefreshProperties_Callback qscilexermatlab_refreshproperties_callback = nullptr;
    QsciLexerMatlab_StyleBitsNeeded_Callback qscilexermatlab_stylebitsneeded_callback = nullptr;
    QsciLexerMatlab_WordCharacters_Callback qscilexermatlab_wordcharacters_callback = nullptr;
    QsciLexerMatlab_SetAutoIndentStyle_Callback qscilexermatlab_setautoindentstyle_callback = nullptr;
    QsciLexerMatlab_SetColor_Callback qscilexermatlab_setcolor_callback = nullptr;
    QsciLexerMatlab_SetEolFill_Callback qscilexermatlab_seteolfill_callback = nullptr;
    QsciLexerMatlab_SetFont_Callback qscilexermatlab_setfont_callback = nullptr;
    QsciLexerMatlab_SetPaper_Callback qscilexermatlab_setpaper_callback = nullptr;
    QsciLexerMatlab_ReadProperties_Callback qscilexermatlab_readproperties_callback = nullptr;
    QsciLexerMatlab_WriteProperties_Callback qscilexermatlab_writeproperties_callback = nullptr;
    QsciLexerMatlab_Event_Callback qscilexermatlab_event_callback = nullptr;
    QsciLexerMatlab_EventFilter_Callback qscilexermatlab_eventfilter_callback = nullptr;
    QsciLexerMatlab_TimerEvent_Callback qscilexermatlab_timerevent_callback = nullptr;
    QsciLexerMatlab_ChildEvent_Callback qscilexermatlab_childevent_callback = nullptr;
    QsciLexerMatlab_CustomEvent_Callback qscilexermatlab_customevent_callback = nullptr;
    QsciLexerMatlab_ConnectNotify_Callback qscilexermatlab_connectnotify_callback = nullptr;
    QsciLexerMatlab_DisconnectNotify_Callback qscilexermatlab_disconnectnotify_callback = nullptr;
    QsciLexerMatlab_TextAsBytes_Callback qscilexermatlab_textasbytes_callback = nullptr;
    QsciLexerMatlab_BytesAsText_Callback qscilexermatlab_bytesastext_callback = nullptr;
    QsciLexerMatlab_Sender_Callback qscilexermatlab_sender_callback = nullptr;
    QsciLexerMatlab_SenderSignalIndex_Callback qscilexermatlab_sendersignalindex_callback = nullptr;
    QsciLexerMatlab_Receivers_Callback qscilexermatlab_receivers_callback = nullptr;
    QsciLexerMatlab_IsSignalConnected_Callback qscilexermatlab_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermatlab_metaobject_isbase = false;
    mutable bool qscilexermatlab_metacast_isbase = false;
    mutable bool qscilexermatlab_metacall_isbase = false;
    mutable bool qscilexermatlab_language_isbase = false;
    mutable bool qscilexermatlab_lexer_isbase = false;
    mutable bool qscilexermatlab_lexerid_isbase = false;
    mutable bool qscilexermatlab_autocompletionfillups_isbase = false;
    mutable bool qscilexermatlab_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermatlab_blockend_isbase = false;
    mutable bool qscilexermatlab_blocklookback_isbase = false;
    mutable bool qscilexermatlab_blockstart_isbase = false;
    mutable bool qscilexermatlab_blockstartkeyword_isbase = false;
    mutable bool qscilexermatlab_bracestyle_isbase = false;
    mutable bool qscilexermatlab_casesensitive_isbase = false;
    mutable bool qscilexermatlab_color_isbase = false;
    mutable bool qscilexermatlab_eolfill_isbase = false;
    mutable bool qscilexermatlab_font_isbase = false;
    mutable bool qscilexermatlab_indentationguideview_isbase = false;
    mutable bool qscilexermatlab_keywords_isbase = false;
    mutable bool qscilexermatlab_defaultstyle_isbase = false;
    mutable bool qscilexermatlab_description_isbase = false;
    mutable bool qscilexermatlab_paper_isbase = false;
    mutable bool qscilexermatlab_defaultcolor2_isbase = false;
    mutable bool qscilexermatlab_defaulteolfill_isbase = false;
    mutable bool qscilexermatlab_defaultfont2_isbase = false;
    mutable bool qscilexermatlab_defaultpaper2_isbase = false;
    mutable bool qscilexermatlab_seteditor_isbase = false;
    mutable bool qscilexermatlab_refreshproperties_isbase = false;
    mutable bool qscilexermatlab_stylebitsneeded_isbase = false;
    mutable bool qscilexermatlab_wordcharacters_isbase = false;
    mutable bool qscilexermatlab_setautoindentstyle_isbase = false;
    mutable bool qscilexermatlab_setcolor_isbase = false;
    mutable bool qscilexermatlab_seteolfill_isbase = false;
    mutable bool qscilexermatlab_setfont_isbase = false;
    mutable bool qscilexermatlab_setpaper_isbase = false;
    mutable bool qscilexermatlab_readproperties_isbase = false;
    mutable bool qscilexermatlab_writeproperties_isbase = false;
    mutable bool qscilexermatlab_event_isbase = false;
    mutable bool qscilexermatlab_eventfilter_isbase = false;
    mutable bool qscilexermatlab_timerevent_isbase = false;
    mutable bool qscilexermatlab_childevent_isbase = false;
    mutable bool qscilexermatlab_customevent_isbase = false;
    mutable bool qscilexermatlab_connectnotify_isbase = false;
    mutable bool qscilexermatlab_disconnectnotify_isbase = false;
    mutable bool qscilexermatlab_textasbytes_isbase = false;
    mutable bool qscilexermatlab_bytesastext_isbase = false;
    mutable bool qscilexermatlab_sender_isbase = false;
    mutable bool qscilexermatlab_sendersignalindex_isbase = false;
    mutable bool qscilexermatlab_receivers_isbase = false;
    mutable bool qscilexermatlab_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMatlab() : QsciLexerMatlab() {};
    VirtualQsciLexerMatlab(QObject* parent) : QsciLexerMatlab(parent) {};

    // Callback setters
    inline void setQsciLexerMatlab_MetaObject_Callback(QsciLexerMatlab_MetaObject_Callback cb) { qscilexermatlab_metaobject_callback = cb; }
    inline void setQsciLexerMatlab_Metacast_Callback(QsciLexerMatlab_Metacast_Callback cb) { qscilexermatlab_metacast_callback = cb; }
    inline void setQsciLexerMatlab_Metacall_Callback(QsciLexerMatlab_Metacall_Callback cb) { qscilexermatlab_metacall_callback = cb; }
    inline void setQsciLexerMatlab_Language_Callback(QsciLexerMatlab_Language_Callback cb) { qscilexermatlab_language_callback = cb; }
    inline void setQsciLexerMatlab_Lexer_Callback(QsciLexerMatlab_Lexer_Callback cb) { qscilexermatlab_lexer_callback = cb; }
    inline void setQsciLexerMatlab_LexerId_Callback(QsciLexerMatlab_LexerId_Callback cb) { qscilexermatlab_lexerid_callback = cb; }
    inline void setQsciLexerMatlab_AutoCompletionFillups_Callback(QsciLexerMatlab_AutoCompletionFillups_Callback cb) { qscilexermatlab_autocompletionfillups_callback = cb; }
    inline void setQsciLexerMatlab_AutoCompletionWordSeparators_Callback(QsciLexerMatlab_AutoCompletionWordSeparators_Callback cb) { qscilexermatlab_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerMatlab_BlockEnd_Callback(QsciLexerMatlab_BlockEnd_Callback cb) { qscilexermatlab_blockend_callback = cb; }
    inline void setQsciLexerMatlab_BlockLookback_Callback(QsciLexerMatlab_BlockLookback_Callback cb) { qscilexermatlab_blocklookback_callback = cb; }
    inline void setQsciLexerMatlab_BlockStart_Callback(QsciLexerMatlab_BlockStart_Callback cb) { qscilexermatlab_blockstart_callback = cb; }
    inline void setQsciLexerMatlab_BlockStartKeyword_Callback(QsciLexerMatlab_BlockStartKeyword_Callback cb) { qscilexermatlab_blockstartkeyword_callback = cb; }
    inline void setQsciLexerMatlab_BraceStyle_Callback(QsciLexerMatlab_BraceStyle_Callback cb) { qscilexermatlab_bracestyle_callback = cb; }
    inline void setQsciLexerMatlab_CaseSensitive_Callback(QsciLexerMatlab_CaseSensitive_Callback cb) { qscilexermatlab_casesensitive_callback = cb; }
    inline void setQsciLexerMatlab_Color_Callback(QsciLexerMatlab_Color_Callback cb) { qscilexermatlab_color_callback = cb; }
    inline void setQsciLexerMatlab_EolFill_Callback(QsciLexerMatlab_EolFill_Callback cb) { qscilexermatlab_eolfill_callback = cb; }
    inline void setQsciLexerMatlab_Font_Callback(QsciLexerMatlab_Font_Callback cb) { qscilexermatlab_font_callback = cb; }
    inline void setQsciLexerMatlab_IndentationGuideView_Callback(QsciLexerMatlab_IndentationGuideView_Callback cb) { qscilexermatlab_indentationguideview_callback = cb; }
    inline void setQsciLexerMatlab_Keywords_Callback(QsciLexerMatlab_Keywords_Callback cb) { qscilexermatlab_keywords_callback = cb; }
    inline void setQsciLexerMatlab_DefaultStyle_Callback(QsciLexerMatlab_DefaultStyle_Callback cb) { qscilexermatlab_defaultstyle_callback = cb; }
    inline void setQsciLexerMatlab_Description_Callback(QsciLexerMatlab_Description_Callback cb) { qscilexermatlab_description_callback = cb; }
    inline void setQsciLexerMatlab_Paper_Callback(QsciLexerMatlab_Paper_Callback cb) { qscilexermatlab_paper_callback = cb; }
    inline void setQsciLexerMatlab_DefaultColor2_Callback(QsciLexerMatlab_DefaultColor2_Callback cb) { qscilexermatlab_defaultcolor2_callback = cb; }
    inline void setQsciLexerMatlab_DefaultEolFill_Callback(QsciLexerMatlab_DefaultEolFill_Callback cb) { qscilexermatlab_defaulteolfill_callback = cb; }
    inline void setQsciLexerMatlab_DefaultFont2_Callback(QsciLexerMatlab_DefaultFont2_Callback cb) { qscilexermatlab_defaultfont2_callback = cb; }
    inline void setQsciLexerMatlab_DefaultPaper2_Callback(QsciLexerMatlab_DefaultPaper2_Callback cb) { qscilexermatlab_defaultpaper2_callback = cb; }
    inline void setQsciLexerMatlab_SetEditor_Callback(QsciLexerMatlab_SetEditor_Callback cb) { qscilexermatlab_seteditor_callback = cb; }
    inline void setQsciLexerMatlab_RefreshProperties_Callback(QsciLexerMatlab_RefreshProperties_Callback cb) { qscilexermatlab_refreshproperties_callback = cb; }
    inline void setQsciLexerMatlab_StyleBitsNeeded_Callback(QsciLexerMatlab_StyleBitsNeeded_Callback cb) { qscilexermatlab_stylebitsneeded_callback = cb; }
    inline void setQsciLexerMatlab_WordCharacters_Callback(QsciLexerMatlab_WordCharacters_Callback cb) { qscilexermatlab_wordcharacters_callback = cb; }
    inline void setQsciLexerMatlab_SetAutoIndentStyle_Callback(QsciLexerMatlab_SetAutoIndentStyle_Callback cb) { qscilexermatlab_setautoindentstyle_callback = cb; }
    inline void setQsciLexerMatlab_SetColor_Callback(QsciLexerMatlab_SetColor_Callback cb) { qscilexermatlab_setcolor_callback = cb; }
    inline void setQsciLexerMatlab_SetEolFill_Callback(QsciLexerMatlab_SetEolFill_Callback cb) { qscilexermatlab_seteolfill_callback = cb; }
    inline void setQsciLexerMatlab_SetFont_Callback(QsciLexerMatlab_SetFont_Callback cb) { qscilexermatlab_setfont_callback = cb; }
    inline void setQsciLexerMatlab_SetPaper_Callback(QsciLexerMatlab_SetPaper_Callback cb) { qscilexermatlab_setpaper_callback = cb; }
    inline void setQsciLexerMatlab_ReadProperties_Callback(QsciLexerMatlab_ReadProperties_Callback cb) { qscilexermatlab_readproperties_callback = cb; }
    inline void setQsciLexerMatlab_WriteProperties_Callback(QsciLexerMatlab_WriteProperties_Callback cb) { qscilexermatlab_writeproperties_callback = cb; }
    inline void setQsciLexerMatlab_Event_Callback(QsciLexerMatlab_Event_Callback cb) { qscilexermatlab_event_callback = cb; }
    inline void setQsciLexerMatlab_EventFilter_Callback(QsciLexerMatlab_EventFilter_Callback cb) { qscilexermatlab_eventfilter_callback = cb; }
    inline void setQsciLexerMatlab_TimerEvent_Callback(QsciLexerMatlab_TimerEvent_Callback cb) { qscilexermatlab_timerevent_callback = cb; }
    inline void setQsciLexerMatlab_ChildEvent_Callback(QsciLexerMatlab_ChildEvent_Callback cb) { qscilexermatlab_childevent_callback = cb; }
    inline void setQsciLexerMatlab_CustomEvent_Callback(QsciLexerMatlab_CustomEvent_Callback cb) { qscilexermatlab_customevent_callback = cb; }
    inline void setQsciLexerMatlab_ConnectNotify_Callback(QsciLexerMatlab_ConnectNotify_Callback cb) { qscilexermatlab_connectnotify_callback = cb; }
    inline void setQsciLexerMatlab_DisconnectNotify_Callback(QsciLexerMatlab_DisconnectNotify_Callback cb) { qscilexermatlab_disconnectnotify_callback = cb; }
    inline void setQsciLexerMatlab_TextAsBytes_Callback(QsciLexerMatlab_TextAsBytes_Callback cb) { qscilexermatlab_textasbytes_callback = cb; }
    inline void setQsciLexerMatlab_BytesAsText_Callback(QsciLexerMatlab_BytesAsText_Callback cb) { qscilexermatlab_bytesastext_callback = cb; }
    inline void setQsciLexerMatlab_Sender_Callback(QsciLexerMatlab_Sender_Callback cb) { qscilexermatlab_sender_callback = cb; }
    inline void setQsciLexerMatlab_SenderSignalIndex_Callback(QsciLexerMatlab_SenderSignalIndex_Callback cb) { qscilexermatlab_sendersignalindex_callback = cb; }
    inline void setQsciLexerMatlab_Receivers_Callback(QsciLexerMatlab_Receivers_Callback cb) { qscilexermatlab_receivers_callback = cb; }
    inline void setQsciLexerMatlab_IsSignalConnected_Callback(QsciLexerMatlab_IsSignalConnected_Callback cb) { qscilexermatlab_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerMatlab_MetaObject_IsBase(bool value) const { qscilexermatlab_metaobject_isbase = value; }
    inline void setQsciLexerMatlab_Metacast_IsBase(bool value) const { qscilexermatlab_metacast_isbase = value; }
    inline void setQsciLexerMatlab_Metacall_IsBase(bool value) const { qscilexermatlab_metacall_isbase = value; }
    inline void setQsciLexerMatlab_Language_IsBase(bool value) const { qscilexermatlab_language_isbase = value; }
    inline void setQsciLexerMatlab_Lexer_IsBase(bool value) const { qscilexermatlab_lexer_isbase = value; }
    inline void setQsciLexerMatlab_LexerId_IsBase(bool value) const { qscilexermatlab_lexerid_isbase = value; }
    inline void setQsciLexerMatlab_AutoCompletionFillups_IsBase(bool value) const { qscilexermatlab_autocompletionfillups_isbase = value; }
    inline void setQsciLexerMatlab_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermatlab_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerMatlab_BlockEnd_IsBase(bool value) const { qscilexermatlab_blockend_isbase = value; }
    inline void setQsciLexerMatlab_BlockLookback_IsBase(bool value) const { qscilexermatlab_blocklookback_isbase = value; }
    inline void setQsciLexerMatlab_BlockStart_IsBase(bool value) const { qscilexermatlab_blockstart_isbase = value; }
    inline void setQsciLexerMatlab_BlockStartKeyword_IsBase(bool value) const { qscilexermatlab_blockstartkeyword_isbase = value; }
    inline void setQsciLexerMatlab_BraceStyle_IsBase(bool value) const { qscilexermatlab_bracestyle_isbase = value; }
    inline void setQsciLexerMatlab_CaseSensitive_IsBase(bool value) const { qscilexermatlab_casesensitive_isbase = value; }
    inline void setQsciLexerMatlab_Color_IsBase(bool value) const { qscilexermatlab_color_isbase = value; }
    inline void setQsciLexerMatlab_EolFill_IsBase(bool value) const { qscilexermatlab_eolfill_isbase = value; }
    inline void setQsciLexerMatlab_Font_IsBase(bool value) const { qscilexermatlab_font_isbase = value; }
    inline void setQsciLexerMatlab_IndentationGuideView_IsBase(bool value) const { qscilexermatlab_indentationguideview_isbase = value; }
    inline void setQsciLexerMatlab_Keywords_IsBase(bool value) const { qscilexermatlab_keywords_isbase = value; }
    inline void setQsciLexerMatlab_DefaultStyle_IsBase(bool value) const { qscilexermatlab_defaultstyle_isbase = value; }
    inline void setQsciLexerMatlab_Description_IsBase(bool value) const { qscilexermatlab_description_isbase = value; }
    inline void setQsciLexerMatlab_Paper_IsBase(bool value) const { qscilexermatlab_paper_isbase = value; }
    inline void setQsciLexerMatlab_DefaultColor2_IsBase(bool value) const { qscilexermatlab_defaultcolor2_isbase = value; }
    inline void setQsciLexerMatlab_DefaultEolFill_IsBase(bool value) const { qscilexermatlab_defaulteolfill_isbase = value; }
    inline void setQsciLexerMatlab_DefaultFont2_IsBase(bool value) const { qscilexermatlab_defaultfont2_isbase = value; }
    inline void setQsciLexerMatlab_DefaultPaper2_IsBase(bool value) const { qscilexermatlab_defaultpaper2_isbase = value; }
    inline void setQsciLexerMatlab_SetEditor_IsBase(bool value) const { qscilexermatlab_seteditor_isbase = value; }
    inline void setQsciLexerMatlab_RefreshProperties_IsBase(bool value) const { qscilexermatlab_refreshproperties_isbase = value; }
    inline void setQsciLexerMatlab_StyleBitsNeeded_IsBase(bool value) const { qscilexermatlab_stylebitsneeded_isbase = value; }
    inline void setQsciLexerMatlab_WordCharacters_IsBase(bool value) const { qscilexermatlab_wordcharacters_isbase = value; }
    inline void setQsciLexerMatlab_SetAutoIndentStyle_IsBase(bool value) const { qscilexermatlab_setautoindentstyle_isbase = value; }
    inline void setQsciLexerMatlab_SetColor_IsBase(bool value) const { qscilexermatlab_setcolor_isbase = value; }
    inline void setQsciLexerMatlab_SetEolFill_IsBase(bool value) const { qscilexermatlab_seteolfill_isbase = value; }
    inline void setQsciLexerMatlab_SetFont_IsBase(bool value) const { qscilexermatlab_setfont_isbase = value; }
    inline void setQsciLexerMatlab_SetPaper_IsBase(bool value) const { qscilexermatlab_setpaper_isbase = value; }
    inline void setQsciLexerMatlab_ReadProperties_IsBase(bool value) const { qscilexermatlab_readproperties_isbase = value; }
    inline void setQsciLexerMatlab_WriteProperties_IsBase(bool value) const { qscilexermatlab_writeproperties_isbase = value; }
    inline void setQsciLexerMatlab_Event_IsBase(bool value) const { qscilexermatlab_event_isbase = value; }
    inline void setQsciLexerMatlab_EventFilter_IsBase(bool value) const { qscilexermatlab_eventfilter_isbase = value; }
    inline void setQsciLexerMatlab_TimerEvent_IsBase(bool value) const { qscilexermatlab_timerevent_isbase = value; }
    inline void setQsciLexerMatlab_ChildEvent_IsBase(bool value) const { qscilexermatlab_childevent_isbase = value; }
    inline void setQsciLexerMatlab_CustomEvent_IsBase(bool value) const { qscilexermatlab_customevent_isbase = value; }
    inline void setQsciLexerMatlab_ConnectNotify_IsBase(bool value) const { qscilexermatlab_connectnotify_isbase = value; }
    inline void setQsciLexerMatlab_DisconnectNotify_IsBase(bool value) const { qscilexermatlab_disconnectnotify_isbase = value; }
    inline void setQsciLexerMatlab_TextAsBytes_IsBase(bool value) const { qscilexermatlab_textasbytes_isbase = value; }
    inline void setQsciLexerMatlab_BytesAsText_IsBase(bool value) const { qscilexermatlab_bytesastext_isbase = value; }
    inline void setQsciLexerMatlab_Sender_IsBase(bool value) const { qscilexermatlab_sender_isbase = value; }
    inline void setQsciLexerMatlab_SenderSignalIndex_IsBase(bool value) const { qscilexermatlab_sendersignalindex_isbase = value; }
    inline void setQsciLexerMatlab_Receivers_IsBase(bool value) const { qscilexermatlab_receivers_isbase = value; }
    inline void setQsciLexerMatlab_IsSignalConnected_IsBase(bool value) const { qscilexermatlab_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermatlab_metaobject_isbase) {
            qscilexermatlab_metaobject_isbase = false;
            return QsciLexerMatlab::metaObject();
        }
        auto metaobject_cb = qscilexermatlab_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermatlab_metacast_isbase) {
            qscilexermatlab_metacast_isbase = false;
            return QsciLexerMatlab::qt_metacast(param1);
        }
        auto metacast_cb = qscilexermatlab_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermatlab_metacall_isbase) {
            qscilexermatlab_metacall_isbase = false;
            return QsciLexerMatlab::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexermatlab_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexermatlab_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermatlab_lexer_isbase) {
            qscilexermatlab_lexer_isbase = false;
            return QsciLexerMatlab::lexer();
        }
        auto lexer_cb = qscilexermatlab_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermatlab_lexerid_isbase) {
            qscilexermatlab_lexerid_isbase = false;
            return QsciLexerMatlab::lexerId();
        }
        auto lexerid_cb = qscilexermatlab_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermatlab_autocompletionfillups_isbase) {
            qscilexermatlab_autocompletionfillups_isbase = false;
            return QsciLexerMatlab::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexermatlab_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermatlab_autocompletionwordseparators_isbase) {
            qscilexermatlab_autocompletionwordseparators_isbase = false;
            return QsciLexerMatlab::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexermatlab_autocompletionwordseparators_callback;
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
        return QsciLexerMatlab::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermatlab_blockend_isbase) {
            qscilexermatlab_blockend_isbase = false;
            return QsciLexerMatlab::blockEnd(style);
        }
        auto blockend_cb = qscilexermatlab_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermatlab_blocklookback_isbase) {
            qscilexermatlab_blocklookback_isbase = false;
            return QsciLexerMatlab::blockLookback();
        }
        auto blocklookback_cb = qscilexermatlab_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermatlab_blockstart_isbase) {
            qscilexermatlab_blockstart_isbase = false;
            return QsciLexerMatlab::blockStart(style);
        }
        auto blockstart_cb = qscilexermatlab_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermatlab_blockstartkeyword_isbase) {
            qscilexermatlab_blockstartkeyword_isbase = false;
            return QsciLexerMatlab::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexermatlab_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermatlab_bracestyle_isbase) {
            qscilexermatlab_bracestyle_isbase = false;
            return QsciLexerMatlab::braceStyle();
        }
        auto bracestyle_cb = qscilexermatlab_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermatlab_casesensitive_isbase) {
            qscilexermatlab_casesensitive_isbase = false;
            return QsciLexerMatlab::caseSensitive();
        }
        auto casesensitive_cb = qscilexermatlab_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermatlab_color_isbase) {
            qscilexermatlab_color_isbase = false;
            return QsciLexerMatlab::color(style);
        }
        auto color_cb = qscilexermatlab_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermatlab_eolfill_isbase) {
            qscilexermatlab_eolfill_isbase = false;
            return QsciLexerMatlab::eolFill(style);
        }
        auto eolfill_cb = qscilexermatlab_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermatlab_font_isbase) {
            qscilexermatlab_font_isbase = false;
            return QsciLexerMatlab::font(style);
        }
        auto font_cb = qscilexermatlab_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermatlab_indentationguideview_isbase) {
            qscilexermatlab_indentationguideview_isbase = false;
            return QsciLexerMatlab::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexermatlab_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermatlab_keywords_isbase) {
            qscilexermatlab_keywords_isbase = false;
            return QsciLexerMatlab::keywords(set);
        }
        auto keywords_cb = qscilexermatlab_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermatlab_defaultstyle_isbase) {
            qscilexermatlab_defaultstyle_isbase = false;
            return QsciLexerMatlab::defaultStyle();
        }
        auto defaultstyle_cb = qscilexermatlab_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexermatlab_description_callback;
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
        if (qscilexermatlab_paper_isbase) {
            qscilexermatlab_paper_isbase = false;
            return QsciLexerMatlab::paper(style);
        }
        auto paper_cb = qscilexermatlab_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermatlab_defaultcolor2_isbase) {
            qscilexermatlab_defaultcolor2_isbase = false;
            return QsciLexerMatlab::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexermatlab_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermatlab_defaulteolfill_isbase) {
            qscilexermatlab_defaulteolfill_isbase = false;
            return QsciLexerMatlab::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexermatlab_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermatlab_defaultfont2_isbase) {
            qscilexermatlab_defaultfont2_isbase = false;
            return QsciLexerMatlab::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexermatlab_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermatlab_defaultpaper2_isbase) {
            qscilexermatlab_defaultpaper2_isbase = false;
            return QsciLexerMatlab::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexermatlab_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerMatlab::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermatlab_seteditor_isbase) {
            qscilexermatlab_seteditor_isbase = false;
            QsciLexerMatlab::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexermatlab_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermatlab_refreshproperties_isbase) {
            qscilexermatlab_refreshproperties_isbase = false;
            QsciLexerMatlab::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexermatlab_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerMatlab::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermatlab_stylebitsneeded_isbase) {
            qscilexermatlab_stylebitsneeded_isbase = false;
            return QsciLexerMatlab::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexermatlab_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermatlab_wordcharacters_isbase) {
            qscilexermatlab_wordcharacters_isbase = false;
            return QsciLexerMatlab::wordCharacters();
        }
        auto wordcharacters_cb = qscilexermatlab_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermatlab_setautoindentstyle_isbase) {
            qscilexermatlab_setautoindentstyle_isbase = false;
            QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexermatlab_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermatlab_setcolor_isbase) {
            qscilexermatlab_setcolor_isbase = false;
            QsciLexerMatlab::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexermatlab_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermatlab_seteolfill_isbase) {
            qscilexermatlab_seteolfill_isbase = false;
            QsciLexerMatlab::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexermatlab_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermatlab_setfont_isbase) {
            qscilexermatlab_setfont_isbase = false;
            QsciLexerMatlab::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexermatlab_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermatlab_setpaper_isbase) {
            qscilexermatlab_setpaper_isbase = false;
            QsciLexerMatlab::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexermatlab_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermatlab_readproperties_isbase) {
            qscilexermatlab_readproperties_isbase = false;
            return QsciLexerMatlab::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexermatlab_readproperties_callback;
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
        return QsciLexerMatlab::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermatlab_writeproperties_isbase) {
            qscilexermatlab_writeproperties_isbase = false;
            return QsciLexerMatlab::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexermatlab_writeproperties_callback;
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
        return QsciLexerMatlab::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermatlab_event_isbase) {
            qscilexermatlab_event_isbase = false;
            return QsciLexerMatlab::event(event);
        }
        auto event_cb = qscilexermatlab_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermatlab_eventfilter_isbase) {
            qscilexermatlab_eventfilter_isbase = false;
            return QsciLexerMatlab::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexermatlab_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMatlab::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermatlab_timerevent_isbase) {
            qscilexermatlab_timerevent_isbase = false;
            QsciLexerMatlab::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexermatlab_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermatlab_childevent_isbase) {
            qscilexermatlab_childevent_isbase = false;
            QsciLexerMatlab::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexermatlab_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermatlab_customevent_isbase) {
            qscilexermatlab_customevent_isbase = false;
            QsciLexerMatlab::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexermatlab_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_connectnotify_isbase) {
            qscilexermatlab_connectnotify_isbase = false;
            QsciLexerMatlab::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexermatlab_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_disconnectnotify_isbase) {
            qscilexermatlab_disconnectnotify_isbase = false;
            QsciLexerMatlab::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexermatlab_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerMatlab::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexermatlab_textasbytes_isbase) {
            qscilexermatlab_textasbytes_isbase = false;
            return QsciLexerMatlab::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexermatlab_textasbytes_callback;
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
        return QsciLexerMatlab::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexermatlab_bytesastext_isbase) {
            qscilexermatlab_bytesastext_isbase = false;
            return QsciLexerMatlab::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexermatlab_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerMatlab::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermatlab_sender_isbase) {
            qscilexermatlab_sender_isbase = false;
            return QsciLexerMatlab::sender();
        }
        auto sender_cb = qscilexermatlab_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerMatlab::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermatlab_sendersignalindex_isbase) {
            qscilexermatlab_sendersignalindex_isbase = false;
            return QsciLexerMatlab::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexermatlab_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermatlab_receivers_isbase) {
            qscilexermatlab_receivers_isbase = false;
            return QsciLexerMatlab::receivers(signal);
        }
        auto receivers_cb = qscilexermatlab_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermatlab_issignalconnected_isbase) {
            qscilexermatlab_issignalconnected_isbase = false;
            return QsciLexerMatlab::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexermatlab_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerMatlab_ReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMatlab_SuperReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMatlab_WriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMatlab_SuperWriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMatlab_TimerEvent(QsciLexerMatlab* self, QTimerEvent* event);
    friend void QsciLexerMatlab_SuperTimerEvent(QsciLexerMatlab* self, QTimerEvent* event);
    friend void QsciLexerMatlab_ChildEvent(QsciLexerMatlab* self, QChildEvent* event);
    friend void QsciLexerMatlab_SuperChildEvent(QsciLexerMatlab* self, QChildEvent* event);
    friend void QsciLexerMatlab_CustomEvent(QsciLexerMatlab* self, QEvent* event);
    friend void QsciLexerMatlab_SuperCustomEvent(QsciLexerMatlab* self, QEvent* event);
    friend void QsciLexerMatlab_ConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
    friend void QsciLexerMatlab_SuperConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
    friend void QsciLexerMatlab_DisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
    friend void QsciLexerMatlab_SuperDisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerMatlab_TextAsBytes(const QsciLexerMatlab* self, const libqt_string text);
    friend libqt_string QsciLexerMatlab_SuperTextAsBytes(const QsciLexerMatlab* self, const libqt_string text);
    friend libqt_string QsciLexerMatlab_BytesAsText(const QsciLexerMatlab* self, const char* bytes, int size);
    friend libqt_string QsciLexerMatlab_SuperBytesAsText(const QsciLexerMatlab* self, const char* bytes, int size);
    friend QObject* QsciLexerMatlab_Sender(const QsciLexerMatlab* self);
    friend QObject* QsciLexerMatlab_SuperSender(const QsciLexerMatlab* self);
    friend int QsciLexerMatlab_SenderSignalIndex(const QsciLexerMatlab* self);
    friend int QsciLexerMatlab_SuperSenderSignalIndex(const QsciLexerMatlab* self);
    friend int QsciLexerMatlab_Receivers(const QsciLexerMatlab* self, const char* signal);
    friend int QsciLexerMatlab_SuperReceivers(const QsciLexerMatlab* self, const char* signal);
    friend bool QsciLexerMatlab_IsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal);
    friend bool QsciLexerMatlab_SuperIsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal);
};

#endif
