#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTCL_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERTCL_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerTCL
class VirtualQsciLexerTCL final : public QsciLexerTCL {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerTCL_MetaObject_Callback = QMetaObject* (*)(const QsciLexerTCL*);
    using QsciLexerTCL_Metacast_Callback = void* (*)(QsciLexerTCL*, const char*);
    using QsciLexerTCL_Metacall_Callback = int (*)(QsciLexerTCL*, int, int, void**);
    using QsciLexerTCL_Language_Callback = const char* (*)(const QsciLexerTCL*);
    using QsciLexerTCL_Lexer_Callback = const char* (*)(const QsciLexerTCL*);
    using QsciLexerTCL_LexerId_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerTCL*);
    using QsciLexerTCL_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerTCL*);
    using QsciLexerTCL_BlockEnd_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BlockLookback_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_BlockStart_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerTCL*, int*);
    using QsciLexerTCL_BraceStyle_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_CaseSensitive_Callback = bool (*)(const QsciLexerTCL*);
    using QsciLexerTCL_Color_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_EolFill_Callback = bool (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_Font_Callback = QFont* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_IndentationGuideView_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_Keywords_Callback = const char* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultStyle_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_Description_Callback = const char* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_Paper_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultColor2_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultEolFill_Callback = bool (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultFont2_Callback = QFont* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_DefaultPaper2_Callback = QColor* (*)(const QsciLexerTCL*, int);
    using QsciLexerTCL_SetEditor_Callback = void (*)(QsciLexerTCL*, QsciScintilla*);
    using QsciLexerTCL_RefreshProperties_Callback = void (*)(QsciLexerTCL*);
    using QsciLexerTCL_StyleBitsNeeded_Callback = int (*)(const QsciLexerTCL*);
    using QsciLexerTCL_WordCharacters_Callback = const char* (*)(const QsciLexerTCL*);
    using QsciLexerTCL_SetAutoIndentStyle_Callback = void (*)(QsciLexerTCL*, int);
    using QsciLexerTCL_SetColor_Callback = void (*)(QsciLexerTCL*, QColor*, int);
    using QsciLexerTCL_SetEolFill_Callback = void (*)(QsciLexerTCL*, bool, int);
    using QsciLexerTCL_SetFont_Callback = void (*)(QsciLexerTCL*, QFont*, int);
    using QsciLexerTCL_SetPaper_Callback = void (*)(QsciLexerTCL*, QColor*, int);
    using QsciLexerTCL_ReadProperties_Callback = bool (*)(QsciLexerTCL*, QSettings*, const char*);
    using QsciLexerTCL_WriteProperties_Callback = bool (*)(const QsciLexerTCL*, QSettings*, const char*);
    using QsciLexerTCL_Event_Callback = bool (*)(QsciLexerTCL*, QEvent*);
    using QsciLexerTCL_EventFilter_Callback = bool (*)(QsciLexerTCL*, QObject*, QEvent*);
    using QsciLexerTCL_TimerEvent_Callback = void (*)(QsciLexerTCL*, QTimerEvent*);
    using QsciLexerTCL_ChildEvent_Callback = void (*)(QsciLexerTCL*, QChildEvent*);
    using QsciLexerTCL_CustomEvent_Callback = void (*)(QsciLexerTCL*, QEvent*);
    using QsciLexerTCL_ConnectNotify_Callback = void (*)(QsciLexerTCL*, QMetaMethod*);
    using QsciLexerTCL_DisconnectNotify_Callback = void (*)(QsciLexerTCL*, QMetaMethod*);
    using QsciLexerTCL::bytesAsText;
    using QsciLexerTCL::isSignalConnected;
    using QsciLexerTCL::receivers;
    using QsciLexerTCL::sender;
    using QsciLexerTCL::senderSignalIndex;
    using QsciLexerTCL::textAsBytes;

    // Instance callback storage
    QsciLexerTCL_MetaObject_Callback qscilexertcl_metaobject_callback = nullptr;
    QsciLexerTCL_Metacast_Callback qscilexertcl_metacast_callback = nullptr;
    QsciLexerTCL_Metacall_Callback qscilexertcl_metacall_callback = nullptr;
    QsciLexerTCL_Language_Callback qscilexertcl_language_callback = nullptr;
    QsciLexerTCL_Lexer_Callback qscilexertcl_lexer_callback = nullptr;
    QsciLexerTCL_LexerId_Callback qscilexertcl_lexerid_callback = nullptr;
    QsciLexerTCL_AutoCompletionFillups_Callback qscilexertcl_autocompletionfillups_callback = nullptr;
    QsciLexerTCL_AutoCompletionWordSeparators_Callback qscilexertcl_autocompletionwordseparators_callback = nullptr;
    QsciLexerTCL_BlockEnd_Callback qscilexertcl_blockend_callback = nullptr;
    QsciLexerTCL_BlockLookback_Callback qscilexertcl_blocklookback_callback = nullptr;
    QsciLexerTCL_BlockStart_Callback qscilexertcl_blockstart_callback = nullptr;
    QsciLexerTCL_BlockStartKeyword_Callback qscilexertcl_blockstartkeyword_callback = nullptr;
    QsciLexerTCL_BraceStyle_Callback qscilexertcl_bracestyle_callback = nullptr;
    QsciLexerTCL_CaseSensitive_Callback qscilexertcl_casesensitive_callback = nullptr;
    QsciLexerTCL_Color_Callback qscilexertcl_color_callback = nullptr;
    QsciLexerTCL_EolFill_Callback qscilexertcl_eolfill_callback = nullptr;
    QsciLexerTCL_Font_Callback qscilexertcl_font_callback = nullptr;
    QsciLexerTCL_IndentationGuideView_Callback qscilexertcl_indentationguideview_callback = nullptr;
    QsciLexerTCL_Keywords_Callback qscilexertcl_keywords_callback = nullptr;
    QsciLexerTCL_DefaultStyle_Callback qscilexertcl_defaultstyle_callback = nullptr;
    QsciLexerTCL_Description_Callback qscilexertcl_description_callback = nullptr;
    QsciLexerTCL_Paper_Callback qscilexertcl_paper_callback = nullptr;
    QsciLexerTCL_DefaultColor2_Callback qscilexertcl_defaultcolor2_callback = nullptr;
    QsciLexerTCL_DefaultEolFill_Callback qscilexertcl_defaulteolfill_callback = nullptr;
    QsciLexerTCL_DefaultFont2_Callback qscilexertcl_defaultfont2_callback = nullptr;
    QsciLexerTCL_DefaultPaper2_Callback qscilexertcl_defaultpaper2_callback = nullptr;
    QsciLexerTCL_SetEditor_Callback qscilexertcl_seteditor_callback = nullptr;
    QsciLexerTCL_RefreshProperties_Callback qscilexertcl_refreshproperties_callback = nullptr;
    QsciLexerTCL_StyleBitsNeeded_Callback qscilexertcl_stylebitsneeded_callback = nullptr;
    QsciLexerTCL_WordCharacters_Callback qscilexertcl_wordcharacters_callback = nullptr;
    QsciLexerTCL_SetAutoIndentStyle_Callback qscilexertcl_setautoindentstyle_callback = nullptr;
    QsciLexerTCL_SetColor_Callback qscilexertcl_setcolor_callback = nullptr;
    QsciLexerTCL_SetEolFill_Callback qscilexertcl_seteolfill_callback = nullptr;
    QsciLexerTCL_SetFont_Callback qscilexertcl_setfont_callback = nullptr;
    QsciLexerTCL_SetPaper_Callback qscilexertcl_setpaper_callback = nullptr;
    QsciLexerTCL_ReadProperties_Callback qscilexertcl_readproperties_callback = nullptr;
    QsciLexerTCL_WriteProperties_Callback qscilexertcl_writeproperties_callback = nullptr;
    QsciLexerTCL_Event_Callback qscilexertcl_event_callback = nullptr;
    QsciLexerTCL_EventFilter_Callback qscilexertcl_eventfilter_callback = nullptr;
    QsciLexerTCL_TimerEvent_Callback qscilexertcl_timerevent_callback = nullptr;
    QsciLexerTCL_ChildEvent_Callback qscilexertcl_childevent_callback = nullptr;
    QsciLexerTCL_CustomEvent_Callback qscilexertcl_customevent_callback = nullptr;
    QsciLexerTCL_ConnectNotify_Callback qscilexertcl_connectnotify_callback = nullptr;
    QsciLexerTCL_DisconnectNotify_Callback qscilexertcl_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerTCL {
        using QsciLexerTCL::childEvent;
        using QsciLexerTCL::connectNotify;
        using QsciLexerTCL::customEvent;
        using QsciLexerTCL::disconnectNotify;
        using QsciLexerTCL::readProperties;
        using QsciLexerTCL::timerEvent;
        using QsciLexerTCL::writeProperties;
    };

    VirtualQsciLexerTCL() : QsciLexerTCL() {};
    VirtualQsciLexerTCL(QObject* parent) : QsciLexerTCL(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexertcl_metaobject_callback) {
            QMetaObject* callback_ret = qscilexertcl_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerTCL::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexertcl_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexertcl_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexertcl_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexertcl_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexertcl_language_callback) {
            const char* callback_ret = qscilexertcl_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTCL::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexertcl_lexer_callback) {
            const char* callback_ret = qscilexertcl_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerTCL::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexertcl_lexerid_callback) {
            int callback_ret = qscilexertcl_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexertcl_autocompletionfillups_callback) {
            const char* callback_ret = qscilexertcl_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerTCL::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexertcl_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexertcl_autocompletionwordseparators_callback(this);
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
        return QsciLexerTCL::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexertcl_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertcl_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexertcl_blocklookback_callback) {
            int callback_ret = qscilexertcl_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexertcl_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertcl_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexertcl_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexertcl_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexertcl_bracestyle_callback) {
            int callback_ret = qscilexertcl_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexertcl_casesensitive_callback) {
            bool callback_ret = qscilexertcl_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerTCL::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexertcl_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertcl_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexertcl_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertcl_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexertcl_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertcl_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexertcl_indentationguideview_callback) {
            int callback_ret = qscilexertcl_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexertcl_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexertcl_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexertcl_defaultstyle_callback) {
            int callback_ret = qscilexertcl_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexertcl_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexertcl_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerTCL::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexertcl_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertcl_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexertcl_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertcl_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexertcl_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexertcl_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexertcl_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexertcl_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexertcl_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexertcl_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerTCL::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexertcl_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexertcl_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexertcl_refreshproperties_callback) {
            qscilexertcl_refreshproperties_callback(this);
            return;
        }
        QsciLexerTCL::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexertcl_stylebitsneeded_callback) {
            int callback_ret = qscilexertcl_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerTCL::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexertcl_wordcharacters_callback) {
            const char* callback_ret = qscilexertcl_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerTCL::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexertcl_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexertcl_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexertcl_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertcl_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTCL::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexertcl_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexertcl_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTCL::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexertcl_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexertcl_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTCL::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexertcl_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexertcl_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerTCL::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexertcl_readproperties_callback) {
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
            bool callback_ret = qscilexertcl_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTCL::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexertcl_writeproperties_callback) {
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
            bool callback_ret = qscilexertcl_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerTCL::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexertcl_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexertcl_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerTCL::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexertcl_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexertcl_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerTCL::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexertcl_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexertcl_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexertcl_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexertcl_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexertcl_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexertcl_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexertcl_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertcl_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexertcl_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexertcl_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerTCL::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerTCL_SuperReadProperties(QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerTCL_SuperWriteProperties(const QsciLexerTCL* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerTCL_SuperTimerEvent(QsciLexerTCL* self, QTimerEvent* event);
    friend void QsciLexerTCL_SuperChildEvent(QsciLexerTCL* self, QChildEvent* event);
    friend void QsciLexerTCL_SuperCustomEvent(QsciLexerTCL* self, QEvent* event);
    friend void QsciLexerTCL_SuperConnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
    friend void QsciLexerTCL_SuperDisconnectNotify(QsciLexerTCL* self, const QMetaMethod* signal);
};

#endif
