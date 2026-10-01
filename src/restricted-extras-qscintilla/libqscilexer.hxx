#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXER_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexer
class VirtualQsciLexer : public QsciLexer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexer_MetaObject_Callback = QMetaObject* (*)(const QsciLexer*);
    using QsciLexer_Metacast_Callback = void* (*)(QsciLexer*, const char*);
    using QsciLexer_Metacall_Callback = int (*)(QsciLexer*, int, int, void**);
    using QsciLexer_Language_Callback = const char* (*)(const QsciLexer*);
    using QsciLexer_Lexer_Callback = const char* (*)(const QsciLexer*);
    using QsciLexer_LexerId_Callback = int (*)(const QsciLexer*);
    using QsciLexer_AutoCompletionFillups_Callback = const char* (*)(const QsciLexer*);
    using QsciLexer_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexer*);
    using QsciLexer_BlockEnd_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockLookback_Callback = int (*)(const QsciLexer*);
    using QsciLexer_BlockStart_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockStartKeyword_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BraceStyle_Callback = int (*)(const QsciLexer*);
    using QsciLexer_CaseSensitive_Callback = bool (*)(const QsciLexer*);
    using QsciLexer_Color_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_EolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_Font_Callback = QFont* (*)(const QsciLexer*, int);
    using QsciLexer_IndentationGuideView_Callback = int (*)(const QsciLexer*);
    using QsciLexer_Keywords_Callback = const char* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultStyle_Callback = int (*)(const QsciLexer*);
    using QsciLexer_Description_Callback = const char* (*)(const QsciLexer*, int);
    using QsciLexer_Paper_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultColor2_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultEolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_DefaultFont2_Callback = QFont* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultPaper2_Callback = QColor* (*)(const QsciLexer*, int);
    using QsciLexer_SetEditor_Callback = void (*)(QsciLexer*, QsciScintilla*);
    using QsciLexer_RefreshProperties_Callback = void (*)(QsciLexer*);
    using QsciLexer_StyleBitsNeeded_Callback = int (*)(const QsciLexer*);
    using QsciLexer_WordCharacters_Callback = const char* (*)(const QsciLexer*);
    using QsciLexer_SetAutoIndentStyle_Callback = void (*)(QsciLexer*, int);
    using QsciLexer_SetColor_Callback = void (*)(QsciLexer*, QColor*, int);
    using QsciLexer_SetEolFill_Callback = void (*)(QsciLexer*, bool, int);
    using QsciLexer_SetFont_Callback = void (*)(QsciLexer*, QFont*, int);
    using QsciLexer_SetPaper_Callback = void (*)(QsciLexer*, QColor*, int);
    using QsciLexer_ReadProperties_Callback = bool (*)(QsciLexer*, QSettings*, const char*);
    using QsciLexer_WriteProperties_Callback = bool (*)(const QsciLexer*, QSettings*, const char*);
    using QsciLexer_Event_Callback = bool (*)(QsciLexer*, QEvent*);
    using QsciLexer_EventFilter_Callback = bool (*)(QsciLexer*, QObject*, QEvent*);
    using QsciLexer_TimerEvent_Callback = void (*)(QsciLexer*, QTimerEvent*);
    using QsciLexer_ChildEvent_Callback = void (*)(QsciLexer*, QChildEvent*);
    using QsciLexer_CustomEvent_Callback = void (*)(QsciLexer*, QEvent*);
    using QsciLexer_ConnectNotify_Callback = void (*)(QsciLexer*, QMetaMethod*);
    using QsciLexer_DisconnectNotify_Callback = void (*)(QsciLexer*, QMetaMethod*);
    using QsciLexer::bytesAsText;
    using QsciLexer::isSignalConnected;
    using QsciLexer::receivers;
    using QsciLexer::sender;
    using QsciLexer::senderSignalIndex;
    using QsciLexer::textAsBytes;

    // Instance callback storage
    QsciLexer_MetaObject_Callback qscilexer_metaobject_callback = nullptr;
    QsciLexer_Metacast_Callback qscilexer_metacast_callback = nullptr;
    QsciLexer_Metacall_Callback qscilexer_metacall_callback = nullptr;
    QsciLexer_Language_Callback qscilexer_language_callback = nullptr;
    QsciLexer_Lexer_Callback qscilexer_lexer_callback = nullptr;
    QsciLexer_LexerId_Callback qscilexer_lexerid_callback = nullptr;
    QsciLexer_AutoCompletionFillups_Callback qscilexer_autocompletionfillups_callback = nullptr;
    QsciLexer_AutoCompletionWordSeparators_Callback qscilexer_autocompletionwordseparators_callback = nullptr;
    QsciLexer_BlockEnd_Callback qscilexer_blockend_callback = nullptr;
    QsciLexer_BlockLookback_Callback qscilexer_blocklookback_callback = nullptr;
    QsciLexer_BlockStart_Callback qscilexer_blockstart_callback = nullptr;
    QsciLexer_BlockStartKeyword_Callback qscilexer_blockstartkeyword_callback = nullptr;
    QsciLexer_BraceStyle_Callback qscilexer_bracestyle_callback = nullptr;
    QsciLexer_CaseSensitive_Callback qscilexer_casesensitive_callback = nullptr;
    QsciLexer_Color_Callback qscilexer_color_callback = nullptr;
    QsciLexer_EolFill_Callback qscilexer_eolfill_callback = nullptr;
    QsciLexer_Font_Callback qscilexer_font_callback = nullptr;
    QsciLexer_IndentationGuideView_Callback qscilexer_indentationguideview_callback = nullptr;
    QsciLexer_Keywords_Callback qscilexer_keywords_callback = nullptr;
    QsciLexer_DefaultStyle_Callback qscilexer_defaultstyle_callback = nullptr;
    QsciLexer_Description_Callback qscilexer_description_callback = nullptr;
    QsciLexer_Paper_Callback qscilexer_paper_callback = nullptr;
    QsciLexer_DefaultColor2_Callback qscilexer_defaultcolor2_callback = nullptr;
    QsciLexer_DefaultEolFill_Callback qscilexer_defaulteolfill_callback = nullptr;
    QsciLexer_DefaultFont2_Callback qscilexer_defaultfont2_callback = nullptr;
    QsciLexer_DefaultPaper2_Callback qscilexer_defaultpaper2_callback = nullptr;
    QsciLexer_SetEditor_Callback qscilexer_seteditor_callback = nullptr;
    QsciLexer_RefreshProperties_Callback qscilexer_refreshproperties_callback = nullptr;
    QsciLexer_StyleBitsNeeded_Callback qscilexer_stylebitsneeded_callback = nullptr;
    QsciLexer_WordCharacters_Callback qscilexer_wordcharacters_callback = nullptr;
    QsciLexer_SetAutoIndentStyle_Callback qscilexer_setautoindentstyle_callback = nullptr;
    QsciLexer_SetColor_Callback qscilexer_setcolor_callback = nullptr;
    QsciLexer_SetEolFill_Callback qscilexer_seteolfill_callback = nullptr;
    QsciLexer_SetFont_Callback qscilexer_setfont_callback = nullptr;
    QsciLexer_SetPaper_Callback qscilexer_setpaper_callback = nullptr;
    QsciLexer_ReadProperties_Callback qscilexer_readproperties_callback = nullptr;
    QsciLexer_WriteProperties_Callback qscilexer_writeproperties_callback = nullptr;
    QsciLexer_Event_Callback qscilexer_event_callback = nullptr;
    QsciLexer_EventFilter_Callback qscilexer_eventfilter_callback = nullptr;
    QsciLexer_TimerEvent_Callback qscilexer_timerevent_callback = nullptr;
    QsciLexer_ChildEvent_Callback qscilexer_childevent_callback = nullptr;
    QsciLexer_CustomEvent_Callback qscilexer_customevent_callback = nullptr;
    QsciLexer_ConnectNotify_Callback qscilexer_connectnotify_callback = nullptr;
    QsciLexer_DisconnectNotify_Callback qscilexer_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexer {
        using QsciLexer::childEvent;
        using QsciLexer::connectNotify;
        using QsciLexer::customEvent;
        using QsciLexer::disconnectNotify;
        using QsciLexer::readProperties;
        using QsciLexer::timerEvent;
        using QsciLexer::writeProperties;
    };

    VirtualQsciLexer() : QsciLexer() {};
    VirtualQsciLexer(QObject* parent) : QsciLexer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexer_metaobject_callback) {
            QMetaObject* callback_ret = qscilexer_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexer_language_callback) {
            const char* callback_ret = qscilexer_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexer::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexer_lexer_callback) {
            const char* callback_ret = qscilexer_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexer::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexer_lexerid_callback) {
            int callback_ret = qscilexer_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexer_autocompletionfillups_callback) {
            const char* callback_ret = qscilexer_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexer::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexer_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexer_autocompletionwordseparators_callback(this);
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
        return QsciLexer::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexer_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexer_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexer_blocklookback_callback) {
            int callback_ret = qscilexer_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexer_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexer_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexer_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexer_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexer_bracestyle_callback) {
            int callback_ret = qscilexer_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexer_casesensitive_callback) {
            bool callback_ret = qscilexer_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexer::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexer_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexer_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexer_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexer_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexer_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexer_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexer_indentationguideview_callback) {
            int callback_ret = qscilexer_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexer_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexer_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexer_defaultstyle_callback) {
            int callback_ret = qscilexer_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexer_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexer_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexer::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexer_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexer_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexer_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexer_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexer_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexer_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexer_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexer_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexer_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexer_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexer::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexer_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexer_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexer::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexer_refreshproperties_callback) {
            qscilexer_refreshproperties_callback(this);
            return;
        }
        QsciLexer::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexer_stylebitsneeded_callback) {
            int callback_ret = qscilexer_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexer::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexer_wordcharacters_callback) {
            const char* callback_ret = qscilexer_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexer::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexer_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexer_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexer::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexer_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexer_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexer_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexer_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexer_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexer_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexer_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexer_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexer::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexer_readproperties_callback) {
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
            bool callback_ret = qscilexer_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexer::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexer_writeproperties_callback) {
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
            bool callback_ret = qscilexer_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexer::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexer_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexer_childevent_callback(this, cbval1);
            return;
        }
        QsciLexer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexer_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexer_customevent_callback(this, cbval1);
            return;
        }
        QsciLexer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexer_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexer::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexer_SuperReadProperties(QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexer_SuperWriteProperties(const QsciLexer* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexer_SuperTimerEvent(QsciLexer* self, QTimerEvent* event);
    friend void QsciLexer_SuperChildEvent(QsciLexer* self, QChildEvent* event);
    friend void QsciLexer_SuperCustomEvent(QsciLexer* self, QEvent* event);
    friend void QsciLexer_SuperConnectNotify(QsciLexer* self, const QMetaMethod* signal);
    friend void QsciLexer_SuperDisconnectNotify(QsciLexer* self, const QMetaMethod* signal);
};

#endif
