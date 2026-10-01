#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERBASH_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERBASH_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerBash
class VirtualQsciLexerBash final : public QsciLexerBash {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerBash_MetaObject_Callback = QMetaObject* (*)(const QsciLexerBash*);
    using QsciLexerBash_Metacast_Callback = void* (*)(QsciLexerBash*, const char*);
    using QsciLexerBash_Metacall_Callback = int (*)(QsciLexerBash*, int, int, void**);
    using QsciLexerBash_SetFoldComments_Callback = void (*)(QsciLexerBash*, bool);
    using QsciLexerBash_SetFoldCompact_Callback = void (*)(QsciLexerBash*, bool);
    using QsciLexerBash_Language_Callback = const char* (*)(const QsciLexerBash*);
    using QsciLexerBash_Lexer_Callback = const char* (*)(const QsciLexerBash*);
    using QsciLexerBash_LexerId_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerBash*);
    using QsciLexerBash_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerBash*);
    using QsciLexerBash_BlockEnd_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BlockLookback_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_BlockStart_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BlockStartKeyword_Callback = const char* (*)(const QsciLexerBash*, int*);
    using QsciLexerBash_BraceStyle_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_CaseSensitive_Callback = bool (*)(const QsciLexerBash*);
    using QsciLexerBash_Color_Callback = QColor* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_EolFill_Callback = bool (*)(const QsciLexerBash*, int);
    using QsciLexerBash_Font_Callback = QFont* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_IndentationGuideView_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_Keywords_Callback = const char* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultStyle_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_Description_Callback = const char* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_Paper_Callback = QColor* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultColor2_Callback = QColor* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultEolFill_Callback = bool (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultFont2_Callback = QFont* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_DefaultPaper2_Callback = QColor* (*)(const QsciLexerBash*, int);
    using QsciLexerBash_SetEditor_Callback = void (*)(QsciLexerBash*, QsciScintilla*);
    using QsciLexerBash_RefreshProperties_Callback = void (*)(QsciLexerBash*);
    using QsciLexerBash_StyleBitsNeeded_Callback = int (*)(const QsciLexerBash*);
    using QsciLexerBash_WordCharacters_Callback = const char* (*)(const QsciLexerBash*);
    using QsciLexerBash_SetAutoIndentStyle_Callback = void (*)(QsciLexerBash*, int);
    using QsciLexerBash_SetColor_Callback = void (*)(QsciLexerBash*, QColor*, int);
    using QsciLexerBash_SetEolFill_Callback = void (*)(QsciLexerBash*, bool, int);
    using QsciLexerBash_SetFont_Callback = void (*)(QsciLexerBash*, QFont*, int);
    using QsciLexerBash_SetPaper_Callback = void (*)(QsciLexerBash*, QColor*, int);
    using QsciLexerBash_ReadProperties_Callback = bool (*)(QsciLexerBash*, QSettings*, const char*);
    using QsciLexerBash_WriteProperties_Callback = bool (*)(const QsciLexerBash*, QSettings*, const char*);
    using QsciLexerBash_Event_Callback = bool (*)(QsciLexerBash*, QEvent*);
    using QsciLexerBash_EventFilter_Callback = bool (*)(QsciLexerBash*, QObject*, QEvent*);
    using QsciLexerBash_TimerEvent_Callback = void (*)(QsciLexerBash*, QTimerEvent*);
    using QsciLexerBash_ChildEvent_Callback = void (*)(QsciLexerBash*, QChildEvent*);
    using QsciLexerBash_CustomEvent_Callback = void (*)(QsciLexerBash*, QEvent*);
    using QsciLexerBash_ConnectNotify_Callback = void (*)(QsciLexerBash*, QMetaMethod*);
    using QsciLexerBash_DisconnectNotify_Callback = void (*)(QsciLexerBash*, QMetaMethod*);
    using QsciLexerBash::bytesAsText;
    using QsciLexerBash::isSignalConnected;
    using QsciLexerBash::receivers;
    using QsciLexerBash::sender;
    using QsciLexerBash::senderSignalIndex;
    using QsciLexerBash::textAsBytes;

    // Instance callback storage
    QsciLexerBash_MetaObject_Callback qscilexerbash_metaobject_callback = nullptr;
    QsciLexerBash_Metacast_Callback qscilexerbash_metacast_callback = nullptr;
    QsciLexerBash_Metacall_Callback qscilexerbash_metacall_callback = nullptr;
    QsciLexerBash_SetFoldComments_Callback qscilexerbash_setfoldcomments_callback = nullptr;
    QsciLexerBash_SetFoldCompact_Callback qscilexerbash_setfoldcompact_callback = nullptr;
    QsciLexerBash_Language_Callback qscilexerbash_language_callback = nullptr;
    QsciLexerBash_Lexer_Callback qscilexerbash_lexer_callback = nullptr;
    QsciLexerBash_LexerId_Callback qscilexerbash_lexerid_callback = nullptr;
    QsciLexerBash_AutoCompletionFillups_Callback qscilexerbash_autocompletionfillups_callback = nullptr;
    QsciLexerBash_AutoCompletionWordSeparators_Callback qscilexerbash_autocompletionwordseparators_callback = nullptr;
    QsciLexerBash_BlockEnd_Callback qscilexerbash_blockend_callback = nullptr;
    QsciLexerBash_BlockLookback_Callback qscilexerbash_blocklookback_callback = nullptr;
    QsciLexerBash_BlockStart_Callback qscilexerbash_blockstart_callback = nullptr;
    QsciLexerBash_BlockStartKeyword_Callback qscilexerbash_blockstartkeyword_callback = nullptr;
    QsciLexerBash_BraceStyle_Callback qscilexerbash_bracestyle_callback = nullptr;
    QsciLexerBash_CaseSensitive_Callback qscilexerbash_casesensitive_callback = nullptr;
    QsciLexerBash_Color_Callback qscilexerbash_color_callback = nullptr;
    QsciLexerBash_EolFill_Callback qscilexerbash_eolfill_callback = nullptr;
    QsciLexerBash_Font_Callback qscilexerbash_font_callback = nullptr;
    QsciLexerBash_IndentationGuideView_Callback qscilexerbash_indentationguideview_callback = nullptr;
    QsciLexerBash_Keywords_Callback qscilexerbash_keywords_callback = nullptr;
    QsciLexerBash_DefaultStyle_Callback qscilexerbash_defaultstyle_callback = nullptr;
    QsciLexerBash_Description_Callback qscilexerbash_description_callback = nullptr;
    QsciLexerBash_Paper_Callback qscilexerbash_paper_callback = nullptr;
    QsciLexerBash_DefaultColor2_Callback qscilexerbash_defaultcolor2_callback = nullptr;
    QsciLexerBash_DefaultEolFill_Callback qscilexerbash_defaulteolfill_callback = nullptr;
    QsciLexerBash_DefaultFont2_Callback qscilexerbash_defaultfont2_callback = nullptr;
    QsciLexerBash_DefaultPaper2_Callback qscilexerbash_defaultpaper2_callback = nullptr;
    QsciLexerBash_SetEditor_Callback qscilexerbash_seteditor_callback = nullptr;
    QsciLexerBash_RefreshProperties_Callback qscilexerbash_refreshproperties_callback = nullptr;
    QsciLexerBash_StyleBitsNeeded_Callback qscilexerbash_stylebitsneeded_callback = nullptr;
    QsciLexerBash_WordCharacters_Callback qscilexerbash_wordcharacters_callback = nullptr;
    QsciLexerBash_SetAutoIndentStyle_Callback qscilexerbash_setautoindentstyle_callback = nullptr;
    QsciLexerBash_SetColor_Callback qscilexerbash_setcolor_callback = nullptr;
    QsciLexerBash_SetEolFill_Callback qscilexerbash_seteolfill_callback = nullptr;
    QsciLexerBash_SetFont_Callback qscilexerbash_setfont_callback = nullptr;
    QsciLexerBash_SetPaper_Callback qscilexerbash_setpaper_callback = nullptr;
    QsciLexerBash_ReadProperties_Callback qscilexerbash_readproperties_callback = nullptr;
    QsciLexerBash_WriteProperties_Callback qscilexerbash_writeproperties_callback = nullptr;
    QsciLexerBash_Event_Callback qscilexerbash_event_callback = nullptr;
    QsciLexerBash_EventFilter_Callback qscilexerbash_eventfilter_callback = nullptr;
    QsciLexerBash_TimerEvent_Callback qscilexerbash_timerevent_callback = nullptr;
    QsciLexerBash_ChildEvent_Callback qscilexerbash_childevent_callback = nullptr;
    QsciLexerBash_CustomEvent_Callback qscilexerbash_customevent_callback = nullptr;
    QsciLexerBash_ConnectNotify_Callback qscilexerbash_connectnotify_callback = nullptr;
    QsciLexerBash_DisconnectNotify_Callback qscilexerbash_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerBash {
        using QsciLexerBash::childEvent;
        using QsciLexerBash::connectNotify;
        using QsciLexerBash::customEvent;
        using QsciLexerBash::disconnectNotify;
        using QsciLexerBash::readProperties;
        using QsciLexerBash::timerEvent;
        using QsciLexerBash::writeProperties;
    };

    VirtualQsciLexerBash() : QsciLexerBash() {};
    VirtualQsciLexerBash(QObject* parent) : QsciLexerBash(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerbash_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerbash_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerBash::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerbash_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerbash_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerbash_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerbash_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerbash_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerbash_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerBash::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerbash_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerbash_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerBash::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerbash_language_callback) {
            const char* callback_ret = qscilexerbash_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerBash::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerbash_lexer_callback) {
            const char* callback_ret = qscilexerbash_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerBash::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerbash_lexerid_callback) {
            int callback_ret = qscilexerbash_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerbash_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerbash_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerBash::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerbash_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerbash_autocompletionwordseparators_callback(this);
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
        return QsciLexerBash::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerbash_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbash_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerbash_blocklookback_callback) {
            int callback_ret = qscilexerbash_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerbash_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbash_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerbash_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbash_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerbash_bracestyle_callback) {
            int callback_ret = qscilexerbash_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerbash_casesensitive_callback) {
            bool callback_ret = qscilexerbash_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerBash::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerbash_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbash_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerbash_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerbash_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerbash_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerbash_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerbash_indentationguideview_callback) {
            int callback_ret = qscilexerbash_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerbash_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerbash_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerbash_defaultstyle_callback) {
            int callback_ret = qscilexerbash_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerbash_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerbash_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerBash::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerbash_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbash_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerbash_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbash_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerbash_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerbash_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerbash_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerbash_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerbash_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbash_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBash::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerbash_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerbash_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerBash::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerbash_refreshproperties_callback) {
            qscilexerbash_refreshproperties_callback(this);
            return;
        }
        QsciLexerBash::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerbash_stylebitsneeded_callback) {
            int callback_ret = qscilexerbash_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBash::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerbash_wordcharacters_callback) {
            const char* callback_ret = qscilexerbash_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerBash::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerbash_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerbash_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerBash::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerbash_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerbash_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBash::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerbash_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerbash_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBash::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerbash_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerbash_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBash::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerbash_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerbash_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBash::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerbash_readproperties_callback) {
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
            bool callback_ret = qscilexerbash_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerBash::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerbash_writeproperties_callback) {
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
            bool callback_ret = qscilexerbash_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerBash::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerbash_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerbash_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBash::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerbash_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerbash_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerBash::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerbash_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerbash_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerBash::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerbash_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerbash_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerBash::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerbash_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerbash_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerBash::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerbash_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerbash_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerBash::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerbash_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerbash_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerBash::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerBash_SuperReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerBash_SuperWriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerBash_SuperTimerEvent(QsciLexerBash* self, QTimerEvent* event);
    friend void QsciLexerBash_SuperChildEvent(QsciLexerBash* self, QChildEvent* event);
    friend void QsciLexerBash_SuperCustomEvent(QsciLexerBash* self, QEvent* event);
    friend void QsciLexerBash_SuperConnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
    friend void QsciLexerBash_SuperDisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal);
};

#endif
