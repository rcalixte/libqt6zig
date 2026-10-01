#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEREDIFACT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerEDIFACT
class VirtualQsciLexerEDIFACT final : public QsciLexerEDIFACT {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerEDIFACT_MetaObject_Callback = QMetaObject* (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_Metacast_Callback = void* (*)(QsciLexerEDIFACT*, const char*);
    using QsciLexerEDIFACT_Metacall_Callback = int (*)(QsciLexerEDIFACT*, int, int, void**);
    using QsciLexerEDIFACT_Language_Callback = const char* (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_Lexer_Callback = const char* (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_LexerId_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_BlockEnd_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockLookback_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_BlockStart_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BlockStartKeyword_Callback = const char* (*)(const QsciLexerEDIFACT*, int*);
    using QsciLexerEDIFACT_BraceStyle_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_CaseSensitive_Callback = bool (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_Color_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_EolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Font_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_IndentationGuideView_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_Keywords_Callback = const char* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultStyle_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_Description_Callback = const char* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_Paper_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultColor2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultEolFill_Callback = bool (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultFont2_Callback = QFont* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_DefaultPaper2_Callback = QColor* (*)(const QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetEditor_Callback = void (*)(QsciLexerEDIFACT*, QsciScintilla*);
    using QsciLexerEDIFACT_RefreshProperties_Callback = void (*)(QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_StyleBitsNeeded_Callback = int (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_WordCharacters_Callback = const char* (*)(const QsciLexerEDIFACT*);
    using QsciLexerEDIFACT_SetAutoIndentStyle_Callback = void (*)(QsciLexerEDIFACT*, int);
    using QsciLexerEDIFACT_SetColor_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_SetEolFill_Callback = void (*)(QsciLexerEDIFACT*, bool, int);
    using QsciLexerEDIFACT_SetFont_Callback = void (*)(QsciLexerEDIFACT*, QFont*, int);
    using QsciLexerEDIFACT_SetPaper_Callback = void (*)(QsciLexerEDIFACT*, QColor*, int);
    using QsciLexerEDIFACT_ReadProperties_Callback = bool (*)(QsciLexerEDIFACT*, QSettings*, const char*);
    using QsciLexerEDIFACT_WriteProperties_Callback = bool (*)(const QsciLexerEDIFACT*, QSettings*, const char*);
    using QsciLexerEDIFACT_Event_Callback = bool (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_EventFilter_Callback = bool (*)(QsciLexerEDIFACT*, QObject*, QEvent*);
    using QsciLexerEDIFACT_TimerEvent_Callback = void (*)(QsciLexerEDIFACT*, QTimerEvent*);
    using QsciLexerEDIFACT_ChildEvent_Callback = void (*)(QsciLexerEDIFACT*, QChildEvent*);
    using QsciLexerEDIFACT_CustomEvent_Callback = void (*)(QsciLexerEDIFACT*, QEvent*);
    using QsciLexerEDIFACT_ConnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT_DisconnectNotify_Callback = void (*)(QsciLexerEDIFACT*, QMetaMethod*);
    using QsciLexerEDIFACT::bytesAsText;
    using QsciLexerEDIFACT::isSignalConnected;
    using QsciLexerEDIFACT::receivers;
    using QsciLexerEDIFACT::sender;
    using QsciLexerEDIFACT::senderSignalIndex;
    using QsciLexerEDIFACT::textAsBytes;

    // Instance callback storage
    QsciLexerEDIFACT_MetaObject_Callback qscilexeredifact_metaobject_callback = nullptr;
    QsciLexerEDIFACT_Metacast_Callback qscilexeredifact_metacast_callback = nullptr;
    QsciLexerEDIFACT_Metacall_Callback qscilexeredifact_metacall_callback = nullptr;
    QsciLexerEDIFACT_Language_Callback qscilexeredifact_language_callback = nullptr;
    QsciLexerEDIFACT_Lexer_Callback qscilexeredifact_lexer_callback = nullptr;
    QsciLexerEDIFACT_LexerId_Callback qscilexeredifact_lexerid_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionFillups_Callback qscilexeredifact_autocompletionfillups_callback = nullptr;
    QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback qscilexeredifact_autocompletionwordseparators_callback = nullptr;
    QsciLexerEDIFACT_BlockEnd_Callback qscilexeredifact_blockend_callback = nullptr;
    QsciLexerEDIFACT_BlockLookback_Callback qscilexeredifact_blocklookback_callback = nullptr;
    QsciLexerEDIFACT_BlockStart_Callback qscilexeredifact_blockstart_callback = nullptr;
    QsciLexerEDIFACT_BlockStartKeyword_Callback qscilexeredifact_blockstartkeyword_callback = nullptr;
    QsciLexerEDIFACT_BraceStyle_Callback qscilexeredifact_bracestyle_callback = nullptr;
    QsciLexerEDIFACT_CaseSensitive_Callback qscilexeredifact_casesensitive_callback = nullptr;
    QsciLexerEDIFACT_Color_Callback qscilexeredifact_color_callback = nullptr;
    QsciLexerEDIFACT_EolFill_Callback qscilexeredifact_eolfill_callback = nullptr;
    QsciLexerEDIFACT_Font_Callback qscilexeredifact_font_callback = nullptr;
    QsciLexerEDIFACT_IndentationGuideView_Callback qscilexeredifact_indentationguideview_callback = nullptr;
    QsciLexerEDIFACT_Keywords_Callback qscilexeredifact_keywords_callback = nullptr;
    QsciLexerEDIFACT_DefaultStyle_Callback qscilexeredifact_defaultstyle_callback = nullptr;
    QsciLexerEDIFACT_Description_Callback qscilexeredifact_description_callback = nullptr;
    QsciLexerEDIFACT_Paper_Callback qscilexeredifact_paper_callback = nullptr;
    QsciLexerEDIFACT_DefaultColor2_Callback qscilexeredifact_defaultcolor2_callback = nullptr;
    QsciLexerEDIFACT_DefaultEolFill_Callback qscilexeredifact_defaulteolfill_callback = nullptr;
    QsciLexerEDIFACT_DefaultFont2_Callback qscilexeredifact_defaultfont2_callback = nullptr;
    QsciLexerEDIFACT_DefaultPaper2_Callback qscilexeredifact_defaultpaper2_callback = nullptr;
    QsciLexerEDIFACT_SetEditor_Callback qscilexeredifact_seteditor_callback = nullptr;
    QsciLexerEDIFACT_RefreshProperties_Callback qscilexeredifact_refreshproperties_callback = nullptr;
    QsciLexerEDIFACT_StyleBitsNeeded_Callback qscilexeredifact_stylebitsneeded_callback = nullptr;
    QsciLexerEDIFACT_WordCharacters_Callback qscilexeredifact_wordcharacters_callback = nullptr;
    QsciLexerEDIFACT_SetAutoIndentStyle_Callback qscilexeredifact_setautoindentstyle_callback = nullptr;
    QsciLexerEDIFACT_SetColor_Callback qscilexeredifact_setcolor_callback = nullptr;
    QsciLexerEDIFACT_SetEolFill_Callback qscilexeredifact_seteolfill_callback = nullptr;
    QsciLexerEDIFACT_SetFont_Callback qscilexeredifact_setfont_callback = nullptr;
    QsciLexerEDIFACT_SetPaper_Callback qscilexeredifact_setpaper_callback = nullptr;
    QsciLexerEDIFACT_ReadProperties_Callback qscilexeredifact_readproperties_callback = nullptr;
    QsciLexerEDIFACT_WriteProperties_Callback qscilexeredifact_writeproperties_callback = nullptr;
    QsciLexerEDIFACT_Event_Callback qscilexeredifact_event_callback = nullptr;
    QsciLexerEDIFACT_EventFilter_Callback qscilexeredifact_eventfilter_callback = nullptr;
    QsciLexerEDIFACT_TimerEvent_Callback qscilexeredifact_timerevent_callback = nullptr;
    QsciLexerEDIFACT_ChildEvent_Callback qscilexeredifact_childevent_callback = nullptr;
    QsciLexerEDIFACT_CustomEvent_Callback qscilexeredifact_customevent_callback = nullptr;
    QsciLexerEDIFACT_ConnectNotify_Callback qscilexeredifact_connectnotify_callback = nullptr;
    QsciLexerEDIFACT_DisconnectNotify_Callback qscilexeredifact_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerEDIFACT {
        using QsciLexerEDIFACT::childEvent;
        using QsciLexerEDIFACT::connectNotify;
        using QsciLexerEDIFACT::customEvent;
        using QsciLexerEDIFACT::disconnectNotify;
        using QsciLexerEDIFACT::readProperties;
        using QsciLexerEDIFACT::timerEvent;
        using QsciLexerEDIFACT::writeProperties;
    };

    VirtualQsciLexerEDIFACT() : QsciLexerEDIFACT() {};
    VirtualQsciLexerEDIFACT(QObject* parent) : QsciLexerEDIFACT(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeredifact_metaobject_callback) {
            QMetaObject* callback_ret = qscilexeredifact_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerEDIFACT::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeredifact_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexeredifact_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeredifact_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexeredifact_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeredifact_language_callback) {
            const char* callback_ret = qscilexeredifact_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerEDIFACT::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeredifact_lexer_callback) {
            const char* callback_ret = qscilexeredifact_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerEDIFACT::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeredifact_lexerid_callback) {
            int callback_ret = qscilexeredifact_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeredifact_autocompletionfillups_callback) {
            const char* callback_ret = qscilexeredifact_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerEDIFACT::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeredifact_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexeredifact_autocompletionwordseparators_callback(this);
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
        return QsciLexerEDIFACT::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeredifact_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeredifact_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeredifact_blocklookback_callback) {
            int callback_ret = qscilexeredifact_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeredifact_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeredifact_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeredifact_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeredifact_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeredifact_bracestyle_callback) {
            int callback_ret = qscilexeredifact_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeredifact_casesensitive_callback) {
            bool callback_ret = qscilexeredifact_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerEDIFACT::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeredifact_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeredifact_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeredifact_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeredifact_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeredifact_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeredifact_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeredifact_indentationguideview_callback) {
            int callback_ret = qscilexeredifact_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeredifact_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexeredifact_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeredifact_defaultstyle_callback) {
            int callback_ret = qscilexeredifact_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeredifact_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexeredifact_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerEDIFACT::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeredifact_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeredifact_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeredifact_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeredifact_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeredifact_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeredifact_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeredifact_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeredifact_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeredifact_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeredifact_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerEDIFACT::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeredifact_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexeredifact_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeredifact_refreshproperties_callback) {
            qscilexeredifact_refreshproperties_callback(this);
            return;
        }
        QsciLexerEDIFACT::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeredifact_stylebitsneeded_callback) {
            int callback_ret = qscilexeredifact_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerEDIFACT::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeredifact_wordcharacters_callback) {
            const char* callback_ret = qscilexeredifact_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerEDIFACT::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeredifact_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexeredifact_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeredifact_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeredifact_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeredifact_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexeredifact_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeredifact_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexeredifact_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeredifact_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeredifact_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerEDIFACT::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeredifact_readproperties_callback) {
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
            bool callback_ret = qscilexeredifact_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerEDIFACT::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeredifact_writeproperties_callback) {
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
            bool callback_ret = qscilexeredifact_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerEDIFACT::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeredifact_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexeredifact_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerEDIFACT::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeredifact_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexeredifact_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerEDIFACT::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeredifact_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexeredifact_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeredifact_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexeredifact_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeredifact_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexeredifact_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeredifact_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeredifact_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeredifact_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerEDIFACT::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerEDIFACT_SuperReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerEDIFACT_SuperWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerEDIFACT_SuperTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event);
    friend void QsciLexerEDIFACT_SuperChildEvent(QsciLexerEDIFACT* self, QChildEvent* event);
    friend void QsciLexerEDIFACT_SuperCustomEvent(QsciLexerEDIFACT* self, QEvent* event);
    friend void QsciLexerEDIFACT_SuperConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
    friend void QsciLexerEDIFACT_SuperDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal);
};

#endif
