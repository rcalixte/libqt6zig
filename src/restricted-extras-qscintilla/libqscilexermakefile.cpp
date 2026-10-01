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
#include <qscilexermakefile.h>
#include "libqscilexermakefile.h"
#include "libqscilexermakefile.hxx"

QsciLexerMakefile* QsciLexerMakefile_new() {
    return new VirtualQsciLexerMakefile();
}

QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent) {
    return new VirtualQsciLexerMakefile(parent);
}

QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMakefile_Metacall(QsciLexerMakefile* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerMakefile_Tr(const char* s) {
    auto _ret = QsciLexerMakefile::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self) {
    return (const char*)self->language();
}

const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style) {
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

libqt_string QsciLexerMakefile_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerMakefile::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerMakefile::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerMakefile_SuperMetaObject(const QsciLexerMakefile* self) {
    return (QMetaObject*)self->QsciLexerMakefile::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnMetaObject(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_metaobject_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerMakefile_SuperMetacast(QsciLexerMakefile* self, const char* param1) {
    return self->QsciLexerMakefile::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnMetacast(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_metacast_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerMakefile_SuperMetacall(QsciLexerMakefile* self, int param1, int param2, void** param3) {
    return self->QsciLexerMakefile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnMetacall(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_metacall_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_LexerId(const QsciLexerMakefile* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerMakefile_SuperLexerId(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnLexerId(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_lexerid_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMakefile_AutoCompletionFillups(const QsciLexerMakefile* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerMakefile_SuperAutoCompletionFillups(const QsciLexerMakefile* self) {
    return (const char*)self->QsciLexerMakefile::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnAutoCompletionFillups(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMakefile_AutoCompletionWordSeparators(const QsciLexerMakefile* self) {
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
libqt_list /* of libqt_string */ QsciLexerMakefile_SuperAutoCompletionWordSeparators(const QsciLexerMakefile* self) {
    QList<QString> _ret = self->QsciLexerMakefile::autoCompletionWordSeparators();
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
void QsciLexerMakefile_OnAutoCompletionWordSeparators(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockEnd(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMakefile_SuperBlockEnd(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->QsciLexerMakefile::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockEnd(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_blockend_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_BlockLookback(const QsciLexerMakefile* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerMakefile_SuperBlockLookback(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockLookback(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_blocklookback_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockStart(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMakefile_SuperBlockStart(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->QsciLexerMakefile::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockStart(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_blockstart_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMakefile_BlockStartKeyword(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMakefile_SuperBlockStartKeyword(const QsciLexerMakefile* self, int* style) {
    return (const char*)self->QsciLexerMakefile::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBlockStartKeyword(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_BraceStyle(const QsciLexerMakefile* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerMakefile_SuperBraceStyle(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnBraceStyle(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_bracestyle_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_CaseSensitive(const QsciLexerMakefile* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerMakefile_SuperCaseSensitive(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnCaseSensitive(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_casesensitive_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMakefile_Color(const QsciLexerMakefile* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMakefile_SuperColor(const QsciLexerMakefile* self, int style) {
    return new QColor(self->QsciLexerMakefile::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnColor(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_color_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_EolFill(const QsciLexerMakefile* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMakefile_SuperEolFill(const QsciLexerMakefile* self, int style) {
    return self->QsciLexerMakefile::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEolFill(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_eolfill_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMakefile_Font(const QsciLexerMakefile* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMakefile_SuperFont(const QsciLexerMakefile* self, int style) {
    return new QFont(self->QsciLexerMakefile::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnFont(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_font_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_IndentationGuideView(const QsciLexerMakefile* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerMakefile_SuperIndentationGuideView(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnIndentationGuideView(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMakefile_Keywords(const QsciLexerMakefile* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerMakefile_SuperKeywords(const QsciLexerMakefile* self, int set) {
    return (const char*)self->QsciLexerMakefile::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnKeywords(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_keywords_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_DefaultStyle(const QsciLexerMakefile* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerMakefile_SuperDefaultStyle(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultStyle(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMakefile_Paper(const QsciLexerMakefile* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMakefile_SuperPaper(const QsciLexerMakefile* self, int style) {
    return new QColor(self->QsciLexerMakefile::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnPaper(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_paper_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMakefile_DefaultColor2(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMakefile_SuperDefaultColor2(const QsciLexerMakefile* self, int style) {
    return new QColor(self->QsciLexerMakefile::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultColor2(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMakefile_DefaultFont2(const QsciLexerMakefile* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMakefile_SuperDefaultFont2(const QsciLexerMakefile* self, int style) {
    return new QFont(self->QsciLexerMakefile::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultFont2(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMakefile_DefaultPaper2(const QsciLexerMakefile* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMakefile_SuperDefaultPaper2(const QsciLexerMakefile* self, int style) {
    return new QColor(self->QsciLexerMakefile::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDefaultPaper2(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetEditor(QsciLexerMakefile* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetEditor(QsciLexerMakefile* self, QsciScintilla* editor) {
    self->QsciLexerMakefile::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetEditor(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_seteditor_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_RefreshProperties(QsciLexerMakefile* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerMakefile_SuperRefreshProperties(QsciLexerMakefile* self) {
    self->QsciLexerMakefile::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnRefreshProperties(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMakefile_StyleBitsNeeded(const QsciLexerMakefile* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerMakefile_SuperStyleBitsNeeded(const QsciLexerMakefile* self) {
    return self->QsciLexerMakefile::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnStyleBitsNeeded(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetAutoIndentStyle(QsciLexerMakefile* self, int autoindentstyle) {
    self->QsciLexerMakefile::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetAutoIndentStyle(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetColor(QsciLexerMakefile* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetColor(QsciLexerMakefile* self, const QColor* c, int style) {
    self->QsciLexerMakefile::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetColor(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_setcolor_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetEolFill(QsciLexerMakefile* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetEolFill(QsciLexerMakefile* self, bool eoffill, int style) {
    self->QsciLexerMakefile::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetEolFill(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_seteolfill_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetFont(QsciLexerMakefile* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetFont(QsciLexerMakefile* self, const QFont* f, int style) {
    self->QsciLexerMakefile::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetFont(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_setfont_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_SetPaper(QsciLexerMakefile* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMakefile_SuperSetPaper(QsciLexerMakefile* self, const QColor* c, int style) {
    self->QsciLexerMakefile::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnSetPaper(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_setpaper_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_ReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        return vqscilexermakefile->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMakefile_SuperReadProperties(QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        return vqscilexermakefile->QsciLexerMakefile::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnReadProperties(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_readproperties_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_WriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self));
    if (vqscilexermakefile) {
        return vqscilexermakefile->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMakefile_SuperWriteProperties(const QsciLexerMakefile* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->QsciLexerMakefile::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnWriteProperties(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self)))
        vqscilexermakefile->qscilexermakefile_writeproperties_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_Event(QsciLexerMakefile* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerMakefile_SuperEvent(QsciLexerMakefile* self, QEvent* event) {
    return self->QsciLexerMakefile::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_event_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMakefile_EventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerMakefile_SuperEventFilter(QsciLexerMakefile* self, QObject* watched, QEvent* event) {
    return self->QsciLexerMakefile::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnEventFilter(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_eventfilter_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_TimerEvent(QsciLexerMakefile* self, QTimerEvent* event) {
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        vqscilexermakefile->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMakefile_SuperTimerEvent(QsciLexerMakefile* self, QTimerEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->QsciLexerMakefile::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnTimerEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_timerevent_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_ChildEvent(QsciLexerMakefile* self, QChildEvent* event) {
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        vqscilexermakefile->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMakefile_SuperChildEvent(QsciLexerMakefile* self, QChildEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->QsciLexerMakefile::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnChildEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_childevent_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_CustomEvent(QsciLexerMakefile* self, QEvent* event) {
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        vqscilexermakefile->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMakefile_SuperCustomEvent(QsciLexerMakefile* self, QEvent* event) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->QsciLexerMakefile::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnCustomEvent(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_customevent_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_ConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal) {
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        vqscilexermakefile->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMakefile_SuperConnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->QsciLexerMakefile::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnConnectNotify(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_connectnotify_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMakefile_DisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal) {
    auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self);
    if (vqscilexermakefile) {
        vqscilexermakefile->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMakefile::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMakefile_SuperDisconnectNotify(QsciLexerMakefile* self, const QMetaMethod* signal) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self)) {
        vqscilexermakefile->QsciLexerMakefile::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMakefile::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMakefile_OnDisconnectNotify(QsciLexerMakefile* self, intptr_t slot) {
    if (auto* vqscilexermakefile = dynamic_cast<VirtualQsciLexerMakefile*>(self))
        vqscilexermakefile->qscilexermakefile_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerMakefile::QsciLexerMakefile_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerMakefile_TextAsBytes(const QsciLexerMakefile* self, const libqt_string text) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexermakefile->VirtualQsciLexerMakefile::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMakefile::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerMakefile_BytesAsText(const QsciLexerMakefile* self, const char* bytes, int size) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        auto _ret = vqscilexermakefile->VirtualQsciLexerMakefile::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMakefile::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerMakefile_Sender(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->VirtualQsciLexerMakefile::sender();
    } else
        qFatal("Error: Protected method QsciLexerMakefile::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMakefile_SenderSignalIndex(const QsciLexerMakefile* self) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->VirtualQsciLexerMakefile::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerMakefile::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMakefile_Receivers(const QsciLexerMakefile* self, const char* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->VirtualQsciLexerMakefile::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerMakefile::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerMakefile_IsSignalConnected(const QsciLexerMakefile* self, const QMetaMethod* signal) {
    if (auto* vqscilexermakefile = const_cast<VirtualQsciLexerMakefile*>(dynamic_cast<const VirtualQsciLexerMakefile*>(self))) {
        return vqscilexermakefile->VirtualQsciLexerMakefile::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerMakefile::isSignalConnected called without a directly constructed type");
}

void QsciLexerMakefile_Delete(QsciLexerMakefile* self) {
    delete self;
}
