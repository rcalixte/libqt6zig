#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERXML_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERXML_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerXML
class VirtualQsciLexerXML final : public QsciLexerXML {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerXML_MetaObject_Callback = QMetaObject* (*)(const QsciLexerXML*);
    using QsciLexerXML_Metacast_Callback = void* (*)(QsciLexerXML*, const char*);
    using QsciLexerXML_Metacall_Callback = int (*)(QsciLexerXML*, int, int, void**);
    using QsciLexerXML_SetFoldCompact_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetFoldPreprocessor_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_SetCaseSensitiveTags_Callback = void (*)(QsciLexerXML*, bool);
    using QsciLexerXML_Language_Callback = const char* (*)(const QsciLexerXML*);
    using QsciLexerXML_Lexer_Callback = const char* (*)(const QsciLexerXML*);
    using QsciLexerXML_LexerId_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerXML*);
    using QsciLexerXML_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerXML*);
    using QsciLexerXML_BlockEnd_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockLookback_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_BlockStart_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BlockStartKeyword_Callback = const char* (*)(const QsciLexerXML*, int*);
    using QsciLexerXML_BraceStyle_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_CaseSensitive_Callback = bool (*)(const QsciLexerXML*);
    using QsciLexerXML_Color_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_EolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Font_Callback = QFont* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_IndentationGuideView_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_Keywords_Callback = const char* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultStyle_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_Description_Callback = const char* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_Paper_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultColor2_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultEolFill_Callback = bool (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultFont2_Callback = QFont* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_DefaultPaper2_Callback = QColor* (*)(const QsciLexerXML*, int);
    using QsciLexerXML_SetEditor_Callback = void (*)(QsciLexerXML*, QsciScintilla*);
    using QsciLexerXML_RefreshProperties_Callback = void (*)(QsciLexerXML*);
    using QsciLexerXML_StyleBitsNeeded_Callback = int (*)(const QsciLexerXML*);
    using QsciLexerXML_WordCharacters_Callback = const char* (*)(const QsciLexerXML*);
    using QsciLexerXML_SetAutoIndentStyle_Callback = void (*)(QsciLexerXML*, int);
    using QsciLexerXML_SetColor_Callback = void (*)(QsciLexerXML*, QColor*, int);
    using QsciLexerXML_SetEolFill_Callback = void (*)(QsciLexerXML*, bool, int);
    using QsciLexerXML_SetFont_Callback = void (*)(QsciLexerXML*, QFont*, int);
    using QsciLexerXML_SetPaper_Callback = void (*)(QsciLexerXML*, QColor*, int);
    using QsciLexerXML_ReadProperties_Callback = bool (*)(QsciLexerXML*, QSettings*, const char*);
    using QsciLexerXML_WriteProperties_Callback = bool (*)(const QsciLexerXML*, QSettings*, const char*);
    using QsciLexerXML_Event_Callback = bool (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_EventFilter_Callback = bool (*)(QsciLexerXML*, QObject*, QEvent*);
    using QsciLexerXML_TimerEvent_Callback = void (*)(QsciLexerXML*, QTimerEvent*);
    using QsciLexerXML_ChildEvent_Callback = void (*)(QsciLexerXML*, QChildEvent*);
    using QsciLexerXML_CustomEvent_Callback = void (*)(QsciLexerXML*, QEvent*);
    using QsciLexerXML_ConnectNotify_Callback = void (*)(QsciLexerXML*, QMetaMethod*);
    using QsciLexerXML_DisconnectNotify_Callback = void (*)(QsciLexerXML*, QMetaMethod*);
    using QsciLexerXML::bytesAsText;
    using QsciLexerXML::isSignalConnected;
    using QsciLexerXML::receivers;
    using QsciLexerXML::sender;
    using QsciLexerXML::senderSignalIndex;
    using QsciLexerXML::textAsBytes;

    // Instance callback storage
    QsciLexerXML_MetaObject_Callback qscilexerxml_metaobject_callback = nullptr;
    QsciLexerXML_Metacast_Callback qscilexerxml_metacast_callback = nullptr;
    QsciLexerXML_Metacall_Callback qscilexerxml_metacall_callback = nullptr;
    QsciLexerXML_SetFoldCompact_Callback qscilexerxml_setfoldcompact_callback = nullptr;
    QsciLexerXML_SetFoldPreprocessor_Callback qscilexerxml_setfoldpreprocessor_callback = nullptr;
    QsciLexerXML_SetCaseSensitiveTags_Callback qscilexerxml_setcasesensitivetags_callback = nullptr;
    QsciLexerXML_Language_Callback qscilexerxml_language_callback = nullptr;
    QsciLexerXML_Lexer_Callback qscilexerxml_lexer_callback = nullptr;
    QsciLexerXML_LexerId_Callback qscilexerxml_lexerid_callback = nullptr;
    QsciLexerXML_AutoCompletionFillups_Callback qscilexerxml_autocompletionfillups_callback = nullptr;
    QsciLexerXML_AutoCompletionWordSeparators_Callback qscilexerxml_autocompletionwordseparators_callback = nullptr;
    QsciLexerXML_BlockEnd_Callback qscilexerxml_blockend_callback = nullptr;
    QsciLexerXML_BlockLookback_Callback qscilexerxml_blocklookback_callback = nullptr;
    QsciLexerXML_BlockStart_Callback qscilexerxml_blockstart_callback = nullptr;
    QsciLexerXML_BlockStartKeyword_Callback qscilexerxml_blockstartkeyword_callback = nullptr;
    QsciLexerXML_BraceStyle_Callback qscilexerxml_bracestyle_callback = nullptr;
    QsciLexerXML_CaseSensitive_Callback qscilexerxml_casesensitive_callback = nullptr;
    QsciLexerXML_Color_Callback qscilexerxml_color_callback = nullptr;
    QsciLexerXML_EolFill_Callback qscilexerxml_eolfill_callback = nullptr;
    QsciLexerXML_Font_Callback qscilexerxml_font_callback = nullptr;
    QsciLexerXML_IndentationGuideView_Callback qscilexerxml_indentationguideview_callback = nullptr;
    QsciLexerXML_Keywords_Callback qscilexerxml_keywords_callback = nullptr;
    QsciLexerXML_DefaultStyle_Callback qscilexerxml_defaultstyle_callback = nullptr;
    QsciLexerXML_Description_Callback qscilexerxml_description_callback = nullptr;
    QsciLexerXML_Paper_Callback qscilexerxml_paper_callback = nullptr;
    QsciLexerXML_DefaultColor2_Callback qscilexerxml_defaultcolor2_callback = nullptr;
    QsciLexerXML_DefaultEolFill_Callback qscilexerxml_defaulteolfill_callback = nullptr;
    QsciLexerXML_DefaultFont2_Callback qscilexerxml_defaultfont2_callback = nullptr;
    QsciLexerXML_DefaultPaper2_Callback qscilexerxml_defaultpaper2_callback = nullptr;
    QsciLexerXML_SetEditor_Callback qscilexerxml_seteditor_callback = nullptr;
    QsciLexerXML_RefreshProperties_Callback qscilexerxml_refreshproperties_callback = nullptr;
    QsciLexerXML_StyleBitsNeeded_Callback qscilexerxml_stylebitsneeded_callback = nullptr;
    QsciLexerXML_WordCharacters_Callback qscilexerxml_wordcharacters_callback = nullptr;
    QsciLexerXML_SetAutoIndentStyle_Callback qscilexerxml_setautoindentstyle_callback = nullptr;
    QsciLexerXML_SetColor_Callback qscilexerxml_setcolor_callback = nullptr;
    QsciLexerXML_SetEolFill_Callback qscilexerxml_seteolfill_callback = nullptr;
    QsciLexerXML_SetFont_Callback qscilexerxml_setfont_callback = nullptr;
    QsciLexerXML_SetPaper_Callback qscilexerxml_setpaper_callback = nullptr;
    QsciLexerXML_ReadProperties_Callback qscilexerxml_readproperties_callback = nullptr;
    QsciLexerXML_WriteProperties_Callback qscilexerxml_writeproperties_callback = nullptr;
    QsciLexerXML_Event_Callback qscilexerxml_event_callback = nullptr;
    QsciLexerXML_EventFilter_Callback qscilexerxml_eventfilter_callback = nullptr;
    QsciLexerXML_TimerEvent_Callback qscilexerxml_timerevent_callback = nullptr;
    QsciLexerXML_ChildEvent_Callback qscilexerxml_childevent_callback = nullptr;
    QsciLexerXML_CustomEvent_Callback qscilexerxml_customevent_callback = nullptr;
    QsciLexerXML_ConnectNotify_Callback qscilexerxml_connectnotify_callback = nullptr;
    QsciLexerXML_DisconnectNotify_Callback qscilexerxml_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerXML {
        using QsciLexerXML::childEvent;
        using QsciLexerXML::connectNotify;
        using QsciLexerXML::customEvent;
        using QsciLexerXML::disconnectNotify;
        using QsciLexerXML::readProperties;
        using QsciLexerXML::timerEvent;
        using QsciLexerXML::writeProperties;
    };

    VirtualQsciLexerXML() : QsciLexerXML() {};
    VirtualQsciLexerXML(QObject* parent) : QsciLexerXML(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerxml_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerxml_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerXML::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerxml_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerxml_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerxml_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerxml_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerxml_setfoldcompact_callback) {
            bool cbval1 = fold;
            qscilexerxml_setfoldcompact_callback(this, cbval1);
            return;
        }
        QsciLexerXML::setFoldCompact(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexerxml_setfoldpreprocessor_callback) {
            bool cbval1 = fold;
            qscilexerxml_setfoldpreprocessor_callback(this, cbval1);
            return;
        }
        QsciLexerXML::setFoldPreprocessor(fold);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCaseSensitiveTags(bool sens) override {
        if (qscilexerxml_setcasesensitivetags_callback) {
            bool cbval1 = sens;
            qscilexerxml_setcasesensitivetags_callback(this, cbval1);
            return;
        }
        QsciLexerXML::setCaseSensitiveTags(sens);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerxml_language_callback) {
            const char* callback_ret = qscilexerxml_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerXML::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerxml_lexer_callback) {
            const char* callback_ret = qscilexerxml_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerXML::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerxml_lexerid_callback) {
            int callback_ret = qscilexerxml_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerxml_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerxml_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerXML::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerxml_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerxml_autocompletionwordseparators_callback(this);
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
        return QsciLexerXML::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerxml_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerxml_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerxml_blocklookback_callback) {
            int callback_ret = qscilexerxml_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerxml_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerxml_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerxml_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerxml_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerxml_bracestyle_callback) {
            int callback_ret = qscilexerxml_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerxml_casesensitive_callback) {
            bool callback_ret = qscilexerxml_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerXML::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerxml_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerxml_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerxml_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerxml_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerxml_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerxml_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerxml_indentationguideview_callback) {
            int callback_ret = qscilexerxml_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerxml_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerxml_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerxml_defaultstyle_callback) {
            int callback_ret = qscilexerxml_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerxml_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerxml_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerXML::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerxml_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerxml_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerxml_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerxml_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerxml_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerxml_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerxml_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerxml_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerxml_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerxml_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerXML::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerxml_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerxml_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerXML::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerxml_refreshproperties_callback) {
            qscilexerxml_refreshproperties_callback(this);
            return;
        }
        QsciLexerXML::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerxml_stylebitsneeded_callback) {
            int callback_ret = qscilexerxml_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerXML::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerxml_wordcharacters_callback) {
            const char* callback_ret = qscilexerxml_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerXML::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerxml_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerxml_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerXML::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerxml_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerxml_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerxml_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerxml_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerxml_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerxml_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerxml_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerxml_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerXML::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerxml_readproperties_callback) {
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
            bool callback_ret = qscilexerxml_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerXML::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerxml_writeproperties_callback) {
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
            bool callback_ret = qscilexerxml_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerXML::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerxml_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerxml_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerXML::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerxml_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerxml_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerXML::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerxml_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerxml_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerXML::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerxml_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerxml_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerXML::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerxml_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerxml_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerXML::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerxml_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerXML::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerxml_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerxml_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerXML::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerXML_SuperReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerXML_SuperWriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerXML_SuperTimerEvent(QsciLexerXML* self, QTimerEvent* event);
    friend void QsciLexerXML_SuperChildEvent(QsciLexerXML* self, QChildEvent* event);
    friend void QsciLexerXML_SuperCustomEvent(QsciLexerXML* self, QEvent* event);
    friend void QsciLexerXML_SuperConnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
    friend void QsciLexerXML_SuperDisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal);
};

#endif
