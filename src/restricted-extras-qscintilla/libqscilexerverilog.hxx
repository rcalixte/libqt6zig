#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERVERILOG_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERVERILOG_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVerilog
class VirtualQsciLexerVerilog final : public QsciLexerVerilog {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerVerilog_MetaObject_Callback = QMetaObject* (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_Metacast_Callback = void* (*)(QsciLexerVerilog*, const char*);
    using QsciLexerVerilog_Metacall_Callback = int (*)(QsciLexerVerilog*, int, int, void**);
    using QsciLexerVerilog_Language_Callback = const char* (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_Lexer_Callback = const char* (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_LexerId_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_BlockEnd_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockLookback_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_BlockStart_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVerilog*, int*);
    using QsciLexerVerilog_BraceStyle_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_CaseSensitive_Callback = bool (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_Color_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_EolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Font_Callback = QFont* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_IndentationGuideView_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_Keywords_Callback = const char* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultStyle_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_Description_Callback = const char* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_Paper_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultColor2_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultEolFill_Callback = bool (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultFont2_Callback = QFont* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_DefaultPaper2_Callback = QColor* (*)(const QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetEditor_Callback = void (*)(QsciLexerVerilog*, QsciScintilla*);
    using QsciLexerVerilog_RefreshProperties_Callback = void (*)(QsciLexerVerilog*);
    using QsciLexerVerilog_StyleBitsNeeded_Callback = int (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_WordCharacters_Callback = const char* (*)(const QsciLexerVerilog*);
    using QsciLexerVerilog_SetAutoIndentStyle_Callback = void (*)(QsciLexerVerilog*, int);
    using QsciLexerVerilog_SetColor_Callback = void (*)(QsciLexerVerilog*, QColor*, int);
    using QsciLexerVerilog_SetEolFill_Callback = void (*)(QsciLexerVerilog*, bool, int);
    using QsciLexerVerilog_SetFont_Callback = void (*)(QsciLexerVerilog*, QFont*, int);
    using QsciLexerVerilog_SetPaper_Callback = void (*)(QsciLexerVerilog*, QColor*, int);
    using QsciLexerVerilog_ReadProperties_Callback = bool (*)(QsciLexerVerilog*, QSettings*, const char*);
    using QsciLexerVerilog_WriteProperties_Callback = bool (*)(const QsciLexerVerilog*, QSettings*, const char*);
    using QsciLexerVerilog_Event_Callback = bool (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_EventFilter_Callback = bool (*)(QsciLexerVerilog*, QObject*, QEvent*);
    using QsciLexerVerilog_TimerEvent_Callback = void (*)(QsciLexerVerilog*, QTimerEvent*);
    using QsciLexerVerilog_ChildEvent_Callback = void (*)(QsciLexerVerilog*, QChildEvent*);
    using QsciLexerVerilog_CustomEvent_Callback = void (*)(QsciLexerVerilog*, QEvent*);
    using QsciLexerVerilog_ConnectNotify_Callback = void (*)(QsciLexerVerilog*, QMetaMethod*);
    using QsciLexerVerilog_DisconnectNotify_Callback = void (*)(QsciLexerVerilog*, QMetaMethod*);
    using QsciLexerVerilog::bytesAsText;
    using QsciLexerVerilog::isSignalConnected;
    using QsciLexerVerilog::receivers;
    using QsciLexerVerilog::sender;
    using QsciLexerVerilog::senderSignalIndex;
    using QsciLexerVerilog::textAsBytes;

    // Instance callback storage
    QsciLexerVerilog_MetaObject_Callback qscilexerverilog_metaobject_callback = nullptr;
    QsciLexerVerilog_Metacast_Callback qscilexerverilog_metacast_callback = nullptr;
    QsciLexerVerilog_Metacall_Callback qscilexerverilog_metacall_callback = nullptr;
    QsciLexerVerilog_Language_Callback qscilexerverilog_language_callback = nullptr;
    QsciLexerVerilog_Lexer_Callback qscilexerverilog_lexer_callback = nullptr;
    QsciLexerVerilog_LexerId_Callback qscilexerverilog_lexerid_callback = nullptr;
    QsciLexerVerilog_AutoCompletionFillups_Callback qscilexerverilog_autocompletionfillups_callback = nullptr;
    QsciLexerVerilog_AutoCompletionWordSeparators_Callback qscilexerverilog_autocompletionwordseparators_callback = nullptr;
    QsciLexerVerilog_BlockEnd_Callback qscilexerverilog_blockend_callback = nullptr;
    QsciLexerVerilog_BlockLookback_Callback qscilexerverilog_blocklookback_callback = nullptr;
    QsciLexerVerilog_BlockStart_Callback qscilexerverilog_blockstart_callback = nullptr;
    QsciLexerVerilog_BlockStartKeyword_Callback qscilexerverilog_blockstartkeyword_callback = nullptr;
    QsciLexerVerilog_BraceStyle_Callback qscilexerverilog_bracestyle_callback = nullptr;
    QsciLexerVerilog_CaseSensitive_Callback qscilexerverilog_casesensitive_callback = nullptr;
    QsciLexerVerilog_Color_Callback qscilexerverilog_color_callback = nullptr;
    QsciLexerVerilog_EolFill_Callback qscilexerverilog_eolfill_callback = nullptr;
    QsciLexerVerilog_Font_Callback qscilexerverilog_font_callback = nullptr;
    QsciLexerVerilog_IndentationGuideView_Callback qscilexerverilog_indentationguideview_callback = nullptr;
    QsciLexerVerilog_Keywords_Callback qscilexerverilog_keywords_callback = nullptr;
    QsciLexerVerilog_DefaultStyle_Callback qscilexerverilog_defaultstyle_callback = nullptr;
    QsciLexerVerilog_Description_Callback qscilexerverilog_description_callback = nullptr;
    QsciLexerVerilog_Paper_Callback qscilexerverilog_paper_callback = nullptr;
    QsciLexerVerilog_DefaultColor2_Callback qscilexerverilog_defaultcolor2_callback = nullptr;
    QsciLexerVerilog_DefaultEolFill_Callback qscilexerverilog_defaulteolfill_callback = nullptr;
    QsciLexerVerilog_DefaultFont2_Callback qscilexerverilog_defaultfont2_callback = nullptr;
    QsciLexerVerilog_DefaultPaper2_Callback qscilexerverilog_defaultpaper2_callback = nullptr;
    QsciLexerVerilog_SetEditor_Callback qscilexerverilog_seteditor_callback = nullptr;
    QsciLexerVerilog_RefreshProperties_Callback qscilexerverilog_refreshproperties_callback = nullptr;
    QsciLexerVerilog_StyleBitsNeeded_Callback qscilexerverilog_stylebitsneeded_callback = nullptr;
    QsciLexerVerilog_WordCharacters_Callback qscilexerverilog_wordcharacters_callback = nullptr;
    QsciLexerVerilog_SetAutoIndentStyle_Callback qscilexerverilog_setautoindentstyle_callback = nullptr;
    QsciLexerVerilog_SetColor_Callback qscilexerverilog_setcolor_callback = nullptr;
    QsciLexerVerilog_SetEolFill_Callback qscilexerverilog_seteolfill_callback = nullptr;
    QsciLexerVerilog_SetFont_Callback qscilexerverilog_setfont_callback = nullptr;
    QsciLexerVerilog_SetPaper_Callback qscilexerverilog_setpaper_callback = nullptr;
    QsciLexerVerilog_ReadProperties_Callback qscilexerverilog_readproperties_callback = nullptr;
    QsciLexerVerilog_WriteProperties_Callback qscilexerverilog_writeproperties_callback = nullptr;
    QsciLexerVerilog_Event_Callback qscilexerverilog_event_callback = nullptr;
    QsciLexerVerilog_EventFilter_Callback qscilexerverilog_eventfilter_callback = nullptr;
    QsciLexerVerilog_TimerEvent_Callback qscilexerverilog_timerevent_callback = nullptr;
    QsciLexerVerilog_ChildEvent_Callback qscilexerverilog_childevent_callback = nullptr;
    QsciLexerVerilog_CustomEvent_Callback qscilexerverilog_customevent_callback = nullptr;
    QsciLexerVerilog_ConnectNotify_Callback qscilexerverilog_connectnotify_callback = nullptr;
    QsciLexerVerilog_DisconnectNotify_Callback qscilexerverilog_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerVerilog {
        using QsciLexerVerilog::childEvent;
        using QsciLexerVerilog::connectNotify;
        using QsciLexerVerilog::customEvent;
        using QsciLexerVerilog::disconnectNotify;
        using QsciLexerVerilog::readProperties;
        using QsciLexerVerilog::timerEvent;
        using QsciLexerVerilog::writeProperties;
    };

    VirtualQsciLexerVerilog() : QsciLexerVerilog() {};
    VirtualQsciLexerVerilog(QObject* parent) : QsciLexerVerilog(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerverilog_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerverilog_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerVerilog::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerverilog_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerverilog_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerverilog_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerverilog_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerverilog_language_callback) {
            const char* callback_ret = qscilexerverilog_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerVerilog::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerverilog_lexer_callback) {
            const char* callback_ret = qscilexerverilog_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerVerilog::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerverilog_lexerid_callback) {
            int callback_ret = qscilexerverilog_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerverilog_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerverilog_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerVerilog::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerverilog_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerverilog_autocompletionwordseparators_callback(this);
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
        return QsciLexerVerilog::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerverilog_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerverilog_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerverilog_blocklookback_callback) {
            int callback_ret = qscilexerverilog_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerverilog_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerverilog_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerverilog_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerverilog_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerverilog_bracestyle_callback) {
            int callback_ret = qscilexerverilog_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerverilog_casesensitive_callback) {
            bool callback_ret = qscilexerverilog_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerVerilog::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerverilog_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerverilog_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerverilog_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerverilog_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerverilog_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerverilog_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerverilog_indentationguideview_callback) {
            int callback_ret = qscilexerverilog_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerverilog_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerverilog_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerverilog_defaultstyle_callback) {
            int callback_ret = qscilexerverilog_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerverilog_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerverilog_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerVerilog::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerverilog_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerverilog_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerverilog_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerverilog_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerverilog_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerverilog_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerverilog_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerverilog_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerverilog_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerverilog_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVerilog::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerverilog_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerverilog_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerverilog_refreshproperties_callback) {
            qscilexerverilog_refreshproperties_callback(this);
            return;
        }
        QsciLexerVerilog::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerverilog_stylebitsneeded_callback) {
            int callback_ret = qscilexerverilog_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVerilog::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerverilog_wordcharacters_callback) {
            const char* callback_ret = qscilexerverilog_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerVerilog::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerverilog_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerverilog_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerverilog_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerverilog_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVerilog::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerverilog_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerverilog_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVerilog::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerverilog_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerverilog_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVerilog::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerverilog_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerverilog_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVerilog::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerverilog_readproperties_callback) {
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
            bool callback_ret = qscilexerverilog_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerVerilog::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerverilog_writeproperties_callback) {
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
            bool callback_ret = qscilexerverilog_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerVerilog::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerverilog_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerverilog_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVerilog::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerverilog_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerverilog_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerVerilog::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerverilog_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerverilog_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerverilog_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerverilog_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerverilog_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerverilog_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerverilog_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerverilog_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerverilog_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerVerilog::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerVerilog_SuperReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVerilog_SuperWriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerVerilog_SuperTimerEvent(QsciLexerVerilog* self, QTimerEvent* event);
    friend void QsciLexerVerilog_SuperChildEvent(QsciLexerVerilog* self, QChildEvent* event);
    friend void QsciLexerVerilog_SuperCustomEvent(QsciLexerVerilog* self, QEvent* event);
    friend void QsciLexerVerilog_SuperConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
    friend void QsciLexerVerilog_SuperDisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal);
};

#endif
