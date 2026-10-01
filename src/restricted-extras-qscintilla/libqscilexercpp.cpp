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
#include <qscilexercpp.h>
#include "libqscilexercpp.h"
#include "libqscilexercpp.hxx"

QsciLexerCPP* QsciLexerCPP_new() {
    return new VirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
    return new VirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
    return new VirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCPP_Metacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCPP_Tr(const char* s) {
    auto _ret = QsciLexerCPP::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCPP_Language(const QsciLexerCPP* self) {
    return (const char*)self->language();
}

const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self) {
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

const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self) {
    return (const char*)self->blockStartKeyword();
}

int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self) {
    return self->braceStyle();
}

const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style) {
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

void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self) {
    self->refreshProperties();
}

bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self) {
    return self->foldAtElse();
}

bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self) {
    return self->foldComments();
}

bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self) {
    return self->foldCompact();
}

bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self) {
    return self->foldPreprocessor();
}

bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self) {
    return self->stylePreprocessor();
}

void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed) {
    self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self) {
    return self->dollarsAllowed();
}

void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
    self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self) {
    return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
    self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self) {
    return self->highlightEscapeSequences();
}

void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
    self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
    return self->verbatimStringEscapeSequencesAllowed();
}

void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold) {
    self->setFoldAtElse(fold);
}

void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style) {
    self->setStylePreprocessor(style);
}

