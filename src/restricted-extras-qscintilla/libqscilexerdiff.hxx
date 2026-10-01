#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERDIFF_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERDIFF_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerDiff
class VirtualQsciLexerDiff final : public QsciLexerDiff {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerDiff_MetaObject_Callback = QMetaObject* (*)(const QsciLexerDiff*);
    using QsciLexerDiff_Metacast_Callback = void* (*)(QsciLexerDiff*, const char*);
    using QsciLexerDiff_Metacall_Callback = int (*)(QsciLexerDiff*, int, int, void**);
    using QsciLexerDiff_Language_Callback = const char* (*)(const QsciLexerDiff*);
    using QsciLexerDiff_Lexer_Callback = const char* (*)(const QsciLexerDiff*);
    using QsciLexerDiff_LexerId_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerDiff*);
    using QsciLexerDiff_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerDiff*);
    using QsciLexerDiff_BlockEnd_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockLookback_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_BlockStart_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BlockStartKeyword_Callback = const char* (*)(const QsciLexerDiff*, int*);
    using QsciLexerDiff_BraceStyle_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_CaseSensitive_Callback = bool (*)(const QsciLexerDiff*);
    using QsciLexerDiff_Color_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_EolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Font_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_IndentationGuideView_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_Keywords_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultStyle_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_Description_Callback = const char* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_Paper_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultColor2_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultEolFill_Callback = bool (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultFont2_Callback = QFont* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_DefaultPaper2_Callback = QColor* (*)(const QsciLexerDiff*, int);
    using QsciLexerDiff_SetEditor_Callback = void (*)(QsciLexerDiff*, QsciScintilla*);
    using QsciLexerDiff_RefreshProperties_Callback = void (*)(QsciLexerDiff*);
    using QsciLexerDiff_StyleBitsNeeded_Callback = int (*)(const QsciLexerDiff*);
    using QsciLexerDiff_WordCharacters_Callback = const char* (*)(const QsciLexerDiff*);
    using QsciLexerDiff_SetAutoIndentStyle_Callback = void (*)(QsciLexerDiff*, int);
    using QsciLexerDiff_SetColor_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_SetEolFill_Callback = void (*)(QsciLexerDiff*, bool, int);
    using QsciLexerDiff_SetFont_Callback = void (*)(QsciLexerDiff*, QFont*, int);
    using QsciLexerDiff_SetPaper_Callback = void (*)(QsciLexerDiff*, QColor*, int);
    using QsciLexerDiff_ReadProperties_Callback = bool (*)(QsciLexerDiff*, QSettings*, const char*);
    using QsciLexerDiff_WriteProperties_Callback = bool (*)(const QsciLexerDiff*, QSettings*, const char*);
    using QsciLexerDiff_Event_Callback = bool (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_EventFilter_Callback = bool (*)(QsciLexerDiff*, QObject*, QEvent*);
    using QsciLexerDiff_TimerEvent_Callback = void (*)(QsciLexerDiff*, QTimerEvent*);
    using QsciLexerDiff_ChildEvent_Callback = void (*)(QsciLexerDiff*, QChildEvent*);
    using QsciLexerDiff_CustomEvent_Callback = void (*)(QsciLexerDiff*, QEvent*);
    using QsciLexerDiff_ConnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff_DisconnectNotify_Callback = void (*)(QsciLexerDiff*, QMetaMethod*);
    using QsciLexerDiff::bytesAsText;
    using QsciLexerDiff::isSignalConnected;
    using QsciLexerDiff::receivers;
    using QsciLexerDiff::sender;
    using QsciLexerDiff::senderSignalIndex;
    using QsciLexerDiff::textAsBytes;

    // Instance callback storage
    QsciLexerDiff_MetaObject_Callback qscilexerdiff_metaobject_callback = nullptr;
    QsciLexerDiff_Metacast_Callback qscilexerdiff_metacast_callback = nullptr;
    QsciLexerDiff_Metacall_Callback qscilexerdiff_metacall_callback = nullptr;
    QsciLexerDiff_Language_Callback qscilexerdiff_language_callback = nullptr;
    QsciLexerDiff_Lexer_Callback qscilexerdiff_lexer_callback = nullptr;
    QsciLexerDiff_LexerId_Callback qscilexerdiff_lexerid_callback = nullptr;
    QsciLexerDiff_AutoCompletionFillups_Callback qscilexerdiff_autocompletionfillups_callback = nullptr;
    QsciLexerDiff_AutoCompletionWordSeparators_Callback qscilexerdiff_autocompletionwordseparators_callback = nullptr;
    QsciLexerDiff_BlockEnd_Callback qscilexerdiff_blockend_callback = nullptr;
    QsciLexerDiff_BlockLookback_Callback qscilexerdiff_blocklookback_callback = nullptr;
    QsciLexerDiff_BlockStart_Callback qscilexerdiff_blockstart_callback = nullptr;
    QsciLexerDiff_BlockStartKeyword_Callback qscilexerdiff_blockstartkeyword_callback = nullptr;
    QsciLexerDiff_BraceStyle_Callback qscilexerdiff_bracestyle_callback = nullptr;
    QsciLexerDiff_CaseSensitive_Callback qscilexerdiff_casesensitive_callback = nullptr;
    QsciLexerDiff_Color_Callback qscilexerdiff_color_callback = nullptr;
    QsciLexerDiff_EolFill_Callback qscilexerdiff_eolfill_callback = nullptr;
    QsciLexerDiff_Font_Callback qscilexerdiff_font_callback = nullptr;
    QsciLexerDiff_IndentationGuideView_Callback qscilexerdiff_indentationguideview_callback = nullptr;
    QsciLexerDiff_Keywords_Callback qscilexerdiff_keywords_callback = nullptr;
    QsciLexerDiff_DefaultStyle_Callback qscilexerdiff_defaultstyle_callback = nullptr;
    QsciLexerDiff_Description_Callback qscilexerdiff_description_callback = nullptr;
    QsciLexerDiff_Paper_Callback qscilexerdiff_paper_callback = nullptr;
    QsciLexerDiff_DefaultColor2_Callback qscilexerdiff_defaultcolor2_callback = nullptr;
    QsciLexerDiff_DefaultEolFill_Callback qscilexerdiff_defaulteolfill_callback = nullptr;
    QsciLexerDiff_DefaultFont2_Callback qscilexerdiff_defaultfont2_callback = nullptr;
    QsciLexerDiff_DefaultPaper2_Callback qscilexerdiff_defaultpaper2_callback = nullptr;
    QsciLexerDiff_SetEditor_Callback qscilexerdiff_seteditor_callback = nullptr;
    QsciLexerDiff_RefreshProperties_Callback qscilexerdiff_refreshproperties_callback = nullptr;
    QsciLexerDiff_StyleBitsNeeded_Callback qscilexerdiff_stylebitsneeded_callback = nullptr;
    QsciLexerDiff_WordCharacters_Callback qscilexerdiff_wordcharacters_callback = nullptr;
    QsciLexerDiff_SetAutoIndentStyle_Callback qscilexerdiff_setautoindentstyle_callback = nullptr;
    QsciLexerDiff_SetColor_Callback qscilexerdiff_setcolor_callback = nullptr;
    QsciLexerDiff_SetEolFill_Callback qscilexerdiff_seteolfill_callback = nullptr;
    QsciLexerDiff_SetFont_Callback qscilexerdiff_setfont_callback = nullptr;
    QsciLexerDiff_SetPaper_Callback qscilexerdiff_setpaper_callback = nullptr;
    QsciLexerDiff_ReadProperties_Callback qscilexerdiff_readproperties_callback = nullptr;
    QsciLexerDiff_WriteProperties_Callback qscilexerdiff_writeproperties_callback = nullptr;
    QsciLexerDiff_Event_Callback qscilexerdiff_event_callback = nullptr;
    QsciLexerDiff_EventFilter_Callback qscilexerdiff_eventfilter_callback = nullptr;
    QsciLexerDiff_TimerEvent_Callback qscilexerdiff_timerevent_callback = nullptr;
    QsciLexerDiff_ChildEvent_Callback qscilexerdiff_childevent_callback = nullptr;
    QsciLexerDiff_CustomEvent_Callback qscilexerdiff_customevent_callback = nullptr;
    QsciLexerDiff_ConnectNotify_Callback qscilexerdiff_connectnotify_callback = nullptr;
    QsciLexerDiff_DisconnectNotify_Callback qscilexerdiff_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerDiff {
        using QsciLexerDiff::childEvent;
        using QsciLexerDiff::connectNotify;
        using QsciLexerDiff::customEvent;
        using QsciLexerDiff::disconnectNotify;
        using QsciLexerDiff::readProperties;
        using QsciLexerDiff::timerEvent;
        using QsciLexerDiff::writeProperties;
    };

    VirtualQsciLexerDiff() : QsciLexerDiff() {};
    VirtualQsciLexerDiff(QObject* parent) : QsciLexerDiff(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerdiff_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerdiff_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerDiff::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerdiff_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerdiff_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerdiff_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerdiff_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerdiff_language_callback) {
            const char* callback_ret = qscilexerdiff_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerDiff::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerdiff_lexer_callback) {
            const char* callback_ret = qscilexerdiff_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerDiff::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerdiff_lexerid_callback) {
            int callback_ret = qscilexerdiff_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerdiff_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerdiff_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerDiff::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerdiff_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerdiff_autocompletionwordseparators_callback(this);
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
        return QsciLexerDiff::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerdiff_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerdiff_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerdiff_blocklookback_callback) {
            int callback_ret = qscilexerdiff_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerdiff_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerdiff_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerdiff_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerdiff_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerdiff_bracestyle_callback) {
            int callback_ret = qscilexerdiff_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerdiff_casesensitive_callback) {
            bool callback_ret = qscilexerdiff_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerDiff::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerdiff_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerdiff_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerdiff_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerdiff_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerdiff_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerdiff_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerdiff_indentationguideview_callback) {
            int callback_ret = qscilexerdiff_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerdiff_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerdiff_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerdiff_defaultstyle_callback) {
            int callback_ret = qscilexerdiff_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerdiff_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerdiff_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerDiff::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerdiff_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerdiff_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerdiff_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerdiff_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerdiff_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerdiff_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerdiff_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerdiff_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerdiff_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerdiff_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerDiff::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerdiff_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerdiff_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerdiff_refreshproperties_callback) {
            qscilexerdiff_refreshproperties_callback(this);
            return;
        }
        QsciLexerDiff::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerdiff_stylebitsneeded_callback) {
            int callback_ret = qscilexerdiff_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerDiff::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerdiff_wordcharacters_callback) {
            const char* callback_ret = qscilexerdiff_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerDiff::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerdiff_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerdiff_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerdiff_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerdiff_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerdiff_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerdiff_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerdiff_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerdiff_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerdiff_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerdiff_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerDiff::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerdiff_readproperties_callback) {
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
            bool callback_ret = qscilexerdiff_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerDiff::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerdiff_writeproperties_callback) {
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
            bool callback_ret = qscilexerdiff_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerDiff::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerdiff_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerdiff_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerDiff::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerdiff_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerdiff_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerDiff::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerdiff_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerdiff_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerdiff_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerdiff_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerdiff_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerdiff_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerdiff_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerdiff_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerdiff_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerDiff::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerDiff_SuperReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerDiff_SuperWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerDiff_SuperTimerEvent(QsciLexerDiff* self, QTimerEvent* event);
    friend void QsciLexerDiff_SuperChildEvent(QsciLexerDiff* self, QChildEvent* event);
    friend void QsciLexerDiff_SuperCustomEvent(QsciLexerDiff* self, QEvent* event);
    friend void QsciLexerDiff_SuperConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
    friend void QsciLexerDiff_SuperDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal);
};

#endif
