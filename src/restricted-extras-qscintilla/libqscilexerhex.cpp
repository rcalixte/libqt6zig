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
#include <qscilexerhex.h>
#include "libqscilexerhex.h"
#include "libqscilexerhex.hxx"

QsciLexerHex* QsciLexerHex_new() {
    return new VirtualQsciLexerHex();
}

QsciLexerHex* QsciLexerHex_new2(QObject* parent) {
    return new VirtualQsciLexerHex(parent);
}

QMetaObject* QsciLexerHex_MetaObject(const QsciLexerHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerHex_Metacast(QsciLexerHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerHex_Metacall(QsciLexerHex* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerHex_Tr(const char* s) {
    auto _ret = QsciLexerHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QColor* QsciLexerHex_DefaultColor(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerHex_DefaultFont(const QsciLexerHex* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHex_DefaultPaper(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerHex_Description(const QsciLexerHex* self, int style) {
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

libqt_string QsciLexerHex_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerHex_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerHex::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerHex_SuperMetaObject(const QsciLexerHex* self) {
    return (QMetaObject*)self->QsciLexerHex::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnMetaObject(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_metaobject_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerHex_SuperMetacast(QsciLexerHex* self, const char* param1) {
    return self->QsciLexerHex::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnMetacast(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_metacast_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerHex_SuperMetacall(QsciLexerHex* self, int param1, int param2, void** param3) {
    return self->QsciLexerHex::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnMetacall(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_metacall_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Metacall_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_Language(const QsciLexerHex* self) {
    return (const char*)self->language();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLanguage(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_language_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Language_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_Lexer(const QsciLexerHex* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerHex_SuperLexer(const QsciLexerHex* self) {
    return (const char*)self->QsciLexerHex::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLexer(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_lexer_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_LexerId(const QsciLexerHex* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerHex_SuperLexerId(const QsciLexerHex* self) {
    return self->QsciLexerHex::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnLexerId(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_lexerid_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_AutoCompletionFillups(const QsciLexerHex* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerHex_SuperAutoCompletionFillups(const QsciLexerHex* self) {
    return (const char*)self->QsciLexerHex::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnAutoCompletionFillups(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerHex_AutoCompletionWordSeparators(const QsciLexerHex* self) {
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
libqt_list /* of libqt_string */ QsciLexerHex_SuperAutoCompletionWordSeparators(const QsciLexerHex* self) {
    QList<QString> _ret = self->QsciLexerHex::autoCompletionWordSeparators();
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
void QsciLexerHex_OnAutoCompletionWordSeparators(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_BlockEnd(const QsciLexerHex* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHex_SuperBlockEnd(const QsciLexerHex* self, int* style) {
    return (const char*)self->QsciLexerHex::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockEnd(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_blockend_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_BlockLookback(const QsciLexerHex* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerHex_SuperBlockLookback(const QsciLexerHex* self) {
    return self->QsciLexerHex::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockLookback(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_blocklookback_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_BlockStart(const QsciLexerHex* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHex_SuperBlockStart(const QsciLexerHex* self, int* style) {
    return (const char*)self->QsciLexerHex::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockStart(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_blockstart_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_BlockStartKeyword(const QsciLexerHex* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHex_SuperBlockStartKeyword(const QsciLexerHex* self, int* style) {
    return (const char*)self->QsciLexerHex::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBlockStartKeyword(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_BraceStyle(const QsciLexerHex* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerHex_SuperBraceStyle(const QsciLexerHex* self) {
    return self->QsciLexerHex::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnBraceStyle(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_bracestyle_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_CaseSensitive(const QsciLexerHex* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerHex_SuperCaseSensitive(const QsciLexerHex* self) {
    return self->QsciLexerHex::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnCaseSensitive(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_casesensitive_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHex_Color(const QsciLexerHex* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHex_SuperColor(const QsciLexerHex* self, int style) {
    return new QColor(self->QsciLexerHex::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnColor(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_color_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_EolFill(const QsciLexerHex* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerHex_SuperEolFill(const QsciLexerHex* self, int style) {
    return self->QsciLexerHex::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEolFill(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_eolfill_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerHex_Font(const QsciLexerHex* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerHex_SuperFont(const QsciLexerHex* self, int style) {
    return new QFont(self->QsciLexerHex::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnFont(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_font_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_IndentationGuideView(const QsciLexerHex* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerHex_SuperIndentationGuideView(const QsciLexerHex* self) {
    return self->QsciLexerHex::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnIndentationGuideView(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_Keywords(const QsciLexerHex* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerHex_SuperKeywords(const QsciLexerHex* self, int set) {
    return (const char*)self->QsciLexerHex::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnKeywords(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_keywords_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_DefaultStyle(const QsciLexerHex* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerHex_SuperDefaultStyle(const QsciLexerHex* self) {
    return self->QsciLexerHex::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultStyle(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHex_Paper(const QsciLexerHex* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHex_SuperPaper(const QsciLexerHex* self, int style) {
    return new QColor(self->QsciLexerHex::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnPaper(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_paper_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHex_DefaultColor2(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHex_SuperDefaultColor2(const QsciLexerHex* self, int style) {
    return new QColor(self->QsciLexerHex::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultColor2(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_DefaultEolFill(const QsciLexerHex* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerHex_SuperDefaultEolFill(const QsciLexerHex* self, int style) {
    return self->QsciLexerHex::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultEolFill(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerHex_DefaultFont2(const QsciLexerHex* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerHex_SuperDefaultFont2(const QsciLexerHex* self, int style) {
    return new QFont(self->QsciLexerHex::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultFont2(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHex_DefaultPaper2(const QsciLexerHex* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHex_SuperDefaultPaper2(const QsciLexerHex* self, int style) {
    return new QColor(self->QsciLexerHex::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDefaultPaper2(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetEditor(QsciLexerHex* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerHex_SuperSetEditor(QsciLexerHex* self, QsciScintilla* editor) {
    self->QsciLexerHex::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetEditor(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_seteditor_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_RefreshProperties(QsciLexerHex* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerHex_SuperRefreshProperties(QsciLexerHex* self) {
    self->QsciLexerHex::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnRefreshProperties(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHex_StyleBitsNeeded(const QsciLexerHex* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerHex_SuperStyleBitsNeeded(const QsciLexerHex* self) {
    return self->QsciLexerHex::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnStyleBitsNeeded(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHex_WordCharacters(const QsciLexerHex* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerHex_SuperWordCharacters(const QsciLexerHex* self) {
    return (const char*)self->QsciLexerHex::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnWordCharacters(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerHex_SuperSetAutoIndentStyle(QsciLexerHex* self, int autoindentstyle) {
    self->QsciLexerHex::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetAutoIndentStyle(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetColor(QsciLexerHex* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHex_SuperSetColor(QsciLexerHex* self, const QColor* c, int style) {
    self->QsciLexerHex::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetColor(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_setcolor_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetEolFill(QsciLexerHex* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHex_SuperSetEolFill(QsciLexerHex* self, bool eoffill, int style) {
    self->QsciLexerHex::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetEolFill(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_seteolfill_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetFont(QsciLexerHex* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHex_SuperSetFont(QsciLexerHex* self, const QFont* f, int style) {
    self->QsciLexerHex::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetFont(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_setfont_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_SetPaper(QsciLexerHex* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHex_SuperSetPaper(QsciLexerHex* self, const QColor* c, int style) {
    self->QsciLexerHex::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnSetPaper(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_setpaper_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_ReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        return vqscilexerhex->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerHex_SuperReadProperties(QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        return vqscilexerhex->QsciLexerHex::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnReadProperties(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_readproperties_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_WriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self));
    if (vqscilexerhex) {
        return vqscilexerhex->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerHex_SuperWriteProperties(const QsciLexerHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        return vqscilexerhex->QsciLexerHex::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnWriteProperties(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self)))
        vqscilexerhex->qscilexerhex_writeproperties_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_Event(QsciLexerHex* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerHex_SuperEvent(QsciLexerHex* self, QEvent* event) {
    return self->QsciLexerHex::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEvent(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_event_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHex_EventFilter(QsciLexerHex* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerHex_SuperEventFilter(QsciLexerHex* self, QObject* watched, QEvent* event) {
    return self->QsciLexerHex::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnEventFilter(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_eventfilter_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_TimerEvent(QsciLexerHex* self, QTimerEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        vqscilexerhex->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHex_SuperTimerEvent(QsciLexerHex* self, QTimerEvent* event) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        vqscilexerhex->QsciLexerHex::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnTimerEvent(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_timerevent_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_ChildEvent(QsciLexerHex* self, QChildEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        vqscilexerhex->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHex_SuperChildEvent(QsciLexerHex* self, QChildEvent* event) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        vqscilexerhex->QsciLexerHex::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnChildEvent(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_childevent_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_CustomEvent(QsciLexerHex* self, QEvent* event) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        vqscilexerhex->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHex_SuperCustomEvent(QsciLexerHex* self, QEvent* event) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        vqscilexerhex->QsciLexerHex::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnCustomEvent(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_customevent_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_ConnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        vqscilexerhex->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHex_SuperConnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        vqscilexerhex->QsciLexerHex::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnConnectNotify(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_connectnotify_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHex_DisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self);
    if (vqscilexerhex) {
        vqscilexerhex->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHex::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHex_SuperDisconnectNotify(QsciLexerHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self)) {
        vqscilexerhex->QsciLexerHex::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerHex::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHex_OnDisconnectNotify(QsciLexerHex* self, intptr_t slot) {
    if (auto* vqscilexerhex = dynamic_cast<VirtualQsciLexerHex*>(self))
        vqscilexerhex->qscilexerhex_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerHex::QsciLexerHex_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerHex_TextAsBytes(const QsciLexerHex* self, const libqt_string text) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerhex->VirtualQsciLexerHex::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerHex::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerHex_BytesAsText(const QsciLexerHex* self, const char* bytes, int size) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        auto _ret = vqscilexerhex->VirtualQsciLexerHex::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerHex::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerHex_Sender(const QsciLexerHex* self) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        return vqscilexerhex->VirtualQsciLexerHex::sender();
    } else
        qFatal("Error: Protected method QsciLexerHex::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerHex_SenderSignalIndex(const QsciLexerHex* self) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        return vqscilexerhex->VirtualQsciLexerHex::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerHex::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerHex_Receivers(const QsciLexerHex* self, const char* signal) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        return vqscilexerhex->VirtualQsciLexerHex::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerHex::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerHex_IsSignalConnected(const QsciLexerHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhex = const_cast<VirtualQsciLexerHex*>(dynamic_cast<const VirtualQsciLexerHex*>(self))) {
        return vqscilexerhex->VirtualQsciLexerHex::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerHex::isSignalConnected called without a directly constructed type");
}

void QsciLexerHex_Delete(QsciLexerHex* self) {
    delete self;
}
