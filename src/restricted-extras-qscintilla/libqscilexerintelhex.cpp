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
#include <qscilexerintelhex.h>
#include "libqscilexerintelhex.h"
#include "libqscilexerintelhex.hxx"

QsciLexerIntelHex* QsciLexerIntelHex_new() {
    return new VirtualQsciLexerIntelHex();
}

QsciLexerIntelHex* QsciLexerIntelHex_new2(QObject* parent) {
    return new VirtualQsciLexerIntelHex(parent);
}

QMetaObject* QsciLexerIntelHex_MetaObject(const QsciLexerIntelHex* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerIntelHex_Metacast(QsciLexerIntelHex* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerIntelHex_Metacall(QsciLexerIntelHex* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerIntelHex_Tr(const char* s) {
    auto _ret = QsciLexerIntelHex::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerIntelHex_Language(const QsciLexerIntelHex* self) {
    return (const char*)self->language();
}

const char* QsciLexerIntelHex_Lexer(const QsciLexerIntelHex* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerIntelHex_Description(const QsciLexerIntelHex* self, int style) {
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

libqt_string QsciLexerIntelHex_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerIntelHex::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerIntelHex_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerIntelHex::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerIntelHex_SuperMetaObject(const QsciLexerIntelHex* self) {
    return (QMetaObject*)self->QsciLexerIntelHex::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnMetaObject(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_metaobject_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerIntelHex_SuperMetacast(QsciLexerIntelHex* self, const char* param1) {
    return self->QsciLexerIntelHex::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnMetacast(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_metacast_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerIntelHex_SuperMetacall(QsciLexerIntelHex* self, int param1, int param2, void** param3) {
    return self->QsciLexerIntelHex::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnMetacall(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_metacall_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_LexerId(const QsciLexerIntelHex* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperLexerId(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnLexerId(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_lexerid_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_AutoCompletionFillups(const QsciLexerIntelHex* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperAutoCompletionFillups(const QsciLexerIntelHex* self) {
    return (const char*)self->QsciLexerIntelHex::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnAutoCompletionFillups(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerIntelHex_AutoCompletionWordSeparators(const QsciLexerIntelHex* self) {
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
libqt_list /* of libqt_string */ QsciLexerIntelHex_SuperAutoCompletionWordSeparators(const QsciLexerIntelHex* self) {
    QList<QString> _ret = self->QsciLexerIntelHex::autoCompletionWordSeparators();
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
void QsciLexerIntelHex_OnAutoCompletionWordSeparators(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockEnd(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperBlockEnd(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->QsciLexerIntelHex::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockEnd(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_blockend_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_BlockLookback(const QsciLexerIntelHex* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperBlockLookback(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockLookback(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_blocklookback_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockStart(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperBlockStart(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->QsciLexerIntelHex::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockStart(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_blockstart_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_BlockStartKeyword(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperBlockStartKeyword(const QsciLexerIntelHex* self, int* style) {
    return (const char*)self->QsciLexerIntelHex::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBlockStartKeyword(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_BraceStyle(const QsciLexerIntelHex* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperBraceStyle(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnBraceStyle(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_bracestyle_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_CaseSensitive(const QsciLexerIntelHex* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperCaseSensitive(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnCaseSensitive(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_casesensitive_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_Color(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIntelHex_SuperColor(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->QsciLexerIntelHex::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnColor(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_color_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_EolFill(const QsciLexerIntelHex* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperEolFill(const QsciLexerIntelHex* self, int style) {
    return self->QsciLexerIntelHex::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEolFill(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_eolfill_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerIntelHex_Font(const QsciLexerIntelHex* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerIntelHex_SuperFont(const QsciLexerIntelHex* self, int style) {
    return new QFont(self->QsciLexerIntelHex::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnFont(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_font_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_IndentationGuideView(const QsciLexerIntelHex* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperIndentationGuideView(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnIndentationGuideView(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_Keywords(const QsciLexerIntelHex* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperKeywords(const QsciLexerIntelHex* self, int set) {
    return (const char*)self->QsciLexerIntelHex::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnKeywords(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_keywords_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_DefaultStyle(const QsciLexerIntelHex* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperDefaultStyle(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultStyle(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_Paper(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIntelHex_SuperPaper(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->QsciLexerIntelHex::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnPaper(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_paper_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_DefaultColor2(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIntelHex_SuperDefaultColor2(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->QsciLexerIntelHex::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultColor2(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_DefaultEolFill(const QsciLexerIntelHex* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperDefaultEolFill(const QsciLexerIntelHex* self, int style) {
    return self->QsciLexerIntelHex::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultEolFill(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerIntelHex_DefaultFont2(const QsciLexerIntelHex* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerIntelHex_SuperDefaultFont2(const QsciLexerIntelHex* self, int style) {
    return new QFont(self->QsciLexerIntelHex::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultFont2(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerIntelHex_DefaultPaper2(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerIntelHex_SuperDefaultPaper2(const QsciLexerIntelHex* self, int style) {
    return new QColor(self->QsciLexerIntelHex::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDefaultPaper2(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetEditor(QsciLexerIntelHex* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetEditor(QsciLexerIntelHex* self, QsciScintilla* editor) {
    self->QsciLexerIntelHex::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetEditor(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_seteditor_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_RefreshProperties(QsciLexerIntelHex* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerIntelHex_SuperRefreshProperties(QsciLexerIntelHex* self) {
    self->QsciLexerIntelHex::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnRefreshProperties(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerIntelHex_StyleBitsNeeded(const QsciLexerIntelHex* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerIntelHex_SuperStyleBitsNeeded(const QsciLexerIntelHex* self) {
    return self->QsciLexerIntelHex::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnStyleBitsNeeded(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerIntelHex_WordCharacters(const QsciLexerIntelHex* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerIntelHex_SuperWordCharacters(const QsciLexerIntelHex* self) {
    return (const char*)self->QsciLexerIntelHex::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnWordCharacters(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetAutoIndentStyle(QsciLexerIntelHex* self, int autoindentstyle) {
    self->QsciLexerIntelHex::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetAutoIndentStyle(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetColor(QsciLexerIntelHex* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetColor(QsciLexerIntelHex* self, const QColor* c, int style) {
    self->QsciLexerIntelHex::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetColor(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_setcolor_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetEolFill(QsciLexerIntelHex* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetEolFill(QsciLexerIntelHex* self, bool eoffill, int style) {
    self->QsciLexerIntelHex::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetEolFill(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_seteolfill_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetFont(QsciLexerIntelHex* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetFont(QsciLexerIntelHex* self, const QFont* f, int style) {
    self->QsciLexerIntelHex::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetFont(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_setfont_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_SetPaper(QsciLexerIntelHex* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerIntelHex_SuperSetPaper(QsciLexerIntelHex* self, const QColor* c, int style) {
    self->QsciLexerIntelHex::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnSetPaper(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_setpaper_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_ReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        return vqscilexerintelhex->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperReadProperties(QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        return vqscilexerintelhex->QsciLexerIntelHex::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnReadProperties(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_readproperties_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_WriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self));
    if (vqscilexerintelhex) {
        return vqscilexerintelhex->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperWriteProperties(const QsciLexerIntelHex* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        return vqscilexerintelhex->QsciLexerIntelHex::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnWriteProperties(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self)))
        vqscilexerintelhex->qscilexerintelhex_writeproperties_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_Event(QsciLexerIntelHex* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperEvent(QsciLexerIntelHex* self, QEvent* event) {
    return self->QsciLexerIntelHex::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEvent(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_event_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerIntelHex_EventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerIntelHex_SuperEventFilter(QsciLexerIntelHex* self, QObject* watched, QEvent* event) {
    return self->QsciLexerIntelHex::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnEventFilter(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_eventfilter_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_TimerEvent(QsciLexerIntelHex* self, QTimerEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        vqscilexerintelhex->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIntelHex_SuperTimerEvent(QsciLexerIntelHex* self, QTimerEvent* event) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        vqscilexerintelhex->QsciLexerIntelHex::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnTimerEvent(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_timerevent_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_ChildEvent(QsciLexerIntelHex* self, QChildEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        vqscilexerintelhex->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIntelHex_SuperChildEvent(QsciLexerIntelHex* self, QChildEvent* event) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        vqscilexerintelhex->QsciLexerIntelHex::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnChildEvent(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_childevent_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_CustomEvent(QsciLexerIntelHex* self, QEvent* event) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        vqscilexerintelhex->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIntelHex_SuperCustomEvent(QsciLexerIntelHex* self, QEvent* event) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        vqscilexerintelhex->QsciLexerIntelHex::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnCustomEvent(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_customevent_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_ConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        vqscilexerintelhex->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIntelHex_SuperConnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        vqscilexerintelhex->QsciLexerIntelHex::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnConnectNotify(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_connectnotify_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerIntelHex_DisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self);
    if (vqscilexerintelhex) {
        vqscilexerintelhex->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerIntelHex::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerIntelHex_SuperDisconnectNotify(QsciLexerIntelHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self)) {
        vqscilexerintelhex->QsciLexerIntelHex::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerIntelHex::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerIntelHex_OnDisconnectNotify(QsciLexerIntelHex* self, intptr_t slot) {
    if (auto* vqscilexerintelhex = dynamic_cast<VirtualQsciLexerIntelHex*>(self))
        vqscilexerintelhex->qscilexerintelhex_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerIntelHex::QsciLexerIntelHex_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerIntelHex_TextAsBytes(const QsciLexerIntelHex* self, const libqt_string text) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerintelhex->VirtualQsciLexerIntelHex::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerIntelHex_BytesAsText(const QsciLexerIntelHex* self, const char* bytes, int size) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        auto _ret = vqscilexerintelhex->VirtualQsciLexerIntelHex::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerIntelHex_Sender(const QsciLexerIntelHex* self) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        return vqscilexerintelhex->VirtualQsciLexerIntelHex::sender();
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerIntelHex_SenderSignalIndex(const QsciLexerIntelHex* self) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        return vqscilexerintelhex->VirtualQsciLexerIntelHex::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerIntelHex_Receivers(const QsciLexerIntelHex* self, const char* signal) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        return vqscilexerintelhex->VirtualQsciLexerIntelHex::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerIntelHex_IsSignalConnected(const QsciLexerIntelHex* self, const QMetaMethod* signal) {
    if (auto* vqscilexerintelhex = const_cast<VirtualQsciLexerIntelHex*>(dynamic_cast<const VirtualQsciLexerIntelHex*>(self))) {
        return vqscilexerintelhex->VirtualQsciLexerIntelHex::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerIntelHex::isSignalConnected called without a directly constructed type");
}

void QsciLexerIntelHex_Delete(QsciLexerIntelHex* self) {
    delete self;
}
