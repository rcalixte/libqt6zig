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
#include <qscilexerhtml.h>
#include "libqscilexerhtml.h"
#include "libqscilexerhtml.hxx"

QsciLexerHTML* QsciLexerHTML_new() {
    return new VirtualQsciLexerHTML();
}

QsciLexerHTML* QsciLexerHTML_new2(QObject* parent) {
    return new VirtualQsciLexerHTML(parent);
}

QMetaObject* QsciLexerHTML_MetaObject(const QsciLexerHTML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerHTML_Metacast(QsciLexerHTML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerHTML_Metacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerHTML_Tr(const char* s) {
    auto _ret = QsciLexerHTML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerHTML_Language(const QsciLexerHTML* self) {
    return (const char*)self->language();
}

const char* QsciLexerHTML_Lexer(const QsciLexerHTML* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerHTML_AutoCompletionFillups(const QsciLexerHTML* self) {
    return (const char*)self->autoCompletionFillups();
}

const char* QsciLexerHTML_WordCharacters(const QsciLexerHTML* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerHTML_DefaultColor(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerHTML_DefaultEolFill(const QsciLexerHTML* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerHTML_DefaultFont(const QsciLexerHTML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHTML_DefaultPaper(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerHTML_Keywords(const QsciLexerHTML* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerHTML_Description(const QsciLexerHTML* self, int style) {
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

void QsciLexerHTML_RefreshProperties(QsciLexerHTML* self) {
    self->refreshProperties();
}

bool QsciLexerHTML_CaseSensitiveTags(const QsciLexerHTML* self) {
    return self->caseSensitiveTags();
}

void QsciLexerHTML_SetDjangoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setDjangoTemplates(enabled);
}

bool QsciLexerHTML_DjangoTemplates(const QsciLexerHTML* self) {
    return self->djangoTemplates();
}

bool QsciLexerHTML_FoldCompact(const QsciLexerHTML* self) {
    return self->foldCompact();
}

bool QsciLexerHTML_FoldPreprocessor(const QsciLexerHTML* self) {
    return self->foldPreprocessor();
}

void QsciLexerHTML_SetFoldScriptComments(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptComments(fold);
}

bool QsciLexerHTML_FoldScriptComments(const QsciLexerHTML* self) {
    return self->foldScriptComments();
}

void QsciLexerHTML_SetFoldScriptHeredocs(QsciLexerHTML* self, bool fold) {
    self->setFoldScriptHeredocs(fold);
}

bool QsciLexerHTML_FoldScriptHeredocs(const QsciLexerHTML* self) {
    return self->foldScriptHeredocs();
}

void QsciLexerHTML_SetMakoTemplates(QsciLexerHTML* self, bool enabled) {
    self->setMakoTemplates(enabled);
}

bool QsciLexerHTML_MakoTemplates(const QsciLexerHTML* self) {
    return self->makoTemplates();
}

void QsciLexerHTML_SetFoldCompact(QsciLexerHTML* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerHTML_SetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

void QsciLexerHTML_SetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    self->setCaseSensitiveTags(sens);
}

libqt_string QsciLexerHTML_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerHTML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerHTML_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerHTML::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerHTML_SuperMetaObject(const QsciLexerHTML* self) {
    return (QMetaObject*)self->QsciLexerHTML::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnMetaObject(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_metaobject_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerHTML_SuperMetacast(QsciLexerHTML* self, const char* param1) {
    return self->QsciLexerHTML::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnMetacast(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_metacast_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerHTML_SuperMetacall(QsciLexerHTML* self, int param1, int param2, void** param3) {
    return self->QsciLexerHTML::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnMetacall(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_metacall_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerHTML_SuperSetFoldCompact(QsciLexerHTML* self, bool fold) {
    self->QsciLexerHTML::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldCompact(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerHTML_SuperSetFoldPreprocessor(QsciLexerHTML* self, bool fold) {
    self->QsciLexerHTML::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFoldPreprocessor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFoldPreprocessor_Callback>(slot);
}

// Base class handler implementation
void QsciLexerHTML_SuperSetCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
    self->QsciLexerHTML::setCaseSensitiveTags(sens);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetCaseSensitiveTags(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setcasesensitivetags_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetCaseSensitiveTags_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_LexerId(const QsciLexerHTML* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerHTML_SuperLexerId(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnLexerId(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_lexerid_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_LexerId_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerHTML_AutoCompletionWordSeparators(const QsciLexerHTML* self) {
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
libqt_list /* of libqt_string */ QsciLexerHTML_SuperAutoCompletionWordSeparators(const QsciLexerHTML* self) {
    QList<QString> _ret = self->QsciLexerHTML::autoCompletionWordSeparators();
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
void QsciLexerHTML_OnAutoCompletionWordSeparators(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockEnd(const QsciLexerHTML* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHTML_SuperBlockEnd(const QsciLexerHTML* self, int* style) {
    return (const char*)self->QsciLexerHTML::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockEnd(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_blockend_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_BlockLookback(const QsciLexerHTML* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerHTML_SuperBlockLookback(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockLookback(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_blocklookback_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStart(const QsciLexerHTML* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHTML_SuperBlockStart(const QsciLexerHTML* self, int* style) {
    return (const char*)self->QsciLexerHTML::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStart(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_blockstart_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerHTML_BlockStartKeyword(const QsciLexerHTML* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerHTML_SuperBlockStartKeyword(const QsciLexerHTML* self, int* style) {
    return (const char*)self->QsciLexerHTML::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBlockStartKeyword(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_BraceStyle(const QsciLexerHTML* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerHTML_SuperBraceStyle(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnBraceStyle(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_bracestyle_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_CaseSensitive(const QsciLexerHTML* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerHTML_SuperCaseSensitive(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCaseSensitive(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_casesensitive_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHTML_Color(const QsciLexerHTML* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHTML_SuperColor(const QsciLexerHTML* self, int style) {
    return new QColor(self->QsciLexerHTML::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnColor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_color_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_EolFill(const QsciLexerHTML* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerHTML_SuperEolFill(const QsciLexerHTML* self, int style) {
    return self->QsciLexerHTML::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEolFill(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_eolfill_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerHTML_Font(const QsciLexerHTML* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerHTML_SuperFont(const QsciLexerHTML* self, int style) {
    return new QFont(self->QsciLexerHTML::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnFont(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_font_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_IndentationGuideView(const QsciLexerHTML* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerHTML_SuperIndentationGuideView(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnIndentationGuideView(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_DefaultStyle(const QsciLexerHTML* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerHTML_SuperDefaultStyle(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultStyle(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHTML_Paper(const QsciLexerHTML* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHTML_SuperPaper(const QsciLexerHTML* self, int style) {
    return new QColor(self->QsciLexerHTML::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnPaper(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_paper_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultColor2(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHTML_SuperDefaultColor2(const QsciLexerHTML* self, int style) {
    return new QColor(self->QsciLexerHTML::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultColor2(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerHTML_DefaultFont2(const QsciLexerHTML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerHTML_SuperDefaultFont2(const QsciLexerHTML* self, int style) {
    return new QFont(self->QsciLexerHTML::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultFont2(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerHTML_DefaultPaper2(const QsciLexerHTML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerHTML_SuperDefaultPaper2(const QsciLexerHTML* self, int style) {
    return new QColor(self->QsciLexerHTML::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDefaultPaper2(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerHTML_SuperSetEditor(QsciLexerHTML* self, QsciScintilla* editor) {
    self->QsciLexerHTML::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEditor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_seteditor_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerHTML_StyleBitsNeeded(const QsciLexerHTML* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerHTML_SuperStyleBitsNeeded(const QsciLexerHTML* self) {
    return self->QsciLexerHTML::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnStyleBitsNeeded(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerHTML_SuperSetAutoIndentStyle(QsciLexerHTML* self, int autoindentstyle) {
    self->QsciLexerHTML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetAutoIndentStyle(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetColor(QsciLexerHTML* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHTML_SuperSetColor(QsciLexerHTML* self, const QColor* c, int style) {
    self->QsciLexerHTML::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetColor(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setcolor_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHTML_SuperSetEolFill(QsciLexerHTML* self, bool eoffill, int style) {
    self->QsciLexerHTML::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetEolFill(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_seteolfill_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetFont(QsciLexerHTML* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHTML_SuperSetFont(QsciLexerHTML* self, const QFont* f, int style) {
    self->QsciLexerHTML::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetFont(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setfont_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_SetPaper(QsciLexerHTML* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerHTML_SuperSetPaper(QsciLexerHTML* self, const QColor* c, int style) {
    self->QsciLexerHTML::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnSetPaper(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_setpaper_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_ReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        return vqscilexerhtml->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerHTML_SuperReadProperties(QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        return vqscilexerhtml->QsciLexerHTML::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnReadProperties(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_readproperties_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_WriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self));
    if (vqscilexerhtml) {
        return vqscilexerhtml->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerHTML_SuperWriteProperties(const QsciLexerHTML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->QsciLexerHTML::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnWriteProperties(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self)))
        vqscilexerhtml->qscilexerhtml_writeproperties_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_Event(QsciLexerHTML* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerHTML_SuperEvent(QsciLexerHTML* self, QEvent* event) {
    return self->QsciLexerHTML::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_event_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerHTML_EventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerHTML_SuperEventFilter(QsciLexerHTML* self, QObject* watched, QEvent* event) {
    return self->QsciLexerHTML::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnEventFilter(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_eventfilter_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_TimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        vqscilexerhtml->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHTML_SuperTimerEvent(QsciLexerHTML* self, QTimerEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->QsciLexerHTML::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnTimerEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_timerevent_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_ChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        vqscilexerhtml->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHTML_SuperChildEvent(QsciLexerHTML* self, QChildEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->QsciLexerHTML::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnChildEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_childevent_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_CustomEvent(QsciLexerHTML* self, QEvent* event) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        vqscilexerhtml->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHTML_SuperCustomEvent(QsciLexerHTML* self, QEvent* event) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->QsciLexerHTML::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnCustomEvent(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_customevent_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_ConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        vqscilexerhtml->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHTML_SuperConnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->QsciLexerHTML::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnConnectNotify(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_connectnotify_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerHTML_DisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self);
    if (vqscilexerhtml) {
        vqscilexerhtml->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerHTML::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerHTML_SuperDisconnectNotify(QsciLexerHTML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self)) {
        vqscilexerhtml->QsciLexerHTML::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerHTML::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerHTML_OnDisconnectNotify(QsciLexerHTML* self, intptr_t slot) {
    if (auto* vqscilexerhtml = dynamic_cast<VirtualQsciLexerHTML*>(self))
        vqscilexerhtml->qscilexerhtml_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerHTML::QsciLexerHTML_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerHTML_TextAsBytes(const QsciLexerHTML* self, const libqt_string text) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerhtml->VirtualQsciLexerHTML::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerHTML::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerHTML_BytesAsText(const QsciLexerHTML* self, const char* bytes, int size) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        auto _ret = vqscilexerhtml->VirtualQsciLexerHTML::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerHTML::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerHTML_Sender(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->VirtualQsciLexerHTML::sender();
    } else
        qFatal("Error: Protected method QsciLexerHTML::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerHTML_SenderSignalIndex(const QsciLexerHTML* self) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->VirtualQsciLexerHTML::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerHTML::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerHTML_Receivers(const QsciLexerHTML* self, const char* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->VirtualQsciLexerHTML::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerHTML::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerHTML_IsSignalConnected(const QsciLexerHTML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerhtml = const_cast<VirtualQsciLexerHTML*>(dynamic_cast<const VirtualQsciLexerHTML*>(self))) {
        return vqscilexerhtml->VirtualQsciLexerHTML::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerHTML::isSignalConnected called without a directly constructed type");
}

void QsciLexerHTML_Delete(QsciLexerHTML* self) {
    delete self;
}
