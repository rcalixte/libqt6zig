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
#include <qscilexersql.h>
#include "libqscilexersql.h"
#include "libqscilexersql.hxx"

QsciLexerSQL* QsciLexerSQL_new() {
    return new VirtualQsciLexerSQL();
}

QsciLexerSQL* QsciLexerSQL_new2(QObject* parent) {
    return new VirtualQsciLexerSQL(parent);
}

QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSQL_Metacall(QsciLexerSQL* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerSQL_Tr(const char* s) {
    auto _ret = QsciLexerSQL::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerSQL_Language(const QsciLexerSQL* self) {
    return (const char*)self->language();
}

const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self) {
    return (const char*)self->lexer();
}

int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self) {
    return self->braceStyle();
}

QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style) {
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

void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self) {
    self->refreshProperties();
}

bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self) {
    return self->backslashEscapes();
}

void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable) {
    self->setDottedWords(enable);
}

bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self) {
    return self->dottedWords();
}

void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self) {
    return self->foldAtElse();
}

bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self) {
    return self->foldComments();
}

bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self) {
    return self->foldCompact();
}

void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold) {
    self->setFoldOnlyBegin(fold);
}

bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self) {
    return self->foldOnlyBegin();
}

void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable) {
    self->setHashComments(enable);
}

bool QsciLexerSQL_HashComments(const QsciLexerSQL* self) {
    return self->hashComments();
}

void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable) {
    self->setQuotedIdentifiers(enable);
}

bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self) {
    return self->quotedIdentifiers();
}

void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable) {
    self->setBackslashEscapes(enable);
}

