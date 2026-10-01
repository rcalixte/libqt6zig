#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERASM_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERASM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerAsm
class VirtualQsciLexerAsm : public QsciLexerAsm {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerAsm_MetaObject_Callback = QMetaObject* (*)(const QsciLexerAsm*);
    using QsciLexerAsm_Metacast_Callback = void* (*)(QsciLexerAsm*, const char*);
    using QsciLexerAsm_Metacall_Callback = int (*)(QsciLexerAsm*, int, int, void**);
    using QsciLexerAsm_SetFoldComments_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_SetFoldCompact_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_SetCommentDelimiter_Callback = void (*)(QsciLexerAsm*, QChar*);
    using QsciLexerAsm_SetFoldSyntaxBased_Callback = void (*)(QsciLexerAsm*, bool);
    using QsciLexerAsm_Language_Callback = const char* (*)(const QsciLexerAsm*);
    using QsciLexerAsm_Lexer_Callback = const char* (*)(const QsciLexerAsm*);
    using QsciLexerAsm_LexerId_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerAsm*);
    using QsciLexerAsm_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerAsm*);
    using QsciLexerAsm_BlockEnd_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BlockLookback_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_BlockStart_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BlockStartKeyword_Callback = const char* (*)(const QsciLexerAsm*, int*);
    using QsciLexerAsm_BraceStyle_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_CaseSensitive_Callback = bool (*)(const QsciLexerAsm*);
    using QsciLexerAsm_Color_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_EolFill_Callback = bool (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_Font_Callback = QFont* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_IndentationGuideView_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_Keywords_Callback = const char* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultStyle_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_Description_Callback = const char* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_Paper_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultColor2_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultEolFill_Callback = bool (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultFont2_Callback = QFont* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_DefaultPaper2_Callback = QColor* (*)(const QsciLexerAsm*, int);
    using QsciLexerAsm_SetEditor_Callback = void (*)(QsciLexerAsm*, QsciScintilla*);
    using QsciLexerAsm_RefreshProperties_Callback = void (*)(QsciLexerAsm*);
    using QsciLexerAsm_StyleBitsNeeded_Callback = int (*)(const QsciLexerAsm*);
    using QsciLexerAsm_WordCharacters_Callback = const char* (*)(const QsciLexerAsm*);
    using QsciLexerAsm_SetAutoIndentStyle_Callback = void (*)(QsciLexerAsm*, int);
    using QsciLexerAsm_SetColor_Callback = void (*)(QsciLexerAsm*, QColor*, int);
    using QsciLexerAsm_SetEolFill_Callback = void (*)(QsciLexerAsm*, bool, int);
    using QsciLexerAsm_SetFont_Callback = void (*)(QsciLexerAsm*, QFont*, int);
    using QsciLexerAsm_SetPaper_Callback = void (*)(QsciLexerAsm*, QColor*, int);
    using QsciLexerAsm_ReadProperties_Callback = bool (*)(QsciLexerAsm*, QSettings*, const char*);
    using QsciLexerAsm_WriteProperties_Callback = bool (*)(const QsciLexerAsm*, QSettings*, const char*);
    using QsciLexerAsm_Event_Callback = bool (*)(QsciLexerAsm*, QEvent*);
    using QsciLexerAsm_EventFilter_Callback = bool (*)(QsciLexerAsm*, QObject*, QEvent*);
    using QsciLexerAsm_TimerEvent_Callback = void (*)(QsciLexerAsm*, QTimerEvent*);
    using QsciLexerAsm_ChildEvent_Callback = void (*)(QsciLexerAsm*, QChildEvent*);
    using QsciLexerAsm_CustomEvent_Callback = void (*)(QsciLexerAsm*, QEvent*);
    using QsciLexerAsm_ConnectNotify_Callback = void (*)(QsciLexerAsm*, QMetaMethod*);
    using QsciLexerAsm_DisconnectNotify_Callback = void (*)(QsciLexerAsm*, QMetaMethod*);
    using QsciLexerAsm::bytesAsText;
    using QsciLexerAsm::isSignalConnected;
    using QsciLexerAsm::receivers;
    using QsciLexerAsm::sender;
    using QsciLexerAsm::senderSignalIndex;
    using QsciLexerAsm::textAsBytes;

    // Instance callback storage
    QsciLexerAsm_MetaObject_Callback qscilexerasm_metaobject_callback = nullptr;
    QsciLexerAsm_Metacast_Callback qscilexerasm_metacast_callback = nullptr;
    QsciLexerAsm_Metacall_Callback qscilexerasm_metacall_callback = nullptr;
    QsciLexerAsm_SetFoldComments_Callback qscilexerasm_setfoldcomments_callback = nullptr;
    QsciLexerAsm_SetFoldCompact_Callback qscilexerasm_setfoldcompact_callback = nullptr;
    QsciLexerAsm_SetCommentDelimiter_Callback qscilexerasm_setcommentdelimiter_callback = nullptr;
    QsciLexerAsm_SetFoldSyntaxBased_Callback qscilexerasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerAsm_Language_Callback qscilexerasm_language_callback = nullptr;
    QsciLexerAsm_Lexer_Callback qscilexerasm_lexer_callback = nullptr;
    QsciLexerAsm_LexerId_Callback qscilexerasm_lexerid_callback = nullptr;
    QsciLexerAsm_AutoCompletionFillups_Callback qscilexerasm_autocompletionfillups_callback = nullptr;
    QsciLexerAsm_AutoCompletionWordSeparators_Callback qscilexerasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerAsm_BlockEnd_Callback qscilexerasm_blockend_callback = nullptr;
    QsciLexerAsm_BlockLookback_Callback qscilexerasm_blocklookback_callback = nullptr;
    QsciLexerAsm_BlockStart_Callback qscilexerasm_blockstart_callback = nullptr;
    QsciLexerAsm_BlockStartKeyword_Callback qscilexerasm_blockstartkeyword_callback = nullptr;
    QsciLexerAsm_BraceStyle_Callback qscilexerasm_bracestyle_callback = nullptr;
    QsciLexerAsm_CaseSensitive_Callback qscilexerasm_casesensitive_callback = nullptr;
    QsciLexerAsm_Color_Callback qscilexerasm_color_callback = nullptr;
    QsciLexerAsm_EolFill_Callback qscilexerasm_eolfill_callback = nullptr;
    QsciLexerAsm_Font_Callback qscilexerasm_font_callback = nullptr;
    QsciLexerAsm_IndentationGuideView_Callback qscilexerasm_indentationguideview_callback = nullptr;
    QsciLexerAsm_Keywords_Callback qscilexerasm_keywords_callback = nullptr;
    QsciLexerAsm_DefaultStyle_Callback qscilexerasm_defaultstyle_callback = nullptr;
    QsciLexerAsm_Description_Callback qscilexerasm_description_callback = nullptr;
    QsciLexerAsm_Paper_Callback qscilexerasm_paper_callback = nullptr;
    QsciLexerAsm_DefaultColor2_Callback qscilexerasm_defaultcolor2_callback = nullptr;
    QsciLexerAsm_DefaultEolFill_Callback qscilexerasm_defaulteolfill_callback = nullptr;
    QsciLexerAsm_DefaultFont2_Callback qscilexerasm_defaultfont2_callback = nullptr;
    QsciLexerAsm_DefaultPaper2_Callback qscilexerasm_defaultpaper2_callback = nullptr;
    QsciLexerAsm_SetEditor_Callback qscilexerasm_seteditor_callback = nullptr;
    QsciLexerAsm_RefreshProperties_Callback qscilexerasm_refreshproperties_callback = nullptr;
    QsciLexerAsm_StyleBitsNeeded_Callback qscilexerasm_stylebitsneeded_callback = nullptr;
    QsciLexerAsm_WordCharacters_Callback qscilexerasm_wordcharacters_callback = nullptr;
    QsciLexerAsm_SetAutoIndentStyle_Callback qscilexerasm_setautoindentstyle_callback = nullptr;
    QsciLexerAsm_SetColor_Callback qscilexerasm_setcolor_callback = nullptr;
    QsciLexerAsm_SetEolFill_Callback qscilexerasm_seteolfill_callback = nullptr;
    QsciLexerAsm_SetFont_Callback qscilexerasm_setfont_callback = nullptr;
    QsciLexerAsm_SetPaper_Callback qscilexerasm_setpaper_callback = nullptr;
    QsciLexerAsm_ReadProperties_Callback qscilexerasm_readproperties_callback = nullptr;
    QsciLexerAsm_WriteProperties_Callback qscilexerasm_writeproperties_callback = nullptr;
    QsciLexerAsm_Event_Callback qscilexerasm_event_callback = nullptr;
    QsciLexerAsm_EventFilter_Callback qscilexerasm_eventfilter_callback = nullptr;
    QsciLexerAsm_TimerEvent_Callback qscilexerasm_timerevent_callback = nullptr;
    QsciLexerAsm_ChildEvent_Callback qscilexerasm_childevent_callback = nullptr;
    QsciLexerAsm_CustomEvent_Callback qscilexerasm_customevent_callback = nullptr;
    QsciLexerAsm_ConnectNotify_Callback qscilexerasm_connectnotify_callback = nullptr;
    QsciLexerAsm_DisconnectNotify_Callback qscilexerasm_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerAsm {
        using QsciLexerAsm::childEvent;
        using QsciLexerAsm::connectNotify;
        using QsciLexerAsm::customEvent;
        using QsciLexerAsm::disconnectNotify;
        using QsciLexerAsm::readProperties;
        using QsciLexerAsm::timerEvent;
        using QsciLexerAsm::writeProperties;
    };

    VirtualQsciLexerAsm() : QsciLexerAsm() {};
    VirtualQsciLexerAsm(QObject* parent) : QsciLexerAsm(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerasm_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerasm_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerAsm::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerasm_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerasm_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerasm_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerasm_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerasm_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexerasm_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerasm_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerasm_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexerasm_setcommentdelimiter_callback) {
            QChar* cbval1 = new QChar(delimeter);
            qscilexerasm_setcommentdelimiter_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setCommentDelimiter(delimeter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexerasm_setfoldsyntaxbased_callback) {
            bool cbval1 = syntax_based;
            qscilexerasm_setfoldsyntaxbased_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setFoldSyntaxBased(syntax_based);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerasm_language_callback) {
            const char* callback_ret = qscilexerasm_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerAsm::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerasm_lexer_callback) {
            const char* callback_ret = qscilexerasm_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerAsm::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerasm_lexerid_callback) {
            int callback_ret = qscilexerasm_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerasm_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerasm_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerAsm::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerasm_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerasm_autocompletionwordseparators_callback(this);
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
        return QsciLexerAsm::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerasm_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerasm_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerasm_blocklookback_callback) {
            int callback_ret = qscilexerasm_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerasm_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerasm_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerasm_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerasm_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerasm_bracestyle_callback) {
            int callback_ret = qscilexerasm_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerasm_casesensitive_callback) {
            bool callback_ret = qscilexerasm_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerAsm::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerasm_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerasm_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerasm_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerasm_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerasm_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerasm_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerasm_indentationguideview_callback) {
            int callback_ret = qscilexerasm_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerasm_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerasm_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerasm_defaultstyle_callback) {
            int callback_ret = qscilexerasm_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerasm_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerasm_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerAsm::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerasm_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerasm_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerasm_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerasm_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerasm_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerasm_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerasm_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerasm_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerasm_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerasm_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerAsm::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerasm_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerasm_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerasm_refreshproperties_callback) {
            qscilexerasm_refreshproperties_callback(this);
            return;
        }
        QsciLexerAsm::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerasm_stylebitsneeded_callback) {
            int callback_ret = qscilexerasm_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerAsm::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerasm_wordcharacters_callback) {
            const char* callback_ret = qscilexerasm_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerAsm::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerasm_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerasm_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerasm_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerasm_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAsm::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerasm_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerasm_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAsm::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerasm_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerasm_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAsm::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerasm_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerasm_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerAsm::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerasm_readproperties_callback) {
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
            bool callback_ret = qscilexerasm_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerAsm::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerasm_writeproperties_callback) {
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
            bool callback_ret = qscilexerasm_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerAsm::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerasm_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerasm_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerAsm::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerasm_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerasm_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerAsm::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerasm_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerasm_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerasm_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerasm_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerasm_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerasm_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerasm_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerasm_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerasm_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerasm_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerAsm::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerAsm_SuperReadProperties(QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerAsm_SuperWriteProperties(const QsciLexerAsm* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerAsm_SuperTimerEvent(QsciLexerAsm* self, QTimerEvent* event);
    friend void QsciLexerAsm_SuperChildEvent(QsciLexerAsm* self, QChildEvent* event);
    friend void QsciLexerAsm_SuperCustomEvent(QsciLexerAsm* self, QEvent* event);
    friend void QsciLexerAsm_SuperConnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
    friend void QsciLexerAsm_SuperDisconnectNotify(QsciLexerAsm* self, const QMetaMethod* signal);
};

#endif
