#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMATLAB_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMATLAB_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMatlab
class VirtualQsciLexerMatlab final : public QsciLexerMatlab {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerMatlab_MetaObject_Callback = QMetaObject* (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_Metacast_Callback = void* (*)(QsciLexerMatlab*, const char*);
    using QsciLexerMatlab_Metacall_Callback = int (*)(QsciLexerMatlab*, int, int, void**);
    using QsciLexerMatlab_Language_Callback = const char* (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_Lexer_Callback = const char* (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_LexerId_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_BlockEnd_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockLookback_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_BlockStart_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMatlab*, int*);
    using QsciLexerMatlab_BraceStyle_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_CaseSensitive_Callback = bool (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_Color_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_EolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Font_Callback = QFont* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_IndentationGuideView_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_Keywords_Callback = const char* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultStyle_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_Description_Callback = const char* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_Paper_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultColor2_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultEolFill_Callback = bool (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultFont2_Callback = QFont* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetEditor_Callback = void (*)(QsciLexerMatlab*, QsciScintilla*);
    using QsciLexerMatlab_RefreshProperties_Callback = void (*)(QsciLexerMatlab*);
    using QsciLexerMatlab_StyleBitsNeeded_Callback = int (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_WordCharacters_Callback = const char* (*)(const QsciLexerMatlab*);
    using QsciLexerMatlab_SetAutoIndentStyle_Callback = void (*)(QsciLexerMatlab*, int);
    using QsciLexerMatlab_SetColor_Callback = void (*)(QsciLexerMatlab*, QColor*, int);
    using QsciLexerMatlab_SetEolFill_Callback = void (*)(QsciLexerMatlab*, bool, int);
    using QsciLexerMatlab_SetFont_Callback = void (*)(QsciLexerMatlab*, QFont*, int);
    using QsciLexerMatlab_SetPaper_Callback = void (*)(QsciLexerMatlab*, QColor*, int);
    using QsciLexerMatlab_ReadProperties_Callback = bool (*)(QsciLexerMatlab*, QSettings*, const char*);
    using QsciLexerMatlab_WriteProperties_Callback = bool (*)(const QsciLexerMatlab*, QSettings*, const char*);
    using QsciLexerMatlab_Event_Callback = bool (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_EventFilter_Callback = bool (*)(QsciLexerMatlab*, QObject*, QEvent*);
    using QsciLexerMatlab_TimerEvent_Callback = void (*)(QsciLexerMatlab*, QTimerEvent*);
    using QsciLexerMatlab_ChildEvent_Callback = void (*)(QsciLexerMatlab*, QChildEvent*);
    using QsciLexerMatlab_CustomEvent_Callback = void (*)(QsciLexerMatlab*, QEvent*);
    using QsciLexerMatlab_ConnectNotify_Callback = void (*)(QsciLexerMatlab*, QMetaMethod*);
    using QsciLexerMatlab_DisconnectNotify_Callback = void (*)(QsciLexerMatlab*, QMetaMethod*);
    using QsciLexerMatlab::bytesAsText;
    using QsciLexerMatlab::isSignalConnected;
    using QsciLexerMatlab::receivers;
    using QsciLexerMatlab::sender;
    using QsciLexerMatlab::senderSignalIndex;
    using QsciLexerMatlab::textAsBytes;

    // Instance callback storage
    QsciLexerMatlab_MetaObject_Callback qscilexermatlab_metaobject_callback = nullptr;
    QsciLexerMatlab_Metacast_Callback qscilexermatlab_metacast_callback = nullptr;
    QsciLexerMatlab_Metacall_Callback qscilexermatlab_metacall_callback = nullptr;
    QsciLexerMatlab_Language_Callback qscilexermatlab_language_callback = nullptr;
    QsciLexerMatlab_Lexer_Callback qscilexermatlab_lexer_callback = nullptr;
    QsciLexerMatlab_LexerId_Callback qscilexermatlab_lexerid_callback = nullptr;
    QsciLexerMatlab_AutoCompletionFillups_Callback qscilexermatlab_autocompletionfillups_callback = nullptr;
    QsciLexerMatlab_AutoCompletionWordSeparators_Callback qscilexermatlab_autocompletionwordseparators_callback = nullptr;
    QsciLexerMatlab_BlockEnd_Callback qscilexermatlab_blockend_callback = nullptr;
    QsciLexerMatlab_BlockLookback_Callback qscilexermatlab_blocklookback_callback = nullptr;
    QsciLexerMatlab_BlockStart_Callback qscilexermatlab_blockstart_callback = nullptr;
    QsciLexerMatlab_BlockStartKeyword_Callback qscilexermatlab_blockstartkeyword_callback = nullptr;
    QsciLexerMatlab_BraceStyle_Callback qscilexermatlab_bracestyle_callback = nullptr;
    QsciLexerMatlab_CaseSensitive_Callback qscilexermatlab_casesensitive_callback = nullptr;
    QsciLexerMatlab_Color_Callback qscilexermatlab_color_callback = nullptr;
    QsciLexerMatlab_EolFill_Callback qscilexermatlab_eolfill_callback = nullptr;
    QsciLexerMatlab_Font_Callback qscilexermatlab_font_callback = nullptr;
    QsciLexerMatlab_IndentationGuideView_Callback qscilexermatlab_indentationguideview_callback = nullptr;
    QsciLexerMatlab_Keywords_Callback qscilexermatlab_keywords_callback = nullptr;
    QsciLexerMatlab_DefaultStyle_Callback qscilexermatlab_defaultstyle_callback = nullptr;
    QsciLexerMatlab_Description_Callback qscilexermatlab_description_callback = nullptr;
    QsciLexerMatlab_Paper_Callback qscilexermatlab_paper_callback = nullptr;
    QsciLexerMatlab_DefaultColor2_Callback qscilexermatlab_defaultcolor2_callback = nullptr;
    QsciLexerMatlab_DefaultEolFill_Callback qscilexermatlab_defaulteolfill_callback = nullptr;
    QsciLexerMatlab_DefaultFont2_Callback qscilexermatlab_defaultfont2_callback = nullptr;
    QsciLexerMatlab_DefaultPaper2_Callback qscilexermatlab_defaultpaper2_callback = nullptr;
    QsciLexerMatlab_SetEditor_Callback qscilexermatlab_seteditor_callback = nullptr;
    QsciLexerMatlab_RefreshProperties_Callback qscilexermatlab_refreshproperties_callback = nullptr;
    QsciLexerMatlab_StyleBitsNeeded_Callback qscilexermatlab_stylebitsneeded_callback = nullptr;
    QsciLexerMatlab_WordCharacters_Callback qscilexermatlab_wordcharacters_callback = nullptr;
    QsciLexerMatlab_SetAutoIndentStyle_Callback qscilexermatlab_setautoindentstyle_callback = nullptr;
    QsciLexerMatlab_SetColor_Callback qscilexermatlab_setcolor_callback = nullptr;
    QsciLexerMatlab_SetEolFill_Callback qscilexermatlab_seteolfill_callback = nullptr;
    QsciLexerMatlab_SetFont_Callback qscilexermatlab_setfont_callback = nullptr;
    QsciLexerMatlab_SetPaper_Callback qscilexermatlab_setpaper_callback = nullptr;
    QsciLexerMatlab_ReadProperties_Callback qscilexermatlab_readproperties_callback = nullptr;
    QsciLexerMatlab_WriteProperties_Callback qscilexermatlab_writeproperties_callback = nullptr;
    QsciLexerMatlab_Event_Callback qscilexermatlab_event_callback = nullptr;
    QsciLexerMatlab_EventFilter_Callback qscilexermatlab_eventfilter_callback = nullptr;
    QsciLexerMatlab_TimerEvent_Callback qscilexermatlab_timerevent_callback = nullptr;
    QsciLexerMatlab_ChildEvent_Callback qscilexermatlab_childevent_callback = nullptr;
    QsciLexerMatlab_CustomEvent_Callback qscilexermatlab_customevent_callback = nullptr;
    QsciLexerMatlab_ConnectNotify_Callback qscilexermatlab_connectnotify_callback = nullptr;
    QsciLexerMatlab_DisconnectNotify_Callback qscilexermatlab_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerMatlab {
        using QsciLexerMatlab::childEvent;
        using QsciLexerMatlab::connectNotify;
        using QsciLexerMatlab::customEvent;
        using QsciLexerMatlab::disconnectNotify;
        using QsciLexerMatlab::readProperties;
        using QsciLexerMatlab::timerEvent;
        using QsciLexerMatlab::writeProperties;
    };

    VirtualQsciLexerMatlab() : QsciLexerMatlab() {};
    VirtualQsciLexerMatlab(QObject* parent) : QsciLexerMatlab(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermatlab_metaobject_callback) {
            QMetaObject* callback_ret = qscilexermatlab_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerMatlab::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermatlab_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexermatlab_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermatlab_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexermatlab_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermatlab_language_callback) {
            const char* callback_ret = qscilexermatlab_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMatlab::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermatlab_lexer_callback) {
            const char* callback_ret = qscilexermatlab_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerMatlab::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermatlab_lexerid_callback) {
            int callback_ret = qscilexermatlab_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermatlab_autocompletionfillups_callback) {
            const char* callback_ret = qscilexermatlab_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerMatlab::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermatlab_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexermatlab_autocompletionwordseparators_callback(this);
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
        return QsciLexerMatlab::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermatlab_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermatlab_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermatlab_blocklookback_callback) {
            int callback_ret = qscilexermatlab_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermatlab_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermatlab_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermatlab_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermatlab_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermatlab_bracestyle_callback) {
            int callback_ret = qscilexermatlab_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermatlab_casesensitive_callback) {
            bool callback_ret = qscilexermatlab_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerMatlab::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermatlab_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermatlab_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermatlab_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermatlab_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermatlab_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermatlab_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermatlab_indentationguideview_callback) {
            int callback_ret = qscilexermatlab_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermatlab_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexermatlab_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermatlab_defaultstyle_callback) {
            int callback_ret = qscilexermatlab_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermatlab_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexermatlab_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMatlab::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermatlab_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermatlab_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermatlab_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermatlab_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermatlab_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermatlab_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermatlab_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermatlab_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermatlab_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermatlab_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMatlab::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermatlab_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexermatlab_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermatlab_refreshproperties_callback) {
            qscilexermatlab_refreshproperties_callback(this);
            return;
        }
        QsciLexerMatlab::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermatlab_stylebitsneeded_callback) {
            int callback_ret = qscilexermatlab_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMatlab::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermatlab_wordcharacters_callback) {
            const char* callback_ret = qscilexermatlab_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerMatlab::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermatlab_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexermatlab_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermatlab_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermatlab_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermatlab_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexermatlab_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermatlab_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexermatlab_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermatlab_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermatlab_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMatlab::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermatlab_readproperties_callback) {
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
            bool callback_ret = qscilexermatlab_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMatlab::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermatlab_writeproperties_callback) {
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
            bool callback_ret = qscilexermatlab_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMatlab::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermatlab_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexermatlab_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMatlab::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermatlab_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexermatlab_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMatlab::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermatlab_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexermatlab_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermatlab_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexermatlab_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermatlab_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexermatlab_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermatlab_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermatlab_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermatlab_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMatlab::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerMatlab_SuperReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMatlab_SuperWriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMatlab_SuperTimerEvent(QsciLexerMatlab* self, QTimerEvent* event);
    friend void QsciLexerMatlab_SuperChildEvent(QsciLexerMatlab* self, QChildEvent* event);
    friend void QsciLexerMatlab_SuperCustomEvent(QsciLexerMatlab* self, QEvent* event);
    friend void QsciLexerMatlab_SuperConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
    friend void QsciLexerMatlab_SuperDisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal);
};

#endif
