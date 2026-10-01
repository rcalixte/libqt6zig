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
#include <qscilexermatlab.h>
#include "libqscilexermatlab.h"
#include "libqscilexermatlab.hxx"

QsciLexerMatlab* QsciLexerMatlab_new() {
    return new VirtualQsciLexerMatlab();
}

QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent) {
    return new VirtualQsciLexerMatlab(parent);
}

QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMatlab_Metacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerMatlab_Tr(const char* s) {
    auto _ret = QsciLexerMatlab::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self) {
    return (const char*)self->language();
}

const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style) {
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

libqt_string QsciLexerMatlab_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerMatlab::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerMatlab::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerMatlab_SuperMetaObject(const QsciLexerMatlab* self) {
    return (QMetaObject*)self->QsciLexerMatlab::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnMetaObject(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_metaobject_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerMatlab_SuperMetacast(QsciLexerMatlab* self, const char* param1) {
    return self->QsciLexerMatlab::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnMetacast(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_metacast_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerMatlab_SuperMetacall(QsciLexerMatlab* self, int param1, int param2, void** param3) {
    return self->QsciLexerMatlab::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnMetacall(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_metacall_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_LexerId(const QsciLexerMatlab* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerMatlab_SuperLexerId(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnLexerId(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_lexerid_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMatlab_AutoCompletionFillups(const QsciLexerMatlab* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerMatlab_SuperAutoCompletionFillups(const QsciLexerMatlab* self) {
    return (const char*)self->QsciLexerMatlab::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnAutoCompletionFillups(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMatlab_AutoCompletionWordSeparators(const QsciLexerMatlab* self) {
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
libqt_list /* of libqt_string */ QsciLexerMatlab_SuperAutoCompletionWordSeparators(const QsciLexerMatlab* self) {
    QList<QString> _ret = self->QsciLexerMatlab::autoCompletionWordSeparators();
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
void QsciLexerMatlab_OnAutoCompletionWordSeparators(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockEnd(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMatlab_SuperBlockEnd(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->QsciLexerMatlab::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockEnd(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_blockend_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_BlockLookback(const QsciLexerMatlab* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerMatlab_SuperBlockLookback(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockLookback(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_blocklookback_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStart(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMatlab_SuperBlockStart(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->QsciLexerMatlab::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStart(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_blockstart_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMatlab_BlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMatlab_SuperBlockStartKeyword(const QsciLexerMatlab* self, int* style) {
    return (const char*)self->QsciLexerMatlab::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBlockStartKeyword(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_BraceStyle(const QsciLexerMatlab* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerMatlab_SuperBraceStyle(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnBraceStyle(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_bracestyle_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_CaseSensitive(const QsciLexerMatlab* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerMatlab_SuperCaseSensitive(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCaseSensitive(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_casesensitive_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Color(const QsciLexerMatlab* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMatlab_SuperColor(const QsciLexerMatlab* self, int style) {
    return new QColor(self->QsciLexerMatlab::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnColor(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_color_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_EolFill(const QsciLexerMatlab* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMatlab_SuperEolFill(const QsciLexerMatlab* self, int style) {
    return self->QsciLexerMatlab::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEolFill(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_eolfill_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMatlab_Font(const QsciLexerMatlab* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMatlab_SuperFont(const QsciLexerMatlab* self, int style) {
    return new QFont(self->QsciLexerMatlab::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnFont(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_font_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_IndentationGuideView(const QsciLexerMatlab* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerMatlab_SuperIndentationGuideView(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnIndentationGuideView(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_DefaultStyle(const QsciLexerMatlab* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerMatlab_SuperDefaultStyle(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultStyle(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMatlab_Paper(const QsciLexerMatlab* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMatlab_SuperPaper(const QsciLexerMatlab* self, int style) {
    return new QColor(self->QsciLexerMatlab::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnPaper(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_paper_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultColor2(const QsciLexerMatlab* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMatlab_SuperDefaultColor2(const QsciLexerMatlab* self, int style) {
    return new QColor(self->QsciLexerMatlab::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultColor2(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_DefaultEolFill(const QsciLexerMatlab* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMatlab_SuperDefaultEolFill(const QsciLexerMatlab* self, int style) {
    return self->QsciLexerMatlab::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultEolFill(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMatlab_DefaultFont2(const QsciLexerMatlab* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMatlab_SuperDefaultFont2(const QsciLexerMatlab* self, int style) {
    return new QFont(self->QsciLexerMatlab::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultFont2(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMatlab_DefaultPaper2(const QsciLexerMatlab* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMatlab_SuperDefaultPaper2(const QsciLexerMatlab* self, int style) {
    return new QColor(self->QsciLexerMatlab::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDefaultPaper2(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetEditor(QsciLexerMatlab* self, QsciScintilla* editor) {
    self->QsciLexerMatlab::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEditor(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_seteditor_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_RefreshProperties(QsciLexerMatlab* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerMatlab_SuperRefreshProperties(QsciLexerMatlab* self) {
    self->QsciLexerMatlab::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnRefreshProperties(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMatlab_StyleBitsNeeded(const QsciLexerMatlab* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerMatlab_SuperStyleBitsNeeded(const QsciLexerMatlab* self) {
    return self->QsciLexerMatlab::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnStyleBitsNeeded(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMatlab_WordCharacters(const QsciLexerMatlab* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerMatlab_SuperWordCharacters(const QsciLexerMatlab* self) {
    return (const char*)self->QsciLexerMatlab::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWordCharacters(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetAutoIndentStyle(QsciLexerMatlab* self, int autoindentstyle) {
    self->QsciLexerMatlab::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetAutoIndentStyle(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetColor(QsciLexerMatlab* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetColor(QsciLexerMatlab* self, const QColor* c, int style) {
    self->QsciLexerMatlab::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetColor(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_setcolor_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetEolFill(QsciLexerMatlab* self, bool eoffill, int style) {
    self->QsciLexerMatlab::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetEolFill(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_seteolfill_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetFont(QsciLexerMatlab* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetFont(QsciLexerMatlab* self, const QFont* f, int style) {
    self->QsciLexerMatlab::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetFont(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_setfont_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_SetPaper(QsciLexerMatlab* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMatlab_SuperSetPaper(QsciLexerMatlab* self, const QColor* c, int style) {
    self->QsciLexerMatlab::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnSetPaper(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_setpaper_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_ReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        return vqscilexermatlab->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMatlab_SuperReadProperties(QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        return vqscilexermatlab->QsciLexerMatlab::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnReadProperties(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_readproperties_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_WriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self));
    if (vqscilexermatlab) {
        return vqscilexermatlab->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMatlab_SuperWriteProperties(const QsciLexerMatlab* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->QsciLexerMatlab::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnWriteProperties(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self)))
        vqscilexermatlab->qscilexermatlab_writeproperties_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_Event(QsciLexerMatlab* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerMatlab_SuperEvent(QsciLexerMatlab* self, QEvent* event) {
    return self->QsciLexerMatlab::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_event_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMatlab_EventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerMatlab_SuperEventFilter(QsciLexerMatlab* self, QObject* watched, QEvent* event) {
    return self->QsciLexerMatlab::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnEventFilter(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_eventfilter_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_TimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        vqscilexermatlab->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMatlab_SuperTimerEvent(QsciLexerMatlab* self, QTimerEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->QsciLexerMatlab::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnTimerEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_timerevent_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_ChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        vqscilexermatlab->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMatlab_SuperChildEvent(QsciLexerMatlab* self, QChildEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->QsciLexerMatlab::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnChildEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_childevent_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_CustomEvent(QsciLexerMatlab* self, QEvent* event) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        vqscilexermatlab->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMatlab_SuperCustomEvent(QsciLexerMatlab* self, QEvent* event) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->QsciLexerMatlab::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnCustomEvent(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_customevent_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_ConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        vqscilexermatlab->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMatlab_SuperConnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->QsciLexerMatlab::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnConnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_connectnotify_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMatlab_DisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self);
    if (vqscilexermatlab) {
        vqscilexermatlab->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMatlab::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMatlab_SuperDisconnectNotify(QsciLexerMatlab* self, const QMetaMethod* signal) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self)) {
        vqscilexermatlab->QsciLexerMatlab::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMatlab::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMatlab_OnDisconnectNotify(QsciLexerMatlab* self, intptr_t slot) {
    if (auto* vqscilexermatlab = dynamic_cast<VirtualQsciLexerMatlab*>(self))
        vqscilexermatlab->qscilexermatlab_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerMatlab::QsciLexerMatlab_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerMatlab_TextAsBytes(const QsciLexerMatlab* self, const libqt_string text) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexermatlab->VirtualQsciLexerMatlab::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMatlab::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerMatlab_BytesAsText(const QsciLexerMatlab* self, const char* bytes, int size) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        auto _ret = vqscilexermatlab->VirtualQsciLexerMatlab::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMatlab::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerMatlab_Sender(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->VirtualQsciLexerMatlab::sender();
    } else
        qFatal("Error: Protected method QsciLexerMatlab::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMatlab_SenderSignalIndex(const QsciLexerMatlab* self) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->VirtualQsciLexerMatlab::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerMatlab::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMatlab_Receivers(const QsciLexerMatlab* self, const char* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->VirtualQsciLexerMatlab::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerMatlab::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerMatlab_IsSignalConnected(const QsciLexerMatlab* self, const QMetaMethod* signal) {
    if (auto* vqscilexermatlab = const_cast<VirtualQsciLexerMatlab*>(dynamic_cast<const VirtualQsciLexerMatlab*>(self))) {
        return vqscilexermatlab->VirtualQsciLexerMatlab::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerMatlab::isSignalConnected called without a directly constructed type");
}

void QsciLexerMatlab_Delete(QsciLexerMatlab* self) {
    delete self;
}
