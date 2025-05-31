#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERYAML_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERYAML_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerYAML so that we can call protected methods
class VirtualQsciLexerYAML final : public QsciLexerYAML {

  public:
    // Virtual class boolean flag
    bool isVirtualQsciLexerYAML = true;

    // Virtual class public types (including callbacks)
    using QsciLexerYAML_Metacall_Callback = int (*)(QsciLexerYAML*, int, int, void**);
    using QsciLexerYAML_SetFoldComments_Callback = void (*)(QsciLexerYAML*, bool);
    using QsciLexerYAML_Language_Callback = const char* (*)();
    using QsciLexerYAML_Lexer_Callback = const char* (*)();
    using QsciLexerYAML_LexerId_Callback = int (*)();
    using QsciLexerYAML_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerYAML_AutoCompletionWordSeparators_Callback = libqt_list /* of libqt_string */ (*)();
    using QsciLexerYAML_BlockEnd_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BlockLookback_Callback = int (*)();
    using QsciLexerYAML_BlockStart_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BraceStyle_Callback = int (*)();
    using QsciLexerYAML_CaseSensitive_Callback = bool (*)();
    using QsciLexerYAML_Color_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_EolFill_Callback = bool (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_Font_Callback = QFont* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_IndentationGuideView_Callback = int (*)();
    using QsciLexerYAML_Keywords_Callback = const char* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultStyle_Callback = int (*)();
    using QsciLexerYAML_Description_Callback = libqt_string (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_Paper_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultColorWithStyle_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultEolFill_Callback = bool (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultFontWithStyle_Callback = QFont* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultPaperWithStyle_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_SetEditor_Callback = void (*)(QsciLexerYAML*, QsciScintilla*);
    using QsciLexerYAML_RefreshProperties_Callback = void (*)();
    using QsciLexerYAML_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerYAML_WordCharacters_Callback = const char* (*)();
    using QsciLexerYAML_SetAutoIndentStyle_Callback = void (*)(QsciLexerYAML*, int);
    using QsciLexerYAML_SetColor_Callback = void (*)(QsciLexerYAML*, QColor*, int);
    using QsciLexerYAML_SetEolFill_Callback = void (*)(QsciLexerYAML*, bool, int);
    using QsciLexerYAML_SetFont_Callback = void (*)(QsciLexerYAML*, QFont*, int);
    using QsciLexerYAML_SetPaper_Callback = void (*)(QsciLexerYAML*, QColor*, int);
    using QsciLexerYAML_ReadProperties_Callback = bool (*)(QsciLexerYAML*, QSettings*, libqt_string);
    using QsciLexerYAML_WriteProperties_Callback = bool (*)(const QsciLexerYAML*, QSettings*, libqt_string);
    using QsciLexerYAML_Event_Callback = bool (*)(QsciLexerYAML*, QEvent*);
    using QsciLexerYAML_EventFilter_Callback = bool (*)(QsciLexerYAML*, QObject*, QEvent*);
    using QsciLexerYAML_TimerEvent_Callback = void (*)(QsciLexerYAML*, QTimerEvent*);
    using QsciLexerYAML_ChildEvent_Callback = void (*)(QsciLexerYAML*, QChildEvent*);
    using QsciLexerYAML_CustomEvent_Callback = void (*)(QsciLexerYAML*, QEvent*);
    using QsciLexerYAML_ConnectNotify_Callback = void (*)(QsciLexerYAML*, QMetaMethod*);
    using QsciLexerYAML_DisconnectNotify_Callback = void (*)(QsciLexerYAML*, QMetaMethod*);
    using QsciLexerYAML_Sender_Callback = QObject* (*)();
    using QsciLexerYAML_SenderSignalIndex_Callback = int (*)();
    using QsciLexerYAML_Receivers_Callback = int (*)(const QsciLexerYAML*, const char*);
    using QsciLexerYAML_IsSignalConnected_Callback = bool (*)(const QsciLexerYAML*, QMetaMethod*);

  protected:
    // Instance callback storage
    QsciLexerYAML_Metacall_Callback qscilexeryaml_metacall_callback = nullptr;
    QsciLexerYAML_SetFoldComments_Callback qscilexeryaml_setfoldcomments_callback = nullptr;
    QsciLexerYAML_Language_Callback qscilexeryaml_language_callback = nullptr;
    QsciLexerYAML_Lexer_Callback qscilexeryaml_lexer_callback = nullptr;
    QsciLexerYAML_LexerId_Callback qscilexeryaml_lexerid_callback = nullptr;
    QsciLexerYAML_AutoCompletionFillups_Callback qscilexeryaml_autocompletionfillups_callback = nullptr;
    QsciLexerYAML_AutoCompletionWordSeparators_Callback qscilexeryaml_autocompletionwordseparators_callback = nullptr;
    QsciLexerYAML_BlockEnd_Callback qscilexeryaml_blockend_callback = nullptr;
    QsciLexerYAML_BlockLookback_Callback qscilexeryaml_blocklookback_callback = nullptr;
    QsciLexerYAML_BlockStart_Callback qscilexeryaml_blockstart_callback = nullptr;
    QsciLexerYAML_BlockStartKeyword_Callback qscilexeryaml_blockstartkeyword_callback = nullptr;
    QsciLexerYAML_BraceStyle_Callback qscilexeryaml_bracestyle_callback = nullptr;
    QsciLexerYAML_CaseSensitive_Callback qscilexeryaml_casesensitive_callback = nullptr;
    QsciLexerYAML_Color_Callback qscilexeryaml_color_callback = nullptr;
    QsciLexerYAML_EolFill_Callback qscilexeryaml_eolfill_callback = nullptr;
    QsciLexerYAML_Font_Callback qscilexeryaml_font_callback = nullptr;
    QsciLexerYAML_IndentationGuideView_Callback qscilexeryaml_indentationguideview_callback = nullptr;
    QsciLexerYAML_Keywords_Callback qscilexeryaml_keywords_callback = nullptr;
    QsciLexerYAML_DefaultStyle_Callback qscilexeryaml_defaultstyle_callback = nullptr;
    QsciLexerYAML_Description_Callback qscilexeryaml_description_callback = nullptr;
    QsciLexerYAML_Paper_Callback qscilexeryaml_paper_callback = nullptr;
    QsciLexerYAML_DefaultColorWithStyle_Callback qscilexeryaml_defaultcolorwithstyle_callback = nullptr;
    QsciLexerYAML_DefaultEolFill_Callback qscilexeryaml_defaulteolfill_callback = nullptr;
    QsciLexerYAML_DefaultFontWithStyle_Callback qscilexeryaml_defaultfontwithstyle_callback = nullptr;
    QsciLexerYAML_DefaultPaperWithStyle_Callback qscilexeryaml_defaultpaperwithstyle_callback = nullptr;
    QsciLexerYAML_SetEditor_Callback qscilexeryaml_seteditor_callback = nullptr;
    QsciLexerYAML_RefreshProperties_Callback qscilexeryaml_refreshproperties_callback = nullptr;
    QsciLexerYAML_StyleBitsNeeded_Callback qscilexeryaml_stylebitsneeded_callback = nullptr;
    QsciLexerYAML_WordCharacters_Callback qscilexeryaml_wordcharacters_callback = nullptr;
    QsciLexerYAML_SetAutoIndentStyle_Callback qscilexeryaml_setautoindentstyle_callback = nullptr;
    QsciLexerYAML_SetColor_Callback qscilexeryaml_setcolor_callback = nullptr;
    QsciLexerYAML_SetEolFill_Callback qscilexeryaml_seteolfill_callback = nullptr;
    QsciLexerYAML_SetFont_Callback qscilexeryaml_setfont_callback = nullptr;
    QsciLexerYAML_SetPaper_Callback qscilexeryaml_setpaper_callback = nullptr;
    QsciLexerYAML_ReadProperties_Callback qscilexeryaml_readproperties_callback = nullptr;
    QsciLexerYAML_WriteProperties_Callback qscilexeryaml_writeproperties_callback = nullptr;
    QsciLexerYAML_Event_Callback qscilexeryaml_event_callback = nullptr;
    QsciLexerYAML_EventFilter_Callback qscilexeryaml_eventfilter_callback = nullptr;
    QsciLexerYAML_TimerEvent_Callback qscilexeryaml_timerevent_callback = nullptr;
    QsciLexerYAML_ChildEvent_Callback qscilexeryaml_childevent_callback = nullptr;
    QsciLexerYAML_CustomEvent_Callback qscilexeryaml_customevent_callback = nullptr;
    QsciLexerYAML_ConnectNotify_Callback qscilexeryaml_connectnotify_callback = nullptr;
    QsciLexerYAML_DisconnectNotify_Callback qscilexeryaml_disconnectnotify_callback = nullptr;
    QsciLexerYAML_Sender_Callback qscilexeryaml_sender_callback = nullptr;
    QsciLexerYAML_SenderSignalIndex_Callback qscilexeryaml_sendersignalindex_callback = nullptr;
    QsciLexerYAML_Receivers_Callback qscilexeryaml_receivers_callback = nullptr;
    QsciLexerYAML_IsSignalConnected_Callback qscilexeryaml_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexeryaml_metacall_isbase = false;
    mutable bool qscilexeryaml_setfoldcomments_isbase = false;
    mutable bool qscilexeryaml_language_isbase = false;
    mutable bool qscilexeryaml_lexer_isbase = false;
    mutable bool qscilexeryaml_lexerid_isbase = false;
    mutable bool qscilexeryaml_autocompletionfillups_isbase = false;
    mutable bool qscilexeryaml_autocompletionwordseparators_isbase = false;
    mutable bool qscilexeryaml_blockend_isbase = false;
    mutable bool qscilexeryaml_blocklookback_isbase = false;
    mutable bool qscilexeryaml_blockstart_isbase = false;
    mutable bool qscilexeryaml_blockstartkeyword_isbase = false;
    mutable bool qscilexeryaml_bracestyle_isbase = false;
    mutable bool qscilexeryaml_casesensitive_isbase = false;
    mutable bool qscilexeryaml_color_isbase = false;
    mutable bool qscilexeryaml_eolfill_isbase = false;
    mutable bool qscilexeryaml_font_isbase = false;
    mutable bool qscilexeryaml_indentationguideview_isbase = false;
    mutable bool qscilexeryaml_keywords_isbase = false;
    mutable bool qscilexeryaml_defaultstyle_isbase = false;
    mutable bool qscilexeryaml_description_isbase = false;
    mutable bool qscilexeryaml_paper_isbase = false;
    mutable bool qscilexeryaml_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexeryaml_defaulteolfill_isbase = false;
    mutable bool qscilexeryaml_defaultfontwithstyle_isbase = false;
    mutable bool qscilexeryaml_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexeryaml_seteditor_isbase = false;
    mutable bool qscilexeryaml_refreshproperties_isbase = false;
    mutable bool qscilexeryaml_stylebitsneeded_isbase = false;
    mutable bool qscilexeryaml_wordcharacters_isbase = false;
    mutable bool qscilexeryaml_setautoindentstyle_isbase = false;
    mutable bool qscilexeryaml_setcolor_isbase = false;
    mutable bool qscilexeryaml_seteolfill_isbase = false;
    mutable bool qscilexeryaml_setfont_isbase = false;
    mutable bool qscilexeryaml_setpaper_isbase = false;
    mutable bool qscilexeryaml_readproperties_isbase = false;
    mutable bool qscilexeryaml_writeproperties_isbase = false;
    mutable bool qscilexeryaml_event_isbase = false;
    mutable bool qscilexeryaml_eventfilter_isbase = false;
    mutable bool qscilexeryaml_timerevent_isbase = false;
    mutable bool qscilexeryaml_childevent_isbase = false;
    mutable bool qscilexeryaml_customevent_isbase = false;
    mutable bool qscilexeryaml_connectnotify_isbase = false;
    mutable bool qscilexeryaml_disconnectnotify_isbase = false;
    mutable bool qscilexeryaml_sender_isbase = false;
    mutable bool qscilexeryaml_sendersignalindex_isbase = false;
    mutable bool qscilexeryaml_receivers_isbase = false;
    mutable bool qscilexeryaml_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerYAML() : QsciLexerYAML(){};
    VirtualQsciLexerYAML(QObject* parent) : QsciLexerYAML(parent){};

    ~VirtualQsciLexerYAML() {
        qscilexeryaml_metacall_callback = nullptr;
        qscilexeryaml_setfoldcomments_callback = nullptr;
        qscilexeryaml_language_callback = nullptr;
        qscilexeryaml_lexer_callback = nullptr;
        qscilexeryaml_lexerid_callback = nullptr;
        qscilexeryaml_autocompletionfillups_callback = nullptr;
        qscilexeryaml_autocompletionwordseparators_callback = nullptr;
        qscilexeryaml_blockend_callback = nullptr;
        qscilexeryaml_blocklookback_callback = nullptr;
        qscilexeryaml_blockstart_callback = nullptr;
        qscilexeryaml_blockstartkeyword_callback = nullptr;
        qscilexeryaml_bracestyle_callback = nullptr;
        qscilexeryaml_casesensitive_callback = nullptr;
        qscilexeryaml_color_callback = nullptr;
        qscilexeryaml_eolfill_callback = nullptr;
        qscilexeryaml_font_callback = nullptr;
        qscilexeryaml_indentationguideview_callback = nullptr;
        qscilexeryaml_keywords_callback = nullptr;
        qscilexeryaml_defaultstyle_callback = nullptr;
        qscilexeryaml_description_callback = nullptr;
        qscilexeryaml_paper_callback = nullptr;
        qscilexeryaml_defaultcolorwithstyle_callback = nullptr;
        qscilexeryaml_defaulteolfill_callback = nullptr;
        qscilexeryaml_defaultfontwithstyle_callback = nullptr;
        qscilexeryaml_defaultpaperwithstyle_callback = nullptr;
        qscilexeryaml_seteditor_callback = nullptr;
        qscilexeryaml_refreshproperties_callback = nullptr;
        qscilexeryaml_stylebitsneeded_callback = nullptr;
        qscilexeryaml_wordcharacters_callback = nullptr;
        qscilexeryaml_setautoindentstyle_callback = nullptr;
        qscilexeryaml_setcolor_callback = nullptr;
        qscilexeryaml_seteolfill_callback = nullptr;
        qscilexeryaml_setfont_callback = nullptr;
        qscilexeryaml_setpaper_callback = nullptr;
        qscilexeryaml_readproperties_callback = nullptr;
        qscilexeryaml_writeproperties_callback = nullptr;
        qscilexeryaml_event_callback = nullptr;
        qscilexeryaml_eventfilter_callback = nullptr;
        qscilexeryaml_timerevent_callback = nullptr;
        qscilexeryaml_childevent_callback = nullptr;
        qscilexeryaml_customevent_callback = nullptr;
        qscilexeryaml_connectnotify_callback = nullptr;
        qscilexeryaml_disconnectnotify_callback = nullptr;
        qscilexeryaml_sender_callback = nullptr;
        qscilexeryaml_sendersignalindex_callback = nullptr;
        qscilexeryaml_receivers_callback = nullptr;
        qscilexeryaml_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setQsciLexerYAML_Metacall_Callback(QsciLexerYAML_Metacall_Callback cb) { qscilexeryaml_metacall_callback = cb; }
    inline void setQsciLexerYAML_SetFoldComments_Callback(QsciLexerYAML_SetFoldComments_Callback cb) { qscilexeryaml_setfoldcomments_callback = cb; }
    inline void setQsciLexerYAML_Language_Callback(QsciLexerYAML_Language_Callback cb) { qscilexeryaml_language_callback = cb; }
    inline void setQsciLexerYAML_Lexer_Callback(QsciLexerYAML_Lexer_Callback cb) { qscilexeryaml_lexer_callback = cb; }
    inline void setQsciLexerYAML_LexerId_Callback(QsciLexerYAML_LexerId_Callback cb) { qscilexeryaml_lexerid_callback = cb; }
    inline void setQsciLexerYAML_AutoCompletionFillups_Callback(QsciLexerYAML_AutoCompletionFillups_Callback cb) { qscilexeryaml_autocompletionfillups_callback = cb; }
    inline void setQsciLexerYAML_AutoCompletionWordSeparators_Callback(QsciLexerYAML_AutoCompletionWordSeparators_Callback cb) { qscilexeryaml_autocompletionwordseparators_callback = cb; }
    inline void setQsciLexerYAML_BlockEnd_Callback(QsciLexerYAML_BlockEnd_Callback cb) { qscilexeryaml_blockend_callback = cb; }
    inline void setQsciLexerYAML_BlockLookback_Callback(QsciLexerYAML_BlockLookback_Callback cb) { qscilexeryaml_blocklookback_callback = cb; }
    inline void setQsciLexerYAML_BlockStart_Callback(QsciLexerYAML_BlockStart_Callback cb) { qscilexeryaml_blockstart_callback = cb; }
    inline void setQsciLexerYAML_BlockStartKeyword_Callback(QsciLexerYAML_BlockStartKeyword_Callback cb) { qscilexeryaml_blockstartkeyword_callback = cb; }
    inline void setQsciLexerYAML_BraceStyle_Callback(QsciLexerYAML_BraceStyle_Callback cb) { qscilexeryaml_bracestyle_callback = cb; }
    inline void setQsciLexerYAML_CaseSensitive_Callback(QsciLexerYAML_CaseSensitive_Callback cb) { qscilexeryaml_casesensitive_callback = cb; }
    inline void setQsciLexerYAML_Color_Callback(QsciLexerYAML_Color_Callback cb) { qscilexeryaml_color_callback = cb; }
    inline void setQsciLexerYAML_EolFill_Callback(QsciLexerYAML_EolFill_Callback cb) { qscilexeryaml_eolfill_callback = cb; }
    inline void setQsciLexerYAML_Font_Callback(QsciLexerYAML_Font_Callback cb) { qscilexeryaml_font_callback = cb; }
    inline void setQsciLexerYAML_IndentationGuideView_Callback(QsciLexerYAML_IndentationGuideView_Callback cb) { qscilexeryaml_indentationguideview_callback = cb; }
    inline void setQsciLexerYAML_Keywords_Callback(QsciLexerYAML_Keywords_Callback cb) { qscilexeryaml_keywords_callback = cb; }
    inline void setQsciLexerYAML_DefaultStyle_Callback(QsciLexerYAML_DefaultStyle_Callback cb) { qscilexeryaml_defaultstyle_callback = cb; }
    inline void setQsciLexerYAML_Description_Callback(QsciLexerYAML_Description_Callback cb) { qscilexeryaml_description_callback = cb; }
    inline void setQsciLexerYAML_Paper_Callback(QsciLexerYAML_Paper_Callback cb) { qscilexeryaml_paper_callback = cb; }
    inline void setQsciLexerYAML_DefaultColorWithStyle_Callback(QsciLexerYAML_DefaultColorWithStyle_Callback cb) { qscilexeryaml_defaultcolorwithstyle_callback = cb; }
    inline void setQsciLexerYAML_DefaultEolFill_Callback(QsciLexerYAML_DefaultEolFill_Callback cb) { qscilexeryaml_defaulteolfill_callback = cb; }
    inline void setQsciLexerYAML_DefaultFontWithStyle_Callback(QsciLexerYAML_DefaultFontWithStyle_Callback cb) { qscilexeryaml_defaultfontwithstyle_callback = cb; }
    inline void setQsciLexerYAML_DefaultPaperWithStyle_Callback(QsciLexerYAML_DefaultPaperWithStyle_Callback cb) { qscilexeryaml_defaultpaperwithstyle_callback = cb; }
    inline void setQsciLexerYAML_SetEditor_Callback(QsciLexerYAML_SetEditor_Callback cb) { qscilexeryaml_seteditor_callback = cb; }
    inline void setQsciLexerYAML_RefreshProperties_Callback(QsciLexerYAML_RefreshProperties_Callback cb) { qscilexeryaml_refreshproperties_callback = cb; }
    inline void setQsciLexerYAML_StyleBitsNeeded_Callback(QsciLexerYAML_StyleBitsNeeded_Callback cb) { qscilexeryaml_stylebitsneeded_callback = cb; }
    inline void setQsciLexerYAML_WordCharacters_Callback(QsciLexerYAML_WordCharacters_Callback cb) { qscilexeryaml_wordcharacters_callback = cb; }
    inline void setQsciLexerYAML_SetAutoIndentStyle_Callback(QsciLexerYAML_SetAutoIndentStyle_Callback cb) { qscilexeryaml_setautoindentstyle_callback = cb; }
    inline void setQsciLexerYAML_SetColor_Callback(QsciLexerYAML_SetColor_Callback cb) { qscilexeryaml_setcolor_callback = cb; }
    inline void setQsciLexerYAML_SetEolFill_Callback(QsciLexerYAML_SetEolFill_Callback cb) { qscilexeryaml_seteolfill_callback = cb; }
    inline void setQsciLexerYAML_SetFont_Callback(QsciLexerYAML_SetFont_Callback cb) { qscilexeryaml_setfont_callback = cb; }
    inline void setQsciLexerYAML_SetPaper_Callback(QsciLexerYAML_SetPaper_Callback cb) { qscilexeryaml_setpaper_callback = cb; }
    inline void setQsciLexerYAML_ReadProperties_Callback(QsciLexerYAML_ReadProperties_Callback cb) { qscilexeryaml_readproperties_callback = cb; }
    inline void setQsciLexerYAML_WriteProperties_Callback(QsciLexerYAML_WriteProperties_Callback cb) { qscilexeryaml_writeproperties_callback = cb; }
    inline void setQsciLexerYAML_Event_Callback(QsciLexerYAML_Event_Callback cb) { qscilexeryaml_event_callback = cb; }
    inline void setQsciLexerYAML_EventFilter_Callback(QsciLexerYAML_EventFilter_Callback cb) { qscilexeryaml_eventfilter_callback = cb; }
    inline void setQsciLexerYAML_TimerEvent_Callback(QsciLexerYAML_TimerEvent_Callback cb) { qscilexeryaml_timerevent_callback = cb; }
    inline void setQsciLexerYAML_ChildEvent_Callback(QsciLexerYAML_ChildEvent_Callback cb) { qscilexeryaml_childevent_callback = cb; }
    inline void setQsciLexerYAML_CustomEvent_Callback(QsciLexerYAML_CustomEvent_Callback cb) { qscilexeryaml_customevent_callback = cb; }
    inline void setQsciLexerYAML_ConnectNotify_Callback(QsciLexerYAML_ConnectNotify_Callback cb) { qscilexeryaml_connectnotify_callback = cb; }
    inline void setQsciLexerYAML_DisconnectNotify_Callback(QsciLexerYAML_DisconnectNotify_Callback cb) { qscilexeryaml_disconnectnotify_callback = cb; }
    inline void setQsciLexerYAML_Sender_Callback(QsciLexerYAML_Sender_Callback cb) { qscilexeryaml_sender_callback = cb; }
    inline void setQsciLexerYAML_SenderSignalIndex_Callback(QsciLexerYAML_SenderSignalIndex_Callback cb) { qscilexeryaml_sendersignalindex_callback = cb; }
    inline void setQsciLexerYAML_Receivers_Callback(QsciLexerYAML_Receivers_Callback cb) { qscilexeryaml_receivers_callback = cb; }
    inline void setQsciLexerYAML_IsSignalConnected_Callback(QsciLexerYAML_IsSignalConnected_Callback cb) { qscilexeryaml_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQsciLexerYAML_Metacall_IsBase(bool value) const { qscilexeryaml_metacall_isbase = value; }
    inline void setQsciLexerYAML_SetFoldComments_IsBase(bool value) const { qscilexeryaml_setfoldcomments_isbase = value; }
    inline void setQsciLexerYAML_Language_IsBase(bool value) const { qscilexeryaml_language_isbase = value; }
    inline void setQsciLexerYAML_Lexer_IsBase(bool value) const { qscilexeryaml_lexer_isbase = value; }
    inline void setQsciLexerYAML_LexerId_IsBase(bool value) const { qscilexeryaml_lexerid_isbase = value; }
    inline void setQsciLexerYAML_AutoCompletionFillups_IsBase(bool value) const { qscilexeryaml_autocompletionfillups_isbase = value; }
    inline void setQsciLexerYAML_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexeryaml_autocompletionwordseparators_isbase = value; }
    inline void setQsciLexerYAML_BlockEnd_IsBase(bool value) const { qscilexeryaml_blockend_isbase = value; }
    inline void setQsciLexerYAML_BlockLookback_IsBase(bool value) const { qscilexeryaml_blocklookback_isbase = value; }
    inline void setQsciLexerYAML_BlockStart_IsBase(bool value) const { qscilexeryaml_blockstart_isbase = value; }
    inline void setQsciLexerYAML_BlockStartKeyword_IsBase(bool value) const { qscilexeryaml_blockstartkeyword_isbase = value; }
    inline void setQsciLexerYAML_BraceStyle_IsBase(bool value) const { qscilexeryaml_bracestyle_isbase = value; }
    inline void setQsciLexerYAML_CaseSensitive_IsBase(bool value) const { qscilexeryaml_casesensitive_isbase = value; }
    inline void setQsciLexerYAML_Color_IsBase(bool value) const { qscilexeryaml_color_isbase = value; }
    inline void setQsciLexerYAML_EolFill_IsBase(bool value) const { qscilexeryaml_eolfill_isbase = value; }
    inline void setQsciLexerYAML_Font_IsBase(bool value) const { qscilexeryaml_font_isbase = value; }
    inline void setQsciLexerYAML_IndentationGuideView_IsBase(bool value) const { qscilexeryaml_indentationguideview_isbase = value; }
    inline void setQsciLexerYAML_Keywords_IsBase(bool value) const { qscilexeryaml_keywords_isbase = value; }
    inline void setQsciLexerYAML_DefaultStyle_IsBase(bool value) const { qscilexeryaml_defaultstyle_isbase = value; }
    inline void setQsciLexerYAML_Description_IsBase(bool value) const { qscilexeryaml_description_isbase = value; }
    inline void setQsciLexerYAML_Paper_IsBase(bool value) const { qscilexeryaml_paper_isbase = value; }
    inline void setQsciLexerYAML_DefaultColorWithStyle_IsBase(bool value) const { qscilexeryaml_defaultcolorwithstyle_isbase = value; }
    inline void setQsciLexerYAML_DefaultEolFill_IsBase(bool value) const { qscilexeryaml_defaulteolfill_isbase = value; }
    inline void setQsciLexerYAML_DefaultFontWithStyle_IsBase(bool value) const { qscilexeryaml_defaultfontwithstyle_isbase = value; }
    inline void setQsciLexerYAML_DefaultPaperWithStyle_IsBase(bool value) const { qscilexeryaml_defaultpaperwithstyle_isbase = value; }
    inline void setQsciLexerYAML_SetEditor_IsBase(bool value) const { qscilexeryaml_seteditor_isbase = value; }
    inline void setQsciLexerYAML_RefreshProperties_IsBase(bool value) const { qscilexeryaml_refreshproperties_isbase = value; }
    inline void setQsciLexerYAML_StyleBitsNeeded_IsBase(bool value) const { qscilexeryaml_stylebitsneeded_isbase = value; }
    inline void setQsciLexerYAML_WordCharacters_IsBase(bool value) const { qscilexeryaml_wordcharacters_isbase = value; }
    inline void setQsciLexerYAML_SetAutoIndentStyle_IsBase(bool value) const { qscilexeryaml_setautoindentstyle_isbase = value; }
    inline void setQsciLexerYAML_SetColor_IsBase(bool value) const { qscilexeryaml_setcolor_isbase = value; }
    inline void setQsciLexerYAML_SetEolFill_IsBase(bool value) const { qscilexeryaml_seteolfill_isbase = value; }
    inline void setQsciLexerYAML_SetFont_IsBase(bool value) const { qscilexeryaml_setfont_isbase = value; }
    inline void setQsciLexerYAML_SetPaper_IsBase(bool value) const { qscilexeryaml_setpaper_isbase = value; }
    inline void setQsciLexerYAML_ReadProperties_IsBase(bool value) const { qscilexeryaml_readproperties_isbase = value; }
    inline void setQsciLexerYAML_WriteProperties_IsBase(bool value) const { qscilexeryaml_writeproperties_isbase = value; }
    inline void setQsciLexerYAML_Event_IsBase(bool value) const { qscilexeryaml_event_isbase = value; }
    inline void setQsciLexerYAML_EventFilter_IsBase(bool value) const { qscilexeryaml_eventfilter_isbase = value; }
    inline void setQsciLexerYAML_TimerEvent_IsBase(bool value) const { qscilexeryaml_timerevent_isbase = value; }
    inline void setQsciLexerYAML_ChildEvent_IsBase(bool value) const { qscilexeryaml_childevent_isbase = value; }
    inline void setQsciLexerYAML_CustomEvent_IsBase(bool value) const { qscilexeryaml_customevent_isbase = value; }
    inline void setQsciLexerYAML_ConnectNotify_IsBase(bool value) const { qscilexeryaml_connectnotify_isbase = value; }
    inline void setQsciLexerYAML_DisconnectNotify_IsBase(bool value) const { qscilexeryaml_disconnectnotify_isbase = value; }
    inline void setQsciLexerYAML_Sender_IsBase(bool value) const { qscilexeryaml_sender_isbase = value; }
    inline void setQsciLexerYAML_SenderSignalIndex_IsBase(bool value) const { qscilexeryaml_sendersignalindex_isbase = value; }
    inline void setQsciLexerYAML_Receivers_IsBase(bool value) const { qscilexeryaml_receivers_isbase = value; }
    inline void setQsciLexerYAML_IsSignalConnected_IsBase(bool value) const { qscilexeryaml_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeryaml_metacall_isbase) {
            qscilexeryaml_metacall_isbase = false;
            return QsciLexerYAML::qt_metacall(param1, param2, param3);
        } else if (qscilexeryaml_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = qscilexeryaml_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeryaml_setfoldcomments_isbase) {
            qscilexeryaml_setfoldcomments_isbase = false;
            QsciLexerYAML::setFoldComments(fold);
        } else if (qscilexeryaml_setfoldcomments_callback != nullptr) {
            bool cbval1 = fold;

            qscilexeryaml_setfoldcomments_callback(this, cbval1);
        } else {
            QsciLexerYAML::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeryaml_language_callback != nullptr) {
            const char* callback_ret = qscilexeryaml_language_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeryaml_lexer_isbase) {
            qscilexeryaml_lexer_isbase = false;
            return QsciLexerYAML::lexer();
        } else if (qscilexeryaml_lexer_callback != nullptr) {
            const char* callback_ret = qscilexeryaml_lexer_callback();
            return callback_ret;
        } else {
            return QsciLexerYAML::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeryaml_lexerid_isbase) {
            qscilexeryaml_lexerid_isbase = false;
            return QsciLexerYAML::lexerId();
        } else if (qscilexeryaml_lexerid_callback != nullptr) {
            int callback_ret = qscilexeryaml_lexerid_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeryaml_autocompletionfillups_isbase) {
            qscilexeryaml_autocompletionfillups_isbase = false;
            return QsciLexerYAML::autoCompletionFillups();
        } else if (qscilexeryaml_autocompletionfillups_callback != nullptr) {
            const char* callback_ret = qscilexeryaml_autocompletionfillups_callback();
            return callback_ret;
        } else {
            return QsciLexerYAML::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexeryaml_autocompletionwordseparators_isbase) {
            qscilexeryaml_autocompletionwordseparators_isbase = false;
            return QsciLexerYAML::autoCompletionWordSeparators();
        } else if (qscilexeryaml_autocompletionwordseparators_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qscilexeryaml_autocompletionwordseparators_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QsciLexerYAML::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeryaml_blockend_isbase) {
            qscilexeryaml_blockend_isbase = false;
            return QsciLexerYAML::blockEnd(style);
        } else if (qscilexeryaml_blockend_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeryaml_blockend_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeryaml_blocklookback_isbase) {
            qscilexeryaml_blocklookback_isbase = false;
            return QsciLexerYAML::blockLookback();
        } else if (qscilexeryaml_blocklookback_callback != nullptr) {
            int callback_ret = qscilexeryaml_blocklookback_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeryaml_blockstart_isbase) {
            qscilexeryaml_blockstart_isbase = false;
            return QsciLexerYAML::blockStart(style);
        } else if (qscilexeryaml_blockstart_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeryaml_blockstart_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeryaml_blockstartkeyword_isbase) {
            qscilexeryaml_blockstartkeyword_isbase = false;
            return QsciLexerYAML::blockStartKeyword(style);
        } else if (qscilexeryaml_blockstartkeyword_callback != nullptr) {
            int* cbval1 = style;

            const char* callback_ret = qscilexeryaml_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeryaml_bracestyle_isbase) {
            qscilexeryaml_bracestyle_isbase = false;
            return QsciLexerYAML::braceStyle();
        } else if (qscilexeryaml_bracestyle_callback != nullptr) {
            int callback_ret = qscilexeryaml_bracestyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeryaml_casesensitive_isbase) {
            qscilexeryaml_casesensitive_isbase = false;
            return QsciLexerYAML::caseSensitive();
        } else if (qscilexeryaml_casesensitive_callback != nullptr) {
            bool callback_ret = qscilexeryaml_casesensitive_callback();
            return callback_ret;
        } else {
            return QsciLexerYAML::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeryaml_color_isbase) {
            qscilexeryaml_color_isbase = false;
            return QsciLexerYAML::color(style);
        } else if (qscilexeryaml_color_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeryaml_color_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeryaml_eolfill_isbase) {
            qscilexeryaml_eolfill_isbase = false;
            return QsciLexerYAML::eolFill(style);
        } else if (qscilexeryaml_eolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeryaml_eolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeryaml_font_isbase) {
            qscilexeryaml_font_isbase = false;
            return QsciLexerYAML::font(style);
        } else if (qscilexeryaml_font_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeryaml_font_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeryaml_indentationguideview_isbase) {
            qscilexeryaml_indentationguideview_isbase = false;
            return QsciLexerYAML::indentationGuideView();
        } else if (qscilexeryaml_indentationguideview_callback != nullptr) {
            int callback_ret = qscilexeryaml_indentationguideview_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeryaml_keywords_isbase) {
            qscilexeryaml_keywords_isbase = false;
            return QsciLexerYAML::keywords(set);
        } else if (qscilexeryaml_keywords_callback != nullptr) {
            int cbval1 = set;

            const char* callback_ret = qscilexeryaml_keywords_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeryaml_defaultstyle_isbase) {
            qscilexeryaml_defaultstyle_isbase = false;
            return QsciLexerYAML::defaultStyle();
        } else if (qscilexeryaml_defaultstyle_callback != nullptr) {
            int callback_ret = qscilexeryaml_defaultstyle_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeryaml_description_callback != nullptr) {
            int cbval1 = style;

            libqt_string callback_ret = qscilexeryaml_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeryaml_paper_isbase) {
            qscilexeryaml_paper_isbase = false;
            return QsciLexerYAML::paper(style);
        } else if (qscilexeryaml_paper_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeryaml_paper_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeryaml_defaultcolorwithstyle_isbase) {
            qscilexeryaml_defaultcolorwithstyle_isbase = false;
            return QsciLexerYAML::defaultColor(style);
        } else if (qscilexeryaml_defaultcolorwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeryaml_defaultcolorwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeryaml_defaulteolfill_isbase) {
            qscilexeryaml_defaulteolfill_isbase = false;
            return QsciLexerYAML::defaultEolFill(style);
        } else if (qscilexeryaml_defaulteolfill_callback != nullptr) {
            int cbval1 = style;

            bool callback_ret = qscilexeryaml_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeryaml_defaultfontwithstyle_isbase) {
            qscilexeryaml_defaultfontwithstyle_isbase = false;
            return QsciLexerYAML::defaultFont(style);
        } else if (qscilexeryaml_defaultfontwithstyle_callback != nullptr) {
            int cbval1 = style;

            QFont* callback_ret = qscilexeryaml_defaultfontwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeryaml_defaultpaperwithstyle_isbase) {
            qscilexeryaml_defaultpaperwithstyle_isbase = false;
            return QsciLexerYAML::defaultPaper(style);
        } else if (qscilexeryaml_defaultpaperwithstyle_callback != nullptr) {
            int cbval1 = style;

            QColor* callback_ret = qscilexeryaml_defaultpaperwithstyle_callback(this, cbval1);
            return *callback_ret;
        } else {
            return QsciLexerYAML::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeryaml_seteditor_isbase) {
            qscilexeryaml_seteditor_isbase = false;
            QsciLexerYAML::setEditor(editor);
        } else if (qscilexeryaml_seteditor_callback != nullptr) {
            QsciScintilla* cbval1 = editor;

            qscilexeryaml_seteditor_callback(this, cbval1);
        } else {
            QsciLexerYAML::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeryaml_refreshproperties_isbase) {
            qscilexeryaml_refreshproperties_isbase = false;
            QsciLexerYAML::refreshProperties();
        } else if (qscilexeryaml_refreshproperties_callback != nullptr) {
            qscilexeryaml_refreshproperties_callback();
        } else {
            QsciLexerYAML::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeryaml_stylebitsneeded_isbase) {
            qscilexeryaml_stylebitsneeded_isbase = false;
            return QsciLexerYAML::styleBitsNeeded();
        } else if (qscilexeryaml_stylebitsneeded_callback != nullptr) {
            int callback_ret = qscilexeryaml_stylebitsneeded_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeryaml_wordcharacters_isbase) {
            qscilexeryaml_wordcharacters_isbase = false;
            return QsciLexerYAML::wordCharacters();
        } else if (qscilexeryaml_wordcharacters_callback != nullptr) {
            const char* callback_ret = qscilexeryaml_wordcharacters_callback();
            return callback_ret;
        } else {
            return QsciLexerYAML::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeryaml_setautoindentstyle_isbase) {
            qscilexeryaml_setautoindentstyle_isbase = false;
            QsciLexerYAML::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexeryaml_setautoindentstyle_callback != nullptr) {
            int cbval1 = autoindentstyle;

            qscilexeryaml_setautoindentstyle_callback(this, cbval1);
        } else {
            QsciLexerYAML::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeryaml_setcolor_isbase) {
            qscilexeryaml_setcolor_isbase = false;
            QsciLexerYAML::setColor(c, style);
        } else if (qscilexeryaml_setcolor_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeryaml_setcolor_callback(this, cbval1, cbval2);
        } else {
            QsciLexerYAML::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeryaml_seteolfill_isbase) {
            qscilexeryaml_seteolfill_isbase = false;
            QsciLexerYAML::setEolFill(eoffill, style);
        } else if (qscilexeryaml_seteolfill_callback != nullptr) {
            bool cbval1 = eoffill;
            int cbval2 = style;

            qscilexeryaml_seteolfill_callback(this, cbval1, cbval2);
        } else {
            QsciLexerYAML::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeryaml_setfont_isbase) {
            qscilexeryaml_setfont_isbase = false;
            QsciLexerYAML::setFont(f, style);
        } else if (qscilexeryaml_setfont_callback != nullptr) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;

            qscilexeryaml_setfont_callback(this, cbval1, cbval2);
        } else {
            QsciLexerYAML::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeryaml_setpaper_isbase) {
            qscilexeryaml_setpaper_isbase = false;
            QsciLexerYAML::setPaper(c, style);
        } else if (qscilexeryaml_setpaper_callback != nullptr) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;

            qscilexeryaml_setpaper_callback(this, cbval1, cbval2);
        } else {
            QsciLexerYAML::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeryaml_readproperties_isbase) {
            qscilexeryaml_readproperties_isbase = false;
            return QsciLexerYAML::readProperties(qs, prefix);
        } else if (qscilexeryaml_readproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy(prefix_str.data, prefix_b.data(), prefix_str.len);
            prefix_str.data[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexeryaml_readproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerYAML::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeryaml_writeproperties_isbase) {
            qscilexeryaml_writeproperties_isbase = false;
            return QsciLexerYAML::writeProperties(qs, prefix);
        } else if (qscilexeryaml_writeproperties_callback != nullptr) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const QString prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            libqt_string prefix_str;
            prefix_str.len = prefix_b.length();
            prefix_str.data = static_cast<char*>(malloc((prefix_str.len + 1) * sizeof(char)));
            memcpy(prefix_str.data, prefix_b.data(), prefix_str.len);
            prefix_str.data[prefix_str.len] = '\0';
            libqt_string cbval2 = prefix_str;

            bool callback_ret = qscilexeryaml_writeproperties_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerYAML::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeryaml_event_isbase) {
            qscilexeryaml_event_isbase = false;
            return QsciLexerYAML::event(event);
        } else if (qscilexeryaml_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = qscilexeryaml_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeryaml_eventfilter_isbase) {
            qscilexeryaml_eventfilter_isbase = false;
            return QsciLexerYAML::eventFilter(watched, event);
        } else if (qscilexeryaml_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = qscilexeryaml_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QsciLexerYAML::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeryaml_timerevent_isbase) {
            qscilexeryaml_timerevent_isbase = false;
            QsciLexerYAML::timerEvent(event);
        } else if (qscilexeryaml_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            qscilexeryaml_timerevent_callback(this, cbval1);
        } else {
            QsciLexerYAML::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeryaml_childevent_isbase) {
            qscilexeryaml_childevent_isbase = false;
            QsciLexerYAML::childEvent(event);
        } else if (qscilexeryaml_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            qscilexeryaml_childevent_callback(this, cbval1);
        } else {
            QsciLexerYAML::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeryaml_customevent_isbase) {
            qscilexeryaml_customevent_isbase = false;
            QsciLexerYAML::customEvent(event);
        } else if (qscilexeryaml_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            qscilexeryaml_customevent_callback(this, cbval1);
        } else {
            QsciLexerYAML::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeryaml_connectnotify_isbase) {
            qscilexeryaml_connectnotify_isbase = false;
            QsciLexerYAML::connectNotify(signal);
        } else if (qscilexeryaml_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeryaml_connectnotify_callback(this, cbval1);
        } else {
            QsciLexerYAML::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeryaml_disconnectnotify_isbase) {
            qscilexeryaml_disconnectnotify_isbase = false;
            QsciLexerYAML::disconnectNotify(signal);
        } else if (qscilexeryaml_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            qscilexeryaml_disconnectnotify_callback(this, cbval1);
        } else {
            QsciLexerYAML::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexeryaml_sender_isbase) {
            qscilexeryaml_sender_isbase = false;
            return QsciLexerYAML::sender();
        } else if (qscilexeryaml_sender_callback != nullptr) {
            QObject* callback_ret = qscilexeryaml_sender_callback();
            return callback_ret;
        } else {
            return QsciLexerYAML::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexeryaml_sendersignalindex_isbase) {
            qscilexeryaml_sendersignalindex_isbase = false;
            return QsciLexerYAML::senderSignalIndex();
        } else if (qscilexeryaml_sendersignalindex_callback != nullptr) {
            int callback_ret = qscilexeryaml_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexeryaml_receivers_isbase) {
            qscilexeryaml_receivers_isbase = false;
            return QsciLexerYAML::receivers(signal);
        } else if (qscilexeryaml_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = qscilexeryaml_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QsciLexerYAML::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexeryaml_issignalconnected_isbase) {
            qscilexeryaml_issignalconnected_isbase = false;
            return QsciLexerYAML::isSignalConnected(signal);
        } else if (qscilexeryaml_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = qscilexeryaml_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return QsciLexerYAML::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend bool QsciLexerYAML_ReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerYAML_QBaseReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerYAML_WriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerYAML_QBaseWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerYAML_TimerEvent(QsciLexerYAML* self, QTimerEvent* event);
    friend void QsciLexerYAML_QBaseTimerEvent(QsciLexerYAML* self, QTimerEvent* event);
    friend void QsciLexerYAML_ChildEvent(QsciLexerYAML* self, QChildEvent* event);
    friend void QsciLexerYAML_QBaseChildEvent(QsciLexerYAML* self, QChildEvent* event);
    friend void QsciLexerYAML_CustomEvent(QsciLexerYAML* self, QEvent* event);
    friend void QsciLexerYAML_QBaseCustomEvent(QsciLexerYAML* self, QEvent* event);
    friend void QsciLexerYAML_ConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
    friend void QsciLexerYAML_QBaseConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
    friend void QsciLexerYAML_DisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
    friend void QsciLexerYAML_QBaseDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
    friend QObject* QsciLexerYAML_Sender(const QsciLexerYAML* self);
    friend QObject* QsciLexerYAML_QBaseSender(const QsciLexerYAML* self);
    friend int QsciLexerYAML_SenderSignalIndex(const QsciLexerYAML* self);
    friend int QsciLexerYAML_QBaseSenderSignalIndex(const QsciLexerYAML* self);
    friend int QsciLexerYAML_Receivers(const QsciLexerYAML* self, const char* signal);
    friend int QsciLexerYAML_QBaseReceivers(const QsciLexerYAML* self, const char* signal);
    friend bool QsciLexerYAML_IsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
    friend bool QsciLexerYAML_QBaseIsSignalConnected(const QsciLexerYAML* self, const QMetaMethod* signal);
};

#endif
