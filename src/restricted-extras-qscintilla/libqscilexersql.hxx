#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSQL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSQL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSQL
class VirtualQsciLexerSQL final : public QsciLexerSQL {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerSQL_MetaObject_Callback = QMetaObject* (*)(const QsciLexerSQL*);
    using QsciLexerSQL_Metacast_Callback = void* (*)(QsciLexerSQL*, const char*);
    using QsciLexerSQL_Metacall_Callback = int (*)(QsciLexerSQL*, int, int, void**);
    using QsciLexerSQL_SetBackslashEscapes_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldComments_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_SetFoldCompact_Callback = void (*)(QsciLexerSQL*, bool);
    using QsciLexerSQL_Language_Callback = const char* (*)(const QsciLexerSQL*);
    using QsciLexerSQL_Lexer_Callback = const char* (*)(const QsciLexerSQL*);
    using QsciLexerSQL_LexerId_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerSQL*);
    using QsciLexerSQL_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerSQL*);
    using QsciLexerSQL_BlockEnd_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockLookback_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_BlockStart_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSQL*, int*);
    using QsciLexerSQL_BraceStyle_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_CaseSensitive_Callback = bool (*)(const QsciLexerSQL*);
    using QsciLexerSQL_Color_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_EolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Font_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_IndentationGuideView_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_Keywords_Callback = const char* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultStyle_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_Description_Callback = const char* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_Paper_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultColor2_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultEolFill_Callback = bool (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultFont2_Callback = QFont* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerSQL*, int);
    using QsciLexerSQL_SetEditor_Callback = void (*)(QsciLexerSQL*, QsciScintilla*);
    using QsciLexerSQL_RefreshProperties_Callback = void (*)(QsciLexerSQL*);
    using QsciLexerSQL_StyleBitsNeeded_Callback = int (*)(const QsciLexerSQL*);
    using QsciLexerSQL_WordCharacters_Callback = const char* (*)(const QsciLexerSQL*);
    using QsciLexerSQL_SetAutoIndentStyle_Callback = void (*)(QsciLexerSQL*, int);
    using QsciLexerSQL_SetColor_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_SetEolFill_Callback = void (*)(QsciLexerSQL*, bool, int);
    using QsciLexerSQL_SetFont_Callback = void (*)(QsciLexerSQL*, QFont*, int);
    using QsciLexerSQL_SetPaper_Callback = void (*)(QsciLexerSQL*, QColor*, int);
    using QsciLexerSQL_ReadProperties_Callback = bool (*)(QsciLexerSQL*, QSettings*, const char*);
    using QsciLexerSQL_WriteProperties_Callback = bool (*)(const QsciLexerSQL*, QSettings*, const char*);
    using QsciLexerSQL_Event_Callback = bool (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_EventFilter_Callback = bool (*)(QsciLexerSQL*, QObject*, QEvent*);
    using QsciLexerSQL_TimerEvent_Callback = void (*)(QsciLexerSQL*, QTimerEvent*);
    using QsciLexerSQL_ChildEvent_Callback = void (*)(QsciLexerSQL*, QChildEvent*);
    using QsciLexerSQL_CustomEvent_Callback = void (*)(QsciLexerSQL*, QEvent*);
    using QsciLexerSQL_ConnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL_DisconnectNotify_Callback = void (*)(QsciLexerSQL*, QMetaMethod*);
    using QsciLexerSQL::bytesAsText;
    using QsciLexerSQL::isSignalConnected;
    using QsciLexerSQL::receivers;
    using QsciLexerSQL::sender;
    using QsciLexerSQL::senderSignalIndex;
    using QsciLexerSQL::textAsBytes;

    // Instance callback storage
    QsciLexerSQL_MetaObject_Callback qscilexersql_metaobject_callback = nullptr;
    QsciLexerSQL_Metacast_Callback qscilexersql_metacast_callback = nullptr;
    QsciLexerSQL_Metacall_Callback qscilexersql_metacall_callback = nullptr;
    QsciLexerSQL_SetBackslashEscapes_Callback qscilexersql_setbackslashescapes_callback = nullptr;
    QsciLexerSQL_SetFoldComments_Callback qscilexersql_setfoldcomments_callback = nullptr;
    QsciLexerSQL_SetFoldCompact_Callback qscilexersql_setfoldcompact_callback = nullptr;
    QsciLexerSQL_Language_Callback qscilexersql_language_callback = nullptr;
    QsciLexerSQL_Lexer_Callback qscilexersql_lexer_callback = nullptr;
    QsciLexerSQL_LexerId_Callback qscilexersql_lexerid_callback = nullptr;
    QsciLexerSQL_AutoCompletionFillups_Callback qscilexersql_autocompletionfillups_callback = nullptr;
    QsciLexerSQL_AutoCompletionWordSeparators_Callback qscilexersql_autocompletionwordseparators_callback = nullptr;
    QsciLexerSQL_BlockEnd_Callback qscilexersql_blockend_callback = nullptr;
    QsciLexerSQL_BlockLookback_Callback qscilexersql_blocklookback_callback = nullptr;
    QsciLexerSQL_BlockStart_Callback qscilexersql_blockstart_callback = nullptr;
    QsciLexerSQL_BlockStartKeyword_Callback qscilexersql_blockstartkeyword_callback = nullptr;
    QsciLexerSQL_BraceStyle_Callback qscilexersql_bracestyle_callback = nullptr;
    QsciLexerSQL_CaseSensitive_Callback qscilexersql_casesensitive_callback = nullptr;
    QsciLexerSQL_Color_Callback qscilexersql_color_callback = nullptr;
    QsciLexerSQL_EolFill_Callback qscilexersql_eolfill_callback = nullptr;
    QsciLexerSQL_Font_Callback qscilexersql_font_callback = nullptr;
    QsciLexerSQL_IndentationGuideView_Callback qscilexersql_indentationguideview_callback = nullptr;
    QsciLexerSQL_Keywords_Callback qscilexersql_keywords_callback = nullptr;
    QsciLexerSQL_DefaultStyle_Callback qscilexersql_defaultstyle_callback = nullptr;
    QsciLexerSQL_Description_Callback qscilexersql_description_callback = nullptr;
    QsciLexerSQL_Paper_Callback qscilexersql_paper_callback = nullptr;
    QsciLexerSQL_DefaultColor2_Callback qscilexersql_defaultcolor2_callback = nullptr;
    QsciLexerSQL_DefaultEolFill_Callback qscilexersql_defaulteolfill_callback = nullptr;
    QsciLexerSQL_DefaultFont2_Callback qscilexersql_defaultfont2_callback = nullptr;
    QsciLexerSQL_DefaultPaper2_Callback qscilexersql_defaultpaper2_callback = nullptr;
    QsciLexerSQL_SetEditor_Callback qscilexersql_seteditor_callback = nullptr;
    QsciLexerSQL_RefreshProperties_Callback qscilexersql_refreshproperties_callback = nullptr;
    QsciLexerSQL_StyleBitsNeeded_Callback qscilexersql_stylebitsneeded_callback = nullptr;
    QsciLexerSQL_WordCharacters_Callback qscilexersql_wordcharacters_callback = nullptr;
    QsciLexerSQL_SetAutoIndentStyle_Callback qscilexersql_setautoindentstyle_callback = nullptr;
    QsciLexerSQL_SetColor_Callback qscilexersql_setcolor_callback = nullptr;
    QsciLexerSQL_SetEolFill_Callback qscilexersql_seteolfill_callback = nullptr;
    QsciLexerSQL_SetFont_Callback qscilexersql_setfont_callback = nullptr;
    QsciLexerSQL_SetPaper_Callback qscilexersql_setpaper_callback = nullptr;
    QsciLexerSQL_ReadProperties_Callback qscilexersql_readproperties_callback = nullptr;
    QsciLexerSQL_WriteProperties_Callback qscilexersql_writeproperties_callback = nullptr;
    QsciLexerSQL_Event_Callback qscilexersql_event_callback = nullptr;
    QsciLexerSQL_EventFilter_Callback qscilexersql_eventfilter_callback = nullptr;
    QsciLexerSQL_TimerEvent_Callback qscilexersql_timerevent_callback = nullptr;
    QsciLexerSQL_ChildEvent_Callback qscilexersql_childevent_callback = nullptr;
    QsciLexerSQL_CustomEvent_Callback qscilexersql_customevent_callback = nullptr;
    QsciLexerSQL_ConnectNotify_Callback qscilexersql_connectnotify_callback = nullptr;
    QsciLexerSQL_DisconnectNotify_Callback qscilexersql_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerSQL {
        using QsciLexerSQL::childEvent;
        using QsciLexerSQL::connectNotify;
        using QsciLexerSQL::customEvent;
        using QsciLexerSQL::disconnectNotify;
        using QsciLexerSQL::readProperties;
        using QsciLexerSQL::timerEvent;
        using QsciLexerSQL::writeProperties;
    };

    VirtualQsciLexerSQL() : QsciLexerSQL() {};
    VirtualQsciLexerSQL(QObject* parent) : QsciLexerSQL(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexersql_metaobject_callback) {
            QMetaObject* callback_ret = qscilexersql_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerSQL::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexersql_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexersql_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexersql_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexersql_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setBackslashEscapes(bool enable) override {
        if (qscilexersql_setbackslashescapes_callback) {
            bool cbval1 = enable;
            qscilexersql_setbackslashescapes_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::setBackslashEscapes(enable);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexersql_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexersql_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexersql_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexersql_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexersql_language_callback) {
            const char* callback_ret = qscilexersql_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSQL::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexersql_lexer_callback) {
            const char* callback_ret = qscilexersql_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerSQL::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexersql_lexerid_callback) {
            int callback_ret = qscilexersql_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexersql_autocompletionfillups_callback) {
            const char* callback_ret = qscilexersql_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerSQL::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexersql_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexersql_autocompletionwordseparators_callback(this);
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
        return QsciLexerSQL::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexersql_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersql_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexersql_blocklookback_callback) {
            int callback_ret = qscilexersql_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexersql_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersql_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexersql_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersql_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexersql_bracestyle_callback) {
            int callback_ret = qscilexersql_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexersql_casesensitive_callback) {
            bool callback_ret = qscilexersql_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerSQL::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexersql_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersql_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexersql_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexersql_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexersql_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexersql_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexersql_indentationguideview_callback) {
            int callback_ret = qscilexersql_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexersql_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexersql_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexersql_defaultstyle_callback) {
            int callback_ret = qscilexersql_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexersql_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexersql_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSQL::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexersql_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersql_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexersql_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersql_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexersql_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexersql_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexersql_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexersql_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexersql_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersql_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSQL::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexersql_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexersql_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexersql_refreshproperties_callback) {
            qscilexersql_refreshproperties_callback(this);
            return;
        }
        QsciLexerSQL::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexersql_stylebitsneeded_callback) {
            int callback_ret = qscilexersql_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSQL::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexersql_wordcharacters_callback) {
            const char* callback_ret = qscilexersql_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerSQL::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexersql_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexersql_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexersql_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexersql_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexersql_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexersql_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexersql_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexersql_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexersql_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexersql_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSQL::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexersql_readproperties_callback) {
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
            bool callback_ret = qscilexersql_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSQL::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexersql_writeproperties_callback) {
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
            bool callback_ret = qscilexersql_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSQL::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexersql_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexersql_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSQL::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexersql_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexersql_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerSQL::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexersql_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexersql_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexersql_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexersql_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexersql_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexersql_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexersql_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexersql_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexersql_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSQL::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerSQL_SuperReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSQL_SuperWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSQL_SuperTimerEvent(QsciLexerSQL* self, QTimerEvent* event);
    friend void QsciLexerSQL_SuperChildEvent(QsciLexerSQL* self, QChildEvent* event);
    friend void QsciLexerSQL_SuperCustomEvent(QsciLexerSQL* self, QEvent* event);
    friend void QsciLexerSQL_SuperConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
    friend void QsciLexerSQL_SuperDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal);
};

#endif
