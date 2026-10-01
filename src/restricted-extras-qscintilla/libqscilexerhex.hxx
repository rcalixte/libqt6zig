#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERHEX_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERHEX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerHex
class VirtualQsciLexerHex : public QsciLexerHex {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerHex_MetaObject_Callback = QMetaObject* (*)(const QsciLexerHex*);
    using QsciLexerHex_Metacast_Callback = void* (*)(QsciLexerHex*, const char*);
    using QsciLexerHex_Metacall_Callback = int (*)(QsciLexerHex*, int, int, void**);
    using QsciLexerHex_Language_Callback = const char* (*)(const QsciLexerHex*);
    using QsciLexerHex_Lexer_Callback = const char* (*)(const QsciLexerHex*);
    using QsciLexerHex_LexerId_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerHex*);
    using QsciLexerHex_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerHex*);
    using QsciLexerHex_BlockEnd_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockLookback_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_BlockStart_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerHex*, int*);
    using QsciLexerHex_BraceStyle_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_CaseSensitive_Callback = bool (*)(const QsciLexerHex*);
    using QsciLexerHex_Color_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_EolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Font_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_IndentationGuideView_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_Keywords_Callback = const char* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultStyle_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_Description_Callback = const char* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_Paper_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultEolFill_Callback = bool (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerHex*, int);
    using QsciLexerHex_SetEditor_Callback = void (*)(QsciLexerHex*, QsciScintilla*);
    using QsciLexerHex_RefreshProperties_Callback = void (*)(QsciLexerHex*);
    using QsciLexerHex_StyleBitsNeeded_Callback = int (*)(const QsciLexerHex*);
    using QsciLexerHex_WordCharacters_Callback = const char* (*)(const QsciLexerHex*);
    using QsciLexerHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerHex*, int);
    using QsciLexerHex_SetColor_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_SetEolFill_Callback = void (*)(QsciLexerHex*, bool, int);
    using QsciLexerHex_SetFont_Callback = void (*)(QsciLexerHex*, QFont*, int);
    using QsciLexerHex_SetPaper_Callback = void (*)(QsciLexerHex*, QColor*, int);
    using QsciLexerHex_ReadProperties_Callback = bool (*)(QsciLexerHex*, QSettings*, const char*);
    using QsciLexerHex_WriteProperties_Callback = bool (*)(const QsciLexerHex*, QSettings*, const char*);
    using QsciLexerHex_Event_Callback = bool (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_EventFilter_Callback = bool (*)(QsciLexerHex*, QObject*, QEvent*);
    using QsciLexerHex_TimerEvent_Callback = void (*)(QsciLexerHex*, QTimerEvent*);
    using QsciLexerHex_ChildEvent_Callback = void (*)(QsciLexerHex*, QChildEvent*);
    using QsciLexerHex_CustomEvent_Callback = void (*)(QsciLexerHex*, QEvent*);
    using QsciLexerHex_ConnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex_DisconnectNotify_Callback = void (*)(QsciLexerHex*, QMetaMethod*);
    using QsciLexerHex::bytesAsText;
    using QsciLexerHex::isSignalConnected;
    using QsciLexerHex::receivers;
    using QsciLexerHex::sender;
    using QsciLexerHex::senderSignalIndex;
    using QsciLexerHex::textAsBytes;

    // Instance callback storage
    QsciLexerHex_MetaObject_Callback qscilexerhex_metaobject_callback = nullptr;
    QsciLexerHex_Metacast_Callback qscilexerhex_metacast_callback = nullptr;
    QsciLexerHex_Metacall_Callback qscilexerhex_metacall_callback = nullptr;
    QsciLexerHex_Language_Callback qscilexerhex_language_callback = nullptr;
    QsciLexerHex_Lexer_Callback qscilexerhex_lexer_callback = nullptr;
    QsciLexerHex_LexerId_Callback qscilexerhex_lexerid_callback = nullptr;
    QsciLexerHex_AutoCompletionFillups_Callback qscilexerhex_autocompletionfillups_callback = nullptr;
    QsciLexerHex_AutoCompletionWordSeparators_Callback qscilexerhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerHex_BlockEnd_Callback qscilexerhex_blockend_callback = nullptr;
    QsciLexerHex_BlockLookback_Callback qscilexerhex_blocklookback_callback = nullptr;
    QsciLexerHex_BlockStart_Callback qscilexerhex_blockstart_callback = nullptr;
    QsciLexerHex_BlockStartKeyword_Callback qscilexerhex_blockstartkeyword_callback = nullptr;
    QsciLexerHex_BraceStyle_Callback qscilexerhex_bracestyle_callback = nullptr;
    QsciLexerHex_CaseSensitive_Callback qscilexerhex_casesensitive_callback = nullptr;
    QsciLexerHex_Color_Callback qscilexerhex_color_callback = nullptr;
    QsciLexerHex_EolFill_Callback qscilexerhex_eolfill_callback = nullptr;
    QsciLexerHex_Font_Callback qscilexerhex_font_callback = nullptr;
    QsciLexerHex_IndentationGuideView_Callback qscilexerhex_indentationguideview_callback = nullptr;
    QsciLexerHex_Keywords_Callback qscilexerhex_keywords_callback = nullptr;
    QsciLexerHex_DefaultStyle_Callback qscilexerhex_defaultstyle_callback = nullptr;
    QsciLexerHex_Description_Callback qscilexerhex_description_callback = nullptr;
    QsciLexerHex_Paper_Callback qscilexerhex_paper_callback = nullptr;
    QsciLexerHex_DefaultColor2_Callback qscilexerhex_defaultcolor2_callback = nullptr;
    QsciLexerHex_DefaultEolFill_Callback qscilexerhex_defaulteolfill_callback = nullptr;
    QsciLexerHex_DefaultFont2_Callback qscilexerhex_defaultfont2_callback = nullptr;
    QsciLexerHex_DefaultPaper2_Callback qscilexerhex_defaultpaper2_callback = nullptr;
    QsciLexerHex_SetEditor_Callback qscilexerhex_seteditor_callback = nullptr;
    QsciLexerHex_RefreshProperties_Callback qscilexerhex_refreshproperties_callback = nullptr;
    QsciLexerHex_StyleBitsNeeded_Callback qscilexerhex_stylebitsneeded_callback = nullptr;
    QsciLexerHex_WordCharacters_Callback qscilexerhex_wordcharacters_callback = nullptr;
    QsciLexerHex_SetAutoIndentStyle_Callback qscilexerhex_setautoindentstyle_callback = nullptr;
    QsciLexerHex_SetColor_Callback qscilexerhex_setcolor_callback = nullptr;
    QsciLexerHex_SetEolFill_Callback qscilexerhex_seteolfill_callback = nullptr;
    QsciLexerHex_SetFont_Callback qscilexerhex_setfont_callback = nullptr;
    QsciLexerHex_SetPaper_Callback qscilexerhex_setpaper_callback = nullptr;
    QsciLexerHex_ReadProperties_Callback qscilexerhex_readproperties_callback = nullptr;
    QsciLexerHex_WriteProperties_Callback qscilexerhex_writeproperties_callback = nullptr;
    QsciLexerHex_Event_Callback qscilexerhex_event_callback = nullptr;
    QsciLexerHex_EventFilter_Callback qscilexerhex_eventfilter_callback = nullptr;
    QsciLexerHex_TimerEvent_Callback qscilexerhex_timerevent_callback = nullptr;
    QsciLexerHex_ChildEvent_Callback qscilexerhex_childevent_callback = nullptr;
    QsciLexerHex_CustomEvent_Callback qscilexerhex_customevent_callback = nullptr;
    QsciLexerHex_ConnectNotify_Callback qscilexerhex_connectnotify_callback = nullptr;
    QsciLexerHex_DisconnectNotify_Callback qscilexerhex_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerHex {
        using QsciLexerHex::childEvent;
        using QsciLexerHex::connectNotify;
        using QsciLexerHex::customEvent;
        using QsciLexerHex::disconnectNotify;
        using QsciLexerHex::readProperties;
        using QsciLexerHex::timerEvent;
        using QsciLexerHex::writeProperties;
    };

    VirtualQsciLexerHex() : QsciLexerHex() {};
    VirtualQsciLexerHex(QObject* parent) : QsciLexerHex(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerhex_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerhex_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerHex::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerhex_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerhex_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerhex_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerhex_language_callback) {
            const char* callback_ret = qscilexerhex_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerHex::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerhex_lexer_callback) {
            const char* callback_ret = qscilexerhex_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerHex::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerhex_lexerid_callback) {
            int callback_ret = qscilexerhex_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerhex_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerhex_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerHex::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerhex_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerhex_autocompletionwordseparators_callback(this);
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
        return QsciLexerHex::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerhex_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhex_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerhex_blocklookback_callback) {
            int callback_ret = qscilexerhex_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerhex_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhex_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerhex_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerhex_bracestyle_callback) {
            int callback_ret = qscilexerhex_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerhex_casesensitive_callback) {
            bool callback_ret = qscilexerhex_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerHex::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerhex_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhex_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerhex_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerhex_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerhex_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerhex_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerhex_indentationguideview_callback) {
            int callback_ret = qscilexerhex_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerhex_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerhex_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerhex_defaultstyle_callback) {
            int callback_ret = qscilexerhex_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerhex_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerHex::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerhex_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhex_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerhex_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhex_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerhex_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerhex_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerhex_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerhex_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhex_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHex::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerhex_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerhex_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerHex::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerhex_refreshproperties_callback) {
            qscilexerhex_refreshproperties_callback(this);
            return;
        }
        QsciLexerHex::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerhex_stylebitsneeded_callback) {
            int callback_ret = qscilexerhex_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHex::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerhex_wordcharacters_callback) {
            const char* callback_ret = qscilexerhex_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerHex::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerhex_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerhex_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerHex::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerhex_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerhex_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerhex_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerhex_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerhex_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerhex_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerhex_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerhex_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHex::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerhex_readproperties_callback) {
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
            bool callback_ret = qscilexerhex_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerHex::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerhex_writeproperties_callback) {
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
            bool callback_ret = qscilexerhex_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerHex::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerhex_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerhex_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHex::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerhex_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerHex::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerhex_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerhex_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerHex::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerhex_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerhex_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerHex::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerhex_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerhex_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerHex::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerhex_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerHex::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerhex_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerhex_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerHex::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerHex_SuperReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHex_SuperWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerHex_SuperTimerEvent(QsciLexerHex* self, QTimerEvent* event);
    friend void QsciLexerHex_SuperChildEvent(QsciLexerHex* self, QChildEvent* event);
    friend void QsciLexerHex_SuperCustomEvent(QsciLexerHex* self, QEvent* event);
    friend void QsciLexerHex_SuperConnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
    friend void QsciLexerHex_SuperDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal);
};

#endif
