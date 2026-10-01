#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMAKEFILE_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMAKEFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMakefile
class VirtualQsciLexerMakefile final : public QsciLexerMakefile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerMakefile_MetaObject_Callback = QMetaObject* (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_Metacast_Callback = void* (*)(QsciLexerMakefile*, const char*);
    using QsciLexerMakefile_Metacall_Callback = int (*)(QsciLexerMakefile*, int, int, void**);
    using QsciLexerMakefile_Language_Callback = const char* (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_Lexer_Callback = const char* (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_LexerId_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_BlockEnd_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockLookback_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_BlockStart_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMakefile*, int*);
    using QsciLexerMakefile_BraceStyle_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_CaseSensitive_Callback = bool (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_Color_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_EolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Font_Callback = QFont* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_IndentationGuideView_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_Keywords_Callback = const char* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultStyle_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_Description_Callback = const char* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_Paper_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultColor2_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultEolFill_Callback = bool (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultFont2_Callback = QFont* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetEditor_Callback = void (*)(QsciLexerMakefile*, QsciScintilla*);
    using QsciLexerMakefile_RefreshProperties_Callback = void (*)(QsciLexerMakefile*);
    using QsciLexerMakefile_StyleBitsNeeded_Callback = int (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_WordCharacters_Callback = const char* (*)(const QsciLexerMakefile*);
    using QsciLexerMakefile_SetAutoIndentStyle_Callback = void (*)(QsciLexerMakefile*, int);
    using QsciLexerMakefile_SetColor_Callback = void (*)(QsciLexerMakefile*, QColor*, int);
    using QsciLexerMakefile_SetEolFill_Callback = void (*)(QsciLexerMakefile*, bool, int);
    using QsciLexerMakefile_SetFont_Callback = void (*)(QsciLexerMakefile*, QFont*, int);
    using QsciLexerMakefile_SetPaper_Callback = void (*)(QsciLexerMakefile*, QColor*, int);
    using QsciLexerMakefile_ReadProperties_Callback = bool (*)(QsciLexerMakefile*, QSettings*, const char*);
    using QsciLexerMakefile_WriteProperties_Callback = bool (*)(const QsciLexerMakefile*, QSettings*, const char*);
    using QsciLexerMakefile_Event_Callback = bool (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_EventFilter_Callback = bool (*)(QsciLexerMakefile*, QObject*, QEvent*);
    using QsciLexerMakefile_TimerEvent_Callback = void (*)(QsciLexerMakefile*, QTimerEvent*);
    using QsciLexerMakefile_ChildEvent_Callback = void (*)(QsciLexerMakefile*, QChildEvent*);
    using QsciLexerMakefile_CustomEvent_Callback = void (*)(QsciLexerMakefile*, QEvent*);
    using QsciLexerMakefile_ConnectNotify_Callback = void (*)(QsciLexerMakefile*, QMetaMethod*);
    using QsciLexerMakefile_DisconnectNotify_Callback = void (*)(QsciLexerMakefile*, QMetaMethod*);
    using QsciLexerMakefile::bytesAsText;
    using QsciLexerMakefile::isSignalConnected;
    using QsciLexerMakefile::receivers;
    using QsciLexerMakefile::sender;
    using QsciLexerMakefile::senderSignalIndex;
    using QsciLexerMakefile::textAsBytes;

    // Instance callback storage
    QsciLexerMakefile_MetaObject_Callback qscilexermakefile_metaobject_callback = nullptr;
    QsciLexerMakefile_Metacast_Callback qscilexermakefile_metacast_callback = nullptr;
    QsciLexerMakefile_Metacall_Callback qscilexermakefile_metacall_callback = nullptr;
    QsciLexerMakefile_Language_Callback qscilexermakefile_language_callback = nullptr;
    QsciLexerMakefile_Lexer_Callback qscilexermakefile_lexer_callback = nullptr;
    QsciLexerMakefile_LexerId_Callback qscilexermakefile_lexerid_callback = nullptr;
    QsciLexerMakefile_AutoCompletionFillups_Callback qscilexermakefile_autocompletionfillups_callback = nullptr;
    QsciLexerMakefile_AutoCompletionWordSeparators_Callback qscilexermakefile_autocompletionwordseparators_callback = nullptr;
    QsciLexerMakefile_BlockEnd_Callback qscilexermakefile_blockend_callback = nullptr;
    QsciLexerMakefile_BlockLookback_Callback qscilexermakefile_blocklookback_callback = nullptr;
    QsciLexerMakefile_BlockStart_Callback qscilexermakefile_blockstart_callback = nullptr;
    QsciLexerMakefile_BlockStartKeyword_Callback qscilexermakefile_blockstartkeyword_callback = nullptr;
    QsciLexerMakefile_BraceStyle_Callback qscilexermakefile_bracestyle_callback = nullptr;
    QsciLexerMakefile_CaseSensitive_Callback qscilexermakefile_casesensitive_callback = nullptr;
    QsciLexerMakefile_Color_Callback qscilexermakefile_color_callback = nullptr;
    QsciLexerMakefile_EolFill_Callback qscilexermakefile_eolfill_callback = nullptr;
    QsciLexerMakefile_Font_Callback qscilexermakefile_font_callback = nullptr;
    QsciLexerMakefile_IndentationGuideView_Callback qscilexermakefile_indentationguideview_callback = nullptr;
    QsciLexerMakefile_Keywords_Callback qscilexermakefile_keywords_callback = nullptr;
    QsciLexerMakefile_DefaultStyle_Callback qscilexermakefile_defaultstyle_callback = nullptr;
    QsciLexerMakefile_Description_Callback qscilexermakefile_description_callback = nullptr;
    QsciLexerMakefile_Paper_Callback qscilexermakefile_paper_callback = nullptr;
    QsciLexerMakefile_DefaultColor2_Callback qscilexermakefile_defaultcolor2_callback = nullptr;
    QsciLexerMakefile_DefaultEolFill_Callback qscilexermakefile_defaulteolfill_callback = nullptr;
    QsciLexerMakefile_DefaultFont2_Callback qscilexermakefile_defaultfont2_callback = nullptr;
    QsciLexerMakefile_DefaultPaper2_Callback qscilexermakefile_defaultpaper2_callback = nullptr;
    QsciLexerMakefile_SetEditor_Callback qscilexermakefile_seteditor_callback = nullptr;
    QsciLexerMakefile_RefreshProperties_Callback qscilexermakefile_refreshproperties_callback = nullptr;
    QsciLexerMakefile_StyleBitsNeeded_Callback qscilexermakefile_stylebitsneeded_callback = nullptr;
    QsciLexerMakefile_WordCharacters_Callback qscilexermakefile_wordcharacters_callback = nullptr;
    QsciLexerMakefile_SetAutoIndentStyle_Callback qscilexermakefile_setautoindentstyle_callback = nullptr;
    QsciLexerMakefile_SetColor_Callback qscilexermakefile_setcolor_callback = nullptr;
    QsciLexerMakefile_SetEolFill_Callback qscilexermakefile_seteolfill_callback = nullptr;
    QsciLexerMakefile_SetFont_Callback qscilexermakefile_setfont_callback = nullptr;
    QsciLexerMakefile_SetPaper_Callback qscilexermakefile_setpaper_callback = nullptr;
    QsciLexerMakefile_ReadProperties_Callback qscilexermakefile_readproperties_callback = nullptr;
    QsciLexerMakefile_WriteProperties_Callback qscilexermakefile_writeproperties_callback = nullptr;
    QsciLexerMakefile_Event_Callback qscilexermakefile_event_callback = nullptr;
    QsciLexerMakefile_EventFilter_Callback qscilexermakefile_eventfilter_callback = nullptr;
    QsciLexerMakefile_TimerEvent_Callback qscilexermakefile_timerevent_callback = nullptr;
    QsciLexerMakefile_ChildEvent_Callback qscilexermakefile_childevent_callback = nullptr;
    QsciLexerMakefile_CustomEvent_Callback qscilexermakefile_customevent_callback = nullptr;
    QsciLexerMakefile_ConnectNotify_Callback qscilexermakefile_connectnotify_callback = nullptr;
    QsciLexerMakefile_DisconnectNotify_Callback qscilexermakefile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerMakefile {
        using QsciLexerMakefile::childEvent;
        using QsciLexerMakefile::connectNotify;
        using QsciLexerMakefile::customEvent;
        using QsciLexerMakefile::disconnectNotify;
        using QsciLexerMakefile::readProperties;
        using QsciLexerMakefile::timerEvent;
        using QsciLexerMakefile::writeProperties;
    };

    VirtualQsciLexerMakefile() : QsciLexerMakefile() {};
    VirtualQsciLexerMakefile(QObject* parent) : QsciLexerMakefile(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermakefile_metaobject_callback) {
            QMetaObject* callback_ret = qscilexermakefile_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerMakefile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermakefile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexermakefile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermakefile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexermakefile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermakefile_language_callback) {
            const char* callback_ret = qscilexermakefile_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMakefile::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermakefile_lexer_callback) {
            const char* callback_ret = qscilexermakefile_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerMakefile::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermakefile_lexerid_callback) {
            int callback_ret = qscilexermakefile_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermakefile_autocompletionfillups_callback) {
            const char* callback_ret = qscilexermakefile_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerMakefile::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermakefile_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexermakefile_autocompletionwordseparators_callback(this);
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
        return QsciLexerMakefile::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermakefile_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermakefile_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermakefile_blocklookback_callback) {
            int callback_ret = qscilexermakefile_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermakefile_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermakefile_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermakefile_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermakefile_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermakefile_bracestyle_callback) {
            int callback_ret = qscilexermakefile_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermakefile_casesensitive_callback) {
            bool callback_ret = qscilexermakefile_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerMakefile::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermakefile_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermakefile_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermakefile_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermakefile_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermakefile_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermakefile_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermakefile_indentationguideview_callback) {
            int callback_ret = qscilexermakefile_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermakefile_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexermakefile_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermakefile_defaultstyle_callback) {
            int callback_ret = qscilexermakefile_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermakefile_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexermakefile_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMakefile::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermakefile_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermakefile_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermakefile_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermakefile_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermakefile_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermakefile_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermakefile_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermakefile_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermakefile_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermakefile_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMakefile::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermakefile_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexermakefile_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermakefile_refreshproperties_callback) {
            qscilexermakefile_refreshproperties_callback(this);
            return;
        }
        QsciLexerMakefile::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermakefile_stylebitsneeded_callback) {
            int callback_ret = qscilexermakefile_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMakefile::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermakefile_wordcharacters_callback) {
            const char* callback_ret = qscilexermakefile_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerMakefile::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermakefile_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexermakefile_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermakefile_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermakefile_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermakefile_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexermakefile_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermakefile_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexermakefile_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermakefile_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermakefile_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMakefile::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermakefile_readproperties_callback) {
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
            bool callback_ret = qscilexermakefile_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMakefile::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermakefile_writeproperties_callback) {
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
            bool callback_ret = qscilexermakefile_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMakefile::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermakefile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexermakefile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMakefile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermakefile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexermakefile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMakefile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermakefile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexermakefile_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermakefile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexermakefile_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermakefile_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexermakefile_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermakefile_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermakefile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermakefile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMakefile::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerMakefile_SuperReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMakefile_SuperWriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMakefile_SuperTimerEvent(QsciLexerMakefile* self, QTimerEvent* event);
    friend void QsciLexerMakefile_SuperChildEvent(QsciLexerMakefile* self, QChildEvent* event);
    friend void QsciLexerMakefile_SuperCustomEvent(QsciLexerMakefile* self, QEvent* event);
    friend void QsciLexerMakefile_SuperConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
    friend void QsciLexerMakefile_SuperDisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal);
};

#endif