void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerSQL_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerSQL::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerSQL::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerSQL_SuperMetaObject(const QsciLexerSQL* self) {
    return (QMetaObject*)self->QsciLexerSQL::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnMetaObject(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_metaobject_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerSQL_SuperMetacast(QsciLexerSQL* self, const char* param1) {
    return self->QsciLexerSQL::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnMetacast(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_metacast_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerSQL_SuperMetacall(QsciLexerSQL* self, int param1, int param2, void** param3) {
    return self->QsciLexerSQL::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnMetacall(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_metacall_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerSQL_SuperSetBackslashEscapes(QsciLexerSQL* self, bool enable) {
    self->QsciLexerSQL::setBackslashEscapes(enable);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetBackslashEscapes(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setbackslashescapes_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetBackslashEscapes_Callback>(slot);
}

// Base class handler implementation
void QsciLexerSQL_SuperSetFoldComments(QsciLexerSQL* self, bool fold) {
    self->QsciLexerSQL::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFoldComments(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerSQL_SuperSetFoldCompact(QsciLexerSQL* self, bool fold) {
    self->QsciLexerSQL::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFoldCompact(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSQL_LexerId(const QsciLexerSQL* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerSQL_SuperLexerId(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnLexerId(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_lexerid_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSQL_AutoCompletionFillups(const QsciLexerSQL* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerSQL_SuperAutoCompletionFillups(const QsciLexerSQL* self) {
    return (const char*)self->QsciLexerSQL::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnAutoCompletionFillups(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSQL_AutoCompletionWordSeparators(const QsciLexerSQL* self) {
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
libqt_list /* of libqt_string */ QsciLexerSQL_SuperAutoCompletionWordSeparators(const QsciLexerSQL* self) {
    QList<QString> _ret = self->QsciLexerSQL::autoCompletionWordSeparators();
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
void QsciLexerSQL_OnAutoCompletionWordSeparators(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockEnd(const QsciLexerSQL* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSQL_SuperBlockEnd(const QsciLexerSQL* self, int* style) {
    return (const char*)self->QsciLexerSQL::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockEnd(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_blockend_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSQL_BlockLookback(const QsciLexerSQL* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerSQL_SuperBlockLookback(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockLookback(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_blocklookback_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockStart(const QsciLexerSQL* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSQL_SuperBlockStart(const QsciLexerSQL* self, int* style) {
    return (const char*)self->QsciLexerSQL::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockStart(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_blockstart_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSQL_BlockStartKeyword(const QsciLexerSQL* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSQL_SuperBlockStartKeyword(const QsciLexerSQL* self, int* style) {
    return (const char*)self->QsciLexerSQL::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnBlockStartKeyword(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_CaseSensitive(const QsciLexerSQL* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerSQL_SuperCaseSensitive(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnCaseSensitive(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_casesensitive_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSQL_Color(const QsciLexerSQL* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSQL_SuperColor(const QsciLexerSQL* self, int style) {
    return new QColor(self->QsciLexerSQL::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnColor(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_color_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_EolFill(const QsciLexerSQL* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerSQL_SuperEolFill(const QsciLexerSQL* self, int style) {
    return self->QsciLexerSQL::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEolFill(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_eolfill_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSQL_Font(const QsciLexerSQL* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSQL_SuperFont(const QsciLexerSQL* self, int style) {
    return new QFont(self->QsciLexerSQL::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnFont(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_font_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSQL_IndentationGuideView(const QsciLexerSQL* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerSQL_SuperIndentationGuideView(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnIndentationGuideView(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSQL_DefaultStyle(const QsciLexerSQL* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerSQL_SuperDefaultStyle(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultStyle(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSQL_Paper(const QsciLexerSQL* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSQL_SuperPaper(const QsciLexerSQL* self, int style) {
    return new QColor(self->QsciLexerSQL::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnPaper(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_paper_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSQL_DefaultColor2(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSQL_SuperDefaultColor2(const QsciLexerSQL* self, int style) {
    return new QColor(self->QsciLexerSQL::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultColor2(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSQL_DefaultFont2(const QsciLexerSQL* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSQL_SuperDefaultFont2(const QsciLexerSQL* self, int style) {
    return new QFont(self->QsciLexerSQL::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultFont2(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSQL_DefaultPaper2(const QsciLexerSQL* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSQL_SuperDefaultPaper2(const QsciLexerSQL* self, int style) {
    return new QColor(self->QsciLexerSQL::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDefaultPaper2(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetEditor(QsciLexerSQL* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerSQL_SuperSetEditor(QsciLexerSQL* self, QsciScintilla* editor) {
    self->QsciLexerSQL::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetEditor(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_seteditor_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSQL_StyleBitsNeeded(const QsciLexerSQL* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerSQL_SuperStyleBitsNeeded(const QsciLexerSQL* self) {
    return self->QsciLexerSQL::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnStyleBitsNeeded(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSQL_WordCharacters(const QsciLexerSQL* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerSQL_SuperWordCharacters(const QsciLexerSQL* self) {
    return (const char*)self->QsciLexerSQL::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnWordCharacters(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerSQL_SuperSetAutoIndentStyle(QsciLexerSQL* self, int autoindentstyle) {
    self->QsciLexerSQL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetAutoIndentStyle(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetColor(QsciLexerSQL* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSQL_SuperSetColor(QsciLexerSQL* self, const QColor* c, int style) {
    self->QsciLexerSQL::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetColor(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setcolor_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetEolFill(QsciLexerSQL* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSQL_SuperSetEolFill(QsciLexerSQL* self, bool eoffill, int style) {
    self->QsciLexerSQL::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetEolFill(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_seteolfill_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetFont(QsciLexerSQL* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSQL_SuperSetFont(QsciLexerSQL* self, const QFont* f, int style) {
    self->QsciLexerSQL::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetFont(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setfont_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_SetPaper(QsciLexerSQL* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSQL_SuperSetPaper(QsciLexerSQL* self, const QColor* c, int style) {
    self->QsciLexerSQL::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnSetPaper(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_setpaper_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_ReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        return vqscilexersql->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSQL_SuperReadProperties(QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        return vqscilexersql->QsciLexerSQL::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnReadProperties(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_readproperties_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_WriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self));
    if (vqscilexersql) {
        return vqscilexersql->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSQL_SuperWriteProperties(const QsciLexerSQL* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        return vqscilexersql->QsciLexerSQL::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnWriteProperties(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self)))
        vqscilexersql->qscilexersql_writeproperties_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_Event(QsciLexerSQL* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerSQL_SuperEvent(QsciLexerSQL* self, QEvent* event) {
    return self->QsciLexerSQL::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEvent(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_event_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSQL_EventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerSQL_SuperEventFilter(QsciLexerSQL* self, QObject* watched, QEvent* event) {
    return self->QsciLexerSQL::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnEventFilter(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_eventfilter_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_TimerEvent(QsciLexerSQL* self, QTimerEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        vqscilexersql->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSQL_SuperTimerEvent(QsciLexerSQL* self, QTimerEvent* event) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        vqscilexersql->QsciLexerSQL::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnTimerEvent(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_timerevent_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_ChildEvent(QsciLexerSQL* self, QChildEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        vqscilexersql->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSQL_SuperChildEvent(QsciLexerSQL* self, QChildEvent* event) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        vqscilexersql->QsciLexerSQL::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnChildEvent(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_childevent_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_CustomEvent(QsciLexerSQL* self, QEvent* event) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        vqscilexersql->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSQL_SuperCustomEvent(QsciLexerSQL* self, QEvent* event) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        vqscilexersql->QsciLexerSQL::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnCustomEvent(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_customevent_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_ConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        vqscilexersql->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSQL_SuperConnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        vqscilexersql->QsciLexerSQL::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnConnectNotify(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_connectnotify_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSQL_DisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self);
    if (vqscilexersql) {
        vqscilexersql->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSQL::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSQL_SuperDisconnectNotify(QsciLexerSQL* self, const QMetaMethod* signal) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self)) {
        vqscilexersql->QsciLexerSQL::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSQL::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSQL_OnDisconnectNotify(QsciLexerSQL* self, intptr_t slot) {
    if (auto* vqscilexersql = dynamic_cast<VirtualQsciLexerSQL*>(self))
        vqscilexersql->qscilexersql_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerSQL::QsciLexerSQL_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerSQL_TextAsBytes(const QsciLexerSQL* self, const libqt_string text) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexersql->VirtualQsciLexerSQL::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSQL::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerSQL_BytesAsText(const QsciLexerSQL* self, const char* bytes, int size) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        auto _ret = vqscilexersql->VirtualQsciLexerSQL::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSQL::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerSQL_Sender(const QsciLexerSQL* self) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        return vqscilexersql->VirtualQsciLexerSQL::sender();
    } else
        qFatal("Error: Protected method QsciLexerSQL::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSQL_SenderSignalIndex(const QsciLexerSQL* self) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        return vqscilexersql->VirtualQsciLexerSQL::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerSQL::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSQL_Receivers(const QsciLexerSQL* self, const char* signal) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        return vqscilexersql->VirtualQsciLexerSQL::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerSQL::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerSQL_IsSignalConnected(const QsciLexerSQL* self, const QMetaMethod* signal) {
    if (auto* vqscilexersql = const_cast<VirtualQsciLexerSQL*>(dynamic_cast<const VirtualQsciLexerSQL*>(self))) {
        return vqscilexersql->VirtualQsciLexerSQL::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerSQL::isSignalConnected called without a directly constructed type");
}

void QsciLexerSQL_Delete(QsciLexerSQL* self) {
    delete self;
}
