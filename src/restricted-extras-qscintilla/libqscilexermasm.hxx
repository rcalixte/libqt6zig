#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMASM_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERMASM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerMASM
class VirtualQsciLexerMASM final : public QsciLexerMASM {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerMASM_MetaObject_Callback = QMetaObject* (*)(const QsciLexerMASM*);
    using QsciLexerMASM_Metacast_Callback = void* (*)(QsciLexerMASM*, const char*);
    using QsciLexerMASM_Metacall_Callback = int (*)(QsciLexerMASM*, int, int, void**);
    using QsciLexerMASM_SetFoldComments_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_SetFoldCompact_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_SetCommentDelimiter_Callback = void (*)(QsciLexerMASM*, QChar*);
    using QsciLexerMASM_SetFoldSyntaxBased_Callback = void (*)(QsciLexerMASM*, bool);
    using QsciLexerMASM_Language_Callback = const char* (*)(const QsciLexerMASM*);
    using QsciLexerMASM_Lexer_Callback = const char* (*)(const QsciLexerMASM*);
    using QsciLexerMASM_LexerId_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerMASM*);
    using QsciLexerMASM_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerMASM*);
    using QsciLexerMASM_BlockEnd_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BlockLookback_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_BlockStart_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BlockStartKeyword_Callback = const char* (*)(const QsciLexerMASM*, int*);
    using QsciLexerMASM_BraceStyle_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_CaseSensitive_Callback = bool (*)(const QsciLexerMASM*);
    using QsciLexerMASM_Color_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_EolFill_Callback = bool (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_Font_Callback = QFont* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_IndentationGuideView_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_Keywords_Callback = const char* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultStyle_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_Description_Callback = const char* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_Paper_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultColor2_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultEolFill_Callback = bool (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultFont2_Callback = QFont* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_DefaultPaper2_Callback = QColor* (*)(const QsciLexerMASM*, int);
    using QsciLexerMASM_SetEditor_Callback = void (*)(QsciLexerMASM*, QsciScintilla*);
    using QsciLexerMASM_RefreshProperties_Callback = void (*)(QsciLexerMASM*);
    using QsciLexerMASM_StyleBitsNeeded_Callback = int (*)(const QsciLexerMASM*);
    using QsciLexerMASM_WordCharacters_Callback = const char* (*)(const QsciLexerMASM*);
    using QsciLexerMASM_SetAutoIndentStyle_Callback = void (*)(QsciLexerMASM*, int);
    using QsciLexerMASM_SetColor_Callback = void (*)(QsciLexerMASM*, QColor*, int);
    using QsciLexerMASM_SetEolFill_Callback = void (*)(QsciLexerMASM*, bool, int);
    using QsciLexerMASM_SetFont_Callback = void (*)(QsciLexerMASM*, QFont*, int);
    using QsciLexerMASM_SetPaper_Callback = void (*)(QsciLexerMASM*, QColor*, int);
    using QsciLexerMASM_ReadProperties_Callback = bool (*)(QsciLexerMASM*, QSettings*, const char*);
    using QsciLexerMASM_WriteProperties_Callback = bool (*)(const QsciLexerMASM*, QSettings*, const char*);
    using QsciLexerMASM_Event_Callback = bool (*)(QsciLexerMASM*, QEvent*);
    using QsciLexerMASM_EventFilter_Callback = bool (*)(QsciLexerMASM*, QObject*, QEvent*);
    using QsciLexerMASM_TimerEvent_Callback = void (*)(QsciLexerMASM*, QTimerEvent*);
    using QsciLexerMASM_ChildEvent_Callback = void (*)(QsciLexerMASM*, QChildEvent*);
    using QsciLexerMASM_CustomEvent_Callback = void (*)(QsciLexerMASM*, QEvent*);
    using QsciLexerMASM_ConnectNotify_Callback = void (*)(QsciLexerMASM*, QMetaMethod*);
    using QsciLexerMASM_DisconnectNotify_Callback = void (*)(QsciLexerMASM*, QMetaMethod*);
    using QsciLexerMASM::bytesAsText;
    using QsciLexerMASM::isSignalConnected;
    using QsciLexerMASM::receivers;
    using QsciLexerMASM::sender;
    using QsciLexerMASM::senderSignalIndex;
    using QsciLexerMASM::textAsBytes;

    // Instance callback storage
    QsciLexerMASM_MetaObject_Callback qscilexermasm_metaobject_callback = nullptr;
    QsciLexerMASM_Metacast_Callback qscilexermasm_metacast_callback = nullptr;
    QsciLexerMASM_Metacall_Callback qscilexermasm_metacall_callback = nullptr;
    QsciLexerMASM_SetFoldComments_Callback qscilexermasm_setfoldcomments_callback = nullptr;
    QsciLexerMASM_SetFoldCompact_Callback qscilexermasm_setfoldcompact_callback = nullptr;
    QsciLexerMASM_SetCommentDelimiter_Callback qscilexermasm_setcommentdelimiter_callback = nullptr;
    QsciLexerMASM_SetFoldSyntaxBased_Callback qscilexermasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerMASM_Language_Callback qscilexermasm_language_callback = nullptr;
    QsciLexerMASM_Lexer_Callback qscilexermasm_lexer_callback = nullptr;
    QsciLexerMASM_LexerId_Callback qscilexermasm_lexerid_callback = nullptr;
    QsciLexerMASM_AutoCompletionFillups_Callback qscilexermasm_autocompletionfillups_callback = nullptr;
    QsciLexerMASM_AutoCompletionWordSeparators_Callback qscilexermasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerMASM_BlockEnd_Callback qscilexermasm_blockend_callback = nullptr;
    QsciLexerMASM_BlockLookback_Callback qscilexermasm_blocklookback_callback = nullptr;
    QsciLexerMASM_BlockStart_Callback qscilexermasm_blockstart_callback = nullptr;
    QsciLexerMASM_BlockStartKeyword_Callback qscilexermasm_blockstartkeyword_callback = nullptr;
    QsciLexerMASM_BraceStyle_Callback qscilexermasm_bracestyle_callback = nullptr;
    QsciLexerMASM_CaseSensitive_Callback qscilexermasm_casesensitive_callback = nullptr;
    QsciLexerMASM_Color_Callback qscilexermasm_color_callback = nullptr;
    QsciLexerMASM_EolFill_Callback qscilexermasm_eolfill_callback = nullptr;
    QsciLexerMASM_Font_Callback qscilexermasm_font_callback = nullptr;
    QsciLexerMASM_IndentationGuideView_Callback qscilexermasm_indentationguideview_callback = nullptr;
    QsciLexerMASM_Keywords_Callback qscilexermasm_keywords_callback = nullptr;
    QsciLexerMASM_DefaultStyle_Callback qscilexermasm_defaultstyle_callback = nullptr;
    QsciLexerMASM_Description_Callback qscilexermasm_description_callback = nullptr;
    QsciLexerMASM_Paper_Callback qscilexermasm_paper_callback = nullptr;
    QsciLexerMASM_DefaultColor2_Callback qscilexermasm_defaultcolor2_callback = nullptr;
    QsciLexerMASM_DefaultEolFill_Callback qscilexermasm_defaulteolfill_callback = nullptr;
    QsciLexerMASM_DefaultFont2_Callback qscilexermasm_defaultfont2_callback = nullptr;
    QsciLexerMASM_DefaultPaper2_Callback qscilexermasm_defaultpaper2_callback = nullptr;
    QsciLexerMASM_SetEditor_Callback qscilexermasm_seteditor_callback = nullptr;
    QsciLexerMASM_RefreshProperties_Callback qscilexermasm_refreshproperties_callback = nullptr;
    QsciLexerMASM_StyleBitsNeeded_Callback qscilexermasm_stylebitsneeded_callback = nullptr;
    QsciLexerMASM_WordCharacters_Callback qscilexermasm_wordcharacters_callback = nullptr;
    QsciLexerMASM_SetAutoIndentStyle_Callback qscilexermasm_setautoindentstyle_callback = nullptr;
    QsciLexerMASM_SetColor_Callback qscilexermasm_setcolor_callback = nullptr;
    QsciLexerMASM_SetEolFill_Callback qscilexermasm_seteolfill_callback = nullptr;
    QsciLexerMASM_SetFont_Callback qscilexermasm_setfont_callback = nullptr;
    QsciLexerMASM_SetPaper_Callback qscilexermasm_setpaper_callback = nullptr;
    QsciLexerMASM_ReadProperties_Callback qscilexermasm_readproperties_callback = nullptr;
    QsciLexerMASM_WriteProperties_Callback qscilexermasm_writeproperties_callback = nullptr;
    QsciLexerMASM_Event_Callback qscilexermasm_event_callback = nullptr;
    QsciLexerMASM_EventFilter_Callback qscilexermasm_eventfilter_callback = nullptr;
    QsciLexerMASM_TimerEvent_Callback qscilexermasm_timerevent_callback = nullptr;
    QsciLexerMASM_ChildEvent_Callback qscilexermasm_childevent_callback = nullptr;
    QsciLexerMASM_CustomEvent_Callback qscilexermasm_customevent_callback = nullptr;
    QsciLexerMASM_ConnectNotify_Callback qscilexermasm_connectnotify_callback = nullptr;
    QsciLexerMASM_DisconnectNotify_Callback qscilexermasm_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerMASM {
        using QsciLexerMASM::childEvent;
        using QsciLexerMASM::connectNotify;
        using QsciLexerMASM::customEvent;
        using QsciLexerMASM::disconnectNotify;
        using QsciLexerMASM::readProperties;
        using QsciLexerMASM::timerEvent;
        using QsciLexerMASM::writeProperties;
    };

    VirtualQsciLexerMASM() : QsciLexerMASM() {};
    VirtualQsciLexerMASM(QObject* parent) : QsciLexerMASM(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexermasm_metaobject_callback) {
            QMetaObject* callback_ret = qscilexermasm_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerMASM::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexermasm_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexermasm_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexermasm_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexermasm_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexermasm_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexermasm_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexermasm_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexermasm_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexermasm_setcommentdelimiter_callback) {
            QChar* cbval1 = new QChar(delimeter);
            qscilexermasm_setcommentdelimiter_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setCommentDelimiter(delimeter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexermasm_setfoldsyntaxbased_callback) {
            bool cbval1 = syntax_based;
            qscilexermasm_setfoldsyntaxbased_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setFoldSyntaxBased(syntax_based);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexermasm_language_callback) {
            const char* callback_ret = qscilexermasm_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMASM::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexermasm_lexer_callback) {
            const char* callback_ret = qscilexermasm_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerMASM::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexermasm_lexerid_callback) {
            int callback_ret = qscilexermasm_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexermasm_autocompletionfillups_callback) {
            const char* callback_ret = qscilexermasm_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerMASM::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexermasm_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexermasm_autocompletionwordseparators_callback(this);
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
        return QsciLexerMASM::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexermasm_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermasm_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexermasm_blocklookback_callback) {
            int callback_ret = qscilexermasm_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexermasm_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermasm_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexermasm_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexermasm_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexermasm_bracestyle_callback) {
            int callback_ret = qscilexermasm_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexermasm_casesensitive_callback) {
            bool callback_ret = qscilexermasm_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerMASM::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexermasm_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermasm_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexermasm_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermasm_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexermasm_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermasm_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexermasm_indentationguideview_callback) {
            int callback_ret = qscilexermasm_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexermasm_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexermasm_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexermasm_defaultstyle_callback) {
            int callback_ret = qscilexermasm_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexermasm_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexermasm_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerMASM::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexermasm_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermasm_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexermasm_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermasm_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexermasm_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexermasm_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexermasm_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexermasm_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexermasm_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexermasm_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerMASM::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexermasm_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexermasm_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexermasm_refreshproperties_callback) {
            qscilexermasm_refreshproperties_callback(this);
            return;
        }
        QsciLexerMASM::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexermasm_stylebitsneeded_callback) {
            int callback_ret = qscilexermasm_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerMASM::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexermasm_wordcharacters_callback) {
            const char* callback_ret = qscilexermasm_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerMASM::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexermasm_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexermasm_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexermasm_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermasm_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMASM::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexermasm_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexermasm_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMASM::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexermasm_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexermasm_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMASM::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexermasm_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexermasm_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerMASM::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexermasm_readproperties_callback) {
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
            bool callback_ret = qscilexermasm_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMASM::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexermasm_writeproperties_callback) {
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
            bool callback_ret = qscilexermasm_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerMASM::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexermasm_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexermasm_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerMASM::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexermasm_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexermasm_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerMASM::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexermasm_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexermasm_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexermasm_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexermasm_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexermasm_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexermasm_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexermasm_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermasm_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexermasm_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexermasm_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerMASM::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerMASM_SuperReadProperties(QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerMASM_SuperWriteProperties(const QsciLexerMASM* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerMASM_SuperTimerEvent(QsciLexerMASM* self, QTimerEvent* event);
    friend void QsciLexerMASM_SuperChildEvent(QsciLexerMASM* self, QChildEvent* event);
    friend void QsciLexerMASM_SuperCustomEvent(QsciLexerMASM* self, QEvent* event);
    friend void QsciLexerMASM_SuperConnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
    friend void QsciLexerMASM_SuperDisconnectNotify(QsciLexerMASM* self, const QMetaMethod* signal);
};

#endif
