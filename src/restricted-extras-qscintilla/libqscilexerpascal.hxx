#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPASCAL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPASCAL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPascal
class VirtualQsciLexerPascal final : public QsciLexerPascal {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPascal_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPascal*);
    using QsciLexerPascal_Metacast_Callback = void* (*)(QsciLexerPascal*, const char*);
    using QsciLexerPascal_Metacall_Callback = int (*)(QsciLexerPascal*, int, int, void**);
    using QsciLexerPascal_SetFoldComments_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_SetFoldCompact_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_SetFoldPreprocessor_Callback = void (*)(QsciLexerPascal*, bool);
    using QsciLexerPascal_Language_Callback = const char* (*)(const QsciLexerPascal*);
    using QsciLexerPascal_Lexer_Callback = const char* (*)(const QsciLexerPascal*);
    using QsciLexerPascal_LexerId_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPascal*);
    using QsciLexerPascal_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPascal*);
    using QsciLexerPascal_BlockEnd_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BlockLookback_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_BlockStart_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPascal*, int*);
    using QsciLexerPascal_BraceStyle_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_CaseSensitive_Callback = bool (*)(const QsciLexerPascal*);
    using QsciLexerPascal_Color_Callback = QColor* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_EolFill_Callback = bool (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_Font_Callback = QFont* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_IndentationGuideView_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_Keywords_Callback = const char* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultStyle_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_Description_Callback = const char* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_Paper_Callback = QColor* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultColor2_Callback = QColor* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultEolFill_Callback = bool (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultFont2_Callback = QFont* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPascal*, int);
    using QsciLexerPascal_SetEditor_Callback = void (*)(QsciLexerPascal*, QsciScintilla*);
    using QsciLexerPascal_RefreshProperties_Callback = void (*)(QsciLexerPascal*);
    using QsciLexerPascal_StyleBitsNeeded_Callback = int (*)(const QsciLexerPascal*);
    using QsciLexerPascal_WordCharacters_Callback = const char* (*)(const QsciLexerPascal*);
    using QsciLexerPascal_SetAutoIndentStyle_Callback = void (*)(QsciLexerPascal*, int);
    using QsciLexerPascal_SetColor_Callback = void (*)(QsciLexerPascal*, QColor*, int);
    using QsciLexerPascal_SetEolFill_Callback = void (*)(QsciLexerPascal*, bool, int);
    using QsciLexerPascal_SetFont_Callback = void (*)(QsciLexerPascal*, QFont*, int);
    using QsciLexerPascal_SetPaper_Callback = void (*)(QsciLexerPascal*, QColor*, int);
    using QsciLexerPascal_ReadProperties_Callback = bool (*)(QsciLexerPascal*, QSettings*, const char*);
    using QsciLexerPascal_WriteProperties_Callback = bool (*)(const QsciLexerPascal*, QSettings*, const char*);
    using QsciLexerPascal_Event_Callback = bool (*)(QsciLexerPascal*, QEvent*);
    using QsciLexerPascal_EventFilter_Callback = bool (*)(QsciLexerPascal*, QObject*, QEvent*);
    using QsciLexerPascal_TimerEvent_Callback = void (*)(QsciLexerPascal*, QTimerEvent*);
    using QsciLexerPascal_ChildEvent_Callback = void (*)(QsciLexerPascal*, QChildEvent*);
    using QsciLexerPascal_CustomEvent_Callback = void (*)(QsciLexerPascal*, QEvent*);
    using QsciLexerPascal_ConnectNotify_Callback = void (*)(QsciLexerPascal*, QMetaMethod*);
    using QsciLexerPascal_DisconnectNotify_Callback = void (*)(QsciLexerPascal*, QMetaMethod*);
    using QsciLexerPascal::bytesAsText;
    using QsciLexerPascal::isSignalConnected;
    using QsciLexerPascal::receivers;
    using QsciLexerPascal::sender;
    using QsciLexerPascal::senderSignalIndex;
    using QsciLexerPascal::textAsBytes;

    // Instance callback storage
    QsciLexerPascal_MetaObject_Callback qscilexerpascal_metaobject_callback = nullptr;
    QsciLexerPascal_Metacast_Callback qscilexerpascal_metacast_callback = nullptr;
    QsciLexerPascal_Metacall_Callback qscilexerpascal_metacall_callback = nullptr;
    QsciLexerPascal_SetFoldComments_Callback qscilexerpascal_setfoldcomments_callback = nullptr;
    QsciLexerPascal_SetFoldCompact_Callback qscilexerpascal_setfoldcompact_callback = nullptr;
    QsciLexerPascal_SetFoldPreprocessor_Callback qscilexerpascal_setfoldpreprocessor_callback = nullptr;
    QsciLexerPascal_Language_Callback qscilexerpascal_language_callback = nullptr;
    QsciLexerPascal_Lexer_Callback qscilexerpascal_lexer_callback = nullptr;
    QsciLexerPascal_LexerId_Callback qscilexerpascal_lexerid_callback = nullptr;
    QsciLexerPascal_AutoCompletionFillups_Callback qscilexerpascal_autocompletionfillups_callback = nullptr;
    QsciLexerPascal_AutoCompletionWordSeparators_Callback qscilexerpascal_autocompletionwordseparators_callback = nullptr;
    QsciLexerPascal_BlockEnd_Callback qscilexerpascal_blockend_callback = nullptr;
    QsciLexerPascal_BlockLookback_Callback qscilexerpascal_blocklookback_callback = nullptr;
    QsciLexerPascal_BlockStart_Callback qscilexerpascal_blockstart_callback = nullptr;
    QsciLexerPascal_BlockStartKeyword_Callback qscilexerpascal_blockstartkeyword_callback = nullptr;
    QsciLexerPascal_BraceStyle_Callback qscilexerpascal_bracestyle_callback = nullptr;
    QsciLexerPascal_CaseSensitive_Callback qscilexerpascal_casesensitive_callback = nullptr;
    QsciLexerPascal_Color_Callback qscilexerpascal_color_callback = nullptr;
    QsciLexerPascal_EolFill_Callback qscilexerpascal_eolfill_callback = nullptr;
    QsciLexerPascal_Font_Callback qscilexerpascal_font_callback = nullptr;
    QsciLexerPascal_IndentationGuideView_Callback qscilexerpascal_indentationguideview_callback = nullptr;
    QsciLexerPascal_Keywords_Callback qscilexerpascal_keywords_callback = nullptr;
    QsciLexerPascal_DefaultStyle_Callback qscilexerpascal_defaultstyle_callback = nullptr;
    QsciLexerPascal_Description_Callback qscilexerpascal_description_callback = nullptr;
    QsciLexerPascal_Paper_Callback qscilexerpascal_paper_callback = nullptr;
    QsciLexerPascal_DefaultColor2_Callback qscilexerpascal_defaultcolor2_callback = nullptr;
    QsciLexerPascal_DefaultEolFill_Callback qscilexerpascal_defaulteolfill_callback = nullptr;
    QsciLexerPascal_DefaultFont2_Callback qscilexerpascal_defaultfont2_callback = nullptr;
    QsciLexerPascal_DefaultPaper2_Callback qscilexerpascal_defaultpaper2_callback = nullptr;
    QsciLexerPascal_SetEditor_Callback qscilexerpascal_seteditor_callback = nullptr;
    QsciLexerPascal_RefreshProperties_Callback qscilexerpascal_refreshproperties_callback = nullptr;
    QsciLexerPascal_StyleBitsNeeded_Callback qscilexerpascal_stylebitsneeded_callback = nullptr;
    QsciLexerPascal_WordCharacters_Callback qscilexerpascal_wordcharacters_callback = nullptr;
    QsciLexerPascal_SetAutoIndentStyle_Callback qscilexerpascal_setautoindentstyle_callback = nullptr;
    QsciLexerPascal_SetColor_Callback qscilexerpascal_setcolor_callback = nullptr;
    QsciLexerPascal_SetEolFill_Callback qscilexerpascal_seteolfill_callback = nullptr;
    QsciLexerPascal_SetFont_Callback qscilexerpascal_setfont_callback = nullptr;
    QsciLexerPascal_SetPaper_Callback qscilexerpascal_setpaper_callback = nullptr;
    QsciLexerPascal_ReadProperties_Callback qscilexerpascal_readproperties_callback = nullptr;
    QsciLexerPascal_WriteProperties_Callback qscilexerpascal_writeproperties_callback = nullptr;
    QsciLexerPascal_Event_Callback qscilexerpascal_event_callback = nullptr;
    QsciLexerPascal_EventFilter_Callback qscilexerpascal_eventfilter_callback = nullptr;
    QsciLexerPascal_TimerEvent_Callback qscilexerpascal_timerevent_callback = nullptr;
    QsciLexerPascal_ChildEvent_Callback qscilexerpascal_childevent_callback = nullptr;
    QsciLexerPascal_CustomEvent_Callback qscilexerpascal_customevent_callback = nullptr;
    QsciLexerPascal_ConnectNotify_Callback qscilexerpascal_connectnotify_callback = nullptr;
    QsciLexerPascal_DisconnectNotify_Callback qscilexerpascal_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPascal {
        using QsciLexerPascal::childEvent;
        using QsciLexerPascal::connectNotify;
        using QsciLexerPascal::customEvent;
        using QsciLexerPascal::disconnectNotify;
        using QsciLexerPascal::readProperties;
        using QsciLexerPascal::timerEvent;
        using QsciLexerPascal::writeProperties;
    };

    VirtualQsciLexerPascal() : QsciLexerPascal() {};
    VirtualQsciLexerPascal(QObject* parent) : QsciLexerPascal(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpascal_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerpascal_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPascal::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpascal_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerpascal_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpascal_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerpascal_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpascal_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerpascal_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpascal_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerpascal_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerpascal_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexerpascal_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpascal_language_callback) {
            const char* callback_ret = qscilexerpascal_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPascal::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpascal_lexer_callback) {
            const char* callback_ret = qscilexerpascal_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPascal::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpascal_lexerid_callback) {
            int callback_ret = qscilexerpascal_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpascal_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerpascal_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPascal::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpascal_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerpascal_autocompletionwordseparators_callback(this);
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
        return QsciLexerPascal::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpascal_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpascal_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpascal_blocklookback_callback) {
            int callback_ret = qscilexerpascal_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpascal_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpascal_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpascal_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpascal_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpascal_bracestyle_callback) {
            int callback_ret = qscilexerpascal_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpascal_casesensitive_callback) {
            bool callback_ret = qscilexerpascal_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPascal::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpascal_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpascal_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpascal_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpascal_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpascal_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpascal_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpascal_indentationguideview_callback) {
            int callback_ret = qscilexerpascal_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpascal_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerpascal_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpascal_defaultstyle_callback) {
            int callback_ret = qscilexerpascal_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpascal_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerpascal_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPascal::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpascal_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpascal_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpascal_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpascal_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpascal_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpascal_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpascal_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpascal_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpascal_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpascal_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPascal::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpascal_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerpascal_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpascal_refreshproperties_callback) {
            qscilexerpascal_refreshproperties_callback(this);
            return;
        }
        QsciLexerPascal::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpascal_stylebitsneeded_callback) {
            int callback_ret = qscilexerpascal_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPascal::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpascal_wordcharacters_callback) {
            const char* callback_ret = qscilexerpascal_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPascal::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpascal_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerpascal_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpascal_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpascal_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPascal::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpascal_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerpascal_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPascal::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpascal_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerpascal_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPascal::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpascal_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpascal_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPascal::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpascal_readproperties_callback) {
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
            bool callback_ret = qscilexerpascal_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPascal::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpascal_writeproperties_callback) {
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
            bool callback_ret = qscilexerpascal_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPascal::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpascal_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerpascal_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPascal::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpascal_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerpascal_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPascal::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpascal_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerpascal_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpascal_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerpascal_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpascal_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerpascal_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpascal_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpascal_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpascal_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpascal_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPascal::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPascal_SuperReadProperties(QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPascal_SuperWriteProperties(const QsciLexerPascal* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPascal_SuperTimerEvent(QsciLexerPascal* self, QTimerEvent* event);
    friend void QsciLexerPascal_SuperChildEvent(QsciLexerPascal* self, QChildEvent* event);
    friend void QsciLexerPascal_SuperCustomEvent(QsciLexerPascal* self, QEvent* event);
    friend void QsciLexerPascal_SuperConnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
    friend void QsciLexerPascal_SuperDisconnectNotify(QsciLexerPascal* self, const QMetaMethod* signal);
};

#endif
