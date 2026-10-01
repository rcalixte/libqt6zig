#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERYAML_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERYAML_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerYAML
class VirtualQsciLexerYAML final : public QsciLexerYAML {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerYAML_MetaObject_Callback = QMetaObject* (*)(const QsciLexerYAML*);
    using QsciLexerYAML_Metacast_Callback = void* (*)(QsciLexerYAML*, const char*);
    using QsciLexerYAML_Metacall_Callback = int (*)(QsciLexerYAML*, int, int, void**);
    using QsciLexerYAML_SetFoldComments_Callback = void (*)(QsciLexerYAML*, bool);
    using QsciLexerYAML_Language_Callback = const char* (*)(const QsciLexerYAML*);
    using QsciLexerYAML_Lexer_Callback = const char* (*)(const QsciLexerYAML*);
    using QsciLexerYAML_LexerId_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerYAML*);
    using QsciLexerYAML_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerYAML*);
    using QsciLexerYAML_BlockEnd_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BlockLookback_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_BlockStart_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerYAML*, int*);
    using QsciLexerYAML_BraceStyle_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_CaseSensitive_Callback = bool (*)(const QsciLexerYAML*);
    using QsciLexerYAML_Color_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_EolFill_Callback = bool (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_Font_Callback = QFont* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_IndentationGuideView_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_Keywords_Callback = const char* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultStyle_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_Description_Callback = const char* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_Paper_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultColor2_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultEolFill_Callback = bool (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultFont2_Callback = QFont* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_DefaultPaper2_Callback = QColor* (*)(const QsciLexerYAML*, int);
    using QsciLexerYAML_SetEditor_Callback = void (*)(QsciLexerYAML*, QsciScintilla*);
    using QsciLexerYAML_RefreshProperties_Callback = void (*)(QsciLexerYAML*);
    using QsciLexerYAML_StyleBitsNeeded_Callback = int (*)(const QsciLexerYAML*);
    using QsciLexerYAML_WordCharacters_Callback = const char* (*)(const QsciLexerYAML*);
    using QsciLexerYAML_SetAutoIndentStyle_Callback = void (*)(QsciLexerYAML*, int);
    using QsciLexerYAML_SetColor_Callback = void (*)(QsciLexerYAML*, QColor*, int);
    using QsciLexerYAML_SetEolFill_Callback = void (*)(QsciLexerYAML*, bool, int);
    using QsciLexerYAML_SetFont_Callback = void (*)(QsciLexerYAML*, QFont*, int);
    using QsciLexerYAML_SetPaper_Callback = void (*)(QsciLexerYAML*, QColor*, int);
    using QsciLexerYAML_ReadProperties_Callback = bool (*)(QsciLexerYAML*, QSettings*, const char*);
    using QsciLexerYAML_WriteProperties_Callback = bool (*)(const QsciLexerYAML*, QSettings*, const char*);
    using QsciLexerYAML_Event_Callback = bool (*)(QsciLexerYAML*, QEvent*);
    using QsciLexerYAML_EventFilter_Callback = bool (*)(QsciLexerYAML*, QObject*, QEvent*);
    using QsciLexerYAML_TimerEvent_Callback = void (*)(QsciLexerYAML*, QTimerEvent*);
    using QsciLexerYAML_ChildEvent_Callback = void (*)(QsciLexerYAML*, QChildEvent*);
    using QsciLexerYAML_CustomEvent_Callback = void (*)(QsciLexerYAML*, QEvent*);
    using QsciLexerYAML_ConnectNotify_Callback = void (*)(QsciLexerYAML*, QMetaMethod*);
    using QsciLexerYAML_DisconnectNotify_Callback = void (*)(QsciLexerYAML*, QMetaMethod*);
    using QsciLexerYAML::bytesAsText;
    using QsciLexerYAML::isSignalConnected;
    using QsciLexerYAML::receivers;
    using QsciLexerYAML::sender;
    using QsciLexerYAML::senderSignalIndex;
    using QsciLexerYAML::textAsBytes;

    // Instance callback storage
    QsciLexerYAML_MetaObject_Callback qscilexeryaml_metaobject_callback = nullptr;
    QsciLexerYAML_Metacast_Callback qscilexeryaml_metacast_callback = nullptr;
    QsciLexerYAML_Metacall_Callback qscilexeryaml_metacall_callback = nullptr;
    QsciLexerYAML_SetFoldComments_Callback qscilexeryaml_setfoldcomments_callback = nullptr;
    QsciLexerYAML_Language_Callback qscilexeryaml_language_callback = nullptr;
    QsciLexerYAML_Lexer_Callback qscilexeryaml_lexer_callback = nullptr;
    QsciLexerYAML_LexerId_Callback qscilexeryaml_lexerid_callback = nullptr;
    QsciLexerYAML_AutoCompletionFillups_Callback qscilexeryaml_autocompletionfillups_callback = nullptr;
    QsciLexerYAML_AutoCompletionWordSeparators_Callback qscilexeryaml_autocompletionwordseparators_callback = nullptr;
    QsciLexerYAML_BlockEnd_Callback qscilexeryaml_blockend_callback = nullptr;
    QsciLexerYAML_BlockLookback_Callback qscilexeryaml_blocklookback_callback = nullptr;
    QsciLexerYAML_BlockStart_Callback qscilexeryaml_blockstart_callback = nullptr;
    QsciLexerYAML_BlockStartKeyword_Callback qscilexeryaml_blockstartkeyword_callback = nullptr;
    QsciLexerYAML_BraceStyle_Callback qscilexeryaml_bracestyle_callback = nullptr;
    QsciLexerYAML_CaseSensitive_Callback qscilexeryaml_casesensitive_callback = nullptr;
    QsciLexerYAML_Color_Callback qscilexeryaml_color_callback = nullptr;
    QsciLexerYAML_EolFill_Callback qscilexeryaml_eolfill_callback = nullptr;
    QsciLexerYAML_Font_Callback qscilexeryaml_font_callback = nullptr;
    QsciLexerYAML_IndentationGuideView_Callback qscilexeryaml_indentationguideview_callback = nullptr;
    QsciLexerYAML_Keywords_Callback qscilexeryaml_keywords_callback = nullptr;
    QsciLexerYAML_DefaultStyle_Callback qscilexeryaml_defaultstyle_callback = nullptr;
    QsciLexerYAML_Description_Callback qscilexeryaml_description_callback = nullptr;
    QsciLexerYAML_Paper_Callback qscilexeryaml_paper_callback = nullptr;
    QsciLexerYAML_DefaultColor2_Callback qscilexeryaml_defaultcolor2_callback = nullptr;
    QsciLexerYAML_DefaultEolFill_Callback qscilexeryaml_defaulteolfill_callback = nullptr;
    QsciLexerYAML_DefaultFont2_Callback qscilexeryaml_defaultfont2_callback = nullptr;
    QsciLexerYAML_DefaultPaper2_Callback qscilexeryaml_defaultpaper2_callback = nullptr;
    QsciLexerYAML_SetEditor_Callback qscilexeryaml_seteditor_callback = nullptr;
    QsciLexerYAML_RefreshProperties_Callback qscilexeryaml_refreshproperties_callback = nullptr;
    QsciLexerYAML_StyleBitsNeeded_Callback qscilexeryaml_stylebitsneeded_callback = nullptr;
    QsciLexerYAML_WordCharacters_Callback qscilexeryaml_wordcharacters_callback = nullptr;
    QsciLexerYAML_SetAutoIndentStyle_Callback qscilexeryaml_setautoindentstyle_callback = nullptr;
    QsciLexerYAML_SetColor_Callback qscilexeryaml_setcolor_callback = nullptr;
    QsciLexerYAML_SetEolFill_Callback qscilexeryaml_seteolfill_callback = nullptr;
    QsciLexerYAML_SetFont_Callback qscilexeryaml_setfont_callback = nullptr;
    QsciLexerYAML_SetPaper_Callback qscilexeryaml_setpaper_callback = nullptr;
    QsciLexerYAML_ReadProperties_Callback qscilexeryaml_readproperties_callback = nullptr;
    QsciLexerYAML_WriteProperties_Callback qscilexeryaml_writeproperties_callback = nullptr;
    QsciLexerYAML_Event_Callback qscilexeryaml_event_callback = nullptr;
    QsciLexerYAML_EventFilter_Callback qscilexeryaml_eventfilter_callback = nullptr;
    QsciLexerYAML_TimerEvent_Callback qscilexeryaml_timerevent_callback = nullptr;
    QsciLexerYAML_ChildEvent_Callback qscilexeryaml_childevent_callback = nullptr;
    QsciLexerYAML_CustomEvent_Callback qscilexeryaml_customevent_callback = nullptr;
    QsciLexerYAML_ConnectNotify_Callback qscilexeryaml_connectnotify_callback = nullptr;
    QsciLexerYAML_DisconnectNotify_Callback qscilexeryaml_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerYAML {
        using QsciLexerYAML::childEvent;
        using QsciLexerYAML::connectNotify;
        using QsciLexerYAML::customEvent;
        using QsciLexerYAML::disconnectNotify;
        using QsciLexerYAML::readProperties;
        using QsciLexerYAML::timerEvent;
        using QsciLexerYAML::writeProperties;
    };

    VirtualQsciLexerYAML() : QsciLexerYAML() {};
    VirtualQsciLexerYAML(QObject* parent) : QsciLexerYAML(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexeryaml_metaobject_callback) {
            QMetaObject* callback_ret = qscilexeryaml_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerYAML::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexeryaml_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexeryaml_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexeryaml_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexeryaml_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexeryaml_setfoldcomments_callback) {
            bool cbval1 = fold;
            qscilexeryaml_setfoldcomments_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::setFoldComments(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexeryaml_language_callback) {
            const char* callback_ret = qscilexeryaml_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerYAML::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexeryaml_lexer_callback) {
            const char* callback_ret = qscilexeryaml_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerYAML::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexeryaml_lexerid_callback) {
            int callback_ret = qscilexeryaml_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexeryaml_autocompletionfillups_callback) {
            const char* callback_ret = qscilexeryaml_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerYAML::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexeryaml_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexeryaml_autocompletionwordseparators_callback(this);
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
        return QsciLexerYAML::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexeryaml_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeryaml_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexeryaml_blocklookback_callback) {
            int callback_ret = qscilexeryaml_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexeryaml_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeryaml_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexeryaml_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexeryaml_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexeryaml_bracestyle_callback) {
            int callback_ret = qscilexeryaml_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexeryaml_casesensitive_callback) {
            bool callback_ret = qscilexeryaml_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerYAML::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexeryaml_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeryaml_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexeryaml_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeryaml_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexeryaml_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeryaml_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexeryaml_indentationguideview_callback) {
            int callback_ret = qscilexeryaml_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexeryaml_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexeryaml_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexeryaml_defaultstyle_callback) {
            int callback_ret = qscilexeryaml_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexeryaml_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexeryaml_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerYAML::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexeryaml_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeryaml_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexeryaml_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeryaml_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexeryaml_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexeryaml_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexeryaml_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexeryaml_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexeryaml_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexeryaml_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerYAML::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexeryaml_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexeryaml_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexeryaml_refreshproperties_callback) {
            qscilexeryaml_refreshproperties_callback(this);
            return;
        }
        QsciLexerYAML::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexeryaml_stylebitsneeded_callback) {
            int callback_ret = qscilexeryaml_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerYAML::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexeryaml_wordcharacters_callback) {
            const char* callback_ret = qscilexeryaml_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerYAML::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexeryaml_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexeryaml_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexeryaml_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeryaml_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerYAML::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexeryaml_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexeryaml_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerYAML::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexeryaml_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexeryaml_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerYAML::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexeryaml_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexeryaml_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerYAML::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexeryaml_readproperties_callback) {
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
            bool callback_ret = qscilexeryaml_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerYAML::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexeryaml_writeproperties_callback) {
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
            bool callback_ret = qscilexeryaml_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerYAML::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexeryaml_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexeryaml_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerYAML::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexeryaml_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexeryaml_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerYAML::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexeryaml_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexeryaml_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexeryaml_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexeryaml_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexeryaml_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexeryaml_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexeryaml_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeryaml_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexeryaml_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexeryaml_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerYAML::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerYAML_SuperReadProperties(QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerYAML_SuperWriteProperties(const QsciLexerYAML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerYAML_SuperTimerEvent(QsciLexerYAML* self, QTimerEvent* event);
    friend void QsciLexerYAML_SuperChildEvent(QsciLexerYAML* self, QChildEvent* event);
    friend void QsciLexerYAML_SuperCustomEvent(QsciLexerYAML* self, QEvent* event);
    friend void QsciLexerYAML_SuperConnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
    friend void QsciLexerYAML_SuperDisconnectNotify(QsciLexerYAML* self, const QMetaMethod* signal);
};

#endif
