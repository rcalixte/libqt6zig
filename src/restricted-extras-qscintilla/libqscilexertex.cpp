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
#include <qscilexertex.h>
#include "libqscilexertex.h"
#include "libqscilexertex.hxx"

QsciLexerTeX* QsciLexerTeX_new() {
    return new VirtualQsciLexerTeX();
}

QsciLexerTeX* QsciLexerTeX_new2(QObject* parent) {
    return new VirtualQsciLexerTeX(parent);
}

QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciLexerTeX_Metacall(QsciLexerTeX* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciLexerTeX_Tr(const char* s) {
    auto _ret = QsciLexerTeX::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

const char* QsciLexerTeX_Language(const QsciLexerTeX* self) {
    return (const char*)self->language();
}

const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self) {
    return (const char*)self->lexer();
}

const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self) {
    return (const char*)self->wordCharacters();
}

QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set) {
    return (const char*)self->keywords(static_cast<int>(set));
}

libqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style) {
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

void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self) {
    self->refreshProperties();
}

void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold) {
    self->setFoldComments(fold);
}

bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self) {
    return self->foldComments();
}

void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold) {
    self->setFoldCompact(fold);
}

bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self) {
    return self->foldCompact();
}

void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable) {
    self->setProcessComments(enable);
}

bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self) {
    return self->processComments();
}

void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable) {
    self->setProcessIf(enable);
}

bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self) {
    return self->processIf();
}

