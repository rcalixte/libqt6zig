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
#include <qscilexerverilog.h>
#include "libqscilexerverilog.h"
#include "libqscilexerverilog.hxx"

QsciLexerVerilog* QsciLexerVerilog_new() {
    return new VirtualQsciLexerVerilog();
}

QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent) {
    return new VirtualQsciLexerVerilog(parent);
}

QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerVerilog_Metacall(QsciLexerVerilog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerVerilog_Tr(const char* s) {
    auto _ret = QsciLexerVerilog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self) {
    return (const char*)self->language();
}

const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self) {
    return (const char*)self->lexer();
}

int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self) {
    return self->braceStyle();
}

const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style) {
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

void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self) {
    self->refreshProperties();
}

void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold) {
    self->setFoldAtElse(fold);
}

bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self) {
    return self->foldAtElse();
}

void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self) {
    return self->foldComments();
}

void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self) {
    return self->foldCompact();
}

void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold) {
    self->setFoldPreprocessor(fold);
}

bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self) {
    return self->foldPreprocessor();
}

void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold) {
    self->setFoldAtModule(fold);
}

bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self) {
    return self->foldAtModule();
}

libqt_string QsciLexerVerilog_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerVerilog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerVerilog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerVerilog_SuperMetaObject(const QsciLexerVerilog* self) {
    return (QMetaObject*)self->QsciLexerVerilog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnMetaObject(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_metaobject_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerVerilog_SuperMetacast(QsciLexerVerilog* self, const char* param1) {
    return self->QsciLexerVerilog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnMetacast(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_metacast_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerVerilog_SuperMetacall(QsciLexerVerilog* self, int param1, int param2, void** param3) {
    return self->QsciLexerVerilog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnMetacall(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_metacall_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVerilog_LexerId(const QsciLexerVerilog* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerVerilog_SuperLexerId(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnLexerId(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_lexerid_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVerilog_AutoCompletionFillups(const QsciLexerVerilog* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerVerilog_SuperAutoCompletionFillups(const QsciLexerVerilog* self) {
    return (const char*)self->QsciLexerVerilog::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnAutoCompletionFillups(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerVerilog_AutoCompletionWordSeparators(const QsciLexerVerilog* self) {
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
libqt_list /* of libqt_string */ QsciLexerVerilog_SuperAutoCompletionWordSeparators(const QsciLexerVerilog* self) {
    QList<QString> _ret = self->QsciLexerVerilog::autoCompletionWordSeparators();
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
void QsciLexerVerilog_OnAutoCompletionWordSeparators(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockEnd(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVerilog_SuperBlockEnd(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->QsciLexerVerilog::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockEnd(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_blockend_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVerilog_BlockLookback(const QsciLexerVerilog* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerVerilog_SuperBlockLookback(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockLookback(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_blocklookback_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockStart(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVerilog_SuperBlockStart(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->QsciLexerVerilog::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockStart(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_blockstart_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerVerilog_BlockStartKeyword(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerVerilog_SuperBlockStartKeyword(const QsciLexerVerilog* self, int* style) {
    return (const char*)self->QsciLexerVerilog::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnBlockStartKeyword(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_CaseSensitive(const QsciLexerVerilog* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerVerilog_SuperCaseSensitive(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnCaseSensitive(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_casesensitive_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVerilog_Color(const QsciLexerVerilog* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVerilog_SuperColor(const QsciLexerVerilog* self, int style) {
    return new QColor(self->QsciLexerVerilog::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnColor(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_color_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_EolFill(const QsciLexerVerilog* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerVerilog_SuperEolFill(const QsciLexerVerilog* self, int style) {
    return self->QsciLexerVerilog::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEolFill(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_eolfill_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerVerilog_Font(const QsciLexerVerilog* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerVerilog_SuperFont(const QsciLexerVerilog* self, int style) {
    return new QFont(self->QsciLexerVerilog::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnFont(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_font_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVerilog_IndentationGuideView(const QsciLexerVerilog* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerVerilog_SuperIndentationGuideView(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnIndentationGuideView(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVerilog_DefaultStyle(const QsciLexerVerilog* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerVerilog_SuperDefaultStyle(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultStyle(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVerilog_Paper(const QsciLexerVerilog* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVerilog_SuperPaper(const QsciLexerVerilog* self, int style) {
    return new QColor(self->QsciLexerVerilog::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnPaper(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_paper_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVerilog_DefaultColor2(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVerilog_SuperDefaultColor2(const QsciLexerVerilog* self, int style) {
    return new QColor(self->QsciLexerVerilog::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultColor2(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerVerilog_DefaultFont2(const QsciLexerVerilog* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerVerilog_SuperDefaultFont2(const QsciLexerVerilog* self, int style) {
    return new QFont(self->QsciLexerVerilog::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultFont2(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerVerilog_DefaultPaper2(const QsciLexerVerilog* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerVerilog_SuperDefaultPaper2(const QsciLexerVerilog* self, int style) {
    return new QColor(self->QsciLexerVerilog::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDefaultPaper2(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetEditor(QsciLexerVerilog* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetEditor(QsciLexerVerilog* self, QsciScintilla* editor) {
    self->QsciLexerVerilog::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetEditor(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_seteditor_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerVerilog_StyleBitsNeeded(const QsciLexerVerilog* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerVerilog_SuperStyleBitsNeeded(const QsciLexerVerilog* self) {
    return self->QsciLexerVerilog::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnStyleBitsNeeded(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetAutoIndentStyle(QsciLexerVerilog* self, int autoindentstyle) {
    self->QsciLexerVerilog::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetAutoIndentStyle(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetColor(QsciLexerVerilog* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetColor(QsciLexerVerilog* self, const QColor* c, int style) {
    self->QsciLexerVerilog::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetColor(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_setcolor_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetEolFill(QsciLexerVerilog* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetEolFill(QsciLexerVerilog* self, bool eoffill, int style) {
    self->QsciLexerVerilog::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetEolFill(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_seteolfill_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetFont(QsciLexerVerilog* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetFont(QsciLexerVerilog* self, const QFont* f, int style) {
    self->QsciLexerVerilog::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetFont(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_setfont_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_SetPaper(QsciLexerVerilog* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerVerilog_SuperSetPaper(QsciLexerVerilog* self, const QColor* c, int style) {
    self->QsciLexerVerilog::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnSetPaper(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_setpaper_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_ReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        return vqscilexerverilog->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerVerilog_SuperReadProperties(QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        return vqscilexerverilog->QsciLexerVerilog::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnReadProperties(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_readproperties_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_WriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self));
    if (vqscilexerverilog) {
        return vqscilexerverilog->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerVerilog_SuperWriteProperties(const QsciLexerVerilog* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        return vqscilexerverilog->QsciLexerVerilog::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnWriteProperties(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self)))
        vqscilexerverilog->qscilexerverilog_writeproperties_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_Event(QsciLexerVerilog* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerVerilog_SuperEvent(QsciLexerVerilog* self, QEvent* event) {
    return self->QsciLexerVerilog::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEvent(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_event_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerVerilog_EventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerVerilog_SuperEventFilter(QsciLexerVerilog* self, QObject* watched, QEvent* event) {
    return self->QsciLexerVerilog::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnEventFilter(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_eventfilter_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_TimerEvent(QsciLexerVerilog* self, QTimerEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        vqscilexerverilog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVerilog_SuperTimerEvent(QsciLexerVerilog* self, QTimerEvent* event) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        vqscilexerverilog->QsciLexerVerilog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnTimerEvent(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_timerevent_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_ChildEvent(QsciLexerVerilog* self, QChildEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        vqscilexerverilog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVerilog_SuperChildEvent(QsciLexerVerilog* self, QChildEvent* event) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        vqscilexerverilog->QsciLexerVerilog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnChildEvent(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_childevent_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_CustomEvent(QsciLexerVerilog* self, QEvent* event) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        vqscilexerverilog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVerilog_SuperCustomEvent(QsciLexerVerilog* self, QEvent* event) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        vqscilexerverilog->QsciLexerVerilog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnCustomEvent(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_customevent_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_ConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        vqscilexerverilog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVerilog_SuperConnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        vqscilexerverilog->QsciLexerVerilog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnConnectNotify(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_connectnotify_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerVerilog_DisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self);
    if (vqscilexerverilog) {
        vqscilexerverilog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerVerilog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerVerilog_SuperDisconnectNotify(QsciLexerVerilog* self, const QMetaMethod* signal) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self)) {
        vqscilexerverilog->QsciLexerVerilog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerVerilog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerVerilog_OnDisconnectNotify(QsciLexerVerilog* self, intptr_t slot) {
    if (auto* vqscilexerverilog = dynamic_cast<VirtualQsciLexerVerilog*>(self))
        vqscilexerverilog->qscilexerverilog_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerVerilog::QsciLexerVerilog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerVerilog_TextAsBytes(const QsciLexerVerilog* self, const libqt_string text) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexerverilog->VirtualQsciLexerVerilog::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerVerilog::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerVerilog_BytesAsText(const QsciLexerVerilog* self, const char* bytes, int size) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        auto _ret = vqscilexerverilog->VirtualQsciLexerVerilog::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerVerilog::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerVerilog_Sender(const QsciLexerVerilog* self) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        return vqscilexerverilog->VirtualQsciLexerVerilog::sender();
    } else
        qFatal("Error: Protected method QsciLexerVerilog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerVerilog_SenderSignalIndex(const QsciLexerVerilog* self) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        return vqscilexerverilog->VirtualQsciLexerVerilog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerVerilog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerVerilog_Receivers(const QsciLexerVerilog* self, const char* signal) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        return vqscilexerverilog->VirtualQsciLexerVerilog::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerVerilog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerVerilog_IsSignalConnected(const QsciLexerVerilog* self, const QMetaMethod* signal) {
    if (auto* vqscilexerverilog = const_cast<VirtualQsciLexerVerilog*>(dynamic_cast<const VirtualQsciLexerVerilog*>(self))) {
        return vqscilexerverilog->VirtualQsciLexerVerilog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerVerilog::isSignalConnected called without a directly constructed type");
}

void QsciLexerVerilog_Delete(QsciLexerVerilog* self) {
    delete self;
}
