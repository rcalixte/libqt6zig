#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERNASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERNASM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerNASM so that we can call protected methods
class VirtualQsciLexerNASM final : public QsciLexerNASM {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerNASM = true;

    // Virtual class public types (including callbacks)
    using QsciLexerNASM_MetaObject_Callback = QMetaObject* (*)();
    using QsciLexerNASM_Metacast_Callback = void* (*)(QsciLexerNASM*, const char*);
    using QsciLexerNASM_Metacall_Callback = int (*)(QsciLexerNASM*, int, int, void**);
    using QsciLexerNASM_SetFoldComments_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_SetFoldCompact_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_SetCommentDelimiter_Callback = void (*)(QsciLexerNASM*, QChar*);
    using QsciLexerNASM_SetFoldSyntaxBased_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_Language_Callback = const char* (*)();
    using QsciLexerNASM_Lexer_Callback = const char* (*)();
    using QsciLexerNASM_LexerId_Callback = int (*)();
    using QsciLexerNASM_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerNASM_AutoCompletionWordSeparators_Callback = const char** (*)();
    using QsciLexerNASM_BlockEnd_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BlockLookback_Callback = int (*)();
    using QsciLexerNASM_BlockStart_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BlockStartKeyword_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BraceStyle_Callback = int (*)();
    using QsciLexerNASM_CaseSensitive_Callback = bool (*)();
    using QsciLexerNASM_Color_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_EolFill_Callback = bool (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_Font_Callback = QFont* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_IndentationGuideView_Callback = int (*)();
    using QsciLexerNASM_Keywords_Callback = const char* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultStyle_Callback = int (*)();
    using QsciLexerNASM_Description_Callback = const char* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_Paper_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultColor2_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultEolFill_Callback = bool (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultFont2_Callback = QFont* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultPaper2_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_SetEditor_Callback = void (*)(QsciLexerNASM*, QsciScintilla*);
    using QsciLexerNASM_RefreshProperties_Callback = void (*)();
    using QsciLexerNASM_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerNASM_WordCharacters_Callback = const char* (*)();
    using QsciLexerNASM_SetAutoIndentStyle_Callback = void (*)(QsciLexerNASM*, int);
    using QsciLexerNASM_SetColor_Callback = void (*)(QsciLexerNASM*, QColor*, int);
    using QsciLexerNASM_SetEolFill_Callback = void (*)(QsciLexerNASM*, bool, int);
    using QsciLexerNASM_SetFont_Callback = void (*)(QsciLexerNASM*, QFont*, int);
    using QsciLexerNASM_SetPaper_Callback = void (*)(QsciLexerNASM*, QColor*, int);
    using QsciLexerNASM_ReadProperties_Callback = bool (*)(QsciLexerNASM*, QSettings*, const char*);
    using QsciLexerNASM_WriteProperties_Callback = bool (*)(const QsciLexerNASM*, QSettings*, const char*);
    using QsciLexerNASM_Event_Callback = bool (*)(QsciLexerNASM*, QEvent*);
    using QsciLexerNASM_EventFilter_Callback = bool (*)(QsciLexerNASM*, QObject*, QEvent*);
    using QsciLexerNASM_TimerEvent_Callback = void (*)(QsciLexerNASM*, QTimerEvent*);
    using QsciLexerNASM_ChildEvent_Callback = void (*)(QsciLexerNASM*, QChildEvent*);
    using QsciLexerNASM_CustomEvent_Callback = void (*)(QsciLexerNASM*, QEvent*);
    using QsciLexerNASM_ConnectNotify_Callback = void (*)(QsciLexerNASM*, QMetaMethod*);
    using QsciLexerNASM_DisconnectNotify_Callback = void (*)(QsciLexerNASM*, QMetaMethod*);
    using QsciLexerNASM_TextAsBytes_Callback = libqt_string (*)(const QsciLexerNASM*, const char*);
    using QsciLexerNASM_BytesAsText_Callback = const char* (*)(const QsciLexerNASM*, const char*, int);
    using QsciLexerNASM_Sender_Callback = QObject* (*)();
    using QsciLexerNASM_SenderSignalIndex_Callback = int (*)();
    using QsciLexerNASM_Receivers_Callback = int (*)(const QsciLexerNASM*, const char*);
    using QsciLexerNASM_IsSignalConnected_Callback = bool (*)(const QsciLexerNASM*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerNASM_MetaObject_Callback qscilexernasm_metaobject_callback = nullptr;
    QsciLexerNASM_Metacast_Callback qscilexernasm_metacast_callback = nullptr;
    QsciLexerNASM_Metacall_Callback qscilexernasm_metacall_callback = nullptr;
    QsciLexerNASM_SetFoldComments_Callback qscilexernasm_setfoldcomments_callback = nullptr;
    QsciLexerNASM_SetFoldCompact_Callback qscilexernasm_setfoldcompact_callback = nullptr;
    QsciLexerNASM_SetCommentDelimiter_Callback qscilexernasm_setcommentdelimiter_callback = nullptr;
    QsciLexerNASM_SetFoldSyntaxBased_Callback qscilexernasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerNASM_Language_Callback qscilexernasm_language_callback = nullptr;
    QsciLexerNASM_Lexer_Callback qscilexernasm_lexer_callback = nullptr;
    QsciLexerNASM_LexerId_Callback qscilexernasm_lexerid_callback = nullptr;
    QsciLexerNASM_AutoCompletionFillups_Callback qscilexernasm_autocompletionfillups_callback = nullptr;
    QsciLexerNASM_AutoCompletionWordSeparators_Callback qscilexernasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerNASM_BlockEnd_Callback qscilexernasm_blockend_callback = nullptr;
    QsciLexerNASM_BlockLookback_Callback qscilexernasm_blocklookback_callback = nullptr;
    QsciLexerNASM_BlockStart_Callback qscilexernasm_blockstart_callback = nullptr;
    QsciLexerNASM_BlockStartKeyword_Callback qscilexernasm_blockstartkeyword_callback = nullptr;
    QsciLexerNASM_BraceStyle_Callback qscilexernasm_bracestyle_callback = nullptr;
    QsciLexerNASM_CaseSensitive_Callback qscilexernasm_casesensitive_callback = nullptr;
    QsciLexerNASM_Color_Callback qscilexernasm_color_callback = nullptr;
    QsciLexerNASM_EolFill_Callback qscilexernasm_eolfill_callback = nullptr;
    QsciLexerNASM_Font_Callback qscilexernasm_font_callback = nullptr;
    QsciLexerNASM_IndentationGuideView_Callback qscilexernasm_indentationguideview_callback = nullptr;
    QsciLexerNASM_Keywords_Callback qscilexernasm_keywords_callback = nullptr;
    QsciLexerNASM_DefaultStyle_Callback qscilexernasm_defaultstyle_callback = nullptr;
    QsciLexerNASM_Description_Callback qscilexernasm_description_callback = nullptr;
    QsciLexerNASM_Paper_Callback qscilexernasm_paper_callback = nullptr;
    QsciLexerNASM_DefaultColor2_Callback qscilexernasm_defaultcolor2_callback = nullptr;
    QsciLexerNASM_DefaultEolFill_Callback qscilexernasm_defaulteolfill_callback = nullptr;
    QsciLexerNASM_DefaultFont2_Callback qscilexernasm_defaultfont2_callback = nullptr;
    QsciLexerNASM_DefaultPaper2_Callback qscilexernasm_defaultpaper2_callback = nullptr;
    QsciLexerNASM_SetEditor_Callback qscilexernasm_seteditor_callback = nullptr;
    QsciLexerNASM_RefreshProperties_Callback qscilexernasm_refreshproperties_callback = nullptr;
    QsciLexerNASM_StyleBitsNeeded_Callback qscilexernasm_stylebitsneeded_callback = nullptr;
    QsciLexerNASM_WordCharacters_Callback qscilexernasm_wordcharacters_callback = nullptr;
    QsciLexerNASM_SetAutoIndentStyle_Callback qscilexernasm_setautoindentstyle_callback = nullptr;
    QsciLexerNASM_SetColor_Callback qscilexernasm_setcolor_callback = nullptr;
    QsciLexerNASM_SetEolFill_Callback qscilexernasm_seteolfill_callback = nullptr;
    QsciLexerNASM_SetFont_Callback qscilexernasm_setfont_callback = nullptr;
    QsciLexerNASM_SetPaper_Callback qscilexernasm_setpaper_callback = nullptr;
    QsciLexerNASM_ReadProperties_Callback qscilexernasm_readproperties_callback = nullptr;
    QsciLexerNASM_WriteProperties_Callback qscilexernasm_writeproperties_callback = nullptr;
    QsciLexerNASM_Event_Callback qscilexernasm_event_callback = nullptr;
    QsciLexerNASM_EventFilter_Callback qscilexernasm_eventfilter_callback = nullptr;
    QsciLexerNASM_TimerEvent_Callback qscilexernasm_timerevent_callback = nullptr;
    QsciLexerNASM_ChildEvent_Callback qscilexernasm_childevent_callback = nullptr;
    QsciLexerNASM_CustomEvent_Callback qscilexernasm_customevent_callback = nullptr;
    QsciLexerNASM_ConnectNotify_Callback qscilexernasm_connectnotify_callback = nullptr;
    QsciLexerNASM_DisconnectNotify_Callback qscilexernasm_disconnectnotify_callback = nullptr;
    QsciLexerNASM_TextAsBytes_Callback qscilexernasm_textasbytes_callback = nullptr;
    QsciLexerNASM_BytesAsText_Callback qscilexernasm_bytesastext_callback = nullptr;
    QsciLexerNASM_Sender_Callback qscilexernasm_sender_callback = nullptr;
    QsciLexerNASM_SenderSignalIndex_Callback qscilexernasm_sendersignalindex_callback = nullptr;
    QsciLexerNASM_Receivers_Callback qscilexernasm_receivers_callback = nullptr;
    QsciLexerNASM_IsSignalConnected_Callback qscilexernasm_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexernasm_metaobject_isbase = false;
    mutable bool qscilexernasm_metacast_isbase = false;
    mutable bool qscilexernasm_metacall_isbase = false;
    mutable bool qscilexernasm_setfoldcomments_isbase = false;
    mutable bool qscilexernasm_setfoldcompact_isbase = false;
    mutable bool qscilexernasm_setcommentdelimiter_isbase = false;
    mutable bool qscilexernasm_setfoldsyntaxbased_isbase = false;
    mutable bool qscilexernasm_language_isbase = false;
    mutable bool qscilexernasm_lexer_isbase = false;
    mutable bool qscilexernasm_lexerid_isbase = false;
    mutable bool qscilexernasm_autocompletionfillups_isbase = false;
    mutable bool qscilexernasm_autocompletionwordseparators_isbase = false;
    mutable bool qscilexernasm_blockend_isbase = false;
    mutable bool qscilexernasm_blocklookback_isbase = false;
    mutable bool qscilexernasm_blockstart_isbase = false;
    mutable bool qscilexernasm_blockstartkeyword_isbase = false;
    mutable bool qscilexernasm_bracestyle_isbase = false;
    mutable bool qscilexernasm_casesensitive_isbase = false;
    mutable bool qscilexernasm_color_isbase = false;
    mutable bool qscilexernasm_eolfill_isbase = false;
    mutable bool qscilexernasm_font_isbase = false;
    mutable bool qscilexernasm_indentationguideview_isbase = false;
    mutable bool qscilexernasm_keywords_isbase = false;
    mutable bool qscilexernasm_defaultstyle_isbase = false;
    mutable bool qscilexernasm_description_isbase = false;
    mutable bool qscilexernasm_paper_isbase = false;
    mutable bool qscilexernasm_defaultcolor2_isbase = false;
    mutable bool qscilexernasm_defaulteolfill_isbase = false;
    mutable bool qscilexernasm_defaultfont2_isbase = false;
    mutable bool qscilexernasm_defaultpaper2_isbase = false;
    mutable bool qscilexernasm_seteditor_isbase = false;
    mutable bool qscilexernasm_refreshproperties_isbase = false;
    mutable bool qscilexernasm_stylebitsneeded_isbase = false;
    mutable bool qscilexernasm_wordcharacters_isbase = false;
    mutable bool qscilexernasm_setautoindentstyle_isbase = false;
    mutable bool qscilexernasm_setcolor_isbase = false;
    mutable bool qscilexernasm_seteolfill_isbase = false;
    mutable bool qscilexernasm_setfont_isbase = false;
    mutable bool qscilexernasm_setpaper_isbase = false;
    mutable bool qscilexernasm_readproperties_isbase = false;
    mutable bool qscilexernasm_writeproperties_isbase = false;
    mutable bool qscilexernasm_event_isbase = false;
    mutable bool qscilexernasm_eventfilter_isbase = false;
    mutable bool qscilexernasm_timerevent_isbase = false;
    mutable bool qscilexernasm_childevent_isbase = false;
    mutable bool qscilexernasm_customevent_isbase = false;
    mutable bool qscilexernasm_connectnotify_isbase = false;
    mutable bool qscilexernasm_disconnectnotify_isbase = false;
    mutable bool qscilexernasm_textasbytes_isbase = false;
    mutable bool qscilexernasm_bytesastext_isbase = false;
    mutable bool qscilexernasm_sender_isbase = false;
    mutable bool qscilexernasm_sendersignalindex_isbase = false;
    mutable bool qscilexernasm_receivers_isbase = false;
    mutable bool qscilexernasm_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerNASM() : QsciLexerNASM() {};
    VirtualQsciLexerNASM(QObject* parent) : QsciLexerNASM(parent) {};

    // Callback setters
    inline void setQsciLexerNASM_MetaObject_Callback(QsciLexerNASM_MetaObject_Callback cb) { qscilexernasm_metaobject_callback = cb; }
    inline void setQsciLexerNASM_Metacast_Callback(QsciLexerNASM_Metacast_Callback cb) { qscilexernasm_metacast_callback = cb; }
    inline void setQsciLexerNASM_Metacall_Callback(QsciLexerNASM_Metacall_Callback cb) { qscilexernasm_metacall_callback = cb; }
    inline void setQsciLexerNASM_SetFoldComments_Callback(QsciLexerNASM_SetFoldComments_Callback cb) { qscilexernasm_setfoldcomments_callback = cb; }
    inline void setQsciLexerNASM_SetFoldCompact_Callback(QsciLexerNASM_SetFoldCompact_Callback cb) { qscilexernasm_setfoldcompact_callback = cb; }
    inline void setQsciLexerNASM_SetCommentDelimiter_Callback(QsciLexerNASM_SetCommentDelimiter_Callback cb) { qscilexernasm_setcommentdelimiter_callback = cb; }
    inline void setQsciLexerNASM_SetFoldSyntaxBased_Callback(QsciLexerNASM_SetFoldSyntaxBased_Callback cb) { qscilexernasm_setfoldsyntaxbased_callback = cb; }
    inline void setQsciLexerNASM_Language_Callback(QsciLexerNASM_Language_Callback cb) { qscilexernasm_language_callback = cb; }
    inline void setQsciLexerNASM_Lexer_Callback(QsciLexerNASM_Lexer_Callback cb) { qscilexernasm_lexer_callback = cb; }
    inline void setQsciLexerNASM_LexerId_Callback(QsciLexerNASM_LexerId_Callback cb) { qscilexernasm_lexerid_callback = cb; }
    inline void setQsciLexerNASM_AutoCompletionFillups_Callback(QsciLexerNASM_AutoCompletionFillups_Callback cb) { qscilexernasm_autocompletionfillups_callback = cb; }
    inline void setQsciLexerNASM_AutoCompletionWordSeparators_Callback(QsciLexerNASM_AutoCompletionWordSeparators_Callback cb) { qscilexernasm_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerNASM_BlockEnd_Callback(QsciLexerNASM_BlockEnd_Callback cb) { qscilexernasm_blockend_callback = cb; }
    inline void setQsciLexerNASM_BlockLookback_Callback(QsciLexerNASM_BlockLookback_Callback cb) { qscilexernasm_blocklookback_callback = cb; }
    inline void setQsciLexerNASM_BlockStart_Callback(QsciLexerNASM_BlockStart_Callback cb) { qscilexernasm_blockstart_callback = cb; }
    inline void setQsciLexerNASM_BlockStartKeyword_Callback(QsciLexerNASM_BlockStartKeyword_Callback cb) { qscilexernasm_blockstartkeyword_callback = cb; }
    inline void setQsciLexerNASM_BraceStyle_Callback(QsciLexerNASM_BraceStyle_Callback cb) { qscilexernasm_bracestyle_callback = cb; }
    inline void setQsciLexerNASM_CaseSensitive_Callback(QsciLexerNASM_CaseSensitive_Callback cb) { qscilexernasm_casesensitive_callback = cb; }
    inline void setQsciLexerNASM_Color_Callback(QsciLexerNASM_Color_Callback cb) { qscilexernasm_color_callback = cb; }
    inline void setQsciLexerNASM_EolFill_Callback(QsciLexerNASM_EolFill_Callback cb) { qscilexernasm_eolfill_callback = cb; }
    inline void setQsciLexerNASM_Font_Callback(QsciLexerNASM_Font_Callback cb) { qscilexernasm_font_callback = cb; }
    inline void setQsciLexerNASM_IndentationGuideView_Callback(QsciLexerNASM_IndentationGuideView_Callback cb) { qscilexernasm_indentationguideview_callback = cb; }
    inline void setQsciLexerNASM_Keywords_Callback(QsciLexerNASM_Keywords_Callback cb) { qscilexernasm_keywords_callback = cb; }
    inline void setQsciLexerNASM_DefaultStyle_Callback(QsciLexerNASM_DefaultStyle_Callback cb) { qscilexernasm_defaultstyle_callback = cb; }
    inline void setQsciLexerNASM_Description_Callback(QsciLexerNASM_Description_Callback cb) { qscilexernasm_description_callback = cb; }
    inline void setQsciLexerNASM_Paper_Callback(QsciLexerNASM_Paper_Callback cb) { qscilexernasm_paper_callback = cb; }
    inline void setQsciLexerNASM_DefaultColor2_Callback(QsciLexerNASM_DefaultColor2_Callback cb) { qscilexernasm_defaultcolor2_callback = cb; }
    inline void setQsciLexerNASM_DefaultEolFill_Callback(QsciLexerNASM_DefaultEolFill_Callback cb) { qscilexernasm_defaulteolfill_callback = cb; }
    inline void setQsciLexerNASM_DefaultFont2_Callback(QsciLexerNASM_DefaultFont2_Callback cb) { qscilexernasm_defaultfont2_callback = cb; }
    inline void setQsciLexerNASM_DefaultPaper2_Callback(QsciLexerNASM_DefaultPaper2_Callback cb) { qscilexernasm_defaultpaper2_callback = cb; }
    inline void setQsciLexerNASM_SetEditor_Callback(QsciLexerNASM_SetEditor_Callback cb) { qscilexernasm_seteditor_callback = cb; }
    inline void setQsciLexerNASM_RefreshProperties_Callback(QsciLexerNASM_RefreshProperties_Callback cb) { qscilexernasm_refreshproperties_callback = cb; }
    inline void setQsciLexerNASM_StyleBitsNeeded_Callback(QsciLexerNASM_StyleBitsNeeded_Callback cb) { qscilexernasm_stylebitsneeded_callback = cb; }
    inline void setQsciLexerNASM_WordCharacters_Callback(QsciLexerNASM_WordCharacters_Callback cb) { qscilexernasm_wordcharacters_callback = cb; }
    inline void setQsciLexerNASM_SetAutoIndentStyle_Callback(QsciLexerNASM_SetAutoIndentStyle_Callback cb) { qscilexernasm_setautoindentstyle_callback = cb; }
    inline void setQsciLexerNASM_SetColor_Callback(QsciLexerNASM_SetColor_Callback cb) { qscilexernasm_setcolor_callback = cb; }
    inline void setQsciLexerNASM_SetEolFill_Callback(QsciLexerNASM_SetEolFill_Callback cb) { qscilexernasm_seteolfill_callback = cb; }
    inline void setQsciLexerNASM_SetFont_Callback(QsciLexerNASM_SetFont_Callback cb) { qscilexernasm_setfont_callback = cb; }
    inline void setQsciLexerNASM_SetPaper_Callback(QsciLexerNASM_SetPaper_Callback cb) { qscilexernasm_setpaper_callback = cb; }
    inline void setQsciLexerNASM_ReadProperties_Callback(QsciLexerNASM_ReadProperties_Callback cb) { qscilexernasm_readproperties_callback = cb; }
    inline void setQsciLexerNASM_WriteProperties_Callback(QsciLexerNASM_WriteProperties_Callback cb) { qscilexernasm_writeproperties_callback = cb; }
    inline void setQsciLexerNASM_Event_Callback(QsciLexerNASM_Event_Callback cb) { qscilexernasm_event_callback = cb; }
    inline void setQsciLexerNASM_EventFilter_Callback(QsciLexerNASM_EventFilter_Callback cb) { qscilexernasm_eventfilter_callback = cb; }
    inline void setQsciLexerNASM_TimerEvent_Callback(QsciLexerNASM_TimerEvent_Callback cb) { qscilexernasm_timerevent_callback = cb; }
    inline void setQsciLexerNASM_ChildEvent_Callback(QsciLexerNASM_ChildEvent_Callback cb) { qscilexernasm_childevent_callback = cb; }
    inline void setQsciLexerNASM_CustomEvent_Callback(QsciLexerNASM_CustomEvent_Callback cb) { qscilexernasm_customevent_callback = cb; }
    inline void setQsciLexerNASM_ConnectNotify_Callback(QsciLexerNASM_ConnectNotify_Callback cb) { qscilexernasm_connectnotify_callback = cb; }
    inline void setQsciLexerNASM_DisconnectNotify_Callback(QsciLexerNASM_DisconnectNotify_Callback cb) { qscilexernasm_disconnectnotify_callback = cb; }
    inline void setQsciLexerNASM_TextAsBytes_Callback(QsciLexerNASM_TextAsBytes_Callback cb) { qscilexernasm_textasbytes_callback = cb; }
    inline void setQsciLexerNASM_BytesAsText_Callback(QsciLexerNASM_BytesAsText_Callback cb) { qscilexernasm_bytesastext_callback = cb; }
    inline void setQsciLexerNASM_Sender_Callback(QsciLexerNASM_Sender_Callback cb) { qscilexernasm_sender_callback = cb; }
    inline void setQsciLexerNASM_SenderSignalIndex_Callback(QsciLexerNASM_SenderSignalIndex_Callback cb) { qscilexernasm_sendersignalindex_callback = cb; }
    inline void setQsciLexerNASM_Receivers_Callback(QsciLexerNASM_Receivers_Callback cb) { qscilexernasm_receivers_callback = cb; }
    inline void setQsciLexerNASM_IsSignalConnected_Callback(QsciLexerNASM_IsSignalConnected_Callback cb) { qscilexernasm_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerNASM_MetaObject_IsBase(bool value) const { qscilexernasm_metaobject_isbase = value; }
    inline void setQsciLexerNASM_Metacast_IsBase(bool value) const { qscilexernasm_metacast_isbase = value; }
    inline void setQsciLexerNASM_Metacall_IsBase(bool value) const { qscilexernasm_metacall_isbase = value; }
    inline void setQsciLexerNASM_SetFoldComments_IsBase(bool value) const { qscilexernasm_setfoldcomments_isbase = value; }
    inline void setQsciLexerNASM_SetFoldCompact_IsBase(bool value) const { qscilexernasm_setfoldcompact_isbase = value; }
    inline void setQsciLexerNASM_SetCommentDelimiter_IsBase(bool value) const { qscilexernasm_setcommentdelimiter_isbase = value; }
    inline void setQsciLexerNASM_SetFoldSyntaxBased_IsBase(bool value) const { qscilexernasm_setfoldsyntaxbased_isbase = value; }
    inline void setQsciLexerNASM_Language_IsBase(bool value) const { qscilexernasm_language_isbase = value; }
    inline void setQsciLexerNASM_Lexer_IsBase(bool value) const { qscilexernasm_lexer_isbase = value; }
    inline void setQsciLexerNASM_LexerId_IsBase(bool value) const { qscilexernasm_lexerid_isbase = value; }
    inline void setQsciLexerNASM_AutoCompletionFillups_IsBase(bool value) const { qscilexernasm_autocompletionfillups_isbase = value; }
    inline void setQsciLexerNASM_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexernasm_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerNASM_BlockEnd_IsBase(bool value) const { qscilexernasm_blockend_isbase = value; }
    inline void setQsciLexerNASM_BlockLookback_IsBase(bool value) const { qscilexernasm_blocklookback_isbase = value; }
    inline void setQsciLexerNASM_BlockStart_IsBase(bool value) const { qscilexernasm_blockstart_isbase = value; }
    inline void setQsciLexerNASM_BlockStartKeyword_IsBase(bool value) const { qscilexernasm_blockstartkeyword_isbase = value; }
    inline void setQsciLexerNASM_BraceStyle_IsBase(bool value) const { qscilexernasm_bracestyle_isbase = value; }
    inline void setQsciLexerNASM_CaseSensitive_IsBase(bool value) const { qscilexernasm_casesensitive_isbase = value; }
    inline void setQsciLexerNASM_Color_IsBase(bool value) const { qscilexernasm_color_isbase = value; }
    inline void setQsciLexerNASM_EolFill_IsBase(bool value) const { qscilexernasm_eolfill_isbase = value; }
    inline void setQsciLexerNASM_Font_IsBase(bool value) const { qscilexernasm_font_isbase = value; }
    inline void setQsciLexerNASM_IndentationGuideView_IsBase(bool value) const { qscilexernasm_indentationguideview_isbase = value; }
    inline void setQsciLexerNASM_Keywords_IsBase(bool value) const { qscilexernasm_keywords_isbase = value; }
    inline void setQsciLexerNASM_DefaultStyle_IsBase(bool value) const { qscilexernasm_defaultstyle_isbase = value; }
    inline void setQsciLexerNASM_Description_IsBase(bool value) const { qscilexernasm_description_isbase = value; }
    inline void setQsciLexerNASM_Paper_IsBase(bool value) const { qscilexernasm_paper_isbase = value; }
    inline void setQsciLexerNASM_DefaultColor2_IsBase(bool value) const { qscilexernasm_defaultcolor2_isbase = value; }
    inline void setQsciLexerNASM_DefaultEolFill_IsBase(bool value) const { qscilexernasm_defaulteolfill_isbase = value; }
    inline void setQsciLexerNASM_DefaultFont2_IsBase(bool value) const { qscilexernasm_defaultfont2_isbase = value; }
    inline void setQsciLexerNASM_DefaultPaper2_IsBase(bool value) const { qscilexernasm_defaultpaper2_isbase = value; }
    inline void setQsciLexerNASM_SetEditor_IsBase(bool value) const { qscilexernasm_seteditor_isbase = value; }
    inline void setQsciLexerNASM_RefreshProperties_IsBase(bool value) const { qscilexernasm_refreshproperties_isbase = value; }
    inline void setQsciLexerNASM_StyleBitsNeeded_IsBase(bool value) const { qscilexernasm_stylebitsneeded_isbase = value; }
    inline void setQsciLexerNASM_WordCharacters_IsBase(bool value) const { qscilexernasm_wordcharacters_isbase = value; }
    inline void setQsciLexerNASM_SetAutoIndentStyle_IsBase(bool value) const { qscilexernasm_setautoindentstyle_isbase = value; }
    inline void setQsciLexerNASM_SetColor_IsBase(bool value) const { qscilexernasm_setcolor_isbase = value; }
    inline void setQsciLexerNASM_SetEolFill_IsBase(bool value) const { qscilexernasm_seteolfill_isbase = value; }
    inline void setQsciLexerNASM_SetFont_IsBase(bool value) const { qscilexernasm_setfont_isbase = value; }
    inline void setQsciLexerNASM_SetPaper_IsBase(bool value) const { qscilexernasm_setpaper_isbase = value; }
    inline void setQsciLexerNASM_ReadProperties_IsBase(bool value) const { qscilexernasm_readproperties_isbase = value; }
    inline void setQsciLexerNASM_WriteProperties_IsBase(bool value) const { qscilexernasm_writeproperties_isbase = value; }
    inline void setQsciLexerNASM_Event_IsBase(bool value) const { qscilexernasm_event_isbase = value; }
    inline void setQsciLexerNASM_EventFilter_IsBase(bool value) const { qscilexernasm_eventfilter_isbase = value; }
    inline void setQsciLexerNASM_TimerEvent_IsBase(bool value) const { qscilexernasm_timerevent_isbase = value; }
    inline void setQsciLexerNASM_ChildEvent_IsBase(bool value) const { qscilexernasm_childevent_isbase = value; }
    inline void setQsciLexerNASM_CustomEvent_IsBase(bool value) const { qscilexernasm_customevent_isbase = value; }
    inline void setQsciLexerNASM_ConnectNotify_IsBase(bool value) const { qscilexernasm_connectnotify_isbase = value; }
    inline void setQsciLexerNASM_DisconnectNotify_IsBase(bool value) const { qscilexernasm_disconnectnotify_isbase = value; }
    inline void setQsciLexerNASM_TextAsBytes_IsBase(bool value) const { qscilexernasm_textasbytes_isbase = value; }
    inline void setQsciLexerNASM_BytesAsText_IsBase(bool value) const { qscilexernasm_bytesastext_isbase = value; }
    inline void setQsciLexerNASM_Sender_IsBase(bool value) const { qscilexernasm_sender_isbase = value; }
    inline void setQsciLexerNASM_SenderSignalIndex_IsBase(bool value) const { qscilexernasm_sendersignalindex_isbase = value; }
    inline void setQsciLexerNASM_Receivers_IsBase(bool value) const { qscilexernasm_receivers_isbase = value; }
    inline void setQsciLexerNASM_IsSignalConnected_IsBase(bool value) const { qscilexernasm_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexernasm_metaobject_isbase) {
            qscilexernasm_metaobject_isbase = false;
            return QsciLexerNASM::metaObject();
        }
        auto metaobject_cb = qscilexernasm_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QsciLexerNASM::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexernasm_metacast_isbase) {
            qscilexernasm_metacast_isbase = false;
            return QsciLexerNASM::qt_metacast(param1);
        }
        auto metacast_cb = qscilexernasm_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexernasm_metacall_isbase) {
            qscilexernasm_metacall_isbase = false;
            return QsciLexerNASM::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qscilexernasm_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexernasm_setfoldcomments_isbase) {
            qscilexernasm_setfoldcomments_isbase = false;
            QsciLexerNASM::setFoldComments(fold);
            return;
        }
        auto setfoldcomments_cb = qscilexernasm_setfoldcomments_callback;
        if (setfoldcomments_cb) {
            bool cbval1 = fold;

            setfoldcomments_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexernasm_setfoldcompact_isbase) {
            qscilexernasm_setfoldcompact_isbase = false;
            QsciLexerNASM::setFoldCompact(fold);
            return;
        }
        auto setfoldcompact_cb = qscilexernasm_setfoldcompact_callback;
        if (setfoldcompact_cb) {
            bool cbval1 = fold;

            setfoldcompact_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexernasm_setcommentdelimiter_isbase) {
            qscilexernasm_setcommentdelimiter_isbase = false;
            QsciLexerNASM::setCommentDelimiter(delimeter);
            return;
        }
        auto setcommentdelimiter_cb = qscilexernasm_setcommentdelimiter_callback;
        if (setcommentdelimiter_cb) {
            QChar* cbval1 = new QChar(delimeter);

            setcommentdelimiter_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setCommentDelimiter(delimeter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexernasm_setfoldsyntaxbased_isbase) {
            qscilexernasm_setfoldsyntaxbased_isbase = false;
            QsciLexerNASM::setFoldSyntaxBased(syntax_based);
            return;
        }
        auto setfoldsyntaxbased_cb = qscilexernasm_setfoldsyntaxbased_callback;
        if (setfoldsyntaxbased_cb) {
            bool cbval1 = syntax_based;

            setfoldsyntaxbased_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldSyntaxBased(syntax_based);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        auto language_cb = qscilexernasm_language_callback;
        if (language_cb) {
            const char* callback_ret = language_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexernasm_lexer_isbase) {
            qscilexernasm_lexer_isbase = false;
            return QsciLexerNASM::lexer();
        }
        auto lexer_cb = qscilexernasm_lexer_callback;
        if (lexer_cb) {
            const char* callback_ret = lexer_cb();
            return callback_ret;
        }
        return QsciLexerNASM::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexernasm_lexerid_isbase) {
            qscilexernasm_lexerid_isbase = false;
            return QsciLexerNASM::lexerId();
        }
        auto lexerid_cb = qscilexernasm_lexerid_callback;
        if (lexerid_cb) {
            int callback_ret = lexerid_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexernasm_autocompletionfillups_isbase) {
            qscilexernasm_autocompletionfillups_isbase = false;
            return QsciLexerNASM::autoCompletionFillups();
        }
        auto autocompletionfillups_cb = qscilexernasm_autocompletionfillups_callback;
        if (autocompletionfillups_cb) {
            const char* callback_ret = autocompletionfillups_cb();
            return callback_ret;
        }
        return QsciLexerNASM::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexernasm_autocompletionwordseparators_isbase) {
            qscilexernasm_autocompletionwordseparators_isbase = false;
            return QsciLexerNASM::autoCompletionWordSeparators();
        }
        auto autocompletionwordseparators_cb = qscilexernasm_autocompletionwordseparators_callback;
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
        return QsciLexerNASM::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexernasm_blockend_isbase) {
            qscilexernasm_blockend_isbase = false;
            return QsciLexerNASM::blockEnd(style);
        }
        auto blockend_cb = qscilexernasm_blockend_callback;
        if (blockend_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockend_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexernasm_blocklookback_isbase) {
            qscilexernasm_blocklookback_isbase = false;
            return QsciLexerNASM::blockLookback();
        }
        auto blocklookback_cb = qscilexernasm_blocklookback_callback;
        if (blocklookback_cb) {
            int callback_ret = blocklookback_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexernasm_blockstart_isbase) {
            qscilexernasm_blockstart_isbase = false;
            return QsciLexerNASM::blockStart(style);
        }
        auto blockstart_cb = qscilexernasm_blockstart_callback;
        if (blockstart_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstart_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexernasm_blockstartkeyword_isbase) {
            qscilexernasm_blockstartkeyword_isbase = false;
            return QsciLexerNASM::blockStartKeyword(style);
        }
        auto blockstartkeyword_cb = qscilexernasm_blockstartkeyword_callback;
        if (blockstartkeyword_cb) {
            int* cbval1 = style;

            const char* callback_ret = blockstartkeyword_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexernasm_bracestyle_isbase) {
            qscilexernasm_bracestyle_isbase = false;
            return QsciLexerNASM::braceStyle();
        }
        auto bracestyle_cb = qscilexernasm_bracestyle_callback;
        if (bracestyle_cb) {
            int callback_ret = bracestyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexernasm_casesensitive_isbase) {
            qscilexernasm_casesensitive_isbase = false;
            return QsciLexerNASM::caseSensitive();
        }
        auto casesensitive_cb = qscilexernasm_casesensitive_callback;
        if (casesensitive_cb) {
            bool callback_ret = casesensitive_cb();
            return callback_ret;
        }
        return QsciLexerNASM::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexernasm_color_isbase) {
            qscilexernasm_color_isbase = false;
            return QsciLexerNASM::color(style);
        }
        auto color_cb = qscilexernasm_color_callback;
        if (color_cb) {
            int cbval1 = style;

            QColor* callback_ret = color_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexernasm_eolfill_isbase) {
            qscilexernasm_eolfill_isbase = false;
            return QsciLexerNASM::eolFill(style);
        }
        auto eolfill_cb = qscilexernasm_eolfill_callback;
        if (eolfill_cb) {
            int cbval1 = style;

            bool callback_ret = eolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexernasm_font_isbase) {
            qscilexernasm_font_isbase = false;
            return QsciLexerNASM::font(style);
        }
        auto font_cb = qscilexernasm_font_callback;
        if (font_cb) {
            int cbval1 = style;

            QFont* callback_ret = font_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexernasm_indentationguideview_isbase) {
            qscilexernasm_indentationguideview_isbase = false;
            return QsciLexerNASM::indentationGuideView();
        }
        auto indentationguideview_cb = qscilexernasm_indentationguideview_callback;
        if (indentationguideview_cb) {
            int callback_ret = indentationguideview_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexernasm_keywords_isbase) {
            qscilexernasm_keywords_isbase = false;
            return QsciLexerNASM::keywords(set);
        }
        auto keywords_cb = qscilexernasm_keywords_callback;
        if (keywords_cb) {
            int cbval1 = set;

            const char* callback_ret = keywords_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexernasm_defaultstyle_isbase) {
            qscilexernasm_defaultstyle_isbase = false;
            return QsciLexerNASM::defaultStyle();
        }
        auto defaultstyle_cb = qscilexernasm_defaultstyle_callback;
        if (defaultstyle_cb) {
            int callback_ret = defaultstyle_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        auto description_cb = qscilexernasm_description_callback;
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
        if (qscilexernasm_paper_isbase) {
            qscilexernasm_paper_isbase = false;
            return QsciLexerNASM::paper(style);
        }
        auto paper_cb = qscilexernasm_paper_callback;
        if (paper_cb) {
            int cbval1 = style;

            QColor* callback_ret = paper_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexernasm_defaultcolor2_isbase) {
            qscilexernasm_defaultcolor2_isbase = false;
            return QsciLexerNASM::defaultColor(style);
        }
        auto defaultcolor2_cb = qscilexernasm_defaultcolor2_callback;
        if (defaultcolor2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultcolor2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexernasm_defaulteolfill_isbase) {
            qscilexernasm_defaulteolfill_isbase = false;
            return QsciLexerNASM::defaultEolFill(style);
        }
        auto defaulteolfill_cb = qscilexernasm_defaulteolfill_callback;
        if (defaulteolfill_cb) {
            int cbval1 = style;

            bool callback_ret = defaulteolfill_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexernasm_defaultfont2_isbase) {
            qscilexernasm_defaultfont2_isbase = false;
            return QsciLexerNASM::defaultFont(style);
        }
        auto defaultfont2_cb = qscilexernasm_defaultfont2_callback;
        if (defaultfont2_cb) {
            int cbval1 = style;

            QFont* callback_ret = defaultfont2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexernasm_defaultpaper2_isbase) {
            qscilexernasm_defaultpaper2_isbase = false;
            return QsciLexerNASM::defaultPaper(style);
        }
        auto defaultpaper2_cb = qscilexernasm_defaultpaper2_callback;
        if (defaultpaper2_cb) {
            int cbval1 = style;

            QColor* callback_ret = defaultpaper2_cb(this, cbval1);
            return *callback_ret;
        }
        return QsciLexerNASM::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexernasm_seteditor_isbase) {
            qscilexernasm_seteditor_isbase = false;
            QsciLexerNASM::setEditor(editor);
            return;
        }
        auto seteditor_cb = qscilexernasm_seteditor_callback;
        if (seteditor_cb) {
            QsciScintilla* cbval1 = editor;

            seteditor_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexernasm_refreshproperties_isbase) {
            qscilexernasm_refreshproperties_isbase = false;
            QsciLexerNASM::refreshProperties();
            return;
        }
        auto refreshproperties_cb = qscilexernasm_refreshproperties_callback;
        if (refreshproperties_cb) {
            refreshproperties_cb();
            return;
        }
        QsciLexerNASM::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexernasm_stylebitsneeded_isbase) {
            qscilexernasm_stylebitsneeded_isbase = false;
            return QsciLexerNASM::styleBitsNeeded();
        }
        auto stylebitsneeded_cb = qscilexernasm_stylebitsneeded_callback;
        if (stylebitsneeded_cb) {
            int callback_ret = stylebitsneeded_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexernasm_wordcharacters_isbase) {
            qscilexernasm_wordcharacters_isbase = false;
            return QsciLexerNASM::wordCharacters();
        }
        auto wordcharacters_cb = qscilexernasm_wordcharacters_callback;
        if (wordcharacters_cb) {
            const char* callback_ret = wordcharacters_cb();
            return callback_ret;
        }
        return QsciLexerNASM::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexernasm_setautoindentstyle_isbase) {
            qscilexernasm_setautoindentstyle_isbase = false;
            QsciLexerNASM::setAutoIndentStyle(autoindentstyle);
            return;
        }
        auto setautoindentstyle_cb = qscilexernasm_setautoindentstyle_callback;
        if (setautoindentstyle_cb) {
            int cbval1 = autoindentstyle;

            setautoindentstyle_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexernasm_setcolor_isbase) {
            qscilexernasm_setcolor_isbase = false;
            QsciLexerNASM::setColor(c, style);
            return;
        }
        auto setcolor_cb = qscilexernasm_setcolor_callback;
        if (setcolor_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setcolor_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexernasm_seteolfill_isbase) {
            qscilexernasm_seteolfill_isbase = false;
            QsciLexerNASM::setEolFill(eoffill, style);
            return;
        }
        auto seteolfill_cb = qscilexernasm_seteolfill_callback;
        if (seteolfill_cb) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            seteolfill_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexernasm_setfont_isbase) {
            qscilexernasm_setfont_isbase = false;
            QsciLexerNASM::setFont(f, style);
            return;
        }
        auto setfont_cb = qscilexernasm_setfont_callback;
        if (setfont_cb) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            setfont_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexernasm_setpaper_isbase) {
            qscilexernasm_setpaper_isbase = false;
            QsciLexerNASM::setPaper(c, style);
            return;
        }
        auto setpaper_cb = qscilexernasm_setpaper_callback;
        if (setpaper_cb) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            setpaper_cb(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexernasm_readproperties_isbase) {
            qscilexernasm_readproperties_isbase = false;
            return QsciLexerNASM::readProperties(qs, prefix);
        }
        auto readproperties_cb = qscilexernasm_readproperties_callback;
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
        return QsciLexerNASM::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexernasm_writeproperties_isbase) {
            qscilexernasm_writeproperties_isbase = false;
            return QsciLexerNASM::writeProperties(qs, prefix);
        }
        auto writeproperties_cb = qscilexernasm_writeproperties_callback;
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
        return QsciLexerNASM::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexernasm_event_isbase) {
            qscilexernasm_event_isbase = false;
            return QsciLexerNASM::event(event);
        }
        auto event_cb = qscilexernasm_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexernasm_eventfilter_isbase) {
            qscilexernasm_eventfilter_isbase = false;
            return QsciLexerNASM::eventFilter(watched, event);
        }
        auto eventfilter_cb = qscilexernasm_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerNASM::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexernasm_timerevent_isbase) {
            qscilexernasm_timerevent_isbase = false;
            QsciLexerNASM::timerEvent(event);
            return;
        }
        auto timerevent_cb = qscilexernasm_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexernasm_childevent_isbase) {
            qscilexernasm_childevent_isbase = false;
            QsciLexerNASM::childEvent(event);
            return;
        }
        auto childevent_cb = qscilexernasm_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexernasm_customevent_isbase) {
            qscilexernasm_customevent_isbase = false;
            QsciLexerNASM::customEvent(event);
            return;
        }
        auto customevent_cb = qscilexernasm_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexernasm_connectnotify_isbase) {
            qscilexernasm_connectnotify_isbase = false;
            QsciLexerNASM::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qscilexernasm_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexernasm_disconnectnotify_isbase) {
            qscilexernasm_disconnectnotify_isbase = false;
            QsciLexerNASM::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qscilexernasm_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QsciLexerNASM::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexernasm_textasbytes_isbase) {
            qscilexernasm_textasbytes_isbase = false;
            return QsciLexerNASM::textAsBytes(text);
        }
        auto textasbytes_cb = qscilexernasm_textasbytes_callback;
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
        return QsciLexerNASM::textAsBytes(text);
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexernasm_bytesastext_isbase) {
            qscilexernasm_bytesastext_isbase = false;
            return QsciLexerNASM::bytesAsText(bytes, size);
        }
        auto bytesastext_cb = qscilexernasm_bytesastext_callback;
        if (bytesastext_cb) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            const char* callback_ret = bytesastext_cb(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QsciLexerNASM::bytesAsText(bytes, size);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexernasm_sender_isbase) {
            qscilexernasm_sender_isbase = false;
            return QsciLexerNASM::sender();
        }
        auto sender_cb = qscilexernasm_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QsciLexerNASM::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexernasm_sendersignalindex_isbase) {
            qscilexernasm_sendersignalindex_isbase = false;
            return QsciLexerNASM::senderSignalIndex();
        }
        auto sendersignalindex_cb = qscilexernasm_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexernasm_receivers_isbase) {
            qscilexernasm_receivers_isbase = false;
            return QsciLexerNASM::receivers(signal);
        }
        auto receivers_cb = qscilexernasm_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexernasm_issignalconnected_isbase) {
            qscilexernasm_issignalconnected_isbase = false;
            return QsciLexerNASM::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qscilexernasm_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::isSignalConnected(signal);
    }

    // Friend functions
    friend bool QsciLexerNASM_ReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerNASM_SuperReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerNASM_WriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerNASM_SuperWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerNASM_TimerEvent(QsciLexerNASM* self, QTimerEvent* event);
    friend void QsciLexerNASM_SuperTimerEvent(QsciLexerNASM* self, QTimerEvent* event);
    friend void QsciLexerNASM_ChildEvent(QsciLexerNASM* self, QChildEvent* event);
    friend void QsciLexerNASM_SuperChildEvent(QsciLexerNASM* self, QChildEvent* event);
    friend void QsciLexerNASM_CustomEvent(QsciLexerNASM* self, QEvent* event);
    friend void QsciLexerNASM_SuperCustomEvent(QsciLexerNASM* self, QEvent* event);
    friend void QsciLexerNASM_ConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
    friend void QsciLexerNASM_SuperConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
    friend void QsciLexerNASM_DisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
    friend void QsciLexerNASM_SuperDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerNASM_TextAsBytes(const QsciLexerNASM* self, const libqt_string text);
    friend libqt_string QsciLexerNASM_SuperTextAsBytes(const QsciLexerNASM* self, const libqt_string text);
    friend libqt_string QsciLexerNASM_BytesAsText(const QsciLexerNASM* self, const char* bytes, int size);
    friend libqt_string QsciLexerNASM_SuperBytesAsText(const QsciLexerNASM* self, const char* bytes, int size);
    friend QObject* QsciLexerNASM_Sender(const QsciLexerNASM* self);
    friend QObject* QsciLexerNASM_SuperSender(const QsciLexerNASM* self);
    friend int QsciLexerNASM_SenderSignalIndex(const QsciLexerNASM* self);
    friend int QsciLexerNASM_SuperSenderSignalIndex(const QsciLexerNASM* self);
    friend int QsciLexerNASM_Receivers(const QsciLexerNASM* self, const char* signal);
    friend int QsciLexerNASM_SuperReceivers(const QsciLexerNASM* self, const char* signal);
    friend bool QsciLexerNASM_IsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal);
    friend bool QsciLexerNASM_SuperIsSignalConnected(const QsciLexerNASM* self, const QMetaMethod* signal);
};

#endif
