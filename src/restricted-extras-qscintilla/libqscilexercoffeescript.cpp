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
#include <qscilexercoffeescript.h>
#include "libqscilexercoffeescript.h"
#include "libqscilexercoffeescript.hxx"

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new() {
    return new VirtualQsciLexerCoffeeScript();
}

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent) {
    return new VirtualQsciLexerCoffeeScript(parent);
}

QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCoffeeScript_Metacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCoffeeScript_Tr(const char* s) {
    auto _ret = QsciLexerCoffeeScript::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self) {
    return (const char*)self->language();
}

const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self) {
    return (const char*)self->lexer();
}

libqt_list /* of libqt_string */ QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self) {
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

const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self) {
    return (const char*)self->blockEnd();
}

const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self) {
    return (const char*)self->blockStart();
}

const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self) {
    return (const char*)self->blockStartKeyword();
}

int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self) {
    return self->braceStyle();
}

const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style) {
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

void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self) {
    self->refreshProperties();
}

bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self) {
    return self->dollarsAllowed();
}

void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed) {
    self->setDollarsAllowed(allowed);
}

bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self) {
    return self->foldComments();
}

void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self) {
    return self->foldCompact();
}

void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self) {
    return self->stylePreprocessor();
}

void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style) {
    self->setStylePreprocessor(style);
}

libqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCoffeeScript::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCoffeeScript::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
QMetaObject* QsciLexerCoffeeScript_SuperMetaObject(const QsciLexerCoffeeScript* self) {
    return (QMetaObject*)self->QsciLexerCoffeeScript::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnMetaObject(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_metaobject_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCoffeeScript_SuperMetacast(QsciLexerCoffeeScript* self, const char* param1) {
    return self->QsciLexerCoffeeScript::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnMetacast(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_metacast_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperMetacall(QsciLexerCoffeeScript* self, int param1, int param2, void** param3) {
    return self->QsciLexerCoffeeScript::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnMetacall(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_metacall_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCoffeeScript_LexerId(const QsciLexerCoffeeScript* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperLexerId(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnLexerId(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_lexerid_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCoffeeScript_AutoCompletionFillups(const QsciLexerCoffeeScript* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCoffeeScript_SuperAutoCompletionFillups(const QsciLexerCoffeeScript* self) {
    return (const char*)self->QsciLexerCoffeeScript::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnAutoCompletionFillups(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCoffeeScript_BlockLookback(const QsciLexerCoffeeScript* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperBlockLookback(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnBlockLookback(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_CaseSensitive(const QsciLexerCoffeeScript* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperCaseSensitive(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnCaseSensitive(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_Color(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_SuperColor(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->QsciLexerCoffeeScript::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnColor(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_color_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_EolFill(const QsciLexerCoffeeScript* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperEolFill(const QsciLexerCoffeeScript* self, int style) {
    return self->QsciLexerCoffeeScript::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEolFill(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_eolfill_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCoffeeScript_Font(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCoffeeScript_SuperFont(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->QsciLexerCoffeeScript::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnFont(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_font_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCoffeeScript_IndentationGuideView(const QsciLexerCoffeeScript* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperIndentationGuideView(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnIndentationGuideView(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCoffeeScript_DefaultStyle(const QsciLexerCoffeeScript* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperDefaultStyle(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultStyle(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_Paper(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_SuperPaper(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->QsciLexerCoffeeScript::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnPaper(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_paper_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_DefaultColor2(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_SuperDefaultColor2(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->QsciLexerCoffeeScript::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultColor2(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCoffeeScript_DefaultFont2(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCoffeeScript_SuperDefaultFont2(const QsciLexerCoffeeScript* self, int style) {
    return new QFont(self->QsciLexerCoffeeScript::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultFont2(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCoffeeScript_DefaultPaper2(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCoffeeScript_SuperDefaultPaper2(const QsciLexerCoffeeScript* self, int style) {
    return new QColor(self->QsciLexerCoffeeScript::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDefaultPaper2(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetEditor(QsciLexerCoffeeScript* self, QsciScintilla* editor) {
    self->QsciLexerCoffeeScript::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetEditor(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_seteditor_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCoffeeScript_StyleBitsNeeded(const QsciLexerCoffeeScript* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerCoffeeScript_SuperStyleBitsNeeded(const QsciLexerCoffeeScript* self) {
    return self->QsciLexerCoffeeScript::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnStyleBitsNeeded(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetAutoIndentStyle(QsciLexerCoffeeScript* self, int autoindentstyle) {
    self->QsciLexerCoffeeScript::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetAutoIndentStyle(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetColor(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetColor(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    self->QsciLexerCoffeeScript::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetColor(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_setcolor_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetEolFill(QsciLexerCoffeeScript* self, bool eoffill, int style) {
    self->QsciLexerCoffeeScript::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetEolFill(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetFont(QsciLexerCoffeeScript* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetFont(QsciLexerCoffeeScript* self, const QFont* f, int style) {
    self->QsciLexerCoffeeScript::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetFont(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_setfont_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_SetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperSetPaper(QsciLexerCoffeeScript* self, const QColor* c, int style) {
    self->QsciLexerCoffeeScript::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnSetPaper(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_setpaper_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_ReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        return vqscilexercoffeescript->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperReadProperties(QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        return vqscilexercoffeescript->QsciLexerCoffeeScript::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnReadProperties(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_readproperties_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_WriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self));
    if (vqscilexercoffeescript) {
        return vqscilexercoffeescript->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperWriteProperties(const QsciLexerCoffeeScript* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        return vqscilexercoffeescript->QsciLexerCoffeeScript::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnWriteProperties(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self)))
        vqscilexercoffeescript->qscilexercoffeescript_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_Event(QsciLexerCoffeeScript* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    return self->QsciLexerCoffeeScript::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_event_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCoffeeScript_EventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCoffeeScript_SuperEventFilter(QsciLexerCoffeeScript* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCoffeeScript::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnEventFilter(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_TimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        vqscilexercoffeescript->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperTimerEvent(QsciLexerCoffeeScript* self, QTimerEvent* event) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        vqscilexercoffeescript->QsciLexerCoffeeScript::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnTimerEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_timerevent_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_ChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        vqscilexercoffeescript->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperChildEvent(QsciLexerCoffeeScript* self, QChildEvent* event) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        vqscilexercoffeescript->QsciLexerCoffeeScript::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnChildEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_childevent_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_CustomEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        vqscilexercoffeescript->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperCustomEvent(QsciLexerCoffeeScript* self, QEvent* event) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        vqscilexercoffeescript->QsciLexerCoffeeScript::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnCustomEvent(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_customevent_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_ConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        vqscilexercoffeescript->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperConnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        vqscilexercoffeescript->QsciLexerCoffeeScript::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnConnectNotify(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCoffeeScript_DisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self);
    if (vqscilexercoffeescript) {
        vqscilexercoffeescript->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCoffeeScript_SuperDisconnectNotify(QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self)) {
        vqscilexercoffeescript->QsciLexerCoffeeScript::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCoffeeScript::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCoffeeScript_OnDisconnectNotify(QsciLexerCoffeeScript* self, intptr_t slot) {
    if (auto* vqscilexercoffeescript = dynamic_cast<VirtualQsciLexerCoffeeScript*>(self))
        vqscilexercoffeescript->qscilexercoffeescript_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCoffeeScript::QsciLexerCoffeeScript_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCoffeeScript_TextAsBytes(const QsciLexerCoffeeScript* self, const libqt_string text) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCoffeeScript_BytesAsText(const QsciLexerCoffeeScript* self, const char* bytes, int size) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        auto _ret = vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCoffeeScript_Sender(const QsciLexerCoffeeScript* self) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        return vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::sender();
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCoffeeScript_SenderSignalIndex(const QsciLexerCoffeeScript* self) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        return vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCoffeeScript_Receivers(const QsciLexerCoffeeScript* self, const char* signal) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        return vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCoffeeScript_IsSignalConnected(const QsciLexerCoffeeScript* self, const QMetaMethod* signal) {
    if (auto* vqscilexercoffeescript = const_cast<VirtualQsciLexerCoffeeScript*>(dynamic_cast<const VirtualQsciLexerCoffeeScript*>(self))) {
        return vqscilexercoffeescript->VirtualQsciLexerCoffeeScript::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCoffeeScript::isSignalConnected called without a directly constructed type");
}

void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self) {
    delete self;
}
