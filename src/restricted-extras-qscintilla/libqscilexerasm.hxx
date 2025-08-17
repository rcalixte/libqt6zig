#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERASM_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERASM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerAsm so that we can call protected methods
class VirtualQsciLexerAsm final : public QsciLexerAsm {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerAsm = true;

    // Virtual class public types (including callbacks)
    using QsciLexerAsm_Metacall_Callback = int (*)(QsciLexerAsm*, int, int, void**);
    using QsciLexerAsm_SetFoldComments_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_SetFoldCompact_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_SetCommentDelimiter_Callback = void (*)(QsciLexerAsm*, QChar*);
    using QsciLexerAsm_SetFoldSyntaxBased_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_Language_Callback = const char* (*)();
    using QsciLexerAsm_Lexer_Callback = const char* (*)();
    using QsciLexerAsm_LexerId_Callback = int (*)();
    using QsciLexerAsm_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerAsm_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerAsm_BlockEnd_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BlockLookback_Callback = int (*)();
    using QsciLexerAsm_BlockStart_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BlockStartKeyword_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BraceStyle_Callback = int (*)();
    using QsciLexerAsm_CaseSensitive_Callback = bool (*)();
    using QsciLexerAsm_Color_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_EolFill_Callback = bool (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_Font_Callback = QFont* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_IndentationGuideView_Callback = int (*)();
    using QsciLexerAsm_Keywords_Callback = const char* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultStyle_Callback = int (*)();
    using QsciLexerAsm_Description_Callback = libqt_string (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_Paper_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultColor2_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultEolFill_Callback = bool (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultFont2_Callback = QFont* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultPaper2_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_SetEditor_Callback = void (*)(QsciLexerAsm*, QsciScintilla*);
    using QsciLexerAsm_RefreshProperties_Callback = void (*)();
    using QsciLexerAsm_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerAsm_WordCharacters_Callback = const char* (*)();
    using QsciLexerAsm_SetAutoIndentStyle_Callback = void (*)(QsciLexerAsm*, int);
    using QsciLexerAsm_SetColor_Callback = void (*)(QsciLexerAsm*, QColor*, int);
    using QsciLexerAsm_SetEolFill_Callback = void (*)(QsciLexerAsm*, bool, int);
    using QsciLexerAsm_SetFont_Callback = void (*)(QsciLexerAsm*, QFont*, int);
    using QsciLexerAsm_SetPaper_Callback = void (*)(QsciLexerAsm*, QColor*, int);
    using QsciLexerAsm_ReadProperties_Callback = bool (*)(QsciLexerAsm*, QSettings*, libqt_string);
    using QsciLexerAsm_WriteProperties_Callback = bool (*)(const QsciLexerAsm*, QSettings*, libqt_string);
    using QsciLexerAsm_Event_Callback = bool (*)(QsciLexerAsm*, QEvent*);
    using QsciLexerAsm_EventFilter_Callback = bool (*)(QsciLexerAsm*, QObject*, QEvent*);
    using QsciLexerAsm_TimerEvent_Callback = void (*)(QsciLexerAsm*, QTimerEvent*);
    using QsciLexerAsm_ChildEvent_Callback = void (*)(QsciLexerAsm*, QChildEvent*);
    using QsciLexerAsm_CustomEvent_Callback = void (*)(QsciLexerAsm*, QEvent*);
    using QsciLexerAsm_ConnectNotify_Callback = void (*)(QsciLexerAsm*, QMetaMethod*);
    using QsciLexerAsm_DisconnectNotify_Callback = void (*)(QsciLexerAsm*, QMetaMethod*);
    using QsciLexerAsm_TextAsBytes_Callback = libqt_string (*)(const QsciLexerAsm*, libqt_string);
    using QsciLexerAsm_BytesAsText_Callback = libqt_string (*)(const QsciLexerAsm*, const char*, int);
    using QsciLexerAsm_Sender_Callback = QObject* (*)();
    using QsciLexerAsm_SenderSignalIndex_Callback = int (*)();
    using QsciLexerAsm_Receivers_Callback = int (*)(const QsciLexerAsm*, const char*);
    using QsciLexerAsm_IsSignalConnected_Callback = bool (*)(const QsciLexerAsm*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerAsm_Metacall_Callback qscilexerasm_metacall_callback = nullptr;
    QsciLexerAsm_SetFoldComments_Callback qscilexerasm_setfoldcomments_callback = nullptr;
    QsciLexerAsm_SetFoldCompact_Callback qscilexerasm_setfoldcompact_callback = nullptr;
    QsciLexerAsm_SetCommentDelimiter_Callback qscilexerasm_setcommentdelimiter_callback = nullptr;
    QsciLexerAsm_SetFoldSyntaxBased_Callback qscilexerasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerAsm_Language_Callback qscilexerasm_language_callback = nullptr;
    QsciLexerAsm_Lexer_Callback qscilexerasm_lexer_callback = nullptr;
    QsciLexerAsm_LexerId_Callback qscilexerasm_lexerid_callback = nullptr;
    QsciLexerAsm_AutoCompletionFillups_Callback qscilexerasm_autocompletionfillups_callback = nullptr;
    QsciLexerAsm_AutoCompletionWordSeparators_Callback qscilexerasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerAsm_BlockEnd_Callback qscilexerasm_blockend_callback = nullptr;
    QsciLexerAsm_BlockLookback_Callback qscilexerasm_blocklookback_callback = nullptr;
    QsciLexerAsm_BlockStart_Callback qscilexerasm_blockstart_callback = nullptr;
    QsciLexerAsm_BlockStartKeyword_Callback qscilexerasm_blockstartkeyword_callback = nullptr;
    QsciLexerAsm_BraceStyle_Callback qscilexerasm_bracestyle_callback = nullptr;
    QsciLexerAsm_CaseSensitive_Callback qscilexerasm_casesensitive_callback = nullptr;
    QsciLexerAsm_Color_Callback qscilexerasm_color_callback = nullptr;
    QsciLexerAsm_EolFill_Callback qscilexerasm_eolfill_callback = nullptr;
    QsciLexerAsm_Font_Callback qscilexerasm_font_callback = nullptr;
    QsciLexerAsm_IndentationGuideView_Callback qscilexerasm_indentationguideview_callback = nullptr;
    QsciLexerAsm_Keywords_Callback qscilexerasm_keywords_callback = nullptr;
    QsciLexerAsm_DefaultStyle_Callback qscilexerasm_defaultstyle_callback = nullptr;
    QsciLexerAsm_Description_Callback qscilexerasm_description_callback = nullptr;
    QsciLexerAsm_Paper_Callback qscilexerasm_paper_callback = nullptr;
    QsciLexerAsm_DefaultColor2_Callback qscilexerasm_defaultcolor2_callback = nullptr;
    QsciLexerAsm_DefaultEolFill_Callback qscilexerasm_defaulteolfill_callback = nullptr;
    QsciLexerAsm_DefaultFont2_Callback qscilexerasm_defaultfont2_callback = nullptr;
    QsciLexerAsm_DefaultPaper2_Callback qscilexerasm_defaultpaper2_callback = nullptr;
    QsciLexerAsm_SetEditor_Callback qscilexerasm_seteditor_callback = nullptr;
    QsciLexerAsm_RefreshProperties_Callback qscilexerasm_refreshproperties_callback = nullptr;
    QsciLexerAsm_StyleBitsNeeded_Callback qscilexerasm_stylebitsneeded_callback = nullptr;
    QsciLexerAsm_WordCharacters_Callback qscilexerasm_wordcharacters_callback = nullptr;
    QsciLexerAsm_SetAutoIndentStyle_Callback qscilexerasm_setautoindentstyle_callback = nullptr;
    QsciLexerAsm_SetColor_Callback qscilexerasm_setcolor_callback = nullptr;
    QsciLexerAsm_SetEolFill_Callback qscilexerasm_seteolfill_callback = nullptr;
    QsciLexerAsm_SetFont_Callback qscilexerasm_setfont_callback = nullptr;
    QsciLexerAsm_SetPaper_Callback qscilexerasm_setpaper_callback = nullptr;
    QsciLexerAsm_ReadProperties_Callback qscilexerasm_readproperties_callback = nullptr;
    QsciLexerAsm_WriteProperties_Callback qscilexerasm_writeproperties_callback = nullptr;
    QsciLexerAsm_Event_Callback qscilexerasm_event_callback = nullptr;
    QsciLexerAsm_EventFilter_Callback qscilexerasm_eventfilter_callback = nullptr;
    QsciLexerAsm_TimerEvent_Callback qscilexerasm_timerevent_callback = nullptr;
    QsciLexerAsm_ChildEvent_Callback qscilexerasm_childevent_callback = nullptr;
    QsciLexerAsm_CustomEvent_Callback qscilexerasm_customevent_callback = nullptr;
    QsciLexerAsm_ConnectNotify_Callback qscilexerasm_connectnotify_callback = nullptr;
    QsciLexerAsm_DisconnectNotify_Callback qscilexerasm_disconnectnotify_callback = nullptr;
    QsciLexerAsm_TextAsBytes_Callback qscilexerasm_textasbytes_callback = nullptr;
    QsciLexerAsm_BytesAsText_Callback qscilexerasm_bytesastext_callback = nullptr;
    QsciLexerAsm_Sender_Callback qscilexerasm_sender_callback = nullptr;
    QsciLexerAsm_SenderSignalIndex_Callback qscilexerasm_sendersignalindex_callback = nullptr;
    QsciLexerAsm_Receivers_Callback qscilexerasm_receivers_callback = nullptr;
    QsciLexerAsm_IsSignalConnected_Callback qscilexerasm_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerasm_metacall_isbase = false;
    mutable bool qscilexerasm_setfoldcomments_isbase = false;
    mutable bool qscilexerasm_setfoldcompact_isbase = false;
    mutable bool qscilexerasm_setcommentdelimiter_isbase = false;
    mutable bool qscilexerasm_setfoldsyntaxbased_isbase = false;
    mutable bool qscilexerasm_language_isbase = false;
    mutable bool qscilexerasm_lexer_isbase = false;
    mutable bool qscilexerasm_lexerid_isbase = false;
    mutable bool qscilexerasm_autocompletionfillups_isbase = false;
    mutable bool qscilexerasm_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerasm_blockend_isbase = false;
    mutable bool qscilexerasm_blocklookback_isbase = false;
    mutable bool qscilexerasm_blockstart_isbase = false;
    mutable bool qscilexerasm_blockstartkeyword_isbase = false;
    mutable bool qscilexerasm_bracestyle_isbase = false;
    mutable bool qscilexerasm_casesensitive_isbase = false;
    mutable bool qscilexerasm_color_isbase = false;
    mutable bool qscilexerasm_eolfill_isbase = false;
    mutable bool qscilexerasm_font_isbase = false;
    mutable bool qscilexerasm_indentationguideview_isbase = false;
    mutable bool qscilexerasm_keywords_isbase = false;
    mutable bool qscilexerasm_defaultstyle_isbase = false;
    mutable bool qscilexerasm_description_isbase = false;
    mutable bool qscilexerasm_paper_isbase = false;
    mutable bool qscilexerasm_defaultcolor2_isbase = false;
    mutable bool qscilexerasm_defaulteolfill_isbase = false;
    mutable bool qscilexerasm_defaultfont2_isbase = false;
    mutable bool qscilexerasm_defaultpaper2_isbase = false;
    mutable bool qscilexerasm_seteditor_isbase = false;
    mutable bool qscilexerasm_refreshproperties_isbase = false;
    mutable bool qscilexerasm_stylebitsneeded_isbase = false;
    mutable bool qscilexerasm_wordcharacters_isbase = false;
    mutable bool qscilexerasm_setautoindentstyle_isbase = false;
    mutable bool qscilexerasm_setcolor_isbase = false;
    mutable bool qscilexerasm_seteolfill_isbase = false;
    mutable bool qscilexerasm_setfont_isbase = false;
    mutable bool qscilexerasm_setpaper_isbase = false;
    mutable bool qscilexerasm_readproperties_isbase = false;
    mutable bool qscilexerasm_writeproperties_isbase = false;
    mutable bool qscilexerasm_event_isbase = false;
    mutable bool qscilexerasm_eventfilter_isbase = false;
    mutable bool qscilexerasm_timerevent_isbase = false;
    mutable bool qscilexerasm_childevent_isbase = false;
    mutable bool qscilexerasm_customevent_isbase = false;
    mutable bool qscilexerasm_connectnotify_isbase = false;
    mutable bool qscilexerasm_disconnectnotify_isbase = false;
    mutable bool qscilexerasm_textasbytes_isbase = false;
    mutable bool qscilexerasm_bytesastext_isbase = false;
    mutable bool qscilexerasm_sender_isbase = false;
    mutable bool qscilexerasm_sendersignalindex_isbase = false;
    mutable bool qscilexerasm_receivers_isbase = false;
    mutable bool qscilexerasm_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerAsm() : QsciLexerAsm() {};
    VirtualQsciLexerAsm(QObject* parent) : QsciLexerAsm(parent) {};

    ~VirtualQsciLexerAsm() {
        qscilexerasm_metacall_callback = nullptr;
        qscilexerasm_setfoldcomments_callback = nullptr;
        qscilexerasm_setfoldcompact_callback = nullptr;
        qscilexerasm_setcommentdelimiter_callback = nullptr;
        qscilexerasm_setfoldsyntaxbased_callback = nullptr;
        qscilexerasm_language_callback = nullptr;
        qscilexerasm_lexer_callback = nullptr;
        qscilexerasm_lexerid_callback = nullptr;
        qscilexerasm_autocompletionfillups_callback = nullptr;
        qscilexerasm_autocompletionwordseparators_callback = nullptr;
        qscilexerasm_blockend_callback = nullptr;
        qscilexerasm_blocklookback_callback = nullptr;
        qscilexerasm_blockstart_callback = nullptr;
        qscilexerasm_blockstartkeyword_callback = nullptr;
        qscilexerasm_bracestyle_callback = nullptr;
        qscilexerasm_casesensitive_callback = nullptr;
        qscilexerasm_color_callback = nullptr;
        qscilexerasm_eolfill_callback = nullptr;
        qscilexerasm_font_callback = nullptr;
        qscilexerasm_indentationguideview_callback = nullptr;
        qscilexerasm_keywords_callback = nullptr;
        qscilexerasm_defaultstyle_callback = nullptr;
        qscilexerasm_description_callback = nullptr;
        qscilexerasm_paper_callback = nullptr;
        qscilexerasm_defaultcolor2_callback = nullptr;
        qscilexerasm_defaulteolfill_callback = nullptr;
        qscilexerasm_defaultfont2_callback = nullptr;
        qscilexerasm_defaultpaper2_callback = nullptr;
        qscilexerasm_seteditor_callback = nullptr;
        qscilexerasm_refreshproperties_callback = nullptr;
        qscilexerasm_stylebitsneeded_callback = nullptr;
        qscilexerasm_wordcharacters_callback = nullptr;
        qscilexerasm_setautoindentstyle_callback = nullptr;
        qscilexerasm_setcolor_callback = nullptr;
        qscilexerasm_seteolfill_callback = nullptr;
        qscilexerasm_setfont_callback = nullptr;
        qscilexerasm_setpaper_callback = nullptr;
        qscilexerasm_readproperties_callback = nullptr;
        qscilexerasm_writeproperties_callback = nullptr;
        qscilexerasm_event_callback = nullptr;
        qscilexerasm_eventfilter_callback = nullptr;
        qscilexerasm_timerevent_callback = nullptr;
        qscilexerasm_childevent_callback = nullptr;
        qscilexerasm_customevent_callback = nullptr;
        qscilexerasm_connectnotify_callback = nullptr;
        qscilexerasm_disconnectnotify_callback = nullptr;
        qscilexerasm_textasbytes_callback = nullptr;
        qscilexerasm_bytesastext_callback = nullptr;
        qscilexerasm_sender_callback = nullptr;
        qscilexerasm_sendersignalindex_callback = nullptr;
        qscilexerasm_receivers_callback = nullptr;
        qscilexerasm_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerAsm_Metacall_Callback(QsciLexerAsm_Metacall_Callback cb) { qscilexerasm_metacall_callback = cb; }
    inline void setQsciLexerAsm_SetFoldComments_Callback(QsciLexerAsm_SetFoldComments_Callback cb) { qscilexerasm_setfoldcomments_callback = cb; }
    inline void setQsciLexerAsm_SetFoldCompact_Callback(QsciLexerAsm_SetFoldCompact_Callback cb) { qscilexerasm_setfoldcompact_callback = cb; }
    inline void setQsciLexerAsm_SetCommentDelimiter_Callback(QsciLexerAsm_SetCommentDelimiter_Callback cb) { qscilexerasm_setcommentdelimiter_callback = cb; }
    inline void setQsciLexerAsm_SetFoldSyntaxBased_Callback(QsciLexerAsm_SetFoldSyntaxBased_Callback cb) { qscilexerasm_setfoldsyntaxbased_callback = cb; }
    inline void setQsciLexerAsm_Language_Callback(QsciLexerAsm_Language_Callback cb) { qscilexerasm_language_callback = cb; }
    inline void setQsciLexerAsm_Lexer_Callback(QsciLexerAsm_Lexer_Callback cb) { qscilexerasm_lexer_callback = cb; }
    inline void setQsciLexerAsm_LexerId_Callback(QsciLexerAsm_LexerId_Callback cb) { qscilexerasm_lexerid_callback = cb; }
    inline void setQsciLexerAsm_AutoCompletionFillups_Callback(QsciLexerAsm_AutoCompletionFillups_Callback cb) { qscilexerasm_autocompletionfillups_callback = cb; }
    inline void setQsciLexerAsm_AutoCompletionWordSeparators_Callback(QsciLexerAsm_AutoCompletionWordSeparators_Callback cb) { qscilexerasm_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerAsm_BlockEnd_Callback(QsciLexerAsm_BlockEnd_Callback cb) { qscilexerasm_blockend_callback = cb; }
    inline void setQsciLexerAsm_BlockLookback_Callback(QsciLexerAsm_BlockLookback_Callback cb) { qscilexerasm_blocklookback_callback = cb; }
    inline void setQsciLexerAsm_BlockStart_Callback(QsciLexerAsm_BlockStart_Callback cb) { qscilexerasm_blockstart_callback = cb; }
    inline void setQsciLexerAsm_BlockStartKeyword_Callback(QsciLexerAsm_BlockStartKeyword_Callback cb) { qscilexerasm_blockstartkeyword_callback = cb; }
    inline void setQsciLexerAsm_BraceStyle_Callback(QsciLexerAsm_BraceStyle_Callback cb) { qscilexerasm_bracestyle_callback = cb; }
    inline void setQsciLexerAsm_CaseSensitive_Callback(QsciLexerAsm_CaseSensitive_Callback cb) { qscilexerasm_casesensitive_callback = cb; }
    inline void setQsciLexerAsm_Color_Callback(QsciLexerAsm_Color_Callback cb) { qscilexerasm_color_callback = cb; }
    inline void setQsciLexerAsm_EolFill_Callback(QsciLexerAsm_EolFill_Callback cb) { qscilexerasm_eolfill_callback = cb; }
    inline void setQsciLexerAsm_Font_Callback(QsciLexerAsm_Font_Callback cb) { qscilexerasm_font_callback = cb; }
    inline void setQsciLexerAsm_IndentationGuideView_Callback(QsciLexerAsm_IndentationGuideView_Callback cb) { qscilexerasm_indentationguideview_callback = cb; }
    inline void setQsciLexerAsm_Keywords_Callback(QsciLexerAsm_Keywords_Callback cb) { qscilexerasm_keywords_callback = cb; }
    inline void setQsciLexerAsm_DefaultStyle_Callback(QsciLexerAsm_DefaultStyle_Callback cb) { qscilexerasm_defaultstyle_callback = cb; }
    inline void setQsciLexerAsm_Description_Callback(QsciLexerAsm_Description_Callback cb) { qscilexerasm_description_callback = cb; }
    inline void setQsciLexerAsm_Paper_Callback(QsciLexerAsm_Paper_Callback cb) { qscilexerasm_paper_callback = cb; }
    inline void setQsciLexerAsm_DefaultColor2_Callback(QsciLexerAsm_DefaultColor2_Callback cb) { qscilexerasm_defaultcolor2_callback = cb; }
    inline void setQsciLexerAsm_DefaultEolFill_Callback(QsciLexerAsm_DefaultEolFill_Callback cb) { qscilexerasm_defaulteolfill_callback = cb; }
    inline void setQsciLexerAsm_DefaultFont2_Callback(QsciLexerAsm_DefaultFont2_Callback cb) { qscilexerasm_defaultfont2_callback = cb; }
    inline void setQsciLexerAsm_DefaultPaper2_Callback(QsciLexerAsm_DefaultPaper2_Callback cb) { qscilexerasm_defaultpaper2_callback = cb; }
    inline void setQsciLexerAsm_SetEditor_Callback(QsciLexerAsm_SetEditor_Callback cb) { qscilexerasm_seteditor_callback = cb; }
    inline void setQsciLexerAsm_RefreshProperties_Callback(QsciLexerAsm_RefreshProperties_Callback cb) { qscilexerasm_refreshproperties_callback = cb; }
    inline void setQsciLexerAsm_StyleBitsNeeded_Callback(QsciLexerAsm_StyleBitsNeeded_Callback cb) { qscilexerasm_stylebitsneeded_callback = cb; }
    inline void setQsciLexerAsm_WordCharacters_Callback(QsciLexerAsm_WordCharacters_Callback cb) { qscilexerasm_wordcharacters_callback = cb; }
    inline void setQsciLexerAsm_SetAutoIndentStyle_Callback(QsciLexerAsm_SetAutoIndentStyle_Callback cb) { qscilexerasm_setautoindentstyle_callback = cb; }
    inline void setQsciLexerAsm_SetColor_Callback(QsciLexerAsm_SetColor_Callback cb) { qscilexerasm_setcolor_callback = cb; }
    inline void setQsciLexerAsm_SetEolFill_Callback(QsciLexerAsm_SetEolFill_Callback cb) { qscilexerasm_seteolfill_callback = cb; }
    inline void setQsciLexerAsm_SetFont_Callback(QsciLexerAsm_SetFont_Callback cb) { qscilexerasm_setfont_callback = cb; }
    inline void setQsciLexerAsm_SetPaper_Callback(QsciLexerAsm_SetPaper_Callback cb) { qscilexerasm_setpaper_callback = cb; }
    inline void setQsciLexerAsm_ReadProperties_Callback(QsciLexerAsm_ReadProperties_Callback cb) { qscilexerasm_readproperties_callback = cb; }
    inline void setQsciLexerAsm_WriteProperties_Callback(QsciLexerAsm_WriteProperties_Callback cb) { qscilexerasm_writeproperties_callback = cb; }
    inline void setQsciLexerAsm_Event_Callback(QsciLexerAsm_Event_Callback cb) { qscilexerasm_event_callback = cb; }
    inline void setQsciLexerAsm_EventFilter_Callback(QsciLexerAsm_EventFilter_Callback cb) { qscilexerasm_eventfilter_callback = cb; }
    inline void setQsciLexerAsm_TimerEvent_Callback(QsciLexerAsm_TimerEvent_Callback cb) { qscilexerasm_timerevent_callback = cb; }
    inline void setQsciLexerAsm_ChildEvent_Callback(QsciLexerAsm_ChildEvent_Callback cb) { qscilexerasm_childevent_callback = cb; }
    inline void setQsciLexerAsm_CustomEvent_Callback(QsciLexerAsm_CustomEvent_Callback cb) { qscilexerasm_customevent_callback = cb; }
    inline void setQsciLexerAsm_ConnectNotify_Callback(QsciLexerAsm_ConnectNotify_Callback cb) { qscilexerasm_connectnotify_callback = cb; }
    inline void setQsciLexerAsm_DisconnectNotify_Callback(QsciLexerAsm_DisconnectNotify_Callback cb) { qscilexerasm_disconnectnotify_callback = cb; }
    inline void setQsciLexerAsm_TextAsBytes_Callback(QsciLexerAsm_TextAsBytes_Callback cb) { qscilexerasm_textasbytes_callback = cb; }
    inline void setQsciLexerAsm_BytesAsText_Callback(QsciLexerAsm_BytesAsText_Callback cb) { qscilexerasm_bytesastext_callback = cb; }
    inline void setQsciLexerAsm_Sender_Callback(QsciLexerAsm_Sender_Callback cb) { qscilexerasm_sender_callback = cb; }
    inline void setQsciLexerAsm_SenderSignalIndex_Callback(QsciLexerAsm_SenderSignalIndex_Callback cb) { qscilexerasm_sendersignalindex_callback = cb; }
    inline void setQsciLexerAsm_Receivers_Callback(QsciLexerAsm_Receivers_Callback cb) { qscilexerasm_receivers_callback = cb; }
    inline void setQsciLexerAsm_IsSignalConnected_Callback(QsciLexerAsm_IsSignalConnected_Callback cb) { qscilexerasm_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerAsm_Metacall_IsBase(bool value) const { qscilexerasm_metacall_isbase = value; }
    inline void setQsciLexerAsm_SetFoldComments_IsBase(bool value) const { qscilexerasm_setfoldcomments_isbase = value; }
    inline void setQsciLexerAsm_SetFoldCompact_IsBase(bool value) const { qscilexerasm_setfoldcompact_isbase = value; }
    inline void setQsciLexerAsm_SetCommentDelimiter_IsBase(bool value) const { qscilexerasm_setcommentdelimiter_isbase = value; }
    inline void setQsciLexerAsm_SetFoldSyntaxBased_IsBase(bool value) const { qscilexerasm_setfoldsyntaxbased_isbase = value; }
    inline void setQsciLexerAsm_Language_IsBase(bool value) const { qscilexerasm_language_isbase = value; }
    inline void setQsciLexerAsm_Lexer_IsBase(bool value) const { qscilexerasm_lexer_isbase = value; }
    inline void setQsciLexerAsm_LexerId_IsBase(bool value) const { qscilexerasm_lexerid_isbase = value; }
    inline void setQsciLexerAsm_AutoCompletionFillups_IsBase(bool value) const { qscilexerasm_autocompletionfillups_isbase = value; }
    inline void setQsciLexerAsm_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerasm_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerAsm_BlockEnd_IsBase(bool value) const { qscilexerasm_blockend_isbase = value; }
    inline void setQsciLexerAsm_BlockLookback_IsBase(bool value) const { qscilexerasm_blocklookback_isbase = value; }
    inline void setQsciLexerAsm_BlockStart_IsBase(bool value) const { qscilexerasm_blockstart_isbase = value; }
    inline void setQsciLexerAsm_BlockStartKeyword_IsBase(bool value) const { qscilexerasm_blockstartkeyword_isbase = value; }
    inline void setQsciLexerAsm_BraceStyle_IsBase(bool value) const { qscilexerasm_bracestyle_isbase = value; }
    inline void setQsciLexerAsm_CaseSensitive_IsBase(bool value) const { qscilexerasm_casesensitive_isbase = value; }
    inline void setQsciLexerAsm_Color_IsBase(bool value) const { qscilexerasm_color_isbase = value; }
    inline void setQsciLexerAsm_EolFill_IsBase(bool value) const { qscilexerasm_eolfill_isbase = value; }
    inline void setQsciLexerAsm_Font_IsBase(bool value) const { qscilexerasm_font_isbase = value; }
    inline void setQsciLexerAsm_IndentationGuideView_IsBase(bool value) const { qscilexerasm_indentationguideview_isbase = value; }
    inline void setQsciLexerAsm_Keywords_IsBase(bool value) const { qscilexerasm_keywords_isbase = value; }
    inline void setQsciLexerAsm_DefaultStyle_IsBase(bool value) const { qscilexerasm_defaultstyle_isbase = value; }
    inline void setQsciLexerAsm_Description_IsBase(bool value) const { qscilexerasm_description_isbase = value; }
    inline void setQsciLexerAsm_Paper_IsBase(bool value) const { qscilexerasm_paper_isbase = value; }
    inline void setQsciLexerAsm_DefaultColor2_IsBase(bool value) const { qscilexerasm_defaultcolor2_isbase = value; }
    inline void setQsciLexerAsm_DefaultEolFill_IsBase(bool value) const { qscilexerasm_defaulteolfill_isbase = value; }
    inline void setQsciLexerAsm_DefaultFont2_IsBase(bool value) const { qscilexerasm_defaultfont2_isbase = value; }
    inline void setQsciLexerAsm_DefaultPaper2_IsBase(bool value) const { qscilexerasm_defaultpaper2_isbase = value; }
    inline void setQsciLexerAsm_SetEditor_IsBase(bool value) const { qscilexerasm_seteditor_isbase = value; }
    inline void setQsciLexerAsm_RefreshProperties_IsBase(bool value) const { qscilexerasm_refreshproperties_isbase = value; }
    inline void setQsciLexerAsm_StyleBitsNeeded_IsBase(bool value) const { qscilexerasm_stylebitsneeded_isbase = value; }
    inline void setQsciLexerAsm_WordCharacters_IsBase(bool value) const { qscilexerasm_wordcharacters_isbase = value; }
    inline void setQsciLexerAsm_SetAutoIndentStyle_IsBase(bool value) const { qscilexerasm_setautoindentstyle_isbase = value; }
    inline void setQsciLexerAsm_SetColor_IsBase(bool value) const { qscilexerasm_setcolor_isbase = value; }
    inline void setQsciLexerAsm_SetEolFill_IsBase(bool value) const { qscilexerasm_seteolfill_isbase = value; }
    inline void setQsciLexerAsm_SetFont_IsBase(bool value) const { qscilexerasm_setfont_isbase = value; }
    inline void setQsciLexerAsm_SetPaper_IsBase(bool value) const { qscilexerasm_setpaper_isbase = value; }
    inline void setQsciLexerAsm_ReadProperties_IsBase(bool value) const { qscilexerasm_readproperties_isbase = value; }
    inline void setQsciLexerAsm_WriteProperties_IsBase(bool value) const { qscilexerasm_writeproperties_isbase = value; }
    inline void setQsciLexerAsm_Event_IsBase(bool value) const { qscilexerasm_event_isbase = value; }
    inline void setQsciLexerAsm_EventFilter_IsBase(bool value) const { qscilexerasm_eventfilter_isbase = value; }
    inline void setQsciLexerAsm_TimerEvent_IsBase(bool value) const { qscilexerasm_timerevent_isbase = value; }
    inline void setQsciLexerAsm_ChildEvent_IsBase(bool value) const { qscilexerasm_childevent_isbase = value; }
    inline void setQsciLexerAsm_CustomEvent_IsBase(bool value) const { qscilexerasm_customevent_isbase = value; }
    inline void setQsciLexerAsm_ConnectNotify_IsBase(bool value) const { qscilexerasm_connectnotify_isbase = value; }
    inline void setQsciLexerAsm_DisconnectNotify_IsBase(bool value) const { qscilexerasm_disconnectnotify_isbase = value; }
    inline void setQsciLexerAsm_TextAsBytes_IsBase(bool value) const { qscilexerasm_textasbytes_isbase = value; }
    inline void setQsciLexerAsm_BytesAsText_IsBase(bool value) const { qscilexerasm_bytesastext_isbase = value; }
    inline void setQsciLexerAsm_Sender_IsBase(bool value) const { qscilexerasm_sender_isbase = value; }
    inline void setQsciLexerAsm_SenderSignalIndex_IsBase(bool value) const { qscilexerasm_sendersignalindex_isbase = value; }
    inline void setQsciLexerAsm_Receivers_IsBase(bool value) const { qscilexerasm_receivers_isbase = value; }
    inline void setQsciLexerAsm_IsSignalConnected_IsBase(bool value) const { qscilexerasm_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerasm_metacall_isbase) {
            qscilexerasm_metacall_isbase = false;
            return QsciLexerAsm::qt_metacall(param1, param2, param3);
        } else if (qscilexerasm_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexerasm_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerasm_setfoldcomments_isbase) {
            qscilexerasm_setfoldcomments_isbase = false;
            QsciLexerAsm::setFoldComments(fold);
        } else if (qscilexerasm_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerasm_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerAsm::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerasm_setfoldcompact_isbase) {
            qscilexerasm_setfoldcompact_isbase = false;
            QsciLexerAsm::setFoldCompact(fold);
        } else if (qscilexerasm_setfoldcompact_callback != nullptr) {
            bool cbval1 = fold;

            qscilexerasm_setfoldcompact_callback(this, cbval1);
        } else {
            QsciLexerAsm::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexerasm_setcommentdelimiter_isbase) {
            qscilexerasm_setcommentdelimiter_isbase = false;
            QsciLexerAsm::setCommentDelimiter(delimeter);
        } else if (qscilexerasm_setcommentdelimiter_callback != nullptr) {
            QChar* cbval1 = new QChar(delimeter);

            qscilexerasm_setcommentdelimiter_callback(this, cbval1);
        } else {
            QsciLexerAsm::setCommentDelimiter(delimeter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexerasm_setfoldsyntaxbased_isbase) {
            qscilexerasm_setfoldsyntaxbased_isbase = false;
            QsciLexerAsm::setFoldSyntaxBased(syntax_based);
        } else if (qscilexerasm_setfoldsyntaxbased_callback != nullptr) {
            bool cbval1 = syntax_based;

            qscilexerasm_setfoldsyntaxbased_callback(this, cbval1);
        } else {
            QsciLexerAsm::setFoldSyntaxBased(syntax_based);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerasm_language_callback != nullptr) {
            const char* callback_ret = qscilexerasm_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerasm_lexer_isbase) {
            qscilexerasm_lexer_isbase = false;
            return QsciLexerAsm::lexer();
        } else if (qscilexerasm_lexer_callback != nullptr) {
            const char* callback_ret = qscilexerasm_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerAsm::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerasm_lexerid_isbase) {
            qscilexerasm_lexerid_isbase = false;
            return QsciLexerAsm::lexerId();
        } else if (qscilexerasm_lexerid_callback != nullptr) {
            int callback_ret = qscilexerasm_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerasm_autocompletionfillups_isbase) {
            qscilexerasm_autocompletionfillups_isbase = false;
            return QsciLexerAsm::autoCompletionFillups();
        } else if (qscilexerasm_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexerasm_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerAsm::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerasm_autocompletionwordseparators_isbase) {
            qscilexerasm_autocompletionwordseparators_isbase = false;
            return QsciLexerAsm::autoCompletionWordSeparators();
        } else if (qscilexerasm_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexerasm_autocompletionwordseparators_callback();
            QList<QString> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerAsm::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerasm_blockend_isbase) {
            qscilexerasm_blockend_isbase = false;
            return QsciLexerAsm::blockEnd(style);
        } else if (qscilexerasm_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerasm_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerasm_blocklookback_isbase) {
            qscilexerasm_blocklookback_isbase = false;
            return QsciLexerAsm::blockLookback();
        } else if (qscilexerasm_blocklookback_callback != nullptr) {
            int callback_ret = qscilexerasm_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerasm_blockstart_isbase) {
            qscilexerasm_blockstart_isbase = false;
            return QsciLexerAsm::blockStart(style);
        } else if (qscilexerasm_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerasm_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerasm_blockstartkeyword_isbase) {
            qscilexerasm_blockstartkeyword_isbase = false;
            return QsciLexerAsm::blockStartKeyword(style);
        } else if (qscilexerasm_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexerasm_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerasm_bracestyle_isbase) {
            qscilexerasm_bracestyle_isbase = false;
            return QsciLexerAsm::braceStyle();
        } else if (qscilexerasm_bracestyle_callback != nullptr) {
            int callback_ret = qscilexerasm_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerasm_casesensitive_isbase) {
            qscilexerasm_casesensitive_isbase = false;
            return QsciLexerAsm::caseSensitive();
        } else if (qscilexerasm_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexerasm_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerAsm::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerasm_color_isbase) {
            qscilexerasm_color_isbase = false;
            return QsciLexerAsm::color(style);
        } else if (qscilexerasm_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerasm_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerasm_eolfill_isbase) {
            qscilexerasm_eolfill_isbase = false;
            return QsciLexerAsm::eolFill(style);
        } else if (qscilexerasm_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerasm_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerasm_font_isbase) {
            qscilexerasm_font_isbase = false;
            return QsciLexerAsm::font(style);
        } else if (qscilexerasm_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerasm_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerasm_indentationguideview_isbase) {
            qscilexerasm_indentationguideview_isbase = false;
            return QsciLexerAsm::indentationGuideView();
        } else if (qscilexerasm_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexerasm_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerasm_keywords_isbase) {
            qscilexerasm_keywords_isbase = false;
            return QsciLexerAsm::keywords(set);
        } else if (qscilexerasm_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexerasm_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerasm_defaultstyle_isbase) {
            qscilexerasm_defaultstyle_isbase = false;
            return QsciLexerAsm::defaultStyle();
        } else if (qscilexerasm_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexerasm_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerasm_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexerasm_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerasm_paper_isbase) {
            qscilexerasm_paper_isbase = false;
            return QsciLexerAsm::paper(style);
        } else if (qscilexerasm_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerasm_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerasm_defaultcolor2_isbase) {
            qscilexerasm_defaultcolor2_isbase = false;
            return QsciLexerAsm::defaultColor(style);
        } else if (qscilexerasm_defaultcolor2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerasm_defaultcolor2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerasm_defaulteolfill_isbase) {
            qscilexerasm_defaulteolfill_isbase = false;
            return QsciLexerAsm::defaultEolFill(style);
        } else if (qscilexerasm_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexerasm_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerasm_defaultfont2_isbase) {
            qscilexerasm_defaultfont2_isbase = false;
            return QsciLexerAsm::defaultFont(style);
        } else if (qscilexerasm_defaultfont2_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexerasm_defaultfont2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerasm_defaultpaper2_isbase) {
            qscilexerasm_defaultpaper2_isbase = false;
            return QsciLexerAsm::defaultPaper(style);
        } else if (qscilexerasm_defaultpaper2_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexerasm_defaultpaper2_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerAsm::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerasm_seteditor_isbase) {
            qscilexerasm_seteditor_isbase = false;
            QsciLexerAsm::setEditor(editor);
        } else if (qscilexerasm_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexerasm_seteditor_callback(this, cbval1);
        } else {
            QsciLexerAsm::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerasm_refreshproperties_isbase) {
            qscilexerasm_refreshproperties_isbase = false;
            QsciLexerAsm::refreshProperties();
        } else if (qscilexerasm_refreshproperties_callback != nullptr) {
            qscilexerasm_refreshproperties_callback();
        } else {
            QsciLexerAsm::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerasm_stylebitsneeded_isbase) {
            qscilexerasm_stylebitsneeded_isbase = false;
            return QsciLexerAsm::styleBitsNeeded();
        } else if (qscilexerasm_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexerasm_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerasm_wordcharacters_isbase) {
            qscilexerasm_wordcharacters_isbase = false;
            return QsciLexerAsm::wordCharacters();
        } else if (qscilexerasm_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexerasm_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerAsm::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerasm_setautoindentstyle_isbase) {
            qscilexerasm_setautoindentstyle_isbase = false;
            QsciLexerAsm::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerasm_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexerasm_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerAsm::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerasm_setcolor_isbase) {
            qscilexerasm_setcolor_isbase = false;
            QsciLexerAsm::setColor(c, style);
        } else if (qscilexerasm_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerasm_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAsm::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerasm_seteolfill_isbase) {
            qscilexerasm_seteolfill_isbase = false;
            QsciLexerAsm::setEolFill(eoffill, style);
        } else if (qscilexerasm_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexerasm_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAsm::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerasm_setfont_isbase) {
            qscilexerasm_setfont_isbase = false;
            QsciLexerAsm::setFont(f, style);
        } else if (qscilexerasm_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexerasm_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAsm::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerasm_setpaper_isbase) {
            qscilexerasm_setpaper_isbase = false;
            QsciLexerAsm::setPaper(c, style);
        } else if (qscilexerasm_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexerasm_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerAsm::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerasm_readproperties_isbase) {
            qscilexerasm_readproperties_isbase = false;
            return QsciLexerAsm::readProperties(qs, prefix);
        } else if (qscilexerasm_readproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerasm_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAsm::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerasm_writeproperties_isbase) {
            qscilexerasm_writeproperties_isbase = false;
            return QsciLexerAsm::writeProperties(qs, prefix);
        } else if (qscilexerasm_writeproperties_callback != nullptr) {
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

            bool callback_ret = qscilexerasm_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAsm::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerasm_event_isbase) {
            qscilexerasm_event_isbase = false;
            return QsciLexerAsm::event(event);
        } else if (qscilexerasm_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexerasm_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerasm_eventfilter_isbase) {
            qscilexerasm_eventfilter_isbase = false;
            return QsciLexerAsm::eventFilter(watched, event);
        } else if (qscilexerasm_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexerasm_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerAsm::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerasm_timerevent_isbase) {
            qscilexerasm_timerevent_isbase = false;
            QsciLexerAsm::timerEvent(event);
        } else if (qscilexerasm_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexerasm_timerevent_callback(this, cbval1);
        } else {
            QsciLexerAsm::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerasm_childevent_isbase) {
            qscilexerasm_childevent_isbase = false;
            QsciLexerAsm::childEvent(event);
        } else if (qscilexerasm_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexerasm_childevent_callback(this, cbval1);
        } else {
            QsciLexerAsm::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerasm_customevent_isbase) {
            qscilexerasm_customevent_isbase = false;
            QsciLexerAsm::customEvent(event);
        } else if (qscilexerasm_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexerasm_customevent_callback(this, cbval1);
        } else {
            QsciLexerAsm::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerasm_connectnotify_isbase) {
            qscilexerasm_connectnotify_isbase = false;
            QsciLexerAsm::connectNotify(signal);
        } else if (qscilexerasm_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerasm_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerAsm::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerasm_disconnectnotify_isbase) {
            qscilexerasm_disconnectnotify_isbase = false;
            QsciLexerAsm::disconnectNotify(signal);
        } else if (qscilexerasm_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexerasm_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerAsm::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QByteArray textAsBytes(const QString& text) const {
        if (qscilexerasm_textasbytes_isbase) {
            qscilexerasm_textasbytes_isbase = false;
            return QsciLexerAsm::textAsBytes(text);
        } else if (qscilexerasm_textasbytes_callback != nullptr) {
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc(text_str.len + 1));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval1 = text_str;

            libqt_string callback_ret = qscilexerasm_textasbytes_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QsciLexerAsm::textAsBytes(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QString bytesAsText(const char* bytes, int size) const {
        if (qscilexerasm_bytesastext_isbase) {
            qscilexerasm_bytesastext_isbase = false;
            return QsciLexerAsm::bytesAsText(bytes, size);
        } else if (qscilexerasm_bytesastext_callback != nullptr) {
            const char* cbval1 = (const char*)bytes;
            int cbval2 = size;

            libqt_string callback_ret = qscilexerasm_bytesastext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QsciLexerAsm::bytesAsText(bytes, size);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerasm_sender_isbase) {
            qscilexerasm_sender_isbase = false;
            return QsciLexerAsm::sender();
        } else if (qscilexerasm_sender_callback != nullptr) {
            QObject* callback_ret = qscilexerasm_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerAsm::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerasm_sendersignalindex_isbase) {
            qscilexerasm_sendersignalindex_isbase = false;
            return QsciLexerAsm::senderSignalIndex();
        } else if (qscilexerasm_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexerasm_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerasm_receivers_isbase) {
            qscilexerasm_receivers_isbase = false;
            return QsciLexerAsm::receivers(signal);
        } else if (qscilexerasm_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexerasm_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerAsm::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerasm_issignalconnected_isbase) {
            qscilexerasm_issignalconnected_isbase = false;
            return QsciLexerAsm::isSignalConnected(signal);
        } else if (qscilexerasm_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexerasm_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerAsm::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerAsm_ReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAsm_QBaseReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAsm_WriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAsm_QBaseWriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerAsm_TimerEvent(QsciLexerAsm* self, QTimerEvent* event);
    friend void QsciLexerAsm_QBaseTimerEvent(QsciLexerAsm* self, QTimerEvent* event);
    friend void QsciLexerAsm_ChildEvent(QsciLexerAsm* self, QChildEvent* event);
    friend void QsciLexerAsm_QBaseChildEvent(QsciLexerAsm* self, QChildEvent* event);
    friend void QsciLexerAsm_CustomEvent(QsciLexerAsm* self, QEvent* event);
    friend void QsciLexerAsm_QBaseCustomEvent(QsciLexerAsm* self, QEvent* event);
    friend void QsciLexerAsm_ConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
    friend void QsciLexerAsm_QBaseConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
    friend void QsciLexerAsm_DisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
    friend void QsciLexerAsm_QBaseDisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
    friend libqt_string QsciLexerAsm_TextAsBytes(const QsciLexerAsm* self, const libqt_string text);
    friend libqt_string QsciLexerAsm_QBaseTextAsBytes(const QsciLexerAsm* self, const libqt_string text);
    friend libqt_string QsciLexerAsm_BytesAsText(const QsciLexerAsm* self, const char* bytes, int size);
    friend libqt_string QsciLexerAsm_QBaseBytesAsText(const QsciLexerAsm* self, const char* bytes, int size);
    friend QObject* QsciLexerAsm_Sender(const QsciLexerAsm* self);
    friend QObject* QsciLexerAsm_QBaseSender(const QsciLexerAsm* self);
    friend int QsciLexerAsm_SenderSignalIndex(const QsciLexerAsm* self);
    friend int QsciLexerAsm_QBaseSenderSignalIndex(const QsciLexerAsm* self);
    friend int QsciLexerAsm_Receivers(const QsciLexerAsm* self, const char* signal);
    friend int QsciLexerAsm_QBaseReceivers(const QsciLexerAsm* self, const char* signal);
    friend bool QsciLexerAsm_IsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal);
    friend bool QsciLexerAsm_QBaseIsSignalConnected(const QsciLexerAsm* self, const QMetaMethod* signal);
};

#endif
