#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSPICE_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSPICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSpice
class VirtualQsciLexerSpice final : public QsciLexerSpice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerSpice_MetaObject_Callback = QMetaObject* (*)(const QsciLexerSpice*);
    using QsciLexerSpice_Metacast_Callback = void* (*)(QsciLexerSpice*, const char*);
    using QsciLexerSpice_Metacall_Callback = int (*)(QsciLexerSpice*, int, int, void**);
    using QsciLexerSpice_Language_Callback = const char* (*)(const QsciLexerSpice*);
    using QsciLexerSpice_Lexer_Callback = const char* (*)(const QsciLexerSpice*);
    using QsciLexerSpice_LexerId_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerSpice*);
    using QsciLexerSpice_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerSpice*);
    using QsciLexerSpice_BlockEnd_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BlockLookback_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_BlockStart_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSpice*, int*);
    using QsciLexerSpice_BraceStyle_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_CaseSensitive_Callback = bool (*)(const QsciLexerSpice*);
    using QsciLexerSpice_Color_Callback = QColor* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_EolFill_Callback = bool (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_Font_Callback = QFont* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_IndentationGuideView_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_Keywords_Callback = const char* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultStyle_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_Description_Callback = const char* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_Paper_Callback = QColor* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultColor2_Callback = QColor* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultEolFill_Callback = bool (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultFont2_Callback = QFont* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_DefaultPaper2_Callback = QColor* (*)(const QsciLexerSpice*, int);
    using QsciLexerSpice_SetEditor_Callback = void (*)(QsciLexerSpice*, QsciScintilla*);
    using QsciLexerSpice_RefreshProperties_Callback = void (*)(QsciLexerSpice*);
    using QsciLexerSpice_StyleBitsNeeded_Callback = int (*)(const QsciLexerSpice*);
    using QsciLexerSpice_WordCharacters_Callback = const char* (*)(const QsciLexerSpice*);
    using QsciLexerSpice_SetAutoIndentStyle_Callback = void (*)(QsciLexerSpice*, int);
    using QsciLexerSpice_SetColor_Callback = void (*)(QsciLexerSpice*, QColor*, int);
    using QsciLexerSpice_SetEolFill_Callback = void (*)(QsciLexerSpice*, bool, int);
    using QsciLexerSpice_SetFont_Callback = void (*)(QsciLexerSpice*, QFont*, int);
    using QsciLexerSpice_SetPaper_Callback = void (*)(QsciLexerSpice*, QColor*, int);
    using QsciLexerSpice_ReadProperties_Callback = bool (*)(QsciLexerSpice*, QSettings*, const char*);
    using QsciLexerSpice_WriteProperties_Callback = bool (*)(const QsciLexerSpice*, QSettings*, const char*);
    using QsciLexerSpice_Event_Callback = bool (*)(QsciLexerSpice*, QEvent*);
    using QsciLexerSpice_EventFilter_Callback = bool (*)(QsciLexerSpice*, QObject*, QEvent*);
    using QsciLexerSpice_TimerEvent_Callback = void (*)(QsciLexerSpice*, QTimerEvent*);
    using QsciLexerSpice_ChildEvent_Callback = void (*)(QsciLexerSpice*, QChildEvent*);
    using QsciLexerSpice_CustomEvent_Callback = void (*)(QsciLexerSpice*, QEvent*);
    using QsciLexerSpice_ConnectNotify_Callback = void (*)(QsciLexerSpice*, QMetaMethod*);
    using QsciLexerSpice_DisconnectNotify_Callback = void (*)(QsciLexerSpice*, QMetaMethod*);
    using QsciLexerSpice::bytesAsText;
    using QsciLexerSpice::isSignalConnected;
    using QsciLexerSpice::receivers;
    using QsciLexerSpice::sender;
    using QsciLexerSpice::senderSignalIndex;
    using QsciLexerSpice::textAsBytes;

    // Instance callback storage
    QsciLexerSpice_MetaObject_Callback qscilexerspice_metaobject_callback = nullptr;
    QsciLexerSpice_Metacast_Callback qscilexerspice_metacast_callback = nullptr;
    QsciLexerSpice_Metacall_Callback qscilexerspice_metacall_callback = nullptr;
    QsciLexerSpice_Language_Callback qscilexerspice_language_callback = nullptr;
    QsciLexerSpice_Lexer_Callback qscilexerspice_lexer_callback = nullptr;
    QsciLexerSpice_LexerId_Callback qscilexerspice_lexerid_callback = nullptr;
    QsciLexerSpice_AutoCompletionFillups_Callback qscilexerspice_autocompletionfillups_callback = nullptr;
    QsciLexerSpice_AutoCompletionWordSeparators_Callback qscilexerspice_autocompletionwordseparators_callback = nullptr;
    QsciLexerSpice_BlockEnd_Callback qscilexerspice_blockend_callback = nullptr;
    QsciLexerSpice_BlockLookback_Callback qscilexerspice_blocklookback_callback = nullptr;
    QsciLexerSpice_BlockStart_Callback qscilexerspice_blockstart_callback = nullptr;
    QsciLexerSpice_BlockStartKeyword_Callback qscilexerspice_blockstartkeyword_callback = nullptr;
    QsciLexerSpice_BraceStyle_Callback qscilexerspice_bracestyle_callback = nullptr;
    QsciLexerSpice_CaseSensitive_Callback qscilexerspice_casesensitive_callback = nullptr;
    QsciLexerSpice_Color_Callback qscilexerspice_color_callback = nullptr;
    QsciLexerSpice_EolFill_Callback qscilexerspice_eolfill_callback = nullptr;
    QsciLexerSpice_Font_Callback qscilexerspice_font_callback = nullptr;
    QsciLexerSpice_IndentationGuideView_Callback qscilexerspice_indentationguideview_callback = nullptr;
    QsciLexerSpice_Keywords_Callback qscilexerspice_keywords_callback = nullptr;
    QsciLexerSpice_DefaultStyle_Callback qscilexerspice_defaultstyle_callback = nullptr;
    QsciLexerSpice_Description_Callback qscilexerspice_description_callback = nullptr;
    QsciLexerSpice_Paper_Callback qscilexerspice_paper_callback = nullptr;
    QsciLexerSpice_DefaultColor2_Callback qscilexerspice_defaultcolor2_callback = nullptr;
    QsciLexerSpice_DefaultEolFill_Callback qscilexerspice_defaulteolfill_callback = nullptr;
    QsciLexerSpice_DefaultFont2_Callback qscilexerspice_defaultfont2_callback = nullptr;
    QsciLexerSpice_DefaultPaper2_Callback qscilexerspice_defaultpaper2_callback = nullptr;
    QsciLexerSpice_SetEditor_Callback qscilexerspice_seteditor_callback = nullptr;
    QsciLexerSpice_RefreshProperties_Callback qscilexerspice_refreshproperties_callback = nullptr;
    QsciLexerSpice_StyleBitsNeeded_Callback qscilexerspice_stylebitsneeded_callback = nullptr;
    QsciLexerSpice_WordCharacters_Callback qscilexerspice_wordcharacters_callback = nullptr;
    QsciLexerSpice_SetAutoIndentStyle_Callback qscilexerspice_setautoindentstyle_callback = nullptr;
    QsciLexerSpice_SetColor_Callback qscilexerspice_setcolor_callback = nullptr;
    QsciLexerSpice_SetEolFill_Callback qscilexerspice_seteolfill_callback = nullptr;
    QsciLexerSpice_SetFont_Callback qscilexerspice_setfont_callback = nullptr;
    QsciLexerSpice_SetPaper_Callback qscilexerspice_setpaper_callback = nullptr;
    QsciLexerSpice_ReadProperties_Callback qscilexerspice_readproperties_callback = nullptr;
    QsciLexerSpice_WriteProperties_Callback qscilexerspice_writeproperties_callback = nullptr;
    QsciLexerSpice_Event_Callback qscilexerspice_event_callback = nullptr;
    QsciLexerSpice_EventFilter_Callback qscilexerspice_eventfilter_callback = nullptr;
    QsciLexerSpice_TimerEvent_Callback qscilexerspice_timerevent_callback = nullptr;
    QsciLexerSpice_ChildEvent_Callback qscilexerspice_childevent_callback = nullptr;
    QsciLexerSpice_CustomEvent_Callback qscilexerspice_customevent_callback = nullptr;
    QsciLexerSpice_ConnectNotify_Callback qscilexerspice_connectnotify_callback = nullptr;
    QsciLexerSpice_DisconnectNotify_Callback qscilexerspice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerSpice {
        using QsciLexerSpice::childEvent;
        using QsciLexerSpice::connectNotify;
        using QsciLexerSpice::customEvent;
        using QsciLexerSpice::disconnectNotify;
        using QsciLexerSpice::readProperties;
        using QsciLexerSpice::timerEvent;
        using QsciLexerSpice::writeProperties;
    };

    VirtualQsciLexerSpice() : QsciLexerSpice() {};
    VirtualQsciLexerSpice(QObject* parent) : QsciLexerSpice(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerspice_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerspice_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerSpice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerspice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerspice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerspice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerspice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerspice_language_callback) {
            const char* callback_ret = qscilexerspice_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSpice::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerspice_lexer_callback) {
            const char* callback_ret = qscilexerspice_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerSpice::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerspice_lexerid_callback) {
            int callback_ret = qscilexerspice_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerspice_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerspice_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerSpice::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerspice_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerspice_autocompletionwordseparators_callback(this);
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
        return QsciLexerSpice::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerspice_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerspice_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerspice_blocklookback_callback) {
            int callback_ret = qscilexerspice_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerspice_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerspice_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerspice_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerspice_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerspice_bracestyle_callback) {
            int callback_ret = qscilexerspice_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerspice_casesensitive_callback) {
            bool callback_ret = qscilexerspice_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerSpice::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerspice_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerspice_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerspice_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerspice_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerspice_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerspice_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerspice_indentationguideview_callback) {
            int callback_ret = qscilexerspice_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerspice_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerspice_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerspice_defaultstyle_callback) {
            int callback_ret = qscilexerspice_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerspice_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerspice_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSpice::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerspice_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerspice_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerspice_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerspice_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerspice_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerspice_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerspice_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerspice_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerspice_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerspice_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSpice::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerspice_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerspice_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerspice_refreshproperties_callback) {
            qscilexerspice_refreshproperties_callback(this);
            return;
        }
        QsciLexerSpice::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerspice_stylebitsneeded_callback) {
            int callback_ret = qscilexerspice_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSpice::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerspice_wordcharacters_callback) {
            const char* callback_ret = qscilexerspice_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerSpice::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerspice_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerspice_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerspice_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerspice_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSpice::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerspice_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerspice_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSpice::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerspice_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerspice_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSpice::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerspice_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerspice_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSpice::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerspice_readproperties_callback) {
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
            bool callback_ret = qscilexerspice_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSpice::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerspice_writeproperties_callback) {
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
            bool callback_ret = qscilexerspice_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSpice::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerspice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerspice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSpice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerspice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerspice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerSpice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerspice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerspice_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerspice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerspice_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerspice_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerspice_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerspice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerspice_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerspice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerspice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSpice::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerSpice_SuperReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSpice_SuperWriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSpice_SuperTimerEvent(QsciLexerSpice* self, QTimerEvent* event);
    friend void QsciLexerSpice_SuperChildEvent(QsciLexerSpice* self, QChildEvent* event);
    friend void QsciLexerSpice_SuperCustomEvent(QsciLexerSpice* self, QEvent* event);
    friend void QsciLexerSpice_SuperConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
    friend void QsciLexerSpice_SuperDisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal);
};

#endif
