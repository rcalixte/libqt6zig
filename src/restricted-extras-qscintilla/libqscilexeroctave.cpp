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
#include <qscilexeroctave.h>
#include "libqscilexeroctave.h"
#include "libqscilexeroctave.hxx"

QsciLexerOctave* QsciLexerOctave_new() {
    return new VirtualQsciLexerOctave();
}

QsciLexerOctave* QsciLexerOctave_new2(QObject* parent) {
    return new VirtualQsciLexerOctave(parent);
}

QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerOctave_Metacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerOctave_Tr(const char* s) {
    auto _ret = QsciLexerOctave::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerOctave_Language(const QsciLexerOctave* self) {
    return (const char*)self->language();
}

const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerOctave_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerOctave::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerOctave::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerOctave_SuperMetaObject(const QsciLexerOctave* self) {
    return (QMetaObject*)self->QsciLexerOctave::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnMetaObject(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_metaobject_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerOctave_SuperMetacast(QsciLexerOctave* self, const char* param1) {
    return self->QsciLexerOctave::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnMetacast(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_metacast_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerOctave_SuperMetacall(QsciLexerOctave* self, int param1, int param2, void** param3) {
    return self->QsciLexerOctave::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnMetacall(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_metacall_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_LexerId(const QsciLexerOctave* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerOctave_SuperLexerId(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnLexerId(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_lexerid_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerOctave_AutoCompletionFillups(const QsciLexerOctave* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerOctave_SuperAutoCompletionFillups(const QsciLexerOctave* self) {
    return (const char*)self->QsciLexerOctave::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnAutoCompletionFillups(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerOctave_AutoCompletionWordSeparators(const QsciLexerOctave* self) {
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
libqt_list /* of libqt_string */ QsciLexerOctave_SuperAutoCompletionWordSeparators(const QsciLexerOctave* self) {
    QList<QString> _ret = self->QsciLexerOctave::autoCompletionWordSeparators();
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
void QsciLexerOctave_OnAutoCompletionWordSeparators(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockEnd(const QsciLexerOctave* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerOctave_SuperBlockEnd(const QsciLexerOctave* self, int* style) {
    return (const char*)self->QsciLexerOctave::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockEnd(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_blockend_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_BlockLookback(const QsciLexerOctave* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerOctave_SuperBlockLookback(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockLookback(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_blocklookback_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStart(const QsciLexerOctave* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerOctave_SuperBlockStart(const QsciLexerOctave* self, int* style) {
    return (const char*)self->QsciLexerOctave::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStart(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_blockstart_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerOctave_BlockStartKeyword(const QsciLexerOctave* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerOctave_SuperBlockStartKeyword(const QsciLexerOctave* self, int* style) {
    return (const char*)self->QsciLexerOctave::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBlockStartKeyword(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_BraceStyle(const QsciLexerOctave* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerOctave_SuperBraceStyle(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnBraceStyle(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_bracestyle_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_CaseSensitive(const QsciLexerOctave* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerOctave_SuperCaseSensitive(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCaseSensitive(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_casesensitive_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerOctave_Color(const QsciLexerOctave* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerOctave_SuperColor(const QsciLexerOctave* self, int style) {
    return new QColor(self->QsciLexerOctave::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnColor(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_color_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_EolFill(const QsciLexerOctave* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerOctave_SuperEolFill(const QsciLexerOctave* self, int style) {
    return self->QsciLexerOctave::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEolFill(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_eolfill_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerOctave_Font(const QsciLexerOctave* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerOctave_SuperFont(const QsciLexerOctave* self, int style) {
    return new QFont(self->QsciLexerOctave::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnFont(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_font_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_IndentationGuideView(const QsciLexerOctave* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerOctave_SuperIndentationGuideView(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnIndentationGuideView(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_DefaultStyle(const QsciLexerOctave* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerOctave_SuperDefaultStyle(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultStyle(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerOctave_Description(const QsciLexerOctave* self, int style) {
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
void QsciLexerOctave_OnDescription(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_description_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerOctave_Paper(const QsciLexerOctave* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerOctave_SuperPaper(const QsciLexerOctave* self, int style) {
    return new QColor(self->QsciLexerOctave::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnPaper(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_paper_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultColor2(const QsciLexerOctave* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerOctave_SuperDefaultColor2(const QsciLexerOctave* self, int style) {
    return new QColor(self->QsciLexerOctave::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultColor2(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_DefaultEolFill(const QsciLexerOctave* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerOctave_SuperDefaultEolFill(const QsciLexerOctave* self, int style) {
    return self->QsciLexerOctave::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultEolFill(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerOctave_DefaultFont2(const QsciLexerOctave* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerOctave_SuperDefaultFont2(const QsciLexerOctave* self, int style) {
    return new QFont(self->QsciLexerOctave::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultFont2(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerOctave_DefaultPaper2(const QsciLexerOctave* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerOctave_SuperDefaultPaper2(const QsciLexerOctave* self, int style) {
    return new QColor(self->QsciLexerOctave::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDefaultPaper2(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerOctave_SuperSetEditor(QsciLexerOctave* self, QsciScintilla* editor) {
    self->QsciLexerOctave::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEditor(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_seteditor_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_RefreshProperties(QsciLexerOctave* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerOctave_SuperRefreshProperties(QsciLexerOctave* self) {
    self->QsciLexerOctave::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnRefreshProperties(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerOctave_StyleBitsNeeded(const QsciLexerOctave* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerOctave_SuperStyleBitsNeeded(const QsciLexerOctave* self) {
    return self->QsciLexerOctave::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnStyleBitsNeeded(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerOctave_WordCharacters(const QsciLexerOctave* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerOctave_SuperWordCharacters(const QsciLexerOctave* self) {
    return (const char*)self->QsciLexerOctave::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWordCharacters(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerOctave_SuperSetAutoIndentStyle(QsciLexerOctave* self, int autoindentstyle) {
    self->QsciLexerOctave::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetAutoIndentStyle(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetColor(QsciLexerOctave* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerOctave_SuperSetColor(QsciLexerOctave* self, const QColor* c, int style) {
    self->QsciLexerOctave::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetColor(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_setcolor_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerOctave_SuperSetEolFill(QsciLexerOctave* self, bool eoffill, int style) {
    self->QsciLexerOctave::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetEolFill(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_seteolfill_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetFont(QsciLexerOctave* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerOctave_SuperSetFont(QsciLexerOctave* self, const QFont* f, int style) {
    self->QsciLexerOctave::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetFont(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_setfont_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_SetPaper(QsciLexerOctave* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerOctave_SuperSetPaper(QsciLexerOctave* self, const QColor* c, int style) {
    self->QsciLexerOctave::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnSetPaper(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_setpaper_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_ReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        return vqscilexeroctave->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerOctave_SuperReadProperties(QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        return vqscilexeroctave->QsciLexerOctave::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnReadProperties(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_readproperties_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_WriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self));
    if (vqscilexeroctave) {
        return vqscilexeroctave->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerOctave_SuperWriteProperties(const QsciLexerOctave* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->QsciLexerOctave::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnWriteProperties(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self)))
        vqscilexeroctave->qscilexeroctave_writeproperties_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_Event(QsciLexerOctave* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerOctave_SuperEvent(QsciLexerOctave* self, QEvent* event) {
    return self->QsciLexerOctave::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_event_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerOctave_EventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerOctave_SuperEventFilter(QsciLexerOctave* self, QObject* watched, QEvent* event) {
    return self->QsciLexerOctave::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnEventFilter(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_eventfilter_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_TimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        vqscilexeroctave->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerOctave_SuperTimerEvent(QsciLexerOctave* self, QTimerEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->QsciLexerOctave::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnTimerEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_timerevent_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_ChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        vqscilexeroctave->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerOctave_SuperChildEvent(QsciLexerOctave* self, QChildEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->QsciLexerOctave::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnChildEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_childevent_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_CustomEvent(QsciLexerOctave* self, QEvent* event) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        vqscilexeroctave->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerOctave_SuperCustomEvent(QsciLexerOctave* self, QEvent* event) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->QsciLexerOctave::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnCustomEvent(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_customevent_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_ConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        vqscilexeroctave->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerOctave_SuperConnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->QsciLexerOctave::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnConnectNotify(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_connectnotify_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerOctave_DisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self);
    if (vqscilexeroctave) {
        vqscilexeroctave->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerOctave::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerOctave_SuperDisconnectNotify(QsciLexerOctave* self, const QMetaMethod* signal) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self)) {
        vqscilexeroctave->QsciLexerOctave::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerOctave::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerOctave_OnDisconnectNotify(QsciLexerOctave* self, intptr_t slot) {
    if (auto* vqscilexeroctave = dynamic_cast<VirtualQsciLexerOctave*>(self))
        vqscilexeroctave->qscilexeroctave_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerOctave::QsciLexerOctave_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerOctave_TextAsBytes(const QsciLexerOctave* self, const libqt_string text) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexeroctave->VirtualQsciLexerOctave::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerOctave::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerOctave_BytesAsText(const QsciLexerOctave* self, const char* bytes, int size) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        auto _ret = vqscilexeroctave->VirtualQsciLexerOctave::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerOctave::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerOctave_Sender(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->VirtualQsciLexerOctave::sender();
    } else
        qFatal("Error: Protected method QsciLexerOctave::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerOctave_SenderSignalIndex(const QsciLexerOctave* self) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->VirtualQsciLexerOctave::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerOctave::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerOctave_Receivers(const QsciLexerOctave* self, const char* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->VirtualQsciLexerOctave::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerOctave::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerOctave_IsSignalConnected(const QsciLexerOctave* self, const QMetaMethod* signal) {
    if (auto* vqscilexeroctave = const_cast<VirtualQsciLexerOctave*>(dynamic_cast<const VirtualQsciLexerOctave*>(self))) {
        return vqscilexeroctave->VirtualQsciLexerOctave::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerOctave::isSignalConnected called without a directly constructed type");
}

void QsciLexerOctave_Delete(QsciLexerOctave* self) {
    delete self;
}
