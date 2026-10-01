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
#include <qscilexeredifact.h>
#include "libqscilexeredifact.h"
#include "libqscilexeredifact.hxx"

QsciLexerEDIFACT* QsciLexerEDIFACT_new() {
    return new VirtualQsciLexerEDIFACT();
}

QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent) {
    return new VirtualQsciLexerEDIFACT(parent);
}

QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerEDIFACT_Metacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerEDIFACT_Tr(const char* s) {
    auto _ret = QsciLexerEDIFACT::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self) {
    return (const char*)self->language();
}

const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

libqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style) {
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

libqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerEDIFACT::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerEDIFACT::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerEDIFACT_SuperMetaObject(const QsciLexerEDIFACT* self) {
    return (QMetaObject*)self->QsciLexerEDIFACT::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnMetaObject(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_metaobject_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerEDIFACT_SuperMetacast(QsciLexerEDIFACT* self, const char* param1) {
    return self->QsciLexerEDIFACT::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnMetacast(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_metacast_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperMetacall(QsciLexerEDIFACT* self, int param1, int param2, void** param3) {
    return self->QsciLexerEDIFACT::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnMetacall(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_metacall_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_LexerId(const QsciLexerEDIFACT* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperLexerId(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnLexerId(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_lexerid_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_AutoCompletionFillups(const QsciLexerEDIFACT* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperAutoCompletionFillups(const QsciLexerEDIFACT* self) {
    return (const char*)self->QsciLexerEDIFACT::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnAutoCompletionFillups(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerEDIFACT_AutoCompletionWordSeparators(const QsciLexerEDIFACT* self) {
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
libqt_list /* of libqt_string */ QsciLexerEDIFACT_SuperAutoCompletionWordSeparators(const QsciLexerEDIFACT* self) {
    QList<QString> _ret = self->QsciLexerEDIFACT::autoCompletionWordSeparators();
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
void QsciLexerEDIFACT_OnAutoCompletionWordSeparators(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockEnd(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperBlockEnd(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->QsciLexerEDIFACT::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockEnd(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_blockend_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_BlockLookback(const QsciLexerEDIFACT* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperBlockLookback(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockLookback(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_blocklookback_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockStart(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperBlockStart(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->QsciLexerEDIFACT::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockStart(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_blockstart_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_BlockStartKeyword(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperBlockStartKeyword(const QsciLexerEDIFACT* self, int* style) {
    return (const char*)self->QsciLexerEDIFACT::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBlockStartKeyword(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_BraceStyle(const QsciLexerEDIFACT* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperBraceStyle(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnBraceStyle(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_bracestyle_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_CaseSensitive(const QsciLexerEDIFACT* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperCaseSensitive(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnCaseSensitive(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_casesensitive_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_Color(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_SuperColor(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->QsciLexerEDIFACT::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnColor(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_color_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_EolFill(const QsciLexerEDIFACT* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperEolFill(const QsciLexerEDIFACT* self, int style) {
    return self->QsciLexerEDIFACT::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEolFill(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_eolfill_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerEDIFACT_Font(const QsciLexerEDIFACT* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerEDIFACT_SuperFont(const QsciLexerEDIFACT* self, int style) {
    return new QFont(self->QsciLexerEDIFACT::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnFont(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_font_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_IndentationGuideView(const QsciLexerEDIFACT* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperIndentationGuideView(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnIndentationGuideView(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_Keywords(const QsciLexerEDIFACT* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperKeywords(const QsciLexerEDIFACT* self, int set) {
    return (const char*)self->QsciLexerEDIFACT::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnKeywords(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_keywords_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_DefaultStyle(const QsciLexerEDIFACT* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperDefaultStyle(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultStyle(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_Paper(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_SuperPaper(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->QsciLexerEDIFACT::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnPaper(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_paper_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_DefaultColor2(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_SuperDefaultColor2(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->QsciLexerEDIFACT::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultColor2(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_DefaultEolFill(const QsciLexerEDIFACT* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperDefaultEolFill(const QsciLexerEDIFACT* self, int style) {
    return self->QsciLexerEDIFACT::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultEolFill(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerEDIFACT_DefaultFont2(const QsciLexerEDIFACT* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerEDIFACT_SuperDefaultFont2(const QsciLexerEDIFACT* self, int style) {
    return new QFont(self->QsciLexerEDIFACT::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultFont2(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerEDIFACT_DefaultPaper2(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerEDIFACT_SuperDefaultPaper2(const QsciLexerEDIFACT* self, int style) {
    return new QColor(self->QsciLexerEDIFACT::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDefaultPaper2(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetEditor(QsciLexerEDIFACT* self, QsciScintilla* editor) {
    self->QsciLexerEDIFACT::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetEditor(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_seteditor_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_RefreshProperties(QsciLexerEDIFACT* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperRefreshProperties(QsciLexerEDIFACT* self) {
    self->QsciLexerEDIFACT::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnRefreshProperties(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerEDIFACT_StyleBitsNeeded(const QsciLexerEDIFACT* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerEDIFACT_SuperStyleBitsNeeded(const QsciLexerEDIFACT* self) {
    return self->QsciLexerEDIFACT::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnStyleBitsNeeded(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerEDIFACT_WordCharacters(const QsciLexerEDIFACT* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerEDIFACT_SuperWordCharacters(const QsciLexerEDIFACT* self) {
    return (const char*)self->QsciLexerEDIFACT::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnWordCharacters(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetAutoIndentStyle(QsciLexerEDIFACT* self, int autoindentstyle) {
    self->QsciLexerEDIFACT::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetAutoIndentStyle(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetColor(QsciLexerEDIFACT* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetColor(QsciLexerEDIFACT* self, const QColor* c, int style) {
    self->QsciLexerEDIFACT::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetColor(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_setcolor_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetEolFill(QsciLexerEDIFACT* self, bool eoffill, int style) {
    self->QsciLexerEDIFACT::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetEolFill(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_seteolfill_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetFont(QsciLexerEDIFACT* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetFont(QsciLexerEDIFACT* self, const QFont* f, int style) {
    self->QsciLexerEDIFACT::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetFont(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_setfont_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_SetPaper(QsciLexerEDIFACT* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperSetPaper(QsciLexerEDIFACT* self, const QColor* c, int style) {
    self->QsciLexerEDIFACT::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnSetPaper(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_setpaper_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_ReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        return vqscilexeredifact->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperReadProperties(QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        return vqscilexeredifact->QsciLexerEDIFACT::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnReadProperties(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_readproperties_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_WriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self));
    if (vqscilexeredifact) {
        return vqscilexeredifact->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperWriteProperties(const QsciLexerEDIFACT* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->QsciLexerEDIFACT::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnWriteProperties(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self)))
        vqscilexeredifact->qscilexeredifact_writeproperties_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_Event(QsciLexerEDIFACT* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperEvent(QsciLexerEDIFACT* self, QEvent* event) {
    return self->QsciLexerEDIFACT::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_event_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerEDIFACT_EventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerEDIFACT_SuperEventFilter(QsciLexerEDIFACT* self, QObject* watched, QEvent* event) {
    return self->QsciLexerEDIFACT::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnEventFilter(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_eventfilter_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_TimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event) {
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        vqscilexeredifact->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperTimerEvent(QsciLexerEDIFACT* self, QTimerEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->QsciLexerEDIFACT::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnTimerEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_timerevent_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_ChildEvent(QsciLexerEDIFACT* self, QChildEvent* event) {
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        vqscilexeredifact->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperChildEvent(QsciLexerEDIFACT* self, QChildEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->QsciLexerEDIFACT::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnChildEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_childevent_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_CustomEvent(QsciLexerEDIFACT* self, QEvent* event) {
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        vqscilexeredifact->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperCustomEvent(QsciLexerEDIFACT* self, QEvent* event) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->QsciLexerEDIFACT::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnCustomEvent(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_customevent_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_ConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal) {
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        vqscilexeredifact->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperConnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->QsciLexerEDIFACT::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnConnectNotify(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_connectnotify_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerEDIFACT_DisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal) {
    auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self);
    if (vqscilexeredifact) {
        vqscilexeredifact->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerEDIFACT_SuperDisconnectNotify(QsciLexerEDIFACT* self, const QMetaMethod* signal) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self)) {
        vqscilexeredifact->QsciLexerEDIFACT::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerEDIFACT::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerEDIFACT_OnDisconnectNotify(QsciLexerEDIFACT* self, intptr_t slot) {
    if (auto* vqscilexeredifact = dynamic_cast<VirtualQsciLexerEDIFACT*>(self))
        vqscilexeredifact->qscilexeredifact_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerEDIFACT::QsciLexerEDIFACT_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerEDIFACT_TextAsBytes(const QsciLexerEDIFACT* self, const libqt_string text) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexeredifact->VirtualQsciLexerEDIFACT::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerEDIFACT_BytesAsText(const QsciLexerEDIFACT* self, const char* bytes, int size) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        auto _ret = vqscilexeredifact->VirtualQsciLexerEDIFACT::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerEDIFACT_Sender(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->VirtualQsciLexerEDIFACT::sender();
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerEDIFACT_SenderSignalIndex(const QsciLexerEDIFACT* self) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->VirtualQsciLexerEDIFACT::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerEDIFACT_Receivers(const QsciLexerEDIFACT* self, const char* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->VirtualQsciLexerEDIFACT::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerEDIFACT_IsSignalConnected(const QsciLexerEDIFACT* self, const QMetaMethod* signal) {
    if (auto* vqscilexeredifact = const_cast<VirtualQsciLexerEDIFACT*>(dynamic_cast<const VirtualQsciLexerEDIFACT*>(self))) {
        return vqscilexeredifact->VirtualQsciLexerEDIFACT::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerEDIFACT::isSignalConnected called without a directly constructed type");
}

void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self) {
    delete self;
}
