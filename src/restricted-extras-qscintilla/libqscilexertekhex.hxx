#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEKHEX_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTEKHEX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTekHex
class VirtualQsciLexerTekHex final : public QsciLexerTekHex {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerTekHex_MetaObject_Callback = QMetaObject* (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_Metacast_Callback = void* (*)(QsciLexerTekHex*, const char*);
    using QsciLexerTekHex_Metacall_Callback = int (*)(QsciLexerTekHex*, int, int, void**);
    using QsciLexerTekHex_Language_Callback = const char* (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_Lexer_Callback = const char* (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_LexerId_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_BlockEnd_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BlockLookback_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_BlockStart_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTekHex*, int*);
    using QsciLexerTekHex_BraceStyle_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_CaseSensitive_Callback = bool (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_Color_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_EolFill_Callback = bool (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_Font_Callback = QFont* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_IndentationGuideView_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_Keywords_Callback = const char* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultStyle_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_Description_Callback = const char* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_Paper_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultEolFill_Callback = bool (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerTekHex*, int);
    using QsciLexerTekHex_SetEditor_Callback = void (*)(QsciLexerTekHex*, QsciScintilla*);
    using QsciLexerTekHex_RefreshProperties_Callback = void (*)(QsciLexerTekHex*);
    using QsciLexerTekHex_StyleBitsNeeded_Callback = int (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_WordCharacters_Callback = const char* (*)(const QsciLexerTekHex*);
    using QsciLexerTekHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerTekHex*, int);
    using QsciLexerTekHex_SetColor_Callback = void (*)(QsciLexerTekHex*, QColor*, int);
    using QsciLexerTekHex_SetEolFill_Callback = void (*)(QsciLexerTekHex*, bool, int);
    using QsciLexerTekHex_SetFont_Callback = void (*)(QsciLexerTekHex*, QFont*, int);
    using QsciLexerTekHex_SetPaper_Callback = void (*)(QsciLexerTekHex*, QColor*, int);
    using QsciLexerTekHex_ReadProperties_Callback = bool (*)(QsciLexerTekHex*, QSettings*, const char*);
    using QsciLexerTekHex_WriteProperties_Callback = bool (*)(const QsciLexerTekHex*, QSettings*, const char*);
    using QsciLexerTekHex_Event_Callback = bool (*)(QsciLexerTekHex*, QEvent*);
    using QsciLexerTekHex_EventFilter_Callback = bool (*)(QsciLexerTekHex*, QObject*, QEvent*);
    using QsciLexerTekHex_TimerEvent_Callback = void (*)(QsciLexerTekHex*, QTimerEvent*);
    using QsciLexerTekHex_ChildEvent_Callback = void (*)(QsciLexerTekHex*, QChildEvent*);
    using QsciLexerTekHex_CustomEvent_Callback = void (*)(QsciLexerTekHex*, QEvent*);
    using QsciLexerTekHex_ConnectNotify_Callback = void (*)(QsciLexerTekHex*, QMetaMethod*);
    using QsciLexerTekHex_DisconnectNotify_Callback = void (*)(QsciLexerTekHex*, QMetaMethod*);
    using QsciLexerTekHex::bytesAsText;
    using QsciLexerTekHex::isSignalConnected;
    using QsciLexerTekHex::receivers;
    using QsciLexerTekHex::sender;
    using QsciLexerTekHex::senderSignalIndex;
    using QsciLexerTekHex::textAsBytes;

    // Instance callback storage
    QsciLexerTekHex_MetaObject_Callback qscilexertekhex_metaobject_callback = nullptr;
    QsciLexerTekHex_Metacast_Callback qscilexertekhex_metacast_callback = nullptr;
    QsciLexerTekHex_Metacall_Callback qscilexertekhex_metacall_callback = nullptr;
    QsciLexerTekHex_Language_Callback qscilexertekhex_language_callback = nullptr;
    QsciLexerTekHex_Lexer_Callback qscilexertekhex_lexer_callback = nullptr;
    QsciLexerTekHex_LexerId_Callback qscilexertekhex_lexerid_callback = nullptr;
    QsciLexerTekHex_AutoCompletionFillups_Callback qscilexertekhex_autocompletionfillups_callback = nullptr;
    QsciLexerTekHex_AutoCompletionWordSeparators_Callback qscilexertekhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerTekHex_BlockEnd_Callback qscilexertekhex_blockend_callback = nullptr;
    QsciLexerTekHex_BlockLookback_Callback qscilexertekhex_blocklookback_callback = nullptr;
    QsciLexerTekHex_BlockStart_Callback qscilexertekhex_blockstart_callback = nullptr;
    QsciLexerTekHex_BlockStartKeyword_Callback qscilexertekhex_blockstartkeyword_callback = nullptr;
    QsciLexerTekHex_BraceStyle_Callback qscilexertekhex_bracestyle_callback = nullptr;
    QsciLexerTekHex_CaseSensitive_Callback qscilexertekhex_casesensitive_callback = nullptr;
    QsciLexerTekHex_Color_Callback qscilexertekhex_color_callback = nullptr;
    QsciLexerTekHex_EolFill_Callback qscilexertekhex_eolfill_callback = nullptr;
    QsciLexerTekHex_Font_Callback qscilexertekhex_font_callback = nullptr;
    QsciLexerTekHex_IndentationGuideView_Callback qscilexertekhex_indentationguideview_callback = nullptr;
    QsciLexerTekHex_Keywords_Callback qscilexertekhex_keywords_callback = nullptr;
    QsciLexerTekHex_DefaultStyle_Callback qscilexertekhex_defaultstyle_callback = nullptr;
    QsciLexerTekHex_Description_Callback qscilexertekhex_description_callback = nullptr;
    QsciLexerTekHex_Paper_Callback qscilexertekhex_paper_callback = nullptr;
    QsciLexerTekHex_DefaultColor2_Callback qscilexertekhex_defaultcolor2_callback = nullptr;
    QsciLexerTekHex_DefaultEolFill_Callback qscilexertekhex_defaulteolfill_callback = nullptr;
    QsciLexerTekHex_DefaultFont2_Callback qscilexertekhex_defaultfont2_callback = nullptr;
    QsciLexerTekHex_DefaultPaper2_Callback qscilexertekhex_defaultpaper2_callback = nullptr;
    QsciLexerTekHex_SetEditor_Callback qscilexertekhex_seteditor_callback = nullptr;
    QsciLexerTekHex_RefreshProperties_Callback qscilexertekhex_refreshproperties_callback = nullptr;
    QsciLexerTekHex_StyleBitsNeeded_Callback qscilexertekhex_stylebitsneeded_callback = nullptr;
    QsciLexerTekHex_WordCharacters_Callback qscilexertekhex_wordcharacters_callback = nullptr;
    QsciLexerTekHex_SetAutoIndentStyle_Callback qscilexertekhex_setautoindentstyle_callback = nullptr;
    QsciLexerTekHex_SetColor_Callback qscilexertekhex_setcolor_callback = nullptr;
    QsciLexerTekHex_SetEolFill_Callback qscilexertekhex_seteolfill_callback = nullptr;
    QsciLexerTekHex_SetFont_Callback qscilexertekhex_setfont_callback = nullptr;
    QsciLexerTekHex_SetPaper_Callback qscilexertekhex_setpaper_callback = nullptr;
    QsciLexerTekHex_ReadProperties_Callback qscilexertekhex_readproperties_callback = nullptr;
    QsciLexerTekHex_WriteProperties_Callback qscilexertekhex_writeproperties_callback = nullptr;
    QsciLexerTekHex_Event_Callback qscilexertekhex_event_callback = nullptr;
    QsciLexerTekHex_EventFilter_Callback qscilexertekhex_eventfilter_callback = nullptr;
    QsciLexerTekHex_TimerEvent_Callback qscilexertekhex_timerevent_callback = nullptr;
    QsciLexerTekHex_ChildEvent_Callback qscilexertekhex_childevent_callback = nullptr;
    QsciLexerTekHex_CustomEvent_Callback qscilexertekhex_customevent_callback = nullptr;
    QsciLexerTekHex_ConnectNotify_Callback qscilexertekhex_connectnotify_callback = nullptr;
    QsciLexerTekHex_DisconnectNotify_Callback qscilexertekhex_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerTekHex {
        using QsciLexerTekHex::childEvent;
        using QsciLexerTekHex::connectNotify;
        using QsciLexerTekHex::customEvent;
        using QsciLexerTekHex::disconnectNotify;
        using QsciLexerTekHex::readProperties;
        using QsciLexerTekHex::timerEvent;
        using QsciLexerTekHex::writeProperties;
    };

    VirtualQsciLexerTekHex() : QsciLexerTekHex() {};
    VirtualQsciLexerTekHex(QObject* parent) : QsciLexerTekHex(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexertekhex_metaobject_callback) {
            QMetaObject* callback_ret = qscilexertekhex_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerTekHex::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexertekhex_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexertekhex_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertekhex_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexertekhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertekhex_language_callback) {
            const char* callback_ret = qscilexertekhex_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTekHex::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertekhex_lexer_callback) {
            const char* callback_ret = qscilexertekhex_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerTekHex::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertekhex_lexerid_callback) {
            int callback_ret = qscilexertekhex_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertekhex_autocompletionfillups_callback) {
            const char* callback_ret = qscilexertekhex_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerTekHex::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertekhex_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexertekhex_autocompletionwordseparators_callback(this);
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
        return QsciLexerTekHex::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertekhex_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertekhex_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertekhex_blocklookback_callback) {
            int callback_ret = qscilexertekhex_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertekhex_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertekhex_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertekhex_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertekhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertekhex_bracestyle_callback) {
            int callback_ret = qscilexertekhex_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertekhex_casesensitive_callback) {
            bool callback_ret = qscilexertekhex_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerTekHex::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertekhex_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertekhex_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertekhex_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertekhex_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertekhex_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertekhex_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertekhex_indentationguideview_callback) {
            int callback_ret = qscilexertekhex_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertekhex_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexertekhex_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertekhex_defaultstyle_callback) {
            int callback_ret = qscilexertekhex_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertekhex_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexertekhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTekHex::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertekhex_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertekhex_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertekhex_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertekhex_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertekhex_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertekhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertekhex_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertekhex_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertekhex_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertekhex_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTekHex::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertekhex_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexertekhex_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertekhex_refreshproperties_callback) {
            qscilexertekhex_refreshproperties_callback(this);
            return;
        }
        QsciLexerTekHex::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertekhex_stylebitsneeded_callback) {
            int callback_ret = qscilexertekhex_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTekHex::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertekhex_wordcharacters_callback) {
            const char* callback_ret = qscilexertekhex_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerTekHex::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertekhex_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexertekhex_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertekhex_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertekhex_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTekHex::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertekhex_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexertekhex_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTekHex::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertekhex_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexertekhex_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTekHex::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertekhex_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertekhex_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTekHex::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertekhex_readproperties_callback) {
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
            bool callback_ret = qscilexertekhex_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTekHex::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertekhex_writeproperties_callback) {
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
            bool callback_ret = qscilexertekhex_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTekHex::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertekhex_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexertekhex_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTekHex::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertekhex_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexertekhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerTekHex::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertekhex_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexertekhex_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertekhex_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexertekhex_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertekhex_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexertekhex_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertekhex_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertekhex_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertekhex_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertekhex_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTekHex::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerTekHex_SuperReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTekHex_SuperWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTekHex_SuperTimerEvent(QsciLexerTekHex* self, QTimerEvent* event);
    friend void QsciLexerTekHex_SuperChildEvent(QsciLexerTekHex* self, QChildEvent* event);
    friend void QsciLexerTekHex_SuperCustomEvent(QsciLexerTekHex* self, QEvent* event);
    friend void QsciLexerTekHex_SuperConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
    friend void QsciLexerTekHex_SuperDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal);
};

#endif
