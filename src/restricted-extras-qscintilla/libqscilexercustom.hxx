#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCUSTOM_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCUSTOM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCustom
class VirtualQsciLexerCustom : public QsciLexerCustom {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCustom_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Metacast_Callback = void* (*)(QsciLexerCustom*, const char*);
    using QsciLexerCustom_Metacall_Callback = int (*)(QsciLexerCustom*, int, int, void**);
    using QsciLexerCustom_StyleText_Callback = void (*)(QsciLexerCustom*, int, int);
    using QsciLexerCustom_SetEditor_Callback = void (*)(QsciLexerCustom*, QsciScintilla*);
    using QsciLexerCustom_StyleBitsNeeded_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Language_Callback = const char* (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Lexer_Callback = const char* (*)(const QsciLexerCustom*);
    using QsciLexerCustom_LexerId_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCustom*);
    using QsciLexerCustom_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCustom*);
    using QsciLexerCustom_BlockEnd_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BlockLookback_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_BlockStart_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCustom*, int*);
    using QsciLexerCustom_BraceStyle_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_CaseSensitive_Callback = bool (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Color_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_EolFill_Callback = bool (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_Font_Callback = QFont* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_IndentationGuideView_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Keywords_Callback = const char* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultStyle_Callback = int (*)(const QsciLexerCustom*);
    using QsciLexerCustom_Description_Callback = const char* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_Paper_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultColor2_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultEolFill_Callback = bool (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultFont2_Callback = QFont* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCustom*, int);
    using QsciLexerCustom_RefreshProperties_Callback = void (*)(QsciLexerCustom*);
    using QsciLexerCustom_WordCharacters_Callback = const char* (*)(const QsciLexerCustom*);
    using QsciLexerCustom_SetAutoIndentStyle_Callback = void (*)(QsciLexerCustom*, int);
    using QsciLexerCustom_SetColor_Callback = void (*)(QsciLexerCustom*, QColor*, int);
    using QsciLexerCustom_SetEolFill_Callback = void (*)(QsciLexerCustom*, bool, int);
    using QsciLexerCustom_SetFont_Callback = void (*)(QsciLexerCustom*, QFont*, int);
    using QsciLexerCustom_SetPaper_Callback = void (*)(QsciLexerCustom*, QColor*, int);
    using QsciLexerCustom_ReadProperties_Callback = bool (*)(QsciLexerCustom*, QSettings*, const char*);
    using QsciLexerCustom_WriteProperties_Callback = bool (*)(const QsciLexerCustom*, QSettings*, const char*);
    using QsciLexerCustom_Event_Callback = bool (*)(QsciLexerCustom*, QEvent*);
    using QsciLexerCustom_EventFilter_Callback = bool (*)(QsciLexerCustom*, QObject*, QEvent*);
    using QsciLexerCustom_TimerEvent_Callback = void (*)(QsciLexerCustom*, QTimerEvent*);
    using QsciLexerCustom_ChildEvent_Callback = void (*)(QsciLexerCustom*, QChildEvent*);
    using QsciLexerCustom_CustomEvent_Callback = void (*)(QsciLexerCustom*, QEvent*);
    using QsciLexerCustom_ConnectNotify_Callback = void (*)(QsciLexerCustom*, QMetaMethod*);
    using QsciLexerCustom_DisconnectNotify_Callback = void (*)(QsciLexerCustom*, QMetaMethod*);
    using QsciLexerCustom::bytesAsText;
    using QsciLexerCustom::isSignalConnected;
    using QsciLexerCustom::receivers;
    using QsciLexerCustom::sender;
    using QsciLexerCustom::senderSignalIndex;
    using QsciLexerCustom::textAsBytes;

    // Instance callback storage
    QsciLexerCustom_MetaObject_Callback qscilexercustom_metaobject_callback = nullptr;
    QsciLexerCustom_Metacast_Callback qscilexercustom_metacast_callback = nullptr;
    QsciLexerCustom_Metacall_Callback qscilexercustom_metacall_callback = nullptr;
    QsciLexerCustom_StyleText_Callback qscilexercustom_styletext_callback = nullptr;
    QsciLexerCustom_SetEditor_Callback qscilexercustom_seteditor_callback = nullptr;
    QsciLexerCustom_StyleBitsNeeded_Callback qscilexercustom_stylebitsneeded_callback = nullptr;
    QsciLexerCustom_Language_Callback qscilexercustom_language_callback = nullptr;
    QsciLexerCustom_Lexer_Callback qscilexercustom_lexer_callback = nullptr;
    QsciLexerCustom_LexerId_Callback qscilexercustom_lexerid_callback = nullptr;
    QsciLexerCustom_AutoCompletionFillups_Callback qscilexercustom_autocompletionfillups_callback = nullptr;
    QsciLexerCustom_AutoCompletionWordSeparators_Callback qscilexercustom_autocompletionwordseparators_callback = nullptr;
    QsciLexerCustom_BlockEnd_Callback qscilexercustom_blockend_callback = nullptr;
    QsciLexerCustom_BlockLookback_Callback qscilexercustom_blocklookback_callback = nullptr;
    QsciLexerCustom_BlockStart_Callback qscilexercustom_blockstart_callback = nullptr;
    QsciLexerCustom_BlockStartKeyword_Callback qscilexercustom_blockstartkeyword_callback = nullptr;
    QsciLexerCustom_BraceStyle_Callback qscilexercustom_bracestyle_callback = nullptr;
    QsciLexerCustom_CaseSensitive_Callback qscilexercustom_casesensitive_callback = nullptr;
    QsciLexerCustom_Color_Callback qscilexercustom_color_callback = nullptr;
    QsciLexerCustom_EolFill_Callback qscilexercustom_eolfill_callback = nullptr;
    QsciLexerCustom_Font_Callback qscilexercustom_font_callback = nullptr;
    QsciLexerCustom_IndentationGuideView_Callback qscilexercustom_indentationguideview_callback = nullptr;
    QsciLexerCustom_Keywords_Callback qscilexercustom_keywords_callback = nullptr;
    QsciLexerCustom_DefaultStyle_Callback qscilexercustom_defaultstyle_callback = nullptr;
    QsciLexerCustom_Description_Callback qscilexercustom_description_callback = nullptr;
    QsciLexerCustom_Paper_Callback qscilexercustom_paper_callback = nullptr;
    QsciLexerCustom_DefaultColor2_Callback qscilexercustom_defaultcolor2_callback = nullptr;
    QsciLexerCustom_DefaultEolFill_Callback qscilexercustom_defaulteolfill_callback = nullptr;
    QsciLexerCustom_DefaultFont2_Callback qscilexercustom_defaultfont2_callback = nullptr;
    QsciLexerCustom_DefaultPaper2_Callback qscilexercustom_defaultpaper2_callback = nullptr;
    QsciLexerCustom_RefreshProperties_Callback qscilexercustom_refreshproperties_callback = nullptr;
    QsciLexerCustom_WordCharacters_Callback qscilexercustom_wordcharacters_callback = nullptr;
    QsciLexerCustom_SetAutoIndentStyle_Callback qscilexercustom_setautoindentstyle_callback = nullptr;
    QsciLexerCustom_SetColor_Callback qscilexercustom_setcolor_callback = nullptr;
    QsciLexerCustom_SetEolFill_Callback qscilexercustom_seteolfill_callback = nullptr;
    QsciLexerCustom_SetFont_Callback qscilexercustom_setfont_callback = nullptr;
    QsciLexerCustom_SetPaper_Callback qscilexercustom_setpaper_callback = nullptr;
    QsciLexerCustom_ReadProperties_Callback qscilexercustom_readproperties_callback = nullptr;
    QsciLexerCustom_WriteProperties_Callback qscilexercustom_writeproperties_callback = nullptr;
    QsciLexerCustom_Event_Callback qscilexercustom_event_callback = nullptr;
    QsciLexerCustom_EventFilter_Callback qscilexercustom_eventfilter_callback = nullptr;
    QsciLexerCustom_TimerEvent_Callback qscilexercustom_timerevent_callback = nullptr;
    QsciLexerCustom_ChildEvent_Callback qscilexercustom_childevent_callback = nullptr;
    QsciLexerCustom_CustomEvent_Callback qscilexercustom_customevent_callback = nullptr;
    QsciLexerCustom_ConnectNotify_Callback qscilexercustom_connectnotify_callback = nullptr;
    QsciLexerCustom_DisconnectNotify_Callback qscilexercustom_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCustom {
        using QsciLexerCustom::childEvent;
        using QsciLexerCustom::connectNotify;
        using QsciLexerCustom::customEvent;
        using QsciLexerCustom::disconnectNotify;
        using QsciLexerCustom::readProperties;
        using QsciLexerCustom::timerEvent;
        using QsciLexerCustom::writeProperties;
    };

    VirtualQsciLexerCustom() : QsciLexerCustom() {};
    VirtualQsciLexerCustom(QObject* parent) : QsciLexerCustom(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercustom_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercustom_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCustom::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercustom_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercustom_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercustom_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercustom_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void styleText(int start, int end) override {
        if (qscilexercustom_styletext_callback) {
            int cbval1 = start;
            int cbval2 = end;
            qscilexercustom_styletext_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCustom::styleText called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercustom_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercustom_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercustom_stylebitsneeded_callback) {
            int callback_ret = qscilexercustom_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercustom_language_callback) {
            const char* callback_ret = qscilexercustom_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCustom::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercustom_lexer_callback) {
            const char* callback_ret = qscilexercustom_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCustom::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercustom_lexerid_callback) {
            int callback_ret = qscilexercustom_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercustom_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercustom_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCustom::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercustom_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercustom_autocompletionwordseparators_callback(this);
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
        return QsciLexerCustom::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercustom_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercustom_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercustom_blocklookback_callback) {
            int callback_ret = qscilexercustom_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercustom_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercustom_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercustom_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercustom_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercustom_bracestyle_callback) {
            int callback_ret = qscilexercustom_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercustom_casesensitive_callback) {
            bool callback_ret = qscilexercustom_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCustom::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercustom_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercustom_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercustom_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercustom_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercustom_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercustom_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercustom_indentationguideview_callback) {
            int callback_ret = qscilexercustom_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercustom_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercustom_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercustom_defaultstyle_callback) {
            int callback_ret = qscilexercustom_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCustom::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercustom_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercustom_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCustom::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercustom_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercustom_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercustom_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercustom_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercustom_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercustom_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercustom_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercustom_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercustom_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercustom_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCustom::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercustom_refreshproperties_callback) {
            qscilexercustom_refreshproperties_callback(this);
            return;
        }
        QsciLexerCustom::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercustom_wordcharacters_callback) {
            const char* callback_ret = qscilexercustom_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCustom::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercustom_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercustom_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercustom_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercustom_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCustom::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercustom_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercustom_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCustom::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercustom_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercustom_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCustom::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercustom_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercustom_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCustom::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercustom_readproperties_callback) {
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
            bool callback_ret = qscilexercustom_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCustom::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercustom_writeproperties_callback) {
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
            bool callback_ret = qscilexercustom_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCustom::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercustom_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercustom_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCustom::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercustom_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercustom_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCustom::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercustom_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercustom_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercustom_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercustom_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercustom_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercustom_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercustom_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercustom_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercustom_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercustom_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCustom::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCustom_SuperReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCustom_SuperWriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCustom_SuperTimerEvent(QsciLexerCustom* self, QTimerEvent* event);
    friend void QsciLexerCustom_SuperChildEvent(QsciLexerCustom* self, QChildEvent* event);
    friend void QsciLexerCustom_SuperCustomEvent(QsciLexerCustom* self, QEvent* event);
    friend void QsciLexerCustom_SuperConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
    friend void QsciLexerCustom_SuperDisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal);
};

#endif
