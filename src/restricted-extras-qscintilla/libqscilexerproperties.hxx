#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPROPERTIES_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPROPERTIES_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerProperties
class VirtualQsciLexerProperties final : public QsciLexerProperties {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerProperties_MetaObject_Callback = QMetaObject* (*)(const QsciLexerProperties*);
    using QsciLexerProperties_Metacast_Callback = void* (*)(QsciLexerProperties*, const char*);
    using QsciLexerProperties_Metacall_Callback = int (*)(QsciLexerProperties*, int, int, void**);
    using QsciLexerProperties_SetFoldCompact_Callback = void (*)(QsciLexerProperties*, bool);
    using QsciLexerProperties_Language_Callback = const char* (*)(const QsciLexerProperties*);
    using QsciLexerProperties_Lexer_Callback = const char* (*)(const QsciLexerProperties*);
    using QsciLexerProperties_LexerId_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerProperties*);
    using QsciLexerProperties_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerProperties*);
    using QsciLexerProperties_BlockEnd_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockLookback_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_BlockStart_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BlockStartKeyword_Callback = const char* (*)(const QsciLexerProperties*, int*);
    using QsciLexerProperties_BraceStyle_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_CaseSensitive_Callback = bool (*)(const QsciLexerProperties*);
    using QsciLexerProperties_Color_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_EolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Font_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_IndentationGuideView_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_Keywords_Callback = const char* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultStyle_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_Description_Callback = const char* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_Paper_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultColor2_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultEolFill_Callback = bool (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultFont2_Callback = QFont* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_DefaultPaper2_Callback = QColor* (*)(const QsciLexerProperties*, int);
    using QsciLexerProperties_SetEditor_Callback = void (*)(QsciLexerProperties*, QsciScintilla*);
    using QsciLexerProperties_RefreshProperties_Callback = void (*)(QsciLexerProperties*);
    using QsciLexerProperties_StyleBitsNeeded_Callback = int (*)(const QsciLexerProperties*);
    using QsciLexerProperties_WordCharacters_Callback = const char* (*)(const QsciLexerProperties*);
    using QsciLexerProperties_SetAutoIndentStyle_Callback = void (*)(QsciLexerProperties*, int);
    using QsciLexerProperties_SetColor_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_SetEolFill_Callback = void (*)(QsciLexerProperties*, bool, int);
    using QsciLexerProperties_SetFont_Callback = void (*)(QsciLexerProperties*, QFont*, int);
    using QsciLexerProperties_SetPaper_Callback = void (*)(QsciLexerProperties*, QColor*, int);
    using QsciLexerProperties_ReadProperties_Callback = bool (*)(QsciLexerProperties*, QSettings*, const char*);
    using QsciLexerProperties_WriteProperties_Callback = bool (*)(const QsciLexerProperties*, QSettings*, const char*);
    using QsciLexerProperties_Event_Callback = bool (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_EventFilter_Callback = bool (*)(QsciLexerProperties*, QObject*, QEvent*);
    using QsciLexerProperties_TimerEvent_Callback = void (*)(QsciLexerProperties*, QTimerEvent*);
    using QsciLexerProperties_ChildEvent_Callback = void (*)(QsciLexerProperties*, QChildEvent*);
    using QsciLexerProperties_CustomEvent_Callback = void (*)(QsciLexerProperties*, QEvent*);
    using QsciLexerProperties_ConnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties_DisconnectNotify_Callback = void (*)(QsciLexerProperties*, QMetaMethod*);
    using QsciLexerProperties::bytesAsText;
    using QsciLexerProperties::isSignalConnected;
    using QsciLexerProperties::receivers;
    using QsciLexerProperties::sender;
    using QsciLexerProperties::senderSignalIndex;
    using QsciLexerProperties::textAsBytes;

    // Instance callback storage
    QsciLexerProperties_MetaObject_Callback qscilexerproperties_metaobject_callback = nullptr;
    QsciLexerProperties_Metacast_Callback qscilexerproperties_metacast_callback = nullptr;
    QsciLexerProperties_Metacall_Callback qscilexerproperties_metacall_callback = nullptr;
    QsciLexerProperties_SetFoldCompact_Callback qscilexerproperties_setfoldcompact_callback = nullptr;
    QsciLexerProperties_Language_Callback qscilexerproperties_language_callback = nullptr;
    QsciLexerProperties_Lexer_Callback qscilexerproperties_lexer_callback = nullptr;
    QsciLexerProperties_LexerId_Callback qscilexerproperties_lexerid_callback = nullptr;
    QsciLexerProperties_AutoCompletionFillups_Callback qscilexerproperties_autocompletionfillups_callback = nullptr;
    QsciLexerProperties_AutoCompletionWordSeparators_Callback qscilexerproperties_autocompletionwordseparators_callback = nullptr;
    QsciLexerProperties_BlockEnd_Callback qscilexerproperties_blockend_callback = nullptr;
    QsciLexerProperties_BlockLookback_Callback qscilexerproperties_blocklookback_callback = nullptr;
    QsciLexerProperties_BlockStart_Callback qscilexerproperties_blockstart_callback = nullptr;
    QsciLexerProperties_BlockStartKeyword_Callback qscilexerproperties_blockstartkeyword_callback = nullptr;
    QsciLexerProperties_BraceStyle_Callback qscilexerproperties_bracestyle_callback = nullptr;
    QsciLexerProperties_CaseSensitive_Callback qscilexerproperties_casesensitive_callback = nullptr;
    QsciLexerProperties_Color_Callback qscilexerproperties_color_callback = nullptr;
    QsciLexerProperties_EolFill_Callback qscilexerproperties_eolfill_callback = nullptr;
    QsciLexerProperties_Font_Callback qscilexerproperties_font_callback = nullptr;
    QsciLexerProperties_IndentationGuideView_Callback qscilexerproperties_indentationguideview_callback = nullptr;
    QsciLexerProperties_Keywords_Callback qscilexerproperties_keywords_callback = nullptr;
    QsciLexerProperties_DefaultStyle_Callback qscilexerproperties_defaultstyle_callback = nullptr;
    QsciLexerProperties_Description_Callback qscilexerproperties_description_callback = nullptr;
    QsciLexerProperties_Paper_Callback qscilexerproperties_paper_callback = nullptr;
    QsciLexerProperties_DefaultColor2_Callback qscilexerproperties_defaultcolor2_callback = nullptr;
    QsciLexerProperties_DefaultEolFill_Callback qscilexerproperties_defaulteolfill_callback = nullptr;
    QsciLexerProperties_DefaultFont2_Callback qscilexerproperties_defaultfont2_callback = nullptr;
    QsciLexerProperties_DefaultPaper2_Callback qscilexerproperties_defaultpaper2_callback = nullptr;
    QsciLexerProperties_SetEditor_Callback qscilexerproperties_seteditor_callback = nullptr;
    QsciLexerProperties_RefreshProperties_Callback qscilexerproperties_refreshproperties_callback = nullptr;
    QsciLexerProperties_StyleBitsNeeded_Callback qscilexerproperties_stylebitsneeded_callback = nullptr;
    QsciLexerProperties_WordCharacters_Callback qscilexerproperties_wordcharacters_callback = nullptr;
    QsciLexerProperties_SetAutoIndentStyle_Callback qscilexerproperties_setautoindentstyle_callback = nullptr;
    QsciLexerProperties_SetColor_Callback qscilexerproperties_setcolor_callback = nullptr;
    QsciLexerProperties_SetEolFill_Callback qscilexerproperties_seteolfill_callback = nullptr;
    QsciLexerProperties_SetFont_Callback qscilexerproperties_setfont_callback = nullptr;
    QsciLexerProperties_SetPaper_Callback qscilexerproperties_setpaper_callback = nullptr;
    QsciLexerProperties_ReadProperties_Callback qscilexerproperties_readproperties_callback = nullptr;
    QsciLexerProperties_WriteProperties_Callback qscilexerproperties_writeproperties_callback = nullptr;
    QsciLexerProperties_Event_Callback qscilexerproperties_event_callback = nullptr;
    QsciLexerProperties_EventFilter_Callback qscilexerproperties_eventfilter_callback = nullptr;
    QsciLexerProperties_TimerEvent_Callback qscilexerproperties_timerevent_callback = nullptr;
    QsciLexerProperties_ChildEvent_Callback qscilexerproperties_childevent_callback = nullptr;
    QsciLexerProperties_CustomEvent_Callback qscilexerproperties_customevent_callback = nullptr;
    QsciLexerProperties_ConnectNotify_Callback qscilexerproperties_connectnotify_callback = nullptr;
    QsciLexerProperties_DisconnectNotify_Callback qscilexerproperties_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerProperties {
        using QsciLexerProperties::childEvent;
        using QsciLexerProperties::connectNotify;
        using QsciLexerProperties::customEvent;
        using QsciLexerProperties::disconnectNotify;
        using QsciLexerProperties::readProperties;
        using QsciLexerProperties::timerEvent;
        using QsciLexerProperties::writeProperties;
    };

    VirtualQsciLexerProperties() : QsciLexerProperties() {};
    VirtualQsciLexerProperties(QObject* parent) : QsciLexerProperties(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerproperties_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerproperties_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerProperties::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerproperties_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerproperties_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerproperties_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerproperties_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerproperties_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerproperties_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerproperties_language_callback) {
            const char* callback_ret = qscilexerproperties_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerProperties::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerproperties_lexer_callback) {
            const char* callback_ret = qscilexerproperties_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerProperties::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerproperties_lexerid_callback) {
            int callback_ret = qscilexerproperties_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerproperties_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerproperties_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerProperties::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerproperties_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerproperties_autocompletionwordseparators_callback(this);
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
        return QsciLexerProperties::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerproperties_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerproperties_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerproperties_blocklookback_callback) {
            int callback_ret = qscilexerproperties_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerproperties_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerproperties_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerproperties_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerproperties_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerproperties_bracestyle_callback) {
            int callback_ret = qscilexerproperties_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerproperties_casesensitive_callback) {
            bool callback_ret = qscilexerproperties_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerProperties::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerproperties_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerproperties_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerproperties_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerproperties_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerproperties_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerproperties_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerproperties_indentationguideview_callback) {
            int callback_ret = qscilexerproperties_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerproperties_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerproperties_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerproperties_defaultstyle_callback) {
            int callback_ret = qscilexerproperties_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerproperties_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerproperties_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerProperties::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerproperties_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerproperties_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerproperties_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerproperties_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerproperties_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerproperties_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerproperties_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerproperties_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerproperties_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerproperties_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerProperties::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerproperties_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerproperties_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerproperties_refreshproperties_callback) {
            qscilexerproperties_refreshproperties_callback(this);
            return;
        }
        QsciLexerProperties::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerproperties_stylebitsneeded_callback) {
            int callback_ret = qscilexerproperties_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerProperties::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerproperties_wordcharacters_callback) {
            const char* callback_ret = qscilexerproperties_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerProperties::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerproperties_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerproperties_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerproperties_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerproperties_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerproperties_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerproperties_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerproperties_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerproperties_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerproperties_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerproperties_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerProperties::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerproperties_readproperties_callback) {
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
            bool callback_ret = qscilexerproperties_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerProperties::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerproperties_writeproperties_callback) {
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
            bool callback_ret = qscilexerproperties_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerProperties::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerproperties_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerproperties_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerProperties::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerproperties_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerproperties_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerProperties::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerproperties_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerproperties_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerproperties_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerproperties_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerproperties_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerproperties_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerproperties_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerproperties_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerproperties_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerProperties::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerProperties_SuperReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerProperties_SuperWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerProperties_SuperTimerEvent(QsciLexerProperties* self, QTimerEvent* event);
    friend void QsciLexerProperties_SuperChildEvent(QsciLexerProperties* self, QChildEvent* event);
    friend void QsciLexerProperties_SuperCustomEvent(QsciLexerProperties* self, QEvent* event);
    friend void QsciLexerProperties_SuperConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
    friend void QsciLexerProperties_SuperDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal);
};

#endif