libqt_string QsciLexerTeX_Tr2(const char* s, const char* c) {
    auto _ret = QsciLexerTeX::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciLexerTeX::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciLexerTeX_SuperMetaObject(const QsciLexerTeX* self) {
    return (QMetaObject*)self->QsciLexerTeX::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnMetaObject(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_metaobject_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciLexerTeX_SuperMetacast(QsciLexerTeX* self, const char* param1) {
    return self->QsciLexerTeX::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnMetacast(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_metacast_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciLexerTeX_SuperMetacall(QsciLexerTeX* self, int param1, int param2, void** param3) {
    return self->QsciLexerTeX::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnMetacall(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_metacall_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_LexerId(const QsciLexerTeX* self) {
    return self->lexerId();
}

// Base class handler implementation
int QsciLexerTeX_SuperLexerId(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::lexerId();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnLexerId(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_lexerid_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_LexerId_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTeX_AutoCompletionFillups(const QsciLexerTeX* self) {
    return (const char*)self->autoCompletionFillups();
}

// Base class handler implementation
const char* QsciLexerTeX_SuperAutoCompletionFillups(const QsciLexerTeX* self) {
    return (const char*)self->QsciLexerTeX::autoCompletionFillups();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnAutoCompletionFillups(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_autocompletionfillups_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_AutoCompletionFillups_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QsciLexerTeX_AutoCompletionWordSeparators(const QsciLexerTeX* self) {
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
libqt_list /* of libqt_string */ QsciLexerTeX_SuperAutoCompletionWordSeparators(const QsciLexerTeX* self) {
    QList<QString> _ret = self->QsciLexerTeX::autoCompletionWordSeparators();
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
void QsciLexerTeX_OnAutoCompletionWordSeparators(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_autocompletionwordseparators_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_AutoCompletionWordSeparators_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockEnd(const QsciLexerTeX* self, int* style) {
    return (const char*)self->blockEnd(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTeX_SuperBlockEnd(const QsciLexerTeX* self, int* style) {
    return (const char*)self->QsciLexerTeX::blockEnd(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockEnd(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_blockend_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockEnd_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_BlockLookback(const QsciLexerTeX* self) {
    return self->blockLookback();
}

// Base class handler implementation
int QsciLexerTeX_SuperBlockLookback(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::blockLookback();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockLookback(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_blocklookback_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockLookback_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockStart(const QsciLexerTeX* self, int* style) {
    return (const char*)self->blockStart(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTeX_SuperBlockStart(const QsciLexerTeX* self, int* style) {
    return (const char*)self->QsciLexerTeX::blockStart(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockStart(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_blockstart_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockStart_Callback>(slot);
}

// Derived class handler implementation
const char* QsciLexerTeX_BlockStartKeyword(const QsciLexerTeX* self, int* style) {
    return (const char*)self->blockStartKeyword(static_cast<int*>(style));
}

// Base class handler implementation
const char* QsciLexerTeX_SuperBlockStartKeyword(const QsciLexerTeX* self, int* style) {
    return (const char*)self->QsciLexerTeX::blockStartKeyword(static_cast<int*>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBlockStartKeyword(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_blockstartkeyword_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BlockStartKeyword_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_BraceStyle(const QsciLexerTeX* self) {
    return self->braceStyle();
}

// Base class handler implementation
int QsciLexerTeX_SuperBraceStyle(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::braceStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnBraceStyle(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_bracestyle_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_BraceStyle_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_CaseSensitive(const QsciLexerTeX* self) {
    return self->caseSensitive();
}

// Base class handler implementation
bool QsciLexerTeX_SuperCaseSensitive(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::caseSensitive();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnCaseSensitive(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_casesensitive_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_CaseSensitive_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTeX_Color(const QsciLexerTeX* self, int style) {
    return new QColor(self->color(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTeX_SuperColor(const QsciLexerTeX* self, int style) {
    return new QColor(self->QsciLexerTeX::color(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnColor(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_color_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Color_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_EolFill(const QsciLexerTeX* self, int style) {
    return self->eolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerTeX_SuperEolFill(const QsciLexerTeX* self, int style) {
    return self->QsciLexerTeX::eolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEolFill(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_eolfill_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_EolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTeX_Font(const QsciLexerTeX* self, int style) {
    return new QFont(self->font(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTeX_SuperFont(const QsciLexerTeX* self, int style) {
    return new QFont(self->QsciLexerTeX::font(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnFont(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_font_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Font_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_IndentationGuideView(const QsciLexerTeX* self) {
    return self->indentationGuideView();
}

// Base class handler implementation
int QsciLexerTeX_SuperIndentationGuideView(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::indentationGuideView();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnIndentationGuideView(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_indentationguideview_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_IndentationGuideView_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_DefaultStyle(const QsciLexerTeX* self) {
    return self->defaultStyle();
}

// Base class handler implementation
int QsciLexerTeX_SuperDefaultStyle(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::defaultStyle();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultStyle(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_defaultstyle_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultStyle_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTeX_Paper(const QsciLexerTeX* self, int style) {
    return new QColor(self->paper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTeX_SuperPaper(const QsciLexerTeX* self, int style) {
    return new QColor(self->QsciLexerTeX::paper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnPaper(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_paper_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Paper_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTeX_DefaultColor2(const QsciLexerTeX* self, int style) {
    return new QColor(self->defaultColor(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTeX_SuperDefaultColor2(const QsciLexerTeX* self, int style) {
    return new QColor(self->QsciLexerTeX::defaultColor(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultColor2(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_defaultcolor2_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultColor2_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_DefaultEolFill(const QsciLexerTeX* self, int style) {
    return self->defaultEolFill(static_cast<int>(style));
}

// Base class handler implementation
bool QsciLexerTeX_SuperDefaultEolFill(const QsciLexerTeX* self, int style) {
    return self->QsciLexerTeX::defaultEolFill(static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultEolFill(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_defaulteolfill_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultEolFill_Callback>(slot);
}

// Derived class handler implementation
QFont* QsciLexerTeX_DefaultFont2(const QsciLexerTeX* self, int style) {
    return new QFont(self->defaultFont(static_cast<int>(style)));
}

// Base class handler implementation
QFont* QsciLexerTeX_SuperDefaultFont2(const QsciLexerTeX* self, int style) {
    return new QFont(self->QsciLexerTeX::defaultFont(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultFont2(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_defaultfont2_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultFont2_Callback>(slot);
}

// Derived class handler implementation
QColor* QsciLexerTeX_DefaultPaper2(const QsciLexerTeX* self, int style) {
    return new QColor(self->defaultPaper(static_cast<int>(style)));
}

// Base class handler implementation
QColor* QsciLexerTeX_SuperDefaultPaper2(const QsciLexerTeX* self, int style) {
    return new QColor(self->QsciLexerTeX::defaultPaper(static_cast<int>(style)));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDefaultPaper2(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_defaultpaper2_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DefaultPaper2_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetEditor(QsciLexerTeX* self, QsciScintilla* editor) {
    self->setEditor(editor);
}

// Base class handler implementation
void QsciLexerTeX_SuperSetEditor(QsciLexerTeX* self, QsciScintilla* editor) {
    self->QsciLexerTeX::setEditor(editor);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetEditor(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_seteditor_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetEditor_Callback>(slot);
}

// Derived class handler implementation
int QsciLexerTeX_StyleBitsNeeded(const QsciLexerTeX* self) {
    return self->styleBitsNeeded();
}

// Base class handler implementation
int QsciLexerTeX_SuperStyleBitsNeeded(const QsciLexerTeX* self) {
    return self->QsciLexerTeX::styleBitsNeeded();
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnStyleBitsNeeded(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_stylebitsneeded_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_StyleBitsNeeded_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle) {
    self->setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Base class handler implementation
void QsciLexerTeX_SuperSetAutoIndentStyle(QsciLexerTeX* self, int autoindentstyle) {
    self->QsciLexerTeX::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetAutoIndentStyle(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_setautoindentstyle_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetAutoIndentStyle_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetColor(QsciLexerTeX* self, const QColor* c, int style) {
    self->setColor(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTeX_SuperSetColor(QsciLexerTeX* self, const QColor* c, int style) {
    self->QsciLexerTeX::setColor(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetColor(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_setcolor_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetColor_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetEolFill(QsciLexerTeX* self, bool eoffill, int style) {
    self->setEolFill(eoffill, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTeX_SuperSetEolFill(QsciLexerTeX* self, bool eoffill, int style) {
    self->QsciLexerTeX::setEolFill(eoffill, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetEolFill(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_seteolfill_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetEolFill_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetFont(QsciLexerTeX* self, const QFont* f, int style) {
    self->setFont(*f, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTeX_SuperSetFont(QsciLexerTeX* self, const QFont* f, int style) {
    self->QsciLexerTeX::setFont(*f, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetFont(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_setfont_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetFont_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_SetPaper(QsciLexerTeX* self, const QColor* c, int style) {
    self->setPaper(*c, static_cast<int>(style));
}

// Base class handler implementation
void QsciLexerTeX_SuperSetPaper(QsciLexerTeX* self, const QColor* c, int style) {
    self->QsciLexerTeX::setPaper(*c, static_cast<int>(style));
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnSetPaper(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_setpaper_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_SetPaper_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_ReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        return vqscilexertex->readProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::readProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTeX_SuperReadProperties(QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        return vqscilexertex->QsciLexerTeX::readProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::readProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnReadProperties(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_readproperties_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ReadProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_WriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self));
    if (vqscilexertex) {
        return vqscilexertex->writeProperties(*qs, prefix_QString);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::writeProperties called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciLexerTeX_SuperWriteProperties(const QsciLexerTeX* self, QSettings* qs, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        return vqscilexertex->QsciLexerTeX::writeProperties(*qs, prefix_QString);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::writeProperties called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnWriteProperties(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self)))
        vqscilexertex->qscilexertex_writeproperties_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_WriteProperties_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_Event(QsciLexerTeX* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciLexerTeX_SuperEvent(QsciLexerTeX* self, QEvent* event) {
    return self->QsciLexerTeX::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEvent(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_event_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciLexerTeX_EventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciLexerTeX_SuperEventFilter(QsciLexerTeX* self, QObject* watched, QEvent* event) {
    return self->QsciLexerTeX::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnEventFilter(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_eventfilter_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_TimerEvent(QsciLexerTeX* self, QTimerEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        vqscilexertex->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTeX_SuperTimerEvent(QsciLexerTeX* self, QTimerEvent* event) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        vqscilexertex->QsciLexerTeX::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnTimerEvent(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_timerevent_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_ChildEvent(QsciLexerTeX* self, QChildEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        vqscilexertex->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTeX_SuperChildEvent(QsciLexerTeX* self, QChildEvent* event) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        vqscilexertex->QsciLexerTeX::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnChildEvent(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_childevent_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_CustomEvent(QsciLexerTeX* self, QEvent* event) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        vqscilexertex->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTeX_SuperCustomEvent(QsciLexerTeX* self, QEvent* event) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        vqscilexertex->QsciLexerTeX::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnCustomEvent(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_customevent_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_ConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        vqscilexertex->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTeX_SuperConnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        vqscilexertex->QsciLexerTeX::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnConnectNotify(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_connectnotify_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciLexerTeX_DisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self);
    if (vqscilexertex) {
        vqscilexertex->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciLexerTeX::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciLexerTeX_SuperDisconnectNotify(QsciLexerTeX* self, const QMetaMethod* signal) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self)) {
        vqscilexertex->QsciLexerTeX::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciLexerTeX::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciLexerTeX_OnDisconnectNotify(QsciLexerTeX* self, intptr_t slot) {
    if (auto* vqscilexertex = dynamic_cast<VirtualQsciLexerTeX*>(self))
        vqscilexertex->qscilexertex_disconnectnotify_callback = reinterpret_cast<VirtualQsciLexerTeX::QsciLexerTeX_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_string QsciLexerTeX_TextAsBytes(const QsciLexerTeX* self, const libqt_string text) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqscilexertex->VirtualQsciLexerTeX::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTeX::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciLexerTeX_BytesAsText(const QsciLexerTeX* self, const char* bytes, int size) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        auto _ret = vqscilexertex->VirtualQsciLexerTeX::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciLexerTeX::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciLexerTeX_Sender(const QsciLexerTeX* self) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        return vqscilexertex->VirtualQsciLexerTeX::sender();
    } else
        qFatal("Error: Protected method QsciLexerTeX::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTeX_SenderSignalIndex(const QsciLexerTeX* self) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        return vqscilexertex->VirtualQsciLexerTeX::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciLexerTeX::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciLexerTeX_Receivers(const QsciLexerTeX* self, const char* signal) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        return vqscilexertex->VirtualQsciLexerTeX::receivers(signal);
    } else
        qFatal("Error: Protected method QsciLexerTeX::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciLexerTeX_IsSignalConnected(const QsciLexerTeX* self, const QMetaMethod* signal) {
    if (auto* vqscilexertex = const_cast<VirtualQsciLexerTeX*>(dynamic_cast<const VirtualQsciLexerTeX*>(self))) {
        return vqscilexertex->VirtualQsciLexerTeX::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciLexerTeX::isSignalConnected called without a directly constructed type");
}

void QsciLexerTeX_Delete(QsciLexerTeX* self) {
    delete self;
}
