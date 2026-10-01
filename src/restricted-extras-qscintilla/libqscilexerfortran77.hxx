#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERFORTRAN77_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERFORTRAN77_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerFortran77
class VirtualQsciLexerFortran77 final : public QsciLexerFortran77 {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerFortran77_MetaObject_Callback = QMetaObject* (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_Metacast_Callback = void* (*)(QsciLexerFortran77*, const char*);
    using QsciLexerFortran77_Metacall_Callback = int (*)(QsciLexerFortran77*, int, int, void**);
    using QsciLexerFortran77_SetFoldCompact_Callback = void (*)(QsciLexerFortran77*, bool);
    using QsciLexerFortran77_Language_Callback = const char* (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_Lexer_Callback = const char* (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_LexerId_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_BlockEnd_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockLookback_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_BlockStart_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BlockStartKeyword_Callback = const char* (*)(const QsciLexerFortran77*, int*);
    using QsciLexerFortran77_BraceStyle_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_CaseSensitive_Callback = bool (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_Color_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_EolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Font_Callback = QFont* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_IndentationGuideView_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_Keywords_Callback = const char* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultStyle_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_Description_Callback = const char* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_Paper_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultColor2_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultEolFill_Callback = bool (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultFont2_Callback = QFont* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_DefaultPaper2_Callback = QColor* (*)(const QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetEditor_Callback = void (*)(QsciLexerFortran77*, QsciScintilla*);
    using QsciLexerFortran77_RefreshProperties_Callback = void (*)(QsciLexerFortran77*);
    using QsciLexerFortran77_StyleBitsNeeded_Callback = int (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_WordCharacters_Callback = const char* (*)(const QsciLexerFortran77*);
    using QsciLexerFortran77_SetAutoIndentStyle_Callback = void (*)(QsciLexerFortran77*, int);
    using QsciLexerFortran77_SetColor_Callback = void (*)(QsciLexerFortran77*, QColor*, int);
    using QsciLexerFortran77_SetEolFill_Callback = void (*)(QsciLexerFortran77*, bool, int);
    using QsciLexerFortran77_SetFont_Callback = void (*)(QsciLexerFortran77*, QFont*, int);
    using QsciLexerFortran77_SetPaper_Callback = void (*)(QsciLexerFortran77*, QColor*, int);
    using QsciLexerFortran77_ReadProperties_Callback = bool (*)(QsciLexerFortran77*, QSettings*, const char*);
    using QsciLexerFortran77_WriteProperties_Callback = bool (*)(const QsciLexerFortran77*, QSettings*, const char*);
    using QsciLexerFortran77_Event_Callback = bool (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_EventFilter_Callback = bool (*)(QsciLexerFortran77*, QObject*, QEvent*);
    using QsciLexerFortran77_TimerEvent_Callback = void (*)(QsciLexerFortran77*, QTimerEvent*);
    using QsciLexerFortran77_ChildEvent_Callback = void (*)(QsciLexerFortran77*, QChildEvent*);
    using QsciLexerFortran77_CustomEvent_Callback = void (*)(QsciLexerFortran77*, QEvent*);
    using QsciLexerFortran77_ConnectNotify_Callback = void (*)(QsciLexerFortran77*, QMetaMethod*);
    using QsciLexerFortran77_DisconnectNotify_Callback = void (*)(QsciLexerFortran77*, QMetaMethod*);
    using QsciLexerFortran77::bytesAsText;
    using QsciLexerFortran77::isSignalConnected;
    using QsciLexerFortran77::receivers;
    using QsciLexerFortran77::sender;
    using QsciLexerFortran77::senderSignalIndex;
    using QsciLexerFortran77::textAsBytes;

    // Instance callback storage
    QsciLexerFortran77_MetaObject_Callback qscilexerfortran77_metaobject_callback = nullptr;
    QsciLexerFortran77_Metacast_Callback qscilexerfortran77_metacast_callback = nullptr;
    QsciLexerFortran77_Metacall_Callback qscilexerfortran77_metacall_callback = nullptr;
    QsciLexerFortran77_SetFoldCompact_Callback qscilexerfortran77_setfoldcompact_callback = nullptr;
    QsciLexerFortran77_Language_Callback qscilexerfortran77_language_callback = nullptr;
    QsciLexerFortran77_Lexer_Callback qscilexerfortran77_lexer_callback = nullptr;
    QsciLexerFortran77_LexerId_Callback qscilexerfortran77_lexerid_callback = nullptr;
    QsciLexerFortran77_AutoCompletionFillups_Callback qscilexerfortran77_autocompletionfillups_callback = nullptr;
    QsciLexerFortran77_AutoCompletionWordSeparators_Callback qscilexerfortran77_autocompletionwordseparators_callback = nullptr;
    QsciLexerFortran77_BlockEnd_Callback qscilexerfortran77_blockend_callback = nullptr;
    QsciLexerFortran77_BlockLookback_Callback qscilexerfortran77_blocklookback_callback = nullptr;
    QsciLexerFortran77_BlockStart_Callback qscilexerfortran77_blockstart_callback = nullptr;
    QsciLexerFortran77_BlockStartKeyword_Callback qscilexerfortran77_blockstartkeyword_callback = nullptr;
    QsciLexerFortran77_BraceStyle_Callback qscilexerfortran77_bracestyle_callback = nullptr;
    QsciLexerFortran77_CaseSensitive_Callback qscilexerfortran77_casesensitive_callback = nullptr;
    QsciLexerFortran77_Color_Callback qscilexerfortran77_color_callback = nullptr;
    QsciLexerFortran77_EolFill_Callback qscilexerfortran77_eolfill_callback = nullptr;
    QsciLexerFortran77_Font_Callback qscilexerfortran77_font_callback = nullptr;
    QsciLexerFortran77_IndentationGuideView_Callback qscilexerfortran77_indentationguideview_callback = nullptr;
    QsciLexerFortran77_Keywords_Callback qscilexerfortran77_keywords_callback = nullptr;
    QsciLexerFortran77_DefaultStyle_Callback qscilexerfortran77_defaultstyle_callback = nullptr;
    QsciLexerFortran77_Description_Callback qscilexerfortran77_description_callback = nullptr;
    QsciLexerFortran77_Paper_Callback qscilexerfortran77_paper_callback = nullptr;
    QsciLexerFortran77_DefaultColor2_Callback qscilexerfortran77_defaultcolor2_callback = nullptr;
    QsciLexerFortran77_DefaultEolFill_Callback qscilexerfortran77_defaulteolfill_callback = nullptr;
    QsciLexerFortran77_DefaultFont2_Callback qscilexerfortran77_defaultfont2_callback = nullptr;
    QsciLexerFortran77_DefaultPaper2_Callback qscilexerfortran77_defaultpaper2_callback = nullptr;
    QsciLexerFortran77_SetEditor_Callback qscilexerfortran77_seteditor_callback = nullptr;
    QsciLexerFortran77_RefreshProperties_Callback qscilexerfortran77_refreshproperties_callback = nullptr;
    QsciLexerFortran77_StyleBitsNeeded_Callback qscilexerfortran77_stylebitsneeded_callback = nullptr;
    QsciLexerFortran77_WordCharacters_Callback qscilexerfortran77_wordcharacters_callback = nullptr;
    QsciLexerFortran77_SetAutoIndentStyle_Callback qscilexerfortran77_setautoindentstyle_callback = nullptr;
    QsciLexerFortran77_SetColor_Callback qscilexerfortran77_setcolor_callback = nullptr;
    QsciLexerFortran77_SetEolFill_Callback qscilexerfortran77_seteolfill_callback = nullptr;
    QsciLexerFortran77_SetFont_Callback qscilexerfortran77_setfont_callback = nullptr;
    QsciLexerFortran77_SetPaper_Callback qscilexerfortran77_setpaper_callback = nullptr;
    QsciLexerFortran77_ReadProperties_Callback qscilexerfortran77_readproperties_callback = nullptr;
    QsciLexerFortran77_WriteProperties_Callback qscilexerfortran77_writeproperties_callback = nullptr;
    QsciLexerFortran77_Event_Callback qscilexerfortran77_event_callback = nullptr;
    QsciLexerFortran77_EventFilter_Callback qscilexerfortran77_eventfilter_callback = nullptr;
    QsciLexerFortran77_TimerEvent_Callback qscilexerfortran77_timerevent_callback = nullptr;
    QsciLexerFortran77_ChildEvent_Callback qscilexerfortran77_childevent_callback = nullptr;
    QsciLexerFortran77_CustomEvent_Callback qscilexerfortran77_customevent_callback = nullptr;
    QsciLexerFortran77_ConnectNotify_Callback qscilexerfortran77_connectnotify_callback = nullptr;
    QsciLexerFortran77_DisconnectNotify_Callback qscilexerfortran77_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerFortran77 {
        using QsciLexerFortran77::childEvent;
        using QsciLexerFortran77::connectNotify;
        using QsciLexerFortran77::customEvent;
        using QsciLexerFortran77::disconnectNotify;
        using QsciLexerFortran77::readProperties;
        using QsciLexerFortran77::timerEvent;
        using QsciLexerFortran77::writeProperties;
    };

    VirtualQsciLexerFortran77() : QsciLexerFortran77() {};
    VirtualQsciLexerFortran77(QObject* parent) : QsciLexerFortran77(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerfortran77_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerfortran77_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran77::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerfortran77_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerfortran77_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerfortran77_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerfortran77_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerfortran77_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerfortran77_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerfortran77_language_callback) {
            const char* callback_ret = qscilexerfortran77_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerFortran77::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerfortran77_lexer_callback) {
            const char* callback_ret = qscilexerfortran77_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran77::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerfortran77_lexerid_callback) {
            int callback_ret = qscilexerfortran77_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerfortran77_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerfortran77_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran77::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerfortran77_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerfortran77_autocompletionwordseparators_callback(this);
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
        return QsciLexerFortran77::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerfortran77_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran77_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerfortran77_blocklookback_callback) {
            int callback_ret = qscilexerfortran77_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerfortran77_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran77_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerfortran77_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerfortran77_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerfortran77_bracestyle_callback) {
            int callback_ret = qscilexerfortran77_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerfortran77_casesensitive_callback) {
            bool callback_ret = qscilexerfortran77_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran77::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerfortran77_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran77_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerfortran77_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerfortran77_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerfortran77_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerfortran77_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerfortran77_indentationguideview_callback) {
            int callback_ret = qscilexerfortran77_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerfortran77_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerfortran77_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerfortran77_defaultstyle_callback) {
            int callback_ret = qscilexerfortran77_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerfortran77_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerfortran77_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerFortran77::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerfortran77_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran77_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerfortran77_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran77_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerfortran77_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerfortran77_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerfortran77_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerfortran77_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerfortran77_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerfortran77_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerFortran77::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerfortran77_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerfortran77_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerfortran77_refreshproperties_callback) {
            qscilexerfortran77_refreshproperties_callback(this);
            return;
        }
        QsciLexerFortran77::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerfortran77_stylebitsneeded_callback) {
            int callback_ret = qscilexerfortran77_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerFortran77::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerfortran77_wordcharacters_callback) {
            const char* callback_ret = qscilexerfortran77_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerFortran77::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerfortran77_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerfortran77_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerfortran77_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerfortran77_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerfortran77_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerfortran77_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerfortran77_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerfortran77_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerfortran77_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerfortran77_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerFortran77::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerfortran77_readproperties_callback) {
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
            bool callback_ret = qscilexerfortran77_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerFortran77::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerfortran77_writeproperties_callback) {
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
            bool callback_ret = qscilexerfortran77_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerFortran77::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerfortran77_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerfortran77_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerFortran77::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerfortran77_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerfortran77_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerFortran77::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerfortran77_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerfortran77_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerfortran77_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerfortran77_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerfortran77_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerfortran77_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerfortran77_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerfortran77_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerfortran77_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerFortran77::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerFortran77_SuperReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerFortran77_SuperWriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerFortran77_SuperTimerEvent(QsciLexerFortran77* self, QTimerEvent* event);
    friend void QsciLexerFortran77_SuperChildEvent(QsciLexerFortran77* self, QChildEvent* event);
    friend void QsciLexerFortran77_SuperCustomEvent(QsciLexerFortran77* self, QEvent* event);
    friend void QsciLexerFortran77_SuperConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
    friend void QsciLexerFortran77_SuperDisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal);
};

#endif
