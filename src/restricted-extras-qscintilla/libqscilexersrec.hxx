#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSREC_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERSREC_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerSRec
class VirtualQsciLexerSRec final : public QsciLexerSRec {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerSRec_MetaObject_Callback = QMetaObject* (*)(const QsciLexerSRec*);
    using QsciLexerSRec_Metacast_Callback = void* (*)(QsciLexerSRec*, const char*);
    using QsciLexerSRec_Metacall_Callback = int (*)(QsciLexerSRec*, int, int, void**);
    using QsciLexerSRec_Language_Callback = const char* (*)(const QsciLexerSRec*);
    using QsciLexerSRec_Lexer_Callback = const char* (*)(const QsciLexerSRec*);
    using QsciLexerSRec_LexerId_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerSRec*);
    using QsciLexerSRec_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerSRec*);
    using QsciLexerSRec_BlockEnd_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BlockLookback_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_BlockStart_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BlockStartKeyword_Callback = const char* (*)(const QsciLexerSRec*, int*);
    using QsciLexerSRec_BraceStyle_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_CaseSensitive_Callback = bool (*)(const QsciLexerSRec*);
    using QsciLexerSRec_Color_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_EolFill_Callback = bool (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_Font_Callback = QFont* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_IndentationGuideView_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_Keywords_Callback = const char* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultStyle_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_Description_Callback = const char* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_Paper_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultColor2_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultEolFill_Callback = bool (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultFont2_Callback = QFont* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_DefaultPaper2_Callback = QColor* (*)(const QsciLexerSRec*, int);
    using QsciLexerSRec_SetEditor_Callback = void (*)(QsciLexerSRec*, QsciScintilla*);
    using QsciLexerSRec_RefreshProperties_Callback = void (*)(QsciLexerSRec*);
    using QsciLexerSRec_StyleBitsNeeded_Callback = int (*)(const QsciLexerSRec*);
    using QsciLexerSRec_WordCharacters_Callback = const char* (*)(const QsciLexerSRec*);
    using QsciLexerSRec_SetAutoIndentStyle_Callback = void (*)(QsciLexerSRec*, int);
    using QsciLexerSRec_SetColor_Callback = void (*)(QsciLexerSRec*, QColor*, int);
    using QsciLexerSRec_SetEolFill_Callback = void (*)(QsciLexerSRec*, bool, int);
    using QsciLexerSRec_SetFont_Callback = void (*)(QsciLexerSRec*, QFont*, int);
    using QsciLexerSRec_SetPaper_Callback = void (*)(QsciLexerSRec*, QColor*, int);
    using QsciLexerSRec_ReadProperties_Callback = bool (*)(QsciLexerSRec*, QSettings*, const char*);
    using QsciLexerSRec_WriteProperties_Callback = bool (*)(const QsciLexerSRec*, QSettings*, const char*);
    using QsciLexerSRec_Event_Callback = bool (*)(QsciLexerSRec*, QEvent*);
    using QsciLexerSRec_EventFilter_Callback = bool (*)(QsciLexerSRec*, QObject*, QEvent*);
    using QsciLexerSRec_TimerEvent_Callback = void (*)(QsciLexerSRec*, QTimerEvent*);
    using QsciLexerSRec_ChildEvent_Callback = void (*)(QsciLexerSRec*, QChildEvent*);
    using QsciLexerSRec_CustomEvent_Callback = void (*)(QsciLexerSRec*, QEvent*);
    using QsciLexerSRec_ConnectNotify_Callback = void (*)(QsciLexerSRec*, QMetaMethod*);
    using QsciLexerSRec_DisconnectNotify_Callback = void (*)(QsciLexerSRec*, QMetaMethod*);
    using QsciLexerSRec::bytesAsText;
    using QsciLexerSRec::isSignalConnected;
    using QsciLexerSRec::receivers;
    using QsciLexerSRec::sender;
    using QsciLexerSRec::senderSignalIndex;
    using QsciLexerSRec::textAsBytes;

    // Instance callback storage
    QsciLexerSRec_MetaObject_Callback qscilexersrec_metaobject_callback = nullptr;
    QsciLexerSRec_Metacast_Callback qscilexersrec_metacast_callback = nullptr;
    QsciLexerSRec_Metacall_Callback qscilexersrec_metacall_callback = nullptr;
    QsciLexerSRec_Language_Callback qscilexersrec_language_callback = nullptr;
    QsciLexerSRec_Lexer_Callback qscilexersrec_lexer_callback = nullptr;
    QsciLexerSRec_LexerId_Callback qscilexersrec_lexerid_callback = nullptr;
    QsciLexerSRec_AutoCompletionFillups_Callback qscilexersrec_autocompletionfillups_callback = nullptr;
    QsciLexerSRec_AutoCompletionWordSeparators_Callback qscilexersrec_autocompletionwordseparators_callback = nullptr;
    QsciLexerSRec_BlockEnd_Callback qscilexersrec_blockend_callback = nullptr;
    QsciLexerSRec_BlockLookback_Callback qscilexersrec_blocklookback_callback = nullptr;
    QsciLexerSRec_BlockStart_Callback qscilexersrec_blockstart_callback = nullptr;
    QsciLexerSRec_BlockStartKeyword_Callback qscilexersrec_blockstartkeyword_callback = nullptr;
    QsciLexerSRec_BraceStyle_Callback qscilexersrec_bracestyle_callback = nullptr;
    QsciLexerSRec_CaseSensitive_Callback qscilexersrec_casesensitive_callback = nullptr;
    QsciLexerSRec_Color_Callback qscilexersrec_color_callback = nullptr;
    QsciLexerSRec_EolFill_Callback qscilexersrec_eolfill_callback = nullptr;
    QsciLexerSRec_Font_Callback qscilexersrec_font_callback = nullptr;
    QsciLexerSRec_IndentationGuideView_Callback qscilexersrec_indentationguideview_callback = nullptr;
    QsciLexerSRec_Keywords_Callback qscilexersrec_keywords_callback = nullptr;
    QsciLexerSRec_DefaultStyle_Callback qscilexersrec_defaultstyle_callback = nullptr;
    QsciLexerSRec_Description_Callback qscilexersrec_description_callback = nullptr;
    QsciLexerSRec_Paper_Callback qscilexersrec_paper_callback = nullptr;
    QsciLexerSRec_DefaultColor2_Callback qscilexersrec_defaultcolor2_callback = nullptr;
    QsciLexerSRec_DefaultEolFill_Callback qscilexersrec_defaulteolfill_callback = nullptr;
    QsciLexerSRec_DefaultFont2_Callback qscilexersrec_defaultfont2_callback = nullptr;
    QsciLexerSRec_DefaultPaper2_Callback qscilexersrec_defaultpaper2_callback = nullptr;
    QsciLexerSRec_SetEditor_Callback qscilexersrec_seteditor_callback = nullptr;
    QsciLexerSRec_RefreshProperties_Callback qscilexersrec_refreshproperties_callback = nullptr;
    QsciLexerSRec_StyleBitsNeeded_Callback qscilexersrec_stylebitsneeded_callback = nullptr;
    QsciLexerSRec_WordCharacters_Callback qscilexersrec_wordcharacters_callback = nullptr;
    QsciLexerSRec_SetAutoIndentStyle_Callback qscilexersrec_setautoindentstyle_callback = nullptr;
    QsciLexerSRec_SetColor_Callback qscilexersrec_setcolor_callback = nullptr;
    QsciLexerSRec_SetEolFill_Callback qscilexersrec_seteolfill_callback = nullptr;
    QsciLexerSRec_SetFont_Callback qscilexersrec_setfont_callback = nullptr;
    QsciLexerSRec_SetPaper_Callback qscilexersrec_setpaper_callback = nullptr;
    QsciLexerSRec_ReadProperties_Callback qscilexersrec_readproperties_callback = nullptr;
    QsciLexerSRec_WriteProperties_Callback qscilexersrec_writeproperties_callback = nullptr;
    QsciLexerSRec_Event_Callback qscilexersrec_event_callback = nullptr;
    QsciLexerSRec_EventFilter_Callback qscilexersrec_eventfilter_callback = nullptr;
    QsciLexerSRec_TimerEvent_Callback qscilexersrec_timerevent_callback = nullptr;
    QsciLexerSRec_ChildEvent_Callback qscilexersrec_childevent_callback = nullptr;
    QsciLexerSRec_CustomEvent_Callback qscilexersrec_customevent_callback = nullptr;
    QsciLexerSRec_ConnectNotify_Callback qscilexersrec_connectnotify_callback = nullptr;
    QsciLexerSRec_DisconnectNotify_Callback qscilexersrec_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerSRec {
        using QsciLexerSRec::childEvent;
        using QsciLexerSRec::connectNotify;
        using QsciLexerSRec::customEvent;
        using QsciLexerSRec::disconnectNotify;
        using QsciLexerSRec::readProperties;
        using QsciLexerSRec::timerEvent;
        using QsciLexerSRec::writeProperties;
    };

    VirtualQsciLexerSRec() : QsciLexerSRec() {};
    VirtualQsciLexerSRec(QObject* parent) : QsciLexerSRec(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexersrec_metaobject_callback) {
            QMetaObject* callback_ret = qscilexersrec_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerSRec::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexersrec_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexersrec_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexersrec_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexersrec_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexersrec_language_callback) {
            const char* callback_ret = qscilexersrec_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSRec::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexersrec_lexer_callback) {
            const char* callback_ret = qscilexersrec_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerSRec::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexersrec_lexerid_callback) {
            int callback_ret = qscilexersrec_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexersrec_autocompletionfillups_callback) {
            const char* callback_ret = qscilexersrec_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerSRec::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexersrec_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexersrec_autocompletionwordseparators_callback(this);
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
        return QsciLexerSRec::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexersrec_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersrec_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexersrec_blocklookback_callback) {
            int callback_ret = qscilexersrec_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexersrec_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersrec_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexersrec_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexersrec_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexersrec_bracestyle_callback) {
            int callback_ret = qscilexersrec_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexersrec_casesensitive_callback) {
            bool callback_ret = qscilexersrec_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerSRec::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexersrec_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersrec_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexersrec_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexersrec_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexersrec_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexersrec_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexersrec_indentationguideview_callback) {
            int callback_ret = qscilexersrec_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexersrec_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexersrec_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexersrec_defaultstyle_callback) {
            int callback_ret = qscilexersrec_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexersrec_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexersrec_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerSRec::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexersrec_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersrec_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexersrec_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersrec_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexersrec_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexersrec_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexersrec_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexersrec_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexersrec_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexersrec_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerSRec::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexersrec_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexersrec_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexersrec_refreshproperties_callback) {
            qscilexersrec_refreshproperties_callback(this);
            return;
        }
        QsciLexerSRec::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexersrec_stylebitsneeded_callback) {
            int callback_ret = qscilexersrec_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerSRec::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexersrec_wordcharacters_callback) {
            const char* callback_ret = qscilexersrec_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerSRec::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexersrec_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexersrec_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexersrec_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexersrec_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSRec::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexersrec_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexersrec_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSRec::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexersrec_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexersrec_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSRec::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexersrec_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexersrec_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerSRec::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexersrec_readproperties_callback) {
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
            bool callback_ret = qscilexersrec_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSRec::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexersrec_writeproperties_callback) {
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
            bool callback_ret = qscilexersrec_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerSRec::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexersrec_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexersrec_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerSRec::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexersrec_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexersrec_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerSRec::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexersrec_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexersrec_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexersrec_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexersrec_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexersrec_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexersrec_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexersrec_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexersrec_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexersrec_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexersrec_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerSRec::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerSRec_SuperReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerSRec_SuperWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerSRec_SuperTimerEvent(QsciLexerSRec* self, QTimerEvent* event);
    friend void QsciLexerSRec_SuperChildEvent(QsciLexerSRec* self, QChildEvent* event);
    friend void QsciLexerSRec_SuperCustomEvent(QsciLexerSRec* self, QEvent* event);
    friend void QsciLexerSRec_SuperConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
    friend void QsciLexerSRec_SuperDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal);
};

#endif
