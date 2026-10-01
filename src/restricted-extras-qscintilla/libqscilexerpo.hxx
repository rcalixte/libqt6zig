#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPO_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERPO_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerPO
class VirtualQsciLexerPO final : public QsciLexerPO {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerPO_MetaObject_Callback = QMetaObject* (*)(const QsciLexerPO*);
    using QsciLexerPO_Metacast_Callback = void* (*)(QsciLexerPO*, const char*);
    using QsciLexerPO_Metacall_Callback = int (*)(QsciLexerPO*, int, int, void**);
    using QsciLexerPO_SetFoldComments_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_SetFoldCompact_Callback = void (*)(QsciLexerPO*, bool);
    using QsciLexerPO_Language_Callback = const char* (*)(const QsciLexerPO*);
    using QsciLexerPO_Lexer_Callback = const char* (*)(const QsciLexerPO*);
    using QsciLexerPO_LexerId_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerPO*);
    using QsciLexerPO_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerPO*);
    using QsciLexerPO_BlockEnd_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockLookback_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_BlockStart_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BlockStartKeyword_Callback = const char* (*)(const QsciLexerPO*, int*);
    using QsciLexerPO_BraceStyle_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_CaseSensitive_Callback = bool (*)(const QsciLexerPO*);
    using QsciLexerPO_Color_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_EolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Font_Callback = QFont* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_IndentationGuideView_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_Keywords_Callback = const char* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultStyle_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_Description_Callback = const char* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_Paper_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultColor2_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultEolFill_Callback = bool (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultFont2_Callback = QFont* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_DefaultPaper2_Callback = QColor* (*)(const QsciLexerPO*, int);
    using QsciLexerPO_SetEditor_Callback = void (*)(QsciLexerPO*, QsciScintilla*);
    using QsciLexerPO_RefreshProperties_Callback = void (*)(QsciLexerPO*);
    using QsciLexerPO_StyleBitsNeeded_Callback = int (*)(const QsciLexerPO*);
    using QsciLexerPO_WordCharacters_Callback = const char* (*)(const QsciLexerPO*);
    using QsciLexerPO_SetAutoIndentStyle_Callback = void (*)(QsciLexerPO*, int);
    using QsciLexerPO_SetColor_Callback = void (*)(QsciLexerPO*, QColor*, int);
    using QsciLexerPO_SetEolFill_Callback = void (*)(QsciLexerPO*, bool, int);
    using QsciLexerPO_SetFont_Callback = void (*)(QsciLexerPO*, QFont*, int);
    using QsciLexerPO_SetPaper_Callback = void (*)(QsciLexerPO*, QColor*, int);
    using QsciLexerPO_ReadProperties_Callback = bool (*)(QsciLexerPO*, QSettings*, const char*);
    using QsciLexerPO_WriteProperties_Callback = bool (*)(const QsciLexerPO*, QSettings*, const char*);
    using QsciLexerPO_Event_Callback = bool (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_EventFilter_Callback = bool (*)(QsciLexerPO*, QObject*, QEvent*);
    using QsciLexerPO_TimerEvent_Callback = void (*)(QsciLexerPO*, QTimerEvent*);
    using QsciLexerPO_ChildEvent_Callback = void (*)(QsciLexerPO*, QChildEvent*);
    using QsciLexerPO_CustomEvent_Callback = void (*)(QsciLexerPO*, QEvent*);
    using QsciLexerPO_ConnectNotify_Callback = void (*)(QsciLexerPO*, QMetaMethod*);
    using QsciLexerPO_DisconnectNotify_Callback = void (*)(QsciLexerPO*, QMetaMethod*);
    using QsciLexerPO::bytesAsText;
    using QsciLexerPO::isSignalConnected;
    using QsciLexerPO::receivers;
    using QsciLexerPO::sender;
    using QsciLexerPO::senderSignalIndex;
    using QsciLexerPO::textAsBytes;

    // Instance callback storage
    QsciLexerPO_MetaObject_Callback qscilexerpo_metaobject_callback = nullptr;
    QsciLexerPO_Metacast_Callback qscilexerpo_metacast_callback = nullptr;
    QsciLexerPO_Metacall_Callback qscilexerpo_metacall_callback = nullptr;
    QsciLexerPO_SetFoldComments_Callback qscilexerpo_setfoldcomments_callback = nullptr;
    QsciLexerPO_SetFoldCompact_Callback qscilexerpo_setfoldcompact_callback = nullptr;
    QsciLexerPO_Language_Callback qscilexerpo_language_callback = nullptr;
    QsciLexerPO_Lexer_Callback qscilexerpo_lexer_callback = nullptr;
    QsciLexerPO_LexerId_Callback qscilexerpo_lexerid_callback = nullptr;
    QsciLexerPO_AutoCompletionFillups_Callback qscilexerpo_autocompletionfillups_callback = nullptr;
    QsciLexerPO_AutoCompletionWordSeparators_Callback qscilexerpo_autocompletionwordseparators_callback = nullptr;
    QsciLexerPO_BlockEnd_Callback qscilexerpo_blockend_callback = nullptr;
    QsciLexerPO_BlockLookback_Callback qscilexerpo_blocklookback_callback = nullptr;
    QsciLexerPO_BlockStart_Callback qscilexerpo_blockstart_callback = nullptr;
    QsciLexerPO_BlockStartKeyword_Callback qscilexerpo_blockstartkeyword_callback = nullptr;
    QsciLexerPO_BraceStyle_Callback qscilexerpo_bracestyle_callback = nullptr;
    QsciLexerPO_CaseSensitive_Callback qscilexerpo_casesensitive_callback = nullptr;
    QsciLexerPO_Color_Callback qscilexerpo_color_callback = nullptr;
    QsciLexerPO_EolFill_Callback qscilexerpo_eolfill_callback = nullptr;
    QsciLexerPO_Font_Callback qscilexerpo_font_callback = nullptr;
    QsciLexerPO_IndentationGuideView_Callback qscilexerpo_indentationguideview_callback = nullptr;
    QsciLexerPO_Keywords_Callback qscilexerpo_keywords_callback = nullptr;
    QsciLexerPO_DefaultStyle_Callback qscilexerpo_defaultstyle_callback = nullptr;
    QsciLexerPO_Description_Callback qscilexerpo_description_callback = nullptr;
    QsciLexerPO_Paper_Callback qscilexerpo_paper_callback = nullptr;
    QsciLexerPO_DefaultColor2_Callback qscilexerpo_defaultcolor2_callback = nullptr;
    QsciLexerPO_DefaultEolFill_Callback qscilexerpo_defaulteolfill_callback = nullptr;
    QsciLexerPO_DefaultFont2_Callback qscilexerpo_defaultfont2_callback = nullptr;
    QsciLexerPO_DefaultPaper2_Callback qscilexerpo_defaultpaper2_callback = nullptr;
    QsciLexerPO_SetEditor_Callback qscilexerpo_seteditor_callback = nullptr;
    QsciLexerPO_RefreshProperties_Callback qscilexerpo_refreshproperties_callback = nullptr;
    QsciLexerPO_StyleBitsNeeded_Callback qscilexerpo_stylebitsneeded_callback = nullptr;
    QsciLexerPO_WordCharacters_Callback qscilexerpo_wordcharacters_callback = nullptr;
    QsciLexerPO_SetAutoIndentStyle_Callback qscilexerpo_setautoindentstyle_callback = nullptr;
    QsciLexerPO_SetColor_Callback qscilexerpo_setcolor_callback = nullptr;
    QsciLexerPO_SetEolFill_Callback qscilexerpo_seteolfill_callback = nullptr;
    QsciLexerPO_SetFont_Callback qscilexerpo_setfont_callback = nullptr;
    QsciLexerPO_SetPaper_Callback qscilexerpo_setpaper_callback = nullptr;
    QsciLexerPO_ReadProperties_Callback qscilexerpo_readproperties_callback = nullptr;
    QsciLexerPO_WriteProperties_Callback qscilexerpo_writeproperties_callback = nullptr;
    QsciLexerPO_Event_Callback qscilexerpo_event_callback = nullptr;
    QsciLexerPO_EventFilter_Callback qscilexerpo_eventfilter_callback = nullptr;
    QsciLexerPO_TimerEvent_Callback qscilexerpo_timerevent_callback = nullptr;
    QsciLexerPO_ChildEvent_Callback qscilexerpo_childevent_callback = nullptr;
    QsciLexerPO_CustomEvent_Callback qscilexerpo_customevent_callback = nullptr;
    QsciLexerPO_ConnectNotify_Callback qscilexerpo_connectnotify_callback = nullptr;
    QsciLexerPO_DisconnectNotify_Callback qscilexerpo_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerPO {
        using QsciLexerPO::childEvent;
        using QsciLexerPO::connectNotify;
        using QsciLexerPO::customEvent;
        using QsciLexerPO::disconnectNotify;
        using QsciLexerPO::readProperties;
        using QsciLexerPO::timerEvent;
        using QsciLexerPO::writeProperties;
    };

    VirtualQsciLexerPO() : QsciLexerPO() {};
    VirtualQsciLexerPO(QObject* parent) : QsciLexerPO(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerpo_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerpo_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerPO::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerpo_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerpo_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerpo_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerpo_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerpo_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerpo_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerPO::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerpo_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerpo_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerPO::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerpo_language_callback) {
            const char* callback_ret = qscilexerpo_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPO::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerpo_lexer_callback) {
            const char* callback_ret = qscilexerpo_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerPO::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerpo_lexerid_callback) {
            int callback_ret = qscilexerpo_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerpo_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerpo_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerPO::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerpo_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerpo_autocompletionwordseparators_callback(this);
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
        return QsciLexerPO::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerpo_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpo_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerpo_blocklookback_callback) {
            int callback_ret = qscilexerpo_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerpo_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpo_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerpo_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerpo_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerpo_bracestyle_callback) {
            int callback_ret = qscilexerpo_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerpo_casesensitive_callback) {
            bool callback_ret = qscilexerpo_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerPO::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerpo_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpo_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerpo_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpo_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerpo_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpo_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerpo_indentationguideview_callback) {
            int callback_ret = qscilexerpo_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerpo_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerpo_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerpo_defaultstyle_callback) {
            int callback_ret = qscilexerpo_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerpo_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerpo_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerPO::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerpo_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpo_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerpo_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpo_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerpo_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerpo_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerpo_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerpo_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerpo_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerpo_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerPO::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerpo_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerpo_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerPO::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerpo_refreshproperties_callback) {
            qscilexerpo_refreshproperties_callback(this);
            return;
        }
        QsciLexerPO::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerpo_stylebitsneeded_callback) {
            int callback_ret = qscilexerpo_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerPO::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerpo_wordcharacters_callback) {
            const char* callback_ret = qscilexerpo_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerPO::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerpo_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerpo_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerPO::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerpo_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpo_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerpo_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerpo_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerpo_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerpo_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerpo_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerpo_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerPO::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerpo_readproperties_callback) {
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
            bool callback_ret = qscilexerpo_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPO::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerpo_writeproperties_callback) {
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
            bool callback_ret = qscilexerpo_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerPO::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerpo_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerpo_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerPO::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerpo_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerpo_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerPO::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerpo_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerpo_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerPO::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerpo_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerpo_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerPO::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerpo_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerpo_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerPO::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpo_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPO::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerpo_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerpo_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerPO::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerPO_SuperReadProperties(QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerPO_SuperWriteProperties(const QsciLexerPO* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerPO_SuperTimerEvent(QsciLexerPO* self, QTimerEvent* event);
    friend void QsciLexerPO_SuperChildEvent(QsciLexerPO* self, QChildEvent* event);
    friend void QsciLexerPO_SuperCustomEvent(QsciLexerPO* self, QEvent* event);
    friend void QsciLexerPO_SuperConnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
    friend void QsciLexerPO_SuperDisconnectNotify(QsciLexerPO* self, const QMetaMethod* signal);
};

#endif
