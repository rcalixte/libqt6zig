#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCMAKE_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCMAKE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCMake
class VirtualQsciLexerCMake final : public QsciLexerCMake {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCMake_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCMake*);
    using QsciLexerCMake_Metacast_Callback = void* (*)(QsciLexerCMake*, const char*);
    using QsciLexerCMake_Metacall_Callback = int (*)(QsciLexerCMake*, int, int, void**);
    using QsciLexerCMake_SetFoldAtElse_Callback = void (*)(QsciLexerCMake*, bool);
    using QsciLexerCMake_Language_Callback = const char* (*)(const QsciLexerCMake*);
    using QsciLexerCMake_Lexer_Callback = const char* (*)(const QsciLexerCMake*);
    using QsciLexerCMake_LexerId_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCMake*);
    using QsciLexerCMake_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCMake*);
    using QsciLexerCMake_BlockEnd_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BlockLookback_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_BlockStart_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCMake*, int*);
    using QsciLexerCMake_BraceStyle_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_CaseSensitive_Callback = bool (*)(const QsciLexerCMake*);
    using QsciLexerCMake_Color_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_EolFill_Callback = bool (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_Font_Callback = QFont* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_IndentationGuideView_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_Keywords_Callback = const char* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultStyle_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_Description_Callback = const char* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_Paper_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultColor2_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultEolFill_Callback = bool (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultFont2_Callback = QFont* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCMake*, int);
    using QsciLexerCMake_SetEditor_Callback = void (*)(QsciLexerCMake*, QsciScintilla*);
    using QsciLexerCMake_RefreshProperties_Callback = void (*)(QsciLexerCMake*);
    using QsciLexerCMake_StyleBitsNeeded_Callback = int (*)(const QsciLexerCMake*);
    using QsciLexerCMake_WordCharacters_Callback = const char* (*)(const QsciLexerCMake*);
    using QsciLexerCMake_SetAutoIndentStyle_Callback = void (*)(QsciLexerCMake*, int);
    using QsciLexerCMake_SetColor_Callback = void (*)(QsciLexerCMake*, QColor*, int);
    using QsciLexerCMake_SetEolFill_Callback = void (*)(QsciLexerCMake*, bool, int);
    using QsciLexerCMake_SetFont_Callback = void (*)(QsciLexerCMake*, QFont*, int);
    using QsciLexerCMake_SetPaper_Callback = void (*)(QsciLexerCMake*, QColor*, int);
    using QsciLexerCMake_ReadProperties_Callback = bool (*)(QsciLexerCMake*, QSettings*, const char*);
    using QsciLexerCMake_WriteProperties_Callback = bool (*)(const QsciLexerCMake*, QSettings*, const char*);
    using QsciLexerCMake_Event_Callback = bool (*)(QsciLexerCMake*, QEvent*);
    using QsciLexerCMake_EventFilter_Callback = bool (*)(QsciLexerCMake*, QObject*, QEvent*);
    using QsciLexerCMake_TimerEvent_Callback = void (*)(QsciLexerCMake*, QTimerEvent*);
    using QsciLexerCMake_ChildEvent_Callback = void (*)(QsciLexerCMake*, QChildEvent*);
    using QsciLexerCMake_CustomEvent_Callback = void (*)(QsciLexerCMake*, QEvent*);
    using QsciLexerCMake_ConnectNotify_Callback = void (*)(QsciLexerCMake*, QMetaMethod*);
    using QsciLexerCMake_DisconnectNotify_Callback = void (*)(QsciLexerCMake*, QMetaMethod*);
    using QsciLexerCMake::bytesAsText;
    using QsciLexerCMake::isSignalConnected;
    using QsciLexerCMake::receivers;
    using QsciLexerCMake::sender;
    using QsciLexerCMake::senderSignalIndex;
    using QsciLexerCMake::textAsBytes;

    // Instance callback storage
    QsciLexerCMake_MetaObject_Callback qscilexercmake_metaobject_callback = nullptr;
    QsciLexerCMake_Metacast_Callback qscilexercmake_metacast_callback = nullptr;
    QsciLexerCMake_Metacall_Callback qscilexercmake_metacall_callback = nullptr;
    QsciLexerCMake_SetFoldAtElse_Callback qscilexercmake_setfoldatelse_callback = nullptr;
    QsciLexerCMake_Language_Callback qscilexercmake_language_callback = nullptr;
    QsciLexerCMake_Lexer_Callback qscilexercmake_lexer_callback = nullptr;
    QsciLexerCMake_LexerId_Callback qscilexercmake_lexerid_callback = nullptr;
    QsciLexerCMake_AutoCompletionFillups_Callback qscilexercmake_autocompletionfillups_callback = nullptr;
    QsciLexerCMake_AutoCompletionWordSeparators_Callback qscilexercmake_autocompletionwordseparators_callback = nullptr;
    QsciLexerCMake_BlockEnd_Callback qscilexercmake_blockend_callback = nullptr;
    QsciLexerCMake_BlockLookback_Callback qscilexercmake_blocklookback_callback = nullptr;
    QsciLexerCMake_BlockStart_Callback qscilexercmake_blockstart_callback = nullptr;
    QsciLexerCMake_BlockStartKeyword_Callback qscilexercmake_blockstartkeyword_callback = nullptr;
    QsciLexerCMake_BraceStyle_Callback qscilexercmake_bracestyle_callback = nullptr;
    QsciLexerCMake_CaseSensitive_Callback qscilexercmake_casesensitive_callback = nullptr;
    QsciLexerCMake_Color_Callback qscilexercmake_color_callback = nullptr;
    QsciLexerCMake_EolFill_Callback qscilexercmake_eolfill_callback = nullptr;
    QsciLexerCMake_Font_Callback qscilexercmake_font_callback = nullptr;
    QsciLexerCMake_IndentationGuideView_Callback qscilexercmake_indentationguideview_callback = nullptr;
    QsciLexerCMake_Keywords_Callback qscilexercmake_keywords_callback = nullptr;
    QsciLexerCMake_DefaultStyle_Callback qscilexercmake_defaultstyle_callback = nullptr;
    QsciLexerCMake_Description_Callback qscilexercmake_description_callback = nullptr;
    QsciLexerCMake_Paper_Callback qscilexercmake_paper_callback = nullptr;
    QsciLexerCMake_DefaultColor2_Callback qscilexercmake_defaultcolor2_callback = nullptr;
    QsciLexerCMake_DefaultEolFill_Callback qscilexercmake_defaulteolfill_callback = nullptr;
    QsciLexerCMake_DefaultFont2_Callback qscilexercmake_defaultfont2_callback = nullptr;
    QsciLexerCMake_DefaultPaper2_Callback qscilexercmake_defaultpaper2_callback = nullptr;
    QsciLexerCMake_SetEditor_Callback qscilexercmake_seteditor_callback = nullptr;
    QsciLexerCMake_RefreshProperties_Callback qscilexercmake_refreshproperties_callback = nullptr;
    QsciLexerCMake_StyleBitsNeeded_Callback qscilexercmake_stylebitsneeded_callback = nullptr;
    QsciLexerCMake_WordCharacters_Callback qscilexercmake_wordcharacters_callback = nullptr;
    QsciLexerCMake_SetAutoIndentStyle_Callback qscilexercmake_setautoindentstyle_callback = nullptr;
    QsciLexerCMake_SetColor_Callback qscilexercmake_setcolor_callback = nullptr;
    QsciLexerCMake_SetEolFill_Callback qscilexercmake_seteolfill_callback = nullptr;
    QsciLexerCMake_SetFont_Callback qscilexercmake_setfont_callback = nullptr;
    QsciLexerCMake_SetPaper_Callback qscilexercmake_setpaper_callback = nullptr;
    QsciLexerCMake_ReadProperties_Callback qscilexercmake_readproperties_callback = nullptr;
    QsciLexerCMake_WriteProperties_Callback qscilexercmake_writeproperties_callback = nullptr;
    QsciLexerCMake_Event_Callback qscilexercmake_event_callback = nullptr;
    QsciLexerCMake_EventFilter_Callback qscilexercmake_eventfilter_callback = nullptr;
    QsciLexerCMake_TimerEvent_Callback qscilexercmake_timerevent_callback = nullptr;
    QsciLexerCMake_ChildEvent_Callback qscilexercmake_childevent_callback = nullptr;
    QsciLexerCMake_CustomEvent_Callback qscilexercmake_customevent_callback = nullptr;
    QsciLexerCMake_ConnectNotify_Callback qscilexercmake_connectnotify_callback = nullptr;
    QsciLexerCMake_DisconnectNotify_Callback qscilexercmake_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCMake {
        using QsciLexerCMake::childEvent;
        using QsciLexerCMake::connectNotify;
        using QsciLexerCMake::customEvent;
        using QsciLexerCMake::disconnectNotify;
        using QsciLexerCMake::readProperties;
        using QsciLexerCMake::timerEvent;
        using QsciLexerCMake::writeProperties;
    };

    VirtualQsciLexerCMake() : QsciLexerCMake() {};
    VirtualQsciLexerCMake(QObject* parent) : QsciLexerCMake(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercmake_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercmake_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCMake::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercmake_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercmake_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercmake_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercmake_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercmake_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexercmake_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercmake_language_callback) {
            const char* callback_ret = qscilexercmake_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCMake::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercmake_lexer_callback) {
            const char* callback_ret = qscilexercmake_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCMake::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercmake_lexerid_callback) {
            int callback_ret = qscilexercmake_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercmake_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercmake_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCMake::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercmake_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercmake_autocompletionwordseparators_callback(this);
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
        return QsciLexerCMake::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercmake_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercmake_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercmake_blocklookback_callback) {
            int callback_ret = qscilexercmake_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercmake_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercmake_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercmake_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercmake_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercmake_bracestyle_callback) {
            int callback_ret = qscilexercmake_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercmake_casesensitive_callback) {
            bool callback_ret = qscilexercmake_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCMake::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercmake_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercmake_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercmake_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercmake_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercmake_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercmake_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercmake_indentationguideview_callback) {
            int callback_ret = qscilexercmake_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercmake_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercmake_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercmake_defaultstyle_callback) {
            int callback_ret = qscilexercmake_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercmake_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercmake_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCMake::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercmake_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercmake_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercmake_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercmake_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercmake_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercmake_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercmake_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercmake_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercmake_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercmake_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCMake::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercmake_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercmake_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercmake_refreshproperties_callback) {
            qscilexercmake_refreshproperties_callback(this);
            return;
        }
        QsciLexerCMake::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercmake_stylebitsneeded_callback) {
            int callback_ret = qscilexercmake_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCMake::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercmake_wordcharacters_callback) {
            const char* callback_ret = qscilexercmake_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCMake::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercmake_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercmake_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercmake_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercmake_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCMake::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercmake_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercmake_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCMake::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercmake_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercmake_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCMake::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercmake_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercmake_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCMake::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercmake_readproperties_callback) {
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
            bool callback_ret = qscilexercmake_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCMake::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercmake_writeproperties_callback) {
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
            bool callback_ret = qscilexercmake_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCMake::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercmake_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercmake_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCMake::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercmake_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercmake_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCMake::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercmake_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercmake_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercmake_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercmake_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercmake_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercmake_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercmake_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercmake_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercmake_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercmake_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCMake::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCMake_SuperReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCMake_SuperWriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCMake_SuperTimerEvent(QsciLexerCMake* self, QTimerEvent* event);
    friend void QsciLexerCMake_SuperChildEvent(QsciLexerCMake* self, QChildEvent* event);
    friend void QsciLexerCMake_SuperCustomEvent(QsciLexerCMake* self, QEvent* event);
    friend void QsciLexerCMake_SuperConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
    friend void QsciLexerCMake_SuperDisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal);
};

#endif
