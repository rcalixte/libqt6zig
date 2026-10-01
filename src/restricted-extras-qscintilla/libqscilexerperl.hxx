#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPERL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPERL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPerl
class VirtualQsciLexerPerl final : public QsciLexerPerl {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPerl_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPerl*);
    using QsciLexerPerl_Metacast_Callback = void* (*)(QsciLexerPerl*, const char*);
    using QsciLexerPerl_Metacall_Callback = int (*)(QsciLexerPerl*, int, int, void**);
    using QsciLexerPerl_SetFoldComments_Callback = void (*)(QsciLexerPerl*, bool);
    using QsciLexerPerl_SetFoldCompact_Callback = void (*)(QsciLexerPerl*, bool);
    using QsciLexerPerl_Language_Callback = const char* (*)(const QsciLexerPerl*);
    using QsciLexerPerl_Lexer_Callback = const char* (*)(const QsciLexerPerl*);
    using QsciLexerPerl_LexerId_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPerl*);
    using QsciLexerPerl_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPerl*);
    using QsciLexerPerl_BlockEnd_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BlockLookback_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_BlockStart_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPerl*, int*);
    using QsciLexerPerl_BraceStyle_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_CaseSensitive_Callback = bool (*)(const QsciLexerPerl*);
    using QsciLexerPerl_Color_Callback = QColor* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_EolFill_Callback = bool (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_Font_Callback = QFont* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_IndentationGuideView_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_Keywords_Callback = const char* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultStyle_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_Description_Callback = const char* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_Paper_Callback = QColor* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultColor2_Callback = QColor* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultEolFill_Callback = bool (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultFont2_Callback = QFont* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPerl*, int);
    using QsciLexerPerl_SetEditor_Callback = void (*)(QsciLexerPerl*, QsciScintilla*);
    using QsciLexerPerl_RefreshProperties_Callback = void (*)(QsciLexerPerl*);
    using QsciLexerPerl_StyleBitsNeeded_Callback = int (*)(const QsciLexerPerl*);
    using QsciLexerPerl_WordCharacters_Callback = const char* (*)(const QsciLexerPerl*);
    using QsciLexerPerl_SetAutoIndentStyle_Callback = void (*)(QsciLexerPerl*, int);
    using QsciLexerPerl_SetColor_Callback = void (*)(QsciLexerPerl*, QColor*, int);
    using QsciLexerPerl_SetEolFill_Callback = void (*)(QsciLexerPerl*, bool, int);
    using QsciLexerPerl_SetFont_Callback = void (*)(QsciLexerPerl*, QFont*, int);
    using QsciLexerPerl_SetPaper_Callback = void (*)(QsciLexerPerl*, QColor*, int);
    using QsciLexerPerl_ReadProperties_Callback = bool (*)(QsciLexerPerl*, QSettings*, const char*);
    using QsciLexerPerl_WriteProperties_Callback = bool (*)(const QsciLexerPerl*, QSettings*, const char*);
    using QsciLexerPerl_Event_Callback = bool (*)(QsciLexerPerl*, QEvent*);
    using QsciLexerPerl_EventFilter_Callback = bool (*)(QsciLexerPerl*, QObject*, QEvent*);
    using QsciLexerPerl_TimerEvent_Callback = void (*)(QsciLexerPerl*, QTimerEvent*);
    using QsciLexerPerl_ChildEvent_Callback = void (*)(QsciLexerPerl*, QChildEvent*);
    using QsciLexerPerl_CustomEvent_Callback = void (*)(QsciLexerPerl*, QEvent*);
    using QsciLexerPerl_ConnectNotify_Callback = void (*)(QsciLexerPerl*, QMetaMethod*);
    using QsciLexerPerl_DisconnectNotify_Callback = void (*)(QsciLexerPerl*, QMetaMethod*);
    using QsciLexerPerl::bytesAsText;
    using QsciLexerPerl::isSignalConnected;
    using QsciLexerPerl::receivers;
    using QsciLexerPerl::sender;
    using QsciLexerPerl::senderSignalIndex;
    using QsciLexerPerl::textAsBytes;

    // Instance callback storage
    QsciLexerPerl_MetaObject_Callback qscilexerperl_metaobject_callback = nullptr;
    QsciLexerPerl_Metacast_Callback qscilexerperl_metacast_callback = nullptr;
    QsciLexerPerl_Metacall_Callback qscilexerperl_metacall_callback = nullptr;
    QsciLexerPerl_SetFoldComments_Callback qscilexerperl_setfoldcomments_callback = nullptr;
    QsciLexerPerl_SetFoldCompact_Callback qscilexerperl_setfoldcompact_callback = nullptr;
    QsciLexerPerl_Language_Callback qscilexerperl_language_callback = nullptr;
    QsciLexerPerl_Lexer_Callback qscilexerperl_lexer_callback = nullptr;
    QsciLexerPerl_LexerId_Callback qscilexerperl_lexerid_callback = nullptr;
    QsciLexerPerl_AutoCompletionFillups_Callback qscilexerperl_autocompletionfillups_callback = nullptr;
    QsciLexerPerl_AutoCompletionWordSeparators_Callback qscilexerperl_autocompletionwordseparators_callback = nullptr;
    QsciLexerPerl_BlockEnd_Callback qscilexerperl_blockend_callback = nullptr;
    QsciLexerPerl_BlockLookback_Callback qscilexerperl_blocklookback_callback = nullptr;
    QsciLexerPerl_BlockStart_Callback qscilexerperl_blockstart_callback = nullptr;
    QsciLexerPerl_BlockStartKeyword_Callback qscilexerperl_blockstartkeyword_callback = nullptr;
    QsciLexerPerl_BraceStyle_Callback qscilexerperl_bracestyle_callback = nullptr;
    QsciLexerPerl_CaseSensitive_Callback qscilexerperl_casesensitive_callback = nullptr;
    QsciLexerPerl_Color_Callback qscilexerperl_color_callback = nullptr;
    QsciLexerPerl_EolFill_Callback qscilexerperl_eolfill_callback = nullptr;
    QsciLexerPerl_Font_Callback qscilexerperl_font_callback = nullptr;
    QsciLexerPerl_IndentationGuideView_Callback qscilexerperl_indentationguideview_callback = nullptr;
    QsciLexerPerl_Keywords_Callback qscilexerperl_keywords_callback = nullptr;
    QsciLexerPerl_DefaultStyle_Callback qscilexerperl_defaultstyle_callback = nullptr;
    QsciLexerPerl_Description_Callback qscilexerperl_description_callback = nullptr;
    QsciLexerPerl_Paper_Callback qscilexerperl_paper_callback = nullptr;
    QsciLexerPerl_DefaultColor2_Callback qscilexerperl_defaultcolor2_callback = nullptr;
    QsciLexerPerl_DefaultEolFill_Callback qscilexerperl_defaulteolfill_callback = nullptr;
    QsciLexerPerl_DefaultFont2_Callback qscilexerperl_defaultfont2_callback = nullptr;
    QsciLexerPerl_DefaultPaper2_Callback qscilexerperl_defaultpaper2_callback = nullptr;
    QsciLexerPerl_SetEditor_Callback qscilexerperl_seteditor_callback = nullptr;
    QsciLexerPerl_RefreshProperties_Callback qscilexerperl_refreshproperties_callback = nullptr;
    QsciLexerPerl_StyleBitsNeeded_Callback qscilexerperl_stylebitsneeded_callback = nullptr;
    QsciLexerPerl_WordCharacters_Callback qscilexerperl_wordcharacters_callback = nullptr;
    QsciLexerPerl_SetAutoIndentStyle_Callback qscilexerperl_setautoindentstyle_callback = nullptr;
    QsciLexerPerl_SetColor_Callback qscilexerperl_setcolor_callback = nullptr;
    QsciLexerPerl_SetEolFill_Callback qscilexerperl_seteolfill_callback = nullptr;
    QsciLexerPerl_SetFont_Callback qscilexerperl_setfont_callback = nullptr;
    QsciLexerPerl_SetPaper_Callback qscilexerperl_setpaper_callback = nullptr;
    QsciLexerPerl_ReadProperties_Callback qscilexerperl_readproperties_callback = nullptr;
    QsciLexerPerl_WriteProperties_Callback qscilexerperl_writeproperties_callback = nullptr;
    QsciLexerPerl_Event_Callback qscilexerperl_event_callback = nullptr;
    QsciLexerPerl_EventFilter_Callback qscilexerperl_eventfilter_callback = nullptr;
    QsciLexerPerl_TimerEvent_Callback qscilexerperl_timerevent_callback = nullptr;
    QsciLexerPerl_ChildEvent_Callback qscilexerperl_childevent_callback = nullptr;
    QsciLexerPerl_CustomEvent_Callback qscilexerperl_customevent_callback = nullptr;
    QsciLexerPerl_ConnectNotify_Callback qscilexerperl_connectnotify_callback = nullptr;
    QsciLexerPerl_DisconnectNotify_Callback qscilexerperl_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPerl {
        using QsciLexerPerl::childEvent;
        using QsciLexerPerl::connectNotify;
        using QsciLexerPerl::customEvent;
        using QsciLexerPerl::disconnectNotify;
        using QsciLexerPerl::readProperties;
        using QsciLexerPerl::timerEvent;
        using QsciLexerPerl::writeProperties;
    };

    VirtualQsciLexerPerl() : QsciLexerPerl() {};
    VirtualQsciLexerPerl(QObject* parent) : QsciLexerPerl(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerperl_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerperl_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPerl::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerperl_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerperl_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerperl_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerperl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerperl_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerperl_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerperl_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerperl_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerperl_language_callback) {
            const char* callback_ret = qscilexerperl_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPerl::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerperl_lexer_callback) {
            const char* callback_ret = qscilexerperl_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPerl::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerperl_lexerid_callback) {
            int callback_ret = qscilexerperl_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerperl_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerperl_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPerl::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerperl_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerperl_autocompletionwordseparators_callback(this);
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
        return QsciLexerPerl::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerperl_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerperl_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerperl_blocklookback_callback) {
            int callback_ret = qscilexerperl_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerperl_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerperl_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerperl_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerperl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerperl_bracestyle_callback) {
            int callback_ret = qscilexerperl_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerperl_casesensitive_callback) {
            bool callback_ret = qscilexerperl_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPerl::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerperl_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerperl_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerperl_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerperl_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerperl_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerperl_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerperl_indentationguideview_callback) {
            int callback_ret = qscilexerperl_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerperl_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerperl_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerperl_defaultstyle_callback) {
            int callback_ret = qscilexerperl_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerperl_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerperl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPerl::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerperl_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerperl_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerperl_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerperl_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerperl_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerperl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerperl_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerperl_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerperl_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerperl_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPerl::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerperl_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerperl_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerperl_refreshproperties_callback) {
            qscilexerperl_refreshproperties_callback(this);
            return;
        }
        QsciLexerPerl::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerperl_stylebitsneeded_callback) {
            int callback_ret = qscilexerperl_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPerl::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerperl_wordcharacters_callback) {
            const char* callback_ret = qscilexerperl_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPerl::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerperl_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerperl_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerperl_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerperl_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPerl::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerperl_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerperl_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPerl::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerperl_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerperl_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPerl::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerperl_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerperl_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPerl::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerperl_readproperties_callback) {
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
            bool callback_ret = qscilexerperl_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPerl::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerperl_writeproperties_callback) {
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
            bool callback_ret = qscilexerperl_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPerl::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerperl_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerperl_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPerl::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerperl_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerperl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPerl::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerperl_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerperl_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerperl_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerperl_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerperl_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerperl_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerperl_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerperl_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerperl_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerperl_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPerl::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPerl_SuperReadProperties(QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPerl_SuperWriteProperties(const QsciLexerPerl* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPerl_SuperTimerEvent(QsciLexerPerl* self, QTimerEvent* event);
    friend void QsciLexerPerl_SuperChildEvent(QsciLexerPerl* self, QChildEvent* event);
    friend void QsciLexerPerl_SuperCustomEvent(QsciLexerPerl* self, QEvent* event);
    friend void QsciLexerPerl_SuperConnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
    friend void QsciLexerPerl_SuperDisconnectNotify(QsciLexerPerl* self, const QMetaMethod* signal);
};

#endif
