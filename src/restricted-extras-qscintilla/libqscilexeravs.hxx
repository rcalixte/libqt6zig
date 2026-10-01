#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERAVS_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERAVS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerAVS
class VirtualQsciLexerAVS final : public QsciLexerAVS {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerAVS_MetaObject_Callback = QMetaObject* (*)(const QsciLexerAVS*);
    using QsciLexerAVS_Metacast_Callback = void* (*)(QsciLexerAVS*, const char*);
    using QsciLexerAVS_Metacall_Callback = int (*)(QsciLexerAVS*, int, int, void**);
    using QsciLexerAVS_SetFoldComments_Callback = void (*)(QsciLexerAVS*, bool);
    using QsciLexerAVS_SetFoldCompact_Callback = void (*)(QsciLexerAVS*, bool);
    using QsciLexerAVS_Language_Callback = const char* (*)(const QsciLexerAVS*);
    using QsciLexerAVS_Lexer_Callback = const char* (*)(const QsciLexerAVS*);
    using QsciLexerAVS_LexerId_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerAVS*);
    using QsciLexerAVS_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerAVS*);
    using QsciLexerAVS_BlockEnd_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BlockLookback_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_BlockStart_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BlockStartKeyword_Callback = const char* (*)(const QsciLexerAVS*, int*);
    using QsciLexerAVS_BraceStyle_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_CaseSensitive_Callback = bool (*)(const QsciLexerAVS*);
    using QsciLexerAVS_Color_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_EolFill_Callback = bool (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_Font_Callback = QFont* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_IndentationGuideView_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_Keywords_Callback = const char* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultStyle_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_Description_Callback = const char* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_Paper_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultColor2_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultEolFill_Callback = bool (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultFont2_Callback = QFont* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_DefaultPaper2_Callback = QColor* (*)(const QsciLexerAVS*, int);
    using QsciLexerAVS_SetEditor_Callback = void (*)(QsciLexerAVS*, QsciScintilla*);
    using QsciLexerAVS_RefreshProperties_Callback = void (*)(QsciLexerAVS*);
    using QsciLexerAVS_StyleBitsNeeded_Callback = int (*)(const QsciLexerAVS*);
    using QsciLexerAVS_WordCharacters_Callback = const char* (*)(const QsciLexerAVS*);
    using QsciLexerAVS_SetAutoIndentStyle_Callback = void (*)(QsciLexerAVS*, int);
    using QsciLexerAVS_SetColor_Callback = void (*)(QsciLexerAVS*, QColor*, int);
    using QsciLexerAVS_SetEolFill_Callback = void (*)(QsciLexerAVS*, bool, int);
    using QsciLexerAVS_SetFont_Callback = void (*)(QsciLexerAVS*, QFont*, int);
    using QsciLexerAVS_SetPaper_Callback = void (*)(QsciLexerAVS*, QColor*, int);
    using QsciLexerAVS_ReadProperties_Callback = bool (*)(QsciLexerAVS*, QSettings*, const char*);
    using QsciLexerAVS_WriteProperties_Callback = bool (*)(const QsciLexerAVS*, QSettings*, const char*);
    using QsciLexerAVS_Event_Callback = bool (*)(QsciLexerAVS*, QEvent*);
    using QsciLexerAVS_EventFilter_Callback = bool (*)(QsciLexerAVS*, QObject*, QEvent*);
    using QsciLexerAVS_TimerEvent_Callback = void (*)(QsciLexerAVS*, QTimerEvent*);
    using QsciLexerAVS_ChildEvent_Callback = void (*)(QsciLexerAVS*, QChildEvent*);
    using QsciLexerAVS_CustomEvent_Callback = void (*)(QsciLexerAVS*, QEvent*);
    using QsciLexerAVS_ConnectNotify_Callback = void (*)(QsciLexerAVS*, QMetaMethod*);
    using QsciLexerAVS_DisconnectNotify_Callback = void (*)(QsciLexerAVS*, QMetaMethod*);
    using QsciLexerAVS::bytesAsText;
    using QsciLexerAVS::isSignalConnected;
    using QsciLexerAVS::receivers;
    using QsciLexerAVS::sender;
    using QsciLexerAVS::senderSignalIndex;
    using QsciLexerAVS::textAsBytes;

    // Instance callback storage
    QsciLexerAVS_MetaObject_Callback qscilexeravs_metaobject_callback = nullptr;
    QsciLexerAVS_Metacast_Callback qscilexeravs_metacast_callback = nullptr;
    QsciLexerAVS_Metacall_Callback qscilexeravs_metacall_callback = nullptr;
    QsciLexerAVS_SetFoldComments_Callback qscilexeravs_setfoldcomments_callback = nullptr;
    QsciLexerAVS_SetFoldCompact_Callback qscilexeravs_setfoldcompact_callback = nullptr;
    QsciLexerAVS_Language_Callback qscilexeravs_language_callback = nullptr;
    QsciLexerAVS_Lexer_Callback qscilexeravs_lexer_callback = nullptr;
    QsciLexerAVS_LexerId_Callback qscilexeravs_lexerid_callback = nullptr;
    QsciLexerAVS_AutoCompletionFillups_Callback qscilexeravs_autocompletionfillups_callback = nullptr;
    QsciLexerAVS_AutoCompletionWordSeparators_Callback qscilexeravs_autocompletionwordseparators_callback = nullptr;
    QsciLexerAVS_BlockEnd_Callback qscilexeravs_blockend_callback = nullptr;
    QsciLexerAVS_BlockLookback_Callback qscilexeravs_blocklookback_callback = nullptr;
    QsciLexerAVS_BlockStart_Callback qscilexeravs_blockstart_callback = nullptr;
    QsciLexerAVS_BlockStartKeyword_Callback qscilexeravs_blockstartkeyword_callback = nullptr;
    QsciLexerAVS_BraceStyle_Callback qscilexeravs_bracestyle_callback = nullptr;
    QsciLexerAVS_CaseSensitive_Callback qscilexeravs_casesensitive_callback = nullptr;
    QsciLexerAVS_Color_Callback qscilexeravs_color_callback = nullptr;
    QsciLexerAVS_EolFill_Callback qscilexeravs_eolfill_callback = nullptr;
    QsciLexerAVS_Font_Callback qscilexeravs_font_callback = nullptr;
    QsciLexerAVS_IndentationGuideView_Callback qscilexeravs_indentationguideview_callback = nullptr;
    QsciLexerAVS_Keywords_Callback qscilexeravs_keywords_callback = nullptr;
    QsciLexerAVS_DefaultStyle_Callback qscilexeravs_defaultstyle_callback = nullptr;
    QsciLexerAVS_Description_Callback qscilexeravs_description_callback = nullptr;
    QsciLexerAVS_Paper_Callback qscilexeravs_paper_callback = nullptr;
    QsciLexerAVS_DefaultColor2_Callback qscilexeravs_defaultcolor2_callback = nullptr;
    QsciLexerAVS_DefaultEolFill_Callback qscilexeravs_defaulteolfill_callback = nullptr;
    QsciLexerAVS_DefaultFont2_Callback qscilexeravs_defaultfont2_callback = nullptr;
    QsciLexerAVS_DefaultPaper2_Callback qscilexeravs_defaultpaper2_callback = nullptr;
    QsciLexerAVS_SetEditor_Callback qscilexeravs_seteditor_callback = nullptr;
    QsciLexerAVS_RefreshProperties_Callback qscilexeravs_refreshproperties_callback = nullptr;
    QsciLexerAVS_StyleBitsNeeded_Callback qscilexeravs_stylebitsneeded_callback = nullptr;
    QsciLexerAVS_WordCharacters_Callback qscilexeravs_wordcharacters_callback = nullptr;
    QsciLexerAVS_SetAutoIndentStyle_Callback qscilexeravs_setautoindentstyle_callback = nullptr;
    QsciLexerAVS_SetColor_Callback qscilexeravs_setcolor_callback = nullptr;
    QsciLexerAVS_SetEolFill_Callback qscilexeravs_seteolfill_callback = nullptr;
    QsciLexerAVS_SetFont_Callback qscilexeravs_setfont_callback = nullptr;
    QsciLexerAVS_SetPaper_Callback qscilexeravs_setpaper_callback = nullptr;
    QsciLexerAVS_ReadProperties_Callback qscilexeravs_readproperties_callback = nullptr;
    QsciLexerAVS_WriteProperties_Callback qscilexeravs_writeproperties_callback = nullptr;
    QsciLexerAVS_Event_Callback qscilexeravs_event_callback = nullptr;
    QsciLexerAVS_EventFilter_Callback qscilexeravs_eventfilter_callback = nullptr;
    QsciLexerAVS_TimerEvent_Callback qscilexeravs_timerevent_callback = nullptr;
    QsciLexerAVS_ChildEvent_Callback qscilexeravs_childevent_callback = nullptr;
    QsciLexerAVS_CustomEvent_Callback qscilexeravs_customevent_callback = nullptr;
    QsciLexerAVS_ConnectNotify_Callback qscilexeravs_connectnotify_callback = nullptr;
    QsciLexerAVS_DisconnectNotify_Callback qscilexeravs_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerAVS {
        using QsciLexerAVS::childEvent;
        using QsciLexerAVS::connectNotify;
        using QsciLexerAVS::customEvent;
        using QsciLexerAVS::disconnectNotify;
        using QsciLexerAVS::readProperties;
        using QsciLexerAVS::timerEvent;
        using QsciLexerAVS::writeProperties;
    };

    VirtualQsciLexerAVS() : QsciLexerAVS() {};
    VirtualQsciLexerAVS(QObject* parent) : QsciLexerAVS(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeravs_metaobject_callback) {
            QMetaObject* callback_ret = qscilexeravs_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerAVS::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeravs_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexeravs_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeravs_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexeravs_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeravs_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexeravs_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexeravs_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexeravs_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeravs_language_callback) {
            const char* callback_ret = qscilexeravs_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerAVS::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeravs_lexer_callback) {
            const char* callback_ret = qscilexeravs_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerAVS::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeravs_lexerid_callback) {
            int callback_ret = qscilexeravs_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeravs_autocompletionfillups_callback) {
            const char* callback_ret = qscilexeravs_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerAVS::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeravs_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexeravs_autocompletionwordseparators_callback(this);
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
        return QsciLexerAVS::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeravs_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeravs_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeravs_blocklookback_callback) {
            int callback_ret = qscilexeravs_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeravs_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeravs_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeravs_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeravs_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeravs_bracestyle_callback) {
            int callback_ret = qscilexeravs_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeravs_casesensitive_callback) {
            bool callback_ret = qscilexeravs_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerAVS::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeravs_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeravs_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeravs_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeravs_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeravs_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeravs_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeravs_indentationguideview_callback) {
            int callback_ret = qscilexeravs_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeravs_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexeravs_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeravs_defaultstyle_callback) {
            int callback_ret = qscilexeravs_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeravs_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexeravs_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerAVS::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeravs_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeravs_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeravs_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeravs_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeravs_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeravs_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeravs_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeravs_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeravs_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeravs_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAVS::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeravs_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexeravs_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeravs_refreshproperties_callback) {
            qscilexeravs_refreshproperties_callback(this);
            return;
        }
        QsciLexerAVS::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeravs_stylebitsneeded_callback) {
            int callback_ret = qscilexeravs_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAVS::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeravs_wordcharacters_callback) {
            const char* callback_ret = qscilexeravs_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerAVS::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeravs_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexeravs_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeravs_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeravs_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAVS::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeravs_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexeravs_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAVS::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeravs_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexeravs_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAVS::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeravs_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeravs_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAVS::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeravs_readproperties_callback) {
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
            bool callback_ret = qscilexeravs_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerAVS::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeravs_writeproperties_callback) {
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
            bool callback_ret = qscilexeravs_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerAVS::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeravs_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexeravs_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAVS::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeravs_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexeravs_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerAVS::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeravs_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexeravs_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeravs_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexeravs_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeravs_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexeravs_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeravs_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeravs_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeravs_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeravs_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerAVS::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerAVS_SuperReadProperties(QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAVS_SuperWriteProperties(const QsciLexerAVS* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerAVS_SuperTimerEvent(QsciLexerAVS* self, QTimerEvent* event);
    friend void QsciLexerAVS_SuperChildEvent(QsciLexerAVS* self, QChildEvent* event);
    friend void QsciLexerAVS_SuperCustomEvent(QsciLexerAVS* self, QEvent* event);
    friend void QsciLexerAVS_SuperConnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
    friend void QsciLexerAVS_SuperDisconnectNotify(QsciLexerAVS* self, const QMetaMethod* signal);
};

#endif
