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
#include <qscilexerpostscript.h>
#include "libqscilexerpostscript.h"
#include "libqscilexerpostscript.hxx"

QsciLexerPostScript* QsciLexerPostScript_new() {
    return new VirtualQsciLexerPostScript();
}

QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent) {
    return new VirtualQsciLexerPostScript(parent);
}

QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerPostScript_Metacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerPostScript_Tr(const char* s) {
    auto _ret = QsciLexerPostScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self) {
    return (const char*)self->language();
}

const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self) {
    return (const char*)self->lexer();
}

int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self) {
    return self->braceStyle();
}

QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style) {
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

void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self) {
    self->refreshProperties();
}

bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self) {
    return self->tokenize();
}

int QsciLexerPostScript_Level(const QsciLexerPostScript* self) {
    return self->level();
}

bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self) {
    return self->foldCompact();
}

bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self) {
    return self->foldAtElse();
}

void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize) {
    self->setTokenize(tokenize);
}

void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level) {
    self->setLevel(static_cast<int>(level));
}

void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold) {
    self->setFoldCompact(fold);
}

void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    self->setFoldAtElse(fold);
}

libqt_string QsciLexerPostScript_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerPostScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerPostScript::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerPostScript_SuperMetaObject(const QsciLexerPostScript* self) {
    return (QMetaObject*)self->QsciLexerPostScript::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnMetaObject(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_metaobject_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerPostScript_SuperMetacast(QsciLexerPostScript* self, const char* param1) {
    return self->QsciLexerPostScript::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnMetacast(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_metacast_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerPostScript_SuperMetacall(QsciLexerPostScript* self, int param1, int param2, void** param3) {
    return self->QsciLexerPostScript::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnMetacall(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_metacall_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetTokenize(QsciLexerPostScript* self, bool tokenize) {
    self->QsciLexerPostScript::setTokenize(tokenize);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetTokenize(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_settokenize_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetTokenize_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetLevel(QsciLexerPostScript* self, int level) {
    self->QsciLexerPostScript::setLevel(static_cast<int>(level));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetLevel(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setlevel_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetLevel_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetFoldCompact(QsciLexerPostScript* self, bool fold) {
    self->QsciLexerPostScript::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldCompact(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldCompact_Callback>(slot);
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetFoldAtElse(QsciLexerPostScript* self, bool fold) {
    self->QsciLexerPostScript::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFoldAtElse(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPostScript_LexerId(const QsciLexerPostScript* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerPostScript_SuperLexerId(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnLexerId(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_lexerid_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPostScript_AutoCompletionFillups(const QsciLexerPostScript* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerPostScript_SuperAutoCompletionFillups(const QsciLexerPostScript* self) {
    return (const char*)self->QsciLexerPostScript::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnAutoCompletionFillups(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerPostScript_AutoCompletionWordSeparators(const QsciLexerPostScript* self) {
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
libqt_list /* of libqt_string */ QsciLexerPostScript_SuperAutoCompletionWordSeparators(const QsciLexerPostScript* self) {
    QList<QString> _ret = self->QsciLexerPostScript::autoCompletionWordSeparators();
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
void QsciLexerPostScript_OnAutoCompletionWordSeparators(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockEnd(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPostScript_SuperBlockEnd(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->QsciLexerPostScript::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockEnd(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_blockend_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPostScript_BlockLookback(const QsciLexerPostScript* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerPostScript_SuperBlockLookback(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockLookback(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_blocklookback_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStart(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPostScript_SuperBlockStart(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->QsciLexerPostScript::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStart(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_blockstart_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPostScript_BlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerPostScript_SuperBlockStartKeyword(const QsciLexerPostScript* self, int* style) {
    return (const char*)self->QsciLexerPostScript::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnBlockStartKeyword(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_CaseSensitive(const QsciLexerPostScript* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerPostScript_SuperCaseSensitive(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCaseSensitive(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_casesensitive_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Color(const QsciLexerPostScript* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPostScript_SuperColor(const QsciLexerPostScript* self, int style) {
    return new QColor(self->QsciLexerPostScript::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnColor(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_color_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_EolFill(const QsciLexerPostScript* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPostScript_SuperEolFill(const QsciLexerPostScript* self, int style) {
    return self->QsciLexerPostScript::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEolFill(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_eolfill_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPostScript_Font(const QsciLexerPostScript* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPostScript_SuperFont(const QsciLexerPostScript* self, int style) {
    return new QFont(self->QsciLexerPostScript::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnFont(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_font_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPostScript_IndentationGuideView(const QsciLexerPostScript* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerPostScript_SuperIndentationGuideView(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnIndentationGuideView(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPostScript_DefaultStyle(const QsciLexerPostScript* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerPostScript_SuperDefaultStyle(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultStyle(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPostScript_Paper(const QsciLexerPostScript* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPostScript_SuperPaper(const QsciLexerPostScript* self, int style) {
    return new QColor(self->QsciLexerPostScript::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnPaper(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_paper_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultColor2(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPostScript_SuperDefaultColor2(const QsciLexerPostScript* self, int style) {
    return new QColor(self->QsciLexerPostScript::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultColor2(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_DefaultEolFill(const QsciLexerPostScript* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerPostScript_SuperDefaultEolFill(const QsciLexerPostScript* self, int style) {
    return self->QsciLexerPostScript::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultEolFill(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerPostScript_DefaultFont2(const QsciLexerPostScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerPostScript_SuperDefaultFont2(const QsciLexerPostScript* self, int style) {
    return new QFont(self->QsciLexerPostScript::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultFont2(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerPostScript_DefaultPaper2(const QsciLexerPostScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerPostScript_SuperDefaultPaper2(const QsciLexerPostScript* self, int style) {
    return new QColor(self->QsciLexerPostScript::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDefaultPaper2(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetEditor(QsciLexerPostScript* self, QsciScintilla* editor) {
    self->QsciLexerPostScript::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEditor(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_seteditor_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerPostScript_StyleBitsNeeded(const QsciLexerPostScript* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerPostScript_SuperStyleBitsNeeded(const QsciLexerPostScript* self) {
    return self->QsciLexerPostScript::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnStyleBitsNeeded(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerPostScript_WordCharacters(const QsciLexerPostScript* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerPostScript_SuperWordCharacters(const QsciLexerPostScript* self) {
    return (const char*)self->QsciLexerPostScript::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWordCharacters(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetAutoIndentStyle(QsciLexerPostScript* self, int autoindentstyle) {
    self->QsciLexerPostScript::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetAutoIndentStyle(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetColor(QsciLexerPostScript* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetColor(QsciLexerPostScript* self, const QColor* c, int style) {
    self->QsciLexerPostScript::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetColor(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setcolor_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetEolFill(QsciLexerPostScript* self, bool eoffill, int style) {
    self->QsciLexerPostScript::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetEolFill(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_seteolfill_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetFont(QsciLexerPostScript* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetFont(QsciLexerPostScript* self, const QFont* f, int style) {
    self->QsciLexerPostScript::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetFont(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setfont_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_SetPaper(QsciLexerPostScript* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerPostScript_SuperSetPaper(QsciLexerPostScript* self, const QColor* c, int style) {
    self->QsciLexerPostScript::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnSetPaper(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_setpaper_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_ReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        return vqscilexerpostscript->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPostScript_SuperReadProperties(QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        return vqscilexerpostscript->QsciLexerPostScript::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnReadProperties(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_readproperties_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_WriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self));
    if (vqscilexerpostscript) {
        return vqscilexerpostscript->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerPostScript_SuperWriteProperties(const QsciLexerPostScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->QsciLexerPostScript::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnWriteProperties(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self)))
        vqscilexerpostscript->qscilexerpostscript_writeproperties_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_Event(QsciLexerPostScript* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerPostScript_SuperEvent(QsciLexerPostScript* self, QEvent* event) {
    return self->QsciLexerPostScript::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_event_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerPostScript_EventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerPostScript_SuperEventFilter(QsciLexerPostScript* self, QObject* watched, QEvent* event) {
    return self->QsciLexerPostScript::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnEventFilter(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_eventfilter_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_TimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        vqscilexerpostscript->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPostScript_SuperTimerEvent(QsciLexerPostScript* self, QTimerEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->QsciLexerPostScript::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnTimerEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_timerevent_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_ChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        vqscilexerpostscript->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPostScript_SuperChildEvent(QsciLexerPostScript* self, QChildEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->QsciLexerPostScript::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnChildEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_childevent_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_CustomEvent(QsciLexerPostScript* self, QEvent* event) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        vqscilexerpostscript->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPostScript_SuperCustomEvent(QsciLexerPostScript* self, QEvent* event) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->QsciLexerPostScript::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnCustomEvent(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_customevent_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_ConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        vqscilexerpostscript->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPostScript_SuperConnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->QsciLexerPostScript::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnConnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_connectnotify_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerPostScript_DisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self);
    if (vqscilexerpostscript) {
        vqscilexerpostscript->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerPostScript::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerPostScript_SuperDisconnectNotify(QsciLexerPostScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self)) {
        vqscilexerpostscript->QsciLexerPostScript::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerPostScript::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerPostScript_OnDisconnectNotify(QsciLexerPostScript* self, intptr_t slot) {
    if (auto* vqscilexerpostscript = dynamic_cast<VirtualQsciLexerPostScript*>(self))
        vqscilexerpostscript->qscilexerpostscript_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerPostScript::QsciLexerPostScript_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerPostScript_TextAsBytes(const QsciLexerPostScript* self, const libqt_string text) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerpostscript->VirtualQsciLexerPostScript::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPostScript::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerPostScript_BytesAsText(const QsciLexerPostScript* self, const char* bytes, int size) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        auto _ret = vqscilexerpostscript->VirtualQsciLexerPostScript::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerPostScript::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerPostScript_Sender(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->VirtualQsciLexerPostScript::sender();
    } else
        qFatal("Error: Protected method QsciLexerPostScript::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPostScript_SenderSignalIndex(const QsciLexerPostScript* self) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->VirtualQsciLexerPostScript::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerPostScript::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerPostScript_Receivers(const QsciLexerPostScript* self, const char* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->VirtualQsciLexerPostScript::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerPostScript::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerPostScript_IsSignalConnected(const QsciLexerPostScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerpostscript = const_cast<VirtualQsciLexerPostScript*>(dynamic_cast<const VirtualQsciLexerPostScript*>(self))) {
        return vqscilexerpostscript->VirtualQsciLexerPostScript::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerPostScript::isSignalConnected called without a directly constructed type");
}

void QsciLexerPostScript_Delete(QsciLexerPostScript* self) {
    delete self;
}
