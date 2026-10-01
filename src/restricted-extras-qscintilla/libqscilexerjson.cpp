#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QTimerEvent>
#include <qscilexerjson.h>
#include "libqscilexerjson.h"
#include "libqscilexerjson.hxx"

QsciLexerJSON* QsciLexerJSON_new() {
    return new VirtualQsciLexerJSON();
}

QsciLexerJSON* QsciLexerJSON_new2(QObject* parent) {
    return new VirtualQsciLexerJSON(parent);
}

QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJSON_Metacall(QsciLexerJSON* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerJSON_Tr(const char* s) {
    auto _ret = QsciLexerJSON::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerJSON_Language(const QsciLexerJSON* self) {
    return (const char*)self->language();
}

const char* QsciLexerJSON_Lexer(const QsciLexerJSON* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerJSON_DefaultColor(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerJSON_DefaultEolFill(const QsciLexerJSON* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerJSON_DefaultFont(const QsciLexerJSON* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJSON_DefaultPaper(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerJSON_Keywords(const QsciLexerJSON* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerJSON_Description(const QsciLexerJSON* self, int style) {
    auto _ret = self->description(static_cast<int>(style));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciLexerJSON_RefreshProperties(QsciLexerJSON* self) {
    self->refreshProperties();
}

void QsciLexerJSON_SetHighlightComments(QsciLexerJSON* self, bool highlight) {
    self->setHighlightComments(highlight);
}

bool QsciLexerJSON_HighlightComments(const QsciLexerJSON* self) {
    return self->highlightComments();
}

void QsciLexerJSON_SetHighlightEscapeSequences(QsciLexerJSON* self, bool highlight) {
    self->setHighlightEscapeSequences(highlight);
}

bool QsciLexerJSON_HighlightEscapeSequences(const QsciLexerJSON* self) {
    return self->highlightEscapeSequences();
}

void QsciLexerJSON_SetFoldCompact(QsciLexerJSON* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerJSON_FoldCompact(const QsciLexerJSON* self) {
    return self->foldCompact();
}

libqt_string QsciLexerJSON_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerJSON::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJSON_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerJSON::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QsciLexerJSON_SuperMetaObject(const QsciLexerJSON* self) {
    return (QMetaObject*)self->QsciLexerJSON::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnMetaObject(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_metaobject_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerJSON_SuperMetacast(QsciLexerJSON* self, const char* param1) {
    return self->QsciLexerJSON::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnMetacast(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_metacast_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerJSON_SuperMetacall(QsciLexerJSON* self, int param1, int param2, void** param3) {
    return self->QsciLexerJSON::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnMetacall(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_metacall_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_LexerId(const QsciLexerJSON* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerJSON_SuperLexerId(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnLexerId(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_lexerid_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJSON_AutoCompletionFillups(const QsciLexerJSON* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerJSON_SuperAutoCompletionFillups(const QsciLexerJSON* self) {
    return (const char*)self->QsciLexerJSON::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnAutoCompletionFillups(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJSON_AutoCompletionWordSeparators(const QsciLexerJSON* self) {
    QList<QString> _ret = self->autoCompletionWordSeparators();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciLexerJSON_SuperAutoCompletionWordSeparators(const QsciLexerJSON* self) {
    QList<QString> _ret = self->QsciLexerJSON::autoCompletionWordSeparators();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnAutoCompletionWordSeparators(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockEnd(const QsciLexerJSON* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJSON_SuperBlockEnd(const QsciLexerJSON* self, int* style) {
    return (const char*)self->QsciLexerJSON::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockEnd(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_blockend_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_BlockLookback(const QsciLexerJSON* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerJSON_SuperBlockLookback(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockLookback(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_blocklookback_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockStart(const QsciLexerJSON* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJSON_SuperBlockStart(const QsciLexerJSON* self, int* style) {
    return (const char*)self->QsciLexerJSON::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockStart(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_blockstart_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJSON_BlockStartKeyword(const QsciLexerJSON* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJSON_SuperBlockStartKeyword(const QsciLexerJSON* self, int* style) {
    return (const char*)self->QsciLexerJSON::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBlockStartKeyword(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_BraceStyle(const QsciLexerJSON* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerJSON_SuperBraceStyle(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnBraceStyle(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_bracestyle_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_CaseSensitive(const QsciLexerJSON* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerJSON_SuperCaseSensitive(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnCaseSensitive(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_casesensitive_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJSON_Color(const QsciLexerJSON* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJSON_SuperColor(const QsciLexerJSON* self, int style) {
    return new QColor(self->QsciLexerJSON::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnColor(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_color_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_EolFill(const QsciLexerJSON* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerJSON_SuperEolFill(const QsciLexerJSON* self, int style) {
    return self->QsciLexerJSON::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEolFill(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_eolfill_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJSON_Font(const QsciLexerJSON* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJSON_SuperFont(const QsciLexerJSON* self, int style) {
    return new QFont(self->QsciLexerJSON::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnFont(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_font_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_IndentationGuideView(const QsciLexerJSON* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerJSON_SuperIndentationGuideView(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnIndentationGuideView(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_DefaultStyle(const QsciLexerJSON* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerJSON_SuperDefaultStyle(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultStyle(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJSON_Paper(const QsciLexerJSON* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJSON_SuperPaper(const QsciLexerJSON* self, int style) {
    return new QColor(self->QsciLexerJSON::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnPaper(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_paper_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJSON_DefaultColor2(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJSON_SuperDefaultColor2(const QsciLexerJSON* self, int style) {
    return new QColor(self->QsciLexerJSON::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultColor2(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJSON_DefaultFont2(const QsciLexerJSON* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJSON_SuperDefaultFont2(const QsciLexerJSON* self, int style) {
    return new QFont(self->QsciLexerJSON::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultFont2(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJSON_DefaultPaper2(const QsciLexerJSON* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJSON_SuperDefaultPaper2(const QsciLexerJSON* self, int style) {
    return new QColor(self->QsciLexerJSON::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDefaultPaper2(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetEditor(QsciLexerJSON* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerJSON_SuperSetEditor(QsciLexerJSON* self, QsciScintilla* editor) {
    self->QsciLexerJSON::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetEditor(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_seteditor_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJSON_StyleBitsNeeded(const QsciLexerJSON* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerJSON_SuperStyleBitsNeeded(const QsciLexerJSON* self) {
    return self->QsciLexerJSON::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnStyleBitsNeeded(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJSON_WordCharacters(const QsciLexerJSON* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerJSON_SuperWordCharacters(const QsciLexerJSON* self) {
    return (const char*)self->QsciLexerJSON::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnWordCharacters(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerJSON_SuperSetAutoIndentStyle(QsciLexerJSON* self, int autoindentstyle) {
    self->QsciLexerJSON::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetAutoIndentStyle(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetColor(QsciLexerJSON* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJSON_SuperSetColor(QsciLexerJSON* self, const QColor* c, int style) {
    self->QsciLexerJSON::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetColor(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_setcolor_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetEolFill(QsciLexerJSON* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJSON_SuperSetEolFill(QsciLexerJSON* self, bool eoffill, int style) {
    self->QsciLexerJSON::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetEolFill(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_seteolfill_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetFont(QsciLexerJSON* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJSON_SuperSetFont(QsciLexerJSON* self, const QFont* f, int style) {
    self->QsciLexerJSON::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetFont(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_setfont_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_SetPaper(QsciLexerJSON* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJSON_SuperSetPaper(QsciLexerJSON* self, const QColor* c, int style) {
    self->QsciLexerJSON::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnSetPaper(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_setpaper_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_ReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        return vqscilexerjson->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJSON_SuperReadProperties(QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        return vqscilexerjson->QsciLexerJSON::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnReadProperties(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_readproperties_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_WriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self));
    if (vqscilexerjson) {
        return vqscilexerjson->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJSON_SuperWriteProperties(const QsciLexerJSON* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        return vqscilexerjson->QsciLexerJSON::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnWriteProperties(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self)))
        vqscilexerjson->qscilexerjson_writeproperties_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_Event(QsciLexerJSON* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerJSON_SuperEvent(QsciLexerJSON* self, QEvent* event) {
    return self->QsciLexerJSON::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEvent(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_event_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJSON_EventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerJSON_SuperEventFilter(QsciLexerJSON* self, QObject* watched, QEvent* event) {
    return self->QsciLexerJSON::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnEventFilter(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_eventfilter_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_TimerEvent(QsciLexerJSON* self, QTimerEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        vqscilexerjson->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJSON_SuperTimerEvent(QsciLexerJSON* self, QTimerEvent* event) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        vqscilexerjson->QsciLexerJSON::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnTimerEvent(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_timerevent_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_ChildEvent(QsciLexerJSON* self, QChildEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        vqscilexerjson->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJSON_SuperChildEvent(QsciLexerJSON* self, QChildEvent* event) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        vqscilexerjson->QsciLexerJSON::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnChildEvent(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_childevent_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_CustomEvent(QsciLexerJSON* self, QEvent* event) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        vqscilexerjson->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJSON_SuperCustomEvent(QsciLexerJSON* self, QEvent* event) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        vqscilexerjson->QsciLexerJSON::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnCustomEvent(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_customevent_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_ConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        vqscilexerjson->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJSON_SuperConnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        vqscilexerjson->QsciLexerJSON::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnConnectNotify(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_connectnotify_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJSON_DisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self);
    if (vqscilexerjson) {
        vqscilexerjson->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJSON::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJSON_SuperDisconnectNotify(QsciLexerJSON* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self)) {
        vqscilexerjson->QsciLexerJSON::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJSON::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJSON_OnDisconnectNotify(QsciLexerJSON* self, intptr_t slot) {
    if (auto* vqscilexerjson = dynamic_cast<VirtualQsciLexerJSON*>(self))
        vqscilexerjson->qscilexerjson_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerJSON::QsciLexerJSON_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerJSON_TextAsBytes(const QsciLexerJSON* self, const libqt_string text) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerjson->VirtualQsciLexerJSON::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJSON::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerJSON_BytesAsText(const QsciLexerJSON* self, const char* bytes, int size) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        auto _ret = vqscilexerjson->VirtualQsciLexerJSON::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJSON::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerJSON_Sender(const QsciLexerJSON* self) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        return vqscilexerjson->VirtualQsciLexerJSON::sender();
    } else
        qFatal("Error: Protected method QsciLexerJSON::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJSON_SenderSignalIndex(const QsciLexerJSON* self) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        return vqscilexerjson->VirtualQsciLexerJSON::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerJSON::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJSON_Receivers(const QsciLexerJSON* self, const char* signal) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        return vqscilexerjson->VirtualQsciLexerJSON::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerJSON::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerJSON_IsSignalConnected(const QsciLexerJSON* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjson = const_cast<VirtualQsciLexerJSON*>(dynamic_cast<const VirtualQsciLexerJSON*>(self))) {
        return vqscilexerjson->VirtualQsciLexerJSON::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerJSON::isSignalConnected called without a directly constructed type");
}

void QsciLexerJSON_Delete(QsciLexerJSON* self) {
    delete self;
}
