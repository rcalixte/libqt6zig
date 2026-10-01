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
#include <qscilexercss.h>
#include "libqscilexercss.h"
#include "libqscilexercss.hxx"

QsciLexerCSS* QsciLexerCSS_new() {
    return new VirtualQsciLexerCSS();
}

QsciLexerCSS* QsciLexerCSS_new2(QObject* parent) {
    return new VirtualQsciLexerCSS(parent);
}

QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCSS_Metacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCSS_Tr(const char* s) {
    auto _ret = QsciLexerCSS::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSS_Language(const QsciLexerCSS* self) {
    return (const char*)self->language();
}

const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style) {
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

void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self) {
    self->refreshProperties();
}

bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self) {
    return self->foldComments();
}

bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self) {
    return self->foldCompact();
}

void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setHSSLanguage(enabled);
}

bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self) {
    return self->HSSLanguage();
}

void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled) {
    self->setLessLanguage(enabled);
}

bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self) {
    return self->LessLanguage();
}

void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled) {
    self->setSCSSLanguage(enabled);
}

bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self) {
    return self->SCSSLanguage();
}

void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerCSS_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCSS::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCSS::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerCSS_SuperMetaObject(const QsciLexerCSS* self) {
    return (QMetaObject*)self->QsciLexerCSS::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnMetaObject(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_metaobject_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCSS_SuperMetacast(QsciLexerCSS* self, const char* param1) {
    return self->QsciLexerCSS::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnMetacast(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_metacast_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCSS_SuperMetacall(QsciLexerCSS* self, int param1, int param2, void** param3) {
    return self->QsciLexerCSS::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnMetacall(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_metacall_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCSS_SuperSetFoldComments(QsciLexerCSS* self, bool fold) {
    self->QsciLexerCSS::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldComments(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCSS_SuperSetFoldCompact(QsciLexerCSS* self, bool fold) {
    self->QsciLexerCSS::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFoldCompact(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_LexerId(const QsciLexerCSS* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCSS_SuperLexerId(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnLexerId(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_lexerid_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSS_AutoCompletionFillups(const QsciLexerCSS* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCSS_SuperAutoCompletionFillups(const QsciLexerCSS* self) {
    return (const char*)self->QsciLexerCSS::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnAutoCompletionFillups(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCSS_AutoCompletionWordSeparators(const QsciLexerCSS* self) {
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
libqt_list /* of libqt_string */ QsciLexerCSS_SuperAutoCompletionWordSeparators(const QsciLexerCSS* self) {
    QList<QString> _ret = self->QsciLexerCSS::autoCompletionWordSeparators();
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
void QsciLexerCSS_OnAutoCompletionWordSeparators(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_BlockLookback(const QsciLexerCSS* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCSS_SuperBlockLookback(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockLookback(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCSS_BlockStartKeyword(const QsciLexerCSS* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCSS_SuperBlockStartKeyword(const QsciLexerCSS* self, int* style) {
    return (const char*)self->QsciLexerCSS::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBlockStartKeyword(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_BraceStyle(const QsciLexerCSS* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerCSS_SuperBraceStyle(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnBraceStyle(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_bracestyle_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_CaseSensitive(const QsciLexerCSS* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCSS_SuperCaseSensitive(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCaseSensitive(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSS_Color(const QsciLexerCSS* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSS_SuperColor(const QsciLexerCSS* self, int style) {
    return new QColor(self->QsciLexerCSS::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnColor(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_color_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_EolFill(const QsciLexerCSS* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCSS_SuperEolFill(const QsciLexerCSS* self, int style) {
    return self->QsciLexerCSS::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEolFill(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_eolfill_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCSS_Font(const QsciLexerCSS* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCSS_SuperFont(const QsciLexerCSS* self, int style) {
    return new QFont(self->QsciLexerCSS::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnFont(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_font_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_IndentationGuideView(const QsciLexerCSS* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCSS_SuperIndentationGuideView(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnIndentationGuideView(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_DefaultStyle(const QsciLexerCSS* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCSS_SuperDefaultStyle(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultStyle(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSS_Paper(const QsciLexerCSS* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSS_SuperPaper(const QsciLexerCSS* self, int style) {
    return new QColor(self->QsciLexerCSS::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnPaper(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_paper_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultColor2(const QsciLexerCSS* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSS_SuperDefaultColor2(const QsciLexerCSS* self, int style) {
    return new QColor(self->QsciLexerCSS::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultColor2(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_DefaultEolFill(const QsciLexerCSS* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCSS_SuperDefaultEolFill(const QsciLexerCSS* self, int style) {
    return self->QsciLexerCSS::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultEolFill(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCSS_DefaultFont2(const QsciLexerCSS* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCSS_SuperDefaultFont2(const QsciLexerCSS* self, int style) {
    return new QFont(self->QsciLexerCSS::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultFont2(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCSS_DefaultPaper2(const QsciLexerCSS* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCSS_SuperDefaultPaper2(const QsciLexerCSS* self, int style) {
    return new QColor(self->QsciLexerCSS::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDefaultPaper2(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerCSS_SuperSetEditor(QsciLexerCSS* self, QsciScintilla* editor) {
    self->QsciLexerCSS::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEditor(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_seteditor_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCSS_StyleBitsNeeded(const QsciLexerCSS* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerCSS_SuperStyleBitsNeeded(const QsciLexerCSS* self) {
    return self->QsciLexerCSS::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnStyleBitsNeeded(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCSS_SuperSetAutoIndentStyle(QsciLexerCSS* self, int autoindentstyle) {
    self->QsciLexerCSS::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetAutoIndentStyle(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetColor(QsciLexerCSS* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSS_SuperSetColor(QsciLexerCSS* self, const QColor* c, int style) {
    self->QsciLexerCSS::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetColor(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setcolor_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSS_SuperSetEolFill(QsciLexerCSS* self, bool eoffill, int style) {
    self->QsciLexerCSS::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetEolFill(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetFont(QsciLexerCSS* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSS_SuperSetFont(QsciLexerCSS* self, const QFont* f, int style) {
    self->QsciLexerCSS::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetFont(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setfont_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_SetPaper(QsciLexerCSS* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCSS_SuperSetPaper(QsciLexerCSS* self, const QColor* c, int style) {
    self->QsciLexerCSS::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnSetPaper(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_setpaper_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_ReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        return vqscilexercss->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCSS_SuperReadProperties(QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        return vqscilexercss->QsciLexerCSS::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnReadProperties(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_readproperties_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_WriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self));
    if (vqscilexercss) {
        return vqscilexercss->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCSS_SuperWriteProperties(const QsciLexerCSS* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->QsciLexerCSS::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnWriteProperties(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self)))
        vqscilexercss->qscilexercss_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_Event(QsciLexerCSS* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCSS_SuperEvent(QsciLexerCSS* self, QEvent* event) {
    return self->QsciLexerCSS::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_event_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCSS_EventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCSS_SuperEventFilter(QsciLexerCSS* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCSS::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnEventFilter(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_TimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        vqscilexercss->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSS_SuperTimerEvent(QsciLexerCSS* self, QTimerEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->QsciLexerCSS::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnTimerEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_timerevent_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_ChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        vqscilexercss->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSS_SuperChildEvent(QsciLexerCSS* self, QChildEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->QsciLexerCSS::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnChildEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_childevent_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_CustomEvent(QsciLexerCSS* self, QEvent* event) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        vqscilexercss->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSS_SuperCustomEvent(QsciLexerCSS* self, QEvent* event) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->QsciLexerCSS::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnCustomEvent(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_customevent_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_ConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        vqscilexercss->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSS_SuperConnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->QsciLexerCSS::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnConnectNotify(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCSS_DisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self);
    if (vqscilexercss) {
        vqscilexercss->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCSS::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCSS_SuperDisconnectNotify(QsciLexerCSS* self, const QMetaMethod* signal) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self)) {
        vqscilexercss->QsciLexerCSS::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCSS::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCSS_OnDisconnectNotify(QsciLexerCSS* self, intptr_t slot) {
    if (auto* vqscilexercss = dynamic_cast<VirtualQsciLexerCSS*>(self))
        vqscilexercss->qscilexercss_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCSS::QsciLexerCSS_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCSS_TextAsBytes(const QsciLexerCSS* self, const libqt_string text) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercss->VirtualQsciLexerCSS::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCSS::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCSS_BytesAsText(const QsciLexerCSS* self, const char* bytes, int size) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        auto _ret = vqscilexercss->VirtualQsciLexerCSS::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCSS::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCSS_Sender(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->VirtualQsciLexerCSS::sender();
    } else
        qFatal("Error: Protected method QsciLexerCSS::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCSS_SenderSignalIndex(const QsciLexerCSS* self) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->VirtualQsciLexerCSS::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCSS::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCSS_Receivers(const QsciLexerCSS* self, const char* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->VirtualQsciLexerCSS::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCSS::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCSS_IsSignalConnected(const QsciLexerCSS* self, const QMetaMethod* signal) {
    if (auto* vqscilexercss = const_cast<VirtualQsciLexerCSS*>(dynamic_cast<const VirtualQsciLexerCSS*>(self))) {
        return vqscilexercss->VirtualQsciLexerCSS::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCSS::isSignalConnected called without a directly constructed type");
}

void QsciLexerCSS_Delete(QsciLexerCSS* self) {
    delete self;
}
