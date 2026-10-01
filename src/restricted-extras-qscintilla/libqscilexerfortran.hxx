#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERFORTRAN_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERFORTRAN_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerFortran
class VirtualQsciLexerFortran final : public QsciLexerFortran {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerFortran_MetaObject_Callback = QMetaObject* (*)(const QsciLexerFortran*);
    using QsciLexerFortran_Metacast_Callback = void* (*)(QsciLexerFortran*, const char*);
    using QsciLexerFortran_Metacall_Callback = int (*)(QsciLexerFortran*, int, int, void**);
    using QsciLexerFortran_SetFoldCompact_Callback = void (*)(QsciLexerFortran*, bool);
    using QsciLexerFortran_Language_Callback = const char* (*)(const QsciLexerFortran*);
    using QsciLexerFortran_Lexer_Callback = const char* (*)(const QsciLexerFortran*);
    using QsciLexerFortran_LexerId_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerFortran*);
    using QsciLexerFortran_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerFortran*);
    using QsciLexerFortran_BlockEnd_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BlockLookback_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_BlockStart_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BlockStartKeyword_Callback = const char* (*)(const QsciLexerFortran*, int*);
    using QsciLexerFortran_BraceStyle_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_CaseSensitive_Callback = bool (*)(const QsciLexerFortran*);
    using QsciLexerFortran_Color_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_EolFill_Callback = bool (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_Font_Callback = QFont* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_IndentationGuideView_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_Keywords_Callback = const char* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultStyle_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_Description_Callback = const char* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_Paper_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultColor2_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultEolFill_Callback = bool (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultFont2_Callback = QFont* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_DefaultPaper2_Callback = QColor* (*)(const QsciLexerFortran*, int);
    using QsciLexerFortran_SetEditor_Callback = void (*)(QsciLexerFortran*, QsciScintilla*);
    using QsciLexerFortran_RefreshProperties_Callback = void (*)(QsciLexerFortran*);
    using QsciLexerFortran_StyleBitsNeeded_Callback = int (*)(const QsciLexerFortran*);
    using QsciLexerFortran_WordCharacters_Callback = const char* (*)(const QsciLexerFortran*);
    using QsciLexerFortran_SetAutoIndentStyle_Callback = void (*)(QsciLexerFortran*, int);
    using QsciLexerFortran_SetColor_Callback = void (*)(QsciLexerFortran*, QColor*, int);
    using QsciLexerFortran_SetEolFill_Callback = void (*)(QsciLexerFortran*, bool, int);
    using QsciLexerFortran_SetFont_Callback = void (*)(QsciLexerFortran*, QFont*, int);
    using QsciLexerFortran_SetPaper_Callback = void (*)(QsciLexerFortran*, QColor*, int);
    using QsciLexerFortran_ReadProperties_Callback = bool (*)(QsciLexerFortran*, QSettings*, const char*);
    using QsciLexerFortran_WriteProperties_Callback = bool (*)(const QsciLexerFortran*, QSettings*, const char*);
    using QsciLexerFortran_Event_Callback = bool (*)(QsciLexerFortran*, QEvent*);
    using QsciLexerFortran_EventFilter_Callback = bool (*)(QsciLexerFortran*, QObject*, QEvent*);
    using QsciLexerFortran_TimerEvent_Callback = void (*)(QsciLexerFortran*, QTimerEvent*);
    using QsciLexerFortran_ChildEvent_Callback = void (*)(QsciLexerFortran*, QChildEvent*);
    using QsciLexerFortran_CustomEvent_Callback = void (*)(QsciLexerFortran*, QEvent*);
    using QsciLexerFortran_ConnectNotify_Callback = void (*)(QsciLexerFortran*, QMetaMethod*);
    using QsciLexerFortran_DisconnectNotify_Callback = void (*)(QsciLexerFortran*, QMetaMethod*);
    using QsciLexerFortran::bytesAsText;
    using QsciLexerFortran::isSignalConnected;
    using QsciLexerFortran::receivers;
    using QsciLexerFortran::sender;
    using QsciLexerFortran::senderSignalIndex;
    using QsciLexerFortran::textAsBytes;

    // Instance callback storage
    QsciLexerFortran_MetaObject_Callback qscilexerfortran_metaobject_callback = nullptr;
    QsciLexerFortran_Metacast_Callback qscilexerfortran_metacast_callback = nullptr;
    QsciLexerFortran_Metacall_Callback qscilexerfortran_metacall_callback = nullptr;
    QsciLexerFortran_SetFoldCompact_Callback qscilexerfortran_setfoldcompact_callback = nullptr;
    QsciLexerFortran_Language_Callback qscilexerfortran_language_callback = nullptr;
    QsciLexerFortran_Lexer_Callback qscilexerfortran_lexer_callback = nullptr;
    QsciLexerFortran_LexerId_Callback qscilexerfortran_lexerid_callback = nullptr;
    QsciLexerFortran_AutoCompletionFillups_Callback qscilexerfortran_autocompletionfillups_callback = nullptr;
    QsciLexerFortran_AutoCompletionWordSeparators_Callback qscilexerfortran_autocompletionwordseparators_callback = nullptr;
    QsciLexerFortran_BlockEnd_Callback qscilexerfortran_blockend_callback = nullptr;
    QsciLexerFortran_BlockLookback_Callback qscilexerfortran_blocklookback_callback = nullptr;
    QsciLexerFortran_BlockStart_Callback qscilexerfortran_blockstart_callback = nullptr;
    QsciLexerFortran_BlockStartKeyword_Callback qscilexerfortran_blockstartkeyword_callback = nullptr;
    QsciLexerFortran_BraceStyle_Callback qscilexerfortran_bracestyle_callback = nullptr;
    QsciLexerFortran_CaseSensitive_Callback qscilexerfortran_casesensitive_callback = nullptr;
    QsciLexerFortran_Color_Callback qscilexerfortran_color_callback = nullptr;
    QsciLexerFortran_EolFill_Callback qscilexerfortran_eolfill_callback = nullptr;
    QsciLexerFortran_Font_Callback qscilexerfortran_font_callback = nullptr;
    QsciLexerFortran_IndentationGuideView_Callback qscilexerfortran_indentationguideview_callback = nullptr;
    QsciLexerFortran_Keywords_Callback qscilexerfortran_keywords_callback = nullptr;
    QsciLexerFortran_DefaultStyle_Callback qscilexerfortran_defaultstyle_callback = nullptr;
    QsciLexerFortran_Description_Callback qscilexerfortran_description_callback = nullptr;
    QsciLexerFortran_Paper_Callback qscilexerfortran_paper_callback = nullptr;
    QsciLexerFortran_DefaultColor2_Callback qscilexerfortran_defaultcolor2_callback = nullptr;
    QsciLexerFortran_DefaultEolFill_Callback qscilexerfortran_defaulteolfill_callback = nullptr;
    QsciLexerFortran_DefaultFont2_Callback qscilexerfortran_defaultfont2_callback = nullptr;
    QsciLexerFortran_DefaultPaper2_Callback qscilexerfortran_defaultpaper2_callback = nullptr;
    QsciLexerFortran_SetEditor_Callback qscilexerfortran_seteditor_callback = nullptr;
    QsciLexerFortran_RefreshProperties_Callback qscilexerfortran_refreshproperties_callback = nullptr;
    QsciLexerFortran_StyleBitsNeeded_Callback qscilexerfortran_stylebitsneeded_callback = nullptr;
    QsciLexerFortran_WordCharacters_Callback qscilexerfortran_wordcharacters_callback = nullptr;
    QsciLexerFortran_SetAutoIndentStyle_Callback qscilexerfortran_setautoindentstyle_callback = nullptr;
    QsciLexerFortran_SetColor_Callback qscilexerfortran_setcolor_callback = nullptr;
    QsciLexerFortran_SetEolFill_Callback qscilexerfortran_seteolfill_callback = nullptr;
    QsciLexerFortran_SetFont_Callback qscilexerfortran_setfont_callback = nullptr;
    QsciLexerFortran_SetPaper_Callback qscilexerfortran_setpaper_callback = nullptr;
    QsciLexerFortran_ReadProperties_Callback qscilexerfortran_readproperties_callback = nullptr;
    QsciLexerFortran_WriteProperties_Callback qscilexerfortran_writeproperties_callback = nullptr;
    QsciLexerFortran_Event_Callback qscilexerfortran_event_callback = nullptr;
    QsciLexerFortran_EventFilter_Callback qscilexerfortran_eventfilter_callback = nullptr;
    QsciLexerFortran_TimerEvent_Callback qscilexerfortran_timerevent_callback = nullptr;
    QsciLexerFortran_ChildEvent_Callback qscilexerfortran_childevent_callback = nullptr;
    QsciLexerFortran_CustomEvent_Callback qscilexerfortran_customevent_callback = nullptr;
    QsciLexerFortran_ConnectNotify_Callback qscilexerfortran_connectnotify_callback = nullptr;
    QsciLexerFortran_DisconnectNotify_Callback qscilexerfortran_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerFortran {
        using QsciLexerFortran::childEvent;
        using QsciLexerFortran::connectNotify;
        using QsciLexerFortran::customEvent;
        using QsciLexerFortran::disconnectNotify;
        using QsciLexerFortran::readProperties;
        using QsciLexerFortran::timerEvent;
        using QsciLexerFortran::writeProperties;
    };

    VirtualQsciLexerFortran() : QsciLexerFortran() {};
    VirtualQsciLexerFortran(QObject* parent) : QsciLexerFortran(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerfortran_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerfortran_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerfortran_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerfortran_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerfortran_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerfortran_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerfortran_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerfortran_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerfortran_language_callback) {
            const char* callback_ret = qscilexerfortran_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerFortran::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerfortran_lexer_callback) {
            const char* callback_ret = qscilexerfortran_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerfortran_lexerid_callback) {
            int callback_ret = qscilexerfortran_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerfortran_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerfortran_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerfortran_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerfortran_autocompletionwordseparators_callback(this);
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
        return QsciLexerFortran::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerfortran_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerfortran_blocklookback_callback) {
            int callback_ret = qscilexerfortran_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerfortran_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerfortran_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerfortran_bracestyle_callback) {
            int callback_ret = qscilexerfortran_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerfortran_casesensitive_callback) {
            bool callback_ret = qscilexerfortran_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerfortran_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerfortran_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerfortran_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerfortran_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerfortran_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerfortran_indentationguideview_callback) {
            int callback_ret = qscilexerfortran_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerfortran_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerfortran_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerfortran_defaultstyle_callback) {
            int callback_ret = qscilexerfortran_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerfortran_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerfortran_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerFortran::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerfortran_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerfortran_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerfortran_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerfortran_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerfortran_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerfortran_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerfortran_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerfortran_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerfortran_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerfortran_refreshproperties_callback) {
            qscilexerfortran_refreshproperties_callback(this);
            return;
        }
        QsciLexerFortran::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerfortran_stylebitsneeded_callback) {
            int callback_ret = qscilexerfortran_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerfortran_wordcharacters_callback) {
            const char* callback_ret = qscilexerfortran_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerfortran_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerfortran_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerfortran_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerfortran_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerfortran_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerfortran_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerfortran_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerfortran_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerfortran_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerfortran_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerfortran_readproperties_callback) {
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
            bool callback_ret = qscilexerfortran_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerFortran::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerfortran_writeproperties_callback) {
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
            bool callback_ret = qscilexerfortran_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerFortran::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerfortran_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerfortran_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerfortran_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerfortran_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerFortran::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerfortran_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerfortran_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerfortran_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerfortran_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerfortran_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerfortran_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerfortran_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerfortran_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerFortran::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerFortran_SuperReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran_SuperWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerFortran_SuperTimerEvent(QsciLexerFortran* self, QTimerEvent* event);
    friend void QsciLexerFortran_SuperChildEvent(QsciLexerFortran* self, QChildEvent* event);
    friend void QsciLexerFortran_SuperCustomEvent(QsciLexerFortran* self, QEvent* event);
    friend void QsciLexerFortran_SuperConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
    friend void QsciLexerFortran_SuperDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal);
};

#endif
