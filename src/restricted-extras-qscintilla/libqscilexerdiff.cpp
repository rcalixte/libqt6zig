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
#include <qscilexerdiff.h>
#include "libqscilexerdiff.h"
#include "libqscilexerdiff.hxx"

QsciLexerDiff* QsciLexerDiff_new() {
    return new VirtualQsciLexerDiff();
}

QsciLexerDiff* QsciLexerDiff_new2(QObject* parent) {
    return new VirtualQsciLexerDiff(parent);
}

QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerDiff_Metacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerDiff_Tr(const char* s) {
    auto _ret = QsciLexerDiff::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerDiff_Language(const QsciLexerDiff* self) {
    return (const char*)self->language();
}

const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

libqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style) {
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

libqt_string QsciLexerDiff_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerDiff::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerDiff::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerDiff_SuperMetaObject(const QsciLexerDiff* self) {
    return (QMetaObject*)self->QsciLexerDiff::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnMetaObject(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_metaobject_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerDiff_SuperMetacast(QsciLexerDiff* self, const char* param1) {
    return self->QsciLexerDiff::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnMetacast(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_metacast_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerDiff_SuperMetacall(QsciLexerDiff* self, int param1, int param2, void** param3) {
    return self->QsciLexerDiff::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnMetacall(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_metacall_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_LexerId(const QsciLexerDiff* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerDiff_SuperLexerId(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnLexerId(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_lexerid_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerDiff_AutoCompletionFillups(const QsciLexerDiff* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerDiff_SuperAutoCompletionFillups(const QsciLexerDiff* self) {
    return (const char*)self->QsciLexerDiff::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnAutoCompletionFillups(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerDiff_AutoCompletionWordSeparators(const QsciLexerDiff* self) {
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
libqt_list /* of libqt_string */ QsciLexerDiff_SuperAutoCompletionWordSeparators(const QsciLexerDiff* self) {
    QList<QString> _ret = self->QsciLexerDiff::autoCompletionWordSeparators();
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
void QsciLexerDiff_OnAutoCompletionWordSeparators(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockEnd(const QsciLexerDiff* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerDiff_SuperBlockEnd(const QsciLexerDiff* self, int* style) {
    return (const char*)self->QsciLexerDiff::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockEnd(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_blockend_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_BlockLookback(const QsciLexerDiff* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerDiff_SuperBlockLookback(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockLookback(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_blocklookback_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStart(const QsciLexerDiff* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerDiff_SuperBlockStart(const QsciLexerDiff* self, int* style) {
    return (const char*)self->QsciLexerDiff::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStart(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_blockstart_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerDiff_BlockStartKeyword(const QsciLexerDiff* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerDiff_SuperBlockStartKeyword(const QsciLexerDiff* self, int* style) {
    return (const char*)self->QsciLexerDiff::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBlockStartKeyword(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_BraceStyle(const QsciLexerDiff* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerDiff_SuperBraceStyle(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnBraceStyle(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_bracestyle_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_CaseSensitive(const QsciLexerDiff* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerDiff_SuperCaseSensitive(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCaseSensitive(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_casesensitive_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerDiff_Color(const QsciLexerDiff* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerDiff_SuperColor(const QsciLexerDiff* self, int style) {
    return new QColor(self->QsciLexerDiff::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnColor(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_color_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_EolFill(const QsciLexerDiff* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerDiff_SuperEolFill(const QsciLexerDiff* self, int style) {
    return self->QsciLexerDiff::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEolFill(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_eolfill_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerDiff_Font(const QsciLexerDiff* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerDiff_SuperFont(const QsciLexerDiff* self, int style) {
    return new QFont(self->QsciLexerDiff::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnFont(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_font_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_IndentationGuideView(const QsciLexerDiff* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerDiff_SuperIndentationGuideView(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnIndentationGuideView(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerDiff_Keywords(const QsciLexerDiff* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerDiff_SuperKeywords(const QsciLexerDiff* self, int set) {
    return (const char*)self->QsciLexerDiff::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnKeywords(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_keywords_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_DefaultStyle(const QsciLexerDiff* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerDiff_SuperDefaultStyle(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultStyle(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerDiff_Paper(const QsciLexerDiff* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerDiff_SuperPaper(const QsciLexerDiff* self, int style) {
    return new QColor(self->QsciLexerDiff::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnPaper(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_paper_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultColor2(const QsciLexerDiff* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerDiff_SuperDefaultColor2(const QsciLexerDiff* self, int style) {
    return new QColor(self->QsciLexerDiff::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultColor2(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_DefaultEolFill(const QsciLexerDiff* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerDiff_SuperDefaultEolFill(const QsciLexerDiff* self, int style) {
    return self->QsciLexerDiff::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultEolFill(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerDiff_DefaultFont2(const QsciLexerDiff* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerDiff_SuperDefaultFont2(const QsciLexerDiff* self, int style) {
    return new QFont(self->QsciLexerDiff::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultFont2(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerDiff_DefaultPaper2(const QsciLexerDiff* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerDiff_SuperDefaultPaper2(const QsciLexerDiff* self, int style) {
    return new QColor(self->QsciLexerDiff::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDefaultPaper2(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerDiff_SuperSetEditor(QsciLexerDiff* self, QsciScintilla* editor) {
    self->QsciLexerDiff::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEditor(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_seteditor_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_RefreshProperties(QsciLexerDiff* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerDiff_SuperRefreshProperties(QsciLexerDiff* self) {
    self->QsciLexerDiff::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnRefreshProperties(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerDiff_StyleBitsNeeded(const QsciLexerDiff* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerDiff_SuperStyleBitsNeeded(const QsciLexerDiff* self) {
    return self->QsciLexerDiff::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnStyleBitsNeeded(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerDiff_SuperSetAutoIndentStyle(QsciLexerDiff* self, int autoindentstyle) {
    self->QsciLexerDiff::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetAutoIndentStyle(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetColor(QsciLexerDiff* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerDiff_SuperSetColor(QsciLexerDiff* self, const QColor* c, int style) {
    self->QsciLexerDiff::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetColor(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_setcolor_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerDiff_SuperSetEolFill(QsciLexerDiff* self, bool eoffill, int style) {
    self->QsciLexerDiff::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetEolFill(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_seteolfill_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetFont(QsciLexerDiff* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerDiff_SuperSetFont(QsciLexerDiff* self, const QFont* f, int style) {
    self->QsciLexerDiff::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetFont(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_setfont_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_SetPaper(QsciLexerDiff* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerDiff_SuperSetPaper(QsciLexerDiff* self, const QColor* c, int style) {
    self->QsciLexerDiff::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnSetPaper(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_setpaper_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_ReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        return vqscilexerdiff->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerDiff_SuperReadProperties(QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        return vqscilexerdiff->QsciLexerDiff::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnReadProperties(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_readproperties_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_WriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self));
    if (vqscilexerdiff) {
        return vqscilexerdiff->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerDiff_SuperWriteProperties(const QsciLexerDiff* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->QsciLexerDiff::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnWriteProperties(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self)))
        vqscilexerdiff->qscilexerdiff_writeproperties_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_Event(QsciLexerDiff* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerDiff_SuperEvent(QsciLexerDiff* self, QEvent* event) {
    return self->QsciLexerDiff::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_event_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerDiff_EventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerDiff_SuperEventFilter(QsciLexerDiff* self, QObject* watched, QEvent* event) {
    return self->QsciLexerDiff::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnEventFilter(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_eventfilter_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_TimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        vqscilexerdiff->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerDiff_SuperTimerEvent(QsciLexerDiff* self, QTimerEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->QsciLexerDiff::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnTimerEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_timerevent_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_ChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        vqscilexerdiff->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerDiff_SuperChildEvent(QsciLexerDiff* self, QChildEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->QsciLexerDiff::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnChildEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_childevent_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_CustomEvent(QsciLexerDiff* self, QEvent* event) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        vqscilexerdiff->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerDiff_SuperCustomEvent(QsciLexerDiff* self, QEvent* event) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->QsciLexerDiff::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnCustomEvent(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_customevent_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_ConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        vqscilexerdiff->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerDiff_SuperConnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->QsciLexerDiff::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnConnectNotify(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_connectnotify_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerDiff_DisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self);
    if (vqscilexerdiff) {
        vqscilexerdiff->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerDiff::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerDiff_SuperDisconnectNotify(QsciLexerDiff* self, const QMetaMethod* signal) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self)) {
        vqscilexerdiff->QsciLexerDiff::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerDiff::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerDiff_OnDisconnectNotify(QsciLexerDiff* self, intptr_t slot) {
    if (auto* vqscilexerdiff = dynamic_cast<VirtualQsciLexerDiff*>(self))
        vqscilexerdiff->qscilexerdiff_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerDiff::QsciLexerDiff_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerDiff_TextAsBytes(const QsciLexerDiff* self, const libqt_string text) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerdiff->VirtualQsciLexerDiff::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerDiff::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerDiff_BytesAsText(const QsciLexerDiff* self, const char* bytes, int size) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        auto _ret = vqscilexerdiff->VirtualQsciLexerDiff::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerDiff::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerDiff_Sender(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->VirtualQsciLexerDiff::sender();
    } else
        qFatal("Error: Protected method QsciLexerDiff::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerDiff_SenderSignalIndex(const QsciLexerDiff* self) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->VirtualQsciLexerDiff::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerDiff::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerDiff_Receivers(const QsciLexerDiff* self, const char* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->VirtualQsciLexerDiff::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerDiff::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerDiff_IsSignalConnected(const QsciLexerDiff* self, const QMetaMethod* signal) {
    if (auto* vqscilexerdiff = const_cast<VirtualQsciLexerDiff*>(dynamic_cast<const VirtualQsciLexerDiff*>(self))) {
        return vqscilexerdiff->VirtualQsciLexerDiff::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerDiff::isSignalConnected called without a directly constructed type");
}

void QsciLexerDiff_Delete(QsciLexerDiff* self) {
    delete self;
}
