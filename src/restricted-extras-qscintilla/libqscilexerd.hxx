#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERD_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERD_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerD
class VirtualQsciLexerD final : public QsciLexerD {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerD_MetaObject_Callback = QMetaObject* (*)(const QsciLexerD*);
    using QsciLexerD_Metacast_Callback = void* (*)(QsciLexerD*, const char*);
    using QsciLexerD_Metacall_Callback = int (*)(QsciLexerD*, int, int, void**);
    using QsciLexerD_SetFoldAtElse_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_SetFoldComments_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_SetFoldCompact_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_Language_Callback = const char* (*)(const QsciLexerD*);
    using QsciLexerD_Lexer_Callback = const char* (*)(const QsciLexerD*);
    using QsciLexerD_LexerId_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerD*);
    using QsciLexerD_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerD*);
    using QsciLexerD_BlockEnd_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BlockLookback_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_BlockStart_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BlockStartKeyword_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BraceStyle_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_CaseSensitive_Callback = bool (*)(const QsciLexerD*);
    using QsciLexerD_Color_Callback = QColor* (*)(const QsciLexerD*, int);
    using QsciLexerD_EolFill_Callback = bool (*)(const QsciLexerD*, int);
    using QsciLexerD_Font_Callback = QFont* (*)(const QsciLexerD*, int);
    using QsciLexerD_IndentationGuideView_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_Keywords_Callback = const char* (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultStyle_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_Description_Callback = const char* (*)(const QsciLexerD*, int);
    using QsciLexerD_Paper_Callback = QColor* (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultColor2_Callback = QColor* (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultEolFill_Callback = bool (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultFont2_Callback = QFont* (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultPaper2_Callback = QColor* (*)(const QsciLexerD*, int);
    using QsciLexerD_SetEditor_Callback = void (*)(QsciLexerD*, QsciScintilla*);
    using QsciLexerD_RefreshProperties_Callback = void (*)(QsciLexerD*);
    using QsciLexerD_StyleBitsNeeded_Callback = int (*)(const QsciLexerD*);
    using QsciLexerD_WordCharacters_Callback = const char* (*)(const QsciLexerD*);
    using QsciLexerD_SetAutoIndentStyle_Callback = void (*)(QsciLexerD*, int);
    using QsciLexerD_SetColor_Callback = void (*)(QsciLexerD*, QColor*, int);
    using QsciLexerD_SetEolFill_Callback = void (*)(QsciLexerD*, bool, int);
    using QsciLexerD_SetFont_Callback = void (*)(QsciLexerD*, QFont*, int);
    using QsciLexerD_SetPaper_Callback = void (*)(QsciLexerD*, QColor*, int);
    using QsciLexerD_ReadProperties_Callback = bool (*)(QsciLexerD*, QSettings*, const char*);
    using QsciLexerD_WriteProperties_Callback = bool (*)(const QsciLexerD*, QSettings*, const char*);
    using QsciLexerD_Event_Callback = bool (*)(QsciLexerD*, QEvent*);
    using QsciLexerD_EventFilter_Callback = bool (*)(QsciLexerD*, QObject*, QEvent*);
    using QsciLexerD_TimerEvent_Callback = void (*)(QsciLexerD*, QTimerEvent*);
    using QsciLexerD_ChildEvent_Callback = void (*)(QsciLexerD*, QChildEvent*);
    using QsciLexerD_CustomEvent_Callback = void (*)(QsciLexerD*, QEvent*);
    using QsciLexerD_ConnectNotify_Callback = void (*)(QsciLexerD*, QMetaMethod*);
    using QsciLexerD_DisconnectNotify_Callback = void (*)(QsciLexerD*, QMetaMethod*);
    using QsciLexerD::bytesAsText;
    using QsciLexerD::isSignalConnected;
    using QsciLexerD::receivers;
    using QsciLexerD::sender;
    using QsciLexerD::senderSignalIndex;
    using QsciLexerD::textAsBytes;

    // Instance callback storage
    QsciLexerD_MetaObject_Callback qscilexerd_metaobject_callback = nullptr;
    QsciLexerD_Metacast_Callback qscilexerd_metacast_callback = nullptr;
    QsciLexerD_Metacall_Callback qscilexerd_metacall_callback = nullptr;
    QsciLexerD_SetFoldAtElse_Callback qscilexerd_setfoldatelse_callback = nullptr;
    QsciLexerD_SetFoldComments_Callback qscilexerd_setfoldcomments_callback = nullptr;
    QsciLexerD_SetFoldCompact_Callback qscilexerd_setfoldcompact_callback = nullptr;
    QsciLexerD_Language_Callback qscilexerd_language_callback = nullptr;
    QsciLexerD_Lexer_Callback qscilexerd_lexer_callback = nullptr;
    QsciLexerD_LexerId_Callback qscilexerd_lexerid_callback = nullptr;
    QsciLexerD_AutoCompletionFillups_Callback qscilexerd_autocompletionfillups_callback = nullptr;
    QsciLexerD_AutoCompletionWordSeparators_Callback qscilexerd_autocompletionwordseparators_callback = nullptr;
    QsciLexerD_BlockEnd_Callback qscilexerd_blockend_callback = nullptr;
    QsciLexerD_BlockLookback_Callback qscilexerd_blocklookback_callback = nullptr;
    QsciLexerD_BlockStart_Callback qscilexerd_blockstart_callback = nullptr;
    QsciLexerD_BlockStartKeyword_Callback qscilexerd_blockstartkeyword_callback = nullptr;
    QsciLexerD_BraceStyle_Callback qscilexerd_bracestyle_callback = nullptr;
    QsciLexerD_CaseSensitive_Callback qscilexerd_casesensitive_callback = nullptr;
    QsciLexerD_Color_Callback qscilexerd_color_callback = nullptr;
    QsciLexerD_EolFill_Callback qscilexerd_eolfill_callback = nullptr;
    QsciLexerD_Font_Callback qscilexerd_font_callback = nullptr;
    QsciLexerD_IndentationGuideView_Callback qscilexerd_indentationguideview_callback = nullptr;
    QsciLexerD_Keywords_Callback qscilexerd_keywords_callback = nullptr;
    QsciLexerD_DefaultStyle_Callback qscilexerd_defaultstyle_callback = nullptr;
    QsciLexerD_Description_Callback qscilexerd_description_callback = nullptr;
    QsciLexerD_Paper_Callback qscilexerd_paper_callback = nullptr;
    QsciLexerD_DefaultColor2_Callback qscilexerd_defaultcolor2_callback = nullptr;
    QsciLexerD_DefaultEolFill_Callback qscilexerd_defaulteolfill_callback = nullptr;
    QsciLexerD_DefaultFont2_Callback qscilexerd_defaultfont2_callback = nullptr;
    QsciLexerD_DefaultPaper2_Callback qscilexerd_defaultpaper2_callback = nullptr;
    QsciLexerD_SetEditor_Callback qscilexerd_seteditor_callback = nullptr;
    QsciLexerD_RefreshProperties_Callback qscilexerd_refreshproperties_callback = nullptr;
    QsciLexerD_StyleBitsNeeded_Callback qscilexerd_stylebitsneeded_callback = nullptr;
    QsciLexerD_WordCharacters_Callback qscilexerd_wordcharacters_callback = nullptr;
    QsciLexerD_SetAutoIndentStyle_Callback qscilexerd_setautoindentstyle_callback = nullptr;
    QsciLexerD_SetColor_Callback qscilexerd_setcolor_callback = nullptr;
    QsciLexerD_SetEolFill_Callback qscilexerd_seteolfill_callback = nullptr;
    QsciLexerD_SetFont_Callback qscilexerd_setfont_callback = nullptr;
    QsciLexerD_SetPaper_Callback qscilexerd_setpaper_callback = nullptr;
    QsciLexerD_ReadProperties_Callback qscilexerd_readproperties_callback = nullptr;
    QsciLexerD_WriteProperties_Callback qscilexerd_writeproperties_callback = nullptr;
    QsciLexerD_Event_Callback qscilexerd_event_callback = nullptr;
    QsciLexerD_EventFilter_Callback qscilexerd_eventfilter_callback = nullptr;
    QsciLexerD_TimerEvent_Callback qscilexerd_timerevent_callback = nullptr;
    QsciLexerD_ChildEvent_Callback qscilexerd_childevent_callback = nullptr;
    QsciLexerD_CustomEvent_Callback qscilexerd_customevent_callback = nullptr;
    QsciLexerD_ConnectNotify_Callback qscilexerd_connectnotify_callback = nullptr;
    QsciLexerD_DisconnectNotify_Callback qscilexerd_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerD {
        using QsciLexerD::childEvent;
        using QsciLexerD::connectNotify;
        using QsciLexerD::customEvent;
        using QsciLexerD::disconnectNotify;
        using QsciLexerD::readProperties;
        using QsciLexerD::timerEvent;
        using QsciLexerD::writeProperties;
    };

    VirtualQsciLexerD() : QsciLexerD() {};
    VirtualQsciLexerD(QObject* parent) : QsciLexerD(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerd_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerd_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerD::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerd_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerd_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerd_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerd_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerd_setfoldatelse_callback) {
            bool cbval1 = fold;
            qscilexerd_setfoldatelse_callback(this, cbval1);
            return;
        }
        QsciLexerD::setFoldAtElse(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerd_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerd_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerD::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerd_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerd_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerD::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerd_language_callback) {
            const char* callback_ret = qscilexerd_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerD::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerd_lexer_callback) {
            const char* callback_ret = qscilexerd_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerD::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerd_lexerid_callback) {
            int callback_ret = qscilexerd_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerd_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerd_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerD::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerd_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerd_autocompletionwordseparators_callback(this);
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
        return QsciLexerD::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerd_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerd_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerd_blocklookback_callback) {
            int callback_ret = qscilexerd_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerd_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerd_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerd_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerd_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerd_bracestyle_callback) {
            int callback_ret = qscilexerd_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerd_casesensitive_callback) {
            bool callback_ret = qscilexerd_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerD::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerd_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerd_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerd_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerd_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerd_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerd_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerd_indentationguideview_callback) {
            int callback_ret = qscilexerd_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerd_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerd_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerd_defaultstyle_callback) {
            int callback_ret = qscilexerd_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerd_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerd_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerD::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerd_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerd_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerd_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerd_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerd_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerd_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerd_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerd_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerd_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerd_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerD::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerd_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerd_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerD::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerd_refreshproperties_callback) {
            qscilexerd_refreshproperties_callback(this);
            return;
        }
        QsciLexerD::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerd_stylebitsneeded_callback) {
            int callback_ret = qscilexerd_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerD::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerd_wordcharacters_callback) {
            const char* callback_ret = qscilexerd_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerD::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerd_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerd_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerD::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerd_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerd_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerD::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerd_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerd_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerD::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerd_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerd_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerD::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerd_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerd_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerD::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerd_readproperties_callback) {
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
            bool callback_ret = qscilexerd_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerD::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerd_writeproperties_callback) {
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
            bool callback_ret = qscilexerd_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerD::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerd_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerd_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerD::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerd_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerd_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerD::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerd_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerd_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerD::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerd_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerd_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerD::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerd_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerd_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerD::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerd_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerd_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerD::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerd_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerd_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerD::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerD_SuperReadProperties(QsciLexerD* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerD_SuperWriteProperties(const QsciLexerD* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerD_SuperTimerEvent(QsciLexerD* self, QTimerEvent* event);
    friend void QsciLexerD_SuperChildEvent(QsciLexerD* self, QChildEvent* event);
    friend void QsciLexerD_SuperCustomEvent(QsciLexerD* self, QEvent* event);
    friend void QsciLexerD_SuperConnectNotify(QsciLexerD* self, const QMetaMethod* signal);
    friend void QsciLexerD_SuperDisconnectNotify(QsciLexerD* self, const QMetaMethod* signal);
};

#endif
