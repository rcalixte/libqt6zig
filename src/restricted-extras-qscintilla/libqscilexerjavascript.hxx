#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVASCRIPT_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVASCRIPT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJavaScript
class VirtualQsciLexerJavaScript final : public QsciLexerJavaScript {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerJavaScript_MetaObject_Callback = QMetaObject* (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_Metacast_Callback = void* (*)(QsciLexerJavaScript*, const char*);
    using QsciLexerJavaScript_Metacall_Callback = int (*)(QsciLexerJavaScript*, int, int, void**);
    using QsciLexerJavaScript_SetFoldAtElse_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldComments_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldCompact_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetFoldPreprocessor_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_SetStylePreprocessor_Callback = void (*)(QsciLexerJavaScript*, bool);
    using QsciLexerJavaScript_Language_Callback = const char* (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_Lexer_Callback = const char* (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_LexerId_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_BlockEnd_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BlockLookback_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_BlockStart_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJavaScript*, int*);
    using QsciLexerJavaScript_BraceStyle_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_CaseSensitive_Callback = bool (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_Color_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_EolFill_Callback = bool (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_Font_Callback = QFont* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_IndentationGuideView_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_Keywords_Callback = const char* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultStyle_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_Description_Callback = const char* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_Paper_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultEolFill_Callback = bool (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_SetEditor_Callback = void (*)(QsciLexerJavaScript*, QsciScintilla*);
    using QsciLexerJavaScript_RefreshProperties_Callback = void (*)(QsciLexerJavaScript*);
    using QsciLexerJavaScript_StyleBitsNeeded_Callback = int (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_WordCharacters_Callback = const char* (*)(const QsciLexerJavaScript*);
    using QsciLexerJavaScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerJavaScript*, int);
    using QsciLexerJavaScript_SetColor_Callback = void (*)(QsciLexerJavaScript*, QColor*, int);
    using QsciLexerJavaScript_SetEolFill_Callback = void (*)(QsciLexerJavaScript*, bool, int);
    using QsciLexerJavaScript_SetFont_Callback = void (*)(QsciLexerJavaScript*, QFont*, int);
    using QsciLexerJavaScript_SetPaper_Callback = void (*)(QsciLexerJavaScript*, QColor*, int);
    using QsciLexerJavaScript_ReadProperties_Callback = bool (*)(QsciLexerJavaScript*, QSettings*, const char*);
    using QsciLexerJavaScript_WriteProperties_Callback = bool (*)(const QsciLexerJavaScript*, QSettings*, const char*);
    using QsciLexerJavaScript_Event_Callback = bool (*)(QsciLexerJavaScript*, QEvent*);
    using QsciLexerJavaScript_EventFilter_Callback = bool (*)(QsciLexerJavaScript*, QObject*, QEvent*);
    using QsciLexerJavaScript_TimerEvent_Callback = void (*)(QsciLexerJavaScript*, QTimerEvent*);
    using QsciLexerJavaScript_ChildEvent_Callback = void (*)(QsciLexerJavaScript*, QChildEvent*);
    using QsciLexerJavaScript_CustomEvent_Callback = void (*)(QsciLexerJavaScript*, QEvent*);
    using QsciLexerJavaScript_ConnectNotify_Callback = void (*)(QsciLexerJavaScript*, QMetaMethod*);
    using QsciLexerJavaScript_DisconnectNotify_Callback = void (*)(QsciLexerJavaScript*, QMetaMethod*);
    using QsciLexerJavaScript::bytesAsText;
    using QsciLexerJavaScript::isSignalConnected;
    using QsciLexerJavaScript::receivers;
    using QsciLexerJavaScript::sender;
    using QsciLexerJavaScript::senderSignalIndex;
    using QsciLexerJavaScript::textAsBytes;

    // Instance callback storage
    QsciLexerJavaScript_MetaObject_Callback qscilexerjavascript_metaobject_callback = nullptr;
    QsciLexerJavaScript_Metacast_Callback qscilexerjavascript_metacast_callback = nullptr;
    QsciLexerJavaScript_Metacall_Callback qscilexerjavascript_metacall_callback = nullptr;
    QsciLexerJavaScript_SetFoldAtElse_Callback qscilexerjavascript_setfoldatelse_callback = nullptr;
    QsciLexerJavaScript_SetFoldComments_Callback qscilexerjavascript_setfoldcomments_callback = nullptr;
    QsciLexerJavaScript_SetFoldCompact_Callback qscilexerjavascript_setfoldcompact_callback = nullptr;
    QsciLexerJavaScript_SetFoldPreprocessor_Callback qscilexerjavascript_setfoldpreprocessor_callback = nullptr;
    QsciLexerJavaScript_SetStylePreprocessor_Callback qscilexerjavascript_setstylepreprocessor_callback = nullptr;
    QsciLexerJavaScript_Language_Callback qscilexerjavascript_language_callback = nullptr;
    QsciLexerJavaScript_Lexer_Callback qscilexerjavascript_lexer_callback = nullptr;
    QsciLexerJavaScript_LexerId_Callback qscilexerjavascript_lexerid_callback = nullptr;
    QsciLexerJavaScript_AutoCompletionFillups_Callback qscilexerjavascript_autocompletionfillups_callback = nullptr;
    QsciLexerJavaScript_AutoCompletionWordSeparators_Callback qscilexerjavascript_autocompletionwordseparators_callback = nullptr;
    QsciLexerJavaScript_BlockEnd_Callback qscilexerjavascript_blockend_callback = nullptr;
    QsciLexerJavaScript_BlockLookback_Callback qscilexerjavascript_blocklookback_callback = nullptr;
    QsciLexerJavaScript_BlockStart_Callback qscilexerjavascript_blockstart_callback = nullptr;
    QsciLexerJavaScript_BlockStartKeyword_Callback qscilexerjavascript_blockstartkeyword_callback = nullptr;
    QsciLexerJavaScript_BraceStyle_Callback qscilexerjavascript_bracestyle_callback = nullptr;
    QsciLexerJavaScript_CaseSensitive_Callback qscilexerjavascript_casesensitive_callback = nullptr;
    QsciLexerJavaScript_Color_Callback qscilexerjavascript_color_callback = nullptr;
    QsciLexerJavaScript_EolFill_Callback qscilexerjavascript_eolfill_callback = nullptr;
    QsciLexerJavaScript_Font_Callback qscilexerjavascript_font_callback = nullptr;
    QsciLexerJavaScript_IndentationGuideView_Callback qscilexerjavascript_indentationguideview_callback = nullptr;
    QsciLexerJavaScript_Keywords_Callback qscilexerjavascript_keywords_callback = nullptr;
    QsciLexerJavaScript_DefaultStyle_Callback qscilexerjavascript_defaultstyle_callback = nullptr;
    QsciLexerJavaScript_Description_Callback qscilexerjavascript_description_callback = nullptr;
    QsciLexerJavaScript_Paper_Callback qscilexerjavascript_paper_callback = nullptr;
    QsciLexerJavaScript_DefaultColor2_Callback qscilexerjavascript_defaultcolor2_callback = nullptr;
    QsciLexerJavaScript_DefaultEolFill_Callback qscilexerjavascript_defaulteolfill_callback = nullptr;
    QsciLexerJavaScript_DefaultFont2_Callback qscilexerjavascript_defaultfont2_callback = nullptr;
    QsciLexerJavaScript_DefaultPaper2_Callback qscilexerjavascript_defaultpaper2_callback = nullptr;
    QsciLexerJavaScript_SetEditor_Callback qscilexerjavascript_seteditor_callback = nullptr;
    QsciLexerJavaScript_RefreshProperties_Callback qscilexerjavascript_refreshproperties_callback = nullptr;
    QsciLexerJavaScript_StyleBitsNeeded_Callback qscilexerjavascript_stylebitsneeded_callback = nullptr;
    QsciLexerJavaScript_WordCharacters_Callback qscilexerjavascript_wordcharacters_callback = nullptr;
    QsciLexerJavaScript_SetAutoIndentStyle_Callback qscilexerjavascript_setautoindentstyle_callback = nullptr;
    QsciLexerJavaScript_SetColor_Callback qscilexerjavascript_setcolor_callback = nullptr;
    QsciLexerJavaScript_SetEolFill_Callback qscilexerjavascript_seteolfill_callback = nullptr;
    QsciLexerJavaScript_SetFont_Callback qscilexerjavascript_setfont_callback = nullptr;
    QsciLexerJavaScript_SetPaper_Callback qscilexerjavascript_setpaper_callback = nullptr;
    QsciLexerJavaScript_ReadProperties_Callback qscilexerjavascript_readproperties_callback = nullptr;
    QsciLexerJavaScript_WriteProperties_Callback qscilexerjavascript_writeproperties_callback = nullptr;
    QsciLexerJavaScript_Event_Callback qscilexerjavascript_event_callback = nullptr;
    QsciLexerJavaScript_EventFilter_Callback qscilexerjavascript_eventfilter_callback = nullptr;
    QsciLexerJavaScript_TimerEvent_Callback qscilexerjavascript_timerevent_callback = nullptr;
    QsciLexerJavaScript_ChildEvent_Callback qscilexerjavascript_childevent_callback = nullptr;
    QsciLexerJavaScript_CustomEvent_Callback qscilexerjavascript_customevent_callback = nullptr;
    QsciLexerJavaScript_ConnectNotify_Callback qscilexerjavascript_connectnotify_callback = nullptr;
    QsciLexerJavaScript_DisconnectNotify_Callback qscilexerjavascript_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerJavaScript {
        using QsciLexerJavaScript::childEvent;
        using QsciLexerJavaScript::connectNotify;
        using QsciLexerJavaScript::customEvent;
        using QsciLexerJavaScript::disconnectNotify;
        using QsciLexerJavaScript::readProperties;
        using QsciLexerJavaScript::timerEvent;
        using QsciLexerJavaScript::writeProperties;
    };

    VirtualQsciLexerJavaScript() : QsciLexerJavaScript() {};
    VirtualQsciLexerJavaScript(QObject* parent) : QsciLexerJavaScript(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerjavascript_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerjavascript_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerJavaScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerjavascript_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerjavascript_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjavascript_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerjavascript_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerjavascript_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexerjavascript_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerjavascript_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerjavascript_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerjavascript_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerjavascript_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerjavascript_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexerjavascript_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexerjavascript_setstylepreprocessor_callback) {
            bool cbval1 = style;
            qscilexerjavascript_setstylepreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerjavascript_language_callback) {
            const char* callback_ret = qscilexerjavascript_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJavaScript::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjavascript_lexer_callback) {
            const char* callback_ret = qscilexerjavascript_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerJavaScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjavascript_lexerid_callback) {
            int callback_ret = qscilexerjavascript_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjavascript_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerjavascript_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerJavaScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerjavascript_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerjavascript_autocompletionwordseparators_callback(this);
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
        return QsciLexerJavaScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjavascript_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjavascript_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjavascript_blocklookback_callback) {
            int callback_ret = qscilexerjavascript_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjavascript_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjavascript_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjavascript_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjavascript_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjavascript_bracestyle_callback) {
            int callback_ret = qscilexerjavascript_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjavascript_casesensitive_callback) {
            bool callback_ret = qscilexerjavascript_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerJavaScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjavascript_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjavascript_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjavascript_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjavascript_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjavascript_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjavascript_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjavascript_indentationguideview_callback) {
            int callback_ret = qscilexerjavascript_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjavascript_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerjavascript_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjavascript_defaultstyle_callback) {
            int callback_ret = qscilexerjavascript_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerjavascript_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerjavascript_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJavaScript::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerjavascript_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjavascript_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjavascript_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjavascript_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjavascript_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjavascript_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjavascript_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjavascript_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjavascript_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjavascript_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJavaScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjavascript_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerjavascript_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjavascript_refreshproperties_callback) {
            qscilexerjavascript_refreshproperties_callback(this);
            return;
        }
        QsciLexerJavaScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjavascript_stylebitsneeded_callback) {
            int callback_ret = qscilexerjavascript_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJavaScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjavascript_wordcharacters_callback) {
            const char* callback_ret = qscilexerjavascript_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerJavaScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjavascript_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerjavascript_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjavascript_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjavascript_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjavascript_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerjavascript_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjavascript_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerjavascript_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjavascript_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjavascript_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJavaScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjavascript_readproperties_callback) {
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
            bool callback_ret = qscilexerjavascript_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJavaScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjavascript_writeproperties_callback) {
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
            bool callback_ret = qscilexerjavascript_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJavaScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjavascript_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerjavascript_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJavaScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjavascript_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerjavascript_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerJavaScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjavascript_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerjavascript_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjavascript_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerjavascript_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjavascript_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerjavascript_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjavascript_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjavascript_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjavascript_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjavascript_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJavaScript::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerJavaScript_SuperReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJavaScript_SuperWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJavaScript_SuperTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event);
    friend void QsciLexerJavaScript_SuperChildEvent(QsciLexerJavaScript* self, QChildEvent* event);
    friend void QsciLexerJavaScript_SuperCustomEvent(QsciLexerJavaScript* self, QEvent* event);
    friend void QsciLexerJavaScript_SuperConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
    friend void QsciLexerJavaScript_SuperDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal);
};

#endif