libqt_string QsciLexerCPP_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCPP::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerCPP_SuperMetaObject(const QsciLexerCPP* self) {
    return (QMetaObject*)self->QsciLexerCPP::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnMetaObject(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_metaobject_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCPP_SuperMetacast(QsciLexerCPP* self, const char* param1) {
    return self->QsciLexerCPP::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnMetacast(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_metacast_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCPP_SuperMetacall(QsciLexerCPP* self, int param1, int param2, void** param3) {
    return self->QsciLexerCPP::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnMetacall(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_metacall_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetFoldAtElse(QsciLexerCPP* self, bool fold) {
    self->QsciLexerCPP::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldAtElse(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldAtElse_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetFoldComments(QsciLexerCPP* self, bool fold) {
    self->QsciLexerCPP::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldComments(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetFoldCompact(QsciLexerCPP* self, bool fold) {
    self->QsciLexerCPP::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldCompact(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
    self->QsciLexerCPP::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFoldPreprocessor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFoldPreprocessor_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetStylePreprocessor(QsciLexerCPP* self, bool style) {
    self->QsciLexerCPP::setStylePreprocessor(style);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetStylePreprocessor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setstylepreprocessor_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetStylePreprocessor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCPP_LexerId(const QsciLexerCPP* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCPP_SuperLexerId(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnLexerId(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_lexerid_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCPP_AutoCompletionFillups(const QsciLexerCPP* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCPP_SuperAutoCompletionFillups(const QsciLexerCPP* self) {
    return (const char*)self->QsciLexerCPP::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnAutoCompletionFillups(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCPP_BlockLookback(const QsciLexerCPP* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCPP_SuperBlockLookback(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnBlockLookback(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_CaseSensitive(const QsciLexerCPP* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCPP_SuperCaseSensitive(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCaseSensitive(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCPP_Color(const QsciLexerCPP* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCPP_SuperColor(const QsciLexerCPP* self, int style) {
    return new QColor(self->QsciLexerCPP::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnColor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_color_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_EolFill(const QsciLexerCPP* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCPP_SuperEolFill(const QsciLexerCPP* self, int style) {
    return self->QsciLexerCPP::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEolFill(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_eolfill_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCPP_Font(const QsciLexerCPP* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCPP_SuperFont(const QsciLexerCPP* self, int style) {
    return new QFont(self->QsciLexerCPP::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnFont(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_font_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCPP_IndentationGuideView(const QsciLexerCPP* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCPP_SuperIndentationGuideView(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnIndentationGuideView(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCPP_DefaultStyle(const QsciLexerCPP* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCPP_SuperDefaultStyle(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultStyle(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCPP_Paper(const QsciLexerCPP* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCPP_SuperPaper(const QsciLexerCPP* self, int style) {
    return new QColor(self->QsciLexerCPP::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnPaper(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_paper_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultColor2(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCPP_SuperDefaultColor2(const QsciLexerCPP* self, int style) {
    return new QColor(self->QsciLexerCPP::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultColor2(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCPP_DefaultFont2(const QsciLexerCPP* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCPP_SuperDefaultFont2(const QsciLexerCPP* self, int style) {
    return new QFont(self->QsciLexerCPP::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultFont2(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCPP_DefaultPaper2(const QsciLexerCPP* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCPP_SuperDefaultPaper2(const QsciLexerCPP* self, int style) {
    return new QColor(self->QsciLexerCPP::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDefaultPaper2(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerCPP_SuperSetEditor(QsciLexerCPP* self, QsciScintilla* editor) {
    self->QsciLexerCPP::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEditor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_seteditor_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCPP_StyleBitsNeeded(const QsciLexerCPP* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerCPP_SuperStyleBitsNeeded(const QsciLexerCPP* self) {
    return self->QsciLexerCPP::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnStyleBitsNeeded(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCPP_SuperSetAutoIndentStyle(QsciLexerCPP* self, int autoindentstyle) {
    self->QsciLexerCPP::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetAutoIndentStyle(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetColor(QsciLexerCPP* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCPP_SuperSetColor(QsciLexerCPP* self, const QColor* c, int style) {
    self->QsciLexerCPP::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetColor(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setcolor_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCPP_SuperSetEolFill(QsciLexerCPP* self, bool eoffill, int style) {
    self->QsciLexerCPP::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetEolFill(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetFont(QsciLexerCPP* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCPP_SuperSetFont(QsciLexerCPP* self, const QFont* f, int style) {
    self->QsciLexerCPP::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetFont(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setfont_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_SetPaper(QsciLexerCPP* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCPP_SuperSetPaper(QsciLexerCPP* self, const QColor* c, int style) {
    self->QsciLexerCPP::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnSetPaper(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_setpaper_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_ReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        return vqscilexercpp->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCPP_SuperReadProperties(QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        return vqscilexercpp->QsciLexerCPP::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnReadProperties(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_readproperties_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_WriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self));
    if (vqscilexercpp) {
        return vqscilexercpp->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCPP_SuperWriteProperties(const QsciLexerCPP* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->QsciLexerCPP::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnWriteProperties(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self)))
        vqscilexercpp->qscilexercpp_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_Event(QsciLexerCPP* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCPP_SuperEvent(QsciLexerCPP* self, QEvent* event) {
    return self->QsciLexerCPP::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_event_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCPP_EventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCPP_SuperEventFilter(QsciLexerCPP* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCPP::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnEventFilter(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_TimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        vqscilexercpp->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCPP_SuperTimerEvent(QsciLexerCPP* self, QTimerEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->QsciLexerCPP::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnTimerEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_timerevent_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_ChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        vqscilexercpp->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCPP_SuperChildEvent(QsciLexerCPP* self, QChildEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->QsciLexerCPP::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnChildEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_childevent_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_CustomEvent(QsciLexerCPP* self, QEvent* event) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        vqscilexercpp->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCPP_SuperCustomEvent(QsciLexerCPP* self, QEvent* event) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->QsciLexerCPP::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnCustomEvent(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_customevent_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_ConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        vqscilexercpp->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCPP_SuperConnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->QsciLexerCPP::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnConnectNotify(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCPP_DisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self);
    if (vqscilexercpp) {
        vqscilexercpp->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCPP::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCPP_SuperDisconnectNotify(QsciLexerCPP* self, const QMetaMethod* signal) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self)) {
        vqscilexercpp->QsciLexerCPP::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCPP::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCPP_OnDisconnectNotify(QsciLexerCPP* self, intptr_t slot) {
    if (auto* vqscilexercpp = dynamic_cast<VirtualQsciLexerCPP*>(self))
        vqscilexercpp->qscilexercpp_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCPP::QsciLexerCPP_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCPP_TextAsBytes(const QsciLexerCPP* self, const libqt_string text) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercpp->VirtualQsciLexerCPP::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCPP::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCPP_BytesAsText(const QsciLexerCPP* self, const char* bytes, int size) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        auto _ret = vqscilexercpp->VirtualQsciLexerCPP::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCPP::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCPP_Sender(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->VirtualQsciLexerCPP::sender();
    } else
        qFatal("Error: Protected method QsciLexerCPP::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCPP_SenderSignalIndex(const QsciLexerCPP* self) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->VirtualQsciLexerCPP::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCPP::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCPP_Receivers(const QsciLexerCPP* self, const char* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->VirtualQsciLexerCPP::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCPP::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCPP_IsSignalConnected(const QsciLexerCPP* self, const QMetaMethod* signal) {
    if (auto* vqscilexercpp = const_cast<VirtualQsciLexerCPP*>(dynamic_cast<const VirtualQsciLexerCPP*>(self))) {
        return vqscilexercpp->VirtualQsciLexerCPP::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCPP::isSignalConnected called without a directly constructed type");
}

void QsciLexerCPP_Delete(QsciLexerCPP* self) {
    delete self;
}
