#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPOSTSCRIPT_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPOSTSCRIPT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPostScript
class VirtualQsciLexerPostScript final : public QsciLexerPostScript {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPostScript_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_Metacast_Callback = void* (*)(QsciLexerPostScript*, const char*);
    using QsciLexerPostScript_Metacall_Callback = int (*)(QsciLexerPostScript*, int, int, void**);
    using QsciLexerPostScript_SetTokenize_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetLevel_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetFoldCompact_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_SetFoldAtElse_Callback = void (*)(QsciLexerPostScript*, bool);
    using QsciLexerPostScript_Language_Callback = const char* (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_Lexer_Callback = const char* (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_LexerId_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_BlockEnd_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockLookback_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_BlockStart_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPostScript*, int*);
    using QsciLexerPostScript_BraceStyle_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_CaseSensitive_Callback = bool (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_Color_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_EolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Font_Callback = QFont* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_IndentationGuideView_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_Keywords_Callback = const char* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultStyle_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_Description_Callback = const char* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_Paper_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultEolFill_Callback = bool (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetEditor_Callback = void (*)(QsciLexerPostScript*, QsciScintilla*);
    using QsciLexerPostScript_RefreshProperties_Callback = void (*)(QsciLexerPostScript*);
    using QsciLexerPostScript_StyleBitsNeeded_Callback = int (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_WordCharacters_Callback = const char* (*)(const QsciLexerPostScript*);
    using QsciLexerPostScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerPostScript*, int);
    using QsciLexerPostScript_SetColor_Callback = void (*)(QsciLexerPostScript*, QColor*, int);
    using QsciLexerPostScript_SetEolFill_Callback = void (*)(QsciLexerPostScript*, bool, int);
    using QsciLexerPostScript_SetFont_Callback = void (*)(QsciLexerPostScript*, QFont*, int);
    using QsciLexerPostScript_SetPaper_Callback = void (*)(QsciLexerPostScript*, QColor*, int);
    using QsciLexerPostScript_ReadProperties_Callback = bool (*)(QsciLexerPostScript*, QSettings*, const char*);
    using QsciLexerPostScript_WriteProperties_Callback = bool (*)(const QsciLexerPostScript*, QSettings*, const char*);
    using QsciLexerPostScript_Event_Callback = bool (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_EventFilter_Callback = bool (*)(QsciLexerPostScript*, QObject*, QEvent*);
    using QsciLexerPostScript_TimerEvent_Callback = void (*)(QsciLexerPostScript*, QTimerEvent*);
    using QsciLexerPostScript_ChildEvent_Callback = void (*)(QsciLexerPostScript*, QChildEvent*);
    using QsciLexerPostScript_CustomEvent_Callback = void (*)(QsciLexerPostScript*, QEvent*);
    using QsciLexerPostScript_ConnectNotify_Callback = void (*)(QsciLexerPostScript*, QMetaMethod*);
    using QsciLexerPostScript_DisconnectNotify_Callback = void (*)(QsciLexerPostScript*, QMetaMethod*);
    using QsciLexerPostScript::bytesAsText;
    using QsciLexerPostScript::isSignalConnected;
    using QsciLexerPostScript::receivers;
    using QsciLexerPostScript::sender;
    using QsciLexerPostScript::senderSignalIndex;
    using QsciLexerPostScript::textAsBytes;

    // Instance callback storage
    QsciLexerPostScript_MetaObject_Callback qscilexerpostscript_metaobject_callback = nullptr;
    QsciLexerPostScript_Metacast_Callback qscilexerpostscript_metacast_callback = nullptr;
    QsciLexerPostScript_Metacall_Callback qscilexerpostscript_metacall_callback = nullptr;
    QsciLexerPostScript_SetTokenize_Callback qscilexerpostscript_settokenize_callback = nullptr;
    QsciLexerPostScript_SetLevel_Callback qscilexerpostscript_setlevel_callback = nullptr;
    QsciLexerPostScript_SetFoldCompact_Callback qscilexerpostscript_setfoldcompact_callback = nullptr;
    QsciLexerPostScript_SetFoldAtElse_Callback qscilexerpostscript_setfoldatelse_callback = nullptr;
    QsciLexerPostScript_Language_Callback qscilexerpostscript_language_callback = nullptr;
    QsciLexerPostScript_Lexer_Callback qscilexerpostscript_lexer_callback = nullptr;
    QsciLexerPostScript_LexerId_Callback qscilexerpostscript_lexerid_callback = nullptr;
    QsciLexerPostScript_AutoCompletionFillups_Callback qscilexerpostscript_autocompletionfillups_callback = nullptr;
    QsciLexerPostScript_AutoCompletionWordSeparators_Callback qscilexerpostscript_autocompletionwordseparators_callback = nullptr;
    QsciLexerPostScript_BlockEnd_Callback qscilexerpostscript_blockend_callback = nullptr;
    QsciLexerPostScript_BlockLookback_Callback qscilexerpostscript_blocklookback_callback = nullptr;
    QsciLexerPostScript_BlockStart_Callback qscilexerpostscript_blockstart_callback = nullptr;
    QsciLexerPostScript_BlockStartKeyword_Callback qscilexerpostscript_blockstartkeyword_callback = nullptr;
    QsciLexerPostScript_BraceStyle_Callback qscilexerpostscript_bracestyle_callback = nullptr;
    QsciLexerPostScript_CaseSensitive_Callback qscilexerpostscript_casesensitive_callback = nullptr;
    QsciLexerPostScript_Color_Callback qscilexerpostscript_color_callback = nullptr;
    QsciLexerPostScript_EolFill_Callback qscilexerpostscript_eolfill_callback = nullptr;
    QsciLexerPostScript_Font_Callback qscilexerpostscript_font_callback = nullptr;
    QsciLexerPostScript_IndentationGuideView_Callback qscilexerpostscript_indentationguideview_callback = nullptr;
    QsciLexerPostScript_Keywords_Callback qscilexerpostscript_keywords_callback = nullptr;
    QsciLexerPostScript_DefaultStyle_Callback qscilexerpostscript_defaultstyle_callback = nullptr;
    QsciLexerPostScript_Description_Callback qscilexerpostscript_description_callback = nullptr;
    QsciLexerPostScript_Paper_Callback qscilexerpostscript_paper_callback = nullptr;
    QsciLexerPostScript_DefaultColor2_Callback qscilexerpostscript_defaultcolor2_callback = nullptr;
    QsciLexerPostScript_DefaultEolFill_Callback qscilexerpostscript_defaulteolfill_callback = nullptr;
    QsciLexerPostScript_DefaultFont2_Callback qscilexerpostscript_defaultfont2_callback = nullptr;
    QsciLexerPostScript_DefaultPaper2_Callback qscilexerpostscript_defaultpaper2_callback = nullptr;
    QsciLexerPostScript_SetEditor_Callback qscilexerpostscript_seteditor_callback = nullptr;
    QsciLexerPostScript_RefreshProperties_Callback qscilexerpostscript_refreshproperties_callback = nullptr;
    QsciLexerPostScript_StyleBitsNeeded_Callback qscilexerpostscript_stylebitsneeded_callback = nullptr;
    QsciLexerPostScript_WordCharacters_Callback qscilexerpostscript_wordcharacters_callback = nullptr;
    QsciLexerPostScript_SetAutoIndentStyle_Callback qscilexerpostscript_setautoindentstyle_callback = nullptr;
    QsciLexerPostScript_SetColor_Callback qscilexerpostscript_setcolor_callback = nullptr;
    QsciLexerPostScript_SetEolFill_Callback qscilexerpostscript_seteolfill_callback = nullptr;
    QsciLexerPostScript_SetFont_Callback qscilexerpostscript_setfont_callback = nullptr;
    QsciLexerPostScript_SetPaper_Callback qscilexerpostscript_setpaper_callback = nullptr;
    QsciLexerPostScript_ReadProperties_Callback qscilexerpostscript_readproperties_callback = nullptr;
    QsciLexerPostScript_WriteProperties_Callback qscilexerpostscript_writeproperties_callback = nullptr;
    QsciLexerPostScript_Event_Callback qscilexerpostscript_event_callback = nullptr;
    QsciLexerPostScript_EventFilter_Callback qscilexerpostscript_eventfilter_callback = nullptr;
    QsciLexerPostScript_TimerEvent_Callback qscilexerpostscript_timerevent_callback = nullptr;
    QsciLexerPostScript_ChildEvent_Callback qscilexerpostscript_childevent_callback = nullptr;
    QsciLexerPostScript_CustomEvent_Callback qscilexerpostscript_customevent_callback = nullptr;
    QsciLexerPostScript_ConnectNotify_Callback qscilexerpostscript_connectnotify_callback = nullptr;
    QsciLexerPostScript_DisconnectNotify_Callback qscilexerpostscript_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPostScript {
        using QsciLexerPostScript::childEvent;
        using QsciLexerPostScript::connectNotify;
        using QsciLexerPostScript::customEvent;
        using QsciLexerPostScript::disconnectNotify;
        using QsciLexerPostScript::readProperties;
        using QsciLexerPostScript::timerEvent;
        using QsciLexerPostScript::writeProperties;
    };

    VirtualQsciLexerPostScript() : QsciLexerPostScript() {};
    VirtualQsciLexerPostScript(QObject* parent) : QsciLexerPostScript(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpostscript_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerpostscript_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPostScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpostscript_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerpostscript_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpostscript_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerpostscript_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setTokenize(bool tokenize) override {
        if (qscilexerpostscript_settokenize_callback) {
            bool cbval1 = tokenize;
            qscilexerpostscript_settokenize_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setTokenize(tokenize);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setLevel(int level) override {
        if (qscilexerpostscript_setlevel_callback) {
            int cbval1 = level;
            qscilexerpostscript_setlevel_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setLevel(level);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpostscript_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerpostscript_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerpostscript_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexerpostscript_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpostscript_language_callback) {
            const char* callback_ret = qscilexerpostscript_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPostScript::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpostscript_lexer_callback) {
            const char* callback_ret = qscilexerpostscript_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPostScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpostscript_lexerid_callback) {
            int callback_ret = qscilexerpostscript_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpostscript_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerpostscript_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPostScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpostscript_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerpostscript_autocompletionwordseparators_callback(this);
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
        return QsciLexerPostScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpostscript_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpostscript_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpostscript_blocklookback_callback) {
            int callback_ret = qscilexerpostscript_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpostscript_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpostscript_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpostscript_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpostscript_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpostscript_bracestyle_callback) {
            int callback_ret = qscilexerpostscript_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpostscript_casesensitive_callback) {
            bool callback_ret = qscilexerpostscript_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPostScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpostscript_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpostscript_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpostscript_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpostscript_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpostscript_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpostscript_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpostscript_indentationguideview_callback) {
            int callback_ret = qscilexerpostscript_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpostscript_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerpostscript_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpostscript_defaultstyle_callback) {
            int callback_ret = qscilexerpostscript_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpostscript_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerpostscript_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPostScript::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpostscript_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpostscript_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpostscript_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpostscript_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpostscript_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpostscript_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpostscript_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpostscript_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpostscript_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpostscript_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPostScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpostscript_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerpostscript_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpostscript_refreshproperties_callback) {
            qscilexerpostscript_refreshproperties_callback(this);
            return;
        }
        QsciLexerPostScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpostscript_stylebitsneeded_callback) {
            int callback_ret = qscilexerpostscript_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPostScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpostscript_wordcharacters_callback) {
            const char* callback_ret = qscilexerpostscript_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPostScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpostscript_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerpostscript_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpostscript_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpostscript_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpostscript_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerpostscript_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpostscript_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerpostscript_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpostscript_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpostscript_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPostScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpostscript_readproperties_callback) {
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
            bool callback_ret = qscilexerpostscript_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPostScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpostscript_writeproperties_callback) {
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
            bool callback_ret = qscilexerpostscript_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPostScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpostscript_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerpostscript_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPostScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpostscript_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerpostscript_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPostScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpostscript_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerpostscript_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpostscript_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerpostscript_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpostscript_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerpostscript_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpostscript_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpostscript_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpostscript_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPostScript::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPostScript_SuperReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPostScript_SuperWriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPostScript_SuperTimerEvent(QsciLexerPostScript* self, QTimerEvent* event);
    friend void QsciLexerPostScript_SuperChildEvent(QsciLexerPostScript* self, QChildEvent* event);
    friend void QsciLexerPostScript_SuperCustomEvent(QsciLexerPostScript* self, QEvent* event);
    friend void QsciLexerPostScript_SuperConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
    friend void QsciLexerPostScript_SuperDisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal);
};

#endif
