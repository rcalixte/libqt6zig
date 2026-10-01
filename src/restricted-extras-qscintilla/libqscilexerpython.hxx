#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPYTHON_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPYTHON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPython
class VirtualQsciLexerPython final : public QsciLexerPython {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPython_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPython*);
    using QsciLexerPython_Metacast_Callback = void* (*)(QsciLexerPython*, const char*);
    using QsciLexerPython_Metacall_Callback = int (*)(QsciLexerPython*, int, int, void**);
    using QsciLexerPython_IndentationGuideView_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_SetFoldComments_Callback = void (*)(QsciLexerPython*, bool);
    using QsciLexerPython_SetFoldQuotes_Callback = void (*)(QsciLexerPython*, bool);
    using QsciLexerPython_SetIndentationWarning_Callback = void (*)(QsciLexerPython*, int);
    using QsciLexerPython_Language_Callback = const char* (*)(const QsciLexerPython*);
    using QsciLexerPython_Lexer_Callback = const char* (*)(const QsciLexerPython*);
    using QsciLexerPython_LexerId_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPython*);
    using QsciLexerPython_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPython*);
    using QsciLexerPython_BlockEnd_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BlockLookback_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_BlockStart_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPython*, int*);
    using QsciLexerPython_BraceStyle_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_CaseSensitive_Callback = bool (*)(const QsciLexerPython*);
    using QsciLexerPython_Color_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_EolFill_Callback = bool (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Font_Callback = QFont* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Keywords_Callback = const char* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultStyle_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_Description_Callback = const char* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_Paper_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultColor2_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultEolFill_Callback = bool (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultFont2_Callback = QFont* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPython*, int);
    using QsciLexerPython_SetEditor_Callback = void (*)(QsciLexerPython*, QsciScintilla*);
    using QsciLexerPython_RefreshProperties_Callback = void (*)(QsciLexerPython*);
    using QsciLexerPython_StyleBitsNeeded_Callback = int (*)(const QsciLexerPython*);
    using QsciLexerPython_WordCharacters_Callback = const char* (*)(const QsciLexerPython*);
    using QsciLexerPython_SetAutoIndentStyle_Callback = void (*)(QsciLexerPython*, int);
    using QsciLexerPython_SetColor_Callback = void (*)(QsciLexerPython*, QColor*, int);
    using QsciLexerPython_SetEolFill_Callback = void (*)(QsciLexerPython*, bool, int);
    using QsciLexerPython_SetFont_Callback = void (*)(QsciLexerPython*, QFont*, int);
    using QsciLexerPython_SetPaper_Callback = void (*)(QsciLexerPython*, QColor*, int);
    using QsciLexerPython_ReadProperties_Callback = bool (*)(QsciLexerPython*, QSettings*, const char*);
    using QsciLexerPython_WriteProperties_Callback = bool (*)(const QsciLexerPython*, QSettings*, const char*);
    using QsciLexerPython_Event_Callback = bool (*)(QsciLexerPython*, QEvent*);
    using QsciLexerPython_EventFilter_Callback = bool (*)(QsciLexerPython*, QObject*, QEvent*);
    using QsciLexerPython_TimerEvent_Callback = void (*)(QsciLexerPython*, QTimerEvent*);
    using QsciLexerPython_ChildEvent_Callback = void (*)(QsciLexerPython*, QChildEvent*);
    using QsciLexerPython_CustomEvent_Callback = void (*)(QsciLexerPython*, QEvent*);
    using QsciLexerPython_ConnectNotify_Callback = void (*)(QsciLexerPython*, QMetaMethod*);
    using QsciLexerPython_DisconnectNotify_Callback = void (*)(QsciLexerPython*, QMetaMethod*);
    using QsciLexerPython::bytesAsText;
    using QsciLexerPython::isSignalConnected;
    using QsciLexerPython::receivers;
    using QsciLexerPython::sender;
    using QsciLexerPython::senderSignalIndex;
    using QsciLexerPython::textAsBytes;

    // Instance callback storage
    QsciLexerPython_MetaObject_Callback qscilexerpython_metaobject_callback = nullptr;
    QsciLexerPython_Metacast_Callback qscilexerpython_metacast_callback = nullptr;
    QsciLexerPython_Metacall_Callback qscilexerpython_metacall_callback = nullptr;
    QsciLexerPython_IndentationGuideView_Callback qscilexerpython_indentationguideview_callback = nullptr;
    QsciLexerPython_SetFoldComments_Callback qscilexerpython_setfoldcomments_callback = nullptr;
    QsciLexerPython_SetFoldQuotes_Callback qscilexerpython_setfoldquotes_callback = nullptr;
    QsciLexerPython_SetIndentationWarning_Callback qscilexerpython_setindentationwarning_callback = nullptr;
    QsciLexerPython_Language_Callback qscilexerpython_language_callback = nullptr;
    QsciLexerPython_Lexer_Callback qscilexerpython_lexer_callback = nullptr;
    QsciLexerPython_LexerId_Callback qscilexerpython_lexerid_callback = nullptr;
    QsciLexerPython_AutoCompletionFillups_Callback qscilexerpython_autocompletionfillups_callback = nullptr;
    QsciLexerPython_AutoCompletionWordSeparators_Callback qscilexerpython_autocompletionwordseparators_callback = nullptr;
    QsciLexerPython_BlockEnd_Callback qscilexerpython_blockend_callback = nullptr;
    QsciLexerPython_BlockLookback_Callback qscilexerpython_blocklookback_callback = nullptr;
    QsciLexerPython_BlockStart_Callback qscilexerpython_blockstart_callback = nullptr;
    QsciLexerPython_BlockStartKeyword_Callback qscilexerpython_blockstartkeyword_callback = nullptr;
    QsciLexerPython_BraceStyle_Callback qscilexerpython_bracestyle_callback = nullptr;
    QsciLexerPython_CaseSensitive_Callback qscilexerpython_casesensitive_callback = nullptr;
    QsciLexerPython_Color_Callback qscilexerpython_color_callback = nullptr;
    QsciLexerPython_EolFill_Callback qscilexerpython_eolfill_callback = nullptr;
    QsciLexerPython_Font_Callback qscilexerpython_font_callback = nullptr;
    QsciLexerPython_Keywords_Callback qscilexerpython_keywords_callback = nullptr;
    QsciLexerPython_DefaultStyle_Callback qscilexerpython_defaultstyle_callback = nullptr;
    QsciLexerPython_Description_Callback qscilexerpython_description_callback = nullptr;
    QsciLexerPython_Paper_Callback qscilexerpython_paper_callback = nullptr;
    QsciLexerPython_DefaultColor2_Callback qscilexerpython_defaultcolor2_callback = nullptr;
    QsciLexerPython_DefaultEolFill_Callback qscilexerpython_defaulteolfill_callback = nullptr;
    QsciLexerPython_DefaultFont2_Callback qscilexerpython_defaultfont2_callback = nullptr;
    QsciLexerPython_DefaultPaper2_Callback qscilexerpython_defaultpaper2_callback = nullptr;
    QsciLexerPython_SetEditor_Callback qscilexerpython_seteditor_callback = nullptr;
    QsciLexerPython_RefreshProperties_Callback qscilexerpython_refreshproperties_callback = nullptr;
    QsciLexerPython_StyleBitsNeeded_Callback qscilexerpython_stylebitsneeded_callback = nullptr;
    QsciLexerPython_WordCharacters_Callback qscilexerpython_wordcharacters_callback = nullptr;
    QsciLexerPython_SetAutoIndentStyle_Callback qscilexerpython_setautoindentstyle_callback = nullptr;
    QsciLexerPython_SetColor_Callback qscilexerpython_setcolor_callback = nullptr;
    QsciLexerPython_SetEolFill_Callback qscilexerpython_seteolfill_callback = nullptr;
    QsciLexerPython_SetFont_Callback qscilexerpython_setfont_callback = nullptr;
    QsciLexerPython_SetPaper_Callback qscilexerpython_setpaper_callback = nullptr;
    QsciLexerPython_ReadProperties_Callback qscilexerpython_readproperties_callback = nullptr;
    QsciLexerPython_WriteProperties_Callback qscilexerpython_writeproperties_callback = nullptr;
    QsciLexerPython_Event_Callback qscilexerpython_event_callback = nullptr;
    QsciLexerPython_EventFilter_Callback qscilexerpython_eventfilter_callback = nullptr;
    QsciLexerPython_TimerEvent_Callback qscilexerpython_timerevent_callback = nullptr;
    QsciLexerPython_ChildEvent_Callback qscilexerpython_childevent_callback = nullptr;
    QsciLexerPython_CustomEvent_Callback qscilexerpython_customevent_callback = nullptr;
    QsciLexerPython_ConnectNotify_Callback qscilexerpython_connectnotify_callback = nullptr;
    QsciLexerPython_DisconnectNotify_Callback qscilexerpython_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPython {
        using QsciLexerPython::childEvent;
        using QsciLexerPython::connectNotify;
        using QsciLexerPython::customEvent;
        using QsciLexerPython::disconnectNotify;
        using QsciLexerPython::readProperties;
        using QsciLexerPython::timerEvent;
        using QsciLexerPython::writeProperties;
    };

    VirtualQsciLexerPython() : QsciLexerPython() {};
    VirtualQsciLexerPython(QObject* parent) : QsciLexerPython(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpython_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerpython_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPython::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpython_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerpython_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpython_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerpython_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpython_indentationguideview_callback) {
            int callback_ret = qscilexerpython_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpython_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerpython_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerPython::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldQuotes(bool fold) override {
        if (qscilexerpython_setfoldquotes_callback) {
            bool cbval1 = fold;
            qscilexerpython_setfoldquotes_callback(this, cbval1);
            return;
        }
        QsciLexerPython::setFoldQuotes(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIndentationWarning(QsciLexerPython::IndentationWarning warn) override {
        if (qscilexerpython_setindentationwarning_callback) {
            int cbval1 = static_cast<int>(warn);
            qscilexerpython_setindentationwarning_callback(this, cbval1);
            return;
        }
        QsciLexerPython::setIndentationWarning(warn);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpython_language_callback) {
            const char* callback_ret = qscilexerpython_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPython::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpython_lexer_callback) {
            const char* callback_ret = qscilexerpython_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPython::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpython_lexerid_callback) {
            int callback_ret = qscilexerpython_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpython_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerpython_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPython::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpython_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerpython_autocompletionwordseparators_callback(this);
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
        return QsciLexerPython::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpython_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpython_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpython_blocklookback_callback) {
            int callback_ret = qscilexerpython_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpython_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpython_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpython_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpython_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpython_bracestyle_callback) {
            int callback_ret = qscilexerpython_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpython_casesensitive_callback) {
            bool callback_ret = qscilexerpython_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPython::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpython_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpython_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpython_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpython_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpython_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpython_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpython_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerpython_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpython_defaultstyle_callback) {
            int callback_ret = qscilexerpython_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpython_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerpython_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPython::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpython_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpython_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpython_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpython_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpython_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpython_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpython_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpython_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpython_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpython_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPython::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpython_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerpython_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPython::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpython_refreshproperties_callback) {
            qscilexerpython_refreshproperties_callback(this);
            return;
        }
        QsciLexerPython::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpython_stylebitsneeded_callback) {
            int callback_ret = qscilexerpython_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPython::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpython_wordcharacters_callback) {
            const char* callback_ret = qscilexerpython_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPython::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpython_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerpython_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPython::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpython_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpython_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPython::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpython_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerpython_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPython::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpython_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerpython_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPython::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpython_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpython_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPython::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpython_readproperties_callback) {
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
            bool callback_ret = qscilexerpython_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPython::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpython_writeproperties_callback) {
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
            bool callback_ret = qscilexerpython_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPython::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpython_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerpython_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPython::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpython_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerpython_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPython::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpython_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerpython_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPython::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpython_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerpython_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPython::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpython_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerpython_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPython::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpython_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpython_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPython::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpython_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpython_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPython::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPython_SuperReadProperties(QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPython_SuperWriteProperties(const QsciLexerPython* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPython_SuperTimerEvent(QsciLexerPython* self, QTimerEvent* event);
    friend void QsciLexerPython_SuperChildEvent(QsciLexerPython* self, QChildEvent* event);
    friend void QsciLexerPython_SuperCustomEvent(QsciLexerPython* self, QEvent* event);
    friend void QsciLexerPython_SuperConnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
    friend void QsciLexerPython_SuperDisconnectNotify(QsciLexerPython* self, const QMetaMethod* signal);
};

#endif
