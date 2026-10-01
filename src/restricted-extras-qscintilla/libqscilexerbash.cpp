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
#include <qscilexerbash.h>
#include "libqscilexerbash.h"
#include "libqscilexerbash.hxx"

QsciLexerBash* QsciLexerBash_new() {
    return new VirtualQsciLexerBash();
}

QsciLexerBash* QsciLexerBash_new2(QObject* parent) {
    return new VirtualQsciLexerBash(parent);
}

QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerBash_Metacall(QsciLexerBash* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerBash_Tr(const char* s) {
    auto _ret = QsciLexerBash::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerBash_Language(const QsciLexerBash* self) {
    return (const char*)self->language();
}

const char* QsciLexerBash_Lexer(const QsciLexerBash* self) {
    return (const char*)self->lexer();
}

int QsciLexerBash_BraceStyle(const QsciLexerBash* self) {
    return self->braceStyle();
}

const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style) {
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

void QsciLexerBash_RefreshProperties(QsciLexerBash* self) {
    self->refreshProperties();
}

bool QsciLexerBash_FoldComments(const QsciLexerBash* self) {
    return self->foldComments();
}

bool QsciLexerBash_FoldCompact(const QsciLexerBash* self) {
    return self->foldCompact();
}

void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold) {
    self->setFoldComments(fold);
}

void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerBash_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerBash::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerBash::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerBash_SuperMetaObject(const QsciLexerBash* self) {
    return (QMetaObject*)self->QsciLexerBash::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnMetaObject(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_metaobject_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerBash_SuperMetacast(QsciLexerBash* self, const char* param1) {
    return self->QsciLexerBash::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnMetacast(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_metacast_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerBash_SuperMetacall(QsciLexerBash* self, int param1, int param2, void** param3) {
    return self->QsciLexerBash::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnMetacall(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_metacall_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerBash_SuperSetFoldComments(QsciLexerBash* self, bool fold) {
    self->QsciLexerBash::setFoldComments(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFoldComments(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setfoldcomments_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFoldComments_Callback>(slot);
}

// Base class handler implementation
void QsciLexerBash_SuperSetFoldCompact(QsciLexerBash* self, bool fold) {
    self->QsciLexerBash::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFoldCompact(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBash_LexerId(const QsciLexerBash* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerBash_SuperLexerId(const QsciLexerBash* self) {
    return self->QsciLexerBash::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnLexerId(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_lexerid_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBash_AutoCompletionFillups(const QsciLexerBash* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerBash_SuperAutoCompletionFillups(const QsciLexerBash* self) {
    return (const char*)self->QsciLexerBash::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnAutoCompletionFillups(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerBash_AutoCompletionWordSeparators(const QsciLexerBash* self) {
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
libqt_list /* of libqt_string */ QsciLexerBash_SuperAutoCompletionWordSeparators(const QsciLexerBash* self) {
    QList<QString> _ret = self->QsciLexerBash::autoCompletionWordSeparators();
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
void QsciLexerBash_OnAutoCompletionWordSeparators(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBash_BlockEnd(const QsciLexerBash* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBash_SuperBlockEnd(const QsciLexerBash* self, int* style) {
    return (const char*)self->QsciLexerBash::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockEnd(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_blockend_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBash_BlockLookback(const QsciLexerBash* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerBash_SuperBlockLookback(const QsciLexerBash* self) {
    return self->QsciLexerBash::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockLookback(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_blocklookback_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBash_BlockStart(const QsciLexerBash* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBash_SuperBlockStart(const QsciLexerBash* self, int* style) {
    return (const char*)self->QsciLexerBash::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockStart(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_blockstart_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerBash_BlockStartKeyword(const QsciLexerBash* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerBash_SuperBlockStartKeyword(const QsciLexerBash* self, int* style) {
    return (const char*)self->QsciLexerBash::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnBlockStartKeyword(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_CaseSensitive(const QsciLexerBash* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerBash_SuperCaseSensitive(const QsciLexerBash* self) {
    return self->QsciLexerBash::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnCaseSensitive(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_casesensitive_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBash_Color(const QsciLexerBash* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBash_SuperColor(const QsciLexerBash* self, int style) {
    return new QColor(self->QsciLexerBash::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnColor(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_color_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_EolFill(const QsciLexerBash* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerBash_SuperEolFill(const QsciLexerBash* self, int style) {
    return self->QsciLexerBash::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEolFill(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_eolfill_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerBash_Font(const QsciLexerBash* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerBash_SuperFont(const QsciLexerBash* self, int style) {
    return new QFont(self->QsciLexerBash::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnFont(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_font_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBash_IndentationGuideView(const QsciLexerBash* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerBash_SuperIndentationGuideView(const QsciLexerBash* self) {
    return self->QsciLexerBash::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnIndentationGuideView(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBash_DefaultStyle(const QsciLexerBash* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerBash_SuperDefaultStyle(const QsciLexerBash* self) {
    return self->QsciLexerBash::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultStyle(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBash_Paper(const QsciLexerBash* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBash_SuperPaper(const QsciLexerBash* self, int style) {
    return new QColor(self->QsciLexerBash::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnPaper(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_paper_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBash_DefaultColor2(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBash_SuperDefaultColor2(const QsciLexerBash* self, int style) {
    return new QColor(self->QsciLexerBash::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultColor2(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerBash_DefaultFont2(const QsciLexerBash* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerBash_SuperDefaultFont2(const QsciLexerBash* self, int style) {
    return new QFont(self->QsciLexerBash::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultFont2(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerBash_DefaultPaper2(const QsciLexerBash* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerBash_SuperDefaultPaper2(const QsciLexerBash* self, int style) {
    return new QColor(self->QsciLexerBash::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDefaultPaper2(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetEditor(QsciLexerBash* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerBash_SuperSetEditor(QsciLexerBash* self, QsciScintilla* editor) {
    self->QsciLexerBash::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetEditor(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_seteditor_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerBash_StyleBitsNeeded(const QsciLexerBash* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerBash_SuperStyleBitsNeeded(const QsciLexerBash* self) {
    return self->QsciLexerBash::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnStyleBitsNeeded(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerBash_SuperSetAutoIndentStyle(QsciLexerBash* self, int autoindentstyle) {
    self->QsciLexerBash::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetAutoIndentStyle(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetColor(QsciLexerBash* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBash_SuperSetColor(QsciLexerBash* self, const QColor* c, int style) {
    self->QsciLexerBash::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetColor(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setcolor_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetEolFill(QsciLexerBash* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBash_SuperSetEolFill(QsciLexerBash* self, bool eoffill, int style) {
    self->QsciLexerBash::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetEolFill(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_seteolfill_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetFont(QsciLexerBash* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBash_SuperSetFont(QsciLexerBash* self, const QFont* f, int style) {
    self->QsciLexerBash::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetFont(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setfont_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_SetPaper(QsciLexerBash* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerBash_SuperSetPaper(QsciLexerBash* self, const QColor* c, int style) {
    self->QsciLexerBash::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnSetPaper(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_setpaper_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_ReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        return vqscilexerbash->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerBash_SuperReadProperties(QsciLexerBash* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        return vqscilexerbash->QsciLexerBash::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnReadProperties(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_readproperties_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_WriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self));
    if (vqscilexerbash) {
        return vqscilexerbash->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerBash_SuperWriteProperties(const QsciLexerBash* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->QsciLexerBash::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnWriteProperties(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self)))
        vqscilexerbash->qscilexerbash_writeproperties_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_Event(QsciLexerBash* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerBash_SuperEvent(QsciLexerBash* self, QEvent* event) {
    return self->QsciLexerBash::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_event_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerBash_EventFilter(QsciLexerBash* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerBash_SuperEventFilter(QsciLexerBash* self, QObject* watched, QEvent* event) {
    return self->QsciLexerBash::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnEventFilter(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_eventfilter_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_TimerEvent(QsciLexerBash* self, QTimerEvent* event) {
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        vqscilexerbash->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBash_SuperTimerEvent(QsciLexerBash* self, QTimerEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->QsciLexerBash::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnTimerEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_timerevent_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_ChildEvent(QsciLexerBash* self, QChildEvent* event) {
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        vqscilexerbash->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBash_SuperChildEvent(QsciLexerBash* self, QChildEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->QsciLexerBash::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnChildEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_childevent_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_CustomEvent(QsciLexerBash* self, QEvent* event) {
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        vqscilexerbash->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBash_SuperCustomEvent(QsciLexerBash* self, QEvent* event) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->QsciLexerBash::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnCustomEvent(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_customevent_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_ConnectNotify(QsciLexerBash* self, const QMetaMethod* signal) {
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        vqscilexerbash->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBash_SuperConnectNotify(QsciLexerBash* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->QsciLexerBash::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnConnectNotify(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_connectnotify_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerBash_DisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal) {
    auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self);
    if (vqscilexerbash) {
        vqscilexerbash->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerBash::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerBash_SuperDisconnectNotify(QsciLexerBash* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self)) {
        vqscilexerbash->QsciLexerBash::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerBash::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerBash_OnDisconnectNotify(QsciLexerBash* self, intptr_t slot) {
    if (auto* vqscilexerbash = dynamic_cast<VirtualQsciLexerBash*>(self))
        vqscilexerbash->qscilexerbash_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerBash::QsciLexerBash_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerBash_TextAsBytes(const QsciLexerBash* self, const libqt_string text) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerbash->VirtualQsciLexerBash::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerBash::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerBash_BytesAsText(const QsciLexerBash* self, const char* bytes, int size) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        auto _ret = vqscilexerbash->VirtualQsciLexerBash::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerBash::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerBash_Sender(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->VirtualQsciLexerBash::sender();
    } else
        qFatal("Error: Protected method QsciLexerBash::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerBash_SenderSignalIndex(const QsciLexerBash* self) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->VirtualQsciLexerBash::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerBash::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerBash_Receivers(const QsciLexerBash* self, const char* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->VirtualQsciLexerBash::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerBash::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerBash_IsSignalConnected(const QsciLexerBash* self, const QMetaMethod* signal) {
    if (auto* vqscilexerbash = const_cast<VirtualQsciLexerBash*>(dynamic_cast<const VirtualQsciLexerBash*>(self))) {
        return vqscilexerbash->VirtualQsciLexerBash::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerBash::isSignalConnected called without a directly constructed type");
}

void QsciLexerBash_Delete(QsciLexerBash* self) {
    delete self;
}
