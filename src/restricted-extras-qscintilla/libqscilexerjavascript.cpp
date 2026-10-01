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
#include <qscilexerjavascript.h>
#include "libqscilexerjavascript.h"
#include "libqscilexerjavascript.hxx"

QsciLexerJavaScript* QsciLexerJavaScript_new() {
    return new VirtualQsciLexerJavaScript();
}

QsciLexerJavaScript* QsciLexerJavaScript_new2(QObject* parent) {
    return new VirtualQsciLexerJavaScript(parent);
}

QMetaObject* QsciLexerJavaScript_MetaObject(const QsciLexerJavaScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerJavaScript_Metacast(QsciLexerJavaScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerJavaScript_Metacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerJavaScript_Tr(const char* s) {
    auto _ret = QsciLexerJavaScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerJavaScript_Language(const QsciLexerJavaScript* self) {
    return (const char*)self->language();
}

QColor* QsciLexerJavaScript_DefaultColor(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerJavaScript_DefaultEolFill(const QsciLexerJavaScript* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerJavaScript_DefaultFont(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJavaScript_DefaultPaper(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerJavaScript_Keywords(const QsciLexerJavaScript* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerJavaScript_Description(const QsciLexerJavaScript* self, int style) {
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

libqt_string QsciLexerJavaScript_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerJavaScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerJavaScript_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerJavaScript::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerJavaScript_SuperMetaObject(const QsciLexerJavaScript* self) {
    return (QMetaObject*)self->QsciLexerJavaScript::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnMetaObject(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_metaobject_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerJavaScript_SuperMetacast(QsciLexerJavaScript* self, const char* param1) {
    return self->QsciLexerJavaScript::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnMetacast(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_metacast_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerJavaScript_SuperMetacall(QsciLexerJavaScript* self, int param1, int param2, void** param3) {
    return self->QsciLexerJavaScript::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnMetacall(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_metacall_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    self->setFoldAtElse(fold);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetFoldAtElse(QsciLexerJavaScript* self, bool fold) {
    self->QsciLexerJavaScript::setFoldAtElse(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldAtElse(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setfoldatelse_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldAtElse_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldComments(QsciLexerJavaScript* self, bool fold) {
    self->setFoldComments(fold);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetFoldComments(QsciLexerJavaScript* self, bool fold) {
    self->QsciLexerJavaScript::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldComments(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldComments_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    self->setFoldCompact(fold);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetFoldCompact(QsciLexerJavaScript* self, bool fold) {
    self->QsciLexerJavaScript::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldCompact(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetFoldPreprocessor(QsciLexerJavaScript* self, bool fold) {
    self->QsciLexerJavaScript::setFoldPreprocessor(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFoldPreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setfoldpreprocessor_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFoldPreprocessor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    self->setStylePreprocessor(style);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetStylePreprocessor(QsciLexerJavaScript* self, bool style) {
    self->QsciLexerJavaScript::setStylePreprocessor(style);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetStylePreprocessor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setstylepreprocessor_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetStylePreprocessor_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_Lexer(const QsciLexerJavaScript* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperLexer(const QsciLexerJavaScript* self) {
    return (const char*)self->QsciLexerJavaScript::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexer(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_lexer_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_LexerId(const QsciLexerJavaScript* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperLexerId(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnLexerId(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_lexerid_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_AutoCompletionFillups(const QsciLexerJavaScript* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperAutoCompletionFillups(const QsciLexerJavaScript* self) {
    return (const char*)self->QsciLexerJavaScript::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnAutoCompletionFillups(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerJavaScript_AutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
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
libqt_list /* of libqt_string */ QsciLexerJavaScript_SuperAutoCompletionWordSeparators(const QsciLexerJavaScript* self) {
    QList<QString> _ret = self->QsciLexerJavaScript::autoCompletionWordSeparators();
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
void QsciLexerJavaScript_OnAutoCompletionWordSeparators(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockEnd(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperBlockEnd(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->QsciLexerJavaScript::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockEnd(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_blockend_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_BlockLookback(const QsciLexerJavaScript* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperBlockLookback(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockLookback(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_blocklookback_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStart(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperBlockStart(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->QsciLexerJavaScript::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStart(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_blockstart_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_BlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperBlockStartKeyword(const QsciLexerJavaScript* self, int* style) {
    return (const char*)self->QsciLexerJavaScript::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBlockStartKeyword(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_BraceStyle(const QsciLexerJavaScript* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperBraceStyle(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnBraceStyle(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_bracestyle_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_CaseSensitive(const QsciLexerJavaScript* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperCaseSensitive(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCaseSensitive(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_casesensitive_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Color(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJavaScript_SuperColor(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->QsciLexerJavaScript::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnColor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_color_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_EolFill(const QsciLexerJavaScript* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperEolFill(const QsciLexerJavaScript* self, int style) {
    return self->QsciLexerJavaScript::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEolFill(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_eolfill_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_Font(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJavaScript_SuperFont(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->QsciLexerJavaScript::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnFont(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_font_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_IndentationGuideView(const QsciLexerJavaScript* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperIndentationGuideView(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnIndentationGuideView(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_DefaultStyle(const QsciLexerJavaScript* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperDefaultStyle(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultStyle(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_Paper(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJavaScript_SuperPaper(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->QsciLexerJavaScript::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnPaper(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_paper_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultColor2(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJavaScript_SuperDefaultColor2(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->QsciLexerJavaScript::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultColor2(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerJavaScript_DefaultFont2(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerJavaScript_SuperDefaultFont2(const QsciLexerJavaScript* self, int style) {
    return new QFont(self->QsciLexerJavaScript::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultFont2(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerJavaScript_DefaultPaper2(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerJavaScript_SuperDefaultPaper2(const QsciLexerJavaScript* self, int style) {
    return new QColor(self->QsciLexerJavaScript::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDefaultPaper2(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetEditor(QsciLexerJavaScript* self, QsciScintilla* editor) {
    self->QsciLexerJavaScript::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEditor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_seteditor_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_RefreshProperties(QsciLexerJavaScript* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerJavaScript_SuperRefreshProperties(QsciLexerJavaScript* self) {
    self->QsciLexerJavaScript::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnRefreshProperties(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerJavaScript_StyleBitsNeeded(const QsciLexerJavaScript* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerJavaScript_SuperStyleBitsNeeded(const QsciLexerJavaScript* self) {
    return self->QsciLexerJavaScript::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnStyleBitsNeeded(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerJavaScript_WordCharacters(const QsciLexerJavaScript* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerJavaScript_SuperWordCharacters(const QsciLexerJavaScript* self) {
    return (const char*)self->QsciLexerJavaScript::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWordCharacters(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetAutoIndentStyle(QsciLexerJavaScript* self, int autoindentstyle) {
    self->QsciLexerJavaScript::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetAutoIndentStyle(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetColor(QsciLexerJavaScript* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetColor(QsciLexerJavaScript* self, const QColor* c, int style) {
    self->QsciLexerJavaScript::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetColor(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setcolor_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetEolFill(QsciLexerJavaScript* self, bool eoffill, int style) {
    self->QsciLexerJavaScript::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetEolFill(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_seteolfill_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetFont(QsciLexerJavaScript* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetFont(QsciLexerJavaScript* self, const QFont* f, int style) {
    self->QsciLexerJavaScript::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetFont(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setfont_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_SetPaper(QsciLexerJavaScript* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerJavaScript_SuperSetPaper(QsciLexerJavaScript* self, const QColor* c, int style) {
    self->QsciLexerJavaScript::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnSetPaper(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_setpaper_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_ReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        return vqscilexerjavascript->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperReadProperties(QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        return vqscilexerjavascript->QsciLexerJavaScript::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnReadProperties(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_readproperties_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_WriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self));
    if (vqscilexerjavascript) {
        return vqscilexerjavascript->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperWriteProperties(const QsciLexerJavaScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->QsciLexerJavaScript::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnWriteProperties(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self)))
        vqscilexerjavascript->qscilexerjavascript_writeproperties_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_Event(QsciLexerJavaScript* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperEvent(QsciLexerJavaScript* self, QEvent* event) {
    return self->QsciLexerJavaScript::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_event_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerJavaScript_EventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerJavaScript_SuperEventFilter(QsciLexerJavaScript* self, QObject* watched, QEvent* event) {
    return self->QsciLexerJavaScript::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnEventFilter(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_eventfilter_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_TimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        vqscilexerjavascript->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJavaScript_SuperTimerEvent(QsciLexerJavaScript* self, QTimerEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->QsciLexerJavaScript::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnTimerEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_timerevent_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_ChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        vqscilexerjavascript->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJavaScript_SuperChildEvent(QsciLexerJavaScript* self, QChildEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->QsciLexerJavaScript::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnChildEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_childevent_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_CustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        vqscilexerjavascript->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJavaScript_SuperCustomEvent(QsciLexerJavaScript* self, QEvent* event) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->QsciLexerJavaScript::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnCustomEvent(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_customevent_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_ConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        vqscilexerjavascript->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJavaScript_SuperConnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->QsciLexerJavaScript::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnConnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_connectnotify_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerJavaScript_DisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self);
    if (vqscilexerjavascript) {
        vqscilexerjavascript->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerJavaScript::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerJavaScript_SuperDisconnectNotify(QsciLexerJavaScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self)) {
        vqscilexerjavascript->QsciLexerJavaScript::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerJavaScript::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerJavaScript_OnDisconnectNotify(QsciLexerJavaScript* self, intptr_t slot) {
    if (auto* vqscilexerjavascript = dynamic_cast<VirtualQsciLexerJavaScript*>(self))
        vqscilexerjavascript->qscilexerjavascript_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerJavaScript::QsciLexerJavaScript_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerJavaScript_TextAsBytes(const QsciLexerJavaScript* self, const libqt_string text) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerjavascript->VirtualQsciLexerJavaScript::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerJavaScript_BytesAsText(const QsciLexerJavaScript* self, const char* bytes, int size) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        auto _ret = vqscilexerjavascript->VirtualQsciLexerJavaScript::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerJavaScript_Sender(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->VirtualQsciLexerJavaScript::sender();
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJavaScript_SenderSignalIndex(const QsciLexerJavaScript* self) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->VirtualQsciLexerJavaScript::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerJavaScript_Receivers(const QsciLexerJavaScript* self, const char* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->VirtualQsciLexerJavaScript::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerJavaScript_IsSignalConnected(const QsciLexerJavaScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexerjavascript = const_cast<VirtualQsciLexerJavaScript*>(dynamic_cast<const VirtualQsciLexerJavaScript*>(self))) {
        return vqscilexerjavascript->VirtualQsciLexerJavaScript::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerJavaScript::isSignalConnected called without a directly constructed type");
}

void QsciLexerJavaScript_Delete(QsciLexerJavaScript* self) {
    delete self;
}
