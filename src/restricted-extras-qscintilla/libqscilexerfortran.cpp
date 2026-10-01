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
#include <qscilexerfortran.h>
#include "libqscilexerfortran.h"
#include "libqscilexerfortran.hxx"

QsciLexerFortran* QsciLexerFortran_new() {
    return new VirtualQsciLexerFortran();
}

QsciLexerFortran* QsciLexerFortran_new2(QObject* parent) {
    return new VirtualQsciLexerFortran(parent);
}

QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerFortran_Metacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerFortran_Tr(const char* s) {
    auto _ret = QsciLexerFortran::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerFortran_Language(const QsciLexerFortran* self) {
    return (const char*)self->language();
}

const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerFortran_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerFortran::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerFortran::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerFortran_SuperMetaObject(const QsciLexerFortran* self) {
    return (QMetaObject*)self->QsciLexerFortran::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnMetaObject(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_metaobject_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerFortran_SuperMetacast(QsciLexerFortran* self, const char* param1) {
    return self->QsciLexerFortran::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnMetacast(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_metacast_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerFortran_SuperMetacall(QsciLexerFortran* self, int param1, int param2, void** param3) {
    return self->QsciLexerFortran::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnMetacall(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_metacall_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetFoldCompact(QsciLexerFortran* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerFortran_SuperSetFoldCompact(QsciLexerFortran* self, bool fold) {
    self->QsciLexerFortran::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFoldCompact(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_LexerId(const QsciLexerFortran* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerFortran_SuperLexerId(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnLexerId(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_lexerid_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran_AutoCompletionFillups(const QsciLexerFortran* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerFortran_SuperAutoCompletionFillups(const QsciLexerFortran* self) {
    return (const char*)self->QsciLexerFortran::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnAutoCompletionFillups(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerFortran_AutoCompletionWordSeparators(const QsciLexerFortran* self) {
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
libqt_list /* of libqt_string */ QsciLexerFortran_SuperAutoCompletionWordSeparators(const QsciLexerFortran* self) {
    QList<QString> _ret = self->QsciLexerFortran::autoCompletionWordSeparators();
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
void QsciLexerFortran_OnAutoCompletionWordSeparators(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockEnd(const QsciLexerFortran* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran_SuperBlockEnd(const QsciLexerFortran* self, int* style) {
    return (const char*)self->QsciLexerFortran::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockEnd(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_blockend_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_BlockLookback(const QsciLexerFortran* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerFortran_SuperBlockLookback(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockLookback(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_blocklookback_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStart(const QsciLexerFortran* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran_SuperBlockStart(const QsciLexerFortran* self, int* style) {
    return (const char*)self->QsciLexerFortran::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStart(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_blockstart_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran_BlockStartKeyword(const QsciLexerFortran* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran_SuperBlockStartKeyword(const QsciLexerFortran* self, int* style) {
    return (const char*)self->QsciLexerFortran::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBlockStartKeyword(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_BraceStyle(const QsciLexerFortran* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerFortran_SuperBraceStyle(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnBraceStyle(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_bracestyle_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_CaseSensitive(const QsciLexerFortran* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerFortran_SuperCaseSensitive(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCaseSensitive(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_casesensitive_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran_Color(const QsciLexerFortran* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran_SuperColor(const QsciLexerFortran* self, int style) {
    return new QColor(self->QsciLexerFortran::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnColor(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_color_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_EolFill(const QsciLexerFortran* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerFortran_SuperEolFill(const QsciLexerFortran* self, int style) {
    return self->QsciLexerFortran::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEolFill(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_eolfill_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerFortran_Font(const QsciLexerFortran* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerFortran_SuperFont(const QsciLexerFortran* self, int style) {
    return new QFont(self->QsciLexerFortran::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnFont(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_font_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_IndentationGuideView(const QsciLexerFortran* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerFortran_SuperIndentationGuideView(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnIndentationGuideView(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_DefaultStyle(const QsciLexerFortran* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerFortran_SuperDefaultStyle(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultStyle(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerFortran_Description(const QsciLexerFortran* self, int style) {
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

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDescription(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_description_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran_Paper(const QsciLexerFortran* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran_SuperPaper(const QsciLexerFortran* self, int style) {
    return new QColor(self->QsciLexerFortran::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnPaper(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_paper_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultColor2(const QsciLexerFortran* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran_SuperDefaultColor2(const QsciLexerFortran* self, int style) {
    return new QColor(self->QsciLexerFortran::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultColor2(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_DefaultEolFill(const QsciLexerFortran* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerFortran_SuperDefaultEolFill(const QsciLexerFortran* self, int style) {
    return self->QsciLexerFortran::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultEolFill(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerFortran_DefaultFont2(const QsciLexerFortran* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerFortran_SuperDefaultFont2(const QsciLexerFortran* self, int style) {
    return new QFont(self->QsciLexerFortran::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultFont2(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran_DefaultPaper2(const QsciLexerFortran* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran_SuperDefaultPaper2(const QsciLexerFortran* self, int style) {
    return new QColor(self->QsciLexerFortran::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDefaultPaper2(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerFortran_SuperSetEditor(QsciLexerFortran* self, QsciScintilla* editor) {
    self->QsciLexerFortran::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEditor(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_seteditor_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_RefreshProperties(QsciLexerFortran* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerFortran_SuperRefreshProperties(QsciLexerFortran* self) {
    self->QsciLexerFortran::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnRefreshProperties(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran_StyleBitsNeeded(const QsciLexerFortran* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerFortran_SuperStyleBitsNeeded(const QsciLexerFortran* self) {
    return self->QsciLexerFortran::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnStyleBitsNeeded(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran_WordCharacters(const QsciLexerFortran* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerFortran_SuperWordCharacters(const QsciLexerFortran* self) {
    return (const char*)self->QsciLexerFortran::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWordCharacters(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerFortran_SuperSetAutoIndentStyle(QsciLexerFortran* self, int autoindentstyle) {
    self->QsciLexerFortran::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetAutoIndentStyle(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetColor(QsciLexerFortran* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran_SuperSetColor(QsciLexerFortran* self, const QColor* c, int style) {
    self->QsciLexerFortran::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetColor(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_setcolor_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran_SuperSetEolFill(QsciLexerFortran* self, bool eoffill, int style) {
    self->QsciLexerFortran::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetEolFill(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_seteolfill_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetFont(QsciLexerFortran* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran_SuperSetFont(QsciLexerFortran* self, const QFont* f, int style) {
    self->QsciLexerFortran::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetFont(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_setfont_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_SetPaper(QsciLexerFortran* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran_SuperSetPaper(QsciLexerFortran* self, const QColor* c, int style) {
    self->QsciLexerFortran::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnSetPaper(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_setpaper_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_ReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        return vqscilexerfortran->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerFortran_SuperReadProperties(QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        return vqscilexerfortran->QsciLexerFortran::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnReadProperties(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_readproperties_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_WriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self));
    if (vqscilexerfortran) {
        return vqscilexerfortran->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerFortran_SuperWriteProperties(const QsciLexerFortran* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->QsciLexerFortran::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnWriteProperties(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self)))
        vqscilexerfortran->qscilexerfortran_writeproperties_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_Event(QsciLexerFortran* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerFortran_SuperEvent(QsciLexerFortran* self, QEvent* event) {
    return self->QsciLexerFortran::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_event_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran_EventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerFortran_SuperEventFilter(QsciLexerFortran* self, QObject* watched, QEvent* event) {
    return self->QsciLexerFortran::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnEventFilter(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_eventfilter_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_TimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        vqscilexerfortran->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran_SuperTimerEvent(QsciLexerFortran* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->QsciLexerFortran::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnTimerEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_timerevent_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_ChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        vqscilexerfortran->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran_SuperChildEvent(QsciLexerFortran* self, QChildEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->QsciLexerFortran::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnChildEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_childevent_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_CustomEvent(QsciLexerFortran* self, QEvent* event) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        vqscilexerfortran->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran_SuperCustomEvent(QsciLexerFortran* self, QEvent* event) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->QsciLexerFortran::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnCustomEvent(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_customevent_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_ConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        vqscilexerfortran->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran_SuperConnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->QsciLexerFortran::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnConnectNotify(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_connectnotify_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran_DisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self);
    if (vqscilexerfortran) {
        vqscilexerfortran->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran_SuperDisconnectNotify(QsciLexerFortran* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self)) {
        vqscilexerfortran->QsciLexerFortran::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran_OnDisconnectNotify(QsciLexerFortran* self, intptr_t slot) {
    if (auto* vqscilexerfortran = dynamic_cast<VirtualQsciLexerFortran*>(self))
        vqscilexerfortran->qscilexerfortran_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerFortran::QsciLexerFortran_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerFortran_TextAsBytes(const QsciLexerFortran* self, const libqt_string text) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerfortran->VirtualQsciLexerFortran::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerFortran::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerFortran_BytesAsText(const QsciLexerFortran* self, const char* bytes, int size) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        auto _ret = vqscilexerfortran->VirtualQsciLexerFortran::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerFortran::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerFortran_Sender(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->VirtualQsciLexerFortran::sender();
    } else
        qFatal("Error: Protected method QsciLexerFortran::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerFortran_SenderSignalIndex(const QsciLexerFortran* self) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->VirtualQsciLexerFortran::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerFortran::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerFortran_Receivers(const QsciLexerFortran* self, const char* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->VirtualQsciLexerFortran::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerFortran::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerFortran_IsSignalConnected(const QsciLexerFortran* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran = const_cast<VirtualQsciLexerFortran*>(dynamic_cast<const VirtualQsciLexerFortran*>(self))) {
        return vqscilexerfortran->VirtualQsciLexerFortran::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerFortran::isSignalConnected called without a directly constructed type");
}

void QsciLexerFortran_Delete(QsciLexerFortran* self) {
    delete self;
}
