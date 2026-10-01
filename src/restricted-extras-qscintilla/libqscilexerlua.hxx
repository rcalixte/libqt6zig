#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERLUA_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERLUA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerLua
class VirtualQsciLexerLua final : public QsciLexerLua {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerLua_MetaObject_Callback = QMetaObject* (*)(const QsciLexerLua*);
    using QsciLexerLua_Metacast_Callback = void* (*)(QsciLexerLua*, const char*);
    using QsciLexerLua_Metacall_Callback = int (*)(QsciLexerLua*, int, int, void**);
    using QsciLexerLua_SetFoldCompact_Callback = void (*)(QsciLexerLua*, bool);
    using QsciLexerLua_Language_Callback = const char* (*)(const QsciLexerLua*);
    using QsciLexerLua_Lexer_Callback = const char* (*)(const QsciLexerLua*);
    using QsciLexerLua_LexerId_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerLua*);
    using QsciLexerLua_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerLua*);
    using QsciLexerLua_BlockEnd_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockLookback_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_BlockStart_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BlockStartKeyword_Callback = const char* (*)(const QsciLexerLua*, int*);
    using QsciLexerLua_BraceStyle_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_CaseSensitive_Callback = bool (*)(const QsciLexerLua*);
    using QsciLexerLua_Color_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_EolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Font_Callback = QFont* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_IndentationGuideView_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_Keywords_Callback = const char* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultStyle_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_Description_Callback = const char* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_Paper_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultColor2_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultEolFill_Callback = bool (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultFont2_Callback = QFont* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_DefaultPaper2_Callback = QColor* (*)(const QsciLexerLua*, int);
    using QsciLexerLua_SetEditor_Callback = void (*)(QsciLexerLua*, QsciScintilla*);
    using QsciLexerLua_RefreshProperties_Callback = void (*)(QsciLexerLua*);
    using QsciLexerLua_StyleBitsNeeded_Callback = int (*)(const QsciLexerLua*);
    using QsciLexerLua_WordCharacters_Callback = const char* (*)(const QsciLexerLua*);
    using QsciLexerLua_SetAutoIndentStyle_Callback = void (*)(QsciLexerLua*, int);
    using QsciLexerLua_SetColor_Callback = void (*)(QsciLexerLua*, QColor*, int);
    using QsciLexerLua_SetEolFill_Callback = void (*)(QsciLexerLua*, bool, int);
    using QsciLexerLua_SetFont_Callback = void (*)(QsciLexerLua*, QFont*, int);
    using QsciLexerLua_SetPaper_Callback = void (*)(QsciLexerLua*, QColor*, int);
    using QsciLexerLua_ReadProperties_Callback = bool (*)(QsciLexerLua*, QSettings*, const char*);
    using QsciLexerLua_WriteProperties_Callback = bool (*)(const QsciLexerLua*, QSettings*, const char*);
    using QsciLexerLua_Event_Callback = bool (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_EventFilter_Callback = bool (*)(QsciLexerLua*, QObject*, QEvent*);
    using QsciLexerLua_TimerEvent_Callback = void (*)(QsciLexerLua*, QTimerEvent*);
    using QsciLexerLua_ChildEvent_Callback = void (*)(QsciLexerLua*, QChildEvent*);
    using QsciLexerLua_CustomEvent_Callback = void (*)(QsciLexerLua*, QEvent*);
    using QsciLexerLua_ConnectNotify_Callback = void (*)(QsciLexerLua*, QMetaMethod*);
    using QsciLexerLua_DisconnectNotify_Callback = void (*)(QsciLexerLua*, QMetaMethod*);
    using QsciLexerLua::bytesAsText;
    using QsciLexerLua::isSignalConnected;
    using QsciLexerLua::receivers;
    using QsciLexerLua::sender;
    using QsciLexerLua::senderSignalIndex;
    using QsciLexerLua::textAsBytes;

    // Instance callback storage
    QsciLexerLua_MetaObject_Callback qscilexerlua_metaobject_callback = nullptr;
    QsciLexerLua_Metacast_Callback qscilexerlua_metacast_callback = nullptr;
    QsciLexerLua_Metacall_Callback qscilexerlua_metacall_callback = nullptr;
    QsciLexerLua_SetFoldCompact_Callback qscilexerlua_setfoldcompact_callback = nullptr;
    QsciLexerLua_Language_Callback qscilexerlua_language_callback = nullptr;
    QsciLexerLua_Lexer_Callback qscilexerlua_lexer_callback = nullptr;
    QsciLexerLua_LexerId_Callback qscilexerlua_lexerid_callback = nullptr;
    QsciLexerLua_AutoCompletionFillups_Callback qscilexerlua_autocompletionfillups_callback = nullptr;
    QsciLexerLua_AutoCompletionWordSeparators_Callback qscilexerlua_autocompletionwordseparators_callback = nullptr;
    QsciLexerLua_BlockEnd_Callback qscilexerlua_blockend_callback = nullptr;
    QsciLexerLua_BlockLookback_Callback qscilexerlua_blocklookback_callback = nullptr;
    QsciLexerLua_BlockStart_Callback qscilexerlua_blockstart_callback = nullptr;
    QsciLexerLua_BlockStartKeyword_Callback qscilexerlua_blockstartkeyword_callback = nullptr;
    QsciLexerLua_BraceStyle_Callback qscilexerlua_bracestyle_callback = nullptr;
    QsciLexerLua_CaseSensitive_Callback qscilexerlua_casesensitive_callback = nullptr;
    QsciLexerLua_Color_Callback qscilexerlua_color_callback = nullptr;
    QsciLexerLua_EolFill_Callback qscilexerlua_eolfill_callback = nullptr;
    QsciLexerLua_Font_Callback qscilexerlua_font_callback = nullptr;
    QsciLexerLua_IndentationGuideView_Callback qscilexerlua_indentationguideview_callback = nullptr;
    QsciLexerLua_Keywords_Callback qscilexerlua_keywords_callback = nullptr;
    QsciLexerLua_DefaultStyle_Callback qscilexerlua_defaultstyle_callback = nullptr;
    QsciLexerLua_Description_Callback qscilexerlua_description_callback = nullptr;
    QsciLexerLua_Paper_Callback qscilexerlua_paper_callback = nullptr;
    QsciLexerLua_DefaultColor2_Callback qscilexerlua_defaultcolor2_callback = nullptr;
    QsciLexerLua_DefaultEolFill_Callback qscilexerlua_defaulteolfill_callback = nullptr;
    QsciLexerLua_DefaultFont2_Callback qscilexerlua_defaultfont2_callback = nullptr;
    QsciLexerLua_DefaultPaper2_Callback qscilexerlua_defaultpaper2_callback = nullptr;
    QsciLexerLua_SetEditor_Callback qscilexerlua_seteditor_callback = nullptr;
    QsciLexerLua_RefreshProperties_Callback qscilexerlua_refreshproperties_callback = nullptr;
    QsciLexerLua_StyleBitsNeeded_Callback qscilexerlua_stylebitsneeded_callback = nullptr;
    QsciLexerLua_WordCharacters_Callback qscilexerlua_wordcharacters_callback = nullptr;
    QsciLexerLua_SetAutoIndentStyle_Callback qscilexerlua_setautoindentstyle_callback = nullptr;
    QsciLexerLua_SetColor_Callback qscilexerlua_setcolor_callback = nullptr;
    QsciLexerLua_SetEolFill_Callback qscilexerlua_seteolfill_callback = nullptr;
    QsciLexerLua_SetFont_Callback qscilexerlua_setfont_callback = nullptr;
    QsciLexerLua_SetPaper_Callback qscilexerlua_setpaper_callback = nullptr;
    QsciLexerLua_ReadProperties_Callback qscilexerlua_readproperties_callback = nullptr;
    QsciLexerLua_WriteProperties_Callback qscilexerlua_writeproperties_callback = nullptr;
    QsciLexerLua_Event_Callback qscilexerlua_event_callback = nullptr;
    QsciLexerLua_EventFilter_Callback qscilexerlua_eventfilter_callback = nullptr;
    QsciLexerLua_TimerEvent_Callback qscilexerlua_timerevent_callback = nullptr;
    QsciLexerLua_ChildEvent_Callback qscilexerlua_childevent_callback = nullptr;
    QsciLexerLua_CustomEvent_Callback qscilexerlua_customevent_callback = nullptr;
    QsciLexerLua_ConnectNotify_Callback qscilexerlua_connectnotify_callback = nullptr;
    QsciLexerLua_DisconnectNotify_Callback qscilexerlua_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerLua {
        using QsciLexerLua::childEvent;
        using QsciLexerLua::connectNotify;
        using QsciLexerLua::customEvent;
        using QsciLexerLua::disconnectNotify;
        using QsciLexerLua::readProperties;
        using QsciLexerLua::timerEvent;
        using QsciLexerLua::writeProperties;
    };

    VirtualQsciLexerLua() : QsciLexerLua() {};
    VirtualQsciLexerLua(QObject* parent) : QsciLexerLua(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerlua_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerlua_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerLua::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerlua_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerlua_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerlua_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerlua_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerlua_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerlua_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerLua::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerlua_language_callback) {
            const char* callback_ret = qscilexerlua_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerLua::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerlua_lexer_callback) {
            const char* callback_ret = qscilexerlua_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerLua::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerlua_lexerid_callback) {
            int callback_ret = qscilexerlua_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerlua_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerlua_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerLua::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerlua_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerlua_autocompletionwordseparators_callback(this);
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
        return QsciLexerLua::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerlua_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerlua_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerlua_blocklookback_callback) {
            int callback_ret = qscilexerlua_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerlua_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerlua_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerlua_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerlua_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerlua_bracestyle_callback) {
            int callback_ret = qscilexerlua_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerlua_casesensitive_callback) {
            bool callback_ret = qscilexerlua_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerLua::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerlua_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerlua_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerlua_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerlua_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerlua_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerlua_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerlua_indentationguideview_callback) {
            int callback_ret = qscilexerlua_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerlua_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerlua_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerlua_defaultstyle_callback) {
            int callback_ret = qscilexerlua_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerlua_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerlua_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerLua::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerlua_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerlua_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerlua_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerlua_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerlua_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerlua_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerlua_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerlua_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerlua_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerlua_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerLua::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerlua_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerlua_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerLua::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerlua_refreshproperties_callback) {
            qscilexerlua_refreshproperties_callback(this);
            return;
        }
        QsciLexerLua::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerlua_stylebitsneeded_callback) {
            int callback_ret = qscilexerlua_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerLua::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerlua_wordcharacters_callback) {
            const char* callback_ret = qscilexerlua_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerLua::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerlua_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerlua_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerLua::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerlua_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerlua_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerlua_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerlua_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerlua_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerlua_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerlua_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerlua_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerLua::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerlua_readproperties_callback) {
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
            bool callback_ret = qscilexerlua_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerLua::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerlua_writeproperties_callback) {
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
            bool callback_ret = qscilexerlua_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerLua::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerlua_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerlua_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerLua::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerlua_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerlua_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerLua::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerlua_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerlua_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerLua::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerlua_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerlua_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerLua::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerlua_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerlua_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerLua::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerlua_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerLua::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerlua_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerlua_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerLua::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerLua_SuperReadProperties(QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerLua_SuperWriteProperties(const QsciLexerLua* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerLua_SuperTimerEvent(QsciLexerLua* self, QTimerEvent* event);
    friend void QsciLexerLua_SuperChildEvent(QsciLexerLua* self, QChildEvent* event);
    friend void QsciLexerLua_SuperCustomEvent(QsciLexerLua* self, QEvent* event);
    friend void QsciLexerLua_SuperConnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
    friend void QsciLexerLua_SuperDisconnectNotify(QsciLexerLua* self, const QMetaMethod* signal);
};

#endif
