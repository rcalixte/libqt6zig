#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERIDL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERIDL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerIDL
class VirtualQsciLexerIDL final : public QsciLexerIDL {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerIDL_MetaObject_Callback = QMetaObject* (*)(const QsciLexerIDL*);
    using QsciLexerIDL_Metacast_Callback = void* (*)(QsciLexerIDL*, const char*);
    using QsciLexerIDL_Metacall_Callback = int (*)(QsciLexerIDL*, int, int, void**);
    using QsciLexerIDL_SetFoldAtElse_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldComments_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldCompact_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetFoldPreprocessor_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_SetStylePreprocessor_Callback = void (*)(QsciLexerIDL*, bool);
    using QsciLexerIDL_Language_Callback = const char* (*)(const QsciLexerIDL*);
    using QsciLexerIDL_Lexer_Callback = const char* (*)(const QsciLexerIDL*);
    using QsciLexerIDL_LexerId_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerIDL*);
    using QsciLexerIDL_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerIDL*);
    using QsciLexerIDL_BlockEnd_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BlockLookback_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_BlockStart_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerIDL*, int*);
    using QsciLexerIDL_BraceStyle_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_CaseSensitive_Callback = bool (*)(const QsciLexerIDL*);
    using QsciLexerIDL_Color_Callback = QColor* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_EolFill_Callback = bool (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_Font_Callback = QFont* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_IndentationGuideView_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_Keywords_Callback = const char* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultStyle_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_Description_Callback = const char* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_Paper_Callback = QColor* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultColor2_Callback = QColor* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultEolFill_Callback = bool (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultFont2_Callback = QFont* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerIDL*, int);
    using QsciLexerIDL_SetEditor_Callback = void (*)(QsciLexerIDL*, QsciScintilla*);
    using QsciLexerIDL_RefreshProperties_Callback = void (*)(QsciLexerIDL*);
    using QsciLexerIDL_StyleBitsNeeded_Callback = int (*)(const QsciLexerIDL*);
    using QsciLexerIDL_WordCharacters_Callback = const char* (*)(const QsciLexerIDL*);
    using QsciLexerIDL_SetAutoIndentStyle_Callback = void (*)(QsciLexerIDL*, int);
    using QsciLexerIDL_SetColor_Callback = void (*)(QsciLexerIDL*, QColor*, int);
    using QsciLexerIDL_SetEolFill_Callback = void (*)(QsciLexerIDL*, bool, int);
    using QsciLexerIDL_SetFont_Callback = void (*)(QsciLexerIDL*, QFont*, int);
    using QsciLexerIDL_SetPaper_Callback = void (*)(QsciLexerIDL*, QColor*, int);
    using QsciLexerIDL_ReadProperties_Callback = bool (*)(QsciLexerIDL*, QSettings*, const char*);
    using QsciLexerIDL_WriteProperties_Callback = bool (*)(const QsciLexerIDL*, QSettings*, const char*);
    using QsciLexerIDL_Event_Callback = bool (*)(QsciLexerIDL*, QEvent*);
    using QsciLexerIDL_EventFilter_Callback = bool (*)(QsciLexerIDL*, QObject*, QEvent*);
    using QsciLexerIDL_TimerEvent_Callback = void (*)(QsciLexerIDL*, QTimerEvent*);
    using QsciLexerIDL_ChildEvent_Callback = void (*)(QsciLexerIDL*, QChildEvent*);
    using QsciLexerIDL_CustomEvent_Callback = void (*)(QsciLexerIDL*, QEvent*);
    using QsciLexerIDL_ConnectNotify_Callback = void (*)(QsciLexerIDL*, QMetaMethod*);
    using QsciLexerIDL_DisconnectNotify_Callback = void (*)(QsciLexerIDL*, QMetaMethod*);
    using QsciLexerIDL::bytesAsText;
    using QsciLexerIDL::isSignalConnected;
    using QsciLexerIDL::receivers;
    using QsciLexerIDL::sender;
    using QsciLexerIDL::senderSignalIndex;
    using QsciLexerIDL::textAsBytes;

    // Instance callback storage
    QsciLexerIDL_MetaObject_Callback qscilexeridl_metaobject_callback = nullptr;
    QsciLexerIDL_Metacast_Callback qscilexeridl_metacast_callback = nullptr;
    QsciLexerIDL_Metacall_Callback qscilexeridl_metacall_callback = nullptr;
    QsciLexerIDL_SetFoldAtElse_Callback qscilexeridl_setfoldatelse_callback = nullptr;
    QsciLexerIDL_SetFoldComments_Callback qscilexeridl_setfoldcomments_callback = nullptr;
    QsciLexerIDL_SetFoldCompact_Callback qscilexeridl_setfoldcompact_callback = nullptr;
    QsciLexerIDL_SetFoldPreprocessor_Callback qscilexeridl_setfoldpreprocessor_callback = nullptr;
    QsciLexerIDL_SetStylePreprocessor_Callback qscilexeridl_setstylepreprocessor_callback = nullptr;
    QsciLexerIDL_Language_Callback qscilexeridl_language_callback = nullptr;
    QsciLexerIDL_Lexer_Callback qscilexeridl_lexer_callback = nullptr;
    QsciLexerIDL_LexerId_Callback qscilexeridl_lexerid_callback = nullptr;
    QsciLexerIDL_AutoCompletionFillups_Callback qscilexeridl_autocompletionfillups_callback = nullptr;
    QsciLexerIDL_AutoCompletionWordSeparators_Callback qscilexeridl_autocompletionwordseparators_callback = nullptr;
    QsciLexerIDL_BlockEnd_Callback qscilexeridl_blockend_callback = nullptr;
    QsciLexerIDL_BlockLookback_Callback qscilexeridl_blocklookback_callback = nullptr;
    QsciLexerIDL_BlockStart_Callback qscilexeridl_blockstart_callback = nullptr;
    QsciLexerIDL_BlockStartKeyword_Callback qscilexeridl_blockstartkeyword_callback = nullptr;
    QsciLexerIDL_BraceStyle_Callback qscilexeridl_bracestyle_callback = nullptr;
    QsciLexerIDL_CaseSensitive_Callback qscilexeridl_casesensitive_callback = nullptr;
    QsciLexerIDL_Color_Callback qscilexeridl_color_callback = nullptr;
    QsciLexerIDL_EolFill_Callback qscilexeridl_eolfill_callback = nullptr;
    QsciLexerIDL_Font_Callback qscilexeridl_font_callback = nullptr;
    QsciLexerIDL_IndentationGuideView_Callback qscilexeridl_indentationguideview_callback = nullptr;
    QsciLexerIDL_Keywords_Callback qscilexeridl_keywords_callback = nullptr;
    QsciLexerIDL_DefaultStyle_Callback qscilexeridl_defaultstyle_callback = nullptr;
    QsciLexerIDL_Description_Callback qscilexeridl_description_callback = nullptr;
    QsciLexerIDL_Paper_Callback qscilexeridl_paper_callback = nullptr;
    QsciLexerIDL_DefaultColor2_Callback qscilexeridl_defaultcolor2_callback = nullptr;
    QsciLexerIDL_DefaultEolFill_Callback qscilexeridl_defaulteolfill_callback = nullptr;
    QsciLexerIDL_DefaultFont2_Callback qscilexeridl_defaultfont2_callback = nullptr;
    QsciLexerIDL_DefaultPaper2_Callback qscilexeridl_defaultpaper2_callback = nullptr;
    QsciLexerIDL_SetEditor_Callback qscilexeridl_seteditor_callback = nullptr;
    QsciLexerIDL_RefreshProperties_Callback qscilexeridl_refreshproperties_callback = nullptr;
    QsciLexerIDL_StyleBitsNeeded_Callback qscilexeridl_stylebitsneeded_callback = nullptr;
    QsciLexerIDL_WordCharacters_Callback qscilexeridl_wordcharacters_callback = nullptr;
    QsciLexerIDL_SetAutoIndentStyle_Callback qscilexeridl_setautoindentstyle_callback = nullptr;
    QsciLexerIDL_SetColor_Callback qscilexeridl_setcolor_callback = nullptr;
    QsciLexerIDL_SetEolFill_Callback qscilexeridl_seteolfill_callback = nullptr;
    QsciLexerIDL_SetFont_Callback qscilexeridl_setfont_callback = nullptr;
    QsciLexerIDL_SetPaper_Callback qscilexeridl_setpaper_callback = nullptr;
    QsciLexerIDL_ReadProperties_Callback qscilexeridl_readproperties_callback = nullptr;
    QsciLexerIDL_WriteProperties_Callback qscilexeridl_writeproperties_callback = nullptr;
    QsciLexerIDL_Event_Callback qscilexeridl_event_callback = nullptr;
    QsciLexerIDL_EventFilter_Callback qscilexeridl_eventfilter_callback = nullptr;
    QsciLexerIDL_TimerEvent_Callback qscilexeridl_timerevent_callback = nullptr;
    QsciLexerIDL_ChildEvent_Callback qscilexeridl_childevent_callback = nullptr;
    QsciLexerIDL_CustomEvent_Callback qscilexeridl_customevent_callback = nullptr;
    QsciLexerIDL_ConnectNotify_Callback qscilexeridl_connectnotify_callback = nullptr;
    QsciLexerIDL_DisconnectNotify_Callback qscilexeridl_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerIDL {
        using QsciLexerIDL::childEvent;
        using QsciLexerIDL::connectNotify;
        using QsciLexerIDL::customEvent;
        using QsciLexerIDL::disconnectNotify;
        using QsciLexerIDL::readProperties;
        using QsciLexerIDL::timerEvent;
        using QsciLexerIDL::writeProperties;
    };

    VirtualQsciLexerIDL() : QsciLexerIDL() {};
    VirtualQsciLexerIDL(QObject* parent) : QsciLexerIDL(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeridl_metaobject_callback) {
            QMetaObject* callback_ret = qscilexeridl_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerIDL::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeridl_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexeridl_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeridl_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexeridl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexeridl_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexeridl_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeridl_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexeridl_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexeridl_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexeridl_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexeridl_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexeridl_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexeridl_setstylepreprocessor_callback) {
            bool cbval1 = style;
            qscilexeridl_setstylepreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeridl_language_callback) {
            const char* callback_ret = qscilexeridl_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerIDL::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeridl_lexer_callback) {
            const char* callback_ret = qscilexeridl_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerIDL::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeridl_lexerid_callback) {
            int callback_ret = qscilexeridl_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeridl_autocompletionfillups_callback) {
            const char* callback_ret = qscilexeridl_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerIDL::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeridl_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexeridl_autocompletionwordseparators_callback(this);
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
        return QsciLexerIDL::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeridl_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeridl_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeridl_blocklookback_callback) {
            int callback_ret = qscilexeridl_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeridl_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeridl_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeridl_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeridl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeridl_bracestyle_callback) {
            int callback_ret = qscilexeridl_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeridl_casesensitive_callback) {
            bool callback_ret = qscilexeridl_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerIDL::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeridl_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeridl_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeridl_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeridl_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeridl_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeridl_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeridl_indentationguideview_callback) {
            int callback_ret = qscilexeridl_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeridl_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexeridl_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeridl_defaultstyle_callback) {
            int callback_ret = qscilexeridl_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeridl_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexeridl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerIDL::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeridl_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeridl_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeridl_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeridl_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeridl_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeridl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeridl_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeridl_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeridl_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeridl_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIDL::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeridl_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexeridl_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeridl_refreshproperties_callback) {
            qscilexeridl_refreshproperties_callback(this);
            return;
        }
        QsciLexerIDL::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeridl_stylebitsneeded_callback) {
            int callback_ret = qscilexeridl_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIDL::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeridl_wordcharacters_callback) {
            const char* callback_ret = qscilexeridl_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerIDL::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeridl_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexeridl_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeridl_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeridl_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIDL::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeridl_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexeridl_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIDL::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeridl_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexeridl_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIDL::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeridl_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeridl_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIDL::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeridl_readproperties_callback) {
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
            bool callback_ret = qscilexeridl_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerIDL::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeridl_writeproperties_callback) {
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
            bool callback_ret = qscilexeridl_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerIDL::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeridl_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexeridl_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIDL::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeridl_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexeridl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerIDL::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeridl_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexeridl_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeridl_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexeridl_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeridl_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexeridl_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeridl_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeridl_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeridl_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeridl_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerIDL::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerIDL_SuperReadProperties(QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIDL_SuperWriteProperties(const QsciLexerIDL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerIDL_SuperTimerEvent(QsciLexerIDL* self, QTimerEvent* event);
    friend void QsciLexerIDL_SuperChildEvent(QsciLexerIDL* self, QChildEvent* event);
    friend void QsciLexerIDL_SuperCustomEvent(QsciLexerIDL* self, QEvent* event);
    friend void QsciLexerIDL_SuperConnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
    friend void QsciLexerIDL_SuperDisconnectNotify(QsciLexerIDL* self, const QMetaMethod* signal);
};

#endif
