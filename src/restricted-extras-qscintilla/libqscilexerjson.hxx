#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJSON_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJSON_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJSON
class VirtualQsciLexerJSON final : public QsciLexerJSON {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerJSON_MetaObject_Callback = QMetaObject* (*)(const QsciLexerJSON*);
    using QsciLexerJSON_Metacast_Callback = void* (*)(QsciLexerJSON*, const char*);
    using QsciLexerJSON_Metacall_Callback = int (*)(QsciLexerJSON*, int, int, void**);
    using QsciLexerJSON_Language_Callback = const char* (*)(const QsciLexerJSON*);
    using QsciLexerJSON_Lexer_Callback = const char* (*)(const QsciLexerJSON*);
    using QsciLexerJSON_LexerId_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerJSON*);
    using QsciLexerJSON_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerJSON*);
    using QsciLexerJSON_BlockEnd_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BlockLookback_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_BlockStart_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJSON*, int*);
    using QsciLexerJSON_BraceStyle_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_CaseSensitive_Callback = bool (*)(const QsciLexerJSON*);
    using QsciLexerJSON_Color_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_EolFill_Callback = bool (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_Font_Callback = QFont* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_IndentationGuideView_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_Keywords_Callback = const char* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultStyle_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_Description_Callback = const char* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_Paper_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultColor2_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultEolFill_Callback = bool (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultFont2_Callback = QFont* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_DefaultPaper2_Callback = QColor* (*)(const QsciLexerJSON*, int);
    using QsciLexerJSON_SetEditor_Callback = void (*)(QsciLexerJSON*, QsciScintilla*);
    using QsciLexerJSON_RefreshProperties_Callback = void (*)(QsciLexerJSON*);
    using QsciLexerJSON_StyleBitsNeeded_Callback = int (*)(const QsciLexerJSON*);
    using QsciLexerJSON_WordCharacters_Callback = const char* (*)(const QsciLexerJSON*);
    using QsciLexerJSON_SetAutoIndentStyle_Callback = void (*)(QsciLexerJSON*, int);
    using QsciLexerJSON_SetColor_Callback = void (*)(QsciLexerJSON*, QColor*, int);
    using QsciLexerJSON_SetEolFill_Callback = void (*)(QsciLexerJSON*, bool, int);
    using QsciLexerJSON_SetFont_Callback = void (*)(QsciLexerJSON*, QFont*, int);
    using QsciLexerJSON_SetPaper_Callback = void (*)(QsciLexerJSON*, QColor*, int);
    using QsciLexerJSON_ReadProperties_Callback = bool (*)(QsciLexerJSON*, QSettings*, const char*);
    using QsciLexerJSON_WriteProperties_Callback = bool (*)(const QsciLexerJSON*, QSettings*, const char*);
    using QsciLexerJSON_Event_Callback = bool (*)(QsciLexerJSON*, QEvent*);
    using QsciLexerJSON_EventFilter_Callback = bool (*)(QsciLexerJSON*, QObject*, QEvent*);
    using QsciLexerJSON_TimerEvent_Callback = void (*)(QsciLexerJSON*, QTimerEvent*);
    using QsciLexerJSON_ChildEvent_Callback = void (*)(QsciLexerJSON*, QChildEvent*);
    using QsciLexerJSON_CustomEvent_Callback = void (*)(QsciLexerJSON*, QEvent*);
    using QsciLexerJSON_ConnectNotify_Callback = void (*)(QsciLexerJSON*, QMetaMethod*);
    using QsciLexerJSON_DisconnectNotify_Callback = void (*)(QsciLexerJSON*, QMetaMethod*);
    using QsciLexerJSON::bytesAsText;
    using QsciLexerJSON::isSignalConnected;
    using QsciLexerJSON::receivers;
    using QsciLexerJSON::sender;
    using QsciLexerJSON::senderSignalIndex;
    using QsciLexerJSON::textAsBytes;

    // Instance callback storage
    QsciLexerJSON_MetaObject_Callback qscilexerjson_metaobject_callback = nullptr;
    QsciLexerJSON_Metacast_Callback qscilexerjson_metacast_callback = nullptr;
    QsciLexerJSON_Metacall_Callback qscilexerjson_metacall_callback = nullptr;
    QsciLexerJSON_Language_Callback qscilexerjson_language_callback = nullptr;
    QsciLexerJSON_Lexer_Callback qscilexerjson_lexer_callback = nullptr;
    QsciLexerJSON_LexerId_Callback qscilexerjson_lexerid_callback = nullptr;
    QsciLexerJSON_AutoCompletionFillups_Callback qscilexerjson_autocompletionfillups_callback = nullptr;
    QsciLexerJSON_AutoCompletionWordSeparators_Callback qscilexerjson_autocompletionwordseparators_callback = nullptr;
    QsciLexerJSON_BlockEnd_Callback qscilexerjson_blockend_callback = nullptr;
    QsciLexerJSON_BlockLookback_Callback qscilexerjson_blocklookback_callback = nullptr;
    QsciLexerJSON_BlockStart_Callback qscilexerjson_blockstart_callback = nullptr;
    QsciLexerJSON_BlockStartKeyword_Callback qscilexerjson_blockstartkeyword_callback = nullptr;
    QsciLexerJSON_BraceStyle_Callback qscilexerjson_bracestyle_callback = nullptr;
    QsciLexerJSON_CaseSensitive_Callback qscilexerjson_casesensitive_callback = nullptr;
    QsciLexerJSON_Color_Callback qscilexerjson_color_callback = nullptr;
    QsciLexerJSON_EolFill_Callback qscilexerjson_eolfill_callback = nullptr;
    QsciLexerJSON_Font_Callback qscilexerjson_font_callback = nullptr;
    QsciLexerJSON_IndentationGuideView_Callback qscilexerjson_indentationguideview_callback = nullptr;
    QsciLexerJSON_Keywords_Callback qscilexerjson_keywords_callback = nullptr;
    QsciLexerJSON_DefaultStyle_Callback qscilexerjson_defaultstyle_callback = nullptr;
    QsciLexerJSON_Description_Callback qscilexerjson_description_callback = nullptr;
    QsciLexerJSON_Paper_Callback qscilexerjson_paper_callback = nullptr;
    QsciLexerJSON_DefaultColor2_Callback qscilexerjson_defaultcolor2_callback = nullptr;
    QsciLexerJSON_DefaultEolFill_Callback qscilexerjson_defaulteolfill_callback = nullptr;
    QsciLexerJSON_DefaultFont2_Callback qscilexerjson_defaultfont2_callback = nullptr;
    QsciLexerJSON_DefaultPaper2_Callback qscilexerjson_defaultpaper2_callback = nullptr;
    QsciLexerJSON_SetEditor_Callback qscilexerjson_seteditor_callback = nullptr;
    QsciLexerJSON_RefreshProperties_Callback qscilexerjson_refreshproperties_callback = nullptr;
    QsciLexerJSON_StyleBitsNeeded_Callback qscilexerjson_stylebitsneeded_callback = nullptr;
    QsciLexerJSON_WordCharacters_Callback qscilexerjson_wordcharacters_callback = nullptr;
    QsciLexerJSON_SetAutoIndentStyle_Callback qscilexerjson_setautoindentstyle_callback = nullptr;
    QsciLexerJSON_SetColor_Callback qscilexerjson_setcolor_callback = nullptr;
    QsciLexerJSON_SetEolFill_Callback qscilexerjson_seteolfill_callback = nullptr;
    QsciLexerJSON_SetFont_Callback qscilexerjson_setfont_callback = nullptr;
    QsciLexerJSON_SetPaper_Callback qscilexerjson_setpaper_callback = nullptr;
    QsciLexerJSON_ReadProperties_Callback qscilexerjson_readproperties_callback = nullptr;
    QsciLexerJSON_WriteProperties_Callback qscilexerjson_writeproperties_callback = nullptr;
    QsciLexerJSON_Event_Callback qscilexerjson_event_callback = nullptr;
    QsciLexerJSON_EventFilter_Callback qscilexerjson_eventfilter_callback = nullptr;
    QsciLexerJSON_TimerEvent_Callback qscilexerjson_timerevent_callback = nullptr;
    QsciLexerJSON_ChildEvent_Callback qscilexerjson_childevent_callback = nullptr;
    QsciLexerJSON_CustomEvent_Callback qscilexerjson_customevent_callback = nullptr;
    QsciLexerJSON_ConnectNotify_Callback qscilexerjson_connectnotify_callback = nullptr;
    QsciLexerJSON_DisconnectNotify_Callback qscilexerjson_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerJSON {
        using QsciLexerJSON::childEvent;
        using QsciLexerJSON::connectNotify;
        using QsciLexerJSON::customEvent;
        using QsciLexerJSON::disconnectNotify;
        using QsciLexerJSON::readProperties;
        using QsciLexerJSON::timerEvent;
        using QsciLexerJSON::writeProperties;
    };

    VirtualQsciLexerJSON() : QsciLexerJSON() {};
    VirtualQsciLexerJSON(QObject* parent) : QsciLexerJSON(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerjson_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerjson_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerJSON::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerjson_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerjson_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjson_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerjson_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerjson_language_callback) {
            const char* callback_ret = qscilexerjson_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJSON::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjson_lexer_callback) {
            const char* callback_ret = qscilexerjson_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerJSON::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjson_lexerid_callback) {
            int callback_ret = qscilexerjson_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjson_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerjson_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerJSON::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerjson_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerjson_autocompletionwordseparators_callback(this);
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
        return QsciLexerJSON::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjson_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjson_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjson_blocklookback_callback) {
            int callback_ret = qscilexerjson_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjson_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjson_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjson_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjson_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjson_bracestyle_callback) {
            int callback_ret = qscilexerjson_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjson_casesensitive_callback) {
            bool callback_ret = qscilexerjson_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerJSON::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjson_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjson_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjson_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjson_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjson_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjson_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjson_indentationguideview_callback) {
            int callback_ret = qscilexerjson_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjson_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerjson_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjson_defaultstyle_callback) {
            int callback_ret = qscilexerjson_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerjson_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerjson_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJSON::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerjson_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjson_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjson_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjson_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjson_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjson_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjson_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjson_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjson_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjson_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJSON::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjson_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerjson_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjson_refreshproperties_callback) {
            qscilexerjson_refreshproperties_callback(this);
            return;
        }
        QsciLexerJSON::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjson_stylebitsneeded_callback) {
            int callback_ret = qscilexerjson_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJSON::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjson_wordcharacters_callback) {
            const char* callback_ret = qscilexerjson_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerJSON::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjson_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerjson_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjson_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjson_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJSON::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjson_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerjson_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJSON::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjson_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerjson_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJSON::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjson_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjson_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJSON::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjson_readproperties_callback) {
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
            bool callback_ret = qscilexerjson_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJSON::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjson_writeproperties_callback) {
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
            bool callback_ret = qscilexerjson_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJSON::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjson_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerjson_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJSON::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjson_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerjson_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerJSON::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjson_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerjson_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjson_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerjson_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjson_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerjson_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjson_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjson_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjson_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjson_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJSON::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerJSON_SuperReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJSON_SuperWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJSON_SuperTimerEvent(QsciLexerJSON* self, QTimerEvent* event);
    friend void QsciLexerJSON_SuperChildEvent(QsciLexerJSON* self, QChildEvent* event);
    friend void QsciLexerJSON_SuperCustomEvent(QsciLexerJSON* self, QEvent* event);
    friend void QsciLexerJSON_SuperConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
    friend void QsciLexerJSON_SuperDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal);
};

#endif
