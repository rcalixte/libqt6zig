#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPOV_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPOV_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPOV
class VirtualQsciLexerPOV final : public QsciLexerPOV {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPOV_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPOV*);
    using QsciLexerPOV_Metacast_Callback = void* (*)(QsciLexerPOV*, const char*);
    using QsciLexerPOV_Metacall_Callback = int (*)(QsciLexerPOV*, int, int, void**);
    using QsciLexerPOV_SetFoldComments_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_SetFoldCompact_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_SetFoldDirectives_Callback = void (*)(QsciLexerPOV*, bool);
    using QsciLexerPOV_Language_Callback = const char* (*)(const QsciLexerPOV*);
    using QsciLexerPOV_Lexer_Callback = const char* (*)(const QsciLexerPOV*);
    using QsciLexerPOV_LexerId_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPOV*);
    using QsciLexerPOV_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPOV*);
    using QsciLexerPOV_BlockEnd_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BlockLookback_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_BlockStart_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPOV*, int*);
    using QsciLexerPOV_BraceStyle_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_CaseSensitive_Callback = bool (*)(const QsciLexerPOV*);
    using QsciLexerPOV_Color_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_EolFill_Callback = bool (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_Font_Callback = QFont* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_IndentationGuideView_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_Keywords_Callback = const char* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultStyle_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_Description_Callback = const char* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_Paper_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultColor2_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultEolFill_Callback = bool (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultFont2_Callback = QFont* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPOV*, int);
    using QsciLexerPOV_SetEditor_Callback = void (*)(QsciLexerPOV*, QsciScintilla*);
    using QsciLexerPOV_RefreshProperties_Callback = void (*)(QsciLexerPOV*);
    using QsciLexerPOV_StyleBitsNeeded_Callback = int (*)(const QsciLexerPOV*);
    using QsciLexerPOV_WordCharacters_Callback = const char* (*)(const QsciLexerPOV*);
    using QsciLexerPOV_SetAutoIndentStyle_Callback = void (*)(QsciLexerPOV*, int);
    using QsciLexerPOV_SetColor_Callback = void (*)(QsciLexerPOV*, QColor*, int);
    using QsciLexerPOV_SetEolFill_Callback = void (*)(QsciLexerPOV*, bool, int);
    using QsciLexerPOV_SetFont_Callback = void (*)(QsciLexerPOV*, QFont*, int);
    using QsciLexerPOV_SetPaper_Callback = void (*)(QsciLexerPOV*, QColor*, int);
    using QsciLexerPOV_ReadProperties_Callback = bool (*)(QsciLexerPOV*, QSettings*, const char*);
    using QsciLexerPOV_WriteProperties_Callback = bool (*)(const QsciLexerPOV*, QSettings*, const char*);
    using QsciLexerPOV_Event_Callback = bool (*)(QsciLexerPOV*, QEvent*);
    using QsciLexerPOV_EventFilter_Callback = bool (*)(QsciLexerPOV*, QObject*, QEvent*);
    using QsciLexerPOV_TimerEvent_Callback = void (*)(QsciLexerPOV*, QTimerEvent*);
    using QsciLexerPOV_ChildEvent_Callback = void (*)(QsciLexerPOV*, QChildEvent*);
    using QsciLexerPOV_CustomEvent_Callback = void (*)(QsciLexerPOV*, QEvent*);
    using QsciLexerPOV_ConnectNotify_Callback = void (*)(QsciLexerPOV*, QMetaMethod*);
    using QsciLexerPOV_DisconnectNotify_Callback = void (*)(QsciLexerPOV*, QMetaMethod*);
    using QsciLexerPOV::bytesAsText;
    using QsciLexerPOV::isSignalConnected;
    using QsciLexerPOV::receivers;
    using QsciLexerPOV::sender;
    using QsciLexerPOV::senderSignalIndex;
    using QsciLexerPOV::textAsBytes;

    // Instance callback storage
    QsciLexerPOV_MetaObject_Callback qscilexerpov_metaobject_callback = nullptr;
    QsciLexerPOV_Metacast_Callback qscilexerpov_metacast_callback = nullptr;
    QsciLexerPOV_Metacall_Callback qscilexerpov_metacall_callback = nullptr;
    QsciLexerPOV_SetFoldComments_Callback qscilexerpov_setfoldcomments_callback = nullptr;
    QsciLexerPOV_SetFoldCompact_Callback qscilexerpov_setfoldcompact_callback = nullptr;
    QsciLexerPOV_SetFoldDirectives_Callback qscilexerpov_setfolddirectives_callback = nullptr;
    QsciLexerPOV_Language_Callback qscilexerpov_language_callback = nullptr;
    QsciLexerPOV_Lexer_Callback qscilexerpov_lexer_callback = nullptr;
    QsciLexerPOV_LexerId_Callback qscilexerpov_lexerid_callback = nullptr;
    QsciLexerPOV_AutoCompletionFillups_Callback qscilexerpov_autocompletionfillups_callback = nullptr;
    QsciLexerPOV_AutoCompletionWordSeparators_Callback qscilexerpov_autocompletionwordseparators_callback = nullptr;
    QsciLexerPOV_BlockEnd_Callback qscilexerpov_blockend_callback = nullptr;
    QsciLexerPOV_BlockLookback_Callback qscilexerpov_blocklookback_callback = nullptr;
    QsciLexerPOV_BlockStart_Callback qscilexerpov_blockstart_callback = nullptr;
    QsciLexerPOV_BlockStartKeyword_Callback qscilexerpov_blockstartkeyword_callback = nullptr;
    QsciLexerPOV_BraceStyle_Callback qscilexerpov_bracestyle_callback = nullptr;
    QsciLexerPOV_CaseSensitive_Callback qscilexerpov_casesensitive_callback = nullptr;
    QsciLexerPOV_Color_Callback qscilexerpov_color_callback = nullptr;
    QsciLexerPOV_EolFill_Callback qscilexerpov_eolfill_callback = nullptr;
    QsciLexerPOV_Font_Callback qscilexerpov_font_callback = nullptr;
    QsciLexerPOV_IndentationGuideView_Callback qscilexerpov_indentationguideview_callback = nullptr;
    QsciLexerPOV_Keywords_Callback qscilexerpov_keywords_callback = nullptr;
    QsciLexerPOV_DefaultStyle_Callback qscilexerpov_defaultstyle_callback = nullptr;
    QsciLexerPOV_Description_Callback qscilexerpov_description_callback = nullptr;
    QsciLexerPOV_Paper_Callback qscilexerpov_paper_callback = nullptr;
    QsciLexerPOV_DefaultColor2_Callback qscilexerpov_defaultcolor2_callback = nullptr;
    QsciLexerPOV_DefaultEolFill_Callback qscilexerpov_defaulteolfill_callback = nullptr;
    QsciLexerPOV_DefaultFont2_Callback qscilexerpov_defaultfont2_callback = nullptr;
    QsciLexerPOV_DefaultPaper2_Callback qscilexerpov_defaultpaper2_callback = nullptr;
    QsciLexerPOV_SetEditor_Callback qscilexerpov_seteditor_callback = nullptr;
    QsciLexerPOV_RefreshProperties_Callback qscilexerpov_refreshproperties_callback = nullptr;
    QsciLexerPOV_StyleBitsNeeded_Callback qscilexerpov_stylebitsneeded_callback = nullptr;
    QsciLexerPOV_WordCharacters_Callback qscilexerpov_wordcharacters_callback = nullptr;
    QsciLexerPOV_SetAutoIndentStyle_Callback qscilexerpov_setautoindentstyle_callback = nullptr;
    QsciLexerPOV_SetColor_Callback qscilexerpov_setcolor_callback = nullptr;
    QsciLexerPOV_SetEolFill_Callback qscilexerpov_seteolfill_callback = nullptr;
    QsciLexerPOV_SetFont_Callback qscilexerpov_setfont_callback = nullptr;
    QsciLexerPOV_SetPaper_Callback qscilexerpov_setpaper_callback = nullptr;
    QsciLexerPOV_ReadProperties_Callback qscilexerpov_readproperties_callback = nullptr;
    QsciLexerPOV_WriteProperties_Callback qscilexerpov_writeproperties_callback = nullptr;
    QsciLexerPOV_Event_Callback qscilexerpov_event_callback = nullptr;
    QsciLexerPOV_EventFilter_Callback qscilexerpov_eventfilter_callback = nullptr;
    QsciLexerPOV_TimerEvent_Callback qscilexerpov_timerevent_callback = nullptr;
    QsciLexerPOV_ChildEvent_Callback qscilexerpov_childevent_callback = nullptr;
    QsciLexerPOV_CustomEvent_Callback qscilexerpov_customevent_callback = nullptr;
    QsciLexerPOV_ConnectNotify_Callback qscilexerpov_connectnotify_callback = nullptr;
    QsciLexerPOV_DisconnectNotify_Callback qscilexerpov_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPOV {
        using QsciLexerPOV::childEvent;
        using QsciLexerPOV::connectNotify;
        using QsciLexerPOV::customEvent;
        using QsciLexerPOV::disconnectNotify;
        using QsciLexerPOV::readProperties;
        using QsciLexerPOV::timerEvent;
        using QsciLexerPOV::writeProperties;
    };

    VirtualQsciLexerPOV() : QsciLexerPOV() {};
    VirtualQsciLexerPOV(QObject* parent) : QsciLexerPOV(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpov_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerpov_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPOV::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpov_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerpov_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpov_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerpov_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpov_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerpov_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpov_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerpov_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldDirectives(bool fold) override {
        if (qscilexerpov_setfolddirectives_callback) {
            bool cbval1 = fold;
            qscilexerpov_setfolddirectives_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::setFoldDirectives(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpov_language_callback) {
            const char* callback_ret = qscilexerpov_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPOV::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpov_lexer_callback) {
            const char* callback_ret = qscilexerpov_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPOV::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpov_lexerid_callback) {
            int callback_ret = qscilexerpov_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpov_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerpov_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPOV::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpov_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerpov_autocompletionwordseparators_callback(this);
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
        return QsciLexerPOV::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpov_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpov_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpov_blocklookback_callback) {
            int callback_ret = qscilexerpov_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpov_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpov_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpov_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpov_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpov_bracestyle_callback) {
            int callback_ret = qscilexerpov_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpov_casesensitive_callback) {
            bool callback_ret = qscilexerpov_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPOV::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpov_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpov_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpov_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpov_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpov_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpov_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpov_indentationguideview_callback) {
            int callback_ret = qscilexerpov_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpov_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerpov_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpov_defaultstyle_callback) {
            int callback_ret = qscilexerpov_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpov_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerpov_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPOV::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpov_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpov_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpov_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpov_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpov_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpov_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpov_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpov_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpov_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpov_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPOV::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpov_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerpov_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpov_refreshproperties_callback) {
            qscilexerpov_refreshproperties_callback(this);
            return;
        }
        QsciLexerPOV::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpov_stylebitsneeded_callback) {
            int callback_ret = qscilexerpov_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPOV::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpov_wordcharacters_callback) {
            const char* callback_ret = qscilexerpov_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPOV::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpov_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerpov_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpov_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpov_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpov_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerpov_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpov_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerpov_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpov_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpov_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPOV::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpov_readproperties_callback) {
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
            bool callback_ret = qscilexerpov_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPOV::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpov_writeproperties_callback) {
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
            bool callback_ret = qscilexerpov_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPOV::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpov_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerpov_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPOV::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpov_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerpov_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPOV::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpov_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerpov_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpov_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerpov_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpov_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerpov_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpov_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpov_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpov_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpov_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPOV::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPOV_SuperReadProperties(QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPOV_SuperWriteProperties(const QsciLexerPOV* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPOV_SuperTimerEvent(QsciLexerPOV* self, QTimerEvent* event);
    friend void QsciLexerPOV_SuperChildEvent(QsciLexerPOV* self, QChildEvent* event);
    friend void QsciLexerPOV_SuperCustomEvent(QsciLexerPOV* self, QEvent* event);
    friend void QsciLexerPOV_SuperConnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
    friend void QsciLexerPOV_SuperDisconnectNotify(QsciLexerPOV* self, const QMetaMethod* signal);
};

#endif
