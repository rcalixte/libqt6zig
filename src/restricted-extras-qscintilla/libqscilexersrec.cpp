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
#include <qscilexersrec.h>
#include "libqscilexersrec.h"
#include "libqscilexersrec.hxx"

QsciLexerSRec* QsciLexerSRec_new() {
    return new VirtualQsciLexerSRec();
}

QsciLexerSRec* QsciLexerSRec_new2(QObject* parent) {
    return new VirtualQsciLexerSRec(parent);
}

QMetaObject* QsciLexerSRec_MetaObject(const QsciLexerSRec* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSRec_Metacast(QsciLexerSRec* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSRec_Metacall(QsciLexerSRec* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerSRec_Tr(const char* s) {
    auto _ret = QsciLexerSRec::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerSRec_Language(const QsciLexerSRec* self) {
    return (const char*)self->language();
}

const char* QsciLexerSRec_Lexer(const QsciLexerSRec* self) {
    return (const char*)self->lexer();
}

libqt_string QsciLexerSRec_Description(const QsciLexerSRec* self, int style) {
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

libqt_string QsciLexerSRec_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerSRec::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSRec_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerSRec::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerSRec_SuperMetaObject(const QsciLexerSRec* self) {
    return (QMetaObject*)self->QsciLexerSRec::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnMetaObject(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_metaobject_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerSRec_SuperMetacast(QsciLexerSRec* self, const char* param1) {
    return self->QsciLexerSRec::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnMetacast(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_metacast_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerSRec_SuperMetacall(QsciLexerSRec* self, int param1, int param2, void** param3) {
    return self->QsciLexerSRec::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnMetacall(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_metacall_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_LexerId(const QsciLexerSRec* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerSRec_SuperLexerId(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnLexerId(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_lexerid_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_AutoCompletionFillups(const QsciLexerSRec* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerSRec_SuperAutoCompletionFillups(const QsciLexerSRec* self) {
    return (const char*)self->QsciLexerSRec::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnAutoCompletionFillups(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSRec_AutoCompletionWordSeparators(const QsciLexerSRec* self) {
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
libqt_list /* of libqt_string */ QsciLexerSRec_SuperAutoCompletionWordSeparators(const QsciLexerSRec* self) {
    QList<QString> _ret = self->QsciLexerSRec::autoCompletionWordSeparators();
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
void QsciLexerSRec_OnAutoCompletionWordSeparators(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockEnd(const QsciLexerSRec* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSRec_SuperBlockEnd(const QsciLexerSRec* self, int* style) {
    return (const char*)self->QsciLexerSRec::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockEnd(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_blockend_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_BlockLookback(const QsciLexerSRec* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerSRec_SuperBlockLookback(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockLookback(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_blocklookback_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockStart(const QsciLexerSRec* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSRec_SuperBlockStart(const QsciLexerSRec* self, int* style) {
    return (const char*)self->QsciLexerSRec::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockStart(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_blockstart_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_BlockStartKeyword(const QsciLexerSRec* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSRec_SuperBlockStartKeyword(const QsciLexerSRec* self, int* style) {
    return (const char*)self->QsciLexerSRec::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBlockStartKeyword(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_BraceStyle(const QsciLexerSRec* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerSRec_SuperBraceStyle(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnBraceStyle(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_bracestyle_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_CaseSensitive(const QsciLexerSRec* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerSRec_SuperCaseSensitive(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnCaseSensitive(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_casesensitive_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSRec_Color(const QsciLexerSRec* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSRec_SuperColor(const QsciLexerSRec* self, int style) {
    return new QColor(self->QsciLexerSRec::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnColor(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_color_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_EolFill(const QsciLexerSRec* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerSRec_SuperEolFill(const QsciLexerSRec* self, int style) {
    return self->QsciLexerSRec::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEolFill(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_eolfill_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSRec_Font(const QsciLexerSRec* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSRec_SuperFont(const QsciLexerSRec* self, int style) {
    return new QFont(self->QsciLexerSRec::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnFont(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_font_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_IndentationGuideView(const QsciLexerSRec* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerSRec_SuperIndentationGuideView(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnIndentationGuideView(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_Keywords(const QsciLexerSRec* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerSRec_SuperKeywords(const QsciLexerSRec* self, int set) {
    return (const char*)self->QsciLexerSRec::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnKeywords(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_keywords_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_DefaultStyle(const QsciLexerSRec* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerSRec_SuperDefaultStyle(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultStyle(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSRec_Paper(const QsciLexerSRec* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSRec_SuperPaper(const QsciLexerSRec* self, int style) {
    return new QColor(self->QsciLexerSRec::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnPaper(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_paper_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSRec_DefaultColor2(const QsciLexerSRec* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSRec_SuperDefaultColor2(const QsciLexerSRec* self, int style) {
    return new QColor(self->QsciLexerSRec::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultColor2(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_DefaultEolFill(const QsciLexerSRec* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerSRec_SuperDefaultEolFill(const QsciLexerSRec* self, int style) {
    return self->QsciLexerSRec::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultEolFill(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSRec_DefaultFont2(const QsciLexerSRec* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSRec_SuperDefaultFont2(const QsciLexerSRec* self, int style) {
    return new QFont(self->QsciLexerSRec::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultFont2(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSRec_DefaultPaper2(const QsciLexerSRec* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSRec_SuperDefaultPaper2(const QsciLexerSRec* self, int style) {
    return new QColor(self->QsciLexerSRec::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDefaultPaper2(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetEditor(QsciLexerSRec* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerSRec_SuperSetEditor(QsciLexerSRec* self, QsciScintilla* editor) {
    self->QsciLexerSRec::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetEditor(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_seteditor_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_RefreshProperties(QsciLexerSRec* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerSRec_SuperRefreshProperties(QsciLexerSRec* self) {
    self->QsciLexerSRec::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnRefreshProperties(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSRec_StyleBitsNeeded(const QsciLexerSRec* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerSRec_SuperStyleBitsNeeded(const QsciLexerSRec* self) {
    return self->QsciLexerSRec::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnStyleBitsNeeded(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSRec_WordCharacters(const QsciLexerSRec* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerSRec_SuperWordCharacters(const QsciLexerSRec* self) {
    return (const char*)self->QsciLexerSRec::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnWordCharacters(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerSRec_SuperSetAutoIndentStyle(QsciLexerSRec* self, int autoindentstyle) {
    self->QsciLexerSRec::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetAutoIndentStyle(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetColor(QsciLexerSRec* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSRec_SuperSetColor(QsciLexerSRec* self, const QColor* c, int style) {
    self->QsciLexerSRec::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetColor(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_setcolor_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetEolFill(QsciLexerSRec* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSRec_SuperSetEolFill(QsciLexerSRec* self, bool eoffill, int style) {
    self->QsciLexerSRec::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetEolFill(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_seteolfill_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetFont(QsciLexerSRec* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSRec_SuperSetFont(QsciLexerSRec* self, const QFont* f, int style) {
    self->QsciLexerSRec::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetFont(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_setfont_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_SetPaper(QsciLexerSRec* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSRec_SuperSetPaper(QsciLexerSRec* self, const QColor* c, int style) {
    self->QsciLexerSRec::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnSetPaper(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_setpaper_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_ReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        return vqscilexersrec->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSRec_SuperReadProperties(QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        return vqscilexersrec->QsciLexerSRec::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnReadProperties(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_readproperties_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_WriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self));
    if (vqscilexersrec) {
        return vqscilexersrec->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSRec_SuperWriteProperties(const QsciLexerSRec* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        return vqscilexersrec->QsciLexerSRec::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnWriteProperties(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self)))
        vqscilexersrec->qscilexersrec_writeproperties_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_Event(QsciLexerSRec* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerSRec_SuperEvent(QsciLexerSRec* self, QEvent* event) {
    return self->QsciLexerSRec::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEvent(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_event_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSRec_EventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerSRec_SuperEventFilter(QsciLexerSRec* self, QObject* watched, QEvent* event) {
    return self->QsciLexerSRec::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnEventFilter(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_eventfilter_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_TimerEvent(QsciLexerSRec* self, QTimerEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        vqscilexersrec->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSRec_SuperTimerEvent(QsciLexerSRec* self, QTimerEvent* event) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        vqscilexersrec->QsciLexerSRec::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnTimerEvent(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_timerevent_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_ChildEvent(QsciLexerSRec* self, QChildEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        vqscilexersrec->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSRec_SuperChildEvent(QsciLexerSRec* self, QChildEvent* event) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        vqscilexersrec->QsciLexerSRec::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnChildEvent(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_childevent_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_CustomEvent(QsciLexerSRec* self, QEvent* event) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        vqscilexersrec->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSRec_SuperCustomEvent(QsciLexerSRec* self, QEvent* event) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        vqscilexersrec->QsciLexerSRec::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnCustomEvent(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_customevent_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_ConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        vqscilexersrec->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSRec_SuperConnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        vqscilexersrec->QsciLexerSRec::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnConnectNotify(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_connectnotify_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSRec_DisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self);
    if (vqscilexersrec) {
        vqscilexersrec->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSRec::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSRec_SuperDisconnectNotify(QsciLexerSRec* self, const QMetaMethod* signal) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self)) {
        vqscilexersrec->QsciLexerSRec::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSRec::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSRec_OnDisconnectNotify(QsciLexerSRec* self, intptr_t slot) {
    if (auto* vqscilexersrec = dynamic_cast<VirtualQsciLexerSRec*>(self))
        vqscilexersrec->qscilexersrec_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerSRec::QsciLexerSRec_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerSRec_TextAsBytes(const QsciLexerSRec* self, const libqt_string text) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexersrec->VirtualQsciLexerSRec::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSRec::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerSRec_BytesAsText(const QsciLexerSRec* self, const char* bytes, int size) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        auto _ret = vqscilexersrec->VirtualQsciLexerSRec::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSRec::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerSRec_Sender(const QsciLexerSRec* self) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        return vqscilexersrec->VirtualQsciLexerSRec::sender();
    } else
        qFatal("Error: Protected method QsciLexerSRec::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSRec_SenderSignalIndex(const QsciLexerSRec* self) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        return vqscilexersrec->VirtualQsciLexerSRec::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerSRec::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSRec_Receivers(const QsciLexerSRec* self, const char* signal) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        return vqscilexersrec->VirtualQsciLexerSRec::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerSRec::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerSRec_IsSignalConnected(const QsciLexerSRec* self, const QMetaMethod* signal) {
    if (auto* vqscilexersrec = const_cast<VirtualQsciLexerSRec*>(dynamic_cast<const VirtualQsciLexerSRec*>(self))) {
        return vqscilexersrec->VirtualQsciLexerSRec::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerSRec::isSignalConnected called without a directly constructed type");
}

void QsciLexerSRec_Delete(QsciLexerSRec* self) {
    delete self;
}
