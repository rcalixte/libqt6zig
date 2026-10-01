#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCOFFEESCRIPT_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCOFFEESCRIPT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCoffeeScript
class VirtualQsciLexerCoffeeScript final : public QsciLexerCoffeeScript {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCoffeeScript_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_Metacast_Callback = void* (*)(QsciLexerCoffeeScript*, const char*);
    using QsciLexerCoffeeScript_Metacall_Callback = int (*)(QsciLexerCoffeeScript*, int, int, void**);
    using QsciLexerCoffeeScript_Language_Callback = const char* (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_Lexer_Callback = const char* (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_LexerId_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_BlockEnd_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockLookback_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_BlockStart_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCoffeeScript*, int*);
    using QsciLexerCoffeeScript_BraceStyle_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_CaseSensitive_Callback = bool (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_Color_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_EolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Font_Callback = QFont* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_IndentationGuideView_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_Keywords_Callback = const char* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultStyle_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_Description_Callback = const char* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_Paper_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultColor2_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultEolFill_Callback = bool (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultFont2_Callback = QFont* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetEditor_Callback = void (*)(QsciLexerCoffeeScript*, QsciScintilla*);
    using QsciLexerCoffeeScript_RefreshProperties_Callback = void (*)(QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_StyleBitsNeeded_Callback = int (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_WordCharacters_Callback = const char* (*)(const QsciLexerCoffeeScript*);
    using QsciLexerCoffeeScript_SetAutoIndentStyle_Callback = void (*)(QsciLexerCoffeeScript*, int);
    using QsciLexerCoffeeScript_SetColor_Callback = void (*)(QsciLexerCoffeeScript*, QColor*, int);
    using QsciLexerCoffeeScript_SetEolFill_Callback = void (*)(QsciLexerCoffeeScript*, bool, int);
    using QsciLexerCoffeeScript_SetFont_Callback = void (*)(QsciLexerCoffeeScript*, QFont*, int);
    using QsciLexerCoffeeScript_SetPaper_Callback = void (*)(QsciLexerCoffeeScript*, QColor*, int);
    using QsciLexerCoffeeScript_ReadProperties_Callback = bool (*)(QsciLexerCoffeeScript*, QSettings*, const char*);
    using QsciLexerCoffeeScript_WriteProperties_Callback = bool (*)(const QsciLexerCoffeeScript*, QSettings*, const char*);
    using QsciLexerCoffeeScript_Event_Callback = bool (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_EventFilter_Callback = bool (*)(QsciLexerCoffeeScript*, QObject*, QEvent*);
    using QsciLexerCoffeeScript_TimerEvent_Callback = void (*)(QsciLexerCoffeeScript*, QTimerEvent*);
    using QsciLexerCoffeeScript_ChildEvent_Callback = void (*)(QsciLexerCoffeeScript*, QChildEvent*);
    using QsciLexerCoffeeScript_CustomEvent_Callback = void (*)(QsciLexerCoffeeScript*, QEvent*);
    using QsciLexerCoffeeScript_ConnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, QMetaMethod*);
    using QsciLexerCoffeeScript_DisconnectNotify_Callback = void (*)(QsciLexerCoffeeScript*, QMetaMethod*);
    using QsciLexerCoffeeScript::bytesAsText;
    using QsciLexerCoffeeScript::isSignalConnected;
    using QsciLexerCoffeeScript::receivers;
    using QsciLexerCoffeeScript::sender;
    using QsciLexerCoffeeScript::senderSignalIndex;
    using QsciLexerCoffeeScript::textAsBytes;

    // Instance callback storage
    QsciLexerCoffeeScript_MetaObject_Callback qscilexercoffeescript_metaobject_callback = nullptr;
    QsciLexerCoffeeScript_Metacast_Callback qscilexercoffeescript_metacast_callback = nullptr;
    QsciLexerCoffeeScript_Metacall_Callback qscilexercoffeescript_metacall_callback = nullptr;
    QsciLexerCoffeeScript_Language_Callback qscilexercoffeescript_language_callback = nullptr;
    QsciLexerCoffeeScript_Lexer_Callback qscilexercoffeescript_lexer_callback = nullptr;
    QsciLexerCoffeeScript_LexerId_Callback qscilexercoffeescript_lexerid_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionFillups_Callback qscilexercoffeescript_autocompletionfillups_callback = nullptr;
    QsciLexerCoffeeScript_AutoCompletionWordSeparators_Callback qscilexercoffeescript_autocompletionwordseparators_callback = nullptr;
    QsciLexerCoffeeScript_BlockEnd_Callback qscilexercoffeescript_blockend_callback = nullptr;
    QsciLexerCoffeeScript_BlockLookback_Callback qscilexercoffeescript_blocklookback_callback = nullptr;
    QsciLexerCoffeeScript_BlockStart_Callback qscilexercoffeescript_blockstart_callback = nullptr;
    QsciLexerCoffeeScript_BlockStartKeyword_Callback qscilexercoffeescript_blockstartkeyword_callback = nullptr;
    QsciLexerCoffeeScript_BraceStyle_Callback qscilexercoffeescript_bracestyle_callback = nullptr;
    QsciLexerCoffeeScript_CaseSensitive_Callback qscilexercoffeescript_casesensitive_callback = nullptr;
    QsciLexerCoffeeScript_Color_Callback qscilexercoffeescript_color_callback = nullptr;
    QsciLexerCoffeeScript_EolFill_Callback qscilexercoffeescript_eolfill_callback = nullptr;
    QsciLexerCoffeeScript_Font_Callback qscilexercoffeescript_font_callback = nullptr;
    QsciLexerCoffeeScript_IndentationGuideView_Callback qscilexercoffeescript_indentationguideview_callback = nullptr;
    QsciLexerCoffeeScript_Keywords_Callback qscilexercoffeescript_keywords_callback = nullptr;
    QsciLexerCoffeeScript_DefaultStyle_Callback qscilexercoffeescript_defaultstyle_callback = nullptr;
    QsciLexerCoffeeScript_Description_Callback qscilexercoffeescript_description_callback = nullptr;
    QsciLexerCoffeeScript_Paper_Callback qscilexercoffeescript_paper_callback = nullptr;
    QsciLexerCoffeeScript_DefaultColor2_Callback qscilexercoffeescript_defaultcolor2_callback = nullptr;
    QsciLexerCoffeeScript_DefaultEolFill_Callback qscilexercoffeescript_defaulteolfill_callback = nullptr;
    QsciLexerCoffeeScript_DefaultFont2_Callback qscilexercoffeescript_defaultfont2_callback = nullptr;
    QsciLexerCoffeeScript_DefaultPaper2_Callback qscilexercoffeescript_defaultpaper2_callback = nullptr;
    QsciLexerCoffeeScript_SetEditor_Callback qscilexercoffeescript_seteditor_callback = nullptr;
    QsciLexerCoffeeScript_RefreshProperties_Callback qscilexercoffeescript_refreshproperties_callback = nullptr;
    QsciLexerCoffeeScript_StyleBitsNeeded_Callback qscilexercoffeescript_stylebitsneeded_callback = nullptr;
    QsciLexerCoffeeScript_WordCharacters_Callback qscilexercoffeescript_wordcharacters_callback = nullptr;
    QsciLexerCoffeeScript_SetAutoIndentStyle_Callback qscilexercoffeescript_setautoindentstyle_callback = nullptr;
    QsciLexerCoffeeScript_SetColor_Callback qscilexercoffeescript_setcolor_callback = nullptr;
    QsciLexerCoffeeScript_SetEolFill_Callback qscilexercoffeescript_seteolfill_callback = nullptr;
    QsciLexerCoffeeScript_SetFont_Callback qscilexercoffeescript_setfont_callback = nullptr;
    QsciLexerCoffeeScript_SetPaper_Callback qscilexercoffeescript_setpaper_callback = nullptr;
    QsciLexerCoffeeScript_ReadProperties_Callback qscilexercoffeescript_readproperties_callback = nullptr;
    QsciLexerCoffeeScript_WriteProperties_Callback qscilexercoffeescript_writeproperties_callback = nullptr;
    QsciLexerCoffeeScript_Event_Callback qscilexercoffeescript_event_callback = nullptr;
    QsciLexerCoffeeScript_EventFilter_Callback qscilexercoffeescript_eventfilter_callback = nullptr;
    QsciLexerCoffeeScript_TimerEvent_Callback qscilexercoffeescript_timerevent_callback = nullptr;
    QsciLexerCoffeeScript_ChildEvent_Callback qscilexercoffeescript_childevent_callback = nullptr;
    QsciLexerCoffeeScript_CustomEvent_Callback qscilexercoffeescript_customevent_callback = nullptr;
    QsciLexerCoffeeScript_ConnectNotify_Callback qscilexercoffeescript_connectnotify_callback = nullptr;
    QsciLexerCoffeeScript_DisconnectNotify_Callback qscilexercoffeescript_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCoffeeScript {
        using QsciLexerCoffeeScript::childEvent;
        using QsciLexerCoffeeScript::connectNotify;
        using QsciLexerCoffeeScript::customEvent;
        using QsciLexerCoffeeScript::disconnectNotify;
        using QsciLexerCoffeeScript::readProperties;
        using QsciLexerCoffeeScript::timerEvent;
        using QsciLexerCoffeeScript::writeProperties;
    };

    VirtualQsciLexerCoffeeScript() : QsciLexerCoffeeScript() {};
    VirtualQsciLexerCoffeeScript(QObject* parent) : QsciLexerCoffeeScript(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercoffeescript_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercoffeescript_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercoffeescript_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercoffeescript_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercoffeescript_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercoffeescript_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercoffeescript_language_callback) {
            const char* callback_ret = qscilexercoffeescript_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCoffeeScript::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercoffeescript_lexer_callback) {
            const char* callback_ret = qscilexercoffeescript_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercoffeescript_lexerid_callback) {
            int callback_ret = qscilexercoffeescript_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercoffeescript_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercoffeescript_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercoffeescript_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercoffeescript_autocompletionwordseparators_callback(this);
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
        return QsciLexerCoffeeScript::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercoffeescript_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercoffeescript_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercoffeescript_blocklookback_callback) {
            int callback_ret = qscilexercoffeescript_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercoffeescript_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercoffeescript_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercoffeescript_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercoffeescript_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercoffeescript_bracestyle_callback) {
            int callback_ret = qscilexercoffeescript_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercoffeescript_casesensitive_callback) {
            bool callback_ret = qscilexercoffeescript_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercoffeescript_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercoffeescript_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercoffeescript_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercoffeescript_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercoffeescript_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercoffeescript_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercoffeescript_indentationguideview_callback) {
            int callback_ret = qscilexercoffeescript_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercoffeescript_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercoffeescript_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercoffeescript_defaultstyle_callback) {
            int callback_ret = qscilexercoffeescript_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercoffeescript_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercoffeescript_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCoffeeScript::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercoffeescript_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercoffeescript_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercoffeescript_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercoffeescript_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercoffeescript_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercoffeescript_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercoffeescript_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercoffeescript_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercoffeescript_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercoffeescript_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCoffeeScript::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercoffeescript_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercoffeescript_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercoffeescript_refreshproperties_callback) {
            qscilexercoffeescript_refreshproperties_callback(this);
            return;
        }
        QsciLexerCoffeeScript::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercoffeescript_stylebitsneeded_callback) {
            int callback_ret = qscilexercoffeescript_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCoffeeScript::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercoffeescript_wordcharacters_callback) {
            const char* callback_ret = qscilexercoffeescript_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercoffeescript_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercoffeescript_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercoffeescript_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercoffeescript_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercoffeescript_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercoffeescript_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercoffeescript_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercoffeescript_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercoffeescript_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercoffeescript_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCoffeeScript::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercoffeescript_readproperties_callback) {
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
            bool callback_ret = qscilexercoffeescript_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercoffeescript_writeproperties_callback) {
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
            bool callback_ret = qscilexercoffeescript_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercoffeescript_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercoffeescript_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercoffeescript_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercoffeescript_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCoffeeScript::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercoffeescript_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercoffeescript_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercoffeescript_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercoffeescript_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercoffeescript_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercoffeescript_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercoffeescript_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercoffeescript_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercoffeescript_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCoffeeScript::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCoffeeScript_SuperReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCoffeeScript_SuperWriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCoffeeScript_SuperTimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event);
    friend void QsciLexerCoffeeScript_SuperChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event);
    friend void QsciLexerCoffeeScript_SuperCustomEvent(QsciLexerCoffeeScript* self, QEvent* event);
    friend void QsciLexerCoffeeScript_SuperConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
    friend void QsciLexerCoffeeScript_SuperDisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal);
};

#endif
