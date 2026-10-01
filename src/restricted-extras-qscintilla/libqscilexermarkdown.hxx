#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMARKDOWN_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMARKDOWN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMarkdown
class VirtualQsciLexerMarkdown final : public QsciLexerMarkdown {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerMarkdown_MetaObject_Callback = QMetaObject* (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_Metacast_Callback = void* (*)(QsciLexerMarkdown*, const char*);
    using QsciLexerMarkdown_Metacall_Callback = int (*)(QsciLexerMarkdown*, int, int, void**);
    using QsciLexerMarkdown_Language_Callback = const char* (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_Lexer_Callback = const char* (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_LexerId_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_BlockEnd_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockLookback_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_BlockStart_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMarkdown*, int*);
    using QsciLexerMarkdown_BraceStyle_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_CaseSensitive_Callback = bool (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_Color_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_EolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Font_Callback = QFont* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_IndentationGuideView_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_Keywords_Callback = const char* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultStyle_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_Description_Callback = const char* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_Paper_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultColor2_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultEolFill_Callback = bool (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultFont2_Callback = QFont* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetEditor_Callback = void (*)(QsciLexerMarkdown*, QsciScintilla*);
    using QsciLexerMarkdown_RefreshProperties_Callback = void (*)(QsciLexerMarkdown*);
    using QsciLexerMarkdown_StyleBitsNeeded_Callback = int (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_WordCharacters_Callback = const char* (*)(const QsciLexerMarkdown*);
    using QsciLexerMarkdown_SetAutoIndentStyle_Callback = void (*)(QsciLexerMarkdown*, int);
    using QsciLexerMarkdown_SetColor_Callback = void (*)(QsciLexerMarkdown*, QColor*, int);
    using QsciLexerMarkdown_SetEolFill_Callback = void (*)(QsciLexerMarkdown*, bool, int);
    using QsciLexerMarkdown_SetFont_Callback = void (*)(QsciLexerMarkdown*, QFont*, int);
    using QsciLexerMarkdown_SetPaper_Callback = void (*)(QsciLexerMarkdown*, QColor*, int);
    using QsciLexerMarkdown_ReadProperties_Callback = bool (*)(QsciLexerMarkdown*, QSettings*, const char*);
    using QsciLexerMarkdown_WriteProperties_Callback = bool (*)(const QsciLexerMarkdown*, QSettings*, const char*);
    using QsciLexerMarkdown_Event_Callback = bool (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_EventFilter_Callback = bool (*)(QsciLexerMarkdown*, QObject*, QEvent*);
    using QsciLexerMarkdown_TimerEvent_Callback = void (*)(QsciLexerMarkdown*, QTimerEvent*);
    using QsciLexerMarkdown_ChildEvent_Callback = void (*)(QsciLexerMarkdown*, QChildEvent*);
    using QsciLexerMarkdown_CustomEvent_Callback = void (*)(QsciLexerMarkdown*, QEvent*);
    using QsciLexerMarkdown_ConnectNotify_Callback = void (*)(QsciLexerMarkdown*, QMetaMethod*);
    using QsciLexerMarkdown_DisconnectNotify_Callback = void (*)(QsciLexerMarkdown*, QMetaMethod*);
    using QsciLexerMarkdown::bytesAsText;
    using QsciLexerMarkdown::isSignalConnected;
    using QsciLexerMarkdown::receivers;
    using QsciLexerMarkdown::sender;
    using QsciLexerMarkdown::senderSignalIndex;
    using QsciLexerMarkdown::textAsBytes;

    // Instance callback storage
    QsciLexerMarkdown_MetaObject_Callback qscilexermarkdown_metaobject_callback = nullptr;
    QsciLexerMarkdown_Metacast_Callback qscilexermarkdown_metacast_callback = nullptr;
    QsciLexerMarkdown_Metacall_Callback qscilexermarkdown_metacall_callback = nullptr;
    QsciLexerMarkdown_Language_Callback qscilexermarkdown_language_callback = nullptr;
    QsciLexerMarkdown_Lexer_Callback qscilexermarkdown_lexer_callback = nullptr;
    QsciLexerMarkdown_LexerId_Callback qscilexermarkdown_lexerid_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionFillups_Callback qscilexermarkdown_autocompletionfillups_callback = nullptr;
    QsciLexerMarkdown_AutoCompletionWordSeparators_Callback qscilexermarkdown_autocompletionwordseparators_callback = nullptr;
    QsciLexerMarkdown_BlockEnd_Callback qscilexermarkdown_blockend_callback = nullptr;
    QsciLexerMarkdown_BlockLookback_Callback qscilexermarkdown_blocklookback_callback = nullptr;
    QsciLexerMarkdown_BlockStart_Callback qscilexermarkdown_blockstart_callback = nullptr;
    QsciLexerMarkdown_BlockStartKeyword_Callback qscilexermarkdown_blockstartkeyword_callback = nullptr;
    QsciLexerMarkdown_BraceStyle_Callback qscilexermarkdown_bracestyle_callback = nullptr;
    QsciLexerMarkdown_CaseSensitive_Callback qscilexermarkdown_casesensitive_callback = nullptr;
    QsciLexerMarkdown_Color_Callback qscilexermarkdown_color_callback = nullptr;
    QsciLexerMarkdown_EolFill_Callback qscilexermarkdown_eolfill_callback = nullptr;
    QsciLexerMarkdown_Font_Callback qscilexermarkdown_font_callback = nullptr;
    QsciLexerMarkdown_IndentationGuideView_Callback qscilexermarkdown_indentationguideview_callback = nullptr;
    QsciLexerMarkdown_Keywords_Callback qscilexermarkdown_keywords_callback = nullptr;
    QsciLexerMarkdown_DefaultStyle_Callback qscilexermarkdown_defaultstyle_callback = nullptr;
    QsciLexerMarkdown_Description_Callback qscilexermarkdown_description_callback = nullptr;
    QsciLexerMarkdown_Paper_Callback qscilexermarkdown_paper_callback = nullptr;
    QsciLexerMarkdown_DefaultColor2_Callback qscilexermarkdown_defaultcolor2_callback = nullptr;
    QsciLexerMarkdown_DefaultEolFill_Callback qscilexermarkdown_defaulteolfill_callback = nullptr;
    QsciLexerMarkdown_DefaultFont2_Callback qscilexermarkdown_defaultfont2_callback = nullptr;
    QsciLexerMarkdown_DefaultPaper2_Callback qscilexermarkdown_defaultpaper2_callback = nullptr;
    QsciLexerMarkdown_SetEditor_Callback qscilexermarkdown_seteditor_callback = nullptr;
    QsciLexerMarkdown_RefreshProperties_Callback qscilexermarkdown_refreshproperties_callback = nullptr;
    QsciLexerMarkdown_StyleBitsNeeded_Callback qscilexermarkdown_stylebitsneeded_callback = nullptr;
    QsciLexerMarkdown_WordCharacters_Callback qscilexermarkdown_wordcharacters_callback = nullptr;
    QsciLexerMarkdown_SetAutoIndentStyle_Callback qscilexermarkdown_setautoindentstyle_callback = nullptr;
    QsciLexerMarkdown_SetColor_Callback qscilexermarkdown_setcolor_callback = nullptr;
    QsciLexerMarkdown_SetEolFill_Callback qscilexermarkdown_seteolfill_callback = nullptr;
    QsciLexerMarkdown_SetFont_Callback qscilexermarkdown_setfont_callback = nullptr;
    QsciLexerMarkdown_SetPaper_Callback qscilexermarkdown_setpaper_callback = nullptr;
    QsciLexerMarkdown_ReadProperties_Callback qscilexermarkdown_readproperties_callback = nullptr;
    QsciLexerMarkdown_WriteProperties_Callback qscilexermarkdown_writeproperties_callback = nullptr;
    QsciLexerMarkdown_Event_Callback qscilexermarkdown_event_callback = nullptr;
    QsciLexerMarkdown_EventFilter_Callback qscilexermarkdown_eventfilter_callback = nullptr;
    QsciLexerMarkdown_TimerEvent_Callback qscilexermarkdown_timerevent_callback = nullptr;
    QsciLexerMarkdown_ChildEvent_Callback qscilexermarkdown_childevent_callback = nullptr;
    QsciLexerMarkdown_CustomEvent_Callback qscilexermarkdown_customevent_callback = nullptr;
    QsciLexerMarkdown_ConnectNotify_Callback qscilexermarkdown_connectnotify_callback = nullptr;
    QsciLexerMarkdown_DisconnectNotify_Callback qscilexermarkdown_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerMarkdown {
        using QsciLexerMarkdown::childEvent;
        using QsciLexerMarkdown::connectNotify;
        using QsciLexerMarkdown::customEvent;
        using QsciLexerMarkdown::disconnectNotify;
        using QsciLexerMarkdown::readProperties;
        using QsciLexerMarkdown::timerEvent;
        using QsciLexerMarkdown::writeProperties;
    };

    VirtualQsciLexerMarkdown() : QsciLexerMarkdown() {};
    VirtualQsciLexerMarkdown(QObject* parent) : QsciLexerMarkdown(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermarkdown_metaobject_callback) {
            QMetaObject* callback_ret = qscilexermarkdown_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerMarkdown::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermarkdown_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexermarkdown_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermarkdown_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexermarkdown_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermarkdown_language_callback) {
            const char* callback_ret = qscilexermarkdown_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMarkdown::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermarkdown_lexer_callback) {
            const char* callback_ret = qscilexermarkdown_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerMarkdown::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermarkdown_lexerid_callback) {
            int callback_ret = qscilexermarkdown_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermarkdown_autocompletionfillups_callback) {
            const char* callback_ret = qscilexermarkdown_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerMarkdown::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermarkdown_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexermarkdown_autocompletionwordseparators_callback(this);
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
        return QsciLexerMarkdown::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermarkdown_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermarkdown_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermarkdown_blocklookback_callback) {
            int callback_ret = qscilexermarkdown_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermarkdown_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermarkdown_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermarkdown_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermarkdown_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermarkdown_bracestyle_callback) {
            int callback_ret = qscilexermarkdown_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermarkdown_casesensitive_callback) {
            bool callback_ret = qscilexermarkdown_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerMarkdown::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermarkdown_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermarkdown_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermarkdown_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermarkdown_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermarkdown_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermarkdown_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermarkdown_indentationguideview_callback) {
            int callback_ret = qscilexermarkdown_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermarkdown_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexermarkdown_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermarkdown_defaultstyle_callback) {
            int callback_ret = qscilexermarkdown_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermarkdown_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexermarkdown_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMarkdown::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermarkdown_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermarkdown_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermarkdown_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermarkdown_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermarkdown_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermarkdown_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermarkdown_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermarkdown_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermarkdown_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermarkdown_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMarkdown::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermarkdown_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexermarkdown_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermarkdown_refreshproperties_callback) {
            qscilexermarkdown_refreshproperties_callback(this);
            return;
        }
        QsciLexerMarkdown::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermarkdown_stylebitsneeded_callback) {
            int callback_ret = qscilexermarkdown_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMarkdown::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermarkdown_wordcharacters_callback) {
            const char* callback_ret = qscilexermarkdown_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerMarkdown::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermarkdown_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexermarkdown_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermarkdown_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermarkdown_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMarkdown::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermarkdown_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexermarkdown_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMarkdown::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermarkdown_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexermarkdown_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMarkdown::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermarkdown_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermarkdown_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMarkdown::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermarkdown_readproperties_callback) {
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
            bool callback_ret = qscilexermarkdown_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMarkdown::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermarkdown_writeproperties_callback) {
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
            bool callback_ret = qscilexermarkdown_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMarkdown::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermarkdown_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexermarkdown_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMarkdown::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermarkdown_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexermarkdown_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMarkdown::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermarkdown_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexermarkdown_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermarkdown_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexermarkdown_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermarkdown_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexermarkdown_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermarkdown_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermarkdown_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermarkdown_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMarkdown::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerMarkdown_SuperReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMarkdown_SuperWriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMarkdown_SuperTimerEvent(QsciLexerMarkdown* self, QTimerEvent* event);
    friend void QsciLexerMarkdown_SuperChildEvent(QsciLexerMarkdown* self, QChildEvent* event);
    friend void QsciLexerMarkdown_SuperCustomEvent(QsciLexerMarkdown* self, QEvent* event);
    friend void QsciLexerMarkdown_SuperConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
    friend void QsciLexerMarkdown_SuperDisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal);
};

#endif
