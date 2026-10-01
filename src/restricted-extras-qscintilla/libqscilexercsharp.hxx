#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCSHARP_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCSHARP_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCSharp
class VirtualQsciLexerCSharp final : public QsciLexerCSharp {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCSharp_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_Metacast_Callback = void* (*)(QsciLexerCSharp*, const char*);
    using QsciLexerCSharp_Metacall_Callback = int (*)(QsciLexerCSharp*, int, int, void**);
    using QsciLexerCSharp_SetFoldAtElse_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldComments_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldCompact_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetFoldPreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_SetStylePreprocessor_Callback = void (*)(QsciLexerCSharp*, bool);
    using QsciLexerCSharp_Language_Callback = const char* (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_Lexer_Callback = const char* (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_LexerId_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_BlockEnd_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockLookback_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_BlockStart_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCSharp*, int*);
    using QsciLexerCSharp_BraceStyle_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_CaseSensitive_Callback = bool (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_Color_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_EolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Font_Callback = QFont* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_IndentationGuideView_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_Keywords_Callback = const char* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultStyle_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_Description_Callback = const char* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_Paper_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultColor2_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultEolFill_Callback = bool (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultFont2_Callback = QFont* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetEditor_Callback = void (*)(QsciLexerCSharp*, QsciScintilla*);
    using QsciLexerCSharp_RefreshProperties_Callback = void (*)(QsciLexerCSharp*);
    using QsciLexerCSharp_StyleBitsNeeded_Callback = int (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_WordCharacters_Callback = const char* (*)(const QsciLexerCSharp*);
    using QsciLexerCSharp_SetAutoIndentStyle_Callback = void (*)(QsciLexerCSharp*, int);
    using QsciLexerCSharp_SetColor_Callback = void (*)(QsciLexerCSharp*, QColor*, int);
    using QsciLexerCSharp_SetEolFill_Callback = void (*)(QsciLexerCSharp*, bool, int);
    using QsciLexerCSharp_SetFont_Callback = void (*)(QsciLexerCSharp*, QFont*, int);
    using QsciLexerCSharp_SetPaper_Callback = void (*)(QsciLexerCSharp*, QColor*, int);
    using QsciLexerCSharp_ReadProperties_Callback = bool (*)(QsciLexerCSharp*, QSettings*, const char*);
    using QsciLexerCSharp_WriteProperties_Callback = bool (*)(const QsciLexerCSharp*, QSettings*, const char*);
    using QsciLexerCSharp_Event_Callback = bool (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_EventFilter_Callback = bool (*)(QsciLexerCSharp*, QObject*, QEvent*);
    using QsciLexerCSharp_TimerEvent_Callback = void (*)(QsciLexerCSharp*, QTimerEvent*);
    using QsciLexerCSharp_ChildEvent_Callback = void (*)(QsciLexerCSharp*, QChildEvent*);
    using QsciLexerCSharp_CustomEvent_Callback = void (*)(QsciLexerCSharp*, QEvent*);
    using QsciLexerCSharp_ConnectNotify_Callback = void (*)(QsciLexerCSharp*, QMetaMethod*);
    using QsciLexerCSharp_DisconnectNotify_Callback = void (*)(QsciLexerCSharp*, QMetaMethod*);
    using QsciLexerCSharp::bytesAsText;
    using QsciLexerCSharp::isSignalConnected;
    using QsciLexerCSharp::receivers;
    using QsciLexerCSharp::sender;
    using QsciLexerCSharp::senderSignalIndex;
    using QsciLexerCSharp::textAsBytes;

    // Instance callback storage
    QsciLexerCSharp_MetaObject_Callback qscilexercsharp_metaobject_callback = nullptr;
    QsciLexerCSharp_Metacast_Callback qscilexercsharp_metacast_callback = nullptr;
    QsciLexerCSharp_Metacall_Callback qscilexercsharp_metacall_callback = nullptr;
    QsciLexerCSharp_SetFoldAtElse_Callback qscilexercsharp_setfoldatelse_callback = nullptr;
    QsciLexerCSharp_SetFoldComments_Callback qscilexercsharp_setfoldcomments_callback = nullptr;
    QsciLexerCSharp_SetFoldCompact_Callback qscilexercsharp_setfoldcompact_callback = nullptr;
    QsciLexerCSharp_SetFoldPreprocessor_Callback qscilexercsharp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCSharp_SetStylePreprocessor_Callback qscilexercsharp_setstylepreprocessor_callback = nullptr;
    QsciLexerCSharp_Language_Callback qscilexercsharp_language_callback = nullptr;
    QsciLexerCSharp_Lexer_Callback qscilexercsharp_lexer_callback = nullptr;
    QsciLexerCSharp_LexerId_Callback qscilexercsharp_lexerid_callback = nullptr;
    QsciLexerCSharp_AutoCompletionFillups_Callback qscilexercsharp_autocompletionfillups_callback = nullptr;
    QsciLexerCSharp_AutoCompletionWordSeparators_Callback qscilexercsharp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCSharp_BlockEnd_Callback qscilexercsharp_blockend_callback = nullptr;
    QsciLexerCSharp_BlockLookback_Callback qscilexercsharp_blocklookback_callback = nullptr;
    QsciLexerCSharp_BlockStart_Callback qscilexercsharp_blockstart_callback = nullptr;
    QsciLexerCSharp_BlockStartKeyword_Callback qscilexercsharp_blockstartkeyword_callback = nullptr;
    QsciLexerCSharp_BraceStyle_Callback qscilexercsharp_bracestyle_callback = nullptr;
    QsciLexerCSharp_CaseSensitive_Callback qscilexercsharp_casesensitive_callback = nullptr;
    QsciLexerCSharp_Color_Callback qscilexercsharp_color_callback = nullptr;
    QsciLexerCSharp_EolFill_Callback qscilexercsharp_eolfill_callback = nullptr;
    QsciLexerCSharp_Font_Callback qscilexercsharp_font_callback = nullptr;
    QsciLexerCSharp_IndentationGuideView_Callback qscilexercsharp_indentationguideview_callback = nullptr;
    QsciLexerCSharp_Keywords_Callback qscilexercsharp_keywords_callback = nullptr;
    QsciLexerCSharp_DefaultStyle_Callback qscilexercsharp_defaultstyle_callback = nullptr;
    QsciLexerCSharp_Description_Callback qscilexercsharp_description_callback = nullptr;
    QsciLexerCSharp_Paper_Callback qscilexercsharp_paper_callback = nullptr;
    QsciLexerCSharp_DefaultColor2_Callback qscilexercsharp_defaultcolor2_callback = nullptr;
    QsciLexerCSharp_DefaultEolFill_Callback qscilexercsharp_defaulteolfill_callback = nullptr;
    QsciLexerCSharp_DefaultFont2_Callback qscilexercsharp_defaultfont2_callback = nullptr;
    QsciLexerCSharp_DefaultPaper2_Callback qscilexercsharp_defaultpaper2_callback = nullptr;
    QsciLexerCSharp_SetEditor_Callback qscilexercsharp_seteditor_callback = nullptr;
    QsciLexerCSharp_RefreshProperties_Callback qscilexercsharp_refreshproperties_callback = nullptr;
    QsciLexerCSharp_StyleBitsNeeded_Callback qscilexercsharp_stylebitsneeded_callback = nullptr;
    QsciLexerCSharp_WordCharacters_Callback qscilexercsharp_wordcharacters_callback = nullptr;
    QsciLexerCSharp_SetAutoIndentStyle_Callback qscilexercsharp_setautoindentstyle_callback = nullptr;
    QsciLexerCSharp_SetColor_Callback qscilexercsharp_setcolor_callback = nullptr;
    QsciLexerCSharp_SetEolFill_Callback qscilexercsharp_seteolfill_callback = nullptr;
    QsciLexerCSharp_SetFont_Callback qscilexercsharp_setfont_callback = nullptr;
    QsciLexerCSharp_SetPaper_Callback qscilexercsharp_setpaper_callback = nullptr;
    QsciLexerCSharp_ReadProperties_Callback qscilexercsharp_readproperties_callback = nullptr;
    QsciLexerCSharp_WriteProperties_Callback qscilexercsharp_writeproperties_callback = nullptr;
    QsciLexerCSharp_Event_Callback qscilexercsharp_event_callback = nullptr;
    QsciLexerCSharp_EventFilter_Callback qscilexercsharp_eventfilter_callback = nullptr;
    QsciLexerCSharp_TimerEvent_Callback qscilexercsharp_timerevent_callback = nullptr;
    QsciLexerCSharp_ChildEvent_Callback qscilexercsharp_childevent_callback = nullptr;
    QsciLexerCSharp_CustomEvent_Callback qscilexercsharp_customevent_callback = nullptr;
    QsciLexerCSharp_ConnectNotify_Callback qscilexercsharp_connectnotify_callback = nullptr;
    QsciLexerCSharp_DisconnectNotify_Callback qscilexercsharp_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCSharp {
        using QsciLexerCSharp::childEvent;
        using QsciLexerCSharp::connectNotify;
        using QsciLexerCSharp::customEvent;
        using QsciLexerCSharp::disconnectNotify;
        using QsciLexerCSharp::readProperties;
        using QsciLexerCSharp::timerEvent;
        using QsciLexerCSharp::writeProperties;
    };

    VirtualQsciLexerCSharp() : QsciLexerCSharp() {};
    VirtualQsciLexerCSharp(QObject* parent) : QsciLexerCSharp(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercsharp_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercsharp_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCSharp::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercsharp_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercsharp_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercsharp_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercsharp_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercsharp_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexercsharp_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercsharp_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexercsharp_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercsharp_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexercsharp_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercsharp_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexercsharp_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercsharp_setstylepreprocessor_callback) {
            bool cbval1 = style;
            qscilexercsharp_setstylepreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercsharp_language_callback) {
            const char* callback_ret = qscilexercsharp_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCSharp::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercsharp_lexer_callback) {
            const char* callback_ret = qscilexercsharp_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCSharp::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercsharp_lexerid_callback) {
            int callback_ret = qscilexercsharp_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercsharp_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercsharp_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCSharp::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercsharp_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercsharp_autocompletionwordseparators_callback(this);
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
        return QsciLexerCSharp::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercsharp_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercsharp_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercsharp_blocklookback_callback) {
            int callback_ret = qscilexercsharp_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercsharp_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercsharp_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercsharp_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercsharp_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercsharp_bracestyle_callback) {
            int callback_ret = qscilexercsharp_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercsharp_casesensitive_callback) {
            bool callback_ret = qscilexercsharp_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCSharp::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercsharp_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercsharp_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercsharp_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercsharp_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercsharp_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercsharp_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercsharp_indentationguideview_callback) {
            int callback_ret = qscilexercsharp_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercsharp_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercsharp_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercsharp_defaultstyle_callback) {
            int callback_ret = qscilexercsharp_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercsharp_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercsharp_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCSharp::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercsharp_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercsharp_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercsharp_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercsharp_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercsharp_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercsharp_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercsharp_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercsharp_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercsharp_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercsharp_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSharp::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercsharp_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercsharp_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercsharp_refreshproperties_callback) {
            qscilexercsharp_refreshproperties_callback(this);
            return;
        }
        QsciLexerCSharp::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercsharp_stylebitsneeded_callback) {
            int callback_ret = qscilexercsharp_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSharp::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercsharp_wordcharacters_callback) {
            const char* callback_ret = qscilexercsharp_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCSharp::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercsharp_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercsharp_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercsharp_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercsharp_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercsharp_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercsharp_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercsharp_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercsharp_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercsharp_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercsharp_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSharp::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercsharp_readproperties_callback) {
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
            bool callback_ret = qscilexercsharp_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCSharp::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercsharp_writeproperties_callback) {
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
            bool callback_ret = qscilexercsharp_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCSharp::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercsharp_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercsharp_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSharp::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercsharp_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercsharp_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCSharp::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercsharp_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercsharp_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercsharp_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercsharp_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercsharp_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercsharp_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercsharp_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercsharp_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercsharp_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCSharp::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCSharp_SuperReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSharp_SuperWriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCSharp_SuperTimerEvent(QsciLexerCSharp* self, QTimerEvent* event);
    friend void QsciLexerCSharp_SuperChildEvent(QsciLexerCSharp* self, QChildEvent* event);
    friend void QsciLexerCSharp_SuperCustomEvent(QsciLexerCSharp* self, QEvent* event);
    friend void QsciLexerCSharp_SuperConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
    friend void QsciLexerCSharp_SuperDisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal);
};

#endif
