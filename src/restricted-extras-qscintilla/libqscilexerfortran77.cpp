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
#include <qscilexerfortran77.h>
#include "libqscilexerfortran77.h"
#include "libqscilexerfortran77.hxx"

QsciLexerFortran77* QsciLexerFortran77_new() {
    return new VirtualQsciLexerFortran77();
}

QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent) {
    return new VirtualQsciLexerFortran77(parent);
}

QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerFortran77_Metacall(QsciLexerFortran77* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerFortran77_Tr(const char* s) {
    auto _ret = QsciLexerFortran77::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self) {
    return (const char*)self->language();
}

const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self) {
    return (const char*)self->lexer();
}

int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self) {
    return self->braceStyle();
}

QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style) {
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

void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self) {
    self->refreshProperties();
}

bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self) {
    return self->foldCompact();
}

void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerFortran77_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerFortran77::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerFortran77::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerFortran77_SuperMetaObject(const QsciLexerFortran77* self) {
    return (QMetaObject*)self->QsciLexerFortran77::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnMetaObject(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_metaobject_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerFortran77_SuperMetacast(QsciLexerFortran77* self, const char* param1) {
    return self->QsciLexerFortran77::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnMetacast(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_metacast_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerFortran77_SuperMetacall(QsciLexerFortran77* self, int param1, int param2, void** param3) {
    return self->QsciLexerFortran77::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnMetacall(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_metacall_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetFoldCompact(QsciLexerFortran77* self, bool fold) {
    self->QsciLexerFortran77::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetFoldCompact(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran77_LexerId(const QsciLexerFortran77* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerFortran77_SuperLexerId(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnLexerId(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_lexerid_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran77_AutoCompletionFillups(const QsciLexerFortran77* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerFortran77_SuperAutoCompletionFillups(const QsciLexerFortran77* self) {
    return (const char*)self->QsciLexerFortran77::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnAutoCompletionFillups(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerFortran77_AutoCompletionWordSeparators(const QsciLexerFortran77* self) {
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
libqt_list /* of libqt_string */ QsciLexerFortran77_SuperAutoCompletionWordSeparators(const QsciLexerFortran77* self) {
    QList<QString> _ret = self->QsciLexerFortran77::autoCompletionWordSeparators();
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
void QsciLexerFortran77_OnAutoCompletionWordSeparators(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockEnd(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran77_SuperBlockEnd(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->QsciLexerFortran77::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockEnd(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_blockend_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran77_BlockLookback(const QsciLexerFortran77* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerFortran77_SuperBlockLookback(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockLookback(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_blocklookback_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockStart(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran77_SuperBlockStart(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->QsciLexerFortran77::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockStart(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_blockstart_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran77_BlockStartKeyword(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerFortran77_SuperBlockStartKeyword(const QsciLexerFortran77* self, int* style) {
    return (const char*)self->QsciLexerFortran77::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnBlockStartKeyword(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_CaseSensitive(const QsciLexerFortran77* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerFortran77_SuperCaseSensitive(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnCaseSensitive(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_casesensitive_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran77_Color(const QsciLexerFortran77* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran77_SuperColor(const QsciLexerFortran77* self, int style) {
    return new QColor(self->QsciLexerFortran77::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnColor(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_color_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_EolFill(const QsciLexerFortran77* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerFortran77_SuperEolFill(const QsciLexerFortran77* self, int style) {
    return self->QsciLexerFortran77::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEolFill(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_eolfill_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerFortran77_Font(const QsciLexerFortran77* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerFortran77_SuperFont(const QsciLexerFortran77* self, int style) {
    return new QFont(self->QsciLexerFortran77::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnFont(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_font_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran77_IndentationGuideView(const QsciLexerFortran77* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerFortran77_SuperIndentationGuideView(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnIndentationGuideView(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran77_DefaultStyle(const QsciLexerFortran77* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerFortran77_SuperDefaultStyle(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultStyle(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran77_Paper(const QsciLexerFortran77* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran77_SuperPaper(const QsciLexerFortran77* self, int style) {
    return new QColor(self->QsciLexerFortran77::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnPaper(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_paper_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran77_DefaultColor2(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran77_SuperDefaultColor2(const QsciLexerFortran77* self, int style) {
    return new QColor(self->QsciLexerFortran77::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultColor2(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerFortran77_DefaultFont2(const QsciLexerFortran77* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerFortran77_SuperDefaultFont2(const QsciLexerFortran77* self, int style) {
    return new QFont(self->QsciLexerFortran77::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultFont2(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerFortran77_DefaultPaper2(const QsciLexerFortran77* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerFortran77_SuperDefaultPaper2(const QsciLexerFortran77* self, int style) {
    return new QColor(self->QsciLexerFortran77::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDefaultPaper2(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetEditor(QsciLexerFortran77* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetEditor(QsciLexerFortran77* self, QsciScintilla* editor) {
    self->QsciLexerFortran77::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetEditor(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_seteditor_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerFortran77_StyleBitsNeeded(const QsciLexerFortran77* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerFortran77_SuperStyleBitsNeeded(const QsciLexerFortran77* self) {
    return self->QsciLexerFortran77::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnStyleBitsNeeded(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerFortran77_WordCharacters(const QsciLexerFortran77* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerFortran77_SuperWordCharacters(const QsciLexerFortran77* self) {
    return (const char*)self->QsciLexerFortran77::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnWordCharacters(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetAutoIndentStyle(QsciLexerFortran77* self, int autoindentstyle) {
    self->QsciLexerFortran77::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetAutoIndentStyle(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetColor(QsciLexerFortran77* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetColor(QsciLexerFortran77* self, const QColor* c, int style) {
    self->QsciLexerFortran77::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetColor(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_setcolor_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetEolFill(QsciLexerFortran77* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetEolFill(QsciLexerFortran77* self, bool eoffill, int style) {
    self->QsciLexerFortran77::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetEolFill(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_seteolfill_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetFont(QsciLexerFortran77* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetFont(QsciLexerFortran77* self, const QFont* f, int style) {
    self->QsciLexerFortran77::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetFont(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_setfont_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_SetPaper(QsciLexerFortran77* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerFortran77_SuperSetPaper(QsciLexerFortran77* self, const QColor* c, int style) {
    self->QsciLexerFortran77::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnSetPaper(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_setpaper_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_ReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        return vqscilexerfortran77->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerFortran77_SuperReadProperties(QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        return vqscilexerfortran77->QsciLexerFortran77::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnReadProperties(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_readproperties_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_WriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self));
    if (vqscilexerfortran77) {
        return vqscilexerfortran77->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerFortran77_SuperWriteProperties(const QsciLexerFortran77* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->QsciLexerFortran77::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnWriteProperties(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self)))
        vqscilexerfortran77->qscilexerfortran77_writeproperties_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_Event(QsciLexerFortran77* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerFortran77_SuperEvent(QsciLexerFortran77* self, QEvent* event) {
    return self->QsciLexerFortran77::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_event_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerFortran77_EventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerFortran77_SuperEventFilter(QsciLexerFortran77* self, QObject* watched, QEvent* event) {
    return self->QsciLexerFortran77::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnEventFilter(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_eventfilter_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_TimerEvent(QsciLexerFortran77* self, QTimerEvent* event) {
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        vqscilexerfortran77->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran77_SuperTimerEvent(QsciLexerFortran77* self, QTimerEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->QsciLexerFortran77::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnTimerEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_timerevent_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_ChildEvent(QsciLexerFortran77* self, QChildEvent* event) {
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        vqscilexerfortran77->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran77_SuperChildEvent(QsciLexerFortran77* self, QChildEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->QsciLexerFortran77::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnChildEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_childevent_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_CustomEvent(QsciLexerFortran77* self, QEvent* event) {
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        vqscilexerfortran77->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran77_SuperCustomEvent(QsciLexerFortran77* self, QEvent* event) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->QsciLexerFortran77::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnCustomEvent(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_customevent_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_ConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        vqscilexerfortran77->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran77_SuperConnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->QsciLexerFortran77::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnConnectNotify(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_connectnotify_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerFortran77_DisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal) {
    auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self);
    if (vqscilexerfortran77) {
        vqscilexerfortran77->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerFortran77::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerFortran77_SuperDisconnectNotify(QsciLexerFortran77* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self)) {
        vqscilexerfortran77->QsciLexerFortran77::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerFortran77::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerFortran77_OnDisconnectNotify(QsciLexerFortran77* self, intptr_t slot) {
    if (auto* vqscilexerfortran77 = dynamic_cast<VirtualQsciLexerFortran77*>(self))
        vqscilexerfortran77->qscilexerfortran77_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerFortran77::QsciLexerFortran77_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerFortran77_TextAsBytes(const QsciLexerFortran77* self, const libqt_string text) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerfortran77->VirtualQsciLexerFortran77::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerFortran77::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerFortran77_BytesAsText(const QsciLexerFortran77* self, const char* bytes, int size) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        auto _ret = vqscilexerfortran77->VirtualQsciLexerFortran77::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerFortran77::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerFortran77_Sender(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->VirtualQsciLexerFortran77::sender();
    } else
        qFatal("Error: Protected method QsciLexerFortran77::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerFortran77_SenderSignalIndex(const QsciLexerFortran77* self) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->VirtualQsciLexerFortran77::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerFortran77::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerFortran77_Receivers(const QsciLexerFortran77* self, const char* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->VirtualQsciLexerFortran77::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerFortran77::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerFortran77_IsSignalConnected(const QsciLexerFortran77* self, const QMetaMethod* signal) {
    if (auto* vqscilexerfortran77 = const_cast<VirtualQsciLexerFortran77*>(dynamic_cast<const VirtualQsciLexerFortran77*>(self))) {
        return vqscilexerfortran77->VirtualQsciLexerFortran77::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerFortran77::isSignalConnected called without a directly constructed type");
}

void QsciLexerFortran77_Delete(QsciLexerFortran77* self) {
    delete self;
}
