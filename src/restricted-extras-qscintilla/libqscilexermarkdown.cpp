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
#include <qscilexermarkdown.h>
#include "libqscilexermarkdown.h"
#include "libqscilexermarkdown.hxx"

QsciLexerMarkdown* QsciLexerMarkdown_new() {
    return new VirtualQsciLexerMarkdown();
}

QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent) {
    return new VirtualQsciLexerMarkdown(parent);
}

QMetaObject* QsciLexerMarkdown_MetaObject(const QsciLexerMarkdown* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerMarkdown_Metacast(QsciLexerMarkdown* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerMarkdown_Metacall(QsciLexerMarkdown* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerMarkdown_Tr(const char* s) {
    auto _ret = QsciLexerMarkdown::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerMarkdown_Language(const QsciLexerMarkdown* self) {
    return (const char*)self->language();
}

const char* QsciLexerMarkdown_Lexer(const QsciLexerMarkdown* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerMarkdown_DefaultColor(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMarkdown_DefaultFont(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMarkdown_DefaultPaper(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerMarkdown_Description(const QsciLexerMarkdown* self, int style) {
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

libqt_string QsciLexerMarkdown_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerMarkdown::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerMarkdown_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerMarkdown::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerMarkdown_SuperMetaObject(const QsciLexerMarkdown* self) {
    return (QMetaObject*)self->QsciLexerMarkdown::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnMetaObject(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_metaobject_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerMarkdown_SuperMetacast(QsciLexerMarkdown* self, const char* param1) {
    return self->QsciLexerMarkdown::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnMetacast(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_metacast_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerMarkdown_SuperMetacall(QsciLexerMarkdown* self, int param1, int param2, void** param3) {
    return self->QsciLexerMarkdown::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnMetacall(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_metacall_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_LexerId(const QsciLexerMarkdown* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperLexerId(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnLexerId(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_lexerid_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_AutoCompletionFillups(const QsciLexerMarkdown* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperAutoCompletionFillups(const QsciLexerMarkdown* self) {
    return (const char*)self->QsciLexerMarkdown::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnAutoCompletionFillups(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerMarkdown_AutoCompletionWordSeparators(const QsciLexerMarkdown* self) {
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
libqt_list /* of libqt_string */ QsciLexerMarkdown_SuperAutoCompletionWordSeparators(const QsciLexerMarkdown* self) {
    QList<QString> _ret = self->QsciLexerMarkdown::autoCompletionWordSeparators();
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
void QsciLexerMarkdown_OnAutoCompletionWordSeparators(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockEnd(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperBlockEnd(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->QsciLexerMarkdown::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockEnd(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_blockend_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_BlockLookback(const QsciLexerMarkdown* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperBlockLookback(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockLookback(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_blocklookback_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockStart(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperBlockStart(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->QsciLexerMarkdown::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockStart(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_blockstart_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_BlockStartKeyword(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperBlockStartKeyword(const QsciLexerMarkdown* self, int* style) {
    return (const char*)self->QsciLexerMarkdown::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBlockStartKeyword(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_BraceStyle(const QsciLexerMarkdown* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperBraceStyle(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnBraceStyle(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_bracestyle_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_CaseSensitive(const QsciLexerMarkdown* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperCaseSensitive(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnCaseSensitive(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_casesensitive_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_Color(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMarkdown_SuperColor(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->QsciLexerMarkdown::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnColor(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_color_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_EolFill(const QsciLexerMarkdown* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperEolFill(const QsciLexerMarkdown* self, int style) {
    return self->QsciLexerMarkdown::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEolFill(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_eolfill_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMarkdown_Font(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMarkdown_SuperFont(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->QsciLexerMarkdown::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnFont(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_font_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_IndentationGuideView(const QsciLexerMarkdown* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperIndentationGuideView(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnIndentationGuideView(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_Keywords(const QsciLexerMarkdown* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperKeywords(const QsciLexerMarkdown* self, int set) {
    return (const char*)self->QsciLexerMarkdown::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnKeywords(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_keywords_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_DefaultStyle(const QsciLexerMarkdown* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperDefaultStyle(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultStyle(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_Paper(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMarkdown_SuperPaper(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->QsciLexerMarkdown::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnPaper(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_paper_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_DefaultColor2(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMarkdown_SuperDefaultColor2(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->QsciLexerMarkdown::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultColor2(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_DefaultEolFill(const QsciLexerMarkdown* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperDefaultEolFill(const QsciLexerMarkdown* self, int style) {
    return self->QsciLexerMarkdown::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultEolFill(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerMarkdown_DefaultFont2(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerMarkdown_SuperDefaultFont2(const QsciLexerMarkdown* self, int style) {
    return new QFont(self->QsciLexerMarkdown::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultFont2(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerMarkdown_DefaultPaper2(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerMarkdown_SuperDefaultPaper2(const QsciLexerMarkdown* self, int style) {
    return new QColor(self->QsciLexerMarkdown::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDefaultPaper2(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetEditor(QsciLexerMarkdown* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetEditor(QsciLexerMarkdown* self, QsciScintilla* editor) {
    self->QsciLexerMarkdown::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetEditor(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_seteditor_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_RefreshProperties(QsciLexerMarkdown* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerMarkdown_SuperRefreshProperties(QsciLexerMarkdown* self) {
    self->QsciLexerMarkdown::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnRefreshProperties(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerMarkdown_StyleBitsNeeded(const QsciLexerMarkdown* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerMarkdown_SuperStyleBitsNeeded(const QsciLexerMarkdown* self) {
    return self->QsciLexerMarkdown::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnStyleBitsNeeded(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerMarkdown_WordCharacters(const QsciLexerMarkdown* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerMarkdown_SuperWordCharacters(const QsciLexerMarkdown* self) {
    return (const char*)self->QsciLexerMarkdown::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnWordCharacters(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetAutoIndentStyle(QsciLexerMarkdown* self, int autoindentstyle) {
    self->QsciLexerMarkdown::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetAutoIndentStyle(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetColor(QsciLexerMarkdown* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetColor(QsciLexerMarkdown* self, const QColor* c, int style) {
    self->QsciLexerMarkdown::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetColor(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_setcolor_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetEolFill(QsciLexerMarkdown* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetEolFill(QsciLexerMarkdown* self, bool eoffill, int style) {
    self->QsciLexerMarkdown::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetEolFill(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_seteolfill_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetFont(QsciLexerMarkdown* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetFont(QsciLexerMarkdown* self, const QFont* f, int style) {
    self->QsciLexerMarkdown::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetFont(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_setfont_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_SetPaper(QsciLexerMarkdown* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerMarkdown_SuperSetPaper(QsciLexerMarkdown* self, const QColor* c, int style) {
    self->QsciLexerMarkdown::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnSetPaper(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_setpaper_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_ReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        return vqscilexermarkdown->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperReadProperties(QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        return vqscilexermarkdown->QsciLexerMarkdown::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnReadProperties(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_readproperties_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_WriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self));
    if (vqscilexermarkdown) {
        return vqscilexermarkdown->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperWriteProperties(const QsciLexerMarkdown* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        return vqscilexermarkdown->QsciLexerMarkdown::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnWriteProperties(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self)))
        vqscilexermarkdown->qscilexermarkdown_writeproperties_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_Event(QsciLexerMarkdown* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperEvent(QsciLexerMarkdown* self, QEvent* event) {
    return self->QsciLexerMarkdown::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEvent(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_event_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerMarkdown_EventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerMarkdown_SuperEventFilter(QsciLexerMarkdown* self, QObject* watched, QEvent* event) {
    return self->QsciLexerMarkdown::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnEventFilter(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_eventfilter_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_TimerEvent(QsciLexerMarkdown* self, QTimerEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        vqscilexermarkdown->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMarkdown_SuperTimerEvent(QsciLexerMarkdown* self, QTimerEvent* event) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        vqscilexermarkdown->QsciLexerMarkdown::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnTimerEvent(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_timerevent_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_ChildEvent(QsciLexerMarkdown* self, QChildEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        vqscilexermarkdown->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMarkdown_SuperChildEvent(QsciLexerMarkdown* self, QChildEvent* event) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        vqscilexermarkdown->QsciLexerMarkdown::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnChildEvent(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_childevent_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_CustomEvent(QsciLexerMarkdown* self, QEvent* event) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        vqscilexermarkdown->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMarkdown_SuperCustomEvent(QsciLexerMarkdown* self, QEvent* event) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        vqscilexermarkdown->QsciLexerMarkdown::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnCustomEvent(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_customevent_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_ConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        vqscilexermarkdown->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMarkdown_SuperConnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        vqscilexermarkdown->QsciLexerMarkdown::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnConnectNotify(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_connectnotify_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerMarkdown_DisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self);
    if (vqscilexermarkdown) {
        vqscilexermarkdown->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerMarkdown::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerMarkdown_SuperDisconnectNotify(QsciLexerMarkdown* self, const QMetaMethod* signal) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self)) {
        vqscilexermarkdown->QsciLexerMarkdown::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerMarkdown::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerMarkdown_OnDisconnectNotify(QsciLexerMarkdown* self, intptr_t slot) {
    if (auto* vqscilexermarkdown = dynamic_cast<VirtualQsciLexerMarkdown*>(self))
        vqscilexermarkdown->qscilexermarkdown_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerMarkdown::QsciLexerMarkdown_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerMarkdown_TextAsBytes(const QsciLexerMarkdown* self, const libqt_string text) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexermarkdown->VirtualQsciLexerMarkdown::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerMarkdown_BytesAsText(const QsciLexerMarkdown* self, const char* bytes, int size) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        auto _ret = vqscilexermarkdown->VirtualQsciLexerMarkdown::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerMarkdown_Sender(const QsciLexerMarkdown* self) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        return vqscilexermarkdown->VirtualQsciLexerMarkdown::sender();
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMarkdown_SenderSignalIndex(const QsciLexerMarkdown* self) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        return vqscilexermarkdown->VirtualQsciLexerMarkdown::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerMarkdown_Receivers(const QsciLexerMarkdown* self, const char* signal) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        return vqscilexermarkdown->VirtualQsciLexerMarkdown::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerMarkdown_IsSignalConnected(const QsciLexerMarkdown* self, const QMetaMethod* signal) {
    if (auto* vqscilexermarkdown = const_cast<VirtualQsciLexerMarkdown*>(dynamic_cast<const VirtualQsciLexerMarkdown*>(self))) {
        return vqscilexermarkdown->VirtualQsciLexerMarkdown::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerMarkdown::isSignalConnected called without a directly constructed type");
}

void QsciLexerMarkdown_Delete(QsciLexerMarkdown* self) {
    delete self;
}
