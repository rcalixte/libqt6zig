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
#include <qscilexerproperties.h>
#include "libqscilexerproperties.h"
#include "libqscilexerproperties.hxx"

QsciLexerProperties* QsciLexerProperties_new() {
    return new VirtualQsciLexerProperties();
}

QsciLexerProperties* QsciLexerProperties_new2(QObject* parent) {
    return new VirtualQsciLexerProperties(parent);
}

QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerProperties_Metacall(QsciLexerProperties* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerProperties_Tr(const char* s) {
    auto _ret = QsciLexerProperties::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerProperties_Language(const QsciLexerProperties* self) {
    return (const char*)self->language();
}

const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

libqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style) {
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

void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self) {
    self->refreshProperties();
}

bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self) {
    return self->foldCompact();
}

void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable) {
    self->setInitialSpaces(enable);
}

bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self) {
    return self->initialSpaces();
}

void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold) {
    self->setFoldCompact(fold);
}

libqt_string QsciLexerProperties_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerProperties::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerProperties_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerProperties::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerProperties_SuperMetaObject(const QsciLexerProperties* self) {
    return (QMetaObject*)self->QsciLexerProperties::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnMetaObject(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_metaobject_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerProperties_SuperMetacast(QsciLexerProperties* self, const char* param1) {
    return self->QsciLexerProperties::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnMetacast(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_metacast_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerProperties_SuperMetacall(QsciLexerProperties* self, int param1, int param2, void** param3) {
    return self->QsciLexerProperties::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnMetacall(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_metacall_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Metacall_Callback>(slot);
}

// Base class handler implementation
void QsciLexerProperties_SuperSetFoldCompact(QsciLexerProperties* self, bool fold) {
    self->QsciLexerProperties::setFoldCompact(fold);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetFoldCompact(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_setfoldcompact_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetFoldCompact_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_LexerId(const QsciLexerProperties* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerProperties_SuperLexerId(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnLexerId(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_lexerid_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerProperties_AutoCompletionFillups(const QsciLexerProperties* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerProperties_SuperAutoCompletionFillups(const QsciLexerProperties* self) {
    return (const char*)self->QsciLexerProperties::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnAutoCompletionFillups(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerProperties_AutoCompletionWordSeparators(const QsciLexerProperties* self) {
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
libqt_list /* of libqt_string */ QsciLexerProperties_SuperAutoCompletionWordSeparators(const QsciLexerProperties* self) {
    QList<QString> _ret = self->QsciLexerProperties::autoCompletionWordSeparators();
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
void QsciLexerProperties_OnAutoCompletionWordSeparators(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockEnd(const QsciLexerProperties* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerProperties_SuperBlockEnd(const QsciLexerProperties* self, int* style) {
    return (const char*)self->QsciLexerProperties::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockEnd(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_blockend_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_BlockLookback(const QsciLexerProperties* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerProperties_SuperBlockLookback(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockLookback(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_blocklookback_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockStart(const QsciLexerProperties* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerProperties_SuperBlockStart(const QsciLexerProperties* self, int* style) {
    return (const char*)self->QsciLexerProperties::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockStart(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_blockstart_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerProperties_BlockStartKeyword(const QsciLexerProperties* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerProperties_SuperBlockStartKeyword(const QsciLexerProperties* self, int* style) {
    return (const char*)self->QsciLexerProperties::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBlockStartKeyword(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_BraceStyle(const QsciLexerProperties* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerProperties_SuperBraceStyle(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnBraceStyle(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_bracestyle_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_CaseSensitive(const QsciLexerProperties* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerProperties_SuperCaseSensitive(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnCaseSensitive(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_casesensitive_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerProperties_Color(const QsciLexerProperties* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerProperties_SuperColor(const QsciLexerProperties* self, int style) {
    return new QColor(self->QsciLexerProperties::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnColor(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_color_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_EolFill(const QsciLexerProperties* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerProperties_SuperEolFill(const QsciLexerProperties* self, int style) {
    return self->QsciLexerProperties::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEolFill(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_eolfill_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerProperties_Font(const QsciLexerProperties* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerProperties_SuperFont(const QsciLexerProperties* self, int style) {
    return new QFont(self->QsciLexerProperties::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnFont(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_font_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_IndentationGuideView(const QsciLexerProperties* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerProperties_SuperIndentationGuideView(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnIndentationGuideView(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerProperties_Keywords(const QsciLexerProperties* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerProperties_SuperKeywords(const QsciLexerProperties* self, int set) {
    return (const char*)self->QsciLexerProperties::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnKeywords(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_keywords_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_DefaultStyle(const QsciLexerProperties* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerProperties_SuperDefaultStyle(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultStyle(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerProperties_Paper(const QsciLexerProperties* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerProperties_SuperPaper(const QsciLexerProperties* self, int style) {
    return new QColor(self->QsciLexerProperties::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnPaper(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_paper_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerProperties_DefaultColor2(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerProperties_SuperDefaultColor2(const QsciLexerProperties* self, int style) {
    return new QColor(self->QsciLexerProperties::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultColor2(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerProperties_DefaultFont2(const QsciLexerProperties* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerProperties_SuperDefaultFont2(const QsciLexerProperties* self, int style) {
    return new QFont(self->QsciLexerProperties::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultFont2(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerProperties_DefaultPaper2(const QsciLexerProperties* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerProperties_SuperDefaultPaper2(const QsciLexerProperties* self, int style) {
    return new QColor(self->QsciLexerProperties::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDefaultPaper2(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetEditor(QsciLexerProperties* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerProperties_SuperSetEditor(QsciLexerProperties* self, QsciScintilla* editor) {
    self->QsciLexerProperties::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetEditor(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_seteditor_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerProperties_StyleBitsNeeded(const QsciLexerProperties* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerProperties_SuperStyleBitsNeeded(const QsciLexerProperties* self) {
    return self->QsciLexerProperties::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnStyleBitsNeeded(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerProperties_SuperSetAutoIndentStyle(QsciLexerProperties* self, int autoindentstyle) {
    self->QsciLexerProperties::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetAutoIndentStyle(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetColor(QsciLexerProperties* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerProperties_SuperSetColor(QsciLexerProperties* self, const QColor* c, int style) {
    self->QsciLexerProperties::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetColor(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_setcolor_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetEolFill(QsciLexerProperties* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerProperties_SuperSetEolFill(QsciLexerProperties* self, bool eoffill, int style) {
    self->QsciLexerProperties::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetEolFill(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_seteolfill_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetFont(QsciLexerProperties* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerProperties_SuperSetFont(QsciLexerProperties* self, const QFont* f, int style) {
    self->QsciLexerProperties::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetFont(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_setfont_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_SetPaper(QsciLexerProperties* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerProperties_SuperSetPaper(QsciLexerProperties* self, const QColor* c, int style) {
    self->QsciLexerProperties::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnSetPaper(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_setpaper_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_ReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        return vqscilexerproperties->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerProperties_SuperReadProperties(QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        return vqscilexerproperties->QsciLexerProperties::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnReadProperties(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_readproperties_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_WriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self));
    if (vqscilexerproperties) {
        return vqscilexerproperties->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerProperties_SuperWriteProperties(const QsciLexerProperties* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        return vqscilexerproperties->QsciLexerProperties::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnWriteProperties(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self)))
        vqscilexerproperties->qscilexerproperties_writeproperties_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_Event(QsciLexerProperties* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerProperties_SuperEvent(QsciLexerProperties* self, QEvent* event) {
    return self->QsciLexerProperties::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEvent(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_event_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerProperties_EventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerProperties_SuperEventFilter(QsciLexerProperties* self, QObject* watched, QEvent* event) {
    return self->QsciLexerProperties::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnEventFilter(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_eventfilter_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_TimerEvent(QsciLexerProperties* self, QTimerEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        vqscilexerproperties->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerProperties_SuperTimerEvent(QsciLexerProperties* self, QTimerEvent* event) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        vqscilexerproperties->QsciLexerProperties::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnTimerEvent(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_timerevent_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_ChildEvent(QsciLexerProperties* self, QChildEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        vqscilexerproperties->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerProperties_SuperChildEvent(QsciLexerProperties* self, QChildEvent* event) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        vqscilexerproperties->QsciLexerProperties::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnChildEvent(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_childevent_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_CustomEvent(QsciLexerProperties* self, QEvent* event) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        vqscilexerproperties->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerProperties_SuperCustomEvent(QsciLexerProperties* self, QEvent* event) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        vqscilexerproperties->QsciLexerProperties::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnCustomEvent(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_customevent_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_ConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        vqscilexerproperties->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerProperties_SuperConnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        vqscilexerproperties->QsciLexerProperties::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnConnectNotify(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_connectnotify_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerProperties_DisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self);
    if (vqscilexerproperties) {
        vqscilexerproperties->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerProperties::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerProperties_SuperDisconnectNotify(QsciLexerProperties* self, const QMetaMethod* signal) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self)) {
        vqscilexerproperties->QsciLexerProperties::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerProperties::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerProperties_OnDisconnectNotify(QsciLexerProperties* self, intptr_t slot) {
    if (auto* vqscilexerproperties = dynamic_cast<VirtualQsciLexerProperties*>(self))
        vqscilexerproperties->qscilexerproperties_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerProperties::QsciLexerProperties_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerProperties_TextAsBytes(const QsciLexerProperties* self, const libqt_string text) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerproperties->VirtualQsciLexerProperties::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerProperties::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerProperties_BytesAsText(const QsciLexerProperties* self, const char* bytes, int size) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        auto _ret = vqscilexerproperties->VirtualQsciLexerProperties::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerProperties::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerProperties_Sender(const QsciLexerProperties* self) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        return vqscilexerproperties->VirtualQsciLexerProperties::sender();
    } else
        qFatal("Error: Protected method QsciLexerProperties::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerProperties_SenderSignalIndex(const QsciLexerProperties* self) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        return vqscilexerproperties->VirtualQsciLexerProperties::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerProperties::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerProperties_Receivers(const QsciLexerProperties* self, const char* signal) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        return vqscilexerproperties->VirtualQsciLexerProperties::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerProperties::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerProperties_IsSignalConnected(const QsciLexerProperties* self, const QMetaMethod* signal) {
    if (auto* vqscilexerproperties = const_cast<VirtualQsciLexerProperties*>(dynamic_cast<const VirtualQsciLexerProperties*>(self))) {
        return vqscilexerproperties->VirtualQsciLexerProperties::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerProperties::isSignalConnected called without a directly constructed type");
}

void QsciLexerProperties_Delete(QsciLexerProperties* self) {
    delete self;
}
