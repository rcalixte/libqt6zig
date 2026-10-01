#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERBATCH_HXX
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCILEXERBATCH_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerBatch
class VirtualQsciLexerBatch final : public QsciLexerBatch {
  public:
    // Virtual class public types (including callbacks and access types)
    using QsciLexerBatch_MetaObject_Callback = QMetaObject* (*)(const QsciLexerBatch*);
    using QsciLexerBatch_Metacast_Callback = void* (*)(QsciLexerBatch*, const char*);
    using QsciLexerBatch_Metacall_Callback = int (*)(QsciLexerBatch*, int, int, void**);
    using QsciLexerBatch_Language_Callback = const char* (*)(const QsciLexerBatch*);
    using QsciLexerBatch_Lexer_Callback = const char* (*)(const QsciLexerBatch*);
    using QsciLexerBatch_LexerId_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_AutoCompletionFillups_Callback = const char* (*)(const QsciLexerBatch*);
    using QsciLexerBatch_AutoCompletionWordSeparators_Callback = const char** (*)(const QsciLexerBatch*);
    using QsciLexerBatch_BlockEnd_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockLookback_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_BlockStart_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BlockStartKeyword_Callback = const char* (*)(const QsciLexerBatch*, int*);
    using QsciLexerBatch_BraceStyle_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_CaseSensitive_Callback = bool (*)(const QsciLexerBatch*);
    using QsciLexerBatch_Color_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_EolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Font_Callback = QFont* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_IndentationGuideView_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_Keywords_Callback = const char* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultStyle_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_Description_Callback = const char* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_Paper_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultColor2_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultEolFill_Callback = bool (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultFont2_Callback = QFont* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_DefaultPaper2_Callback = QColor* (*)(const QsciLexerBatch*, int);
    using QsciLexerBatch_SetEditor_Callback = void (*)(QsciLexerBatch*, QsciScintilla*);
    using QsciLexerBatch_RefreshProperties_Callback = void (*)(QsciLexerBatch*);
    using QsciLexerBatch_StyleBitsNeeded_Callback = int (*)(const QsciLexerBatch*);
    using QsciLexerBatch_WordCharacters_Callback = const char* (*)(const QsciLexerBatch*);
    using QsciLexerBatch_SetAutoIndentStyle_Callback = void (*)(QsciLexerBatch*, int);
    using QsciLexerBatch_SetColor_Callback = void (*)(QsciLexerBatch*, QColor*, int);
    using QsciLexerBatch_SetEolFill_Callback = void (*)(QsciLexerBatch*, bool, int);
    using QsciLexerBatch_SetFont_Callback = void (*)(QsciLexerBatch*, QFont*, int);
    using QsciLexerBatch_SetPaper_Callback = void (*)(QsciLexerBatch*, QColor*, int);
    using QsciLexerBatch_ReadProperties_Callback = bool (*)(QsciLexerBatch*, QSettings*, const char*);
    using QsciLexerBatch_WriteProperties_Callback = bool (*)(const QsciLexerBatch*, QSettings*, const char*);
    using QsciLexerBatch_Event_Callback = bool (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_EventFilter_Callback = bool (*)(QsciLexerBatch*, QObject*, QEvent*);
    using QsciLexerBatch_TimerEvent_Callback = void (*)(QsciLexerBatch*, QTimerEvent*);
    using QsciLexerBatch_ChildEvent_Callback = void (*)(QsciLexerBatch*, QChildEvent*);
    using QsciLexerBatch_CustomEvent_Callback = void (*)(QsciLexerBatch*, QEvent*);
    using QsciLexerBatch_ConnectNotify_Callback = void (*)(QsciLexerBatch*, QMetaMethod*);
    using QsciLexerBatch_DisconnectNotify_Callback = void (*)(QsciLexerBatch*, QMetaMethod*);
    using QsciLexerBatch::bytesAsText;
    using QsciLexerBatch::isSignalConnected;
    using QsciLexerBatch::receivers;
    using QsciLexerBatch::sender;
    using QsciLexerBatch::senderSignalIndex;
    using QsciLexerBatch::textAsBytes;

    // Instance callback storage
    QsciLexerBatch_MetaObject_Callback qscilexerbatch_metaobject_callback = nullptr;
    QsciLexerBatch_Metacast_Callback qscilexerbatch_metacast_callback = nullptr;
    QsciLexerBatch_Metacall_Callback qscilexerbatch_metacall_callback = nullptr;
    QsciLexerBatch_Language_Callback qscilexerbatch_language_callback = nullptr;
    QsciLexerBatch_Lexer_Callback qscilexerbatch_lexer_callback = nullptr;
    QsciLexerBatch_LexerId_Callback qscilexerbatch_lexerid_callback = nullptr;
    QsciLexerBatch_AutoCompletionFillups_Callback qscilexerbatch_autocompletionfillups_callback = nullptr;
    QsciLexerBatch_AutoCompletionWordSeparators_Callback qscilexerbatch_autocompletionwordseparators_callback = nullptr;
    QsciLexerBatch_BlockEnd_Callback qscilexerbatch_blockend_callback = nullptr;
    QsciLexerBatch_BlockLookback_Callback qscilexerbatch_blocklookback_callback = nullptr;
    QsciLexerBatch_BlockStart_Callback qscilexerbatch_blockstart_callback = nullptr;
    QsciLexerBatch_BlockStartKeyword_Callback qscilexerbatch_blockstartkeyword_callback = nullptr;
    QsciLexerBatch_BraceStyle_Callback qscilexerbatch_bracestyle_callback = nullptr;
    QsciLexerBatch_CaseSensitive_Callback qscilexerbatch_casesensitive_callback = nullptr;
    QsciLexerBatch_Color_Callback qscilexerbatch_color_callback = nullptr;
    QsciLexerBatch_EolFill_Callback qscilexerbatch_eolfill_callback = nullptr;
    QsciLexerBatch_Font_Callback qscilexerbatch_font_callback = nullptr;
    QsciLexerBatch_IndentationGuideView_Callback qscilexerbatch_indentationguideview_callback = nullptr;
    QsciLexerBatch_Keywords_Callback qscilexerbatch_keywords_callback = nullptr;
    QsciLexerBatch_DefaultStyle_Callback qscilexerbatch_defaultstyle_callback = nullptr;
    QsciLexerBatch_Description_Callback qscilexerbatch_description_callback = nullptr;
    QsciLexerBatch_Paper_Callback qscilexerbatch_paper_callback = nullptr;
    QsciLexerBatch_DefaultColor2_Callback qscilexerbatch_defaultcolor2_callback = nullptr;
    QsciLexerBatch_DefaultEolFill_Callback qscilexerbatch_defaulteolfill_callback = nullptr;
    QsciLexerBatch_DefaultFont2_Callback qscilexerbatch_defaultfont2_callback = nullptr;
    QsciLexerBatch_DefaultPaper2_Callback qscilexerbatch_defaultpaper2_callback = nullptr;
    QsciLexerBatch_SetEditor_Callback qscilexerbatch_seteditor_callback = nullptr;
    QsciLexerBatch_RefreshProperties_Callback qscilexerbatch_refreshproperties_callback = nullptr;
    QsciLexerBatch_StyleBitsNeeded_Callback qscilexerbatch_stylebitsneeded_callback = nullptr;
    QsciLexerBatch_WordCharacters_Callback qscilexerbatch_wordcharacters_callback = nullptr;
    QsciLexerBatch_SetAutoIndentStyle_Callback qscilexerbatch_setautoindentstyle_callback = nullptr;
    QsciLexerBatch_SetColor_Callback qscilexerbatch_setcolor_callback = nullptr;
    QsciLexerBatch_SetEolFill_Callback qscilexerbatch_seteolfill_callback = nullptr;
    QsciLexerBatch_SetFont_Callback qscilexerbatch_setfont_callback = nullptr;
    QsciLexerBatch_SetPaper_Callback qscilexerbatch_setpaper_callback = nullptr;
    QsciLexerBatch_ReadProperties_Callback qscilexerbatch_readproperties_callback = nullptr;
    QsciLexerBatch_WriteProperties_Callback qscilexerbatch_writeproperties_callback = nullptr;
    QsciLexerBatch_Event_Callback qscilexerbatch_event_callback = nullptr;
    QsciLexerBatch_EventFilter_Callback qscilexerbatch_eventfilter_callback = nullptr;
    QsciLexerBatch_TimerEvent_Callback qscilexerbatch_timerevent_callback = nullptr;
    QsciLexerBatch_ChildEvent_Callback qscilexerbatch_childevent_callback = nullptr;
    QsciLexerBatch_CustomEvent_Callback qscilexerbatch_customevent_callback = nullptr;
    QsciLexerBatch_ConnectNotify_Callback qscilexerbatch_connectnotify_callback = nullptr;
    QsciLexerBatch_DisconnectNotify_Callback qscilexerbatch_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QsciLexerBatch {
        using QsciLexerBatch::childEvent;
        using QsciLexerBatch::connectNotify;
        using QsciLexerBatch::customEvent;
        using QsciLexerBatch::disconnectNotify;
        using QsciLexerBatch::readProperties;
        using QsciLexerBatch::timerEvent;
        using QsciLexerBatch::writeProperties;
    };

    VirtualQsciLexerBatch() : QsciLexerBatch() {};
    VirtualQsciLexerBatch(QObject* parent) : QsciLexerBatch(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscilexerbatch_metaobject_callback) {
            QMetaObject* callback_ret = qscilexerbatch_metaobject_callback(this);
            return callback_ret;
        }
        return QsciLexerBatch::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscilexerbatch_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscilexerbatch_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerbatch_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscilexerbatch_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        if (qscilexerbatch_language_callback) {
            const char* callback_ret = qscilexerbatch_language_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerBatch::language called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerbatch_lexer_callback) {
            const char* callback_ret = qscilexerbatch_lexer_callback(this);
            return callback_ret;
        }
        return QsciLexerBatch::lexer();
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerbatch_lexerid_callback) {
            int callback_ret = qscilexerbatch_lexerid_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::lexerId();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerbatch_autocompletionfillups_callback) {
            const char* callback_ret = qscilexerbatch_autocompletionfillups_callback(this);
            return callback_ret;
        }
        return QsciLexerBatch::autoCompletionFillups();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> autoCompletionWordSeparators() const override {
        if (qscilexerbatch_autocompletionwordseparators_callback) {
            const char** callback_ret = qscilexerbatch_autocompletionwordseparators_callback(this);
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
        return QsciLexerBatch::autoCompletionWordSeparators();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerbatch_blockend_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbatch_blockend_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockEnd(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerbatch_blocklookback_callback) {
            int callback_ret = qscilexerbatch_blocklookback_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::blockLookback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerbatch_blockstart_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbatch_blockstart_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockStart(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerbatch_blockstartkeyword_callback) {
            int* cbval1 = style;
            const char* callback_ret = qscilexerbatch_blockstartkeyword_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::blockStartKeyword(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerbatch_bracestyle_callback) {
            int callback_ret = qscilexerbatch_bracestyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::braceStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerbatch_casesensitive_callback) {
            bool callback_ret = qscilexerbatch_casesensitive_callback(this);
            return callback_ret;
        }
        return QsciLexerBatch::caseSensitive();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerbatch_color_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbatch_color_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::color(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerbatch_eolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerbatch_eolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::eolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerbatch_font_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerbatch_font_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::font(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerbatch_indentationguideview_callback) {
            int callback_ret = qscilexerbatch_indentationguideview_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::indentationGuideView();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerbatch_keywords_callback) {
            int cbval1 = set;
            const char* callback_ret = qscilexerbatch_keywords_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::keywords(set);
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerbatch_defaultstyle_callback) {
            int callback_ret = qscilexerbatch_defaultstyle_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::defaultStyle();
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        if (qscilexerbatch_description_callback) {
            int cbval1 = style;
            const char* callback_ret = qscilexerbatch_description_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QsciLexerBatch::description called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerbatch_paper_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbatch_paper_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::paper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerbatch_defaultcolor2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbatch_defaultcolor2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::defaultColor(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerbatch_defaulteolfill_callback) {
            int cbval1 = style;
            bool callback_ret = qscilexerbatch_defaulteolfill_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::defaultEolFill(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerbatch_defaultfont2_callback) {
            int cbval1 = style;
            QFont* callback_ret = qscilexerbatch_defaultfont2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::defaultFont(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerbatch_defaultpaper2_callback) {
            int cbval1 = style;
            QColor* callback_ret = qscilexerbatch_defaultpaper2_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QsciLexerBatch::defaultPaper(style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerbatch_seteditor_callback) {
            QsciScintilla* cbval1 = editor;
            qscilexerbatch_seteditor_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::setEditor(editor);
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerbatch_refreshproperties_callback) {
            qscilexerbatch_refreshproperties_callback(this);
            return;
        }
        QsciLexerBatch::refreshProperties();
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerbatch_stylebitsneeded_callback) {
            int callback_ret = qscilexerbatch_stylebitsneeded_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QsciLexerBatch::styleBitsNeeded();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerbatch_wordcharacters_callback) {
            const char* callback_ret = qscilexerbatch_wordcharacters_callback(this);
            return callback_ret;
        }
        return QsciLexerBatch::wordCharacters();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerbatch_setautoindentstyle_callback) {
            int cbval1 = autoindentstyle;
            qscilexerbatch_setautoindentstyle_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::setAutoIndentStyle(autoindentstyle);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerbatch_setcolor_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerbatch_setcolor_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setColor(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerbatch_seteolfill_callback) {
            bool cbval1 = eoffill;
            int cbval2 = style;
            qscilexerbatch_seteolfill_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setEolFill(eoffill, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerbatch_setfont_callback) {
            const QFont& f_ret = f;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&f_ret);
            int cbval2 = style;
            qscilexerbatch_setfont_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setFont(f, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerbatch_setpaper_callback) {
            const QColor& c_ret = c;
            // Cast returned reference into pointer
            QColor* cbval1 = const_cast<QColor*>(&c_ret);
            int cbval2 = style;
            qscilexerbatch_setpaper_callback(this, cbval1, cbval2);
            return;
        }
        QsciLexerBatch::setPaper(c, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerbatch_readproperties_callback) {
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
            bool callback_ret = qscilexerbatch_readproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerBatch::readProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerbatch_writeproperties_callback) {
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
            bool callback_ret = qscilexerbatch_writeproperties_callback(this, cbval1, cbval2);
            libqt_free(prefix_str);
            return callback_ret;
        }
        return QsciLexerBatch::writeProperties(qs, prefix);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerbatch_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qscilexerbatch_event_callback(this, cbval1);
            return callback_ret;
        }
        return QsciLexerBatch::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerbatch_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qscilexerbatch_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QsciLexerBatch::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerbatch_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscilexerbatch_timerevent_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerbatch_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscilexerbatch_childevent_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerbatch_customevent_callback) {
            QEvent* cbval1 = event;
            qscilexerbatch_customevent_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerbatch_connectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerbatch_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscilexerbatch_disconnectnotify_callback(this, cbval1);
            return;
        }
        QsciLexerBatch::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QsciLexerBatch_SuperReadProperties(QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend bool QsciLexerBatch_SuperWriteProperties(const QsciLexerBatch* self, QSettings* qs, const libqt_string prefix);
    friend void QsciLexerBatch_SuperTimerEvent(QsciLexerBatch* self, QTimerEvent* event);
    friend void QsciLexerBatch_SuperChildEvent(QsciLexerBatch* self, QChildEvent* event);
    friend void QsciLexerBatch_SuperCustomEvent(QsciLexerBatch* self, QEvent* event);
    friend void QsciLexerBatch_SuperConnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
    friend void QsciLexerBatch_SuperDisconnectNotify(QsciLexerBatch* self, const QMetaMethod* signal);
};

#endif
