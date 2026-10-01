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
#include <qscilexertekhex.h>
#include "libqscilexertekhex.h"
#include "libqscilexertekhex.hxx"

QsciLexerTekHex* QsciLexerTekHex_new() {
    return new VirtualQsciLexerTekHex();
}

QsciLexerTekHex* QsciLexerTekHex_new2(QObject* parent) {
    return new VirtualQsciLexerTekHex(parent);
}

QMetaObject* QsciLexerTekHex_MetaObject(const QsciLexerTekHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTekHex_Metacast(QsciLexerTekHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTekHex_Metacall(QsciLexerTekHex* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerTekHex_Tr(const char* s) {
    auto _ret = QsciLexerTekHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerTekHex_Language(const QsciLexerTekHex* self) {
    return (const char*)self->language();
}

const char* QsciLexerTekHex_Lexer(const QsciLexerTekHex* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerTekHex_Description(const QsciLexerTekHex* self, int style) {
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

libqt_string QsciLexerTekHex_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerTekHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTekHex_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerTekHex::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerTekHex_SuperMetaObject(const QsciLexerTekHex* self) {
    return (QMetaObject*)self->QsciLexerTekHex::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnMetaObject(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_metaobject_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerTekHex_SuperMetacast(QsciLexerTekHex* self, const char* param1) {
    return self->QsciLexerTekHex::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnMetacast(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_metacast_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerTekHex_SuperMetacall(QsciLexerTekHex* self, int param1, int param2, void** param3) {
    return self->QsciLexerTekHex::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnMetacall(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_metacall_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_LexerId(const QsciLexerTekHex* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerTekHex_SuperLexerId(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnLexerId(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_lexerid_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_AutoCompletionFillups(const QsciLexerTekHex* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperAutoCompletionFillups(const QsciLexerTekHex* self) {
    return (const char*)self->QsciLexerTekHex::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnAutoCompletionFillups(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTekHex_AutoCompletionWordSeparators(const QsciLexerTekHex* self) {
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
libqt_list /* of libqt_string */ QsciLexerTekHex_SuperAutoCompletionWordSeparators(const QsciLexerTekHex* self) {
    QList<QString> _ret = self->QsciLexerTekHex::autoCompletionWordSeparators();
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
void QsciLexerTekHex_OnAutoCompletionWordSeparators(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockEnd(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperBlockEnd(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->QsciLexerTekHex::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockEnd(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_blockend_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_BlockLookback(const QsciLexerTekHex* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerTekHex_SuperBlockLookback(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockLookback(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_blocklookback_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockStart(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperBlockStart(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->QsciLexerTekHex::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockStart(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_blockstart_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_BlockStartKeyword(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperBlockStartKeyword(const QsciLexerTekHex* self, int* style) {
    return (const char*)self->QsciLexerTekHex::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBlockStartKeyword(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_BraceStyle(const QsciLexerTekHex* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerTekHex_SuperBraceStyle(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnBraceStyle(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_bracestyle_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_CaseSensitive(const QsciLexerTekHex* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerTekHex_SuperCaseSensitive(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnCaseSensitive(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_casesensitive_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTekHex_Color(const QsciLexerTekHex* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTekHex_SuperColor(const QsciLexerTekHex* self, int style) {
    return new QColor(self->QsciLexerTekHex::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnColor(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_color_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_EolFill(const QsciLexerTekHex* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerTekHex_SuperEolFill(const QsciLexerTekHex* self, int style) {
    return self->QsciLexerTekHex::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEolFill(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_eolfill_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTekHex_Font(const QsciLexerTekHex* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTekHex_SuperFont(const QsciLexerTekHex* self, int style) {
    return new QFont(self->QsciLexerTekHex::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnFont(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_font_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_IndentationGuideView(const QsciLexerTekHex* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerTekHex_SuperIndentationGuideView(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnIndentationGuideView(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_Keywords(const QsciLexerTekHex* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperKeywords(const QsciLexerTekHex* self, int set) {
    return (const char*)self->QsciLexerTekHex::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnKeywords(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_keywords_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_DefaultStyle(const QsciLexerTekHex* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerTekHex_SuperDefaultStyle(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultStyle(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTekHex_Paper(const QsciLexerTekHex* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTekHex_SuperPaper(const QsciLexerTekHex* self, int style) {
    return new QColor(self->QsciLexerTekHex::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnPaper(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_paper_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTekHex_DefaultColor2(const QsciLexerTekHex* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTekHex_SuperDefaultColor2(const QsciLexerTekHex* self, int style) {
    return new QColor(self->QsciLexerTekHex::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultColor2(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_DefaultEolFill(const QsciLexerTekHex* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerTekHex_SuperDefaultEolFill(const QsciLexerTekHex* self, int style) {
    return self->QsciLexerTekHex::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultEolFill(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTekHex_DefaultFont2(const QsciLexerTekHex* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTekHex_SuperDefaultFont2(const QsciLexerTekHex* self, int style) {
    return new QFont(self->QsciLexerTekHex::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultFont2(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTekHex_DefaultPaper2(const QsciLexerTekHex* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTekHex_SuperDefaultPaper2(const QsciLexerTekHex* self, int style) {
    return new QColor(self->QsciLexerTekHex::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDefaultPaper2(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetEditor(QsciLexerTekHex* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetEditor(QsciLexerTekHex* self, QsciScintilla* editor) {
    self->QsciLexerTekHex::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetEditor(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_seteditor_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_RefreshProperties(QsciLexerTekHex* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerTekHex_SuperRefreshProperties(QsciLexerTekHex* self) {
    self->QsciLexerTekHex::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnRefreshProperties(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTekHex_StyleBitsNeeded(const QsciLexerTekHex* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerTekHex_SuperStyleBitsNeeded(const QsciLexerTekHex* self) {
    return self->QsciLexerTekHex::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnStyleBitsNeeded(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTekHex_WordCharacters(const QsciLexerTekHex* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerTekHex_SuperWordCharacters(const QsciLexerTekHex* self) {
    return (const char*)self->QsciLexerTekHex::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnWordCharacters(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetAutoIndentStyle(QsciLexerTekHex* self, int autoindentstyle) {
    self->QsciLexerTekHex::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetAutoIndentStyle(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetColor(QsciLexerTekHex* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetColor(QsciLexerTekHex* self, const QColor* c, int style) {
    self->QsciLexerTekHex::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetColor(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_setcolor_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetEolFill(QsciLexerTekHex* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetEolFill(QsciLexerTekHex* self, bool eoffill, int style) {
    self->QsciLexerTekHex::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetEolFill(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_seteolfill_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetFont(QsciLexerTekHex* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetFont(QsciLexerTekHex* self, const QFont* f, int style) {
    self->QsciLexerTekHex::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetFont(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_setfont_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_SetPaper(QsciLexerTekHex* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTekHex_SuperSetPaper(QsciLexerTekHex* self, const QColor* c, int style) {
    self->QsciLexerTekHex::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnSetPaper(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_setpaper_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_ReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        return vqscilexertekhex->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTekHex_SuperReadProperties(QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        return vqscilexertekhex->QsciLexerTekHex::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnReadProperties(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_readproperties_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_WriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self));
    if (vqscilexertekhex) {
        return vqscilexertekhex->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTekHex_SuperWriteProperties(const QsciLexerTekHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        return vqscilexertekhex->QsciLexerTekHex::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnWriteProperties(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self)))
        vqscilexertekhex->qscilexertekhex_writeproperties_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_Event(QsciLexerTekHex* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerTekHex_SuperEvent(QsciLexerTekHex* self, QEvent* event) {
    return self->QsciLexerTekHex::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEvent(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_event_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTekHex_EventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerTekHex_SuperEventFilter(QsciLexerTekHex* self, QObject* watched, QEvent* event) {
    return self->QsciLexerTekHex::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnEventFilter(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_eventfilter_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_TimerEvent(QsciLexerTekHex* self, QTimerEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        vqscilexertekhex->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTekHex_SuperTimerEvent(QsciLexerTekHex* self, QTimerEvent* event) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        vqscilexertekhex->QsciLexerTekHex::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnTimerEvent(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_timerevent_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_ChildEvent(QsciLexerTekHex* self, QChildEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        vqscilexertekhex->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTekHex_SuperChildEvent(QsciLexerTekHex* self, QChildEvent* event) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        vqscilexertekhex->QsciLexerTekHex::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnChildEvent(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_childevent_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_CustomEvent(QsciLexerTekHex* self, QEvent* event) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        vqscilexertekhex->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTekHex_SuperCustomEvent(QsciLexerTekHex* self, QEvent* event) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        vqscilexertekhex->QsciLexerTekHex::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnCustomEvent(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_customevent_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_ConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        vqscilexertekhex->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTekHex_SuperConnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        vqscilexertekhex->QsciLexerTekHex::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnConnectNotify(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_connectnotify_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTekHex_DisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self);
    if (vqscilexertekhex) {
        vqscilexertekhex->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTekHex::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTekHex_SuperDisconnectNotify(QsciLexerTekHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self)) {
        vqscilexertekhex->QsciLexerTekHex::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTekHex::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTekHex_OnDisconnectNotify(QsciLexerTekHex* self, intptr_t slot) {
    if (auto* vqscilexertekhex = dynamic_cast<VirtualQsciLexerTekHex*>(self))
        vqscilexertekhex->qscilexertekhex_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerTekHex::QsciLexerTekHex_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerTekHex_TextAsBytes(const QsciLexerTekHex* self, const libqt_string text) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexertekhex->VirtualQsciLexerTekHex::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTekHex::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerTekHex_BytesAsText(const QsciLexerTekHex* self, const char* bytes, int size) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        auto _ret = vqscilexertekhex->VirtualQsciLexerTekHex::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTekHex::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerTekHex_Sender(const QsciLexerTekHex* self) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        return vqscilexertekhex->VirtualQsciLexerTekHex::sender();
    } else
        qFatal("Error: Protected method QsciLexerTekHex::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTekHex_SenderSignalIndex(const QsciLexerTekHex* self) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        return vqscilexertekhex->VirtualQsciLexerTekHex::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerTekHex::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTekHex_Receivers(const QsciLexerTekHex* self, const char* signal) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        return vqscilexertekhex->VirtualQsciLexerTekHex::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerTekHex::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerTekHex_IsSignalConnected(const QsciLexerTekHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexertekhex = const_cast<VirtualQsciLexerTekHex*>(dynamic_cast<const VirtualQsciLexerTekHex*>(self))) {
        return vqscilexertekhex->VirtualQsciLexerTekHex::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerTekHex::isSignalConnected called without a directly constructed type");
}

void QsciLexerTekHex_Delete(QsciLexerTekHex* self) {
    delete self;
}
