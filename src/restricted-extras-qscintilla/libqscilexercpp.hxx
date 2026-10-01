#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCPP_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCPP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCPP
class VirtualQsciLexerCPP final : public QsciLexerCPP {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCPP_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCPP*);
    using QsciLexerCPP_Metacast_Callback = void* (*)(QsciLexerCPP*, const char*);
    using QsciLexerCPP_Metacall_Callback = int (*)(QsciLexerCPP*, int, int, void**);
    using QsciLexerCPP_SetFoldAtElse_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldComments_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldCompact_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldPreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetStylePreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_Language_Callback = const char* (*)(const QsciLexerCPP*);
    using QsciLexerCPP_Lexer_Callback = const char* (*)(const QsciLexerCPP*);
    using QsciLexerCPP_LexerId_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCPP*);
    using QsciLexerCPP_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCPP*);
    using QsciLexerCPP_BlockEnd_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockLookback_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_BlockStart_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BraceStyle_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_CaseSensitive_Callback = bool (*)(const QsciLexerCPP*);
    using QsciLexerCPP_Color_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_EolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Font_Callback = QFont* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_IndentationGuideView_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_Keywords_Callback = const char* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultStyle_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_Description_Callback = const char* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Paper_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultColor2_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultEolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultFont2_Callback = QFont* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_SetEditor_Callback = void (*)(QsciLexerCPP*, QsciScintilla*);
    using QsciLexerCPP_RefreshProperties_Callback = void (*)(QsciLexerCPP*);
    using QsciLexerCPP_StyleBitsNeeded_Callback = int (*)(const QsciLexerCPP*);
    using QsciLexerCPP_WordCharacters_Callback = const char* (*)(const QsciLexerCPP*);
    using QsciLexerCPP_SetAutoIndentStyle_Callback = void (*)(QsciLexerCPP*, int);
    using QsciLexerCPP_SetColor_Callback = void (*)(QsciLexerCPP*, QColor*, int);
    using QsciLexerCPP_SetEolFill_Callback = void (*)(QsciLexerCPP*, bool, int);
    using QsciLexerCPP_SetFont_Callback = void (*)(QsciLexerCPP*, QFont*, int);
    using QsciLexerCPP_SetPaper_Callback = void (*)(QsciLexerCPP*, QColor*, int);
    using QsciLexerCPP_ReadProperties_Callback = bool (*)(QsciLexerCPP*, QSettings*, const char*);
    using QsciLexerCPP_WriteProperties_Callback = bool (*)(const QsciLexerCPP*, QSettings*, const char*);
    using QsciLexerCPP_Event_Callback = bool (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_EventFilter_Callback = bool (*)(QsciLexerCPP*, QObject*, QEvent*);
    using QsciLexerCPP_TimerEvent_Callback = void (*)(QsciLexerCPP*, QTimerEvent*);
    using QsciLexerCPP_ChildEvent_Callback = void (*)(QsciLexerCPP*, QChildEvent*);
    using QsciLexerCPP_CustomEvent_Callback = void (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_ConnectNotify_Callback = void (*)(QsciLexerCPP*, QMetaMethod*);
    using QsciLexerCPP_DisconnectNotify_Callback = void (*)(QsciLexerCPP*, QMetaMethod*);
    using QsciLexerCPP::bytesAsText;
    using QsciLexerCPP::isSignalConnected;
    using QsciLexerCPP::receivers;
    using QsciLexerCPP::sender;
    using QsciLexerCPP::senderSignalIndex;
    using QsciLexerCPP::textAsBytes;

    // Instance callback storage
    QsciLexerCPP_MetaObject_Callback qscilexercpp_metaobject_callback = nullptr;
    QsciLexerCPP_Metacast_Callback qscilexercpp_metacast_callback = nullptr;
    QsciLexerCPP_Metacall_Callback qscilexercpp_metacall_callback = nullptr;
    QsciLexerCPP_SetFoldAtElse_Callback qscilexercpp_setfoldatelse_callback = nullptr;
    QsciLexerCPP_SetFoldComments_Callback qscilexercpp_setfoldcomments_callback = nullptr;
    QsciLexerCPP_SetFoldCompact_Callback qscilexercpp_setfoldcompact_callback = nullptr;
    QsciLexerCPP_SetFoldPreprocessor_Callback qscilexercpp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCPP_SetStylePreprocessor_Callback qscilexercpp_setstylepreprocessor_callback = nullptr;
    QsciLexerCPP_Language_Callback qscilexercpp_language_callback = nullptr;
    QsciLexerCPP_Lexer_Callback qscilexercpp_lexer_callback = nullptr;
    QsciLexerCPP_LexerId_Callback qscilexercpp_lexerid_callback = nullptr;
    QsciLexerCPP_AutoCompletionFillups_Callback qscilexercpp_autocompletionfillups_callback = nullptr;
    QsciLexerCPP_AutoCompletionWordSeparators_Callback qscilexercpp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCPP_BlockEnd_Callback qscilexercpp_blockend_callback = nullptr;
    QsciLexerCPP_BlockLookback_Callback qscilexercpp_blocklookback_callback = nullptr;
    QsciLexerCPP_BlockStart_Callback qscilexercpp_blockstart_callback = nullptr;
    QsciLexerCPP_BlockStartKeyword_Callback qscilexercpp_blockstartkeyword_callback = nullptr;
    QsciLexerCPP_BraceStyle_Callback qscilexercpp_bracestyle_callback = nullptr;
    QsciLexerCPP_CaseSensitive_Callback qscilexercpp_casesensitive_callback = nullptr;
    QsciLexerCPP_Color_Callback qscilexercpp_color_callback = nullptr;
    QsciLexerCPP_EolFill_Callback qscilexercpp_eolfill_callback = nullptr;
    QsciLexerCPP_Font_Callback qscilexercpp_font_callback = nullptr;
    QsciLexerCPP_IndentationGuideView_Callback qscilexercpp_indentationguideview_callback = nullptr;
    QsciLexerCPP_Keywords_Callback qscilexercpp_keywords_callback = nullptr;
    QsciLexerCPP_DefaultStyle_Callback qscilexercpp_defaultstyle_callback = nullptr;
    QsciLexerCPP_Description_Callback qscilexercpp_description_callback = nullptr;
    QsciLexerCPP_Paper_Callback qscilexercpp_paper_callback = nullptr;
    QsciLexerCPP_DefaultColor2_Callback qscilexercpp_defaultcolor2_callback = nullptr;
    QsciLexerCPP_DefaultEolFill_Callback qscilexercpp_defaulteolfill_callback = nullptr;
    QsciLexerCPP_DefaultFont2_Callback qscilexercpp_defaultfont2_callback = nullptr;
    QsciLexerCPP_DefaultPaper2_Callback qscilexercpp_defaultpaper2_callback = nullptr;
    QsciLexerCPP_SetEditor_Callback qscilexercpp_seteditor_callback = nullptr;
    QsciLexerCPP_RefreshProperties_Callback qscilexercpp_refreshproperties_callback = nullptr;
    QsciLexerCPP_StyleBitsNeeded_Callback qscilexercpp_stylebitsneeded_callback = nullptr;
    QsciLexerCPP_WordCharacters_Callback qscilexercpp_wordcharacters_callback = nullptr;
    QsciLexerCPP_SetAutoIndentStyle_Callback qscilexercpp_setautoindentstyle_callback = nullptr;
    QsciLexerCPP_SetColor_Callback qscilexercpp_setcolor_callback = nullptr;
    QsciLexerCPP_SetEolFill_Callback qscilexercpp_seteolfill_callback = nullptr;
    QsciLexerCPP_SetFont_Callback qscilexercpp_setfont_callback = nullptr;
    QsciLexerCPP_SetPaper_Callback qscilexercpp_setpaper_callback = nullptr;
    QsciLexerCPP_ReadProperties_Callback qscilexercpp_readproperties_callback = nullptr;
    QsciLexerCPP_WriteProperties_Callback qscilexercpp_writeproperties_callback = nullptr;
    QsciLexerCPP_Event_Callback qscilexercpp_event_callback = nullptr;
    QsciLexerCPP_EventFilter_Callback qscilexercpp_eventfilter_callback = nullptr;
    QsciLexerCPP_TimerEvent_Callback qscilexercpp_timerevent_callback = nullptr;
    QsciLexerCPP_ChildEvent_Callback qscilexercpp_childevent_callback = nullptr;
    QsciLexerCPP_CustomEvent_Callback qscilexercpp_customevent_callback = nullptr;
    QsciLexerCPP_ConnectNotify_Callback qscilexercpp_connectnotify_callback = nullptr;
    QsciLexerCPP_DisconnectNotify_Callback qscilexercpp_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCPP {
        using QsciLexerCPP::childEvent;
        using QsciLexerCPP::connectNotify;
        using QsciLexerCPP::customEvent;
        using QsciLexerCPP::disconnectNotify;
        using QsciLexerCPP::readProperties;
        using QsciLexerCPP::timerEvent;
        using QsciLexerCPP::writeProperties;
    };

    VirtualQsciLexerCPP() : QsciLexerCPP() {};
    VirtualQsciLexerCPP(QObject* parent) : QsciLexerCPP(parent) {};
    VirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords) : QsciLexerCPP(parent, caseInsensitiveKeywords) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercpp_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercpp_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCPP::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercpp_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercpp_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercpp_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercpp_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercpp_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexercpp_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercpp_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexercpp_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercpp_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexercpp_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercpp_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexercpp_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercpp_setstylepreprocessor_callback) {
            bool cbval1 = style;
            qscilexercpp_setstylepreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercpp_language_callback) {
            const char* callback_ret = qscilexercpp_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCPP::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercpp_lexer_callback) {
            const char* callback_ret = qscilexercpp_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCPP::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercpp_lexerid_callback) {
            int callback_ret = qscilexercpp_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercpp_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercpp_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCPP::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercpp_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercpp_autocompletionwordseparators_callback(this);
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
        return QsciLexerCPP::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercpp_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercpp_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercpp_blocklookback_callback) {
            int callback_ret = qscilexercpp_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercpp_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercpp_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercpp_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercpp_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercpp_bracestyle_callback) {
            int callback_ret = qscilexercpp_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercpp_casesensitive_callback) {
            bool callback_ret = qscilexercpp_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCPP::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercpp_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercpp_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercpp_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercpp_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercpp_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercpp_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercpp_indentationguideview_callback) {
            int callback_ret = qscilexercpp_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercpp_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercpp_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercpp_defaultstyle_callback) {
            int callback_ret = qscilexercpp_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercpp_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercpp_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCPP::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercpp_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercpp_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercpp_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercpp_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercpp_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercpp_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercpp_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercpp_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercpp_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercpp_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCPP::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercpp_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercpp_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercpp_refreshproperties_callback) {
            qscilexercpp_refreshproperties_callback(this);
            return;
        }
        QsciLexerCPP::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercpp_stylebitsneeded_callback) {
            int callback_ret = qscilexercpp_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCPP::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercpp_wordcharacters_callback) {
            const char* callback_ret = qscilexercpp_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCPP::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercpp_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercpp_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercpp_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercpp_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercpp_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercpp_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercpp_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercpp_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercpp_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercpp_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCPP::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercpp_readproperties_callback) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const auto prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;
            bool callback_ret = qscilexercpp_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCPP::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercpp_writeproperties_callback) {
            QSettings& qs_ret = qs;
            // Cast returned reference into pointer
            QSettings* cbval1 = &qs_ret;
            const auto prefix_ret = prefix;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prefix_b = prefix_ret.toUtf8();
            auto prefix_str_len = prefix_b.length();
            const char* prefix_str = static_cast<const char*>(malloc(prefix_str_len + 1));
            memcpy((void*)prefix_str, prefix_b.data(), prefix_str_len);
            ((char*)prefix_str)[prefix_str_len] = '\0';
            const char* cbval2 = prefix_str;
            bool callback_ret = qscilexercpp_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCPP::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercpp_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercpp_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCPP::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercpp_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercpp_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCPP::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercpp_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercpp_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercpp_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercpp_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercpp_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercpp_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercpp_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercpp_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCPP::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCPP_SuperReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCPP_SuperWriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCPP_SuperTimerEvent(QsciLexerCPP* self, QTimerEvent* event);
    friend void QsciLexerCPP_SuperChildEvent(QsciLexerCPP* self, QChildEvent* event);
    friend void QsciLexerCPP_SuperCustomEvent(QsciLexerCPP* self, QEvent* event);
    friend void QsciLexerCPP_SuperConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
    friend void QsciLexerCPP_SuperDisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal);
};

#endif
