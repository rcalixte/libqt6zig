#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEROCTAVE_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXEROCTAVE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerOctave
class VirtualQsciLexerOctave final : public QsciLexerOctave {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerOctave_MetaObject_Callback = QMetaObject* (*)(const QsciLexerOctave*);
    using QsciLexerOctave_Metacast_Callback = void* (*)(QsciLexerOctave*, const char*);
    using QsciLexerOctave_Metacall_Callback = int (*)(QsciLexerOctave*, int, int, void**);
    using QsciLexerOctave_Language_Callback = const char* (*)(const QsciLexerOctave*);
    using QsciLexerOctave_Lexer_Callback = const char* (*)(const QsciLexerOctave*);
    using QsciLexerOctave_LexerId_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerOctave*);
    using QsciLexerOctave_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerOctave*);
    using QsciLexerOctave_BlockEnd_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BlockLookback_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_BlockStart_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BlockStartKeyword_Callback = const char* (*)(const QsciLexerOctave*, int*);
    using QsciLexerOctave_BraceStyle_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_CaseSensitive_Callback = bool (*)(const QsciLexerOctave*);
    using QsciLexerOctave_Color_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_EolFill_Callback = bool (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_Font_Callback = QFont* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_IndentationGuideView_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_Keywords_Callback = const char* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultStyle_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_Description_Callback = const char* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_Paper_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultColor2_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultEolFill_Callback = bool (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultFont2_Callback = QFont* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_DefaultPaper2_Callback = QColor* (*)(const QsciLexerOctave*, int);
    using QsciLexerOctave_SetEditor_Callback = void (*)(QsciLexerOctave*, QsciScintilla*);
    using QsciLexerOctave_RefreshProperties_Callback = void (*)(QsciLexerOctave*);
    using QsciLexerOctave_StyleBitsNeeded_Callback = int (*)(const QsciLexerOctave*);
    using QsciLexerOctave_WordCharacters_Callback = const char* (*)(const QsciLexerOctave*);
    using QsciLexerOctave_SetAutoIndentStyle_Callback = void (*)(QsciLexerOctave*, int);
    using QsciLexerOctave_SetColor_Callback = void (*)(QsciLexerOctave*, QColor*, int);
    using QsciLexerOctave_SetEolFill_Callback = void (*)(QsciLexerOctave*, bool, int);
    using QsciLexerOctave_SetFont_Callback = void (*)(QsciLexerOctave*, QFont*, int);
    using QsciLexerOctave_SetPaper_Callback = void (*)(QsciLexerOctave*, QColor*, int);
    using QsciLexerOctave_ReadProperties_Callback = bool (*)(QsciLexerOctave*, QSettings*, const char*);
    using QsciLexerOctave_WriteProperties_Callback = bool (*)(const QsciLexerOctave*, QSettings*, const char*);
    using QsciLexerOctave_Event_Callback = bool (*)(QsciLexerOctave*, QEvent*);
    using QsciLexerOctave_EventFilter_Callback = bool (*)(QsciLexerOctave*, QObject*, QEvent*);
    using QsciLexerOctave_TimerEvent_Callback = void (*)(QsciLexerOctave*, QTimerEvent*);
    using QsciLexerOctave_ChildEvent_Callback = void (*)(QsciLexerOctave*, QChildEvent*);
    using QsciLexerOctave_CustomEvent_Callback = void (*)(QsciLexerOctave*, QEvent*);
    using QsciLexerOctave_ConnectNotify_Callback = void (*)(QsciLexerOctave*, QMetaMethod*);
    using QsciLexerOctave_DisconnectNotify_Callback = void (*)(QsciLexerOctave*, QMetaMethod*);
    using QsciLexerOctave::bytesAsText;
    using QsciLexerOctave::isSignalConnected;
    using QsciLexerOctave::receivers;
    using QsciLexerOctave::sender;
    using QsciLexerOctave::senderSignalIndex;
    using QsciLexerOctave::textAsBytes;

    // Instance callback storage
    QsciLexerOctave_MetaObject_Callback qscilexeroctave_metaobject_callback = nullptr;
    QsciLexerOctave_Metacast_Callback qscilexeroctave_metacast_callback = nullptr;
    QsciLexerOctave_Metacall_Callback qscilexeroctave_metacall_callback = nullptr;
    QsciLexerOctave_Language_Callback qscilexeroctave_language_callback = nullptr;
    QsciLexerOctave_Lexer_Callback qscilexeroctave_lexer_callback = nullptr;
    QsciLexerOctave_LexerId_Callback qscilexeroctave_lexerid_callback = nullptr;
    QsciLexerOctave_AutoCompletionFillups_Callback qscilexeroctave_autocompletionfillups_callback = nullptr;
    QsciLexerOctave_AutoCompletionWordSeparators_Callback qscilexeroctave_autocompletionwordseparators_callback = nullptr;
    QsciLexerOctave_BlockEnd_Callback qscilexeroctave_blockend_callback = nullptr;
    QsciLexerOctave_BlockLookback_Callback qscilexeroctave_blocklookback_callback = nullptr;
    QsciLexerOctave_BlockStart_Callback qscilexeroctave_blockstart_callback = nullptr;
    QsciLexerOctave_BlockStartKeyword_Callback qscilexeroctave_blockstartkeyword_callback = nullptr;
    QsciLexerOctave_BraceStyle_Callback qscilexeroctave_bracestyle_callback = nullptr;
    QsciLexerOctave_CaseSensitive_Callback qscilexeroctave_casesensitive_callback = nullptr;
    QsciLexerOctave_Color_Callback qscilexeroctave_color_callback = nullptr;
    QsciLexerOctave_EolFill_Callback qscilexeroctave_eolfill_callback = nullptr;
    QsciLexerOctave_Font_Callback qscilexeroctave_font_callback = nullptr;
    QsciLexerOctave_IndentationGuideView_Callback qscilexeroctave_indentationguideview_callback = nullptr;
    QsciLexerOctave_Keywords_Callback qscilexeroctave_keywords_callback = nullptr;
    QsciLexerOctave_DefaultStyle_Callback qscilexeroctave_defaultstyle_callback = nullptr;
    QsciLexerOctave_Description_Callback qscilexeroctave_description_callback = nullptr;
    QsciLexerOctave_Paper_Callback qscilexeroctave_paper_callback = nullptr;
    QsciLexerOctave_DefaultColor2_Callback qscilexeroctave_defaultcolor2_callback = nullptr;
    QsciLexerOctave_DefaultEolFill_Callback qscilexeroctave_defaulteolfill_callback = nullptr;
    QsciLexerOctave_DefaultFont2_Callback qscilexeroctave_defaultfont2_callback = nullptr;
    QsciLexerOctave_DefaultPaper2_Callback qscilexeroctave_defaultpaper2_callback = nullptr;
    QsciLexerOctave_SetEditor_Callback qscilexeroctave_seteditor_callback = nullptr;
    QsciLexerOctave_RefreshProperties_Callback qscilexeroctave_refreshproperties_callback = nullptr;
    QsciLexerOctave_StyleBitsNeeded_Callback qscilexeroctave_stylebitsneeded_callback = nullptr;
    QsciLexerOctave_WordCharacters_Callback qscilexeroctave_wordcharacters_callback = nullptr;
    QsciLexerOctave_SetAutoIndentStyle_Callback qscilexeroctave_setautoindentstyle_callback = nullptr;
    QsciLexerOctave_SetColor_Callback qscilexeroctave_setcolor_callback = nullptr;
    QsciLexerOctave_SetEolFill_Callback qscilexeroctave_seteolfill_callback = nullptr;
    QsciLexerOctave_SetFont_Callback qscilexeroctave_setfont_callback = nullptr;
    QsciLexerOctave_SetPaper_Callback qscilexeroctave_setpaper_callback = nullptr;
    QsciLexerOctave_ReadProperties_Callback qscilexeroctave_readproperties_callback = nullptr;
    QsciLexerOctave_WriteProperties_Callback qscilexeroctave_writeproperties_callback = nullptr;
    QsciLexerOctave_Event_Callback qscilexeroctave_event_callback = nullptr;
    QsciLexerOctave_EventFilter_Callback qscilexeroctave_eventfilter_callback = nullptr;
    QsciLexerOctave_TimerEvent_Callback qscilexeroctave_timerevent_callback = nullptr;
    QsciLexerOctave_ChildEvent_Callback qscilexeroctave_childevent_callback = nullptr;
    QsciLexerOctave_CustomEvent_Callback qscilexeroctave_customevent_callback = nullptr;
    QsciLexerOctave_ConnectNotify_Callback qscilexeroctave_connectnotify_callback = nullptr;
    QsciLexerOctave_DisconnectNotify_Callback qscilexeroctave_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerOctave {
        using QsciLexerOctave::childEvent;
        using QsciLexerOctave::connectNotify;
        using QsciLexerOctave::customEvent;
        using QsciLexerOctave::disconnectNotify;
        using QsciLexerOctave::readProperties;
        using QsciLexerOctave::timerEvent;
        using QsciLexerOctave::writeProperties;
    };

    VirtualQsciLexerOctave() : QsciLexerOctave() {};
    VirtualQsciLexerOctave(QObject* parent) : QsciLexerOctave(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeroctave_metaobject_callback) {
            QMetaObject* callback_ret = qscilexeroctave_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerOctave::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeroctave_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexeroctave_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeroctave_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexeroctave_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeroctave_language_callback) {
            const char* callback_ret = qscilexeroctave_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerOctave::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeroctave_lexer_callback) {
            const char* callback_ret = qscilexeroctave_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerOctave::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeroctave_lexerid_callback) {
            int callback_ret = qscilexeroctave_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeroctave_autocompletionfillups_callback) {
            const char* callback_ret = qscilexeroctave_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerOctave::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeroctave_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexeroctave_autocompletionwordseparators_callback(this);
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
        return QsciLexerOctave::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeroctave_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeroctave_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeroctave_blocklookback_callback) {
            int callback_ret = qscilexeroctave_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeroctave_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeroctave_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeroctave_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeroctave_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeroctave_bracestyle_callback) {
            int callback_ret = qscilexeroctave_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeroctave_casesensitive_callback) {
            bool callback_ret = qscilexeroctave_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerOctave::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeroctave_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeroctave_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeroctave_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeroctave_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeroctave_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeroctave_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeroctave_indentationguideview_callback) {
            int callback_ret = qscilexeroctave_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeroctave_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexeroctave_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeroctave_defaultstyle_callback) {
            int callback_ret = qscilexeroctave_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeroctave_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexeroctave_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerOctave::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeroctave_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeroctave_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeroctave_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeroctave_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeroctave_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeroctave_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeroctave_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeroctave_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeroctave_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeroctave_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerOctave::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeroctave_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexeroctave_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeroctave_refreshproperties_callback) {
            qscilexeroctave_refreshproperties_callback(this);
            return;
        }
        QsciLexerOctave::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeroctave_stylebitsneeded_callback) {
            int callback_ret = qscilexeroctave_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerOctave::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeroctave_wordcharacters_callback) {
            const char* callback_ret = qscilexeroctave_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerOctave::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeroctave_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexeroctave_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeroctave_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeroctave_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeroctave_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexeroctave_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeroctave_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexeroctave_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeroctave_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeroctave_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerOctave::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeroctave_readproperties_callback) {
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
            bool callback_ret = qscilexeroctave_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerOctave::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeroctave_writeproperties_callback) {
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
            bool callback_ret = qscilexeroctave_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerOctave::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeroctave_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexeroctave_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerOctave::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeroctave_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexeroctave_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerOctave::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeroctave_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexeroctave_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeroctave_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexeroctave_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeroctave_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexeroctave_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeroctave_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeroctave_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeroctave_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeroctave_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerOctave::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerOctave_SuperReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerOctave_SuperWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerOctave_SuperTimerEvent(QsciLexerOctave* self, QTimerEvent* event);
    friend void QsciLexerOctave_SuperChildEvent(QsciLexerOctave* self, QChildEvent* event);
    friend void QsciLexerOctave_SuperCustomEvent(QsciLexerOctave* self, QEvent* event);
    friend void QsciLexerOctave_SuperConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
    friend void QsciLexerOctave_SuperDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal);
};

#endif
