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
#include <qscilexercsharp.h>
#include "libqscilexercsharp.h"
#include "libqscilexercsharp.hxx"

QsciLexerCSharp* QsciLexerCSharp_new() {
    return new VirtualQsciLexerCSharp();
}

QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent) {
    return new VirtualQsciLexerCSharp(parent);
}

QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCSharp_Metacall(QsciLexerCSharp* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCSharp_Tr(const char* s) {
    auto _ret = QsciLexerCSharp::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self) {
    return (const char*)self->language();
}

QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style) {
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

libqt_string QsciLexerCSharp_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCSharp::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCSharp::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerCSharp_SuperMetaObject(const QsciLexerCSharp* self) {
    return (QMetaObject*)self->QsciLexerCSharp::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnMetaObject(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_metaobject_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCSharp_SuperMetacast(QsciLexerCSharp* self, const char* param1) {
    return self->QsciLexerCSharp::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnMetacast(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_metacast_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCSharp_SuperMetacall(QsciLexerCSharp* self, int param1, int param2, void** param3) {
    return self->QsciLexerCSharp::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnMetacall(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_metacall_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldAtElse(QsciLexerCSharp* self, bool fold) {
    self->setFoldAtElse(fold);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetFoldAtElse(QsciLexerCSharp* self, bool fold) {
    self->QsciLexerCSharp::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldAtElse(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldComments(QsciLexerCSharp* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetFoldComments(QsciLexerCSharp* self, bool fold) {
    self->QsciLexerCSharp::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldComments(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldCompact(QsciLexerCSharp* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetFoldCompact(QsciLexerCSharp* self, bool fold) {
    self->QsciLexerCSharp::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldCompact(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetFoldPreprocessor(QsciLexerCSharp* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetFoldPreprocessor(QsciLexerCSharp* self, bool fold) {
    self->QsciLexerCSharp::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFoldPreprocessor(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetStylePreprocessor(QsciLexerCSharp* self, bool style) {
    self->setStylePreprocessor(style);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetStylePreprocessor(QsciLexerCSharp* self, bool style) {
    self->QsciLexerCSharp::setStylePreprocessor(style);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetStylePreprocessor(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setstylepreprocessor_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetStylePreprocessor_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_Lexer(const QsciLexerCSharp* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperLexer(const QsciLexerCSharp* self) {
    return (const char*)self->QsciLexerCSharp::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnLexer(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_lexer_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_LexerId(const QsciLexerCSharp* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCSharp_SuperLexerId(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnLexerId(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_lexerid_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_AutoCompletionFillups(const QsciLexerCSharp* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperAutoCompletionFillups(const QsciLexerCSharp* self) {
    return (const char*)self->QsciLexerCSharp::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnAutoCompletionFillups(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCSharp_AutoCompletionWordSeparators(const QsciLexerCSharp* self) {
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
libqt_list /* of libqt_string */ QsciLexerCSharp_SuperAutoCompletionWordSeparators(const QsciLexerCSharp* self) {
    QList<QString> _ret = self->QsciLexerCSharp::autoCompletionWordSeparators();
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
void QsciLexerCSharp_OnAutoCompletionWordSeparators(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockEnd(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperBlockEnd(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->QsciLexerCSharp::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockEnd(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_blockend_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_BlockLookback(const QsciLexerCSharp* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCSharp_SuperBlockLookback(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockLookback(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockStart(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperBlockStart(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->QsciLexerCSharp::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockStart(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_blockstart_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_BlockStartKeyword(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperBlockStartKeyword(const QsciLexerCSharp* self, int* style) {
    return (const char*)self->QsciLexerCSharp::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBlockStartKeyword(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_BraceStyle(const QsciLexerCSharp* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerCSharp_SuperBraceStyle(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnBraceStyle(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_bracestyle_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_CaseSensitive(const QsciLexerCSharp* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCSharp_SuperCaseSensitive(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnCaseSensitive(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSharp_Color(const QsciLexerCSharp* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSharp_SuperColor(const QsciLexerCSharp* self, int style) {
    return new QColor(self->QsciLexerCSharp::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnColor(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_color_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_EolFill(const QsciLexerCSharp* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCSharp_SuperEolFill(const QsciLexerCSharp* self, int style) {
    return self->QsciLexerCSharp::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEolFill(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_eolfill_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCSharp_Font(const QsciLexerCSharp* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCSharp_SuperFont(const QsciLexerCSharp* self, int style) {
    return new QFont(self->QsciLexerCSharp::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnFont(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_font_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_IndentationGuideView(const QsciLexerCSharp* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCSharp_SuperIndentationGuideView(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnIndentationGuideView(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_DefaultStyle(const QsciLexerCSharp* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCSharp_SuperDefaultStyle(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultStyle(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSharp_Paper(const QsciLexerCSharp* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSharp_SuperPaper(const QsciLexerCSharp* self, int style) {
    return new QColor(self->QsciLexerCSharp::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnPaper(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_paper_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSharp_DefaultColor2(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSharp_SuperDefaultColor2(const QsciLexerCSharp* self, int style) {
    return new QColor(self->QsciLexerCSharp::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultColor2(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCSharp_DefaultFont2(const QsciLexerCSharp* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCSharp_SuperDefaultFont2(const QsciLexerCSharp* self, int style) {
    return new QFont(self->QsciLexerCSharp::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultFont2(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSharp_DefaultPaper2(const QsciLexerCSharp* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSharp_SuperDefaultPaper2(const QsciLexerCSharp* self, int style) {
    return new QColor(self->QsciLexerCSharp::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDefaultPaper2(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetEditor(QsciLexerCSharp* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetEditor(QsciLexerCSharp* self, QsciScintilla* editor) {
    self->QsciLexerCSharp::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetEditor(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_seteditor_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_RefreshProperties(QsciLexerCSharp* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerCSharp_SuperRefreshProperties(QsciLexerCSharp* self) {
    self->QsciLexerCSharp::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnRefreshProperties(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSharp_StyleBitsNeeded(const QsciLexerCSharp* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerCSharp_SuperStyleBitsNeeded(const QsciLexerCSharp* self) {
    return self->QsciLexerCSharp::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnStyleBitsNeeded(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSharp_WordCharacters(const QsciLexerCSharp* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerCSharp_SuperWordCharacters(const QsciLexerCSharp* self) {
    return (const char*)self->QsciLexerCSharp::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnWordCharacters(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetAutoIndentStyle(QsciLexerCSharp* self, int autoindentstyle) {
    self->QsciLexerCSharp::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetAutoIndentStyle(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetColor(QsciLexerCSharp* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetColor(QsciLexerCSharp* self, const QColor* c, int style) {
    self->QsciLexerCSharp::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetColor(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setcolor_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetEolFill(QsciLexerCSharp* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetEolFill(QsciLexerCSharp* self, bool eoffill, int style) {
    self->QsciLexerCSharp::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetEolFill(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetFont(QsciLexerCSharp* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetFont(QsciLexerCSharp* self, const QFont* f, int style) {
    self->QsciLexerCSharp::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetFont(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setfont_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_SetPaper(QsciLexerCSharp* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSharp_SuperSetPaper(QsciLexerCSharp* self, const QColor* c, int style) {
    self->QsciLexerCSharp::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnSetPaper(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_setpaper_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_ReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        return vqscilexercsharp->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCSharp_SuperReadProperties(QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        return vqscilexercsharp->QsciLexerCSharp::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnReadProperties(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_readproperties_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_WriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self));
    if (vqscilexercsharp) {
        return vqscilexercsharp->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCSharp_SuperWriteProperties(const QsciLexerCSharp* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        return vqscilexercsharp->QsciLexerCSharp::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnWriteProperties(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self)))
        vqscilexercsharp->qscilexercsharp_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_Event(QsciLexerCSharp* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCSharp_SuperEvent(QsciLexerCSharp* self, QEvent* event) {
    return self->QsciLexerCSharp::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEvent(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_event_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSharp_EventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCSharp_SuperEventFilter(QsciLexerCSharp* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCSharp::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnEventFilter(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_TimerEvent(QsciLexerCSharp* self, QTimerEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        vqscilexercsharp->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSharp_SuperTimerEvent(QsciLexerCSharp* self, QTimerEvent* event) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        vqscilexercsharp->QsciLexerCSharp::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnTimerEvent(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_timerevent_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_ChildEvent(QsciLexerCSharp* self, QChildEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        vqscilexercsharp->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSharp_SuperChildEvent(QsciLexerCSharp* self, QChildEvent* event) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        vqscilexercsharp->QsciLexerCSharp::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnChildEvent(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_childevent_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_CustomEvent(QsciLexerCSharp* self, QEvent* event) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        vqscilexercsharp->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSharp_SuperCustomEvent(QsciLexerCSharp* self, QEvent* event) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        vqscilexercsharp->QsciLexerCSharp::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnCustomEvent(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_customevent_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_ConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        vqscilexercsharp->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSharp_SuperConnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        vqscilexercsharp->QsciLexerCSharp::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnConnectNotify(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSharp_DisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self);
    if (vqscilexercsharp) {
        vqscilexercsharp->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSharp::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSharp_SuperDisconnectNotify(QsciLexerCSharp* self, const QMetaMethod* signal) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self)) {
        vqscilexercsharp->QsciLexerCSharp::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSharp::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSharp_OnDisconnectNotify(QsciLexerCSharp* self, intptr_t slot) {
    if (auto* vqscilexercsharp = dynamic_cast<VirtualQsciLexerCSharp*>(self))
        vqscilexercsharp->qscilexercsharp_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCSharp::QsciLexerCSharp_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCSharp_TextAsBytes(const QsciLexerCSharp* self, const libqt_string text) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercsharp->VirtualQsciLexerCSharp::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCSharp::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCSharp_BytesAsText(const QsciLexerCSharp* self, const char* bytes, int size) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        auto _ret = vqscilexercsharp->VirtualQsciLexerCSharp::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCSharp::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCSharp_Sender(const QsciLexerCSharp* self) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        return vqscilexercsharp->VirtualQsciLexerCSharp::sender();
    } else
        qFatal("Error: Protected method QsciLexerCSharp::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCSharp_SenderSignalIndex(const QsciLexerCSharp* self) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        return vqscilexercsharp->VirtualQsciLexerCSharp::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCSharp::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCSharp_Receivers(const QsciLexerCSharp* self, const char* signal) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        return vqscilexercsharp->VirtualQsciLexerCSharp::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCSharp::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCSharp_IsSignalConnected(const QsciLexerCSharp* self, const QMetaMethod* signal) {
    if (auto* vqscilexercsharp = const_cast<VirtualQsciLexerCSharp*>(dynamic_cast<const VirtualQsciLexerCSharp*>(self))) {
        return vqscilexercsharp->VirtualQsciLexerCSharp::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCSharp::isSignalConnected called without a directly constructed type");
}

void QsciLexerCSharp_Delete(QsciLexerCSharp* self) {
    delete self;
}
