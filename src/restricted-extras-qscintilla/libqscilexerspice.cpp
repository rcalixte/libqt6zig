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
#include <qscilexerspice.h>
#include "libqscilexerspice.h"
#include "libqscilexerspice.hxx"

QsciLexerSpice* QsciLexerSpice_new() {
    return new VirtualQsciLexerSpice();
}

QsciLexerSpice* QsciLexerSpice_new2(QObject* parent) {
    return new VirtualQsciLexerSpice(parent);
}

QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerSpice_Metacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerSpice_Tr(const char* s) {
    auto _ret = QsciLexerSpice::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerSpice_Language(const QsciLexerSpice* self) {
    return (const char*)self->language();
}

const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self) {
    return (const char*)self->lexer();
}

int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self) {
    return self->braceStyle();
}

const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

libqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style) {
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

libqt_string QsciLexerSpice_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerSpice::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerSpice::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerSpice_SuperMetaObject(const QsciLexerSpice* self) {
    return (QMetaObject*)self->QsciLexerSpice::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnMetaObject(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_metaobject_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerSpice_SuperMetacast(QsciLexerSpice* self, const char* param1) {
    return self->QsciLexerSpice::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnMetacast(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_metacast_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerSpice_SuperMetacall(QsciLexerSpice* self, int param1, int param2, void** param3) {
    return self->QsciLexerSpice::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnMetacall(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_metacall_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSpice_LexerId(const QsciLexerSpice* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerSpice_SuperLexerId(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnLexerId(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_lexerid_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSpice_AutoCompletionFillups(const QsciLexerSpice* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerSpice_SuperAutoCompletionFillups(const QsciLexerSpice* self) {
    return (const char*)self->QsciLexerSpice::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnAutoCompletionFillups(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerSpice_AutoCompletionWordSeparators(const QsciLexerSpice* self) {
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
libqt_list /* of libqt_string */ QsciLexerSpice_SuperAutoCompletionWordSeparators(const QsciLexerSpice* self) {
    QList<QString> _ret = self->QsciLexerSpice::autoCompletionWordSeparators();
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
void QsciLexerSpice_OnAutoCompletionWordSeparators(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockEnd(const QsciLexerSpice* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSpice_SuperBlockEnd(const QsciLexerSpice* self, int* style) {
    return (const char*)self->QsciLexerSpice::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockEnd(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_blockend_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSpice_BlockLookback(const QsciLexerSpice* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerSpice_SuperBlockLookback(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockLookback(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_blocklookback_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStart(const QsciLexerSpice* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSpice_SuperBlockStart(const QsciLexerSpice* self, int* style) {
    return (const char*)self->QsciLexerSpice::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStart(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_blockstart_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSpice_BlockStartKeyword(const QsciLexerSpice* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerSpice_SuperBlockStartKeyword(const QsciLexerSpice* self, int* style) {
    return (const char*)self->QsciLexerSpice::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnBlockStartKeyword(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_CaseSensitive(const QsciLexerSpice* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerSpice_SuperCaseSensitive(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCaseSensitive(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_casesensitive_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSpice_Color(const QsciLexerSpice* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSpice_SuperColor(const QsciLexerSpice* self, int style) {
    return new QColor(self->QsciLexerSpice::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnColor(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_color_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_EolFill(const QsciLexerSpice* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerSpice_SuperEolFill(const QsciLexerSpice* self, int style) {
    return self->QsciLexerSpice::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEolFill(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_eolfill_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSpice_Font(const QsciLexerSpice* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSpice_SuperFont(const QsciLexerSpice* self, int style) {
    return new QFont(self->QsciLexerSpice::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnFont(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_font_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSpice_IndentationGuideView(const QsciLexerSpice* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerSpice_SuperIndentationGuideView(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnIndentationGuideView(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSpice_DefaultStyle(const QsciLexerSpice* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerSpice_SuperDefaultStyle(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultStyle(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSpice_Paper(const QsciLexerSpice* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSpice_SuperPaper(const QsciLexerSpice* self, int style) {
    return new QColor(self->QsciLexerSpice::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnPaper(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_paper_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultColor2(const QsciLexerSpice* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSpice_SuperDefaultColor2(const QsciLexerSpice* self, int style) {
    return new QColor(self->QsciLexerSpice::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultColor2(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_DefaultEolFill(const QsciLexerSpice* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerSpice_SuperDefaultEolFill(const QsciLexerSpice* self, int style) {
    return self->QsciLexerSpice::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultEolFill(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerSpice_DefaultFont2(const QsciLexerSpice* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerSpice_SuperDefaultFont2(const QsciLexerSpice* self, int style) {
    return new QFont(self->QsciLexerSpice::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultFont2(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerSpice_DefaultPaper2(const QsciLexerSpice* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerSpice_SuperDefaultPaper2(const QsciLexerSpice* self, int style) {
    return new QColor(self->QsciLexerSpice::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDefaultPaper2(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerSpice_SuperSetEditor(QsciLexerSpice* self, QsciScintilla* editor) {
    self->QsciLexerSpice::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEditor(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_seteditor_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEditor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_RefreshProperties(QsciLexerSpice* self) {
    self->refreshProperties();
}

// Base class handler implementation
void QsciLexerSpice_SuperRefreshProperties(QsciLexerSpice* self) {
    self->QsciLexerSpice::refreshProperties();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnRefreshProperties(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_refreshproperties_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_RefreshProperties_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerSpice_StyleBitsNeeded(const QsciLexerSpice* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerSpice_SuperStyleBitsNeeded(const QsciLexerSpice* self) {
    return self->QsciLexerSpice::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnStyleBitsNeeded(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerSpice_WordCharacters(const QsciLexerSpice* self) {
    return (const char*)self->wordCharacters();
}

// Base class handler implementation
const char* QsciLexerSpice_SuperWordCharacters(const QsciLexerSpice* self) {
    return (const char*)self->QsciLexerSpice::wordCharacters();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWordCharacters(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_wordcharacters_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WordCharacters_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerSpice_SuperSetAutoIndentStyle(QsciLexerSpice* self, int autoindentstyle) {
    self->QsciLexerSpice::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetAutoIndentStyle(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetColor(QsciLexerSpice* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSpice_SuperSetColor(QsciLexerSpice* self, const QColor* c, int style) {
    self->QsciLexerSpice::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetColor(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_setcolor_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSpice_SuperSetEolFill(QsciLexerSpice* self, bool eoffill, int style) {
    self->QsciLexerSpice::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetEolFill(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_seteolfill_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetFont(QsciLexerSpice* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSpice_SuperSetFont(QsciLexerSpice* self, const QFont* f, int style) {
    self->QsciLexerSpice::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetFont(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_setfont_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_SetPaper(QsciLexerSpice* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerSpice_SuperSetPaper(QsciLexerSpice* self, const QColor* c, int style) {
    self->QsciLexerSpice::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnSetPaper(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_setpaper_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_ReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        return vqscilexerspice->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSpice_SuperReadProperties(QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        return vqscilexerspice->QsciLexerSpice::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnReadProperties(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_readproperties_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_WriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self));
    if (vqscilexerspice) {
        return vqscilexerspice->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerSpice_SuperWriteProperties(const QsciLexerSpice* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->QsciLexerSpice::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnWriteProperties(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self)))
        vqscilexerspice->qscilexerspice_writeproperties_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_Event(QsciLexerSpice* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerSpice_SuperEvent(QsciLexerSpice* self, QEvent* event) {
    return self->QsciLexerSpice::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_event_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerSpice_EventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerSpice_SuperEventFilter(QsciLexerSpice* self, QObject* watched, QEvent* event) {
    return self->QsciLexerSpice::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnEventFilter(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_eventfilter_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_TimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        vqscilexerspice->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSpice_SuperTimerEvent(QsciLexerSpice* self, QTimerEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->QsciLexerSpice::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnTimerEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_timerevent_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_ChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        vqscilexerspice->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSpice_SuperChildEvent(QsciLexerSpice* self, QChildEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->QsciLexerSpice::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnChildEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_childevent_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_CustomEvent(QsciLexerSpice* self, QEvent* event) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        vqscilexerspice->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSpice_SuperCustomEvent(QsciLexerSpice* self, QEvent* event) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->QsciLexerSpice::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnCustomEvent(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_customevent_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_ConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        vqscilexerspice->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSpice_SuperConnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->QsciLexerSpice::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnConnectNotify(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_connectnotify_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerSpice_DisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self);
    if (vqscilexerspice) {
        vqscilexerspice->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerSpice::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerSpice_SuperDisconnectNotify(QsciLexerSpice* self, const QMetaMethod* signal) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self)) {
        vqscilexerspice->QsciLexerSpice::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerSpice::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerSpice_OnDisconnectNotify(QsciLexerSpice* self, intptr_t slot) {
    if (auto* vqscilexerspice = dynamic_cast<VirtualQsciLexerSpice*>(self))
        vqscilexerspice->qscilexerspice_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerSpice::QsciLexerSpice_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerSpice_TextAsBytes(const QsciLexerSpice* self, const libqt_string text) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerspice->VirtualQsciLexerSpice::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSpice::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerSpice_BytesAsText(const QsciLexerSpice* self, const char* bytes, int size) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        auto _ret = vqscilexerspice->VirtualQsciLexerSpice::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerSpice::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerSpice_Sender(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->VirtualQsciLexerSpice::sender();
    } else
        qFatal("Error: Protected method QsciLexerSpice::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSpice_SenderSignalIndex(const QsciLexerSpice* self) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->VirtualQsciLexerSpice::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerSpice::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerSpice_Receivers(const QsciLexerSpice* self, const char* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->VirtualQsciLexerSpice::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerSpice::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerSpice_IsSignalConnected(const QsciLexerSpice* self, const QMetaMethod* signal) {
    if (auto* vqscilexerspice = const_cast<VirtualQsciLexerSpice*>(dynamic_cast<const VirtualQsciLexerSpice*>(self))) {
        return vqscilexerspice->VirtualQsciLexerSpice::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerSpice::isSignalConnected called without a directly constructed type");
}

void QsciLexerSpice_Delete(QsciLexerSpice* self) {
    delete self;
}
