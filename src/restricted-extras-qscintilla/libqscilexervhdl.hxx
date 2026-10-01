#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERVHDL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERVHDL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVHDL
class VirtualQsciLexerVHDL final : public QsciLexerVHDL {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerVHDL_MetaObject_Callback = QMetaObject* (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_Metacast_Callback = void* (*)(QsciLexerVHDL*, const char*);
    using QsciLexerVHDL_Metacall_Callback = int (*)(QsciLexerVHDL*, int, int, void**);
    using QsciLexerVHDL_SetFoldComments_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldCompact_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtElse_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtBegin_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtParenthesis_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_Language_Callback = const char* (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_Lexer_Callback = const char* (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_LexerId_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_BlockEnd_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockLookback_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_BlockStart_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BraceStyle_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_CaseSensitive_Callback = bool (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_Color_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_EolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Font_Callback = QFont* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_IndentationGuideView_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_Keywords_Callback = const char* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultStyle_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_Description_Callback = const char* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Paper_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultColor2_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultEolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultFont2_Callback = QFont* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetEditor_Callback = void (*)(QsciLexerVHDL*, QsciScintilla*);
    using QsciLexerVHDL_RefreshProperties_Callback = void (*)(QsciLexerVHDL*);
    using QsciLexerVHDL_StyleBitsNeeded_Callback = int (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_WordCharacters_Callback = const char* (*)(const QsciLexerVHDL*);
    using QsciLexerVHDL_SetAutoIndentStyle_Callback = void (*)(QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetColor_Callback = void (*)(QsciLexerVHDL*, QColor*, int);
    using QsciLexerVHDL_SetEolFill_Callback = void (*)(QsciLexerVHDL*, bool, int);
    using QsciLexerVHDL_SetFont_Callback = void (*)(QsciLexerVHDL*, QFont*, int);
    using QsciLexerVHDL_SetPaper_Callback = void (*)(QsciLexerVHDL*, QColor*, int);
    using QsciLexerVHDL_ReadProperties_Callback = bool (*)(QsciLexerVHDL*, QSettings*, const char*);
    using QsciLexerVHDL_WriteProperties_Callback = bool (*)(const QsciLexerVHDL*, QSettings*, const char*);
    using QsciLexerVHDL_Event_Callback = bool (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_EventFilter_Callback = bool (*)(QsciLexerVHDL*, QObject*, QEvent*);
    using QsciLexerVHDL_TimerEvent_Callback = void (*)(QsciLexerVHDL*, QTimerEvent*);
    using QsciLexerVHDL_ChildEvent_Callback = void (*)(QsciLexerVHDL*, QChildEvent*);
    using QsciLexerVHDL_CustomEvent_Callback = void (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_ConnectNotify_Callback = void (*)(QsciLexerVHDL*, QMetaMethod*);
    using QsciLexerVHDL_DisconnectNotify_Callback = void (*)(QsciLexerVHDL*, QMetaMethod*);
    using QsciLexerVHDL::bytesAsText;
    using QsciLexerVHDL::isSignalConnected;
    using QsciLexerVHDL::receivers;
    using QsciLexerVHDL::sender;
    using QsciLexerVHDL::senderSignalIndex;
    using QsciLexerVHDL::textAsBytes;

    // Instance callback storage
    QsciLexerVHDL_MetaObject_Callback qscilexervhdl_metaobject_callback = nullptr;
    QsciLexerVHDL_Metacast_Callback qscilexervhdl_metacast_callback = nullptr;
    QsciLexerVHDL_Metacall_Callback qscilexervhdl_metacall_callback = nullptr;
    QsciLexerVHDL_SetFoldComments_Callback qscilexervhdl_setfoldcomments_callback = nullptr;
    QsciLexerVHDL_SetFoldCompact_Callback qscilexervhdl_setfoldcompact_callback = nullptr;
    QsciLexerVHDL_SetFoldAtElse_Callback qscilexervhdl_setfoldatelse_callback = nullptr;
    QsciLexerVHDL_SetFoldAtBegin_Callback qscilexervhdl_setfoldatbegin_callback = nullptr;
    QsciLexerVHDL_SetFoldAtParenthesis_Callback qscilexervhdl_setfoldatparenthesis_callback = nullptr;
    QsciLexerVHDL_Language_Callback qscilexervhdl_language_callback = nullptr;
    QsciLexerVHDL_Lexer_Callback qscilexervhdl_lexer_callback = nullptr;
    QsciLexerVHDL_LexerId_Callback qscilexervhdl_lexerid_callback = nullptr;
    QsciLexerVHDL_AutoCompletionFillups_Callback qscilexervhdl_autocompletionfillups_callback = nullptr;
    QsciLexerVHDL_AutoCompletionWordSeparators_Callback qscilexervhdl_autocompletionwordseparators_callback = nullptr;
    QsciLexerVHDL_BlockEnd_Callback qscilexervhdl_blockend_callback = nullptr;
    QsciLexerVHDL_BlockLookback_Callback qscilexervhdl_blocklookback_callback = nullptr;
    QsciLexerVHDL_BlockStart_Callback qscilexervhdl_blockstart_callback = nullptr;
    QsciLexerVHDL_BlockStartKeyword_Callback qscilexervhdl_blockstartkeyword_callback = nullptr;
    QsciLexerVHDL_BraceStyle_Callback qscilexervhdl_bracestyle_callback = nullptr;
    QsciLexerVHDL_CaseSensitive_Callback qscilexervhdl_casesensitive_callback = nullptr;
    QsciLexerVHDL_Color_Callback qscilexervhdl_color_callback = nullptr;
    QsciLexerVHDL_EolFill_Callback qscilexervhdl_eolfill_callback = nullptr;
    QsciLexerVHDL_Font_Callback qscilexervhdl_font_callback = nullptr;
    QsciLexerVHDL_IndentationGuideView_Callback qscilexervhdl_indentationguideview_callback = nullptr;
    QsciLexerVHDL_Keywords_Callback qscilexervhdl_keywords_callback = nullptr;
    QsciLexerVHDL_DefaultStyle_Callback qscilexervhdl_defaultstyle_callback = nullptr;
    QsciLexerVHDL_Description_Callback qscilexervhdl_description_callback = nullptr;
    QsciLexerVHDL_Paper_Callback qscilexervhdl_paper_callback = nullptr;
    QsciLexerVHDL_DefaultColor2_Callback qscilexervhdl_defaultcolor2_callback = nullptr;
    QsciLexerVHDL_DefaultEolFill_Callback qscilexervhdl_defaulteolfill_callback = nullptr;
    QsciLexerVHDL_DefaultFont2_Callback qscilexervhdl_defaultfont2_callback = nullptr;
    QsciLexerVHDL_DefaultPaper2_Callback qscilexervhdl_defaultpaper2_callback = nullptr;
    QsciLexerVHDL_SetEditor_Callback qscilexervhdl_seteditor_callback = nullptr;
    QsciLexerVHDL_RefreshProperties_Callback qscilexervhdl_refreshproperties_callback = nullptr;
    QsciLexerVHDL_StyleBitsNeeded_Callback qscilexervhdl_stylebitsneeded_callback = nullptr;
    QsciLexerVHDL_WordCharacters_Callback qscilexervhdl_wordcharacters_callback = nullptr;
    QsciLexerVHDL_SetAutoIndentStyle_Callback qscilexervhdl_setautoindentstyle_callback = nullptr;
    QsciLexerVHDL_SetColor_Callback qscilexervhdl_setcolor_callback = nullptr;
    QsciLexerVHDL_SetEolFill_Callback qscilexervhdl_seteolfill_callback = nullptr;
    QsciLexerVHDL_SetFont_Callback qscilexervhdl_setfont_callback = nullptr;
    QsciLexerVHDL_SetPaper_Callback qscilexervhdl_setpaper_callback = nullptr;
    QsciLexerVHDL_ReadProperties_Callback qscilexervhdl_readproperties_callback = nullptr;
    QsciLexerVHDL_WriteProperties_Callback qscilexervhdl_writeproperties_callback = nullptr;
    QsciLexerVHDL_Event_Callback qscilexervhdl_event_callback = nullptr;
    QsciLexerVHDL_EventFilter_Callback qscilexervhdl_eventfilter_callback = nullptr;
    QsciLexerVHDL_TimerEvent_Callback qscilexervhdl_timerevent_callback = nullptr;
    QsciLexerVHDL_ChildEvent_Callback qscilexervhdl_childevent_callback = nullptr;
    QsciLexerVHDL_CustomEvent_Callback qscilexervhdl_customevent_callback = nullptr;
    QsciLexerVHDL_ConnectNotify_Callback qscilexervhdl_connectnotify_callback = nullptr;
    QsciLexerVHDL_DisconnectNotify_Callback qscilexervhdl_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerVHDL {
        using QsciLexerVHDL::childEvent;
        using QsciLexerVHDL::connectNotify;
        using QsciLexerVHDL::customEvent;
        using QsciLexerVHDL::disconnectNotify;
        using QsciLexerVHDL::readProperties;
        using QsciLexerVHDL::timerEvent;
        using QsciLexerVHDL::writeProperties;
    };

    VirtualQsciLexerVHDL() : QsciLexerVHDL() {};
    VirtualQsciLexerVHDL(QObject* parent) : QsciLexerVHDL(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexervhdl_metaobject_callback) {
            QMetaObject* callback_ret = qscilexervhdl_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerVHDL::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexervhdl_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexervhdl_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexervhdl_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexervhdl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexervhdl_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexervhdl_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexervhdl_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexervhdl_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexervhdl_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexervhdl_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtBegin(bool fold) override {
        if (qscilexervhdl_setfoldatbegin_callback) {
            bool cbval1 = fold;
            qscilexervhdl_setfoldatbegin_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setFoldAtBegin(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtParenthesis(bool fold) override {
        if (qscilexervhdl_setfoldatparenthesis_callback) {
            bool cbval1 = fold;
            qscilexervhdl_setfoldatparenthesis_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setFoldAtParenthesis(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexervhdl_language_callback) {
            const char* callback_ret = qscilexervhdl_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerVHDL::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexervhdl_lexer_callback) {
            const char* callback_ret = qscilexervhdl_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerVHDL::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexervhdl_lexerid_callback) {
            int callback_ret = qscilexervhdl_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexervhdl_autocompletionfillups_callback) {
            const char* callback_ret = qscilexervhdl_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerVHDL::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexervhdl_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexervhdl_autocompletionwordseparators_callback(this);
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
        return QsciLexerVHDL::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexervhdl_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexervhdl_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexervhdl_blocklookback_callback) {
            int callback_ret = qscilexervhdl_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexervhdl_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexervhdl_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexervhdl_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexervhdl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexervhdl_bracestyle_callback) {
            int callback_ret = qscilexervhdl_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexervhdl_casesensitive_callback) {
            bool callback_ret = qscilexervhdl_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerVHDL::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexervhdl_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexervhdl_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexervhdl_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexervhdl_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexervhdl_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexervhdl_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexervhdl_indentationguideview_callback) {
            int callback_ret = qscilexervhdl_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexervhdl_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexervhdl_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexervhdl_defaultstyle_callback) {
            int callback_ret = qscilexervhdl_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexervhdl_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexervhdl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerVHDL::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexervhdl_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexervhdl_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexervhdl_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexervhdl_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexervhdl_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexervhdl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexervhdl_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexervhdl_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexervhdl_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexervhdl_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerVHDL::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexervhdl_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexervhdl_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexervhdl_refreshproperties_callback) {
            qscilexervhdl_refreshproperties_callback(this);
            return;
        }
        QsciLexerVHDL::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexervhdl_stylebitsneeded_callback) {
            int callback_ret = qscilexervhdl_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerVHDL::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexervhdl_wordcharacters_callback) {
            const char* callback_ret = qscilexervhdl_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerVHDL::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexervhdl_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexervhdl_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexervhdl_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexervhdl_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVHDL::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexervhdl_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexervhdl_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVHDL::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexervhdl_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexervhdl_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVHDL::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexervhdl_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexervhdl_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerVHDL::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexervhdl_readproperties_callback) {
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
            bool callback_ret = qscilexervhdl_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerVHDL::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexervhdl_writeproperties_callback) {
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
            bool callback_ret = qscilexervhdl_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerVHDL::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexervhdl_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexervhdl_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerVHDL::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexervhdl_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexervhdl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerVHDL::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexervhdl_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexervhdl_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexervhdl_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexervhdl_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexervhdl_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexervhdl_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexervhdl_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexervhdl_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerVHDL::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerVHDL_SuperReadProperties(QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerVHDL_SuperWriteProperties(const QsciLexerVHDL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerVHDL_SuperTimerEvent(QsciLexerVHDL* self, QTimerEvent* event);
    friend void QsciLexerVHDL_SuperChildEvent(QsciLexerVHDL* self, QChildEvent* event);
    friend void QsciLexerVHDL_SuperCustomEvent(QsciLexerVHDL* self, QEvent* event);
    friend void QsciLexerVHDL_SuperConnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
    friend void QsciLexerVHDL_SuperDisconnectNotify(QsciLexerVHDL* self, const QMetaMethod* signal);
};

#endif
