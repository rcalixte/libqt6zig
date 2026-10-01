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
#include <qscilexerxml.h>
#include "libqscilexerxml.h"
#include "libqscilexerxml.hxx"

QsciLexerXML* QsciLexerXML_new() {
    return new VirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
    return new VirtualQsciLexerXML(parent);
}

QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerXML_Metacall(QsciLexerXML* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerXML_Tr(const char* s) {
    auto _ret = QsciLexerXML::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerXML_Language(const QsciLexerXML* self) {
    return (const char*)self->language();
}

const char* QsciLexerXML_Lexer(const QsciLexerXML* self) {
    return (const char*)self->lexer();
}

QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

void QsciLexerXML_RefreshProperties(QsciLexerXML* self) {
    self->refreshProperties();
}

void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled) {
    self->setScriptsStyled(styled);
}

bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self) {
    return self->scriptsStyled();
}

libqt_string QsciLexerXML_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerXML::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerXML_SuperMetaObject(const QsciLexerXML* self) {
    return (QMetaObject*)self->QsciLexerXML::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnMetaObject(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_metaobject_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerXML_SuperMetacast(QsciLexerXML* self, const char* param1) {
    return self->QsciLexerXML::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnMetacast(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_metacast_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerXML_SuperMetacall(QsciLexerXML* self, int param1, int param2, void** param3) {
    return self->QsciLexerXML::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnMetacall(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_metacall_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetFoldCompact(QsciLexerXML* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerXML_SuperSetFoldCompact(QsciLexerXML* self, bool fold) {
    self->QsciLexerXML::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFoldCompact(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetFoldPreprocessor(QsciLexerXML* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

// Base class handler implementation
void QsciLexerXML_SuperSetFoldPreprocessor(QsciLexerXML* self, bool fold) {
    self->QsciLexerXML::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFoldPreprocessor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetCaseSensitiveTags(QsciLexerXML* self, bool sens) {
    self->setCaseSensitiveTags(sens);
}

// Base class handler implementation
void QsciLexerXML_SuperSetCaseSensitiveTags(QsciLexerXML* self, bool sens) {
    self->QsciLexerXML::setCaseSensitiveTags(sens);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetCaseSensitiveTags(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setcasesensitivetags_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetCaseSensitiveTags_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_LexerId(const QsciLexerXML* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerXML_SuperLexerId(const QsciLexerXML* self) {
    return self->QsciLexerXML::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnLexerId(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_lexerid_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerXML_AutoCompletionFillups(const QsciLexerXML* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerXML_SuperAutoCompletionFillups(const QsciLexerXML* self) {
    return (const char*)self->QsciLexerXML::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnAutoCompletionFillups(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerXML_AutoCompletionWordSeparators(const QsciLexerXML* self) {
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
libqt_list /* of libqt_string */ QsciLexerXML_SuperAutoCompletionWordSeparators(const QsciLexerXML* self) {
    QList<QString> _ret = self->QsciLexerXML::autoCompletionWordSeparators();
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
void QsciLexerXML_OnAutoCompletionWordSeparators(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerXML_BlockEnd(const QsciLexerXML* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerXML_SuperBlockEnd(const QsciLexerXML* self, int* style) {
    return (const char*)self->QsciLexerXML::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockEnd(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_blockend_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_BlockLookback(const QsciLexerXML* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerXML_SuperBlockLookback(const QsciLexerXML* self) {
    return self->QsciLexerXML::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockLookback(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_blocklookback_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerXML_BlockStart(const QsciLexerXML* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerXML_SuperBlockStart(const QsciLexerXML* self, int* style) {
    return (const char*)self->QsciLexerXML::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockStart(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_blockstart_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerXML_BlockStartKeyword(const QsciLexerXML* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerXML_SuperBlockStartKeyword(const QsciLexerXML* self, int* style) {
    return (const char*)self->QsciLexerXML::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBlockStartKeyword(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_BraceStyle(const QsciLexerXML* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerXML_SuperBraceStyle(const QsciLexerXML* self) {
    return self->QsciLexerXML::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnBraceStyle(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_bracestyle_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_CaseSensitive(const QsciLexerXML* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerXML_SuperCaseSensitive(const QsciLexerXML* self) {
    return self->QsciLexerXML::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnCaseSensitive(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_casesensitive_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerXML_Color(const QsciLexerXML* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerXML_SuperColor(const QsciLexerXML* self, int style) {
    return new QColor(self->QsciLexerXML::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnColor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_color_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_EolFill(const QsciLexerXML* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerXML_SuperEolFill(const QsciLexerXML* self, int style) {
    return self->QsciLexerXML::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEolFill(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_eolfill_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerXML_Font(const QsciLexerXML* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerXML_SuperFont(const QsciLexerXML* self, int style) {
    return new QFont(self->QsciLexerXML::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnFont(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_font_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_IndentationGuideView(const QsciLexerXML* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerXML_SuperIndentationGuideView(const QsciLexerXML* self) {
    return self->QsciLexerXML::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnIndentationGuideView(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_DefaultStyle(const QsciLexerXML* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerXML_SuperDefaultStyle(const QsciLexerXML* self) {
    return self->QsciLexerXML::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultStyle(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerXML_Description(const QsciLexerXML* self, int style) {
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
void QsciLexerXML_OnDescription(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_description_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerXML_Paper(const QsciLexerXML* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerXML_SuperPaper(const QsciLexerXML* self, int style) {
    return new QColor(self->QsciLexerXML::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnPaper(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_paper_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerXML_DefaultColor2(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerXML_SuperDefaultColor2(const QsciLexerXML* self, int style) {
    return new QColor(self->QsciLexerXML::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultColor2(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerXML_DefaultFont2(const QsciLexerXML* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerXML_SuperDefaultFont2(const QsciLexerXML* self, int style) {
    return new QFont(self->QsciLexerXML::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultFont2(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerXML_DefaultPaper2(const QsciLexerXML* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerXML_SuperDefaultPaper2(const QsciLexerXML* self, int style) {
    return new QColor(self->QsciLexerXML::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDefaultPaper2(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetEditor(QsciLexerXML* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerXML_SuperSetEditor(QsciLexerXML* self, QsciScintilla* editor) {
    self->QsciLexerXML::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetEditor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_seteditor_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerXML_StyleBitsNeeded(const QsciLexerXML* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerXML_SuperStyleBitsNeeded(const QsciLexerXML* self) {
    return self->QsciLexerXML::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnStyleBitsNeeded(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerXML_WordCharacters(const QsciLexerXML* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerXML_SuperWordCharacters(const QsciLexerXML* self) {
    return (const char*)self->QsciLexerXML::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnWordCharacters(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerXML_SuperSetAutoIndentStyle(QsciLexerXML* self, int autoindentstyle) {
    self->QsciLexerXML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetAutoIndentStyle(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetColor(QsciLexerXML* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerXML_SuperSetColor(QsciLexerXML* self, const QColor* c, int style) {
    self->QsciLexerXML::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetColor(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setcolor_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetEolFill(QsciLexerXML* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerXML_SuperSetEolFill(QsciLexerXML* self, bool eoffill, int style) {
    self->QsciLexerXML::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetEolFill(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_seteolfill_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetFont(QsciLexerXML* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerXML_SuperSetFont(QsciLexerXML* self, const QFont* f, int style) {
    self->QsciLexerXML::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetFont(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setfont_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_SetPaper(QsciLexerXML* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerXML_SuperSetPaper(QsciLexerXML* self, const QColor* c, int style) {
    self->QsciLexerXML::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnSetPaper(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_setpaper_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_ReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        return vqscilexerxml->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerXML_SuperReadProperties(QsciLexerXML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        return vqscilexerxml->QsciLexerXML::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnReadProperties(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_readproperties_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_WriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self));
    if (vqscilexerxml) {
        return vqscilexerxml->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerXML_SuperWriteProperties(const QsciLexerXML* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->QsciLexerXML::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnWriteProperties(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self)))
        vqscilexerxml->qscilexerxml_writeproperties_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_Event(QsciLexerXML* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerXML_SuperEvent(QsciLexerXML* self, QEvent* event) {
    return self->QsciLexerXML::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_event_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerXML_EventFilter(QsciLexerXML* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerXML_SuperEventFilter(QsciLexerXML* self, QObject* watched, QEvent* event) {
    return self->QsciLexerXML::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnEventFilter(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_eventfilter_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_TimerEvent(QsciLexerXML* self, QTimerEvent* event) {
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        vqscilexerxml->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerXML_SuperTimerEvent(QsciLexerXML* self, QTimerEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->QsciLexerXML::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnTimerEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_timerevent_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_ChildEvent(QsciLexerXML* self, QChildEvent* event) {
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        vqscilexerxml->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerXML_SuperChildEvent(QsciLexerXML* self, QChildEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->QsciLexerXML::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnChildEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_childevent_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_CustomEvent(QsciLexerXML* self, QEvent* event) {
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        vqscilexerxml->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerXML_SuperCustomEvent(QsciLexerXML* self, QEvent* event) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->QsciLexerXML::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnCustomEvent(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_customevent_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_ConnectNotify(QsciLexerXML* self, const QMetaMethod* signal) {
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        vqscilexerxml->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerXML_SuperConnectNotify(QsciLexerXML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->QsciLexerXML::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnConnectNotify(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_connectnotify_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerXML_DisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal) {
    auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self);
    if (vqscilexerxml) {
        vqscilexerxml->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerXML::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerXML_SuperDisconnectNotify(QsciLexerXML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self)) {
        vqscilexerxml->QsciLexerXML::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerXML::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerXML_OnDisconnectNotify(QsciLexerXML* self, intptr_t slot) {
    if (auto* vqscilexerxml = dynamic_cast<VirtualQsciLexerXML*>(self))
        vqscilexerxml->qscilexerxml_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerXML::QsciLexerXML_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerXML_TextAsBytes(const QsciLexerXML* self, const libqt_string text) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerxml->VirtualQsciLexerXML::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerXML::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerXML_BytesAsText(const QsciLexerXML* self, const char* bytes, int size) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        auto _ret = vqscilexerxml->VirtualQsciLexerXML::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerXML::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerXML_Sender(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->VirtualQsciLexerXML::sender();
    } else
        qFatal("Error: Protected method QsciLexerXML::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerXML_SenderSignalIndex(const QsciLexerXML* self) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->VirtualQsciLexerXML::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerXML::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerXML_Receivers(const QsciLexerXML* self, const char* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->VirtualQsciLexerXML::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerXML::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerXML_IsSignalConnected(const QsciLexerXML* self, const QMetaMethod* signal) {
    if (auto* vqscilexerxml = const_cast<VirtualQsciLexerXML*>(dynamic_cast<const VirtualQsciLexerXML*>(self))) {
        return vqscilexerxml->VirtualQsciLexerXML::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerXML::isSignalConnected called without a directly constructed type");
}

void QsciLexerXML_Delete(QsciLexerXML* self) {
    delete self;
}
