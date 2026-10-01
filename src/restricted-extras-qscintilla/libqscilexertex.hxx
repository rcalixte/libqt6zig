#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEX_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTeX
class VirtualQsciLexerTeX final : public QsciLexerTeX {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerTeX_MetaObject_Callback = QMetaObject* (*)(const QsciLexerTeX*);
    using QsciLexerTeX_Metacast_Callback = void* (*)(QsciLexerTeX*, const char*);
    using QsciLexerTeX_Metacall_Callback = int (*)(QsciLexerTeX*, int, int, void**);
    using QsciLexerTeX_Language_Callback = const char* (*)(const QsciLexerTeX*);
    using QsciLexerTeX_Lexer_Callback = const char* (*)(const QsciLexerTeX*);
    using QsciLexerTeX_LexerId_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerTeX*);
    using QsciLexerTeX_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerTeX*);
    using QsciLexerTeX_BlockEnd_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockLookback_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_BlockStart_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTeX*, int*);
    using QsciLexerTeX_BraceStyle_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_CaseSensitive_Callback = bool (*)(const QsciLexerTeX*);
    using QsciLexerTeX_Color_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_EolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Font_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_IndentationGuideView_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_Keywords_Callback = const char* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultStyle_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_Description_Callback = const char* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_Paper_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultColor2_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultEolFill_Callback = bool (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultFont2_Callback = QFont* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_DefaultPaper2_Callback = QColor* (*)(const QsciLexerTeX*, int);
    using QsciLexerTeX_SetEditor_Callback = void (*)(QsciLexerTeX*, QsciScintilla*);
    using QsciLexerTeX_RefreshProperties_Callback = void (*)(QsciLexerTeX*);
    using QsciLexerTeX_StyleBitsNeeded_Callback = int (*)(const QsciLexerTeX*);
    using QsciLexerTeX_WordCharacters_Callback = const char* (*)(const QsciLexerTeX*);
    using QsciLexerTeX_SetAutoIndentStyle_Callback = void (*)(QsciLexerTeX*, int);
    using QsciLexerTeX_SetColor_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_SetEolFill_Callback = void (*)(QsciLexerTeX*, bool, int);
    using QsciLexerTeX_SetFont_Callback = void (*)(QsciLexerTeX*, QFont*, int);
    using QsciLexerTeX_SetPaper_Callback = void (*)(QsciLexerTeX*, QColor*, int);
    using QsciLexerTeX_ReadProperties_Callback = bool (*)(QsciLexerTeX*, QSettings*, const char*);
    using QsciLexerTeX_WriteProperties_Callback = bool (*)(const QsciLexerTeX*, QSettings*, const char*);
    using QsciLexerTeX_Event_Callback = bool (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_EventFilter_Callback = bool (*)(QsciLexerTeX*, QObject*, QEvent*);
    using QsciLexerTeX_TimerEvent_Callback = void (*)(QsciLexerTeX*, QTimerEvent*);
    using QsciLexerTeX_ChildEvent_Callback = void (*)(QsciLexerTeX*, QChildEvent*);
    using QsciLexerTeX_CustomEvent_Callback = void (*)(QsciLexerTeX*, QEvent*);
    using QsciLexerTeX_ConnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX_DisconnectNotify_Callback = void (*)(QsciLexerTeX*, QMetaMethod*);
    using QsciLexerTeX::bytesAsText;
    using QsciLexerTeX::isSignalConnected;
    using QsciLexerTeX::receivers;
    using QsciLexerTeX::sender;
    using QsciLexerTeX::senderSignalIndex;
    using QsciLexerTeX::textAsBytes;

    // Instance callback storage
    QsciLexerTeX_MetaObject_Callback qscilexertex_metaobject_callback = nullptr;
    QsciLexerTeX_Metacast_Callback qscilexertex_metacast_callback = nullptr;
    QsciLexerTeX_Metacall_Callback qscilexertex_metacall_callback = nullptr;
    QsciLexerTeX_Language_Callback qscilexertex_language_callback = nullptr;
    QsciLexerTeX_Lexer_Callback qscilexertex_lexer_callback = nullptr;
    QsciLexerTeX_LexerId_Callback qscilexertex_lexerid_callback = nullptr;
    QsciLexerTeX_AutoCompletionFillups_Callback qscilexertex_autocompletionfillups_callback = nullptr;
    QsciLexerTeX_AutoCompletionWordSeparators_Callback qscilexertex_autocompletionwordseparators_callback = nullptr;
    QsciLexerTeX_BlockEnd_Callback qscilexertex_blockend_callback = nullptr;
    QsciLexerTeX_BlockLookback_Callback qscilexertex_blocklookback_callback = nullptr;
    QsciLexerTeX_BlockStart_Callback qscilexertex_blockstart_callback = nullptr;
    QsciLexerTeX_BlockStartKeyword_Callback qscilexertex_blockstartkeyword_callback = nullptr;
    QsciLexerTeX_BraceStyle_Callback qscilexertex_bracestyle_callback = nullptr;
    QsciLexerTeX_CaseSensitive_Callback qscilexertex_casesensitive_callback = nullptr;
    QsciLexerTeX_Color_Callback qscilexertex_color_callback = nullptr;
    QsciLexerTeX_EolFill_Callback qscilexertex_eolfill_callback = nullptr;
    QsciLexerTeX_Font_Callback qscilexertex_font_callback = nullptr;
    QsciLexerTeX_IndentationGuideView_Callback qscilexertex_indentationguideview_callback = nullptr;
    QsciLexerTeX_Keywords_Callback qscilexertex_keywords_callback = nullptr;
    QsciLexerTeX_DefaultStyle_Callback qscilexertex_defaultstyle_callback = nullptr;
    QsciLexerTeX_Description_Callback qscilexertex_description_callback = nullptr;
    QsciLexerTeX_Paper_Callback qscilexertex_paper_callback = nullptr;
    QsciLexerTeX_DefaultColor2_Callback qscilexertex_defaultcolor2_callback = nullptr;
    QsciLexerTeX_DefaultEolFill_Callback qscilexertex_defaulteolfill_callback = nullptr;
    QsciLexerTeX_DefaultFont2_Callback qscilexertex_defaultfont2_callback = nullptr;
    QsciLexerTeX_DefaultPaper2_Callback qscilexertex_defaultpaper2_callback = nullptr;
    QsciLexerTeX_SetEditor_Callback qscilexertex_seteditor_callback = nullptr;
    QsciLexerTeX_RefreshProperties_Callback qscilexertex_refreshproperties_callback = nullptr;
    QsciLexerTeX_StyleBitsNeeded_Callback qscilexertex_stylebitsneeded_callback = nullptr;
    QsciLexerTeX_WordCharacters_Callback qscilexertex_wordcharacters_callback = nullptr;
    QsciLexerTeX_SetAutoIndentStyle_Callback qscilexertex_setautoindentstyle_callback = nullptr;
    QsciLexerTeX_SetColor_Callback qscilexertex_setcolor_callback = nullptr;
    QsciLexerTeX_SetEolFill_Callback qscilexertex_seteolfill_callback = nullptr;
    QsciLexerTeX_SetFont_Callback qscilexertex_setfont_callback = nullptr;
    QsciLexerTeX_SetPaper_Callback qscilexertex_setpaper_callback = nullptr;
    QsciLexerTeX_ReadProperties_Callback qscilexertex_readproperties_callback = nullptr;
    QsciLexerTeX_WriteProperties_Callback qscilexertex_writeproperties_callback = nullptr;
    QsciLexerTeX_Event_Callback qscilexertex_event_callback = nullptr;
    QsciLexerTeX_EventFilter_Callback qscilexertex_eventfilter_callback = nullptr;
    QsciLexerTeX_TimerEvent_Callback qscilexertex_timerevent_callback = nullptr;
    QsciLexerTeX_ChildEvent_Callback qscilexertex_childevent_callback = nullptr;
    QsciLexerTeX_CustomEvent_Callback qscilexertex_customevent_callback = nullptr;
    QsciLexerTeX_ConnectNotify_Callback qscilexertex_connectnotify_callback = nullptr;
    QsciLexerTeX_DisconnectNotify_Callback qscilexertex_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerTeX {
        using QsciLexerTeX::childEvent;
        using QsciLexerTeX::connectNotify;
        using QsciLexerTeX::customEvent;
        using QsciLexerTeX::disconnectNotify;
        using QsciLexerTeX::readProperties;
        using QsciLexerTeX::timerEvent;
        using QsciLexerTeX::writeProperties;
    };

    VirtualQsciLexerTeX() : QsciLexerTeX() {};
    VirtualQsciLexerTeX(QObject* parent) : QsciLexerTeX(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexertex_metaobject_callback) {
            QMetaObject* callback_ret = qscilexertex_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerTeX::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexertex_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexertex_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertex_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexertex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertex_language_callback) {
            const char* callback_ret = qscilexertex_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTeX::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertex_lexer_callback) {
            const char* callback_ret = qscilexertex_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerTeX::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertex_lexerid_callback) {
            int callback_ret = qscilexertex_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertex_autocompletionfillups_callback) {
            const char* callback_ret = qscilexertex_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerTeX::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertex_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexertex_autocompletionwordseparators_callback(this);
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
        return QsciLexerTeX::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertex_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertex_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertex_blocklookback_callback) {
            int callback_ret = qscilexertex_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertex_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertex_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertex_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertex_bracestyle_callback) {
            int callback_ret = qscilexertex_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertex_casesensitive_callback) {
            bool callback_ret = qscilexertex_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerTeX::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertex_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertex_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertex_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertex_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertex_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertex_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertex_indentationguideview_callback) {
            int callback_ret = qscilexertex_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertex_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexertex_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertex_defaultstyle_callback) {
            int callback_ret = qscilexertex_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertex_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexertex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTeX::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertex_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertex_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertex_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertex_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertex_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertex_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertex_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertex_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertex_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTeX::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertex_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexertex_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertex_refreshproperties_callback) {
            qscilexertex_refreshproperties_callback(this);
            return;
        }
        QsciLexerTeX::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertex_stylebitsneeded_callback) {
            int callback_ret = qscilexertex_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTeX::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertex_wordcharacters_callback) {
            const char* callback_ret = qscilexertex_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerTeX::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertex_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexertex_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertex_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertex_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertex_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexertex_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertex_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexertex_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertex_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertex_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTeX::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertex_readproperties_callback) {
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
            bool callback_ret = qscilexertex_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTeX::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertex_writeproperties_callback) {
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
            bool callback_ret = qscilexertex_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTeX::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertex_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexertex_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTeX::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertex_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexertex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerTeX::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertex_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexertex_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertex_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexertex_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertex_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexertex_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertex_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertex_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertex_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTeX::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerTeX_SuperReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTeX_SuperWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTeX_SuperTimerEvent(QsciLexerTeX* self, QTimerEvent* event);
    friend void QsciLexerTeX_SuperChildEvent(QsciLexerTeX* self, QChildEvent* event);
    friend void QsciLexerTeX_SuperCustomEvent(QsciLexerTeX* self, QEvent* event);
    friend void QsciLexerTeX_SuperConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
    friend void QsciLexerTeX_SuperDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal);
};

#endif
