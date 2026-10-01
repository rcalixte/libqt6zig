#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCSS_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERCSS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCSS
class VirtualQsciLexerCSS final : public QsciLexerCSS {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerCSS_MetaObject_Callback = QMetaObject* (*)(const QsciLexerCSS*);
    using QsciLexerCSS_Metacast_Callback = void* (*)(QsciLexerCSS*, const char*);
    using QsciLexerCSS_Metacall_Callback = int (*)(QsciLexerCSS*, int, int, void**);
    using QsciLexerCSS_SetFoldComments_Callback = void (*)(QsciLexerCSS*, bool);
    using QsciLexerCSS_SetFoldCompact_Callback = void (*)(QsciLexerCSS*, bool);
    using QsciLexerCSS_Language_Callback = const char* (*)(const QsciLexerCSS*);
    using QsciLexerCSS_Lexer_Callback = const char* (*)(const QsciLexerCSS*);
    using QsciLexerCSS_LexerId_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerCSS*);
    using QsciLexerCSS_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerCSS*);
    using QsciLexerCSS_BlockEnd_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BlockLookback_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_BlockStart_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCSS*, int*);
    using QsciLexerCSS_BraceStyle_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_CaseSensitive_Callback = bool (*)(const QsciLexerCSS*);
    using QsciLexerCSS_Color_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_EolFill_Callback = bool (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_Font_Callback = QFont* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_IndentationGuideView_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_Keywords_Callback = const char* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultStyle_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_Description_Callback = const char* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_Paper_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultColor2_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultEolFill_Callback = bool (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultFont2_Callback = QFont* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_DefaultPaper2_Callback = QColor* (*)(const QsciLexerCSS*, int);
    using QsciLexerCSS_SetEditor_Callback = void (*)(QsciLexerCSS*, QsciScintilla*);
    using QsciLexerCSS_RefreshProperties_Callback = void (*)(QsciLexerCSS*);
    using QsciLexerCSS_StyleBitsNeeded_Callback = int (*)(const QsciLexerCSS*);
    using QsciLexerCSS_WordCharacters_Callback = const char* (*)(const QsciLexerCSS*);
    using QsciLexerCSS_SetAutoIndentStyle_Callback = void (*)(QsciLexerCSS*, int);
    using QsciLexerCSS_SetColor_Callback = void (*)(QsciLexerCSS*, QColor*, int);
    using QsciLexerCSS_SetEolFill_Callback = void (*)(QsciLexerCSS*, bool, int);
    using QsciLexerCSS_SetFont_Callback = void (*)(QsciLexerCSS*, QFont*, int);
    using QsciLexerCSS_SetPaper_Callback = void (*)(QsciLexerCSS*, QColor*, int);
    using QsciLexerCSS_ReadProperties_Callback = bool (*)(QsciLexerCSS*, QSettings*, const char*);
    using QsciLexerCSS_WriteProperties_Callback = bool (*)(const QsciLexerCSS*, QSettings*, const char*);
    using QsciLexerCSS_Event_Callback = bool (*)(QsciLexerCSS*, QEvent*);
    using QsciLexerCSS_EventFilter_Callback = bool (*)(QsciLexerCSS*, QObject*, QEvent*);
    using QsciLexerCSS_TimerEvent_Callback = void (*)(QsciLexerCSS*, QTimerEvent*);
    using QsciLexerCSS_ChildEvent_Callback = void (*)(QsciLexerCSS*, QChildEvent*);
    using QsciLexerCSS_CustomEvent_Callback = void (*)(QsciLexerCSS*, QEvent*);
    using QsciLexerCSS_ConnectNotify_Callback = void (*)(QsciLexerCSS*, QMetaMethod*);
    using QsciLexerCSS_DisconnectNotify_Callback = void (*)(QsciLexerCSS*, QMetaMethod*);
    using QsciLexerCSS::bytesAsText;
    using QsciLexerCSS::isSignalConnected;
    using QsciLexerCSS::receivers;
    using QsciLexerCSS::sender;
    using QsciLexerCSS::senderSignalIndex;
    using QsciLexerCSS::textAsBytes;

    // Instance callback storage
    QsciLexerCSS_MetaObject_Callback qscilexercss_metaobject_callback = nullptr;
    QsciLexerCSS_Metacast_Callback qscilexercss_metacast_callback = nullptr;
    QsciLexerCSS_Metacall_Callback qscilexercss_metacall_callback = nullptr;
    QsciLexerCSS_SetFoldComments_Callback qscilexercss_setfoldcomments_callback = nullptr;
    QsciLexerCSS_SetFoldCompact_Callback qscilexercss_setfoldcompact_callback = nullptr;
    QsciLexerCSS_Language_Callback qscilexercss_language_callback = nullptr;
    QsciLexerCSS_Lexer_Callback qscilexercss_lexer_callback = nullptr;
    QsciLexerCSS_LexerId_Callback qscilexercss_lexerid_callback = nullptr;
    QsciLexerCSS_AutoCompletionFillups_Callback qscilexercss_autocompletionfillups_callback = nullptr;
    QsciLexerCSS_AutoCompletionWordSeparators_Callback qscilexercss_autocompletionwordseparators_callback = nullptr;
    QsciLexerCSS_BlockEnd_Callback qscilexercss_blockend_callback = nullptr;
    QsciLexerCSS_BlockLookback_Callback qscilexercss_blocklookback_callback = nullptr;
    QsciLexerCSS_BlockStart_Callback qscilexercss_blockstart_callback = nullptr;
    QsciLexerCSS_BlockStartKeyword_Callback qscilexercss_blockstartkeyword_callback = nullptr;
    QsciLexerCSS_BraceStyle_Callback qscilexercss_bracestyle_callback = nullptr;
    QsciLexerCSS_CaseSensitive_Callback qscilexercss_casesensitive_callback = nullptr;
    QsciLexerCSS_Color_Callback qscilexercss_color_callback = nullptr;
    QsciLexerCSS_EolFill_Callback qscilexercss_eolfill_callback = nullptr;
    QsciLexerCSS_Font_Callback qscilexercss_font_callback = nullptr;
    QsciLexerCSS_IndentationGuideView_Callback qscilexercss_indentationguideview_callback = nullptr;
    QsciLexerCSS_Keywords_Callback qscilexercss_keywords_callback = nullptr;
    QsciLexerCSS_DefaultStyle_Callback qscilexercss_defaultstyle_callback = nullptr;
    QsciLexerCSS_Description_Callback qscilexercss_description_callback = nullptr;
    QsciLexerCSS_Paper_Callback qscilexercss_paper_callback = nullptr;
    QsciLexerCSS_DefaultColor2_Callback qscilexercss_defaultcolor2_callback = nullptr;
    QsciLexerCSS_DefaultEolFill_Callback qscilexercss_defaulteolfill_callback = nullptr;
    QsciLexerCSS_DefaultFont2_Callback qscilexercss_defaultfont2_callback = nullptr;
    QsciLexerCSS_DefaultPaper2_Callback qscilexercss_defaultpaper2_callback = nullptr;
    QsciLexerCSS_SetEditor_Callback qscilexercss_seteditor_callback = nullptr;
    QsciLexerCSS_RefreshProperties_Callback qscilexercss_refreshproperties_callback = nullptr;
    QsciLexerCSS_StyleBitsNeeded_Callback qscilexercss_stylebitsneeded_callback = nullptr;
    QsciLexerCSS_WordCharacters_Callback qscilexercss_wordcharacters_callback = nullptr;
    QsciLexerCSS_SetAutoIndentStyle_Callback qscilexercss_setautoindentstyle_callback = nullptr;
    QsciLexerCSS_SetColor_Callback qscilexercss_setcolor_callback = nullptr;
    QsciLexerCSS_SetEolFill_Callback qscilexercss_seteolfill_callback = nullptr;
    QsciLexerCSS_SetFont_Callback qscilexercss_setfont_callback = nullptr;
    QsciLexerCSS_SetPaper_Callback qscilexercss_setpaper_callback = nullptr;
    QsciLexerCSS_ReadProperties_Callback qscilexercss_readproperties_callback = nullptr;
    QsciLexerCSS_WriteProperties_Callback qscilexercss_writeproperties_callback = nullptr;
    QsciLexerCSS_Event_Callback qscilexercss_event_callback = nullptr;
    QsciLexerCSS_EventFilter_Callback qscilexercss_eventfilter_callback = nullptr;
    QsciLexerCSS_TimerEvent_Callback qscilexercss_timerevent_callback = nullptr;
    QsciLexerCSS_ChildEvent_Callback qscilexercss_childevent_callback = nullptr;
    QsciLexerCSS_CustomEvent_Callback qscilexercss_customevent_callback = nullptr;
    QsciLexerCSS_ConnectNotify_Callback qscilexercss_connectnotify_callback = nullptr;
    QsciLexerCSS_DisconnectNotify_Callback qscilexercss_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerCSS {
        using QsciLexerCSS::childEvent;
        using QsciLexerCSS::connectNotify;
        using QsciLexerCSS::customEvent;
        using QsciLexerCSS::disconnectNotify;
        using QsciLexerCSS::readProperties;
        using QsciLexerCSS::timerEvent;
        using QsciLexerCSS::writeProperties;
    };

    VirtualQsciLexerCSS() : QsciLexerCSS() {};
    VirtualQsciLexerCSS(QObject* parent) : QsciLexerCSS(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexercss_metaobject_callback) {
            QMetaObject* callback_ret = qscilexercss_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerCSS::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexercss_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexercss_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercss_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexercss_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercss_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexercss_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercss_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexercss_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexercss_language_callback) {
            const char* callback_ret = qscilexercss_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCSS::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercss_lexer_callback) {
            const char* callback_ret = qscilexercss_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerCSS::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercss_lexerid_callback) {
            int callback_ret = qscilexercss_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercss_autocompletionfillups_callback) {
            const char* callback_ret = qscilexercss_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerCSS::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexercss_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexercss_autocompletionwordseparators_callback(this);
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
        return QsciLexerCSS::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercss_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercss_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercss_blocklookback_callback) {
            int callback_ret = qscilexercss_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercss_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercss_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercss_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexercss_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercss_bracestyle_callback) {
            int callback_ret = qscilexercss_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercss_casesensitive_callback) {
            bool callback_ret = qscilexercss_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerCSS::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercss_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercss_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercss_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercss_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercss_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercss_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercss_indentationguideview_callback) {
            int callback_ret = qscilexercss_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercss_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexercss_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercss_defaultstyle_callback) {
            int callback_ret = qscilexercss_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexercss_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexercss_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerCSS::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercss_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercss_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercss_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercss_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercss_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexercss_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercss_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexercss_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercss_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexercss_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerCSS::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercss_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexercss_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercss_refreshproperties_callback) {
            qscilexercss_refreshproperties_callback(this);
            return;
        }
        QsciLexerCSS::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercss_stylebitsneeded_callback) {
            int callback_ret = qscilexercss_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerCSS::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercss_wordcharacters_callback) {
            const char* callback_ret = qscilexercss_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerCSS::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercss_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexercss_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercss_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercss_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSS::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercss_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexercss_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSS::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercss_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexercss_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSS::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercss_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexercss_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerCSS::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercss_readproperties_callback) {
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
            bool callback_ret = qscilexercss_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCSS::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercss_writeproperties_callback) {
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
            bool callback_ret = qscilexercss_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerCSS::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercss_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexercss_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerCSS::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercss_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexercss_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerCSS::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercss_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexercss_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercss_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexercss_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercss_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexercss_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercss_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercss_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercss_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexercss_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerCSS::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerCSS_SuperReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerCSS_SuperWriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerCSS_SuperTimerEvent(QsciLexerCSS* self, QTimerEvent* event);
    friend void QsciLexerCSS_SuperChildEvent(QsciLexerCSS* self, QChildEvent* event);
    friend void QsciLexerCSS_SuperCustomEvent(QsciLexerCSS* self, QEvent* event);
    friend void QsciLexerCSS_SuperConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
    friend void QsciLexerCSS_SuperDisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal);
};

#endif
