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
#include <qscilexercmake.h>
#include "libqscilexercmake.h"
#include "libqscilexercmake.hxx"

QsciLexerCMake* QsciLexerCMake_new() {
    return new VirtualQsciLexerCMake();
}

QsciLexerCMake* QsciLexerCMake_new2(QObject* parent) {
    return new VirtualQsciLexerCMake(parent);
}

QMetaObject* QsciLexerCMake_MetaObject(const QsciLexerCMake* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCMake_Metacast(QsciLexerCMake* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCMake_Metacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCMake_Tr(const char* s) {
    auto _ret = QsciLexerCMake::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCMake_Language(const QsciLexerCMake* self) {
    return (const char*)self->language();
}

const char* QsciLexerCMake_Lexer(const QsciLexerCMake* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerCMake_DefaultColor(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCMake_DefaultFont(const QsciLexerCMake* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCMake_DefaultPaper(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCMake_Keywords(const QsciLexerCMake* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCMake_Description(const QsciLexerCMake* self, int style) {
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

void QsciLexerCMake_RefreshProperties(QsciLexerCMake* self) {
    self->refreshProperties();
}

bool QsciLexerCMake_FoldAtElse(const QsciLexerCMake* self) {
    return self->foldAtElse();
}

void QsciLexerCMake_SetFoldAtElse(QsciLexerCMake* self, bool fold) {
    self->setFoldAtElse(fold);
}

libqt_string QsciLexerCMake_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCMake::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCMake_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCMake::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerCMake_SuperMetaObject(const QsciLexerCMake* self) {
    return (QMetaObject*)self->QsciLexerCMake::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnMetaObject(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_metaobject_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCMake_SuperMetacast(QsciLexerCMake* self, const char* param1) {
    return self->QsciLexerCMake::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnMetacast(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_metacast_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCMake_SuperMetacall(QsciLexerCMake* self, int param1, int param2, void** param3) {
    return self->QsciLexerCMake::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnMetacall(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_metacall_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCMake_SuperSetFoldAtElse(QsciLexerCMake* self, bool fold) {
    self->QsciLexerCMake::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFoldAtElse(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_LexerId(const QsciLexerCMake* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCMake_SuperLexerId(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnLexerId(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_lexerid_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCMake_AutoCompletionFillups(const QsciLexerCMake* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCMake_SuperAutoCompletionFillups(const QsciLexerCMake* self) {
    return (const char*)self->QsciLexerCMake::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnAutoCompletionFillups(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCMake_AutoCompletionWordSeparators(const QsciLexerCMake* self) {
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
libqt_list /* of libqt_string */ QsciLexerCMake_SuperAutoCompletionWordSeparators(const QsciLexerCMake* self) {
    QList<QString> _ret = self->QsciLexerCMake::autoCompletionWordSeparators();
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
void QsciLexerCMake_OnAutoCompletionWordSeparators(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockEnd(const QsciLexerCMake* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCMake_SuperBlockEnd(const QsciLexerCMake* self, int* style) {
    return (const char*)self->QsciLexerCMake::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockEnd(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_blockend_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_BlockLookback(const QsciLexerCMake* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCMake_SuperBlockLookback(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockLookback(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStart(const QsciLexerCMake* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCMake_SuperBlockStart(const QsciLexerCMake* self, int* style) {
    return (const char*)self->QsciLexerCMake::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStart(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_blockstart_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCMake_BlockStartKeyword(const QsciLexerCMake* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCMake_SuperBlockStartKeyword(const QsciLexerCMake* self, int* style) {
    return (const char*)self->QsciLexerCMake::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBlockStartKeyword(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_BraceStyle(const QsciLexerCMake* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerCMake_SuperBraceStyle(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnBraceStyle(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_bracestyle_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_CaseSensitive(const QsciLexerCMake* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCMake_SuperCaseSensitive(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCaseSensitive(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCMake_Color(const QsciLexerCMake* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCMake_SuperColor(const QsciLexerCMake* self, int style) {
    return new QColor(self->QsciLexerCMake::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnColor(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_color_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_EolFill(const QsciLexerCMake* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCMake_SuperEolFill(const QsciLexerCMake* self, int style) {
    return self->QsciLexerCMake::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEolFill(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_eolfill_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCMake_Font(const QsciLexerCMake* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCMake_SuperFont(const QsciLexerCMake* self, int style) {
    return new QFont(self->QsciLexerCMake::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnFont(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_font_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_IndentationGuideView(const QsciLexerCMake* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCMake_SuperIndentationGuideView(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnIndentationGuideView(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_DefaultStyle(const QsciLexerCMake* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCMake_SuperDefaultStyle(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultStyle(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCMake_Paper(const QsciLexerCMake* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCMake_SuperPaper(const QsciLexerCMake* self, int style) {
    return new QColor(self->QsciLexerCMake::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnPaper(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_paper_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultColor2(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCMake_SuperDefaultColor2(const QsciLexerCMake* self, int style) {
    return new QColor(self->QsciLexerCMake::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultColor2(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_DefaultEolFill(const QsciLexerCMake* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCMake_SuperDefaultEolFill(const QsciLexerCMake* self, int style) {
    return self->QsciLexerCMake::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultEolFill(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCMake_DefaultFont2(const QsciLexerCMake* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCMake_SuperDefaultFont2(const QsciLexerCMake* self, int style) {
    return new QFont(self->QsciLexerCMake::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultFont2(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCMake_DefaultPaper2(const QsciLexerCMake* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCMake_SuperDefaultPaper2(const QsciLexerCMake* self, int style) {
    return new QColor(self->QsciLexerCMake::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDefaultPaper2(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerCMake_SuperSetEditor(QsciLexerCMake* self, QsciScintilla* editor) {
    self->QsciLexerCMake::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEditor(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_seteditor_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCMake_StyleBitsNeeded(const QsciLexerCMake* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerCMake_SuperStyleBitsNeeded(const QsciLexerCMake* self) {
    return self->QsciLexerCMake::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnStyleBitsNeeded(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCMake_WordCharacters(const QsciLexerCMake* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerCMake_SuperWordCharacters(const QsciLexerCMake* self) {
    return (const char*)self->QsciLexerCMake::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWordCharacters(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCMake_SuperSetAutoIndentStyle(QsciLexerCMake* self, int autoindentstyle) {
    self->QsciLexerCMake::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetAutoIndentStyle(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetColor(QsciLexerCMake* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCMake_SuperSetColor(QsciLexerCMake* self, const QColor* c, int style) {
    self->QsciLexerCMake::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetColor(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_setcolor_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCMake_SuperSetEolFill(QsciLexerCMake* self, bool eoffill, int style) {
    self->QsciLexerCMake::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetEolFill(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetFont(QsciLexerCMake* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCMake_SuperSetFont(QsciLexerCMake* self, const QFont* f, int style) {
    self->QsciLexerCMake::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetFont(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_setfont_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_SetPaper(QsciLexerCMake* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCMake_SuperSetPaper(QsciLexerCMake* self, const QColor* c, int style) {
    self->QsciLexerCMake::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnSetPaper(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_setpaper_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_ReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        return vqscilexercmake->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCMake_SuperReadProperties(QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        return vqscilexercmake->QsciLexerCMake::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnReadProperties(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_readproperties_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_WriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self));
    if (vqscilexercmake) {
        return vqscilexercmake->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCMake_SuperWriteProperties(const QsciLexerCMake* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->QsciLexerCMake::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnWriteProperties(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self)))
        vqscilexercmake->qscilexercmake_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_Event(QsciLexerCMake* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCMake_SuperEvent(QsciLexerCMake* self, QEvent* event) {
    return self->QsciLexerCMake::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_event_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCMake_EventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCMake_SuperEventFilter(QsciLexerCMake* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCMake::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnEventFilter(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_TimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        vqscilexercmake->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCMake_SuperTimerEvent(QsciLexerCMake* self, QTimerEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->QsciLexerCMake::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnTimerEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_timerevent_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_ChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        vqscilexercmake->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCMake_SuperChildEvent(QsciLexerCMake* self, QChildEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->QsciLexerCMake::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnChildEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_childevent_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_CustomEvent(QsciLexerCMake* self, QEvent* event) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        vqscilexercmake->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCMake_SuperCustomEvent(QsciLexerCMake* self, QEvent* event) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->QsciLexerCMake::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnCustomEvent(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_customevent_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_ConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        vqscilexercmake->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCMake_SuperConnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->QsciLexerCMake::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnConnectNotify(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCMake_DisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self);
    if (vqscilexercmake) {
        vqscilexercmake->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCMake::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCMake_SuperDisconnectNotify(QsciLexerCMake* self, const QMetaMethod* signal) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self)) {
        vqscilexercmake->QsciLexerCMake::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCMake::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCMake_OnDisconnectNotify(QsciLexerCMake* self, intptr_t slot) {
    if (auto* vqscilexercmake = dynamic_cast<VirtualQsciLexerCMake*>(self))
        vqscilexercmake->qscilexercmake_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCMake::QsciLexerCMake_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCMake_TextAsBytes(const QsciLexerCMake* self, const libqt_string text) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercmake->VirtualQsciLexerCMake::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCMake::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCMake_BytesAsText(const QsciLexerCMake* self, const char* bytes, int size) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        auto _ret = vqscilexercmake->VirtualQsciLexerCMake::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCMake::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCMake_Sender(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->VirtualQsciLexerCMake::sender();
    } else
        qFatal("Error: Protected method QsciLexerCMake::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCMake_SenderSignalIndex(const QsciLexerCMake* self) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->VirtualQsciLexerCMake::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCMake::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCMake_Receivers(const QsciLexerCMake* self, const char* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->VirtualQsciLexerCMake::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCMake::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCMake_IsSignalConnected(const QsciLexerCMake* self, const QMetaMethod* signal) {
    if (auto* vqscilexercmake = const_cast<VirtualQsciLexerCMake*>(dynamic_cast<const VirtualQsciLexerCMake*>(self))) {
        return vqscilexercmake->VirtualQsciLexerCMake::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCMake::isSignalConnected called without a directly constructed type");
}

void QsciLexerCMake_Delete(QsciLexerCMake* self) {
    delete self;
}
