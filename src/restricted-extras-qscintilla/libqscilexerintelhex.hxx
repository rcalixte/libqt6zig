#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERINTELHEX_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERINTELHEX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerIntelHex
class VirtualQsciLexerIntelHex final : public QsciLexerIntelHex {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerIntelHex_MetaObject_Callback = QMetaObject* (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_Metacast_Callback = void* (*)(QsciLexerIntelHex*, const char*);
    using QsciLexerIntelHex_Metacall_Callback = int (*)(QsciLexerIntelHex*, int, int, void**);
    using QsciLexerIntelHex_Language_Callback = const char* (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_Lexer_Callback = const char* (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_LexerId_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_BlockEnd_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BlockLookback_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_BlockStart_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BlockStartKeyword_Callback = const char* (*)(const QsciLexerIntelHex*, int*);
    using QsciLexerIntelHex_BraceStyle_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_CaseSensitive_Callback = bool (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_Color_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_EolFill_Callback = bool (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_Font_Callback = QFont* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_IndentationGuideView_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_Keywords_Callback = const char* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultStyle_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_Description_Callback = const char* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_Paper_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultColor2_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultEolFill_Callback = bool (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultFont2_Callback = QFont* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_DefaultPaper2_Callback = QColor* (*)(const QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_SetEditor_Callback = void (*)(QsciLexerIntelHex*, QsciScintilla*);
    using QsciLexerIntelHex_RefreshProperties_Callback = void (*)(QsciLexerIntelHex*);
    using QsciLexerIntelHex_StyleBitsNeeded_Callback = int (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_WordCharacters_Callback = const char* (*)(const QsciLexerIntelHex*);
    using QsciLexerIntelHex_SetAutoIndentStyle_Callback = void (*)(QsciLexerIntelHex*, int);
    using QsciLexerIntelHex_SetColor_Callback = void (*)(QsciLexerIntelHex*, QColor*, int);
    using QsciLexerIntelHex_SetEolFill_Callback = void (*)(QsciLexerIntelHex*, bool, int);
    using QsciLexerIntelHex_SetFont_Callback = void (*)(QsciLexerIntelHex*, QFont*, int);
    using QsciLexerIntelHex_SetPaper_Callback = void (*)(QsciLexerIntelHex*, QColor*, int);
    using QsciLexerIntelHex_ReadProperties_Callback = bool (*)(QsciLexerIntelHex*, QSettings*, const char*);
    using QsciLexerIntelHex_WriteProperties_Callback = bool (*)(const QsciLexerIntelHex*, QSettings*, const char*);
    using QsciLexerIntelHex_Event_Callback = bool (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_EventFilter_Callback = bool (*)(QsciLexerIntelHex*, QObject*, QEvent*);
    using QsciLexerIntelHex_TimerEvent_Callback = void (*)(QsciLexerIntelHex*, QTimerEvent*);
    using QsciLexerIntelHex_ChildEvent_Callback = void (*)(QsciLexerIntelHex*, QChildEvent*);
    using QsciLexerIntelHex_CustomEvent_Callback = void (*)(QsciLexerIntelHex*, QEvent*);
    using QsciLexerIntelHex_ConnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex_DisconnectNotify_Callback = void (*)(QsciLexerIntelHex*, QMetaMethod*);
    using QsciLexerIntelHex::bytesAsText;
    using QsciLexerIntelHex::isSignalConnected;
    using QsciLexerIntelHex::receivers;
    using QsciLexerIntelHex::sender;
    using QsciLexerIntelHex::senderSignalIndex;
    using QsciLexerIntelHex::textAsBytes;

    // Instance callback storage
    QsciLexerIntelHex_MetaObject_Callback qscilexerintelhex_metaobject_callback = nullptr;
    QsciLexerIntelHex_Metacast_Callback qscilexerintelhex_metacast_callback = nullptr;
    QsciLexerIntelHex_Metacall_Callback qscilexerintelhex_metacall_callback = nullptr;
    QsciLexerIntelHex_Language_Callback qscilexerintelhex_language_callback = nullptr;
    QsciLexerIntelHex_Lexer_Callback qscilexerintelhex_lexer_callback = nullptr;
    QsciLexerIntelHex_LexerId_Callback qscilexerintelhex_lexerid_callback = nullptr;
    QsciLexerIntelHex_AutoCompletionFillups_Callback qscilexerintelhex_autocompletionfillups_callback = nullptr;
    QsciLexerIntelHex_AutoCompletionWordSeparators_Callback qscilexerintelhex_autocompletionwordseparators_callback = nullptr;
    QsciLexerIntelHex_BlockEnd_Callback qscilexerintelhex_blockend_callback = nullptr;
    QsciLexerIntelHex_BlockLookback_Callback qscilexerintelhex_blocklookback_callback = nullptr;
    QsciLexerIntelHex_BlockStart_Callback qscilexerintelhex_blockstart_callback = nullptr;
    QsciLexerIntelHex_BlockStartKeyword_Callback qscilexerintelhex_blockstartkeyword_callback = nullptr;
    QsciLexerIntelHex_BraceStyle_Callback qscilexerintelhex_bracestyle_callback = nullptr;
    QsciLexerIntelHex_CaseSensitive_Callback qscilexerintelhex_casesensitive_callback = nullptr;
    QsciLexerIntelHex_Color_Callback qscilexerintelhex_color_callback = nullptr;
    QsciLexerIntelHex_EolFill_Callback qscilexerintelhex_eolfill_callback = nullptr;
    QsciLexerIntelHex_Font_Callback qscilexerintelhex_font_callback = nullptr;
    QsciLexerIntelHex_IndentationGuideView_Callback qscilexerintelhex_indentationguideview_callback = nullptr;
    QsciLexerIntelHex_Keywords_Callback qscilexerintelhex_keywords_callback = nullptr;
    QsciLexerIntelHex_DefaultStyle_Callback qscilexerintelhex_defaultstyle_callback = nullptr;
    QsciLexerIntelHex_Description_Callback qscilexerintelhex_description_callback = nullptr;
    QsciLexerIntelHex_Paper_Callback qscilexerintelhex_paper_callback = nullptr;
    QsciLexerIntelHex_DefaultColor2_Callback qscilexerintelhex_defaultcolor2_callback = nullptr;
    QsciLexerIntelHex_DefaultEolFill_Callback qscilexerintelhex_defaulteolfill_callback = nullptr;
    QsciLexerIntelHex_DefaultFont2_Callback qscilexerintelhex_defaultfont2_callback = nullptr;
    QsciLexerIntelHex_DefaultPaper2_Callback qscilexerintelhex_defaultpaper2_callback = nullptr;
    QsciLexerIntelHex_SetEditor_Callback qscilexerintelhex_seteditor_callback = nullptr;
    QsciLexerIntelHex_RefreshProperties_Callback qscilexerintelhex_refreshproperties_callback = nullptr;
    QsciLexerIntelHex_StyleBitsNeeded_Callback qscilexerintelhex_stylebitsneeded_callback = nullptr;
    QsciLexerIntelHex_WordCharacters_Callback qscilexerintelhex_wordcharacters_callback = nullptr;
    QsciLexerIntelHex_SetAutoIndentStyle_Callback qscilexerintelhex_setautoindentstyle_callback = nullptr;
    QsciLexerIntelHex_SetColor_Callback qscilexerintelhex_setcolor_callback = nullptr;
    QsciLexerIntelHex_SetEolFill_Callback qscilexerintelhex_seteolfill_callback = nullptr;
    QsciLexerIntelHex_SetFont_Callback qscilexerintelhex_setfont_callback = nullptr;
    QsciLexerIntelHex_SetPaper_Callback qscilexerintelhex_setpaper_callback = nullptr;
    QsciLexerIntelHex_ReadProperties_Callback qscilexerintelhex_readproperties_callback = nullptr;
    QsciLexerIntelHex_WriteProperties_Callback qscilexerintelhex_writeproperties_callback = nullptr;
    QsciLexerIntelHex_Event_Callback qscilexerintelhex_event_callback = nullptr;
    QsciLexerIntelHex_EventFilter_Callback qscilexerintelhex_eventfilter_callback = nullptr;
    QsciLexerIntelHex_TimerEvent_Callback qscilexerintelhex_timerevent_callback = nullptr;
    QsciLexerIntelHex_ChildEvent_Callback qscilexerintelhex_childevent_callback = nullptr;
    QsciLexerIntelHex_CustomEvent_Callback qscilexerintelhex_customevent_callback = nullptr;
    QsciLexerIntelHex_ConnectNotify_Callback qscilexerintelhex_connectnotify_callback = nullptr;
    QsciLexerIntelHex_DisconnectNotify_Callback qscilexerintelhex_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerIntelHex {
        using QsciLexerIntelHex::childEvent;
        using QsciLexerIntelHex::connectNotify;
        using QsciLexerIntelHex::customEvent;
        using QsciLexerIntelHex::disconnectNotify;
        using QsciLexerIntelHex::readProperties;
        using QsciLexerIntelHex::timerEvent;
        using QsciLexerIntelHex::writeProperties;
    };

    VirtualQsciLexerIntelHex() : QsciLexerIntelHex() {};
    VirtualQsciLexerIntelHex(QObject* parent) : QsciLexerIntelHex(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerintelhex_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerintelhex_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerIntelHex::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerintelhex_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerintelhex_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerintelhex_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerintelhex_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerintelhex_language_callback) {
            const char* callback_ret = qscilexerintelhex_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerIntelHex::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerintelhex_lexer_callback) {
            const char* callback_ret = qscilexerintelhex_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerIntelHex::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerintelhex_lexerid_callback) {
            int callback_ret = qscilexerintelhex_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerintelhex_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerintelhex_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerIntelHex::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerintelhex_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerintelhex_autocompletionwordseparators_callback(this);
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
        return QsciLexerIntelHex::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerintelhex_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerintelhex_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerintelhex_blocklookback_callback) {
            int callback_ret = qscilexerintelhex_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerintelhex_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerintelhex_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerintelhex_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerintelhex_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerintelhex_bracestyle_callback) {
            int callback_ret = qscilexerintelhex_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerintelhex_casesensitive_callback) {
            bool callback_ret = qscilexerintelhex_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerIntelHex::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerintelhex_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerintelhex_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerintelhex_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerintelhex_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerintelhex_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerintelhex_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerintelhex_indentationguideview_callback) {
            int callback_ret = qscilexerintelhex_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerintelhex_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerintelhex_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerintelhex_defaultstyle_callback) {
            int callback_ret = qscilexerintelhex_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerintelhex_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerintelhex_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerIntelHex::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerintelhex_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerintelhex_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerintelhex_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerintelhex_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerintelhex_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerintelhex_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerintelhex_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerintelhex_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerintelhex_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerintelhex_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerIntelHex::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerintelhex_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerintelhex_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerintelhex_refreshproperties_callback) {
            qscilexerintelhex_refreshproperties_callback(this);
            return;
        }
        QsciLexerIntelHex::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerintelhex_stylebitsneeded_callback) {
            int callback_ret = qscilexerintelhex_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerIntelHex::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerintelhex_wordcharacters_callback) {
            const char* callback_ret = qscilexerintelhex_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerIntelHex::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerintelhex_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerintelhex_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerintelhex_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerintelhex_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerintelhex_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerintelhex_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerintelhex_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerintelhex_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerintelhex_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerintelhex_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerIntelHex::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerintelhex_readproperties_callback) {
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
            bool callback_ret = qscilexerintelhex_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerIntelHex::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerintelhex_writeproperties_callback) {
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
            bool callback_ret = qscilexerintelhex_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerIntelHex::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerintelhex_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerintelhex_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerIntelHex::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerintelhex_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerintelhex_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerIntelHex::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerintelhex_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerintelhex_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerintelhex_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerintelhex_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerintelhex_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerintelhex_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerintelhex_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerintelhex_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerintelhex_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerIntelHex::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerIntelHex_SuperReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerIntelHex_SuperWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerIntelHex_SuperTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event);
    friend void QsciLexerIntelHex_SuperChildEvent(QsciLexerIntelHex* self, QChildEvent* event);
    friend void QsciLexerIntelHex_SuperCustomEvent(QsciLexerIntelHex* self, QEvent* event);
    friend void QsciLexerIntelHex_SuperConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
    friend void QsciLexerIntelHex_SuperDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal);
};

#endif
