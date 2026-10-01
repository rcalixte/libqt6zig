#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERNASM_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERNASM_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerNASM
class VirtualQsciLexerNASM final : public QsciLexerNASM {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerNASM_MetaObject_Callback = QMetaObject* (*)(const QsciLexerNASM*);
    using QsciLexerNASM_Metacast_Callback = void* (*)(QsciLexerNASM*, const char*);
    using QsciLexerNASM_Metacall_Callback = int (*)(QsciLexerNASM*, int, int, void**);
    using QsciLexerNASM_SetFoldComments_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_SetFoldCompact_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_SetCommentDelimiter_Callback = void (*)(QsciLexerNASM*, QChar*);
    using QsciLexerNASM_SetFoldSyntaxBased_Callback = void (*)(QsciLexerNASM*, bool);
    using QsciLexerNASM_Language_Callback = const char* (*)(const QsciLexerNASM*);
    using QsciLexerNASM_Lexer_Callback = const char* (*)(const QsciLexerNASM*);
    using QsciLexerNASM_LexerId_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerNASM*);
    using QsciLexerNASM_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerNASM*);
    using QsciLexerNASM_BlockEnd_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BlockLookback_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_BlockStart_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BlockStartKeyword_Callback = const char* (*)(const QsciLexerNASM*, int*);
    using QsciLexerNASM_BraceStyle_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_CaseSensitive_Callback = bool (*)(const QsciLexerNASM*);
    using QsciLexerNASM_Color_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_EolFill_Callback = bool (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_Font_Callback = QFont* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_IndentationGuideView_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_Keywords_Callback = const char* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultStyle_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_Description_Callback = const char* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_Paper_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultColor2_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultEolFill_Callback = bool (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultFont2_Callback = QFont* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_DefaultPaper2_Callback = QColor* (*)(const QsciLexerNASM*, int);
    using QsciLexerNASM_SetEditor_Callback = void (*)(QsciLexerNASM*, QsciScintilla*);
    using QsciLexerNASM_RefreshProperties_Callback = void (*)(QsciLexerNASM*);
    using QsciLexerNASM_StyleBitsNeeded_Callback = int (*)(const QsciLexerNASM*);
    using QsciLexerNASM_WordCharacters_Callback = const char* (*)(const QsciLexerNASM*);
    using QsciLexerNASM_SetAutoIndentStyle_Callback = void (*)(QsciLexerNASM*, int);
    using QsciLexerNASM_SetColor_Callback = void (*)(QsciLexerNASM*, QColor*, int);
    using QsciLexerNASM_SetEolFill_Callback = void (*)(QsciLexerNASM*, bool, int);
    using QsciLexerNASM_SetFont_Callback = void (*)(QsciLexerNASM*, QFont*, int);
    using QsciLexerNASM_SetPaper_Callback = void (*)(QsciLexerNASM*, QColor*, int);
    using QsciLexerNASM_ReadProperties_Callback = bool (*)(QsciLexerNASM*, QSettings*, const char*);
    using QsciLexerNASM_WriteProperties_Callback = bool (*)(const QsciLexerNASM*, QSettings*, const char*);
    using QsciLexerNASM_Event_Callback = bool (*)(QsciLexerNASM*, QEvent*);
    using QsciLexerNASM_EventFilter_Callback = bool (*)(QsciLexerNASM*, QObject*, QEvent*);
    using QsciLexerNASM_TimerEvent_Callback = void (*)(QsciLexerNASM*, QTimerEvent*);
    using QsciLexerNASM_ChildEvent_Callback = void (*)(QsciLexerNASM*, QChildEvent*);
    using QsciLexerNASM_CustomEvent_Callback = void (*)(QsciLexerNASM*, QEvent*);
    using QsciLexerNASM_ConnectNotify_Callback = void (*)(QsciLexerNASM*, QMetaMethod*);
    using QsciLexerNASM_DisconnectNotify_Callback = void (*)(QsciLexerNASM*, QMetaMethod*);
    using QsciLexerNASM::bytesAsText;
    using QsciLexerNASM::isSignalConnected;
    using QsciLexerNASM::receivers;
    using QsciLexerNASM::sender;
    using QsciLexerNASM::senderSignalIndex;
    using QsciLexerNASM::textAsBytes;

    // Instance callback storage
    QsciLexerNASM_MetaObject_Callback qscilexernasm_metaobject_callback = nullptr;
    QsciLexerNASM_Metacast_Callback qscilexernasm_metacast_callback = nullptr;
    QsciLexerNASM_Metacall_Callback qscilexernasm_metacall_callback = nullptr;
    QsciLexerNASM_SetFoldComments_Callback qscilexernasm_setfoldcomments_callback = nullptr;
    QsciLexerNASM_SetFoldCompact_Callback qscilexernasm_setfoldcompact_callback = nullptr;
    QsciLexerNASM_SetCommentDelimiter_Callback qscilexernasm_setcommentdelimiter_callback = nullptr;
    QsciLexerNASM_SetFoldSyntaxBased_Callback qscilexernasm_setfoldsyntaxbased_callback = nullptr;
    QsciLexerNASM_Language_Callback qscilexernasm_language_callback = nullptr;
    QsciLexerNASM_Lexer_Callback qscilexernasm_lexer_callback = nullptr;
    QsciLexerNASM_LexerId_Callback qscilexernasm_lexerid_callback = nullptr;
    QsciLexerNASM_AutoCompletionFillups_Callback qscilexernasm_autocompletionfillups_callback = nullptr;
    QsciLexerNASM_AutoCompletionWordSeparators_Callback qscilexernasm_autocompletionwordseparators_callback = nullptr;
    QsciLexerNASM_BlockEnd_Callback qscilexernasm_blockend_callback = nullptr;
    QsciLexerNASM_BlockLookback_Callback qscilexernasm_blocklookback_callback = nullptr;
    QsciLexerNASM_BlockStart_Callback qscilexernasm_blockstart_callback = nullptr;
    QsciLexerNASM_BlockStartKeyword_Callback qscilexernasm_blockstartkeyword_callback = nullptr;
    QsciLexerNASM_BraceStyle_Callback qscilexernasm_bracestyle_callback = nullptr;
    QsciLexerNASM_CaseSensitive_Callback qscilexernasm_casesensitive_callback = nullptr;
    QsciLexerNASM_Color_Callback qscilexernasm_color_callback = nullptr;
    QsciLexerNASM_EolFill_Callback qscilexernasm_eolfill_callback = nullptr;
    QsciLexerNASM_Font_Callback qscilexernasm_font_callback = nullptr;
    QsciLexerNASM_IndentationGuideView_Callback qscilexernasm_indentationguideview_callback = nullptr;
    QsciLexerNASM_Keywords_Callback qscilexernasm_keywords_callback = nullptr;
    QsciLexerNASM_DefaultStyle_Callback qscilexernasm_defaultstyle_callback = nullptr;
    QsciLexerNASM_Description_Callback qscilexernasm_description_callback = nullptr;
    QsciLexerNASM_Paper_Callback qscilexernasm_paper_callback = nullptr;
    QsciLexerNASM_DefaultColor2_Callback qscilexernasm_defaultcolor2_callback = nullptr;
    QsciLexerNASM_DefaultEolFill_Callback qscilexernasm_defaulteolfill_callback = nullptr;
    QsciLexerNASM_DefaultFont2_Callback qscilexernasm_defaultfont2_callback = nullptr;
    QsciLexerNASM_DefaultPaper2_Callback qscilexernasm_defaultpaper2_callback = nullptr;
    QsciLexerNASM_SetEditor_Callback qscilexernasm_seteditor_callback = nullptr;
    QsciLexerNASM_RefreshProperties_Callback qscilexernasm_refreshproperties_callback = nullptr;
    QsciLexerNASM_StyleBitsNeeded_Callback qscilexernasm_stylebitsneeded_callback = nullptr;
    QsciLexerNASM_WordCharacters_Callback qscilexernasm_wordcharacters_callback = nullptr;
    QsciLexerNASM_SetAutoIndentStyle_Callback qscilexernasm_setautoindentstyle_callback = nullptr;
    QsciLexerNASM_SetColor_Callback qscilexernasm_setcolor_callback = nullptr;
    QsciLexerNASM_SetEolFill_Callback qscilexernasm_seteolfill_callback = nullptr;
    QsciLexerNASM_SetFont_Callback qscilexernasm_setfont_callback = nullptr;
    QsciLexerNASM_SetPaper_Callback qscilexernasm_setpaper_callback = nullptr;
    QsciLexerNASM_ReadProperties_Callback qscilexernasm_readproperties_callback = nullptr;
    QsciLexerNASM_WriteProperties_Callback qscilexernasm_writeproperties_callback = nullptr;
    QsciLexerNASM_Event_Callback qscilexernasm_event_callback = nullptr;
    QsciLexerNASM_EventFilter_Callback qscilexernasm_eventfilter_callback = nullptr;
    QsciLexerNASM_TimerEvent_Callback qscilexernasm_timerevent_callback = nullptr;
    QsciLexerNASM_ChildEvent_Callback qscilexernasm_childevent_callback = nullptr;
    QsciLexerNASM_CustomEvent_Callback qscilexernasm_customevent_callback = nullptr;
    QsciLexerNASM_ConnectNotify_Callback qscilexernasm_connectnotify_callback = nullptr;
    QsciLexerNASM_DisconnectNotify_Callback qscilexernasm_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerNASM {
        using QsciLexerNASM::childEvent;
        using QsciLexerNASM::connectNotify;
        using QsciLexerNASM::customEvent;
        using QsciLexerNASM::disconnectNotify;
        using QsciLexerNASM::readProperties;
        using QsciLexerNASM::timerEvent;
        using QsciLexerNASM::writeProperties;
    };

    VirtualQsciLexerNASM() : QsciLexerNASM() {};
    VirtualQsciLexerNASM(QObject* parent) : QsciLexerNASM(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexernasm_metaobject_callback) {
            QMetaObject* callback_ret = qscilexernasm_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerNASM::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexernasm_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexernasm_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexernasm_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexernasm_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexernasm_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexernasm_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexernasm_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexernasm_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCommentDelimiter(QChar delimeter) override {
        if (qscilexernasm_setcommentdelimiter_callback) {
            QChar* cbval1 = new QChar(delimeter);
            qscilexernasm_setcommentdelimiter_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setCommentDelimiter(delimeter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldSyntaxBased(bool syntax_based) override {
        if (qscilexernasm_setfoldsyntaxbased_callback) {
            bool cbval1 = syntax_based;
            qscilexernasm_setfoldsyntaxbased_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setFoldSyntaxBased(syntax_based);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexernasm_language_callback) {
            const char* callback_ret = qscilexernasm_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerNASM::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexernasm_lexer_callback) {
            const char* callback_ret = qscilexernasm_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerNASM::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexernasm_lexerid_callback) {
            int callback_ret = qscilexernasm_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexernasm_autocompletionfillups_callback) {
            const char* callback_ret = qscilexernasm_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerNASM::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexernasm_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexernasm_autocompletionwordseparators_callback(this);
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
        return QsciLexerNASM::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexernasm_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexernasm_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexernasm_blocklookback_callback) {
            int callback_ret = qscilexernasm_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexernasm_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexernasm_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexernasm_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexernasm_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexernasm_bracestyle_callback) {
            int callback_ret = qscilexernasm_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexernasm_casesensitive_callback) {
            bool callback_ret = qscilexernasm_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerNASM::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexernasm_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexernasm_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexernasm_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexernasm_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexernasm_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexernasm_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexernasm_indentationguideview_callback) {
            int callback_ret = qscilexernasm_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexernasm_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexernasm_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexernasm_defaultstyle_callback) {
            int callback_ret = qscilexernasm_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexernasm_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexernasm_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerNASM::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexernasm_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexernasm_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexernasm_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexernasm_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexernasm_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexernasm_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexernasm_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexernasm_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexernasm_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexernasm_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerNASM::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexernasm_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexernasm_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexernasm_refreshproperties_callback) {
            qscilexernasm_refreshproperties_callback(this);
            return;
        }
        QsciLexerNASM::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexernasm_stylebitsneeded_callback) {
            int callback_ret = qscilexernasm_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerNASM::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexernasm_wordcharacters_callback) {
            const char* callback_ret = qscilexernasm_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerNASM::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexernasm_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexernasm_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexernasm_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexernasm_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexernasm_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexernasm_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexernasm_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexernasm_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexernasm_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexernasm_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerNASM::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexernasm_readproperties_callback) {
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
            bool callback_ret = qscilexernasm_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerNASM::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexernasm_writeproperties_callback) {
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
            bool callback_ret = qscilexernasm_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerNASM::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexernasm_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexernasm_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerNASM::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexernasm_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexernasm_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerNASM::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexernasm_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexernasm_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexernasm_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexernasm_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexernasm_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexernasm_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexernasm_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexernasm_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexernasm_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexernasm_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerNASM::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerNASM_SuperReadProperties(QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerNASM_SuperWriteProperties(const QsciLexerNASM* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerNASM_SuperTimerEvent(QsciLexerNASM* self, QTimerEvent* event);
    friend void QsciLexerNASM_SuperChildEvent(QsciLexerNASM* self, QChildEvent* event);
    friend void QsciLexerNASM_SuperCustomEvent(QsciLexerNASM* self, QEvent* event);
    friend void QsciLexerNASM_SuperConnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
    friend void QsciLexerNASM_SuperDisconnectNotify(QsciLexerNASM* self, const QMetaMethod* signal);
};

#endif
