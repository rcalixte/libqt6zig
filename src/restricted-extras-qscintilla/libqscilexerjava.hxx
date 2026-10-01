#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVA_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERJAVA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerJava
class VirtualQsciLexerJava final : public QsciLexerJava {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerJava_MetaObject_Callback = QMetaObject* (*)(const QsciLexerJava*);
    using QsciLexerJava_Metacast_Callback = void* (*)(QsciLexerJava*, const char*);
    using QsciLexerJava_Metacall_Callback = int (*)(QsciLexerJava*, int, int, void**);
    using QsciLexerJava_SetFoldAtElse_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldComments_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldCompact_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetFoldPreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_SetStylePreprocessor_Callback = void (*)(QsciLexerJava*, bool);
    using QsciLexerJava_Language_Callback = const char* (*)(const QsciLexerJava*);
    using QsciLexerJava_Lexer_Callback = const char* (*)(const QsciLexerJava*);
    using QsciLexerJava_LexerId_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerJava*);
    using QsciLexerJava_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerJava*);
    using QsciLexerJava_BlockEnd_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockLookback_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_BlockStart_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BlockStartKeyword_Callback = const char* (*)(const QsciLexerJava*, int*);
    using QsciLexerJava_BraceStyle_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_CaseSensitive_Callback = bool (*)(const QsciLexerJava*);
    using QsciLexerJava_Color_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_EolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Font_Callback = QFont* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_IndentationGuideView_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_Keywords_Callback = const char* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultStyle_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_Description_Callback = const char* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_Paper_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultColor2_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultEolFill_Callback = bool (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultFont2_Callback = QFont* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_DefaultPaper2_Callback = QColor* (*)(const QsciLexerJava*, int);
    using QsciLexerJava_SetEditor_Callback = void (*)(QsciLexerJava*, QsciScintilla*);
    using QsciLexerJava_RefreshProperties_Callback = void (*)(QsciLexerJava*);
    using QsciLexerJava_StyleBitsNeeded_Callback = int (*)(const QsciLexerJava*);
    using QsciLexerJava_WordCharacters_Callback = const char* (*)(const QsciLexerJava*);
    using QsciLexerJava_SetAutoIndentStyle_Callback = void (*)(QsciLexerJava*, int);
    using QsciLexerJava_SetColor_Callback = void (*)(QsciLexerJava*, QColor*, int);
    using QsciLexerJava_SetEolFill_Callback = void (*)(QsciLexerJava*, bool, int);
    using QsciLexerJava_SetFont_Callback = void (*)(QsciLexerJava*, QFont*, int);
    using QsciLexerJava_SetPaper_Callback = void (*)(QsciLexerJava*, QColor*, int);
    using QsciLexerJava_ReadProperties_Callback = bool (*)(QsciLexerJava*, QSettings*, const char*);
    using QsciLexerJava_WriteProperties_Callback = bool (*)(const QsciLexerJava*, QSettings*, const char*);
    using QsciLexerJava_Event_Callback = bool (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_EventFilter_Callback = bool (*)(QsciLexerJava*, QObject*, QEvent*);
    using QsciLexerJava_TimerEvent_Callback = void (*)(QsciLexerJava*, QTimerEvent*);
    using QsciLexerJava_ChildEvent_Callback = void (*)(QsciLexerJava*, QChildEvent*);
    using QsciLexerJava_CustomEvent_Callback = void (*)(QsciLexerJava*, QEvent*);
    using QsciLexerJava_ConnectNotify_Callback = void (*)(QsciLexerJava*, QMetaMethod*);
    using QsciLexerJava_DisconnectNotify_Callback = void (*)(QsciLexerJava*, QMetaMethod*);
    using QsciLexerJava::bytesAsText;
    using QsciLexerJava::isSignalConnected;
    using QsciLexerJava::receivers;
    using QsciLexerJava::sender;
    using QsciLexerJava::senderSignalIndex;
    using QsciLexerJava::textAsBytes;

    // Instance callback storage
    QsciLexerJava_MetaObject_Callback qscilexerjava_metaobject_callback = nullptr;
    QsciLexerJava_Metacast_Callback qscilexerjava_metacast_callback = nullptr;
    QsciLexerJava_Metacall_Callback qscilexerjava_metacall_callback = nullptr;
    QsciLexerJava_SetFoldAtElse_Callback qscilexerjava_setfoldatelse_callback = nullptr;
    QsciLexerJava_SetFoldComments_Callback qscilexerjava_setfoldcomments_callback = nullptr;
    QsciLexerJava_SetFoldCompact_Callback qscilexerjava_setfoldcompact_callback = nullptr;
    QsciLexerJava_SetFoldPreprocessor_Callback qscilexerjava_setfoldpreprocessor_callback = nullptr;
    QsciLexerJava_SetStylePreprocessor_Callback qscilexerjava_setstylepreprocessor_callback = nullptr;
    QsciLexerJava_Language_Callback qscilexerjava_language_callback = nullptr;
    QsciLexerJava_Lexer_Callback qscilexerjava_lexer_callback = nullptr;
    QsciLexerJava_LexerId_Callback qscilexerjava_lexerid_callback = nullptr;
    QsciLexerJava_AutoCompletionFillups_Callback qscilexerjava_autocompletionfillups_callback = nullptr;
    QsciLexerJava_AutoCompletionWordSeparators_Callback qscilexerjava_autocompletionwordseparators_callback = nullptr;
    QsciLexerJava_BlockEnd_Callback qscilexerjava_blockend_callback = nullptr;
    QsciLexerJava_BlockLookback_Callback qscilexerjava_blocklookback_callback = nullptr;
    QsciLexerJava_BlockStart_Callback qscilexerjava_blockstart_callback = nullptr;
    QsciLexerJava_BlockStartKeyword_Callback qscilexerjava_blockstartkeyword_callback = nullptr;
    QsciLexerJava_BraceStyle_Callback qscilexerjava_bracestyle_callback = nullptr;
    QsciLexerJava_CaseSensitive_Callback qscilexerjava_casesensitive_callback = nullptr;
    QsciLexerJava_Color_Callback qscilexerjava_color_callback = nullptr;
    QsciLexerJava_EolFill_Callback qscilexerjava_eolfill_callback = nullptr;
    QsciLexerJava_Font_Callback qscilexerjava_font_callback = nullptr;
    QsciLexerJava_IndentationGuideView_Callback qscilexerjava_indentationguideview_callback = nullptr;
    QsciLexerJava_Keywords_Callback qscilexerjava_keywords_callback = nullptr;
    QsciLexerJava_DefaultStyle_Callback qscilexerjava_defaultstyle_callback = nullptr;
    QsciLexerJava_Description_Callback qscilexerjava_description_callback = nullptr;
    QsciLexerJava_Paper_Callback qscilexerjava_paper_callback = nullptr;
    QsciLexerJava_DefaultColor2_Callback qscilexerjava_defaultcolor2_callback = nullptr;
    QsciLexerJava_DefaultEolFill_Callback qscilexerjava_defaulteolfill_callback = nullptr;
    QsciLexerJava_DefaultFont2_Callback qscilexerjava_defaultfont2_callback = nullptr;
    QsciLexerJava_DefaultPaper2_Callback qscilexerjava_defaultpaper2_callback = nullptr;
    QsciLexerJava_SetEditor_Callback qscilexerjava_seteditor_callback = nullptr;
    QsciLexerJava_RefreshProperties_Callback qscilexerjava_refreshproperties_callback = nullptr;
    QsciLexerJava_StyleBitsNeeded_Callback qscilexerjava_stylebitsneeded_callback = nullptr;
    QsciLexerJava_WordCharacters_Callback qscilexerjava_wordcharacters_callback = nullptr;
    QsciLexerJava_SetAutoIndentStyle_Callback qscilexerjava_setautoindentstyle_callback = nullptr;
    QsciLexerJava_SetColor_Callback qscilexerjava_setcolor_callback = nullptr;
    QsciLexerJava_SetEolFill_Callback qscilexerjava_seteolfill_callback = nullptr;
    QsciLexerJava_SetFont_Callback qscilexerjava_setfont_callback = nullptr;
    QsciLexerJava_SetPaper_Callback qscilexerjava_setpaper_callback = nullptr;
    QsciLexerJava_ReadProperties_Callback qscilexerjava_readproperties_callback = nullptr;
    QsciLexerJava_WriteProperties_Callback qscilexerjava_writeproperties_callback = nullptr;
    QsciLexerJava_Event_Callback qscilexerjava_event_callback = nullptr;
    QsciLexerJava_EventFilter_Callback qscilexerjava_eventfilter_callback = nullptr;
    QsciLexerJava_TimerEvent_Callback qscilexerjava_timerevent_callback = nullptr;
    QsciLexerJava_ChildEvent_Callback qscilexerjava_childevent_callback = nullptr;
    QsciLexerJava_CustomEvent_Callback qscilexerjava_customevent_callback = nullptr;
    QsciLexerJava_ConnectNotify_Callback qscilexerjava_connectnotify_callback = nullptr;
    QsciLexerJava_DisconnectNotify_Callback qscilexerjava_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerJava {
        using QsciLexerJava::childEvent;
        using QsciLexerJava::connectNotify;
        using QsciLexerJava::customEvent;
        using QsciLexerJava::disconnectNotify;
        using QsciLexerJava::readProperties;
        using QsciLexerJava::timerEvent;
        using QsciLexerJava::writeProperties;
    };

    VirtualQsciLexerJava() : QsciLexerJava() {};
    VirtualQsciLexerJava(QObject* parent) : QsciLexerJava(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerjava_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerjava_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerJava::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerjava_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerjava_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerjava_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerjava_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerjava_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexerjava_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerjava_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerjava_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerjava_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerjava_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerjava_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexerjava_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexerjava_setstylepreprocessor_callback) {
            bool cbval1 = style;
            qscilexerjava_setstylepreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setStylePreprocessor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerjava_language_callback) {
            const char* callback_ret = qscilexerjava_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJava::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerjava_lexer_callback) {
            const char* callback_ret = qscilexerjava_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerJava::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerjava_lexerid_callback) {
            int callback_ret = qscilexerjava_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerjava_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerjava_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerJava::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerjava_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerjava_autocompletionwordseparators_callback(this);
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
        return QsciLexerJava::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerjava_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjava_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerjava_blocklookback_callback) {
            int callback_ret = qscilexerjava_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerjava_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjava_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerjava_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerjava_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerjava_bracestyle_callback) {
            int callback_ret = qscilexerjava_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerjava_casesensitive_callback) {
            bool callback_ret = qscilexerjava_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerJava::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerjava_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjava_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerjava_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjava_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerjava_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjava_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerjava_indentationguideview_callback) {
            int callback_ret = qscilexerjava_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerjava_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerjava_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerjava_defaultstyle_callback) {
            int callback_ret = qscilexerjava_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerjava_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerjava_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerJava::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerjava_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjava_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerjava_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjava_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerjava_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerjava_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerjava_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerjava_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerjava_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerjava_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerJava::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerjava_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerjava_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerjava_refreshproperties_callback) {
            qscilexerjava_refreshproperties_callback(this);
            return;
        }
        QsciLexerJava::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerjava_stylebitsneeded_callback) {
            int callback_ret = qscilexerjava_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerJava::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerjava_wordcharacters_callback) {
            const char* callback_ret = qscilexerjava_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerJava::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerjava_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerjava_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerJava::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerjava_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjava_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerjava_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerjava_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerjava_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerjava_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerjava_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerjava_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerJava::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerjava_readproperties_callback) {
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
            bool callback_ret = qscilexerjava_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJava::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerjava_writeproperties_callback) {
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
            bool callback_ret = qscilexerjava_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerJava::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerjava_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerjava_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerJava::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerjava_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerjava_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerJava::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerjava_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerjava_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerJava::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerjava_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerjava_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerJava::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerjava_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerjava_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerJava::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjava_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJava::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerjava_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerjava_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerJava::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerJava_SuperReadProperties(QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerJava_SuperWriteProperties(const QsciLexerJava* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerJava_SuperTimerEvent(QsciLexerJava* self, QTimerEvent* event);
    friend void QsciLexerJava_SuperChildEvent(QsciLexerJava* self, QChildEvent* event);
    friend void QsciLexerJava_SuperCustomEvent(QsciLexerJava* self, QEvent* event);
    friend void QsciLexerJava_SuperConnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
    friend void QsciLexerJava_SuperDisconnectNotify(QsciLexerJava* self, const QMetaMethod* signal);
};

#endif
