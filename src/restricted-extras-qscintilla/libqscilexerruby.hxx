#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERRUBY_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERRUBY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerRuby
class VirtualQsciLexerRuby final : public QsciLexerRuby {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerRuby_MetaObject_Callback = QMetaObject* (*)(const QsciLexerRuby*);
    using QsciLexerRuby_Metacast_Callback = void* (*)(QsciLexerRuby*, const char*);
    using QsciLexerRuby_Metacall_Callback = int (*)(QsciLexerRuby*, int, int, void**);
    using QsciLexerRuby_Language_Callback = const char* (*)(const QsciLexerRuby*);
    using QsciLexerRuby_Lexer_Callback = const char* (*)(const QsciLexerRuby*);
    using QsciLexerRuby_LexerId_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerRuby*);
    using QsciLexerRuby_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerRuby*);
    using QsciLexerRuby_BlockEnd_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockLookback_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_BlockStart_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BlockStartKeyword_Callback = const char* (*)(const QsciLexerRuby*, int*);
    using QsciLexerRuby_BraceStyle_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_CaseSensitive_Callback = bool (*)(const QsciLexerRuby*);
    using QsciLexerRuby_Color_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_EolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Font_Callback = QFont* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_IndentationGuideView_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_Keywords_Callback = const char* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultStyle_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_Description_Callback = const char* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_Paper_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultColor2_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultEolFill_Callback = bool (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultFont2_Callback = QFont* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_DefaultPaper2_Callback = QColor* (*)(const QsciLexerRuby*, int);
    using QsciLexerRuby_SetEditor_Callback = void (*)(QsciLexerRuby*, QsciScintilla*);
    using QsciLexerRuby_RefreshProperties_Callback = void (*)(QsciLexerRuby*);
    using QsciLexerRuby_StyleBitsNeeded_Callback = int (*)(const QsciLexerRuby*);
    using QsciLexerRuby_WordCharacters_Callback = const char* (*)(const QsciLexerRuby*);
    using QsciLexerRuby_SetAutoIndentStyle_Callback = void (*)(QsciLexerRuby*, int);
    using QsciLexerRuby_SetColor_Callback = void (*)(QsciLexerRuby*, QColor*, int);
    using QsciLexerRuby_SetEolFill_Callback = void (*)(QsciLexerRuby*, bool, int);
    using QsciLexerRuby_SetFont_Callback = void (*)(QsciLexerRuby*, QFont*, int);
    using QsciLexerRuby_SetPaper_Callback = void (*)(QsciLexerRuby*, QColor*, int);
    using QsciLexerRuby_ReadProperties_Callback = bool (*)(QsciLexerRuby*, QSettings*, const char*);
    using QsciLexerRuby_WriteProperties_Callback = bool (*)(const QsciLexerRuby*, QSettings*, const char*);
    using QsciLexerRuby_Event_Callback = bool (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_EventFilter_Callback = bool (*)(QsciLexerRuby*, QObject*, QEvent*);
    using QsciLexerRuby_TimerEvent_Callback = void (*)(QsciLexerRuby*, QTimerEvent*);
    using QsciLexerRuby_ChildEvent_Callback = void (*)(QsciLexerRuby*, QChildEvent*);
    using QsciLexerRuby_CustomEvent_Callback = void (*)(QsciLexerRuby*, QEvent*);
    using QsciLexerRuby_ConnectNotify_Callback = void (*)(QsciLexerRuby*, QMetaMethod*);
    using QsciLexerRuby_DisconnectNotify_Callback = void (*)(QsciLexerRuby*, QMetaMethod*);
    using QsciLexerRuby::bytesAsText;
    using QsciLexerRuby::isSignalConnected;
    using QsciLexerRuby::receivers;
    using QsciLexerRuby::sender;
    using QsciLexerRuby::senderSignalIndex;
    using QsciLexerRuby::textAsBytes;

    // Instance callback storage
    QsciLexerRuby_MetaObject_Callback qscilexerruby_metaobject_callback = nullptr;
    QsciLexerRuby_Metacast_Callback qscilexerruby_metacast_callback = nullptr;
    QsciLexerRuby_Metacall_Callback qscilexerruby_metacall_callback = nullptr;
    QsciLexerRuby_Language_Callback qscilexerruby_language_callback = nullptr;
    QsciLexerRuby_Lexer_Callback qscilexerruby_lexer_callback = nullptr;
    QsciLexerRuby_LexerId_Callback qscilexerruby_lexerid_callback = nullptr;
    QsciLexerRuby_AutoCompletionFillups_Callback qscilexerruby_autocompletionfillups_callback = nullptr;
    QsciLexerRuby_AutoCompletionWordSeparators_Callback qscilexerruby_autocompletionwordseparators_callback = nullptr;
    QsciLexerRuby_BlockEnd_Callback qscilexerruby_blockend_callback = nullptr;
    QsciLexerRuby_BlockLookback_Callback qscilexerruby_blocklookback_callback = nullptr;
    QsciLexerRuby_BlockStart_Callback qscilexerruby_blockstart_callback = nullptr;
    QsciLexerRuby_BlockStartKeyword_Callback qscilexerruby_blockstartkeyword_callback = nullptr;
    QsciLexerRuby_BraceStyle_Callback qscilexerruby_bracestyle_callback = nullptr;
    QsciLexerRuby_CaseSensitive_Callback qscilexerruby_casesensitive_callback = nullptr;
    QsciLexerRuby_Color_Callback qscilexerruby_color_callback = nullptr;
    QsciLexerRuby_EolFill_Callback qscilexerruby_eolfill_callback = nullptr;
    QsciLexerRuby_Font_Callback qscilexerruby_font_callback = nullptr;
    QsciLexerRuby_IndentationGuideView_Callback qscilexerruby_indentationguideview_callback = nullptr;
    QsciLexerRuby_Keywords_Callback qscilexerruby_keywords_callback = nullptr;
    QsciLexerRuby_DefaultStyle_Callback qscilexerruby_defaultstyle_callback = nullptr;
    QsciLexerRuby_Description_Callback qscilexerruby_description_callback = nullptr;
    QsciLexerRuby_Paper_Callback qscilexerruby_paper_callback = nullptr;
    QsciLexerRuby_DefaultColor2_Callback qscilexerruby_defaultcolor2_callback = nullptr;
    QsciLexerRuby_DefaultEolFill_Callback qscilexerruby_defaulteolfill_callback = nullptr;
    QsciLexerRuby_DefaultFont2_Callback qscilexerruby_defaultfont2_callback = nullptr;
    QsciLexerRuby_DefaultPaper2_Callback qscilexerruby_defaultpaper2_callback = nullptr;
    QsciLexerRuby_SetEditor_Callback qscilexerruby_seteditor_callback = nullptr;
    QsciLexerRuby_RefreshProperties_Callback qscilexerruby_refreshproperties_callback = nullptr;
    QsciLexerRuby_StyleBitsNeeded_Callback qscilexerruby_stylebitsneeded_callback = nullptr;
    QsciLexerRuby_WordCharacters_Callback qscilexerruby_wordcharacters_callback = nullptr;
    QsciLexerRuby_SetAutoIndentStyle_Callback qscilexerruby_setautoindentstyle_callback = nullptr;
    QsciLexerRuby_SetColor_Callback qscilexerruby_setcolor_callback = nullptr;
    QsciLexerRuby_SetEolFill_Callback qscilexerruby_seteolfill_callback = nullptr;
    QsciLexerRuby_SetFont_Callback qscilexerruby_setfont_callback = nullptr;
    QsciLexerRuby_SetPaper_Callback qscilexerruby_setpaper_callback = nullptr;
    QsciLexerRuby_ReadProperties_Callback qscilexerruby_readproperties_callback = nullptr;
    QsciLexerRuby_WriteProperties_Callback qscilexerruby_writeproperties_callback = nullptr;
    QsciLexerRuby_Event_Callback qscilexerruby_event_callback = nullptr;
    QsciLexerRuby_EventFilter_Callback qscilexerruby_eventfilter_callback = nullptr;
    QsciLexerRuby_TimerEvent_Callback qscilexerruby_timerevent_callback = nullptr;
    QsciLexerRuby_ChildEvent_Callback qscilexerruby_childevent_callback = nullptr;
    QsciLexerRuby_CustomEvent_Callback qscilexerruby_customevent_callback = nullptr;
    QsciLexerRuby_ConnectNotify_Callback qscilexerruby_connectnotify_callback = nullptr;
    QsciLexerRuby_DisconnectNotify_Callback qscilexerruby_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerRuby {
        using QsciLexerRuby::childEvent;
        using QsciLexerRuby::connectNotify;
        using QsciLexerRuby::customEvent;
        using QsciLexerRuby::disconnectNotify;
        using QsciLexerRuby::readProperties;
        using QsciLexerRuby::timerEvent;
        using QsciLexerRuby::writeProperties;
    };

    VirtualQsciLexerRuby() : QsciLexerRuby() {};
    VirtualQsciLexerRuby(QObject* parent) : QsciLexerRuby(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerruby_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerruby_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerRuby::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerruby_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerruby_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerruby_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerruby_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerruby_language_callback) {
            const char* callback_ret = qscilexerruby_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerRuby::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerruby_lexer_callback) {
            const char* callback_ret = qscilexerruby_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerRuby::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerruby_lexerid_callback) {
            int callback_ret = qscilexerruby_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerruby_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerruby_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerRuby::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerruby_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerruby_autocompletionwordseparators_callback(this);
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
        return QsciLexerRuby::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerruby_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerruby_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerruby_blocklookback_callback) {
            int callback_ret = qscilexerruby_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerruby_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerruby_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerruby_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerruby_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerruby_bracestyle_callback) {
            int callback_ret = qscilexerruby_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerruby_casesensitive_callback) {
            bool callback_ret = qscilexerruby_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerRuby::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerruby_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerruby_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerruby_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerruby_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerruby_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerruby_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerruby_indentationguideview_callback) {
            int callback_ret = qscilexerruby_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerruby_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerruby_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerruby_defaultstyle_callback) {
            int callback_ret = qscilexerruby_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerruby_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerruby_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerRuby::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerruby_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerruby_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerruby_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerruby_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerruby_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerruby_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerruby_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerruby_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerruby_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerruby_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerRuby::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerruby_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerruby_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerruby_refreshproperties_callback) {
            qscilexerruby_refreshproperties_callback(this);
            return;
        }
        QsciLexerRuby::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerruby_stylebitsneeded_callback) {
            int callback_ret = qscilexerruby_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerRuby::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerruby_wordcharacters_callback) {
            const char* callback_ret = qscilexerruby_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerRuby::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerruby_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerruby_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerruby_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerruby_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerruby_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerruby_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerruby_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerruby_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerruby_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerruby_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerRuby::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerruby_readproperties_callback) {
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
            bool callback_ret = qscilexerruby_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerRuby::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerruby_writeproperties_callback) {
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
            bool callback_ret = qscilexerruby_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerRuby::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerruby_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerruby_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerRuby::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerruby_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerruby_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerRuby::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerruby_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerruby_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerruby_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerruby_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerruby_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerruby_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerruby_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerruby_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerruby_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerRuby::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerRuby_SuperReadProperties(QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerRuby_SuperWriteProperties(const QsciLexerRuby* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerRuby_SuperTimerEvent(QsciLexerRuby* self, QTimerEvent* event);
    friend void QsciLexerRuby_SuperChildEvent(QsciLexerRuby* self, QChildEvent* event);
    friend void QsciLexerRuby_SuperCustomEvent(QsciLexerRuby* self, QEvent* event);
    friend void QsciLexerRuby_SuperConnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
    friend void QsciLexerRuby_SuperDisconnectNotify(QsciLexerRuby* self, const QMetaMethod* signal);
};

#endif
