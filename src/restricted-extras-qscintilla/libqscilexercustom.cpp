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
#include <qscilexercustom.h>
#include "libqscilexercustom.h"
#include "libqscilexercustom.hxx"

QsciLexerCustom* QsciLexerCustom_new() {
    return new VirtualQsciLexerCustom();
}

QsciLexerCustom* QsciLexerCustom_new2(QObject* parent) {
    return new VirtualQsciLexerCustom(parent);
}

QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerCustom_Metacall(QsciLexerCustom* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerCustom_Tr(const char* s) {
    auto _ret = QsciLexerCustom::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style) {
    self->setStyling(static_cast<int>(length), static_cast<int>(style));
}

void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, const QsciStyle* style) {
    self->setStyling(static_cast<int>(length), *style);
}

void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos) {
    self->startStyling(static_cast<int>(pos));
}

void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end) {
    self->styleText(static_cast<int>(start), static_cast<int>(end));
}

void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self) {
    return self->styleBitsNeeded();
}

libqt_string QsciLexerCustom_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerCustom::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerCustom::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits) {
    self->startStyling(static_cast<int>(pos), static_cast<int>(styleBits));
}

// Base class handler implementation
QMetaObject* QsciLexerCustom_SuperMetaObject(const QsciLexerCustom* self) {
    return (QMetaObject*)self->QsciLexerCustom::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnMetaObject(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_metaobject_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerCustom_SuperMetacast(QsciLexerCustom* self, const char* param1) {
    return self->QsciLexerCustom::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnMetacast(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_metacast_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCustom_SuperMetacall(QsciLexerCustom* self, int param1, int param2, void** param3) {
    return self->QsciLexerCustom::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnMetacall(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_metacall_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnStyleText(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_styletext_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_StyleText_Callback>(slot);
}

// Base class handler implementation
void QsciLexerCustom_SuperSetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
    self->QsciLexerCustom::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetEditor(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_seteditor_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetEditor_Callback>(slot);
}

// Base class handler implementation
int QsciLexerCustom_SuperStyleBitsNeeded(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnStyleBitsNeeded(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_Language(const QsciLexerCustom* self) {
    return (const char*)self->language();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLanguage(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_language_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Language_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_Lexer(const QsciLexerCustom* self) {
    return (const char*)self->lexer();
}

// Base class handler implementation
const char* QsciLexerCustom_SuperLexer(const QsciLexerCustom* self) {
    return (const char*)self->QsciLexerCustom::lexer();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLexer(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_lexer_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Lexer_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCustom_LexerId(const QsciLexerCustom* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerCustom_SuperLexerId(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnLexerId(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_lexerid_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_AutoCompletionFillups(const QsciLexerCustom* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerCustom_SuperAutoCompletionFillups(const QsciLexerCustom* self) {
    return (const char*)self->QsciLexerCustom::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnAutoCompletionFillups(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerCustom_AutoCompletionWordSeparators(const QsciLexerCustom* self) {
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
libqt_list /* of libqt_string */ QsciLexerCustom_SuperAutoCompletionWordSeparators(const QsciLexerCustom* self) {
    QList<QString> _ret = self->QsciLexerCustom::autoCompletionWordSeparators();
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
void QsciLexerCustom_OnAutoCompletionWordSeparators(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockEnd(const QsciLexerCustom* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCustom_SuperBlockEnd(const QsciLexerCustom* self, int* style) {
    return (const char*)self->QsciLexerCustom::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockEnd(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_blockend_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCustom_BlockLookback(const QsciLexerCustom* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerCustom_SuperBlockLookback(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockLookback(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_blocklookback_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockStart(const QsciLexerCustom* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCustom_SuperBlockStart(const QsciLexerCustom* self, int* style) {
    return (const char*)self->QsciLexerCustom::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockStart(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_blockstart_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_BlockStartKeyword(const QsciLexerCustom* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerCustom_SuperBlockStartKeyword(const QsciLexerCustom* self, int* style) {
    return (const char*)self->QsciLexerCustom::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBlockStartKeyword(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCustom_BraceStyle(const QsciLexerCustom* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerCustom_SuperBraceStyle(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnBraceStyle(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_bracestyle_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_CaseSensitive(const QsciLexerCustom* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerCustom_SuperCaseSensitive(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnCaseSensitive(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_casesensitive_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCustom_Color(const QsciLexerCustom* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCustom_SuperColor(const QsciLexerCustom* self, int style) {
    return new QColor(self->QsciLexerCustom::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnColor(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_color_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_EolFill(const QsciLexerCustom* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCustom_SuperEolFill(const QsciLexerCustom* self, int style) {
    return self->QsciLexerCustom::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEolFill(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_eolfill_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCustom_Font(const QsciLexerCustom* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCustom_SuperFont(const QsciLexerCustom* self, int style) {
    return new QFont(self->QsciLexerCustom::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnFont(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_font_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCustom_IndentationGuideView(const QsciLexerCustom* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerCustom_SuperIndentationGuideView(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnIndentationGuideView(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_Keywords(const QsciLexerCustom* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

// Base class handler implementation
const char* QsciLexerCustom_SuperKeywords(const QsciLexerCustom* self, int set) {
    return (const char*)self->QsciLexerCustom::keywords(static_cast<int>(set));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnKeywords(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_keywords_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Keywords_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerCustom_DefaultStyle(const QsciLexerCustom* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerCustom_SuperDefaultStyle(const QsciLexerCustom* self) {
    return self->QsciLexerCustom::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultStyle(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
libqt_string QsciLexerCustom_Description(const QsciLexerCustom* self, int style) {
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
void QsciLexerCustom_OnDescription(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_description_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Description_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCustom_Paper(const QsciLexerCustom* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCustom_SuperPaper(const QsciLexerCustom* self, int style) {
    return new QColor(self->QsciLexerCustom::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnPaper(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_paper_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCustom_DefaultColor2(const QsciLexerCustom* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCustom_SuperDefaultColor2(const QsciLexerCustom* self, int style) {
    return new QColor(self->QsciLexerCustom::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultColor2(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_DefaultEolFill(const QsciLexerCustom* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerCustom_SuperDefaultEolFill(const QsciLexerCustom* self, int style) {
    return self->QsciLexerCustom::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultEolFill(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerCustom_DefaultFont2(const QsciLexerCustom* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerCustom_SuperDefaultFont2(const QsciLexerCustom* self, int style) {
    return new QFont(self->QsciLexerCustom::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultFont2(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerCustom_DefaultPaper2(const QsciLexerCustom* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerCustom_SuperDefaultPaper2(const QsciLexerCustom* self, int style) {
    return new QColor(self->QsciLexerCustom::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDefaultPaper2(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_RefreshProperties(QsciLexerCustom* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerCustom_SuperRefreshProperties(QsciLexerCustom* self) {
    self->QsciLexerCustom::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnRefreshProperties(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerCustom_WordCharacters(const QsciLexerCustom* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerCustom_SuperWordCharacters(const QsciLexerCustom* self) {
    return (const char*)self->QsciLexerCustom::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnWordCharacters(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_SetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerCustom_SuperSetAutoIndentStyle(QsciLexerCustom* self, int autoindentstyle) {
    self->QsciLexerCustom::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetAutoIndentStyle(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_SetColor(QsciLexerCustom* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCustom_SuperSetColor(QsciLexerCustom* self, const QColor* c, int style) {
    self->QsciLexerCustom::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetColor(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_setcolor_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_SetEolFill(QsciLexerCustom* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCustom_SuperSetEolFill(QsciLexerCustom* self, bool eoffill, int style) {
    self->QsciLexerCustom::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetEolFill(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_seteolfill_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_SetFont(QsciLexerCustom* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCustom_SuperSetFont(QsciLexerCustom* self, const QFont* f, int style) {
    self->QsciLexerCustom::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetFont(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_setfont_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_SetPaper(QsciLexerCustom* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerCustom_SuperSetPaper(QsciLexerCustom* self, const QColor* c, int style) {
    self->QsciLexerCustom::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnSetPaper(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_setpaper_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_ReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        return vqscilexercustom->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCustom_SuperReadProperties(QsciLexerCustom* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        return vqscilexercustom->QsciLexerCustom::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnReadProperties(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_readproperties_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_WriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self));
    if (vqscilexercustom) {
        return vqscilexercustom->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerCustom_SuperWriteProperties(const QsciLexerCustom* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->QsciLexerCustom::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnWriteProperties(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self)))
        vqscilexercustom->qscilexercustom_writeproperties_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_Event(QsciLexerCustom* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerCustom_SuperEvent(QsciLexerCustom* self, QEvent* event) {
    return self->QsciLexerCustom::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_event_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerCustom_EventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerCustom_SuperEventFilter(QsciLexerCustom* self, QObject* watched, QEvent* event) {
    return self->QsciLexerCustom::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnEventFilter(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_eventfilter_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_TimerEvent(QsciLexerCustom* self, QTimerEvent* event) {
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        vqscilexercustom->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCustom_SuperTimerEvent(QsciLexerCustom* self, QTimerEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->QsciLexerCustom::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnTimerEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_timerevent_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_ChildEvent(QsciLexerCustom* self, QChildEvent* event) {
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        vqscilexercustom->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCustom_SuperChildEvent(QsciLexerCustom* self, QChildEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->QsciLexerCustom::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnChildEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_childevent_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_CustomEvent(QsciLexerCustom* self, QEvent* event) {
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        vqscilexercustom->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCustom_SuperCustomEvent(QsciLexerCustom* self, QEvent* event) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->QsciLexerCustom::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnCustomEvent(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_customevent_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_ConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal) {
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        vqscilexercustom->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCustom_SuperConnectNotify(QsciLexerCustom* self, const QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->QsciLexerCustom::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnConnectNotify(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_connectnotify_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerCustom_DisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal) {
    auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self);
    if (vqscilexercustom) {
        vqscilexercustom->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerCustom::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerCustom_SuperDisconnectNotify(QsciLexerCustom* self, const QMetaMethod* signal) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self)) {
        vqscilexercustom->QsciLexerCustom::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerCustom::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerCustom_OnDisconnectNotify(QsciLexerCustom* self, intptr_t slot) {
    if (auto* vqscilexercustom = dynamic_cast<VirtualQsciLexerCustom*>(self))
        vqscilexercustom->qscilexercustom_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerCustom::QsciLexerCustom_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerCustom_TextAsBytes(const QsciLexerCustom* self, const libqt_string text) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexercustom->VirtualQsciLexerCustom::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCustom::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerCustom_BytesAsText(const QsciLexerCustom* self, const char* bytes, int size) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        auto _ret = vqscilexercustom->VirtualQsciLexerCustom::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerCustom::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerCustom_Sender(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->VirtualQsciLexerCustom::sender();
    } else
        qFatal("Error: Protected method QsciLexerCustom::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCustom_SenderSignalIndex(const QsciLexerCustom* self) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->VirtualQsciLexerCustom::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerCustom::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerCustom_Receivers(const QsciLexerCustom* self, const char* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->VirtualQsciLexerCustom::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerCustom::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerCustom_IsSignalConnected(const QsciLexerCustom* self, const QMetaMethod* signal) {
    if (auto* vqscilexercustom = const_cast<VirtualQsciLexerCustom*>(dynamic_cast<const VirtualQsciLexerCustom*>(self))) {
        return vqscilexercustom->VirtualQsciLexerCustom::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerCustom::isSignalConnected called without a directly constructed type");
}

void QsciLexerCustom_Delete(QsciLexerCustom* self) {
    delete self;
}
