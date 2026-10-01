#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERHTML_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERHTML_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerHTML
class VirtualQsciLexerHTML final : public QsciLexerHTML {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerHTML_MetaObject_Callback = QMetaObject* (*)(const QsciLexerHTML*);
    using QsciLexerHTML_Metacast_Callback = void* (*)(QsciLexerHTML*, const char*);
    using QsciLexerHTML_Metacall_Callback = int (*)(QsciLexerHTML*, int, int, void**);
    using QsciLexerHTML_SetFoldCompact_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_SetFoldPreprocessor_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_SetCaseSensitiveTags_Callback = void (*)(QsciLexerHTML*, bool);
    using QsciLexerHTML_Language_Callback = const char* (*)(const QsciLexerHTML*);
    using QsciLexerHTML_Lexer_Callback = const char* (*)(const QsciLexerHTML*);
    using QsciLexerHTML_LexerId_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerHTML*);
    using QsciLexerHTML_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerHTML*);
    using QsciLexerHTML_BlockEnd_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BlockLookback_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_BlockStart_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerHTML*, int*);
    using QsciLexerHTML_BraceStyle_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_CaseSensitive_Callback = bool (*)(const QsciLexerHTML*);
    using QsciLexerHTML_Color_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_EolFill_Callback = bool (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_Font_Callback = QFont* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_IndentationGuideView_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_Keywords_Callback = const char* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultStyle_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_Description_Callback = const char* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_Paper_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultColor2_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultEolFill_Callback = bool (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultFont2_Callback = QFont* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_DefaultPaper2_Callback = QColor* (*)(const QsciLexerHTML*, int);
    using QsciLexerHTML_SetEditor_Callback = void (*)(QsciLexerHTML*, QsciScintilla*);
    using QsciLexerHTML_RefreshProperties_Callback = void (*)(QsciLexerHTML*);
    using QsciLexerHTML_StyleBitsNeeded_Callback = int (*)(const QsciLexerHTML*);
    using QsciLexerHTML_WordCharacters_Callback = const char* (*)(const QsciLexerHTML*);
    using QsciLexerHTML_SetAutoIndentStyle_Callback = void (*)(QsciLexerHTML*, int);
    using QsciLexerHTML_SetColor_Callback = void (*)(QsciLexerHTML*, QColor*, int);
    using QsciLexerHTML_SetEolFill_Callback = void (*)(QsciLexerHTML*, bool, int);
    using QsciLexerHTML_SetFont_Callback = void (*)(QsciLexerHTML*, QFont*, int);
    using QsciLexerHTML_SetPaper_Callback = void (*)(QsciLexerHTML*, QColor*, int);
    using QsciLexerHTML_ReadProperties_Callback = bool (*)(QsciLexerHTML*, QSettings*, const char*);
    using QsciLexerHTML_WriteProperties_Callback = bool (*)(const QsciLexerHTML*, QSettings*, const char*);
    using QsciLexerHTML_Event_Callback = bool (*)(QsciLexerHTML*, QEvent*);
    using QsciLexerHTML_EventFilter_Callback = bool (*)(QsciLexerHTML*, QObject*, QEvent*);
    using QsciLexerHTML_TimerEvent_Callback = void (*)(QsciLexerHTML*, QTimerEvent*);
    using QsciLexerHTML_ChildEvent_Callback = void (*)(QsciLexerHTML*, QChildEvent*);
    using QsciLexerHTML_CustomEvent_Callback = void (*)(QsciLexerHTML*, QEvent*);
    using QsciLexerHTML_ConnectNotify_Callback = void (*)(QsciLexerHTML*, QMetaMethod*);
    using QsciLexerHTML_DisconnectNotify_Callback = void (*)(QsciLexerHTML*, QMetaMethod*);
    using QsciLexerHTML::bytesAsText;
    using QsciLexerHTML::isSignalConnected;
    using QsciLexerHTML::receivers;
    using QsciLexerHTML::sender;
    using QsciLexerHTML::senderSignalIndex;
    using QsciLexerHTML::textAsBytes;

    // Instance callback storage
    QsciLexerHTML_MetaObject_Callback qscilexerhtml_metaobject_callback = nullptr;
    QsciLexerHTML_Metacast_Callback qscilexerhtml_metacast_callback = nullptr;
    QsciLexerHTML_Metacall_Callback qscilexerhtml_metacall_callback = nullptr;
    QsciLexerHTML_SetFoldCompact_Callback qscilexerhtml_setfoldcompact_callback = nullptr;
    QsciLexerHTML_SetFoldPreprocessor_Callback qscilexerhtml_setfoldpreprocessor_callback = nullptr;
    QsciLexerHTML_SetCaseSensitiveTags_Callback qscilexerhtml_setcasesensitivetags_callback = nullptr;
    QsciLexerHTML_Language_Callback qscilexerhtml_language_callback = nullptr;
    QsciLexerHTML_Lexer_Callback qscilexerhtml_lexer_callback = nullptr;
    QsciLexerHTML_LexerId_Callback qscilexerhtml_lexerid_callback = nullptr;
    QsciLexerHTML_AutoCompletionFillups_Callback qscilexerhtml_autocompletionfillups_callback = nullptr;
    QsciLexerHTML_AutoCompletionWordSeparators_Callback qscilexerhtml_autocompletionwordseparators_callback = nullptr;
    QsciLexerHTML_BlockEnd_Callback qscilexerhtml_blockend_callback = nullptr;
    QsciLexerHTML_BlockLookback_Callback qscilexerhtml_blocklookback_callback = nullptr;
    QsciLexerHTML_BlockStart_Callback qscilexerhtml_blockstart_callback = nullptr;
    QsciLexerHTML_BlockStartKeyword_Callback qscilexerhtml_blockstartkeyword_callback = nullptr;
    QsciLexerHTML_BraceStyle_Callback qscilexerhtml_bracestyle_callback = nullptr;
    QsciLexerHTML_CaseSensitive_Callback qscilexerhtml_casesensitive_callback = nullptr;
    QsciLexerHTML_Color_Callback qscilexerhtml_color_callback = nullptr;
    QsciLexerHTML_EolFill_Callback qscilexerhtml_eolfill_callback = nullptr;
    QsciLexerHTML_Font_Callback qscilexerhtml_font_callback = nullptr;
    QsciLexerHTML_IndentationGuideView_Callback qscilexerhtml_indentationguideview_callback = nullptr;
    QsciLexerHTML_Keywords_Callback qscilexerhtml_keywords_callback = nullptr;
    QsciLexerHTML_DefaultStyle_Callback qscilexerhtml_defaultstyle_callback = nullptr;
    QsciLexerHTML_Description_Callback qscilexerhtml_description_callback = nullptr;
    QsciLexerHTML_Paper_Callback qscilexerhtml_paper_callback = nullptr;
    QsciLexerHTML_DefaultColor2_Callback qscilexerhtml_defaultcolor2_callback = nullptr;
    QsciLexerHTML_DefaultEolFill_Callback qscilexerhtml_defaulteolfill_callback = nullptr;
    QsciLexerHTML_DefaultFont2_Callback qscilexerhtml_defaultfont2_callback = nullptr;
    QsciLexerHTML_DefaultPaper2_Callback qscilexerhtml_defaultpaper2_callback = nullptr;
    QsciLexerHTML_SetEditor_Callback qscilexerhtml_seteditor_callback = nullptr;
    QsciLexerHTML_RefreshProperties_Callback qscilexerhtml_refreshproperties_callback = nullptr;
    QsciLexerHTML_StyleBitsNeeded_Callback qscilexerhtml_stylebitsneeded_callback = nullptr;
    QsciLexerHTML_WordCharacters_Callback qscilexerhtml_wordcharacters_callback = nullptr;
    QsciLexerHTML_SetAutoIndentStyle_Callback qscilexerhtml_setautoindentstyle_callback = nullptr;
    QsciLexerHTML_SetColor_Callback qscilexerhtml_setcolor_callback = nullptr;
    QsciLexerHTML_SetEolFill_Callback qscilexerhtml_seteolfill_callback = nullptr;
    QsciLexerHTML_SetFont_Callback qscilexerhtml_setfont_callback = nullptr;
    QsciLexerHTML_SetPaper_Callback qscilexerhtml_setpaper_callback = nullptr;
    QsciLexerHTML_ReadProperties_Callback qscilexerhtml_readproperties_callback = nullptr;
    QsciLexerHTML_WriteProperties_Callback qscilexerhtml_writeproperties_callback = nullptr;
    QsciLexerHTML_Event_Callback qscilexerhtml_event_callback = nullptr;
    QsciLexerHTML_EventFilter_Callback qscilexerhtml_eventfilter_callback = nullptr;
    QsciLexerHTML_TimerEvent_Callback qscilexerhtml_timerevent_callback = nullptr;
    QsciLexerHTML_ChildEvent_Callback qscilexerhtml_childevent_callback = nullptr;
    QsciLexerHTML_CustomEvent_Callback qscilexerhtml_customevent_callback = nullptr;
    QsciLexerHTML_ConnectNotify_Callback qscilexerhtml_connectnotify_callback = nullptr;
    QsciLexerHTML_DisconnectNotify_Callback qscilexerhtml_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerHTML {
        using QsciLexerHTML::childEvent;
        using QsciLexerHTML::connectNotify;
        using QsciLexerHTML::customEvent;
        using QsciLexerHTML::disconnectNotify;
        using QsciLexerHTML::readProperties;
        using QsciLexerHTML::timerEvent;
        using QsciLexerHTML::writeProperties;
    };

    VirtualQsciLexerHTML() : QsciLexerHTML() {};
    VirtualQsciLexerHTML(QObject* parent) : QsciLexerHTML(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerhtml_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerhtml_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerHTML::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerhtml_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerhtml_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerhtml_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerhtml_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerhtml_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerhtml_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerhtml_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexerhtml_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaseSensitiveTags(bool sens) override {
        if (qscilexerhtml_setcasesensitivetags_callback) {
            bool cbval1 = sens;
            qscilexerhtml_setcasesensitivetags_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::setCaseSensitiveTags(sens);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerhtml_language_callback) {
            const char* callback_ret = qscilexerhtml_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerHTML::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerhtml_lexer_callback) {
            const char* callback_ret = qscilexerhtml_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerHTML::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerhtml_lexerid_callback) {
            int callback_ret = qscilexerhtml_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerhtml_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerhtml_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerHTML::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerhtml_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerhtml_autocompletionwordseparators_callback(this);
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
        return QsciLexerHTML::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerhtml_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhtml_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerhtml_blocklookback_callback) {
            int callback_ret = qscilexerhtml_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerhtml_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhtml_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerhtml_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerhtml_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerhtml_bracestyle_callback) {
            int callback_ret = qscilexerhtml_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerhtml_casesensitive_callback) {
            bool callback_ret = qscilexerhtml_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerHTML::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerhtml_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhtml_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerhtml_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerhtml_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerhtml_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerhtml_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerhtml_indentationguideview_callback) {
            int callback_ret = qscilexerhtml_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerhtml_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerhtml_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerhtml_defaultstyle_callback) {
            int callback_ret = qscilexerhtml_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerhtml_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerhtml_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerHTML::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerhtml_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhtml_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerhtml_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhtml_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerhtml_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerhtml_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerhtml_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerhtml_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerhtml_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerhtml_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerHTML::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerhtml_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerhtml_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerhtml_refreshproperties_callback) {
            qscilexerhtml_refreshproperties_callback(this);
            return;
        }
        QsciLexerHTML::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerhtml_stylebitsneeded_callback) {
            int callback_ret = qscilexerhtml_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerHTML::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerhtml_wordcharacters_callback) {
            const char* callback_ret = qscilexerhtml_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerHTML::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerhtml_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerhtml_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerhtml_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerhtml_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerhtml_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerhtml_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerhtml_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerhtml_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerhtml_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerhtml_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerHTML::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerhtml_readproperties_callback) {
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
            bool callback_ret = qscilexerhtml_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerHTML::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerhtml_writeproperties_callback) {
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
            bool callback_ret = qscilexerhtml_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerHTML::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerhtml_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerhtml_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerHTML::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerhtml_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerhtml_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerHTML::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerhtml_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerhtml_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerhtml_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerhtml_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerhtml_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerhtml_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerhtml_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerhtml_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerhtml_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerhtml_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerHTML::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerHTML_SuperReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerHTML_SuperWriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerHTML_SuperTimerEvent(QsciLexerHTML* self, QTimerEvent* event);
    friend void QsciLexerHTML_SuperChildEvent(QsciLexerHTML* self, QChildEvent* event);
    friend void QsciLexerHTML_SuperCustomEvent(QsciLexerHTML* self, QEvent* event);
    friend void QsciLexerHTML_SuperConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
    friend void QsciLexerHTML_SuperDisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal);
};

#endif
