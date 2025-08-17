#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERMASM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMASM so that we can call protected methods
class VirtualQsciLexerMASM final : public QsciLexerMASM {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerMASM = true;

    // Virtual class public types (including callbacks)
    using QsciLexerMASM_Metacall_Callback = int (*)(QsciLexerMASM*, int, int, void**);
    using QsciLexerMASM_SetFoldComments_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_SetFoldCompact_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_SetCommentDelimiter_Callback = void (*)(QsciLexerMASM*, QChar*);
    using QsciLexerMASM_SetFoldSyntaxBased_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_Language_Callback = const char* (*)();
    using QsciLexerMASM_Lexer_Callback = const char* (*)();
    using QsciLexerMASM_LexerId_Callback = int (*)();
    using QsciLexerMASM_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerMASM_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerMASM_BlockEnd_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BlockLookback_Callback = int (*)();
    using QsciLexerMASM_BlockStart_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BraceStyle_Callback = int (*)();
    using QsciLexerMASM_CaseSensitive_Callback = bool (*)();
    using QsciLexerMASM_Color_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_EolFill_Callback = bool (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_Font_Callback = QFont* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_IndentationGuideView_Callback = int (*)();
    using QsciLexerMASM_Keywords_Callback = const char* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultStyle_Callback = int (*)();
    using QsciLexerMASM_Description_Callback = libqt_string (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_Paper_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultColor2_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultEolFill_Callback = bool (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultFont2_Callback = QFont* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_SetEditor_Callback = void (*)(QsciLexerMASM*, QsciScintilla*);
    using QsciLexerMASM_RefreshProperties_Callback = void (*)();
    using QsciLexerMASM_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerMASM_WordCharacters_Callback = const char* (*)();
    using QsciLexerMASM_SetAutoIndentStyle_Callback = void (*)(QsciLexerMASM*, int);
    using QsciLexerMASM_SetColor_Callback = void (*)(QsciLexerMASM*, QColor*, int);
    using QsciLexerMASM_SetEolFill_Callback = void (*)(QsciLexerMASM*, bool, int);
    using QsciLexerMASM_SetFont_Callback = void (*)(QsciLexerMASM*, QFont*, int);
    using QsciLexerMASM_SetPaper_Callback = void (*)(QsciLexerMASM*, QColor*, int);
    using QsciLexerMASM_ReadProperties_Callback = bool (*)(QsciLexerMASM*, QSettings*, libqt_string);
    using QsciLexerMASM_WriteProperties_Callback = bool (*)(const QsciLexerMASM*, QSettings*, libqt_string);
    using QsciLexerMASM_Event_Callback = bool (*)(QsciLexerMASM*, QEvent*);
    using QsciLexerMASM_EventFilter_Callback = bool (*)(QsciLexerMASM*, QObject*, QEvent*);
    using QsciLexerMASM_TimerEvent_Callback = void (*)(QsciLexerMASM*, QTimerEvent*);
    using QsciLexerMASM_ChildEvent_Callback = void (*)(QsciLexerMASM*, QChildEvent*);
    using QsciLexerMASM_CustomEvent_Callback = void (*)(QsciLexerMASM*, QEvent*);
    using QsciLexerMASM_ConnectNotify_Callback = void (*)(QsciLexerMASM*, QMetaMethod*);
    using QsciLexerMASM_DisconnectNotify_Callback = void (*)(QsciLexerMASM*, QMetaMethod*);
    using QsciLexerMASM_TextAsBytes_Callback = libqt_string (*)(const QsciLexerMASM*, libqt_string);
    using QsciLexerMASM_BytesAsText_Callback = libqt_string (*)(const QsciLexerMASM*, const char*, int);
    using QsciLexerMASM_Sender_Callback = QObject* (*)();
    using QsciLexerMASM_SenderSignalIndex_Callback = int (*)();
    using QsciLexerMASM_Receivers_Callback = int (*)(const QsciLexerMASM*, const char*);
    using QsciLexerMASM_IsSignalConnected_Callback = bool (*)(const QsciLexerMASM*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerMASM_Metacall_Callback qscilexermasm_metacall_callback = nullptr;
    QsciLexerMASM_SetFoldComments_Callback qscilexermasm_setfoldcomments_callback = nullptr;
    QsciLexerMASM_SetFoldCompact_Callback qscilexermasm_setfoldcompact_callback = nullptr;
    QsciLexerMASM_SetCommentDelimiter_Callback qscilexermasm_setcommentdelimiter_callback = nullptr;
    QsciLexerMASM_SetFoldSyntaxBased_Callback qscilexermasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerMASM_Language_Callback qscilexermasm_language_callback = nullptr;
    QsciLexerMASM_Lexer_Callback qscilexermasm_lexer_callback = nullptr;
    QsciLexerMASM_LexerId_Callback qscilexermasm_lexerid_callback = nullptr;
    QsciLexerMASM_AutoCompletionFillups_Callback qscilexermasm_autocompletionfillups_callback = nullptr;
    QsciLexerMASM_AutoCompletionWordSeparators_Callback qscilexermasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerMASM_BlockEnd_Callback qscilexermasm_blockend_callback = nullptr;
    QsciLexerMASM_BlockLookback_Callback qscilexermasm_blocklookback_callback = nullptr;
    QsciLexerMASM_BlockStart_Callback qscilexermasm_blockstart_callback = nullptr;
    QsciLexerMASM_BlockStartKeyword_Callback qscilexermasm_blockstartkeyword_callback = nullptr;
    QsciLexerMASM_BraceStyle_Callback qscilexermasm_bracestyle_callback = nullptr;
    QsciLexerMASM_CaseSensitive_Callback qscilexermasm_casesensitive_callback = nullptr;
    QsciLexerMASM_Color_Callback qscilexermasm_color_callback = nullptr;
    QsciLexerMASM_EolFill_Callback qscilexermasm_eolfill_callback = nullptr;
    QsciLexerMASM_Font_Callback qscilexermasm_font_callback = nullptr;
    QsciLexerMASM_IndentationGuideView_Callback qscilexermasm_indentationguideview_callback = nullptr;
    QsciLexerMASM_Keywords_Callback qscilexermasm_keywords_callback = nullptr;
    QsciLexerMASM_DefaultStyle_Callback qscilexermasm_defaultstyle_callback = nullptr;
    QsciLexerMASM_Description_Callback qscilexermasm_description_callback = nullptr;
    QsciLexerMASM_Paper_Callback qscilexermasm_paper_callback = nullptr;
    QsciLexerMASM_DefaultColor2_Callback qscilexermasm_defaultcolor2_callback = nullptr;
    QsciLexerMASM_DefaultEolFill_Callback qscilexermasm_defaulteolfill_callback = nullptr;
    QsciLexerMASM_DefaultFont2_Callback qscilexermasm_defaultfont2_callback = nullptr;
    QsciLexerMASM_DefaultPaper2_Callback qscilexermasm_defaultpaper2_callback = nullptr;
    QsciLexerMASM_SetEditor_Callback qscilexermasm_seteditor_callback = nullptr;
    QsciLexerMASM_RefreshProperties_Callback qscilexermasm_refreshproperties_callback = nullptr;
    QsciLexerMASM_StyleBitsNeeded_Callback qscilexermasm_stylebitsneeded_callback = nullptr;
    QsciLexerMASM_WordCharacters_Callback qscilexermasm_wordcharacters_callback = nullptr;
    QsciLexerMASM_SetAutoIndentStyle_Callback qscilexermasm_setautoindentstyle_callback = nullptr;
    QsciLexerMASM_SetColor_Callback qscilexermasm_setcolor_callback = nullptr;
    QsciLexerMASM_SetEolFill_Callback qscilexermasm_seteolfill_callback = nullptr;
    QsciLexerMASM_SetFont_Callback qscilexermasm_setfont_callback = nullptr;
    QsciLexerMASM_SetPaper_Callback qscilexermasm_setpaper_callback = nullptr;
    QsciLexerMASM_ReadProperties_Callback qscilexermasm_readproperties_callback = nullptr;
    QsciLexerMASM_WriteProperties_Callback qscilexermasm_writeproperties_callback = nullptr;
    QsciLexerMASM_Event_Callback qscilexermasm_event_callback = nullptr;
    QsciLexerMASM_EventFilter_Callback qscilexermasm_eventfilter_callback = nullptr;
    QsciLexerMASM_TimerEvent_Callback qscilexermasm_timerevent_callback = nullptr;
    QsciLexerMASM_ChildEvent_Callback qscilexermasm_childevent_callback = nullptr;
    QsciLexerMASM_CustomEvent_Callback qscilexermasm_customevent_callback = nullptr;
    QsciLexerMASM_ConnectNotify_Callback qscilexermasm_connectnotify_callback = nullptr;
    QsciLexerMASM_DisconnectNotify_Callback qscilexermasm_disconnectnotify_callback = nullptr;
    QsciLexerMASM_TextAsBytes_Callback qscilexermasm_textasbytes_callback = nullptr;
    QsciLexerMASM_BytesAsText_Callback qscilexermasm_bytesastext_callback = nullptr;
    QsciLexerMASM_Sender_Callback qscilexermasm_sender_callback = nullptr;
    QsciLexerMASM_SenderSignalIndex_Callback qscilexermasm_sendersignalindex_callback = nullptr;
    QsciLexerMASM_Receivers_Callback qscilexermasm_receivers_callback = nullptr;
    QsciLexerMASM_IsSignalConnected_Callback qscilexermasm_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexermasm_metacall_isbase = false;
    mutable bool qscilexermasm_setfoldcomments_isbase = false;
    mutable bool qscilexermasm_setfoldcompact_isbase = false;
    mutable bool qscilexermasm_setcommentdelimiter_isbase = false;
    mutable bool qscilexermasm_setfoldsyntaxbased_isbase = false;
    mutable bool qscilexermasm_language_isbase = false;
    mutable bool qscilexermasm_lexer_isbase = false;
    mutable bool qscilexermasm_lexerid_isbase = false;
    mutable bool qscilexermasm_autocompletionfillups_isbase = false;
    mutable bool qscilexermasm_autocompletionwordseparators_isbase = false;
    mutable bool qscilexermasm_blockend_isbase = false;
    mutable bool qscilexermasm_blocklookback_isbase = false;
    mutable bool qscilexermasm_blockstart_isbase = false;
    mutable bool qscilexermasm_blockstartkeyword_isbase = false;
    mutable bool qscilexermasm_bracestyle_isbase = false;
    mutable bool qscilexermasm_casesensitive_isbase = false;
    mutable bool qscilexermasm_color_isbase = false;
    mutable bool qscilexermasm_eolfill_isbase = false;
    mutable bool qscilexermasm_font_isbase = false;
    mutable bool qscilexermasm_indentationguideview_isbase = false;
    mutable bool qscilexermasm_keywords_isbase = false;
    mutable bool qscilexermasm_defaultstyle_isbase = false;
    mutable bool qscilexermasm_description_isbase = false;
    mutable bool qscilexermasm_paper_isbase = false;
    mutable bool qscilexermasm_defaultcolor2_isbase = false;
    mutable bool qscilexermasm_defaulteolfill_isbase = false;
    mutable bool qscilexermasm_defaultfont2_isbase = false;
    mutable bool qscilexermasm_defaultpaper2_isbase = false;
    mutable bool qscilexermasm_seteditor_isbase = false;
    mutable bool qscilexermasm_refreshproperties_isbase = false;
    mutable bool qscilexermasm_stylebitsneeded_isbase = false;
    mutable bool qscilexermasm_wordcharacters_isbase = false;
    mutable bool qscilexermasm_setautoindentstyle_isbase = false;
    mutable bool qscilexermasm_setcolor_isbase = false;
    mutable bool qscilexermasm_seteolfill_isbase = false;
    mutable bool qscilexermasm_setfont_isbase = false;
    mutable bool qscilexermasm_setpaper_isbase = false;
    mutable bool qscilexermasm_readproperties_isbase = false;
    mutable bool qscilexermasm_writeproperties_isbase = false;
    mutable bool qscilexermasm_event_isbase = false;
    mutable bool qscilexermasm_eventfilter_isbase = false;
    mutable bool qscilexermasm_timerevent_isbase = false;
    mutable bool qscilexermasm_childevent_isbase = false;
    mutable bool qscilexermasm_customevent_isbase = false;
    mutable bool qscilexermasm_connectnotify_isbase = false;
    mutable bool qscilexermasm_disconnectnotify_isbase = false;
    mutable bool qscilexermasm_textasbytes_isbase = false;
    mutable bool qscilexermasm_bytesastext_isbase = false;
    mutable bool qscilexermasm_sender_isbase = false;
    mutable bool qscilexermasm_sendersignalindex_isbase = false;
    mutable bool qscilexermasm_receivers_isbase = false;
    mutable bool qscilexermasm_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerMASM() : QsciLexerMASM() {};
    VirtualQsciLexerMASM(QObject* parent) : QsciLexerMASM(parent) {};

    ~VirtualQsciLexerMASM() {
        qscilexermasm_metacall_callback = nullptr;
        qscilexermasm_setfoldcomments_callback = nullptr;
        qscilexermasm_setfoldcompact_callback = nullptr;
        qscilexermasm_setcommentdelimiter_callback = nullptr;
        qscilexermasm_setfoldsyntaxbased_callback = nullptr;
        qscilexermasm_language_callback = nullptr;
        qscilexermasm_lexer_callback = nullptr;
        qscilexermasm_lexerid_callback = nullptr;
        qscilexermasm_autocompletionfillups_callback = nullptr;
        qscilexermasm_autocompletionwordseparators_callback = nullptr;
        qscilexermasm_blockend_callback = nullptr;
        qscilexermasm_blocklookback_callback = nullptr;
        qscilexermasm_blockstart_callback = nullptr;
        qscilexermasm_blockstartkeyword_callback = nullptr;
        qscilexermasm_bracestyle_callback = nullptr;
        qscilexermasm_casesensitive_callback = nullptr;
        qscilexermasm_color_callback = nullptr;
        qscilexermasm_eolfill_callback = nullptr;
        qscilexermasm_font_callback = nullptr;
        qscilexermasm_indentationguideview_callback = nullptr;
        qscilexermasm_keywords_callback = nullptr;
        qscilexermasm_defaultstyle_callback = nullptr;
        qscilexermasm_description_callback = nullptr;
        qscilexermasm_paper_callback = nullptr;
        qscilexermasm_defaultcolor2_callback = nullptr;
        qscilexermasm_defaulteolfill_callback = nullptr;
        qscilexermasm_defaultfont2_callback = nullptr;
        qscilexermasm_defaultpaper2_callback = nullptr;
        qscilexermasm_seteditor_callback = nullptr;
        qscilexermasm_refreshproperties_callback = nullptr;
        qscilexermasm_stylebitsneeded_callback = nullptr;
        qscilexermasm_wordcharacters_callback = nullptr;
        qscilexermasm_setautoindentstyle_callback = nullptr;
        qscilexermasm_setcolor_callback = nullptr;
        qscilexermasm_seteolfill_callback = nullptr;
        qscilexermasm_setfont_callback = nullptr;
        qscilexermasm_setpaper_callback = nullptr;
        qscilexermasm_readproperties_callback = nullptr;
        qscilexermasm_writeproperties_callback = nullptr;
        qscilexermasm_event_callback = nullptr;
        qscilexermasm_eventfilter_callback = nullptr;
        qscilexermasm_timerevent_callback = nullptr;
        qscilexermasm_childevent_callback = nullptr;
        qscilexermasm_customevent_callback = nullptr;
        qscilexermasm_connectnotify_callback = nullptr;
        qscilexermasm_disconnectnotify_callback = nullptr;
        qscilexermasm_textasbytes_callback = nullptr;
        qscilexermasm_bytesastext_callback = nullptr;
        qscilexermasm_sender_callback = nullptr;
        qscilexermasm_sendersignalindex_callback = nullptr;
        qscilexermasm_receivers_callback = nullptr;
        qscilexermasm_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerMASM_Metacall_Callback(QsciLexerMASM_Metacall_Callback cb) { qscilexermasm_metacall_callback = cb; }
    inline void setQsciLexerMASM_SetFoldComments_Callback(QsciLexerMASM_SetFoldComments_Callback cb) { qscilexermasm_setfoldcomments_callback = cb; }
    inline void setQsciLexerMASM_SetFoldCompact_Callback(QsciLexerMASM_SetFoldCompact_Callback cb) { qscilexermasm_setfoldcompact_callback = cb; }
    inline void setQsciLexerMASM_SetCommentDelimiter_Callback(QsciLexerMASM_SetCommentDelimiter_Callback cb) { qscilexermasm_setcommentdelimiter_callback = cb; }
    inline void setQsciLexerMASM_SetFoldSyntaxBased_Callback(QsciLexerMASM_SetFoldSyntaxBased_Callback cb) { qscilexermasm_setfoldsyntaxbased_callback = cb; }
    inline void setQsciLexerMASM_Language_Callback(QsciLexerMASM_Language_Callback cb) { qscilexermasm_language_callback = cb; }
    inline void setQsciLexerMASM_Lexer_Callback(QsciLexerMASM_Lexer_Callback cb) { qscilexermasm_lexer_callback = cb; }
    inline void setQsciLexerMASM_LexerId_Callback(QsciLexerMASM_LexerId_Callback cb) { qscilexermasm_lexerid_callback = cb; }
    inline void setQsciLexerMASM_AutoCompletionFillups_Callback(QsciLexerMASM_AutoCompletionFillups_Callback cb) { qscilexermasm_autocompletionfillups_callback = cb; }
    inline void setQsciLexerMASM_AutoCompletionWordSeparators_Callback(QsciLexerMASM_AutoCompletionWordSeparators_Callback cb) { qscilexermasm_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerMASM_BlockEnd_Callback(QsciLexerMASM_BlockEnd_Callback cb) { qscilexermasm_blockend_callback = cb; }
    inline void setQsciLexerMASM_BlockLookback_Callback(QsciLexerMASM_BlockLookback_Callback cb) { qscilexermasm_blocklookback_callback = cb; }
    inline void setQsciLexerMASM_BlockStart_Callback(QsciLexerMASM_BlockStart_Callback cb) { qscilexermasm_blockstart_callback = cb; }
    inline void setQsciLexerMASM_BlockStartKeyword_Callback(QsciLexerMASM_BlockStartKeyword_Callback cb) { qscilexermasm_blockstartkeyword_callback = cb; }
    inline void setQsciLexerMASM_BraceStyle_Callback(QsciLexerMASM_BraceStyle_Callback cb) { qscilexermasm_bracestyle_callback = cb; }
    inline void setQsciLexerMASM_CaseSensitive_Callback(QsciLexerMASM_CaseSensitive_Callback cb) { qscilexermasm_casesensitive_callback = cb; }
    inline void setQsciLexerMASM_Color_Callback(QsciLexerMASM_Color_Callback cb) { qscilexermasm_color_callback = cb; }
    inline void setQsciLexerMASM_EolFill_Callback(QsciLexerMASM_EolFill_Callback cb) { qscilexermasm_eolfill_callback = cb; }
    inline void setQsciLexerMASM_Font_Callback(QsciLexerMASM_Font_Callback cb) { qscilexermasm_font_callback = cb; }
    inline void setQsciLexerMASM_IndentationGuideView_Callback(QsciLexerMASM_IndentationGuideView_Callback cb) { qscilexermasm_indentationguideview_callback = cb; }
    inline void setQsciLexerMASM_Keywords_Callback(QsciLexerMASM_Keywords_Callback cb) { qscilexermasm_keywords_callback = cb; }
    inline void setQsciLexerMASM_DefaultStyle_Callback(QsciLexerMASM_DefaultStyle_Callback cb) { qscilexermasm_defaultstyle_callback = cb; }
    inline void setQsciLexerMASM_Description_Callback(QsciLexerMASM_Description_Callback cb) { qscilexermasm_description_callback = cb; }
    inline void setQsciLexerMASM_Paper_Callback(QsciLexerMASM_Paper_Callback cb) { qscilexermasm_paper_callback = cb; }
    inline void setQsciLexerMASM_DefaultColor2_Callback(QsciLexerMASM_DefaultColor2_Callback cb) { qscilexermasm_defaultcolor2_callback = cb; }
    inline void setQsciLexerMASM_DefaultEolFill_Callback(QsciLexerMASM_DefaultEolFill_Callback cb) { qscilexermasm_defaulteolfill_callback = cb; }
    inline void setQsciLexerMASM_DefaultFont2_Callback(QsciLexerMASM_DefaultFont2_Callback cb) { qscilexermasm_defaultfont2_callback = cb; }
    inline void setQsciLexerMASM_DefaultPaper2_Callback(QsciLexerMASM_DefaultPaper2_Callback cb) { qscilexermasm_defaultpaper2_callback = cb; }
    inline void setQsciLexerMASM_SetEditor_Callback(QsciLexerMASM_SetEditor_Callback cb) { qscilexermasm_seteditor_callback = cb; }
    inline void setQsciLexerMASM_RefreshProperties_Callback(QsciLexerMASM_RefreshProperties_Callback cb) { qscilexermasm_refreshproperties_callback = cb; }
    inline void setQsciLexerMASM_StyleBitsNeeded_Callback(QsciLexerMASM_StyleBitsNeeded_Callback cb) { qscilexermasm_stylebitsneeded_callback = cb; }
    inline void setQsciLexerMASM_WordCharacters_Callback(QsciLexerMASM_WordCharacters_Callback cb) { qscilexermasm_wordcharacters_callback = cb; }
    inline void setQsciLexerMASM_SetAutoIndentStyle_Callback(QsciLexerMASM_SetAutoIndentStyle_Callback cb) { qscilexermasm_setautoindentstyle_callback = cb; }
    inline void setQsciLexerMASM_SetColor_Callback(QsciLexerMASM_SetColor_Callback cb) { qscilexermasm_setcolor_callback = cb; }
    inline void setQsciLexerMASM_SetEolFill_Callback(QsciLexerMASM_SetEolFill_Callback cb) { qscilexermasm_seteolfill_callback = cb; }
    inline void setQsciLexerMASM_SetFont_Callback(QsciLexerMASM_SetFont_Callback cb) { qscilexermasm_setfont_callback = cb; }
    inline void setQsciLexerMASM_SetPaper_Callback(QsciLexerMASM_SetPaper_Callback cb) { qscilexermasm_setpaper_callback = cb; }
    inline void setQsciLexerMASM_ReadProperties_Callback(QsciLexerMASM_ReadProperties_Callback cb) { qscilexermasm_readproperties_callback = cb; }
    inline void setQsciLexerMASM_WriteProperties_Callback(QsciLexerMASM_WriteProperties_Callback cb) { qscilexermasm_writeproperties_callback = cb; }
    inline void setQsciLexerMASM_Event_Callback(QsciLexerMASM_Event_Callback cb) { qscilexermasm_event_callback = cb; }
    inline void setQsciLexerMASM_EventFilter_Callback(QsciLexerMASM_EventFilter_Callback cb) { qscilexermasm_eventfilter_callback = cb; }
    inline void setQsciLexerMASM_TimerEvent_Callback(QsciLexerMASM_TimerEvent_Callback cb) { qscilexermasm_timerevent_callback = cb; }
    inline void setQsciLexerMASM_ChildEvent_Callback(QsciLexerMASM_ChildEvent_Callback cb) { qscilexermasm_childevent_callback = cb; }
    inline void setQsciLexerMASM_CustomEvent_Callback(QsciLexerMASM_CustomEvent_Callback cb) { qscilexermasm_customevent_callback = cb; }
    inline void setQsciLexerMASM_ConnectNotify_Callback(QsciLexerMASM_ConnectNotify_Callback cb) { qscilexermasm_connectnotify_callback = cb; }
    inline void setQsciLexerMASM_DisconnectNotify_Callback(QsciLexerMASM_DisconnectNotify_Callback cb) { qscilexermasm_disconnectnotify_callback = cb; }
    inline void setQsciLexerMASM_TextAsBytes_Callback(QsciLexerMASM_TextAsBytes_Callback cb) { qscilexermasm_textasbytes_callback = cb; }
    inline void setQsciLexerMASM_BytesAsText_Callback(QsciLexerMASM_BytesAsText_Callback cb) { qscilexermasm_bytesastext_callback = cb; }
    inline void setQsciLexerMASM_Sender_Callback(QsciLexerMASM_Sender_Callback cb) { qscilexermasm_sender_callback = cb; }
    inline void setQsciLexerMASM_SenderSignalIndex_Callback(QsciLexerMASM_SenderSignalIndex_Callback cb) { qscilexermasm_sendersignalindex_callback = cb; }
    inline void setQsciLexerMASM_Receivers_Callback(QsciLexerMASM_Receivers_Callback cb) { qscilexermasm_receivers_callback = cb; }
    inline void setQsciLexerMASM_IsSignalConnected_Callback(QsciLexerMASM_IsSignalConnected_Callback cb) { qscilexermasm_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerMASM_Metacall_IsBase(bool value) const { qscilexermasm_metacall_isbase = value; }
    inline void setQsciLexerMASM_SetFoldComments_IsBase(bool value) const { qscilexermasm_setfoldcomments_isbase = value; }
    inline void setQsciLexerMASM_SetFoldCompact_IsBase(bool value) const { qscilexermasm_setfoldcompact_isbase = value; }
    inline void setQsciLexerMASM_SetCommentDelimiter_IsBase(bool value) const { qscilexermasm_setcommentdelimiter_isbase = value; }
    inline void setQsciLexerMASM_SetFoldSyntaxBased_IsBase(bool value) const { qscilexermasm_setfoldsyntaxbased_isbase = value; }
    inline void setQsciLexerMASM_Language_IsBase(bool value) const { qscilexermasm_language_isbase = value; }
    inline void setQsciLexerMASM_Lexer_IsBase(bool value) const { qscilexermasm_lexer_isbase = value; }
    inline void setQsciLexerMASM_LexerId_IsBase(bool value) const { qscilexermasm_lexerid_isbase = value; }
    inline void setQsciLexerMASM_AutoCompletionFillups_IsBase(bool value) const { qscilexermasm_autocompletionfillups_isbase = value; }
    inline void setQsciLexerMASM_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexermasm_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerMASM_BlockEnd_IsBase(bool value) const { qscilexermasm_blockend_isbase = value; }
    inline void setQsciLexerMASM_BlockLookback_IsBase(bool value) const { qscilexermasm_blocklookback_isbase = value; }
    inline void setQsciLexerMASM_BlockStart_IsBase(bool value) const { qscilexermasm_blockstart_isbase = value; }
    inline void setQsciLexerMASM_BlockStartKeyword_IsBase(bool value) const { qscilexermasm_blockstartkeyword_isbase = value; }
    inline void setQsciLexerMASM_BraceStyle_IsBase(bool value) const { qscilexermasm_bracestyle_isbase = value; }
    inline void setQsciLexerMASM_CaseSensitive_IsBase(bool value) const { qscilexermasm_casesensitive_isbase = value; }
    inline void setQsciLexerMASM_Color_IsBase(bool value) const { qscilexermasm_color_isbase = value; }
    inline void setQsciLexerMASM_EolFill_IsBase(bool value) const { qscilexermasm_eolfill_isbase = value; }
    inline void setQsciLexerMASM_Font_IsBase(bool value) const { qscilexermasm_font_isbase = value; }
    inline void setQsciLexerMASM_IndentationGuideView_IsBase(bool value) const { qscilexermasm_indentationguideview_isbase = value; }
    inline void setQsciLexerMASM_Keywords_IsBase(bool value) const { qscilexermasm_keywords_isbase = value; }
    inline void setQsciLexerMASM_DefaultStyle_IsBase(bool value) const { qscilexermasm_defaultstyle_isbase = value; }
    inline void setQsciLexerMASM_Description_IsBase(bool value) const { qscilexermasm_description_isbase = value; }
    inline void setQsciLexerMASM_Paper_IsBase(bool value) const { qscilexermasm_paper_isbase = value; }
    inline void setQsciLexerMASM_DefaultColor2_IsBase(bool value) const { qscilexermasm_defaultcolor2_isbase = value; }
    inline void setQsciLexerMASM_DefaultEolFill_IsBase(bool value) const { qscilexermasm_defaulteolfill_isbase = value; }
    inline void setQsciLexerMASM_DefaultFont2_IsBase(bool value) const { qscilexermasm_defaultfont2_isbase = value; }
    inline void setQsciLexerMASM_DefaultPaper2_IsBase(bool value) const { qscilexermasm_defaultpaper2_isbase = value; }
    inline void setQsciLexerMASM_SetEditor_IsBase(bool value) const { qscilexermasm_seteditor_isbase = value; }
    inline void setQsciLexerMASM_RefreshProperties_IsBase(bool value) const { qscilexermasm_refreshproperties_isbase = value; }
    inline void setQsciLexerMASM_StyleBitsNeeded_IsBase(bool value) const { qscilexermasm_stylebitsneeded_isbase = value; }
    inline void setQsciLexerMASM_WordCharacters_IsBase(bool value) const { qscilexermasm_wordcharacters_isbase = value; }
    inline void setQsciLexerMASM_SetAutoIndentStyle_IsBase(bool value) const { qscilexermasm_setautoindentstyle_isbase = value; }
    inline void setQsciLexerMASM_SetColor_IsBase(bool value) const { qscilexermasm_setcolor_isbase = value; }
    inline void setQsciLexerMASM_SetEolFill_IsBase(bool value) const { qscilexermasm_seteolfill_isbase = value; }
    inline void setQsciLexerMASM_SetFont_IsBase(bool value) const { qscilexermasm_setfont_isbase = value; }
    inline void setQsciLexerMASM_SetPaper_IsBase(bool value) const { qscilexermasm_setpaper_isbase = value; }
    inline void setQsciLexerMASM_ReadProperties_IsBase(bool value) const { qscilexermasm_readproperties_isbase = value; }
    inline void setQsciLexerMASM_WriteProperties_IsBase(bool value) const { qscilexermasm_writeproperties_isbase = value; }
    inline void setQsciLexerMASM_Event_IsBase(bool value) const { qscilexermasm_event_isbase = value; }
    inline void setQsciLexerMASM_EventFilter_IsBase(bool value) const { qscilexermasm_eventfilter_isbase = value; }
    inline void setQsciLexerMASM_TimerEvent_IsBase(bool value) const { qscilexermasm_timerevent_isbase = value; }
    inline void setQsciLexerMASM_ChildEvent_IsBase(bool value) const { qscilexermasm_childevent_isbase = value; }
    inline void setQsciLexerMASM_CustomEvent_IsBase(bool value) const { qscilexermasm_customevent_isbase = value; }
    inline void setQsciLexerMASM_ConnectNotify_IsBase(bool value) const { qscilexermasm_connectnotify_isbase = value; }
    inline void setQsciLexerMASM_DisconnectNotify_IsBase(bool value) const { qscilexermasm_disconnectnotify_isbase = value; }
    inline void setQsciLexerMASM_TextAsBytes_IsBase(bool value) const { qscilexermasm_textasbytes_isbase = value; }
    inline void setQsciLexerMASM_BytesAsText_IsBase(bool value) const { qscilexermasm_bytesastext_isbase = value; }
    inline void setQsciLexerMASM_Sender_IsBase(bool value) const { qscilexermasm_sender_isbase = value; }
    inline void setQsciLexerMASM_SenderSignalIndex_IsBase(bool value) const { qscilexermasm_sendersignalindex_isbase = value; }
    inline void setQsciLexerMASM_Receivers_IsBase(bool value) const { qscilexermasm_receivers_isbase = value; }
    inline void setQsciLexerMASM_IsSignalConnected_IsBase(bool value) const { qscilexermasm_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermasm_metacall_isbase) {
            qscilexermasm_metacall_isbase = false;
            return QsciLexerMASM::qt_metacall(param1, param2, param3);
        } else if (qscilexermasm_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexermasm_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexermasm_setfoldcomments_isbase) {
            qscilexermasm_setfoldcomments_isbase = false;
            QsciLexerMASM::setFoldComments(fold);
        } else if (qscilexermasm_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexermasm_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerMASM::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexermasm_setfoldcompact_isbase) {
            qscilexermasm_setfoldcompact_isbase = false;
            QsciLexerMASM::setFoldCompact(fold);
        } else if (qscilexermasm_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexermasm_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerMASM::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexermasm_setcommentdelimiter_isbase) {
            qscilexermasm_setcommentdelimiter_isbase = false;
            QsciLexerMASM::setCommentDelimiter(delimeter);
        } else if (qscilexermasm_setcommentdelimiter_callback != nullptr) {
            QChar* cbval1 = new QChar(delimeter);

            qscilexermasm_setcommentdelimiter_callback(this, cbval1);
        } else {
            QsciLexerMASM::setCommentDelimiter(delimeter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexermasm_setfoldsyntaxbased_isbase) {
            qscilexermasm_setfoldsyntaxbased_isbase = false;
            QsciLexerMASM::setFoldSyntaxBased(syntax_based);
        } else if (qscilexermasm_setfoldsyntaxbased_callback != nullptr) {
            bool cbval1 = syntax_based;

            qscilexermasm_setfoldsyntaxbased_callback(this, cbval1);
        } else {
            QsciLexerMASM::setFoldSyntaxBased(syntax_based);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermasm_language_callback != nullptr) {
            const char* callback_ret = qscilexermasm_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermasm_lexer_isbase) {
            qscilexermasm_lexer_isbase = false;
            return QsciLexerMASM::lexer();
        } else if (qscilexermasm_lexer_callback != nullptr) {
            const char* callback_ret = qscilexermasm_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerMASM::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermasm_lexerid_isbase) {
            qscilexermasm_lexerid_isbase = false;
            return QsciLexerMASM::lexerId();
        } else if (qscilexermasm_lexerid_callback != nullptr) {
            int callback_ret = qscilexermasm_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermasm_autocompletionfillups_isbase) {
            qscilexermasm_autocompletionfillups_isbase = false;
            return QsciLexerMASM::autoCompletionFillups();
        } else if (qscilexermasm_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexermasm_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerMASM::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermasm_autocompletionwordseparators_isbase) {
            qscilexermasm_autocompletionwordseparators_isbase = false;
            return QsciLexerMASM::autoCompletionWordSeparators();
        } else if (qscilexermasm_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexermasm_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerMASM::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermasm_blockend_isbase) {
            qscilexermasm_blockend_isbase = false;
            return QsciLexerMASM::blockEnd(style);
        } else if (qscilexermasm_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermasm_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermasm_blocklookback_isbase) {
            qscilexermasm_blocklookback_isbase = false;
            return QsciLexerMASM::blockLookback();
        } else if (qscilexermasm_blocklookback_callback != nullptr) {
            int callback_ret = qscilexermasm_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermasm_blockstart_isbase) {
            qscilexermasm_blockstart_isbase = false;
            return QsciLexerMASM::blockStart(style);
        } else if (qscilexermasm_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermasm_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermasm_blockstartkeyword_isbase) {
            qscilexermasm_blockstartkeyword_isbase = false;
            return QsciLexerMASM::blockStartKeyword(style);
        } else if (qscilexermasm_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexermasm_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermasm_bracestyle_isbase) {
            qscilexermasm_bracestyle_isbase = false;
            return QsciLexerMASM::braceStyle();
        } else if (qscilexermasm_bracestyle_callback != nullptr) {
            int callback_ret = qscilexermasm_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermasm_casesensitive_isbase) {
            qscilexermasm_casesensitive_isbase = false;
            return QsciLexerMASM::caseSensitive();
        } else if (qscilexermasm_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexermasm_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerMASM::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermasm_color_isbase) {
            qscilexermasm_color_isbase = false;
            return QsciLexerMASM::color(style);
        } else if (qscilexermasm_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermasm_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermasm_eolfill_isbase) {
            qscilexermasm_eolfill_isbase = false;
            return QsciLexerMASM::eolFill(style);
        } else if (qscilexermasm_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexermasm_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermasm_font_isbase) {
            qscilexermasm_font_isbase = false;
            return QsciLexerMASM::font(style);
        } else if (qscilexermasm_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexermasm_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermasm_indentationguideview_isbase) {
            qscilexermasm_indentationguideview_isbase = false;
            return QsciLexerMASM::indentationGuideView();
        } else if (qscilexermasm_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexermasm_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermasm_keywords_isbase) {
            qscilexermasm_keywords_isbase = false;
            return QsciLexerMASM::keywords(set);
        } else if (qscilexermasm_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexermasm_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermasm_defaultstyle_isbase) {
            qscilexermasm_defaultstyle_isbase = false;
            return QsciLexerMASM::defaultStyle();
        } else if (qscilexermasm_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexermasm_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermasm_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexermasm_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermasm_paper_isbase) {
            qscilexermasm_paper_isbase = false;
            return QsciLexerMASM::paper(style);
        } else if (qscilexermasm_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermasm_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermasm_defaultcolor2_isbase) {
            qscilexermasm_defaultcolor2_isbase = false;
            return QsciLexerMASM::defaultColor(style);
        } else if (qscilexermasm_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermasm_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermasm_defaulteolfill_isbase) {
            qscilexermasm_defaulteolfill_isbase = false;
            return QsciLexerMASM::defaultEolFill(style);
        } else if (qscilexermasm_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexermasm_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermasm_defaultfont2_isbase) {
            qscilexermasm_defaultfont2_isbase = false;
            return QsciLexerMASM::defaultFont(style);
        } else if (qscilexermasm_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexermasm_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermasm_defaultpaper2_isbase) {
            qscilexermasm_defaultpaper2_isbase = false;
            return QsciLexerMASM::defaultPaper(style);
        } else if (qscilexermasm_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexermasm_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerMASM::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermasm_seteditor_isbase) {
            qscilexermasm_seteditor_isbase = false;
            QsciLexerMASM::setEditor(editor);
        } else if (qscilexermasm_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexermasm_seteditor_callback(this, cbval1);
        } else {
            QsciLexerMASM::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermasm_refreshproperties_isbase) {
            qscilexermasm_refreshproperties_isbase = false;
            QsciLexerMASM::refreshProperties();
        } else if (qscilexermasm_refreshproperties_callback != nullptr) {
            qscilexermasm_refreshproperties_callback();
        } else {
            QsciLexerMASM::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermasm_stylebitsneeded_isbase) {
            qscilexermasm_stylebitsneeded_isbase = false;
            return QsciLexerMASM::styleBitsNeeded();
        } else if (qscilexermasm_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexermasm_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermasm_wordcharacters_isbase) {
            qscilexermasm_wordcharacters_isbase = false;
            return QsciLexerMASM::wordCharacters();
        } else if (qscilexermasm_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexermasm_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerMASM::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermasm_setautoindentstyle_isbase) {
            qscilexermasm_setautoindentstyle_isbase = false;
            QsciLexerMASM::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexermasm_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexermasm_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerMASM::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermasm_setcolor_isbase) {
            qscilexermasm_setcolor_isbase = false;
            QsciLexerMASM::setColor(c, style);
        } else if (qscilexermasm_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexermasm_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMASM::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermasm_seteolfill_isbase) {
            qscilexermasm_seteolfill_isbase = false;
            QsciLexerMASM::setEolFill(eoffill, style);
        } else if (qscilexermasm_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexermasm_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMASM::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermasm_setfont_isbase) {
            qscilexermasm_setfont_isbase = false;
            QsciLexerMASM::setFont(f, style);
        } else if (qscilexermasm_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexermasm_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMASM::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermasm_setpaper_isbase) {
            qscilexermasm_setpaper_isbase = false;
            QsciLexerMASM::setPaper(c, style);
        } else if (qscilexermasm_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexermasm_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerMASM::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermasm_readproperties_isbase) {
            qscilexermasm_readproperties_isbase = false;
            return QsciLexerMASM::readProperties(qs, prefix);
        } else if (qscilexermasm_readproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc(prefix_str.len + 1));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexermasm_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMASM::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermasm_writeproperties_isbase) {
            qscilexermasm_writeproperties_isbase = false;
            return QsciLexerMASM::writeProperties(qs, prefix);
        } else if (qscilexermasm_writeproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<const char*>(malloc(prefix_str.len + 1));
            memcpy((void*)prefix_str.data, prefix_b.data(), prefix_str.len);
            ((char*)prefix_str.data)[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexermasm_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMASM::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermasm_event_isbase) {
            qscilexermasm_event_isbase = false;
            return QsciLexerMASM::event(event);
        } else if (qscilexermasm_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexermasm_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermasm_eventfilter_isbase) {
            qscilexermasm_eventfilter_isbase = false;
            return QsciLexerMASM::eventFilter(watched, event);
        } else if (qscilexermasm_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexermasm_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerMASM::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermasm_timerevent_isbase) {
            qscilexermasm_timerevent_isbase = false;
            QsciLexerMASM::timerEvent(event);
        } else if (qscilexermasm_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexermasm_timerevent_callback(this, cbval1);
        } else {
            QsciLexerMASM::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermasm_childevent_isbase) {
            qscilexermasm_childevent_isbase = false;
            QsciLexerMASM::childEvent(event);
        } else if (qscilexermasm_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexermasm_childevent_callback(this, cbval1);
        } else {
            QsciLexerMASM::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermasm_customevent_isbase) {
            qscilexermasm_customevent_isbase = false;
            QsciLexerMASM::customEvent(event);
        } else if (qscilexermasm_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexermasm_customevent_callback(this, cbval1);
        } else {
            QsciLexerMASM::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermasm_connectnotify_isbase) {
            qscilexermasm_connectnotify_isbase = false;
            QsciLexerMASM::connectNotify(signal);
        } else if (qscilexermasm_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexermasm_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerMASM::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermasm_disconnectnotify_isbase) {
            qscilexermasm_disconnectnotify_isbase = false;
            QsciLexerMASM::disconnectNotify(signal);
        } else if (qscilexermasm_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexermasm_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerMASM::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexermasm_textasbytes_isbase) {
            qscilexermasm_textasbytes_isbase = false;
            return QsciLexerMASM::textAsBytes(text);
        } else if (qscilexermasm_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexermasm_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerMASM::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexermasm_bytesastext_isbase) {
            qscilexermasm_bytesastext_isbase = false;
            return QsciLexerMASM::bytesAsText(bytes, size);
        } else if (qscilexermasm_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexermasm_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerMASM::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexermasm_sender_isbase) {
            qscilexermasm_sender_isbase = false;
            return QsciLexerMASM::sender();
        } else if (qscilexermasm_sender_callback != nullptr) {
            QObject* callback_ret = qscilexermasm_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerMASM::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexermasm_sendersignalindex_isbase) {
            qscilexermasm_sendersignalindex_isbase = false;
            return QsciLexerMASM::senderSignalIndex();
        } else if (qscilexermasm_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexermasm_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexermasm_receivers_isbase) {
            qscilexermasm_receivers_isbase = false;
            return QsciLexerMASM::receivers(signal);
        } else if (qscilexermasm_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexermasm_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerMASM::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexermasm_issignalconnected_isbase) {
            qscilexermasm_issignalconnected_isbase = false;
            return QsciLexerMASM::isSignalConnected(signal);
        } else if (qscilexermasm_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexermasm_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerMASM::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerMASM_ReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMASM_QBaseReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMASM_WriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMASM_QBaseWriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMASM_TimerEvent(QsciLexerMASM* self, QTimerEvent* event);
    friend void QsciLexerMASM_QBaseTimerEvent(QsciLexerMASM* self, QTimerEvent* event);
    friend void QsciLexerMASM_ChildEvent(QsciLexerMASM* self, QChildEvent* event);
    friend void QsciLexerMASM_QBaseChildEvent(QsciLexerMASM* self, QChildEvent* event);
    friend void QsciLexerMASM_CustomEvent(QsciLexerMASM* self, QEvent* event);
    friend void QsciLexerMASM_QBaseCustomEvent(QsciLexerMASM* self, QEvent* event);
    friend void QsciLexerMASM_ConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
    friend void QsciLexerMASM_QBaseConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
    friend void QsciLexerMASM_DisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
    friend void QsciLexerMASM_QBaseDisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerMASM_TextAsBytes(const QsciLexerMASM* self, const libqt_string text);
    friend libqt_string QsciLexerMASM_QBaseTextAsBytes(const QsciLexerMASM* self, const libqt_string text);
    friend libqt_string QsciLexerMASM_BytesAsText(const QsciLexerMASM* self, const char* bytes, int size);
    friend libqt_string QsciLexerMASM_QBaseBytesAsText(const QsciLexerMASM* self, const char* bytes, int size);
    friend QObject* QsciLexerMASM_Sender(const QsciLexerMASM* self);
    friend QObject* QsciLexerMASM_QBaseSender(const QsciLexerMASM* self);
    friend int QsciLexerMASM_SenderSignalIndex(const QsciLexerMASM* self);
    friend int QsciLexerMASM_QBaseSenderSignalIndex(const QsciLexerMASM* self);
    friend int QsciLexerMASM_Receivers(const QsciLexerMASM* self, const char* signal);
    friend int QsciLexerMASM_QBaseReceivers(const QsciLexerMASM* self, const char* signal);
    friend bool QsciLexerMASM_IsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal);
    friend bool QsciLexerMASM_QBaseIsSignalConnected(const QsciLexerMASM* self, const QMetaMethod* signal);
};

#endif
